# 1 "openbsd3/net/pf.c"
# 1 "/home/cmcc/omnet_workspace/inet/3rdparty/nsc-0.5.2//"
# 1 "<built-in>"
# 1 "<command-line>"
# 1 "openbsd3/net/pf.c"
# 38 "openbsd3/net/pf.c"
# 1 "openbsd3/openbsd/usr/src/sys/arch/i386/compile/SAMSKERNEL/bpfilter.h" 1
# 39 "openbsd3/net/pf.c" 2
# 1 "openbsd3/openbsd/usr/src/sys/arch/i386/compile/SAMSKERNEL/pflog.h" 1
# 40 "openbsd3/net/pf.c" 2
# 1 "openbsd3/openbsd/usr/src/sys/arch/i386/compile/SAMSKERNEL/pfsync.h" 1
# 41 "openbsd3/net/pf.c" 2

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
# 43 "openbsd3/net/pf.c" 2
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
# 44 "openbsd3/net/pf.c" 2
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
# 45 "openbsd3/net/pf.c" 2
# 1 "openbsd3/sys/filio.h" 1
# 43 "openbsd3/sys/filio.h"
# 1 "openbsd3/sys/ioccom.h" 1
# 44 "openbsd3/sys/filio.h" 2
# 46 "openbsd3/net/pf.c" 2
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
# 47 "openbsd3/net/pf.c" 2
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
# 48 "openbsd3/net/pf.c" 2
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
# 49 "openbsd3/net/pf.c" 2



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
# 53 "openbsd3/net/pf.c" 2
# 1 "openbsd3/net/if_types.h" 1
# 54 "openbsd3/net/pf.c" 2
# 1 "openbsd3/net/bpf.h" 1
# 46 "openbsd3/net/bpf.h"
typedef int32_t bpf_int32;
typedef u_int32_t bpf_u_int32;
# 62 "openbsd3/net/bpf.h"
struct bpf_program {
 u_int bf_len;
 struct bpf_insn *bf_insns;
};




struct bpf_stat {
 u_int bs_recv;
 u_int bs_drop;
};
# 86 "openbsd3/net/bpf.h"
struct bpf_version {
 u_short bv_major;
 u_short bv_minor;
};
# 117 "openbsd3/net/bpf.h"
struct bpf_timeval {
 u_int32_t tv_sec;
 u_int32_t tv_usec;
};




struct bpf_hdr {
 struct bpf_timeval bh_tstamp;
 u_int32_t bh_caplen;
 u_int32_t bh_datalen;
 u_int16_t bh_hdrlen;

};
# 234 "openbsd3/net/bpf.h"
struct bpf_insn {
 u_int16_t code;
 u_char jt;
 u_char jf;
 int32_t k;
};
# 248 "openbsd3/net/bpf.h"
int bpf_validate(struct bpf_insn *, int);
void bpf_tap(caddr_t, u_char *, u_int);
void bpf_mtap(caddr_t, struct mbuf *);
void bpfattach(caddr_t *, struct ifnet *, u_int, u_int);
void bpfdetach(struct ifnet *);
void bpfilterattach(int);
u_int bpf_filter(struct bpf_insn *, u_char *, u_int, u_int);







typedef  int  _GLOBAL_103_T; extern  _GLOBAL_103_T  global_ticks[NUM_STACKS];   
# 55 "openbsd3/net/pf.c" 2
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
typedef  struct radix_mask { short  rm_b ;  char  rm_unused ;   u_char  rm_flags ;   struct radix_mask   * rm_mklist  ;   union { caddr_t  rmu_mask ;  struct radix_node   * rmu_leaf  ;   }   rm_rmu ;   int  rm_refs ;   }   _GLOBAL_104_T; extern  _GLOBAL_104_T  * global_rn_mkfreelist[NUM_STACKS];    
  
  
  
   
  
   
    
  
  
 
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
typedef  struct route_cb   _GLOBAL_105_T; extern  _GLOBAL_105_T  global_route_cb[NUM_STACKS];    
typedef  struct rtstat   _GLOBAL_106_T; extern  _GLOBAL_106_T  global_rtstat[NUM_STACKS];    
typedef  struct radix_node_head   _GLOBAL_107_T; extern  _GLOBAL_107_T  * _GLOBAL_0_rt_tables_I [ ]  ; extern  _GLOBAL_107_T  * _GLOBAL_1_rt_tables_I [ ]  ; extern  _GLOBAL_107_T  * _GLOBAL_2_rt_tables_I [ ]  ; extern  _GLOBAL_107_T  * _GLOBAL_3_rt_tables_I [ ]  ; extern  _GLOBAL_107_T  * _GLOBAL_4_rt_tables_I [ ]  ; extern  _GLOBAL_107_T  * _GLOBAL_5_rt_tables_I [ ]  ; extern  _GLOBAL_107_T  * _GLOBAL_6_rt_tables_I [ ]  ; extern  _GLOBAL_107_T  * _GLOBAL_7_rt_tables_I [ ]  ; extern  _GLOBAL_107_T  * _GLOBAL_8_rt_tables_I [ ]  ; extern  _GLOBAL_107_T  * _GLOBAL_9_rt_tables_I [ ]  ; extern  _GLOBAL_107_T  * _GLOBAL_10_rt_tables_I [ ]  ; extern  _GLOBAL_107_T  * _GLOBAL_11_rt_tables_I [ ]  ; extern  _GLOBAL_107_T  * _GLOBAL_12_rt_tables_I [ ]  ; extern  _GLOBAL_107_T  * _GLOBAL_13_rt_tables_I [ ]  ; extern  _GLOBAL_107_T  * _GLOBAL_14_rt_tables_I [ ]  ; extern  _GLOBAL_107_T  * _GLOBAL_15_rt_tables_I [ ]  ; extern  _GLOBAL_107_T  * _GLOBAL_16_rt_tables_I [ ]  ; extern  _GLOBAL_107_T  * _GLOBAL_17_rt_tables_I [ ]  ; extern  _GLOBAL_107_T  * _GLOBAL_18_rt_tables_I [ ]  ; extern  _GLOBAL_107_T  * _GLOBAL_19_rt_tables_I [ ]  ; extern  _GLOBAL_107_T  * _GLOBAL_20_rt_tables_I [ ]  ; extern  _GLOBAL_107_T  * _GLOBAL_21_rt_tables_I [ ]  ; extern  _GLOBAL_107_T  * _GLOBAL_22_rt_tables_I [ ]  ; extern  _GLOBAL_107_T  * _GLOBAL_23_rt_tables_I [ ]  ; extern  _GLOBAL_107_T  * _GLOBAL_24_rt_tables_I [ ]  ; extern  _GLOBAL_107_T  * _GLOBAL_25_rt_tables_I [ ]  ; extern  _GLOBAL_107_T  * _GLOBAL_26_rt_tables_I [ ]  ; extern  _GLOBAL_107_T  * _GLOBAL_27_rt_tables_I [ ]  ; extern  _GLOBAL_107_T  * _GLOBAL_28_rt_tables_I [ ]  ; extern  _GLOBAL_107_T  * _GLOBAL_29_rt_tables_I [ ]  ; extern  _GLOBAL_107_T  * _GLOBAL_30_rt_tables_I [ ]  ; extern  _GLOBAL_107_T  * _GLOBAL_31_rt_tables_I [ ]  ; extern  _GLOBAL_107_T  * _GLOBAL_32_rt_tables_I [ ]  ; extern  _GLOBAL_107_T  * _GLOBAL_33_rt_tables_I [ ]  ; extern  _GLOBAL_107_T  * _GLOBAL_34_rt_tables_I [ ]  ; extern  _GLOBAL_107_T  * _GLOBAL_35_rt_tables_I [ ]  ; extern  _GLOBAL_107_T  * _GLOBAL_36_rt_tables_I [ ]  ; extern  _GLOBAL_107_T  * _GLOBAL_37_rt_tables_I [ ]  ; extern  _GLOBAL_107_T  * _GLOBAL_38_rt_tables_I [ ]  ; extern  _GLOBAL_107_T  * _GLOBAL_39_rt_tables_I [ ]  ; extern  _GLOBAL_107_T  * _GLOBAL_40_rt_tables_I [ ]  ; extern  _GLOBAL_107_T  * _GLOBAL_41_rt_tables_I [ ]  ; extern  _GLOBAL_107_T  * _GLOBAL_42_rt_tables_I [ ]  ; extern  _GLOBAL_107_T  * _GLOBAL_43_rt_tables_I [ ]  ; extern  _GLOBAL_107_T  * _GLOBAL_44_rt_tables_I [ ]  ; extern  _GLOBAL_107_T  * _GLOBAL_45_rt_tables_I [ ]  ; extern  _GLOBAL_107_T  * _GLOBAL_46_rt_tables_I [ ]  ; extern  _GLOBAL_107_T  * _GLOBAL_47_rt_tables_I [ ]  ; extern  _GLOBAL_107_T  * _GLOBAL_48_rt_tables_I [ ]  ; extern  _GLOBAL_107_T  * _GLOBAL_49_rt_tables_I [ ]  ; static __attribute__ ((unused)) __typeof__(_GLOBAL_0_rt_tables_I) *_GLOBAL_rt_tables_23_A[NUM_STACKS];   

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
# 56 "openbsd3/net/pf.c" 2

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
# 58 "openbsd3/net/pf.c" 2
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

typedef  struct icmp6stat   _GLOBAL_123_T; extern  _GLOBAL_123_T  _GLOBAL_0_icmp6stat_I; extern  _GLOBAL_123_T  _GLOBAL_1_icmp6stat_I; extern  _GLOBAL_123_T  _GLOBAL_2_icmp6stat_I; extern  _GLOBAL_123_T  _GLOBAL_3_icmp6stat_I; extern  _GLOBAL_123_T  _GLOBAL_4_icmp6stat_I; extern  _GLOBAL_123_T  _GLOBAL_5_icmp6stat_I; extern  _GLOBAL_123_T  _GLOBAL_6_icmp6stat_I; extern  _GLOBAL_123_T  _GLOBAL_7_icmp6stat_I; extern  _GLOBAL_123_T  _GLOBAL_8_icmp6stat_I; extern  _GLOBAL_123_T  _GLOBAL_9_icmp6stat_I; extern  _GLOBAL_123_T  _GLOBAL_10_icmp6stat_I; extern  _GLOBAL_123_T  _GLOBAL_11_icmp6stat_I; extern  _GLOBAL_123_T  _GLOBAL_12_icmp6stat_I; extern  _GLOBAL_123_T  _GLOBAL_13_icmp6stat_I; extern  _GLOBAL_123_T  _GLOBAL_14_icmp6stat_I; extern  _GLOBAL_123_T  _GLOBAL_15_icmp6stat_I; extern  _GLOBAL_123_T  _GLOBAL_16_icmp6stat_I; extern  _GLOBAL_123_T  _GLOBAL_17_icmp6stat_I; extern  _GLOBAL_123_T  _GLOBAL_18_icmp6stat_I; extern  _GLOBAL_123_T  _GLOBAL_19_icmp6stat_I; extern  _GLOBAL_123_T  _GLOBAL_20_icmp6stat_I; extern  _GLOBAL_123_T  _GLOBAL_21_icmp6stat_I; extern  _GLOBAL_123_T  _GLOBAL_22_icmp6stat_I; extern  _GLOBAL_123_T  _GLOBAL_23_icmp6stat_I; extern  _GLOBAL_123_T  _GLOBAL_24_icmp6stat_I; extern  _GLOBAL_123_T  _GLOBAL_25_icmp6stat_I; extern  _GLOBAL_123_T  _GLOBAL_26_icmp6stat_I; extern  _GLOBAL_123_T  _GLOBAL_27_icmp6stat_I; extern  _GLOBAL_123_T  _GLOBAL_28_icmp6stat_I; extern  _GLOBAL_123_T  _GLOBAL_29_icmp6stat_I; extern  _GLOBAL_123_T  _GLOBAL_30_icmp6stat_I; extern  _GLOBAL_123_T  _GLOBAL_31_icmp6stat_I; extern  _GLOBAL_123_T  _GLOBAL_32_icmp6stat_I; extern  _GLOBAL_123_T  _GLOBAL_33_icmp6stat_I; extern  _GLOBAL_123_T  _GLOBAL_34_icmp6stat_I; extern  _GLOBAL_123_T  _GLOBAL_35_icmp6stat_I; extern  _GLOBAL_123_T  _GLOBAL_36_icmp6stat_I; extern  _GLOBAL_123_T  _GLOBAL_37_icmp6stat_I; extern  _GLOBAL_123_T  _GLOBAL_38_icmp6stat_I; extern  _GLOBAL_123_T  _GLOBAL_39_icmp6stat_I; extern  _GLOBAL_123_T  _GLOBAL_40_icmp6stat_I; extern  _GLOBAL_123_T  _GLOBAL_41_icmp6stat_I; extern  _GLOBAL_123_T  _GLOBAL_42_icmp6stat_I; extern  _GLOBAL_123_T  _GLOBAL_43_icmp6stat_I; extern  _GLOBAL_123_T  _GLOBAL_44_icmp6stat_I; extern  _GLOBAL_123_T  _GLOBAL_45_icmp6stat_I; extern  _GLOBAL_123_T  _GLOBAL_46_icmp6stat_I; extern  _GLOBAL_123_T  _GLOBAL_47_icmp6stat_I; extern  _GLOBAL_123_T  _GLOBAL_48_icmp6stat_I; extern  _GLOBAL_123_T  _GLOBAL_49_icmp6stat_I; static __attribute__ ((unused)) __typeof__(_GLOBAL_0_icmp6stat_I) *_GLOBAL_icmp6stat_25_A[NUM_STACKS] = { &_GLOBAL_0_icmp6stat_I, &_GLOBAL_1_icmp6stat_I, &_GLOBAL_2_icmp6stat_I, &_GLOBAL_3_icmp6stat_I, &_GLOBAL_4_icmp6stat_I, &_GLOBAL_5_icmp6stat_I, &_GLOBAL_6_icmp6stat_I, &_GLOBAL_7_icmp6stat_I, &_GLOBAL_8_icmp6stat_I, &_GLOBAL_9_icmp6stat_I, &_GLOBAL_10_icmp6stat_I, &_GLOBAL_11_icmp6stat_I, &_GLOBAL_12_icmp6stat_I, &_GLOBAL_13_icmp6stat_I, &_GLOBAL_14_icmp6stat_I, &_GLOBAL_15_icmp6stat_I, &_GLOBAL_16_icmp6stat_I, &_GLOBAL_17_icmp6stat_I, &_GLOBAL_18_icmp6stat_I, &_GLOBAL_19_icmp6stat_I, &_GLOBAL_20_icmp6stat_I, &_GLOBAL_21_icmp6stat_I, &_GLOBAL_22_icmp6stat_I, &_GLOBAL_23_icmp6stat_I, &_GLOBAL_24_icmp6stat_I, &_GLOBAL_25_icmp6stat_I, &_GLOBAL_26_icmp6stat_I, &_GLOBAL_27_icmp6stat_I, &_GLOBAL_28_icmp6stat_I, &_GLOBAL_29_icmp6stat_I, &_GLOBAL_30_icmp6stat_I, &_GLOBAL_31_icmp6stat_I, &_GLOBAL_32_icmp6stat_I, &_GLOBAL_33_icmp6stat_I, &_GLOBAL_34_icmp6stat_I, &_GLOBAL_35_icmp6stat_I, &_GLOBAL_36_icmp6stat_I, &_GLOBAL_37_icmp6stat_I, &_GLOBAL_38_icmp6stat_I, &_GLOBAL_39_icmp6stat_I, &_GLOBAL_40_icmp6stat_I, &_GLOBAL_41_icmp6stat_I, &_GLOBAL_42_icmp6stat_I, &_GLOBAL_43_icmp6stat_I, &_GLOBAL_44_icmp6stat_I, &_GLOBAL_45_icmp6stat_I, &_GLOBAL_46_icmp6stat_I, &_GLOBAL_47_icmp6stat_I, &_GLOBAL_48_icmp6stat_I, &_GLOBAL_49_icmp6stat_I, };   






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
# 59 "openbsd3/net/pf.c" 2
# 1 "openbsd3/netinet/in_systm.h" 1
# 51 "openbsd3/netinet/in_systm.h"
typedef u_int16_t n_short;
typedef u_int32_t n_long;

typedef u_int32_t n_time;


n_time iptime(void);
# 60 "openbsd3/net/pf.c" 2
# 1 "openbsd3/netinet/ip.h" 1
# 47 "openbsd3/netinet/ip.h"
struct ip {

 u_int8_t ip_hl:4,
    ip_v:4;





 u_int8_t ip_tos;
 u_int16_t ip_len;
 u_int16_t ip_id;
 u_int16_t ip_off;




 u_int8_t ip_ttl;
 u_int8_t ip_p;
 u_int16_t ip_sum;
 struct in_addr ip_src, ip_dst;
};
# 140 "openbsd3/netinet/ip.h"
struct ip_timestamp {
 u_int8_t ipt_code;
 u_int8_t ipt_len;
 u_int8_t ipt_ptr;

 u_int8_t ipt_flg:4,
   ipt_oflw:4;





 union ipt_timestamp {
   n_time ipt_time[1];
   struct ipt_ta {
   struct in_addr ipt_addr;
   n_time ipt_time;
   } ipt_ta[1];
 } ipt_timestamp;
};
# 190 "openbsd3/netinet/ip.h"
struct ippseudo {
 struct in_addr ippseudo_src;
 struct in_addr ippseudo_dst;
 u_int8_t ippseudo_pad;
 u_int8_t ippseudo_p;
 u_int16_t ippseudo_len;
};
# 61 "openbsd3/net/pf.c" 2
# 1 "openbsd3/netinet/ip_var.h" 1
# 43 "openbsd3/netinet/ip_var.h"
struct ipovly {
 u_int8_t ih_x1[9];
 u_int8_t ih_pr;
 u_int16_t ih_len;
 struct in_addr ih_src;
 struct in_addr ih_dst;
};
# 62 "openbsd3/netinet/ip_var.h"
struct ipqehead { struct ipqent *lh_first; };
struct ipqent {
 struct { struct ipqent *le_next; struct ipqent **le_prev; } ipqe_q;
 union {
  struct ip *_ip;
  struct tcphdr *_tcp;
 } _ipqe_u1;
 struct mbuf *ipqe_m;
 u_int8_t ipqe_mff;
};
# 81 "openbsd3/netinet/ip_var.h"
struct ipq {
 struct { struct ipq *le_next; struct ipq **le_prev; } ipq_q;
 u_int8_t ipq_ttl;
 u_int8_t ipq_p;
 u_int16_t ipq_id;
 struct ipqehead ipq_fragq;
 struct in_addr ipq_src, ipq_dst;
};
# 98 "openbsd3/netinet/ip_var.h"
struct ipoption {
 struct in_addr ipopt_dst;
 int8_t ipopt_list[40];
};





struct ip_moptions {
 struct ifnet *imo_multicast_ifp;
 u_int8_t imo_multicast_ttl;
 u_int8_t imo_multicast_loop;
 u_int16_t imo_num_memberships;
 struct in_multi *imo_membership[20];
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
 u_long ips_badfrags;
 u_long ips_rcvmemdrop;
 u_long ips_toolong;
 u_long ips_nogif;
 u_long ips_badaddr;
 u_long ips_inhwcsum;
 u_long ips_outhwcsum;
};
# 157 "openbsd3/netinet/ip_var.h"
typedef  struct ipstat   _GLOBAL_128_T; extern  _GLOBAL_128_T  global_ipstat[NUM_STACKS];    
typedef  struct ipqhead { struct ipq   * lh_first  ;  }   _GLOBAL_129_T; extern  _GLOBAL_129_T  global_ipq[NUM_STACKS];         
typedef  int  _GLOBAL_130_T; extern  _GLOBAL_130_T  global_ip_defttl[NUM_STACKS];   

typedef  int  _GLOBAL_131_T; extern  _GLOBAL_131_T  global_ip_mtudisc[NUM_STACKS];   
typedef  u_int  _GLOBAL_132_T; extern  _GLOBAL_132_T  global_ip_mtudisc_timeout[NUM_STACKS];   
typedef  struct rttimer_queue   _GLOBAL_133_T; extern  _GLOBAL_133_T  * global_ip_mtudisc_timeout_q[NUM_STACKS];    
typedef  struct pool   _GLOBAL_134_T; extern  _GLOBAL_134_T  global_ipqent_pool[NUM_STACKS];    

int ip_ctloutput(int, struct socket *, int, int, struct mbuf **);
int ip_dooptions(struct mbuf *);
void ip_drain(void);
void ip_flush(void);
void ip_forward(struct mbuf *, int);
int ip_fragment(struct mbuf *, struct ifnet *, u_long);
void ip_freef(struct ipq *);
void ip_freemoptions(struct ip_moptions *);
int ip_getmoptions(int, struct ip_moptions *, struct mbuf **);
void ip_init(void);
int ip_mforward(struct mbuf *, struct ifnet *);
int ip_optcopy(struct ip *, struct ip *);
int ip_output(struct mbuf *, ...);
int ip_pcbopts(struct mbuf **, struct mbuf *);
struct mbuf *
  ip_reass(struct ipqent *, struct ipq *);
struct in_ifaddr *
  in_iawithaddr(struct in_addr, struct mbuf *);
struct in_ifaddr *
  ip_rtaddr(struct in_addr);
u_int16_t
  ip_randomid(void);
int ip_setmoptions(int, struct ip_moptions **, struct mbuf *);
void ip_slowtimo(void);
struct mbuf *
  ip_srcroute(void);
void ip_stripoptions(struct mbuf *, struct mbuf *);
int ip_sysctl(int *, u_int, void *, size_t *, void *, size_t);
void ipintr(void);
void ipv4_input(struct mbuf *);
int rip_ctloutput(int, struct socket *, int, int, struct mbuf **);
void rip_init(void);
void rip_input(struct mbuf *, ...);
int rip_output(struct mbuf *, ...);
int rip_usrreq(struct socket *,
     int, struct mbuf *, struct mbuf *, struct mbuf *);
# 62 "openbsd3/net/pf.c" 2
# 1 "openbsd3/netinet/tcp.h" 1
# 38 "openbsd3/netinet/tcp.h"
typedef u_int32_t tcp_seq;





struct tcphdr {
 u_int16_t th_sport;
 u_int16_t th_dport;
 tcp_seq th_seq;
 tcp_seq th_ack;

 u_int8_t th_x2:4,
    th_off:4;





 u_int8_t th_flags;
# 66 "openbsd3/netinet/tcp.h"
 u_int16_t th_win;
 u_int16_t th_sum;
 u_int16_t th_urp;
};
# 63 "openbsd3/net/pf.c" 2
# 1 "openbsd3/netinet/tcp_seq.h" 1
# 63 "openbsd3/netinet/tcp_seq.h"
typedef  tcp_seq  _GLOBAL_135_T; extern  _GLOBAL_135_T  global_tcp_iss[NUM_STACKS];   
# 64 "openbsd3/net/pf.c" 2
# 1 "openbsd3/netinet/udp.h" 1
# 42 "openbsd3/netinet/udp.h"
struct udphdr {
 u_int16_t uh_sport;
 u_int16_t uh_dport;
 u_int16_t uh_ulen;
 u_int16_t uh_sum;
};
# 65 "openbsd3/net/pf.c" 2
# 1 "openbsd3/netinet/ip_icmp.h" 1
# 53 "openbsd3/netinet/ip_icmp.h"
struct icmp_ra_addr {
 n_long ira_addr;
 n_long ira_preference;
};




struct icmp {
 u_int8_t icmp_type;
 u_int8_t icmp_code;
 u_int16_t icmp_cksum;
 union {
  u_int8_t ih_pptr;
  struct in_addr ih_gwaddr;
  struct ih_idseq {
     n_short icd_id;
     n_short icd_seq;
  } ih_idseq;
  int32_t ih_void;


  struct ih_pmtu {
     n_short ipm_void;
     n_short ipm_nextmtu;
  } ih_pmtu;

  struct ih_rtradv {
   u_int8_t irt_num_addrs;
   u_int8_t irt_wpa;
   n_short irt_lifetime;
  } ih_rtradv;
 } icmp_hun;
# 96 "openbsd3/netinet/ip_icmp.h"
 union {
  struct id_ts {
     n_time its_otime;
     n_time its_rtime;
     n_time its_ttime;
  } id_ts;
  struct id_ip {
     struct ip idi_ip;

  } id_ip;
  u_int32_t id_mask;
  int8_t id_data[1];
 } icmp_dun;






};
# 208 "openbsd3/netinet/ip_icmp.h"
struct mbuf *
 icmp_do_error(struct mbuf *, int, int, n_long, struct ifnet *);
void icmp_error(struct mbuf *, int, int, n_long, struct ifnet *);
void icmp_input(struct mbuf *, ...);
void icmp_init(void);
void icmp_reflect(struct mbuf *);
void icmp_send(struct mbuf *, struct mbuf *);
int icmp_sysctl(int *, u_int, void *, size_t *, void *, size_t);
struct rtentry *
 icmp_mtudisc_clone(struct sockaddr *);
void icmp_mtudisc(struct icmp *);
# 66 "openbsd3/net/pf.c" 2
# 1 "openbsd3/netinet/in_pcb.h" 1
# 68 "openbsd3/netinet/in_pcb.h"
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
# 69 "openbsd3/netinet/in_pcb.h" 2
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







typedef  struct ip6stat   _GLOBAL_136_T; extern  _GLOBAL_136_T  global_ip6stat[NUM_STACKS];    
typedef  int  _GLOBAL_137_T; extern  _GLOBAL_137_T  global_ip6_defhlim[NUM_STACKS];   
typedef  int  _GLOBAL_138_T; extern  _GLOBAL_138_T  global_ip6_defmcasthlim[NUM_STACKS];   
typedef  int  _GLOBAL_139_T; extern  _GLOBAL_139_T  global_ip6_forwarding[NUM_STACKS];   
typedef  int  _GLOBAL_140_T; extern  _GLOBAL_140_T  global_ip6_sendredirect[NUM_STACKS];   
typedef  int  _GLOBAL_141_T; extern  _GLOBAL_141_T  global_ip6_forward_srcrt[NUM_STACKS];   
typedef  int  _GLOBAL_142_T; extern  _GLOBAL_142_T  global_ip6_use_deprecated[NUM_STACKS];   
typedef  int  _GLOBAL_143_T; extern  _GLOBAL_143_T  global_ip6_rr_prune[NUM_STACKS];   

typedef  const int   _GLOBAL_144_T; extern  _GLOBAL_144_T  global_ip6_v6only[NUM_STACKS];    

typedef  struct socket   _GLOBAL_145_T; extern  _GLOBAL_145_T  * global_ip6_mrouter[NUM_STACKS];    
typedef  int  _GLOBAL_146_T; extern  _GLOBAL_146_T  global_ip6_sendredirects[NUM_STACKS];   
typedef  int  _GLOBAL_147_T; extern  _GLOBAL_147_T  global_ip6_maxfragpackets[NUM_STACKS];   
typedef  int  _GLOBAL_148_T; extern  _GLOBAL_148_T  global_ip6_maxfrags[NUM_STACKS];   
typedef  int  _GLOBAL_149_T; extern  _GLOBAL_149_T  global_ip6_sourcecheck[NUM_STACKS];   
typedef  int  _GLOBAL_150_T; extern  _GLOBAL_150_T  global_ip6_sourcecheck_interval[NUM_STACKS];   
typedef  int  _GLOBAL_151_T; extern  _GLOBAL_151_T  global_ip6_accept_rtadv[NUM_STACKS];   
typedef  int  _GLOBAL_152_T; extern  _GLOBAL_152_T  global_ip6_keepfaith[NUM_STACKS];   
typedef  int  _GLOBAL_153_T; extern  _GLOBAL_153_T  global_ip6_log_interval[NUM_STACKS];   
typedef  time_t  _GLOBAL_154_T; extern  _GLOBAL_154_T  global_ip6_log_time[NUM_STACKS];   
typedef  int  _GLOBAL_155_T; extern  _GLOBAL_155_T  global_ip6_hdrnestlimit[NUM_STACKS];   
typedef  int  _GLOBAL_156_T; extern  _GLOBAL_156_T  global_ip6_dad_count[NUM_STACKS];   

typedef  u_int32_t  _GLOBAL_157_T; extern  _GLOBAL_157_T  global_ip6_flow_seq[NUM_STACKS];   
typedef  int  _GLOBAL_158_T; extern  _GLOBAL_158_T  global_ip6_auto_flowlabel[NUM_STACKS];   
typedef  int  _GLOBAL_159_T; extern  _GLOBAL_159_T  global_ip6_auto_linklocal[NUM_STACKS];   

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
# 70 "openbsd3/netinet/in_pcb.h" 2
# 1 "openbsd3/netinet/icmp6.h" 1
# 70 "openbsd3/netinet/icmp6.h"
struct icmp6_hdr {
 u_int8_t icmp6_type;
 u_int8_t icmp6_code;
 u_int16_t icmp6_cksum;
 union {
  u_int32_t icmp6_un_data32[1];
  u_int16_t icmp6_un_data16[2];
  u_int8_t icmp6_un_data8[4];
 } icmp6_dataun;
} __attribute__((__packed__)) ;
# 175 "openbsd3/netinet/icmp6.h"
struct mld_hdr {
 struct icmp6_hdr mld_icmp6_hdr;
 struct in6_addr mld_addr;
} __attribute__((__packed__)) ;
# 202 "openbsd3/netinet/icmp6.h"
struct nd_router_solicit {
 struct icmp6_hdr nd_rs_hdr;

} __attribute__((__packed__)) ;






struct nd_router_advert {
 struct icmp6_hdr nd_ra_hdr;
 u_int32_t nd_ra_reachable;
 u_int32_t nd_ra_retransmit;

} __attribute__((__packed__)) ;
# 228 "openbsd3/netinet/icmp6.h"
struct nd_neighbor_solicit {
 struct icmp6_hdr nd_ns_hdr;
 struct in6_addr nd_ns_target;

} __attribute__((__packed__)) ;






struct nd_neighbor_advert {
 struct icmp6_hdr nd_na_hdr;
 struct in6_addr nd_na_target;

} __attribute__((__packed__)) ;
# 261 "openbsd3/netinet/icmp6.h"
struct nd_redirect {
 struct icmp6_hdr nd_rd_hdr;
 struct in6_addr nd_rd_target;
 struct in6_addr nd_rd_dst;

} __attribute__((__packed__)) ;






struct nd_opt_hdr {
 u_int8_t nd_opt_type;
 u_int8_t nd_opt_len;

} __attribute__((__packed__)) ;







struct nd_opt_prefix_info {
 u_int8_t nd_opt_pi_type;
 u_int8_t nd_opt_pi_len;
 u_int8_t nd_opt_pi_prefix_len;
 u_int8_t nd_opt_pi_flags_reserved;
 u_int32_t nd_opt_pi_valid_time;
 u_int32_t nd_opt_pi_preferred_time;
 u_int32_t nd_opt_pi_reserved2;
 struct in6_addr nd_opt_pi_prefix;
} __attribute__((__packed__)) ;




struct nd_opt_rd_hdr {
 u_int8_t nd_opt_rh_type;
 u_int8_t nd_opt_rh_len;
 u_int16_t nd_opt_rh_reserved1;
 u_int32_t nd_opt_rh_reserved2;

} __attribute__((__packed__)) ;

struct nd_opt_mtu {
 u_int8_t nd_opt_mtu_type;
 u_int8_t nd_opt_mtu_len;
 u_int16_t nd_opt_mtu_reserved;
 u_int32_t nd_opt_mtu_mtu;
} __attribute__((__packed__)) ;





struct icmp6_namelookup {
 struct icmp6_hdr icmp6_nl_hdr;
 u_int8_t icmp6_nl_nonce[8];
 int32_t icmp6_nl_ttl;





} __attribute__((__packed__)) ;




struct icmp6_nodeinfo {
 struct icmp6_hdr icmp6_ni_hdr;
 u_int8_t icmp6_ni_nonce[8];

} __attribute__((__packed__)) ;
# 395 "openbsd3/netinet/icmp6.h"
struct ni_reply_fqdn {
 u_int32_t ni_fqdn_ttl;
 u_int8_t ni_fqdn_namelen;
 u_int8_t ni_fqdn_name[3];
} __attribute__((__packed__)) ;




struct icmp6_router_renum {
 struct icmp6_hdr rr_hdr;
 u_int8_t rr_segnum;
 u_int8_t rr_flags;
 u_int16_t rr_maxdelay;
 u_int32_t rr_reserved;
} __attribute__((__packed__)) ;
# 423 "openbsd3/netinet/icmp6.h"
struct rr_pco_match {
 u_int8_t rpm_code;
 u_int8_t rpm_len;
 u_int8_t rpm_ordinal;
 u_int8_t rpm_matchlen;
 u_int8_t rpm_minlen;
 u_int8_t rpm_maxlen;
 u_int16_t rpm_reserved;
 struct in6_addr rpm_prefix;
} __attribute__((__packed__)) ;






struct rr_pco_use {
 u_int8_t rpu_uselen;
 u_int8_t rpu_keeplen;
 u_int8_t rpu_ramask;
 u_int8_t rpu_raflags;
 u_int32_t rpu_vltime;
 u_int32_t rpu_pltime;
 u_int32_t rpu_flags;
 struct in6_addr rpu_prefix;
} __attribute__((__packed__)) ;
# 460 "openbsd3/netinet/icmp6.h"
struct rr_result {
 u_int16_t rrr_flags;
 u_int8_t rrr_ordinal;
 u_int8_t rrr_matchedlen;
 u_int32_t rrr_ifid;
 struct in6_addr rrr_prefix;
} __attribute__((__packed__)) ;
# 479 "openbsd3/netinet/icmp6.h"
struct icmp6_filter {
 u_int32_t icmp6_filt[8];
};
# 513 "openbsd3/netinet/icmp6.h"
struct icmp6errstat {
 u_quad_t icp6errs_dst_unreach_noroute;
 u_quad_t icp6errs_dst_unreach_admin;
 u_quad_t icp6errs_dst_unreach_beyondscope;
 u_quad_t icp6errs_dst_unreach_addr;
 u_quad_t icp6errs_dst_unreach_noport;
 u_quad_t icp6errs_packet_too_big;
 u_quad_t icp6errs_time_exceed_transit;
 u_quad_t icp6errs_time_exceed_reassembly;
 u_quad_t icp6errs_paramprob_header;
 u_quad_t icp6errs_paramprob_nextheader;
 u_quad_t icp6errs_paramprob_option;
 u_quad_t icp6errs_redirect;
 u_quad_t icp6errs_unknown;
};

struct icmp6stat {

 u_quad_t icp6s_error;
 u_quad_t icp6s_canterror;
 u_quad_t icp6s_toofreq;
 u_quad_t icp6s_outhist[256];

 u_quad_t icp6s_badcode;
 u_quad_t icp6s_tooshort;
 u_quad_t icp6s_checksum;
 u_quad_t icp6s_badlen;




 u_quad_t icp6s_reflect;
 u_quad_t icp6s_inhist[256];
 u_quad_t icp6s_nd_toomanyopt;
 struct icmp6errstat icp6s_outerrhist;
# 566 "openbsd3/netinet/icmp6.h"
 u_quad_t icp6s_pmtuchg;
 u_quad_t icp6s_nd_badopt;
 u_quad_t icp6s_badns;
 u_quad_t icp6s_badna;
 u_quad_t icp6s_badrs;
 u_quad_t icp6s_badra;
 u_quad_t icp6s_badredirect;
};
# 652 "openbsd3/netinet/icmp6.h"
struct rtentry;
struct rttimer;
struct in6_multi;

void icmp6_init(void);
void icmp6_paramerror(struct mbuf *, int);
void icmp6_error(struct mbuf *, int, int, int);
int icmp6_input(struct mbuf **, int *, int);
void icmp6_fasttimo(void);
void icmp6_reflect(struct mbuf *, size_t);
void icmp6_prepare(struct mbuf *);
void icmp6_redirect_input(struct mbuf *, int);
void icmp6_redirect_output(struct mbuf *, struct rtentry *);
int icmp6_sysctl(int *, u_int, void *, size_t *, void *, size_t);

struct ip6ctlparam;
void icmp6_mtudisc_update(struct ip6ctlparam *, int);
void icmp6_mtudisc_callback_register(void (*)(struct in6_addr *));
# 729 "openbsd3/netinet/icmp6.h"
typedef  int  _GLOBAL_160_T; extern  _GLOBAL_160_T  global_icmp6_rediraccept[NUM_STACKS];   
typedef  int  _GLOBAL_161_T; extern  _GLOBAL_161_T  global_icmp6_redirtimeout[NUM_STACKS];   
# 71 "openbsd3/netinet/in_pcb.h" 2
# 1 "openbsd3/netinet/ip_ipsp.h" 1
# 47 "openbsd3/netinet/ip_ipsp.h"
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
# 48 "openbsd3/netinet/ip_ipsp.h" 2


union sockaddr_union {
 struct sockaddr sa;
 struct sockaddr_in sin;
 struct sockaddr_in6 sin6;
};
# 104 "openbsd3/netinet/ip_ipsp.h"
struct sockaddr_encap {
 u_int8_t sen_len;
 u_int8_t sen_family;
 u_int16_t sen_type;
 union {
  struct {
   u_int8_t Direction;
   struct in_addr Src;
   struct in_addr Dst;
   u_int8_t Proto;
   u_int16_t Sport;
   u_int16_t Dport;
  } Sip4;

  struct {
   u_int8_t Direction;
   struct in6_addr Src;
   struct in6_addr Dst;
   u_int8_t Proto;
   u_int16_t Sport;
   u_int16_t Dport;
  } Sip6;

  struct ipsec_policy *PolicyHead;
 } Sen;
};
# 163 "openbsd3/netinet/ip_ipsp.h"
struct ipsec_ref {
 u_int16_t ref_type;
 int16_t ref_len;
 int ref_count;
 int ref_malloctype;
};

struct ipsec_acquire {
 union sockaddr_union ipa_addr;
 u_int32_t ipa_seq;
 struct sockaddr_encap ipa_info;
 struct sockaddr_encap ipa_mask;
 struct timeout ipa_timeout;
 struct ipsec_policy *ipa_policy;
 struct inpcb *ipa_pcb;
 struct { struct ipsec_acquire *tqe_next; struct ipsec_acquire **tqe_prev; } ipa_ipo_next;
 struct { struct ipsec_acquire *tqe_next; struct ipsec_acquire **tqe_prev; } ipa_next;
 struct { struct ipsec_acquire *tqe_next; struct ipsec_acquire **tqe_prev; } ipa_inp_next;
};

struct ipsec_policy {
 struct sockaddr_encap ipo_addr;
 struct sockaddr_encap ipo_mask;

 union sockaddr_union ipo_src;
 union sockaddr_union ipo_dst;
# 197 "openbsd3/netinet/ip_ipsp.h"
 u_int64_t ipo_last_searched;

 u_int8_t ipo_flags;
 u_int8_t ipo_type;
 u_int8_t ipo_sproto;

 int ipo_ref_count;

 struct tdb *ipo_tdb;

 struct ipsec_ref *ipo_srcid;
 struct ipsec_ref *ipo_dstid;
 struct ipsec_ref *ipo_local_cred;
 struct ipsec_ref *ipo_local_auth;

 struct ipo_acquires_head { struct ipsec_acquire *tqh_first; struct ipsec_acquire **tqh_last; } ipo_acquires;
 struct { struct ipsec_policy *tqe_next; struct ipsec_policy **tqe_prev; } ipo_tdb_next;
 struct { struct ipsec_policy *tqe_next; struct ipsec_policy **tqe_prev; } ipo_list;
};
# 261 "openbsd3/netinet/ip_ipsp.h"
struct route_enc {
 struct rtentry *re_rt;
 struct sockaddr_encap re_dst;
};

struct tdb {
# 275 "openbsd3/netinet/ip_ipsp.h"
 struct tdb *tdb_hnext;
 struct tdb *tdb_anext;
 struct tdb *tdb_snext;
 struct tdb *tdb_inext;
 struct tdb *tdb_onext;

 struct xformsw *tdb_xform;
 struct enc_xform *tdb_encalgxform;
 struct auth_hash *tdb_authalgxform;
 struct comp_algo *tdb_compalgxform;
# 305 "openbsd3/netinet/ip_ipsp.h"
 u_int32_t tdb_flags;

 struct timeout tdb_timer_tmo;
 struct timeout tdb_first_tmo;
 struct timeout tdb_stimer_tmo;
 struct timeout tdb_sfirst_tmo;

 u_int32_t tdb_seq;
 u_int32_t tdb_exp_allocations;
 u_int32_t tdb_soft_allocations;
 u_int32_t tdb_cur_allocations;

 u_int64_t tdb_exp_bytes;
 u_int64_t tdb_soft_bytes;
 u_int64_t tdb_cur_bytes;

 u_int64_t tdb_exp_timeout;
 u_int64_t tdb_soft_timeout;
 u_int64_t tdb_established;

 u_int64_t tdb_first_use;
 u_int64_t tdb_soft_first_use;
 u_int64_t tdb_exp_first_use;



 u_int64_t tdb_last_used;
 u_int64_t tdb_last_marked;

 u_int64_t tdb_cryptoid;

 u_int32_t tdb_spi;
 u_int16_t tdb_amxkeylen;
 u_int16_t tdb_emxkeylen;
 u_int16_t tdb_ivlen;
 u_int8_t tdb_sproto;
 u_int8_t tdb_wnd;
 u_int8_t tdb_satype;

 union sockaddr_union tdb_dst;
 union sockaddr_union tdb_src;
 union sockaddr_union tdb_proxy;

 u_int8_t *tdb_amxkey;
 u_int8_t *tdb_emxkey;

 u_int32_t tdb_rpl;
 u_int32_t tdb_bitmap;

 u_int32_t tdb_epoch;
 u_int8_t tdb_iv[4];

 struct ipsec_ref *tdb_local_cred;
 struct ipsec_ref *tdb_remote_cred;
 struct ipsec_ref *tdb_srcid;
 struct ipsec_ref *tdb_dstid;
 struct ipsec_ref *tdb_local_auth;
 struct ipsec_ref *tdb_remote_auth;

 u_int32_t tdb_mtu;
 u_int64_t tdb_mtutimeout;

 u_int16_t tdb_udpencap_port;

 struct sockaddr_encap tdb_filter;
 struct sockaddr_encap tdb_filtermask;

 struct tdb_inp_head_in { struct inpcb *tqh_first; struct inpcb **tqh_last; } tdb_inp_in;
 struct tdb_inp_head_out { struct inpcb *tqh_first; struct inpcb **tqh_last; } tdb_inp_out;
 struct tdb_policy_head { struct ipsec_policy *tqh_first; struct ipsec_policy **tqh_last; } tdb_policy_head;
};

struct tdb_ident {
 u_int32_t spi;
 union sockaddr_union dst;
 u_int8_t proto;
};

struct tdb_crypto {
 u_int32_t tc_spi;
 union sockaddr_union tc_dst;
 u_int8_t tc_proto;
 int tc_protoff;
 int tc_skip;
 caddr_t tc_ptr;
};

struct ipsecinit {
 u_int8_t *ii_enckey;
 u_int8_t *ii_authkey;
 u_int16_t ii_enckeylen;
 u_int16_t ii_authkeylen;
 u_int8_t ii_encalg;
 u_int8_t ii_authalg;
 u_int8_t ii_compalg;
};
# 418 "openbsd3/netinet/ip_ipsp.h"
static __inline u_int64_t
htonq(u_int64_t q)
{
 u_int32_t u, l;
 u = q >> 32;
 l = (u_int32_t) q;

 return __extension__({ u_int32_t __swap32_x = (u); __builtin_constant_p(u) ? __extension__({ u_int32_t __swap32gen_x = (__swap32_x); (u_int32_t)((__swap32gen_x & 0xff) << 24 | (__swap32gen_x & 0xff00) << 8 | (__swap32gen_x & 0xff0000) >> 8 | (__swap32gen_x & 0xff000000) >> 24); }) : ({ u_int32_t __swap32md_x = (__swap32_x); __asm ("bswap %1" : "+r" (__swap32md_x)); __swap32md_x; }); }) | ((u_int64_t)__extension__({ u_int32_t __swap32_x = (l); __builtin_constant_p(l) ? __extension__({ u_int32_t __swap32gen_x = (__swap32_x); (u_int32_t)((__swap32gen_x & 0xff) << 24 | (__swap32gen_x & 0xff00) << 8 | (__swap32gen_x & 0xff0000) >> 8 | (__swap32gen_x & 0xff000000) >> 24); }) : ({ u_int32_t __swap32md_x = (__swap32_x); __asm ("bswap %1" : "+r" (__swap32md_x)); __swap32md_x; }); }) << 32);
}
# 441 "openbsd3/netinet/ip_ipsp.h"
struct xformsw {
 u_short xf_type;
 u_short xf_flags;
 char *xf_name;
 int (*xf_attach)(void);
 int (*xf_init)(struct tdb *, struct xformsw *, struct ipsecinit *);
 int (*xf_zeroize)(struct tdb *);
 int (*xf_input)(struct mbuf *, struct tdb *, int, int);
 int (*xf_output)(struct mbuf *, struct tdb *, struct mbuf **,
     int, int);
};
# 461 "openbsd3/netinet/ip_ipsp.h"
typedef  int  _GLOBAL_162_T; extern  _GLOBAL_162_T  global_encdebug[NUM_STACKS];   
typedef  int  _GLOBAL_163_T; extern  _GLOBAL_163_T  global_ipsec_acl[NUM_STACKS];   
typedef  int  _GLOBAL_164_T; extern  _GLOBAL_164_T  global_ipsec_keep_invalid[NUM_STACKS];   
typedef  int  _GLOBAL_165_T; extern  _GLOBAL_165_T  global_ipsec_in_use[NUM_STACKS];   
typedef  u_int64_t  _GLOBAL_166_T; extern  _GLOBAL_166_T  global_ipsec_last_added[NUM_STACKS];   
typedef  int  _GLOBAL_167_T; extern  _GLOBAL_167_T  global_ipsec_require_pfs[NUM_STACKS];   
typedef  int  _GLOBAL_168_T; extern  _GLOBAL_168_T  global_ipsec_expire_acquire[NUM_STACKS];   

typedef  int  _GLOBAL_169_T; extern  _GLOBAL_169_T  global_ipsec_policy_pool_initialized[NUM_STACKS];   

typedef  int  _GLOBAL_170_T; extern  _GLOBAL_170_T  global_ipsec_soft_allocations[NUM_STACKS];   
typedef  int  _GLOBAL_171_T; extern  _GLOBAL_171_T  global_ipsec_exp_allocations[NUM_STACKS];   
typedef  int  _GLOBAL_172_T; extern  _GLOBAL_172_T  global_ipsec_soft_bytes[NUM_STACKS];   
typedef  int  _GLOBAL_173_T; extern  _GLOBAL_173_T  global_ipsec_exp_bytes[NUM_STACKS];   
typedef  int  _GLOBAL_174_T; extern  _GLOBAL_174_T  global_ipsec_soft_timeout[NUM_STACKS];   
typedef  int  _GLOBAL_175_T; extern  _GLOBAL_175_T  global_ipsec_exp_timeout[NUM_STACKS];   
typedef  int  _GLOBAL_176_T; extern  _GLOBAL_176_T  global_ipsec_soft_first_use[NUM_STACKS];   
typedef  int  _GLOBAL_177_T; extern  _GLOBAL_177_T  global_ipsec_exp_first_use[NUM_STACKS];   
typedef  char  _GLOBAL_178_T; extern  _GLOBAL_178_T  _GLOBAL_0_ipsec_def_enc_I [ ] ; extern  _GLOBAL_178_T  _GLOBAL_1_ipsec_def_enc_I [ ] ; extern  _GLOBAL_178_T  _GLOBAL_2_ipsec_def_enc_I [ ] ; extern  _GLOBAL_178_T  _GLOBAL_3_ipsec_def_enc_I [ ] ; extern  _GLOBAL_178_T  _GLOBAL_4_ipsec_def_enc_I [ ] ; extern  _GLOBAL_178_T  _GLOBAL_5_ipsec_def_enc_I [ ] ; extern  _GLOBAL_178_T  _GLOBAL_6_ipsec_def_enc_I [ ] ; extern  _GLOBAL_178_T  _GLOBAL_7_ipsec_def_enc_I [ ] ; extern  _GLOBAL_178_T  _GLOBAL_8_ipsec_def_enc_I [ ] ; extern  _GLOBAL_178_T  _GLOBAL_9_ipsec_def_enc_I [ ] ; extern  _GLOBAL_178_T  _GLOBAL_10_ipsec_def_enc_I [ ] ; extern  _GLOBAL_178_T  _GLOBAL_11_ipsec_def_enc_I [ ] ; extern  _GLOBAL_178_T  _GLOBAL_12_ipsec_def_enc_I [ ] ; extern  _GLOBAL_178_T  _GLOBAL_13_ipsec_def_enc_I [ ] ; extern  _GLOBAL_178_T  _GLOBAL_14_ipsec_def_enc_I [ ] ; extern  _GLOBAL_178_T  _GLOBAL_15_ipsec_def_enc_I [ ] ; extern  _GLOBAL_178_T  _GLOBAL_16_ipsec_def_enc_I [ ] ; extern  _GLOBAL_178_T  _GLOBAL_17_ipsec_def_enc_I [ ] ; extern  _GLOBAL_178_T  _GLOBAL_18_ipsec_def_enc_I [ ] ; extern  _GLOBAL_178_T  _GLOBAL_19_ipsec_def_enc_I [ ] ; extern  _GLOBAL_178_T  _GLOBAL_20_ipsec_def_enc_I [ ] ; extern  _GLOBAL_178_T  _GLOBAL_21_ipsec_def_enc_I [ ] ; extern  _GLOBAL_178_T  _GLOBAL_22_ipsec_def_enc_I [ ] ; extern  _GLOBAL_178_T  _GLOBAL_23_ipsec_def_enc_I [ ] ; extern  _GLOBAL_178_T  _GLOBAL_24_ipsec_def_enc_I [ ] ; extern  _GLOBAL_178_T  _GLOBAL_25_ipsec_def_enc_I [ ] ; extern  _GLOBAL_178_T  _GLOBAL_26_ipsec_def_enc_I [ ] ; extern  _GLOBAL_178_T  _GLOBAL_27_ipsec_def_enc_I [ ] ; extern  _GLOBAL_178_T  _GLOBAL_28_ipsec_def_enc_I [ ] ; extern  _GLOBAL_178_T  _GLOBAL_29_ipsec_def_enc_I [ ] ; extern  _GLOBAL_178_T  _GLOBAL_30_ipsec_def_enc_I [ ] ; extern  _GLOBAL_178_T  _GLOBAL_31_ipsec_def_enc_I [ ] ; extern  _GLOBAL_178_T  _GLOBAL_32_ipsec_def_enc_I [ ] ; extern  _GLOBAL_178_T  _GLOBAL_33_ipsec_def_enc_I [ ] ; extern  _GLOBAL_178_T  _GLOBAL_34_ipsec_def_enc_I [ ] ; extern  _GLOBAL_178_T  _GLOBAL_35_ipsec_def_enc_I [ ] ; extern  _GLOBAL_178_T  _GLOBAL_36_ipsec_def_enc_I [ ] ; extern  _GLOBAL_178_T  _GLOBAL_37_ipsec_def_enc_I [ ] ; extern  _GLOBAL_178_T  _GLOBAL_38_ipsec_def_enc_I [ ] ; extern  _GLOBAL_178_T  _GLOBAL_39_ipsec_def_enc_I [ ] ; extern  _GLOBAL_178_T  _GLOBAL_40_ipsec_def_enc_I [ ] ; extern  _GLOBAL_178_T  _GLOBAL_41_ipsec_def_enc_I [ ] ; extern  _GLOBAL_178_T  _GLOBAL_42_ipsec_def_enc_I [ ] ; extern  _GLOBAL_178_T  _GLOBAL_43_ipsec_def_enc_I [ ] ; extern  _GLOBAL_178_T  _GLOBAL_44_ipsec_def_enc_I [ ] ; extern  _GLOBAL_178_T  _GLOBAL_45_ipsec_def_enc_I [ ] ; extern  _GLOBAL_178_T  _GLOBAL_46_ipsec_def_enc_I [ ] ; extern  _GLOBAL_178_T  _GLOBAL_47_ipsec_def_enc_I [ ] ; extern  _GLOBAL_178_T  _GLOBAL_48_ipsec_def_enc_I [ ] ; extern  _GLOBAL_178_T  _GLOBAL_49_ipsec_def_enc_I [ ] ; static __attribute__ ((unused)) __typeof__(_GLOBAL_0_ipsec_def_enc_I) *_GLOBAL_ipsec_def_enc_27_A[NUM_STACKS];  
typedef  char  _GLOBAL_179_T; extern  _GLOBAL_179_T  _GLOBAL_0_ipsec_def_auth_I [ ] ; extern  _GLOBAL_179_T  _GLOBAL_1_ipsec_def_auth_I [ ] ; extern  _GLOBAL_179_T  _GLOBAL_2_ipsec_def_auth_I [ ] ; extern  _GLOBAL_179_T  _GLOBAL_3_ipsec_def_auth_I [ ] ; extern  _GLOBAL_179_T  _GLOBAL_4_ipsec_def_auth_I [ ] ; extern  _GLOBAL_179_T  _GLOBAL_5_ipsec_def_auth_I [ ] ; extern  _GLOBAL_179_T  _GLOBAL_6_ipsec_def_auth_I [ ] ; extern  _GLOBAL_179_T  _GLOBAL_7_ipsec_def_auth_I [ ] ; extern  _GLOBAL_179_T  _GLOBAL_8_ipsec_def_auth_I [ ] ; extern  _GLOBAL_179_T  _GLOBAL_9_ipsec_def_auth_I [ ] ; extern  _GLOBAL_179_T  _GLOBAL_10_ipsec_def_auth_I [ ] ; extern  _GLOBAL_179_T  _GLOBAL_11_ipsec_def_auth_I [ ] ; extern  _GLOBAL_179_T  _GLOBAL_12_ipsec_def_auth_I [ ] ; extern  _GLOBAL_179_T  _GLOBAL_13_ipsec_def_auth_I [ ] ; extern  _GLOBAL_179_T  _GLOBAL_14_ipsec_def_auth_I [ ] ; extern  _GLOBAL_179_T  _GLOBAL_15_ipsec_def_auth_I [ ] ; extern  _GLOBAL_179_T  _GLOBAL_16_ipsec_def_auth_I [ ] ; extern  _GLOBAL_179_T  _GLOBAL_17_ipsec_def_auth_I [ ] ; extern  _GLOBAL_179_T  _GLOBAL_18_ipsec_def_auth_I [ ] ; extern  _GLOBAL_179_T  _GLOBAL_19_ipsec_def_auth_I [ ] ; extern  _GLOBAL_179_T  _GLOBAL_20_ipsec_def_auth_I [ ] ; extern  _GLOBAL_179_T  _GLOBAL_21_ipsec_def_auth_I [ ] ; extern  _GLOBAL_179_T  _GLOBAL_22_ipsec_def_auth_I [ ] ; extern  _GLOBAL_179_T  _GLOBAL_23_ipsec_def_auth_I [ ] ; extern  _GLOBAL_179_T  _GLOBAL_24_ipsec_def_auth_I [ ] ; extern  _GLOBAL_179_T  _GLOBAL_25_ipsec_def_auth_I [ ] ; extern  _GLOBAL_179_T  _GLOBAL_26_ipsec_def_auth_I [ ] ; extern  _GLOBAL_179_T  _GLOBAL_27_ipsec_def_auth_I [ ] ; extern  _GLOBAL_179_T  _GLOBAL_28_ipsec_def_auth_I [ ] ; extern  _GLOBAL_179_T  _GLOBAL_29_ipsec_def_auth_I [ ] ; extern  _GLOBAL_179_T  _GLOBAL_30_ipsec_def_auth_I [ ] ; extern  _GLOBAL_179_T  _GLOBAL_31_ipsec_def_auth_I [ ] ; extern  _GLOBAL_179_T  _GLOBAL_32_ipsec_def_auth_I [ ] ; extern  _GLOBAL_179_T  _GLOBAL_33_ipsec_def_auth_I [ ] ; extern  _GLOBAL_179_T  _GLOBAL_34_ipsec_def_auth_I [ ] ; extern  _GLOBAL_179_T  _GLOBAL_35_ipsec_def_auth_I [ ] ; extern  _GLOBAL_179_T  _GLOBAL_36_ipsec_def_auth_I [ ] ; extern  _GLOBAL_179_T  _GLOBAL_37_ipsec_def_auth_I [ ] ; extern  _GLOBAL_179_T  _GLOBAL_38_ipsec_def_auth_I [ ] ; extern  _GLOBAL_179_T  _GLOBAL_39_ipsec_def_auth_I [ ] ; extern  _GLOBAL_179_T  _GLOBAL_40_ipsec_def_auth_I [ ] ; extern  _GLOBAL_179_T  _GLOBAL_41_ipsec_def_auth_I [ ] ; extern  _GLOBAL_179_T  _GLOBAL_42_ipsec_def_auth_I [ ] ; extern  _GLOBAL_179_T  _GLOBAL_43_ipsec_def_auth_I [ ] ; extern  _GLOBAL_179_T  _GLOBAL_44_ipsec_def_auth_I [ ] ; extern  _GLOBAL_179_T  _GLOBAL_45_ipsec_def_auth_I [ ] ; extern  _GLOBAL_179_T  _GLOBAL_46_ipsec_def_auth_I [ ] ; extern  _GLOBAL_179_T  _GLOBAL_47_ipsec_def_auth_I [ ] ; extern  _GLOBAL_179_T  _GLOBAL_48_ipsec_def_auth_I [ ] ; extern  _GLOBAL_179_T  _GLOBAL_49_ipsec_def_auth_I [ ] ; static __attribute__ ((unused)) __typeof__(_GLOBAL_0_ipsec_def_auth_I) *_GLOBAL_ipsec_def_auth_28_A[NUM_STACKS];  
typedef  char  _GLOBAL_180_T; extern  _GLOBAL_180_T  _GLOBAL_0_ipsec_def_comp_I [ ] ; extern  _GLOBAL_180_T  _GLOBAL_1_ipsec_def_comp_I [ ] ; extern  _GLOBAL_180_T  _GLOBAL_2_ipsec_def_comp_I [ ] ; extern  _GLOBAL_180_T  _GLOBAL_3_ipsec_def_comp_I [ ] ; extern  _GLOBAL_180_T  _GLOBAL_4_ipsec_def_comp_I [ ] ; extern  _GLOBAL_180_T  _GLOBAL_5_ipsec_def_comp_I [ ] ; extern  _GLOBAL_180_T  _GLOBAL_6_ipsec_def_comp_I [ ] ; extern  _GLOBAL_180_T  _GLOBAL_7_ipsec_def_comp_I [ ] ; extern  _GLOBAL_180_T  _GLOBAL_8_ipsec_def_comp_I [ ] ; extern  _GLOBAL_180_T  _GLOBAL_9_ipsec_def_comp_I [ ] ; extern  _GLOBAL_180_T  _GLOBAL_10_ipsec_def_comp_I [ ] ; extern  _GLOBAL_180_T  _GLOBAL_11_ipsec_def_comp_I [ ] ; extern  _GLOBAL_180_T  _GLOBAL_12_ipsec_def_comp_I [ ] ; extern  _GLOBAL_180_T  _GLOBAL_13_ipsec_def_comp_I [ ] ; extern  _GLOBAL_180_T  _GLOBAL_14_ipsec_def_comp_I [ ] ; extern  _GLOBAL_180_T  _GLOBAL_15_ipsec_def_comp_I [ ] ; extern  _GLOBAL_180_T  _GLOBAL_16_ipsec_def_comp_I [ ] ; extern  _GLOBAL_180_T  _GLOBAL_17_ipsec_def_comp_I [ ] ; extern  _GLOBAL_180_T  _GLOBAL_18_ipsec_def_comp_I [ ] ; extern  _GLOBAL_180_T  _GLOBAL_19_ipsec_def_comp_I [ ] ; extern  _GLOBAL_180_T  _GLOBAL_20_ipsec_def_comp_I [ ] ; extern  _GLOBAL_180_T  _GLOBAL_21_ipsec_def_comp_I [ ] ; extern  _GLOBAL_180_T  _GLOBAL_22_ipsec_def_comp_I [ ] ; extern  _GLOBAL_180_T  _GLOBAL_23_ipsec_def_comp_I [ ] ; extern  _GLOBAL_180_T  _GLOBAL_24_ipsec_def_comp_I [ ] ; extern  _GLOBAL_180_T  _GLOBAL_25_ipsec_def_comp_I [ ] ; extern  _GLOBAL_180_T  _GLOBAL_26_ipsec_def_comp_I [ ] ; extern  _GLOBAL_180_T  _GLOBAL_27_ipsec_def_comp_I [ ] ; extern  _GLOBAL_180_T  _GLOBAL_28_ipsec_def_comp_I [ ] ; extern  _GLOBAL_180_T  _GLOBAL_29_ipsec_def_comp_I [ ] ; extern  _GLOBAL_180_T  _GLOBAL_30_ipsec_def_comp_I [ ] ; extern  _GLOBAL_180_T  _GLOBAL_31_ipsec_def_comp_I [ ] ; extern  _GLOBAL_180_T  _GLOBAL_32_ipsec_def_comp_I [ ] ; extern  _GLOBAL_180_T  _GLOBAL_33_ipsec_def_comp_I [ ] ; extern  _GLOBAL_180_T  _GLOBAL_34_ipsec_def_comp_I [ ] ; extern  _GLOBAL_180_T  _GLOBAL_35_ipsec_def_comp_I [ ] ; extern  _GLOBAL_180_T  _GLOBAL_36_ipsec_def_comp_I [ ] ; extern  _GLOBAL_180_T  _GLOBAL_37_ipsec_def_comp_I [ ] ; extern  _GLOBAL_180_T  _GLOBAL_38_ipsec_def_comp_I [ ] ; extern  _GLOBAL_180_T  _GLOBAL_39_ipsec_def_comp_I [ ] ; extern  _GLOBAL_180_T  _GLOBAL_40_ipsec_def_comp_I [ ] ; extern  _GLOBAL_180_T  _GLOBAL_41_ipsec_def_comp_I [ ] ; extern  _GLOBAL_180_T  _GLOBAL_42_ipsec_def_comp_I [ ] ; extern  _GLOBAL_180_T  _GLOBAL_43_ipsec_def_comp_I [ ] ; extern  _GLOBAL_180_T  _GLOBAL_44_ipsec_def_comp_I [ ] ; extern  _GLOBAL_180_T  _GLOBAL_45_ipsec_def_comp_I [ ] ; extern  _GLOBAL_180_T  _GLOBAL_46_ipsec_def_comp_I [ ] ; extern  _GLOBAL_180_T  _GLOBAL_47_ipsec_def_comp_I [ ] ; extern  _GLOBAL_180_T  _GLOBAL_48_ipsec_def_comp_I [ ] ; extern  _GLOBAL_180_T  _GLOBAL_49_ipsec_def_comp_I [ ] ; static __attribute__ ((unused)) __typeof__(_GLOBAL_0_ipsec_def_comp_I) *_GLOBAL_ipsec_def_comp_29_A[NUM_STACKS];  

typedef  struct enc_xform   _GLOBAL_181_T; extern  _GLOBAL_181_T  _GLOBAL_0_enc_xform_des_I; extern  _GLOBAL_181_T  _GLOBAL_1_enc_xform_des_I; extern  _GLOBAL_181_T  _GLOBAL_2_enc_xform_des_I; extern  _GLOBAL_181_T  _GLOBAL_3_enc_xform_des_I; extern  _GLOBAL_181_T  _GLOBAL_4_enc_xform_des_I; extern  _GLOBAL_181_T  _GLOBAL_5_enc_xform_des_I; extern  _GLOBAL_181_T  _GLOBAL_6_enc_xform_des_I; extern  _GLOBAL_181_T  _GLOBAL_7_enc_xform_des_I; extern  _GLOBAL_181_T  _GLOBAL_8_enc_xform_des_I; extern  _GLOBAL_181_T  _GLOBAL_9_enc_xform_des_I; extern  _GLOBAL_181_T  _GLOBAL_10_enc_xform_des_I; extern  _GLOBAL_181_T  _GLOBAL_11_enc_xform_des_I; extern  _GLOBAL_181_T  _GLOBAL_12_enc_xform_des_I; extern  _GLOBAL_181_T  _GLOBAL_13_enc_xform_des_I; extern  _GLOBAL_181_T  _GLOBAL_14_enc_xform_des_I; extern  _GLOBAL_181_T  _GLOBAL_15_enc_xform_des_I; extern  _GLOBAL_181_T  _GLOBAL_16_enc_xform_des_I; extern  _GLOBAL_181_T  _GLOBAL_17_enc_xform_des_I; extern  _GLOBAL_181_T  _GLOBAL_18_enc_xform_des_I; extern  _GLOBAL_181_T  _GLOBAL_19_enc_xform_des_I; extern  _GLOBAL_181_T  _GLOBAL_20_enc_xform_des_I; extern  _GLOBAL_181_T  _GLOBAL_21_enc_xform_des_I; extern  _GLOBAL_181_T  _GLOBAL_22_enc_xform_des_I; extern  _GLOBAL_181_T  _GLOBAL_23_enc_xform_des_I; extern  _GLOBAL_181_T  _GLOBAL_24_enc_xform_des_I; extern  _GLOBAL_181_T  _GLOBAL_25_enc_xform_des_I; extern  _GLOBAL_181_T  _GLOBAL_26_enc_xform_des_I; extern  _GLOBAL_181_T  _GLOBAL_27_enc_xform_des_I; extern  _GLOBAL_181_T  _GLOBAL_28_enc_xform_des_I; extern  _GLOBAL_181_T  _GLOBAL_29_enc_xform_des_I; extern  _GLOBAL_181_T  _GLOBAL_30_enc_xform_des_I; extern  _GLOBAL_181_T  _GLOBAL_31_enc_xform_des_I; extern  _GLOBAL_181_T  _GLOBAL_32_enc_xform_des_I; extern  _GLOBAL_181_T  _GLOBAL_33_enc_xform_des_I; extern  _GLOBAL_181_T  _GLOBAL_34_enc_xform_des_I; extern  _GLOBAL_181_T  _GLOBAL_35_enc_xform_des_I; extern  _GLOBAL_181_T  _GLOBAL_36_enc_xform_des_I; extern  _GLOBAL_181_T  _GLOBAL_37_enc_xform_des_I; extern  _GLOBAL_181_T  _GLOBAL_38_enc_xform_des_I; extern  _GLOBAL_181_T  _GLOBAL_39_enc_xform_des_I; extern  _GLOBAL_181_T  _GLOBAL_40_enc_xform_des_I; extern  _GLOBAL_181_T  _GLOBAL_41_enc_xform_des_I; extern  _GLOBAL_181_T  _GLOBAL_42_enc_xform_des_I; extern  _GLOBAL_181_T  _GLOBAL_43_enc_xform_des_I; extern  _GLOBAL_181_T  _GLOBAL_44_enc_xform_des_I; extern  _GLOBAL_181_T  _GLOBAL_45_enc_xform_des_I; extern  _GLOBAL_181_T  _GLOBAL_46_enc_xform_des_I; extern  _GLOBAL_181_T  _GLOBAL_47_enc_xform_des_I; extern  _GLOBAL_181_T  _GLOBAL_48_enc_xform_des_I; extern  _GLOBAL_181_T  _GLOBAL_49_enc_xform_des_I; static __attribute__ ((unused)) __typeof__(_GLOBAL_0_enc_xform_des_I) *_GLOBAL_enc_xform_des_30_A[NUM_STACKS];   
typedef  struct enc_xform   _GLOBAL_182_T; extern  _GLOBAL_182_T  _GLOBAL_0_enc_xform_3des_I; extern  _GLOBAL_182_T  _GLOBAL_1_enc_xform_3des_I; extern  _GLOBAL_182_T  _GLOBAL_2_enc_xform_3des_I; extern  _GLOBAL_182_T  _GLOBAL_3_enc_xform_3des_I; extern  _GLOBAL_182_T  _GLOBAL_4_enc_xform_3des_I; extern  _GLOBAL_182_T  _GLOBAL_5_enc_xform_3des_I; extern  _GLOBAL_182_T  _GLOBAL_6_enc_xform_3des_I; extern  _GLOBAL_182_T  _GLOBAL_7_enc_xform_3des_I; extern  _GLOBAL_182_T  _GLOBAL_8_enc_xform_3des_I; extern  _GLOBAL_182_T  _GLOBAL_9_enc_xform_3des_I; extern  _GLOBAL_182_T  _GLOBAL_10_enc_xform_3des_I; extern  _GLOBAL_182_T  _GLOBAL_11_enc_xform_3des_I; extern  _GLOBAL_182_T  _GLOBAL_12_enc_xform_3des_I; extern  _GLOBAL_182_T  _GLOBAL_13_enc_xform_3des_I; extern  _GLOBAL_182_T  _GLOBAL_14_enc_xform_3des_I; extern  _GLOBAL_182_T  _GLOBAL_15_enc_xform_3des_I; extern  _GLOBAL_182_T  _GLOBAL_16_enc_xform_3des_I; extern  _GLOBAL_182_T  _GLOBAL_17_enc_xform_3des_I; extern  _GLOBAL_182_T  _GLOBAL_18_enc_xform_3des_I; extern  _GLOBAL_182_T  _GLOBAL_19_enc_xform_3des_I; extern  _GLOBAL_182_T  _GLOBAL_20_enc_xform_3des_I; extern  _GLOBAL_182_T  _GLOBAL_21_enc_xform_3des_I; extern  _GLOBAL_182_T  _GLOBAL_22_enc_xform_3des_I; extern  _GLOBAL_182_T  _GLOBAL_23_enc_xform_3des_I; extern  _GLOBAL_182_T  _GLOBAL_24_enc_xform_3des_I; extern  _GLOBAL_182_T  _GLOBAL_25_enc_xform_3des_I; extern  _GLOBAL_182_T  _GLOBAL_26_enc_xform_3des_I; extern  _GLOBAL_182_T  _GLOBAL_27_enc_xform_3des_I; extern  _GLOBAL_182_T  _GLOBAL_28_enc_xform_3des_I; extern  _GLOBAL_182_T  _GLOBAL_29_enc_xform_3des_I; extern  _GLOBAL_182_T  _GLOBAL_30_enc_xform_3des_I; extern  _GLOBAL_182_T  _GLOBAL_31_enc_xform_3des_I; extern  _GLOBAL_182_T  _GLOBAL_32_enc_xform_3des_I; extern  _GLOBAL_182_T  _GLOBAL_33_enc_xform_3des_I; extern  _GLOBAL_182_T  _GLOBAL_34_enc_xform_3des_I; extern  _GLOBAL_182_T  _GLOBAL_35_enc_xform_3des_I; extern  _GLOBAL_182_T  _GLOBAL_36_enc_xform_3des_I; extern  _GLOBAL_182_T  _GLOBAL_37_enc_xform_3des_I; extern  _GLOBAL_182_T  _GLOBAL_38_enc_xform_3des_I; extern  _GLOBAL_182_T  _GLOBAL_39_enc_xform_3des_I; extern  _GLOBAL_182_T  _GLOBAL_40_enc_xform_3des_I; extern  _GLOBAL_182_T  _GLOBAL_41_enc_xform_3des_I; extern  _GLOBAL_182_T  _GLOBAL_42_enc_xform_3des_I; extern  _GLOBAL_182_T  _GLOBAL_43_enc_xform_3des_I; extern  _GLOBAL_182_T  _GLOBAL_44_enc_xform_3des_I; extern  _GLOBAL_182_T  _GLOBAL_45_enc_xform_3des_I; extern  _GLOBAL_182_T  _GLOBAL_46_enc_xform_3des_I; extern  _GLOBAL_182_T  _GLOBAL_47_enc_xform_3des_I; extern  _GLOBAL_182_T  _GLOBAL_48_enc_xform_3des_I; extern  _GLOBAL_182_T  _GLOBAL_49_enc_xform_3des_I; static __attribute__ ((unused)) __typeof__(_GLOBAL_0_enc_xform_3des_I) *_GLOBAL_enc_xform_3des_31_A[NUM_STACKS];   
typedef  struct enc_xform   _GLOBAL_183_T; extern  _GLOBAL_183_T  _GLOBAL_0_enc_xform_blf_I; extern  _GLOBAL_183_T  _GLOBAL_1_enc_xform_blf_I; extern  _GLOBAL_183_T  _GLOBAL_2_enc_xform_blf_I; extern  _GLOBAL_183_T  _GLOBAL_3_enc_xform_blf_I; extern  _GLOBAL_183_T  _GLOBAL_4_enc_xform_blf_I; extern  _GLOBAL_183_T  _GLOBAL_5_enc_xform_blf_I; extern  _GLOBAL_183_T  _GLOBAL_6_enc_xform_blf_I; extern  _GLOBAL_183_T  _GLOBAL_7_enc_xform_blf_I; extern  _GLOBAL_183_T  _GLOBAL_8_enc_xform_blf_I; extern  _GLOBAL_183_T  _GLOBAL_9_enc_xform_blf_I; extern  _GLOBAL_183_T  _GLOBAL_10_enc_xform_blf_I; extern  _GLOBAL_183_T  _GLOBAL_11_enc_xform_blf_I; extern  _GLOBAL_183_T  _GLOBAL_12_enc_xform_blf_I; extern  _GLOBAL_183_T  _GLOBAL_13_enc_xform_blf_I; extern  _GLOBAL_183_T  _GLOBAL_14_enc_xform_blf_I; extern  _GLOBAL_183_T  _GLOBAL_15_enc_xform_blf_I; extern  _GLOBAL_183_T  _GLOBAL_16_enc_xform_blf_I; extern  _GLOBAL_183_T  _GLOBAL_17_enc_xform_blf_I; extern  _GLOBAL_183_T  _GLOBAL_18_enc_xform_blf_I; extern  _GLOBAL_183_T  _GLOBAL_19_enc_xform_blf_I; extern  _GLOBAL_183_T  _GLOBAL_20_enc_xform_blf_I; extern  _GLOBAL_183_T  _GLOBAL_21_enc_xform_blf_I; extern  _GLOBAL_183_T  _GLOBAL_22_enc_xform_blf_I; extern  _GLOBAL_183_T  _GLOBAL_23_enc_xform_blf_I; extern  _GLOBAL_183_T  _GLOBAL_24_enc_xform_blf_I; extern  _GLOBAL_183_T  _GLOBAL_25_enc_xform_blf_I; extern  _GLOBAL_183_T  _GLOBAL_26_enc_xform_blf_I; extern  _GLOBAL_183_T  _GLOBAL_27_enc_xform_blf_I; extern  _GLOBAL_183_T  _GLOBAL_28_enc_xform_blf_I; extern  _GLOBAL_183_T  _GLOBAL_29_enc_xform_blf_I; extern  _GLOBAL_183_T  _GLOBAL_30_enc_xform_blf_I; extern  _GLOBAL_183_T  _GLOBAL_31_enc_xform_blf_I; extern  _GLOBAL_183_T  _GLOBAL_32_enc_xform_blf_I; extern  _GLOBAL_183_T  _GLOBAL_33_enc_xform_blf_I; extern  _GLOBAL_183_T  _GLOBAL_34_enc_xform_blf_I; extern  _GLOBAL_183_T  _GLOBAL_35_enc_xform_blf_I; extern  _GLOBAL_183_T  _GLOBAL_36_enc_xform_blf_I; extern  _GLOBAL_183_T  _GLOBAL_37_enc_xform_blf_I; extern  _GLOBAL_183_T  _GLOBAL_38_enc_xform_blf_I; extern  _GLOBAL_183_T  _GLOBAL_39_enc_xform_blf_I; extern  _GLOBAL_183_T  _GLOBAL_40_enc_xform_blf_I; extern  _GLOBAL_183_T  _GLOBAL_41_enc_xform_blf_I; extern  _GLOBAL_183_T  _GLOBAL_42_enc_xform_blf_I; extern  _GLOBAL_183_T  _GLOBAL_43_enc_xform_blf_I; extern  _GLOBAL_183_T  _GLOBAL_44_enc_xform_blf_I; extern  _GLOBAL_183_T  _GLOBAL_45_enc_xform_blf_I; extern  _GLOBAL_183_T  _GLOBAL_46_enc_xform_blf_I; extern  _GLOBAL_183_T  _GLOBAL_47_enc_xform_blf_I; extern  _GLOBAL_183_T  _GLOBAL_48_enc_xform_blf_I; extern  _GLOBAL_183_T  _GLOBAL_49_enc_xform_blf_I; static __attribute__ ((unused)) __typeof__(_GLOBAL_0_enc_xform_blf_I) *_GLOBAL_enc_xform_blf_32_A[NUM_STACKS];   
typedef  struct enc_xform   _GLOBAL_184_T; extern  _GLOBAL_184_T  _GLOBAL_0_enc_xform_cast5_I; extern  _GLOBAL_184_T  _GLOBAL_1_enc_xform_cast5_I; extern  _GLOBAL_184_T  _GLOBAL_2_enc_xform_cast5_I; extern  _GLOBAL_184_T  _GLOBAL_3_enc_xform_cast5_I; extern  _GLOBAL_184_T  _GLOBAL_4_enc_xform_cast5_I; extern  _GLOBAL_184_T  _GLOBAL_5_enc_xform_cast5_I; extern  _GLOBAL_184_T  _GLOBAL_6_enc_xform_cast5_I; extern  _GLOBAL_184_T  _GLOBAL_7_enc_xform_cast5_I; extern  _GLOBAL_184_T  _GLOBAL_8_enc_xform_cast5_I; extern  _GLOBAL_184_T  _GLOBAL_9_enc_xform_cast5_I; extern  _GLOBAL_184_T  _GLOBAL_10_enc_xform_cast5_I; extern  _GLOBAL_184_T  _GLOBAL_11_enc_xform_cast5_I; extern  _GLOBAL_184_T  _GLOBAL_12_enc_xform_cast5_I; extern  _GLOBAL_184_T  _GLOBAL_13_enc_xform_cast5_I; extern  _GLOBAL_184_T  _GLOBAL_14_enc_xform_cast5_I; extern  _GLOBAL_184_T  _GLOBAL_15_enc_xform_cast5_I; extern  _GLOBAL_184_T  _GLOBAL_16_enc_xform_cast5_I; extern  _GLOBAL_184_T  _GLOBAL_17_enc_xform_cast5_I; extern  _GLOBAL_184_T  _GLOBAL_18_enc_xform_cast5_I; extern  _GLOBAL_184_T  _GLOBAL_19_enc_xform_cast5_I; extern  _GLOBAL_184_T  _GLOBAL_20_enc_xform_cast5_I; extern  _GLOBAL_184_T  _GLOBAL_21_enc_xform_cast5_I; extern  _GLOBAL_184_T  _GLOBAL_22_enc_xform_cast5_I; extern  _GLOBAL_184_T  _GLOBAL_23_enc_xform_cast5_I; extern  _GLOBAL_184_T  _GLOBAL_24_enc_xform_cast5_I; extern  _GLOBAL_184_T  _GLOBAL_25_enc_xform_cast5_I; extern  _GLOBAL_184_T  _GLOBAL_26_enc_xform_cast5_I; extern  _GLOBAL_184_T  _GLOBAL_27_enc_xform_cast5_I; extern  _GLOBAL_184_T  _GLOBAL_28_enc_xform_cast5_I; extern  _GLOBAL_184_T  _GLOBAL_29_enc_xform_cast5_I; extern  _GLOBAL_184_T  _GLOBAL_30_enc_xform_cast5_I; extern  _GLOBAL_184_T  _GLOBAL_31_enc_xform_cast5_I; extern  _GLOBAL_184_T  _GLOBAL_32_enc_xform_cast5_I; extern  _GLOBAL_184_T  _GLOBAL_33_enc_xform_cast5_I; extern  _GLOBAL_184_T  _GLOBAL_34_enc_xform_cast5_I; extern  _GLOBAL_184_T  _GLOBAL_35_enc_xform_cast5_I; extern  _GLOBAL_184_T  _GLOBAL_36_enc_xform_cast5_I; extern  _GLOBAL_184_T  _GLOBAL_37_enc_xform_cast5_I; extern  _GLOBAL_184_T  _GLOBAL_38_enc_xform_cast5_I; extern  _GLOBAL_184_T  _GLOBAL_39_enc_xform_cast5_I; extern  _GLOBAL_184_T  _GLOBAL_40_enc_xform_cast5_I; extern  _GLOBAL_184_T  _GLOBAL_41_enc_xform_cast5_I; extern  _GLOBAL_184_T  _GLOBAL_42_enc_xform_cast5_I; extern  _GLOBAL_184_T  _GLOBAL_43_enc_xform_cast5_I; extern  _GLOBAL_184_T  _GLOBAL_44_enc_xform_cast5_I; extern  _GLOBAL_184_T  _GLOBAL_45_enc_xform_cast5_I; extern  _GLOBAL_184_T  _GLOBAL_46_enc_xform_cast5_I; extern  _GLOBAL_184_T  _GLOBAL_47_enc_xform_cast5_I; extern  _GLOBAL_184_T  _GLOBAL_48_enc_xform_cast5_I; extern  _GLOBAL_184_T  _GLOBAL_49_enc_xform_cast5_I; static __attribute__ ((unused)) __typeof__(_GLOBAL_0_enc_xform_cast5_I) *_GLOBAL_enc_xform_cast5_33_A[NUM_STACKS];   
typedef  struct enc_xform   _GLOBAL_185_T; extern  _GLOBAL_185_T  _GLOBAL_0_enc_xform_skipjack_I; extern  _GLOBAL_185_T  _GLOBAL_1_enc_xform_skipjack_I; extern  _GLOBAL_185_T  _GLOBAL_2_enc_xform_skipjack_I; extern  _GLOBAL_185_T  _GLOBAL_3_enc_xform_skipjack_I; extern  _GLOBAL_185_T  _GLOBAL_4_enc_xform_skipjack_I; extern  _GLOBAL_185_T  _GLOBAL_5_enc_xform_skipjack_I; extern  _GLOBAL_185_T  _GLOBAL_6_enc_xform_skipjack_I; extern  _GLOBAL_185_T  _GLOBAL_7_enc_xform_skipjack_I; extern  _GLOBAL_185_T  _GLOBAL_8_enc_xform_skipjack_I; extern  _GLOBAL_185_T  _GLOBAL_9_enc_xform_skipjack_I; extern  _GLOBAL_185_T  _GLOBAL_10_enc_xform_skipjack_I; extern  _GLOBAL_185_T  _GLOBAL_11_enc_xform_skipjack_I; extern  _GLOBAL_185_T  _GLOBAL_12_enc_xform_skipjack_I; extern  _GLOBAL_185_T  _GLOBAL_13_enc_xform_skipjack_I; extern  _GLOBAL_185_T  _GLOBAL_14_enc_xform_skipjack_I; extern  _GLOBAL_185_T  _GLOBAL_15_enc_xform_skipjack_I; extern  _GLOBAL_185_T  _GLOBAL_16_enc_xform_skipjack_I; extern  _GLOBAL_185_T  _GLOBAL_17_enc_xform_skipjack_I; extern  _GLOBAL_185_T  _GLOBAL_18_enc_xform_skipjack_I; extern  _GLOBAL_185_T  _GLOBAL_19_enc_xform_skipjack_I; extern  _GLOBAL_185_T  _GLOBAL_20_enc_xform_skipjack_I; extern  _GLOBAL_185_T  _GLOBAL_21_enc_xform_skipjack_I; extern  _GLOBAL_185_T  _GLOBAL_22_enc_xform_skipjack_I; extern  _GLOBAL_185_T  _GLOBAL_23_enc_xform_skipjack_I; extern  _GLOBAL_185_T  _GLOBAL_24_enc_xform_skipjack_I; extern  _GLOBAL_185_T  _GLOBAL_25_enc_xform_skipjack_I; extern  _GLOBAL_185_T  _GLOBAL_26_enc_xform_skipjack_I; extern  _GLOBAL_185_T  _GLOBAL_27_enc_xform_skipjack_I; extern  _GLOBAL_185_T  _GLOBAL_28_enc_xform_skipjack_I; extern  _GLOBAL_185_T  _GLOBAL_29_enc_xform_skipjack_I; extern  _GLOBAL_185_T  _GLOBAL_30_enc_xform_skipjack_I; extern  _GLOBAL_185_T  _GLOBAL_31_enc_xform_skipjack_I; extern  _GLOBAL_185_T  _GLOBAL_32_enc_xform_skipjack_I; extern  _GLOBAL_185_T  _GLOBAL_33_enc_xform_skipjack_I; extern  _GLOBAL_185_T  _GLOBAL_34_enc_xform_skipjack_I; extern  _GLOBAL_185_T  _GLOBAL_35_enc_xform_skipjack_I; extern  _GLOBAL_185_T  _GLOBAL_36_enc_xform_skipjack_I; extern  _GLOBAL_185_T  _GLOBAL_37_enc_xform_skipjack_I; extern  _GLOBAL_185_T  _GLOBAL_38_enc_xform_skipjack_I; extern  _GLOBAL_185_T  _GLOBAL_39_enc_xform_skipjack_I; extern  _GLOBAL_185_T  _GLOBAL_40_enc_xform_skipjack_I; extern  _GLOBAL_185_T  _GLOBAL_41_enc_xform_skipjack_I; extern  _GLOBAL_185_T  _GLOBAL_42_enc_xform_skipjack_I; extern  _GLOBAL_185_T  _GLOBAL_43_enc_xform_skipjack_I; extern  _GLOBAL_185_T  _GLOBAL_44_enc_xform_skipjack_I; extern  _GLOBAL_185_T  _GLOBAL_45_enc_xform_skipjack_I; extern  _GLOBAL_185_T  _GLOBAL_46_enc_xform_skipjack_I; extern  _GLOBAL_185_T  _GLOBAL_47_enc_xform_skipjack_I; extern  _GLOBAL_185_T  _GLOBAL_48_enc_xform_skipjack_I; extern  _GLOBAL_185_T  _GLOBAL_49_enc_xform_skipjack_I; static __attribute__ ((unused)) __typeof__(_GLOBAL_0_enc_xform_skipjack_I) *_GLOBAL_enc_xform_skipjack_34_A[NUM_STACKS];   

typedef  struct auth_hash   _GLOBAL_186_T; extern  _GLOBAL_186_T  _GLOBAL_0_auth_hash_hmac_md5_96_I; extern  _GLOBAL_186_T  _GLOBAL_1_auth_hash_hmac_md5_96_I; extern  _GLOBAL_186_T  _GLOBAL_2_auth_hash_hmac_md5_96_I; extern  _GLOBAL_186_T  _GLOBAL_3_auth_hash_hmac_md5_96_I; extern  _GLOBAL_186_T  _GLOBAL_4_auth_hash_hmac_md5_96_I; extern  _GLOBAL_186_T  _GLOBAL_5_auth_hash_hmac_md5_96_I; extern  _GLOBAL_186_T  _GLOBAL_6_auth_hash_hmac_md5_96_I; extern  _GLOBAL_186_T  _GLOBAL_7_auth_hash_hmac_md5_96_I; extern  _GLOBAL_186_T  _GLOBAL_8_auth_hash_hmac_md5_96_I; extern  _GLOBAL_186_T  _GLOBAL_9_auth_hash_hmac_md5_96_I; extern  _GLOBAL_186_T  _GLOBAL_10_auth_hash_hmac_md5_96_I; extern  _GLOBAL_186_T  _GLOBAL_11_auth_hash_hmac_md5_96_I; extern  _GLOBAL_186_T  _GLOBAL_12_auth_hash_hmac_md5_96_I; extern  _GLOBAL_186_T  _GLOBAL_13_auth_hash_hmac_md5_96_I; extern  _GLOBAL_186_T  _GLOBAL_14_auth_hash_hmac_md5_96_I; extern  _GLOBAL_186_T  _GLOBAL_15_auth_hash_hmac_md5_96_I; extern  _GLOBAL_186_T  _GLOBAL_16_auth_hash_hmac_md5_96_I; extern  _GLOBAL_186_T  _GLOBAL_17_auth_hash_hmac_md5_96_I; extern  _GLOBAL_186_T  _GLOBAL_18_auth_hash_hmac_md5_96_I; extern  _GLOBAL_186_T  _GLOBAL_19_auth_hash_hmac_md5_96_I; extern  _GLOBAL_186_T  _GLOBAL_20_auth_hash_hmac_md5_96_I; extern  _GLOBAL_186_T  _GLOBAL_21_auth_hash_hmac_md5_96_I; extern  _GLOBAL_186_T  _GLOBAL_22_auth_hash_hmac_md5_96_I; extern  _GLOBAL_186_T  _GLOBAL_23_auth_hash_hmac_md5_96_I; extern  _GLOBAL_186_T  _GLOBAL_24_auth_hash_hmac_md5_96_I; extern  _GLOBAL_186_T  _GLOBAL_25_auth_hash_hmac_md5_96_I; extern  _GLOBAL_186_T  _GLOBAL_26_auth_hash_hmac_md5_96_I; extern  _GLOBAL_186_T  _GLOBAL_27_auth_hash_hmac_md5_96_I; extern  _GLOBAL_186_T  _GLOBAL_28_auth_hash_hmac_md5_96_I; extern  _GLOBAL_186_T  _GLOBAL_29_auth_hash_hmac_md5_96_I; extern  _GLOBAL_186_T  _GLOBAL_30_auth_hash_hmac_md5_96_I; extern  _GLOBAL_186_T  _GLOBAL_31_auth_hash_hmac_md5_96_I; extern  _GLOBAL_186_T  _GLOBAL_32_auth_hash_hmac_md5_96_I; extern  _GLOBAL_186_T  _GLOBAL_33_auth_hash_hmac_md5_96_I; extern  _GLOBAL_186_T  _GLOBAL_34_auth_hash_hmac_md5_96_I; extern  _GLOBAL_186_T  _GLOBAL_35_auth_hash_hmac_md5_96_I; extern  _GLOBAL_186_T  _GLOBAL_36_auth_hash_hmac_md5_96_I; extern  _GLOBAL_186_T  _GLOBAL_37_auth_hash_hmac_md5_96_I; extern  _GLOBAL_186_T  _GLOBAL_38_auth_hash_hmac_md5_96_I; extern  _GLOBAL_186_T  _GLOBAL_39_auth_hash_hmac_md5_96_I; extern  _GLOBAL_186_T  _GLOBAL_40_auth_hash_hmac_md5_96_I; extern  _GLOBAL_186_T  _GLOBAL_41_auth_hash_hmac_md5_96_I; extern  _GLOBAL_186_T  _GLOBAL_42_auth_hash_hmac_md5_96_I; extern  _GLOBAL_186_T  _GLOBAL_43_auth_hash_hmac_md5_96_I; extern  _GLOBAL_186_T  _GLOBAL_44_auth_hash_hmac_md5_96_I; extern  _GLOBAL_186_T  _GLOBAL_45_auth_hash_hmac_md5_96_I; extern  _GLOBAL_186_T  _GLOBAL_46_auth_hash_hmac_md5_96_I; extern  _GLOBAL_186_T  _GLOBAL_47_auth_hash_hmac_md5_96_I; extern  _GLOBAL_186_T  _GLOBAL_48_auth_hash_hmac_md5_96_I; extern  _GLOBAL_186_T  _GLOBAL_49_auth_hash_hmac_md5_96_I; static __attribute__ ((unused)) __typeof__(_GLOBAL_0_auth_hash_hmac_md5_96_I) *_GLOBAL_auth_hash_hmac_md5_96_35_A[NUM_STACKS];   
typedef  struct auth_hash   _GLOBAL_187_T; extern  _GLOBAL_187_T  _GLOBAL_0_auth_hash_hmac_sha1_96_I; extern  _GLOBAL_187_T  _GLOBAL_1_auth_hash_hmac_sha1_96_I; extern  _GLOBAL_187_T  _GLOBAL_2_auth_hash_hmac_sha1_96_I; extern  _GLOBAL_187_T  _GLOBAL_3_auth_hash_hmac_sha1_96_I; extern  _GLOBAL_187_T  _GLOBAL_4_auth_hash_hmac_sha1_96_I; extern  _GLOBAL_187_T  _GLOBAL_5_auth_hash_hmac_sha1_96_I; extern  _GLOBAL_187_T  _GLOBAL_6_auth_hash_hmac_sha1_96_I; extern  _GLOBAL_187_T  _GLOBAL_7_auth_hash_hmac_sha1_96_I; extern  _GLOBAL_187_T  _GLOBAL_8_auth_hash_hmac_sha1_96_I; extern  _GLOBAL_187_T  _GLOBAL_9_auth_hash_hmac_sha1_96_I; extern  _GLOBAL_187_T  _GLOBAL_10_auth_hash_hmac_sha1_96_I; extern  _GLOBAL_187_T  _GLOBAL_11_auth_hash_hmac_sha1_96_I; extern  _GLOBAL_187_T  _GLOBAL_12_auth_hash_hmac_sha1_96_I; extern  _GLOBAL_187_T  _GLOBAL_13_auth_hash_hmac_sha1_96_I; extern  _GLOBAL_187_T  _GLOBAL_14_auth_hash_hmac_sha1_96_I; extern  _GLOBAL_187_T  _GLOBAL_15_auth_hash_hmac_sha1_96_I; extern  _GLOBAL_187_T  _GLOBAL_16_auth_hash_hmac_sha1_96_I; extern  _GLOBAL_187_T  _GLOBAL_17_auth_hash_hmac_sha1_96_I; extern  _GLOBAL_187_T  _GLOBAL_18_auth_hash_hmac_sha1_96_I; extern  _GLOBAL_187_T  _GLOBAL_19_auth_hash_hmac_sha1_96_I; extern  _GLOBAL_187_T  _GLOBAL_20_auth_hash_hmac_sha1_96_I; extern  _GLOBAL_187_T  _GLOBAL_21_auth_hash_hmac_sha1_96_I; extern  _GLOBAL_187_T  _GLOBAL_22_auth_hash_hmac_sha1_96_I; extern  _GLOBAL_187_T  _GLOBAL_23_auth_hash_hmac_sha1_96_I; extern  _GLOBAL_187_T  _GLOBAL_24_auth_hash_hmac_sha1_96_I; extern  _GLOBAL_187_T  _GLOBAL_25_auth_hash_hmac_sha1_96_I; extern  _GLOBAL_187_T  _GLOBAL_26_auth_hash_hmac_sha1_96_I; extern  _GLOBAL_187_T  _GLOBAL_27_auth_hash_hmac_sha1_96_I; extern  _GLOBAL_187_T  _GLOBAL_28_auth_hash_hmac_sha1_96_I; extern  _GLOBAL_187_T  _GLOBAL_29_auth_hash_hmac_sha1_96_I; extern  _GLOBAL_187_T  _GLOBAL_30_auth_hash_hmac_sha1_96_I; extern  _GLOBAL_187_T  _GLOBAL_31_auth_hash_hmac_sha1_96_I; extern  _GLOBAL_187_T  _GLOBAL_32_auth_hash_hmac_sha1_96_I; extern  _GLOBAL_187_T  _GLOBAL_33_auth_hash_hmac_sha1_96_I; extern  _GLOBAL_187_T  _GLOBAL_34_auth_hash_hmac_sha1_96_I; extern  _GLOBAL_187_T  _GLOBAL_35_auth_hash_hmac_sha1_96_I; extern  _GLOBAL_187_T  _GLOBAL_36_auth_hash_hmac_sha1_96_I; extern  _GLOBAL_187_T  _GLOBAL_37_auth_hash_hmac_sha1_96_I; extern  _GLOBAL_187_T  _GLOBAL_38_auth_hash_hmac_sha1_96_I; extern  _GLOBAL_187_T  _GLOBAL_39_auth_hash_hmac_sha1_96_I; extern  _GLOBAL_187_T  _GLOBAL_40_auth_hash_hmac_sha1_96_I; extern  _GLOBAL_187_T  _GLOBAL_41_auth_hash_hmac_sha1_96_I; extern  _GLOBAL_187_T  _GLOBAL_42_auth_hash_hmac_sha1_96_I; extern  _GLOBAL_187_T  _GLOBAL_43_auth_hash_hmac_sha1_96_I; extern  _GLOBAL_187_T  _GLOBAL_44_auth_hash_hmac_sha1_96_I; extern  _GLOBAL_187_T  _GLOBAL_45_auth_hash_hmac_sha1_96_I; extern  _GLOBAL_187_T  _GLOBAL_46_auth_hash_hmac_sha1_96_I; extern  _GLOBAL_187_T  _GLOBAL_47_auth_hash_hmac_sha1_96_I; extern  _GLOBAL_187_T  _GLOBAL_48_auth_hash_hmac_sha1_96_I; extern  _GLOBAL_187_T  _GLOBAL_49_auth_hash_hmac_sha1_96_I; static __attribute__ ((unused)) __typeof__(_GLOBAL_0_auth_hash_hmac_sha1_96_I) *_GLOBAL_auth_hash_hmac_sha1_96_36_A[NUM_STACKS];   
typedef  struct auth_hash   _GLOBAL_188_T; extern  _GLOBAL_188_T  _GLOBAL_0_auth_hash_hmac_ripemd_160_96_I; extern  _GLOBAL_188_T  _GLOBAL_1_auth_hash_hmac_ripemd_160_96_I; extern  _GLOBAL_188_T  _GLOBAL_2_auth_hash_hmac_ripemd_160_96_I; extern  _GLOBAL_188_T  _GLOBAL_3_auth_hash_hmac_ripemd_160_96_I; extern  _GLOBAL_188_T  _GLOBAL_4_auth_hash_hmac_ripemd_160_96_I; extern  _GLOBAL_188_T  _GLOBAL_5_auth_hash_hmac_ripemd_160_96_I; extern  _GLOBAL_188_T  _GLOBAL_6_auth_hash_hmac_ripemd_160_96_I; extern  _GLOBAL_188_T  _GLOBAL_7_auth_hash_hmac_ripemd_160_96_I; extern  _GLOBAL_188_T  _GLOBAL_8_auth_hash_hmac_ripemd_160_96_I; extern  _GLOBAL_188_T  _GLOBAL_9_auth_hash_hmac_ripemd_160_96_I; extern  _GLOBAL_188_T  _GLOBAL_10_auth_hash_hmac_ripemd_160_96_I; extern  _GLOBAL_188_T  _GLOBAL_11_auth_hash_hmac_ripemd_160_96_I; extern  _GLOBAL_188_T  _GLOBAL_12_auth_hash_hmac_ripemd_160_96_I; extern  _GLOBAL_188_T  _GLOBAL_13_auth_hash_hmac_ripemd_160_96_I; extern  _GLOBAL_188_T  _GLOBAL_14_auth_hash_hmac_ripemd_160_96_I; extern  _GLOBAL_188_T  _GLOBAL_15_auth_hash_hmac_ripemd_160_96_I; extern  _GLOBAL_188_T  _GLOBAL_16_auth_hash_hmac_ripemd_160_96_I; extern  _GLOBAL_188_T  _GLOBAL_17_auth_hash_hmac_ripemd_160_96_I; extern  _GLOBAL_188_T  _GLOBAL_18_auth_hash_hmac_ripemd_160_96_I; extern  _GLOBAL_188_T  _GLOBAL_19_auth_hash_hmac_ripemd_160_96_I; extern  _GLOBAL_188_T  _GLOBAL_20_auth_hash_hmac_ripemd_160_96_I; extern  _GLOBAL_188_T  _GLOBAL_21_auth_hash_hmac_ripemd_160_96_I; extern  _GLOBAL_188_T  _GLOBAL_22_auth_hash_hmac_ripemd_160_96_I; extern  _GLOBAL_188_T  _GLOBAL_23_auth_hash_hmac_ripemd_160_96_I; extern  _GLOBAL_188_T  _GLOBAL_24_auth_hash_hmac_ripemd_160_96_I; extern  _GLOBAL_188_T  _GLOBAL_25_auth_hash_hmac_ripemd_160_96_I; extern  _GLOBAL_188_T  _GLOBAL_26_auth_hash_hmac_ripemd_160_96_I; extern  _GLOBAL_188_T  _GLOBAL_27_auth_hash_hmac_ripemd_160_96_I; extern  _GLOBAL_188_T  _GLOBAL_28_auth_hash_hmac_ripemd_160_96_I; extern  _GLOBAL_188_T  _GLOBAL_29_auth_hash_hmac_ripemd_160_96_I; extern  _GLOBAL_188_T  _GLOBAL_30_auth_hash_hmac_ripemd_160_96_I; extern  _GLOBAL_188_T  _GLOBAL_31_auth_hash_hmac_ripemd_160_96_I; extern  _GLOBAL_188_T  _GLOBAL_32_auth_hash_hmac_ripemd_160_96_I; extern  _GLOBAL_188_T  _GLOBAL_33_auth_hash_hmac_ripemd_160_96_I; extern  _GLOBAL_188_T  _GLOBAL_34_auth_hash_hmac_ripemd_160_96_I; extern  _GLOBAL_188_T  _GLOBAL_35_auth_hash_hmac_ripemd_160_96_I; extern  _GLOBAL_188_T  _GLOBAL_36_auth_hash_hmac_ripemd_160_96_I; extern  _GLOBAL_188_T  _GLOBAL_37_auth_hash_hmac_ripemd_160_96_I; extern  _GLOBAL_188_T  _GLOBAL_38_auth_hash_hmac_ripemd_160_96_I; extern  _GLOBAL_188_T  _GLOBAL_39_auth_hash_hmac_ripemd_160_96_I; extern  _GLOBAL_188_T  _GLOBAL_40_auth_hash_hmac_ripemd_160_96_I; extern  _GLOBAL_188_T  _GLOBAL_41_auth_hash_hmac_ripemd_160_96_I; extern  _GLOBAL_188_T  _GLOBAL_42_auth_hash_hmac_ripemd_160_96_I; extern  _GLOBAL_188_T  _GLOBAL_43_auth_hash_hmac_ripemd_160_96_I; extern  _GLOBAL_188_T  _GLOBAL_44_auth_hash_hmac_ripemd_160_96_I; extern  _GLOBAL_188_T  _GLOBAL_45_auth_hash_hmac_ripemd_160_96_I; extern  _GLOBAL_188_T  _GLOBAL_46_auth_hash_hmac_ripemd_160_96_I; extern  _GLOBAL_188_T  _GLOBAL_47_auth_hash_hmac_ripemd_160_96_I; extern  _GLOBAL_188_T  _GLOBAL_48_auth_hash_hmac_ripemd_160_96_I; extern  _GLOBAL_188_T  _GLOBAL_49_auth_hash_hmac_ripemd_160_96_I; static __attribute__ ((unused)) __typeof__(_GLOBAL_0_auth_hash_hmac_ripemd_160_96_I) *_GLOBAL_auth_hash_hmac_ripemd_160_96_37_A[NUM_STACKS];   

typedef  struct comp_algo   _GLOBAL_189_T; extern  _GLOBAL_189_T  _GLOBAL_0_comp_algo_deflate_I; extern  _GLOBAL_189_T  _GLOBAL_1_comp_algo_deflate_I; extern  _GLOBAL_189_T  _GLOBAL_2_comp_algo_deflate_I; extern  _GLOBAL_189_T  _GLOBAL_3_comp_algo_deflate_I; extern  _GLOBAL_189_T  _GLOBAL_4_comp_algo_deflate_I; extern  _GLOBAL_189_T  _GLOBAL_5_comp_algo_deflate_I; extern  _GLOBAL_189_T  _GLOBAL_6_comp_algo_deflate_I; extern  _GLOBAL_189_T  _GLOBAL_7_comp_algo_deflate_I; extern  _GLOBAL_189_T  _GLOBAL_8_comp_algo_deflate_I; extern  _GLOBAL_189_T  _GLOBAL_9_comp_algo_deflate_I; extern  _GLOBAL_189_T  _GLOBAL_10_comp_algo_deflate_I; extern  _GLOBAL_189_T  _GLOBAL_11_comp_algo_deflate_I; extern  _GLOBAL_189_T  _GLOBAL_12_comp_algo_deflate_I; extern  _GLOBAL_189_T  _GLOBAL_13_comp_algo_deflate_I; extern  _GLOBAL_189_T  _GLOBAL_14_comp_algo_deflate_I; extern  _GLOBAL_189_T  _GLOBAL_15_comp_algo_deflate_I; extern  _GLOBAL_189_T  _GLOBAL_16_comp_algo_deflate_I; extern  _GLOBAL_189_T  _GLOBAL_17_comp_algo_deflate_I; extern  _GLOBAL_189_T  _GLOBAL_18_comp_algo_deflate_I; extern  _GLOBAL_189_T  _GLOBAL_19_comp_algo_deflate_I; extern  _GLOBAL_189_T  _GLOBAL_20_comp_algo_deflate_I; extern  _GLOBAL_189_T  _GLOBAL_21_comp_algo_deflate_I; extern  _GLOBAL_189_T  _GLOBAL_22_comp_algo_deflate_I; extern  _GLOBAL_189_T  _GLOBAL_23_comp_algo_deflate_I; extern  _GLOBAL_189_T  _GLOBAL_24_comp_algo_deflate_I; extern  _GLOBAL_189_T  _GLOBAL_25_comp_algo_deflate_I; extern  _GLOBAL_189_T  _GLOBAL_26_comp_algo_deflate_I; extern  _GLOBAL_189_T  _GLOBAL_27_comp_algo_deflate_I; extern  _GLOBAL_189_T  _GLOBAL_28_comp_algo_deflate_I; extern  _GLOBAL_189_T  _GLOBAL_29_comp_algo_deflate_I; extern  _GLOBAL_189_T  _GLOBAL_30_comp_algo_deflate_I; extern  _GLOBAL_189_T  _GLOBAL_31_comp_algo_deflate_I; extern  _GLOBAL_189_T  _GLOBAL_32_comp_algo_deflate_I; extern  _GLOBAL_189_T  _GLOBAL_33_comp_algo_deflate_I; extern  _GLOBAL_189_T  _GLOBAL_34_comp_algo_deflate_I; extern  _GLOBAL_189_T  _GLOBAL_35_comp_algo_deflate_I; extern  _GLOBAL_189_T  _GLOBAL_36_comp_algo_deflate_I; extern  _GLOBAL_189_T  _GLOBAL_37_comp_algo_deflate_I; extern  _GLOBAL_189_T  _GLOBAL_38_comp_algo_deflate_I; extern  _GLOBAL_189_T  _GLOBAL_39_comp_algo_deflate_I; extern  _GLOBAL_189_T  _GLOBAL_40_comp_algo_deflate_I; extern  _GLOBAL_189_T  _GLOBAL_41_comp_algo_deflate_I; extern  _GLOBAL_189_T  _GLOBAL_42_comp_algo_deflate_I; extern  _GLOBAL_189_T  _GLOBAL_43_comp_algo_deflate_I; extern  _GLOBAL_189_T  _GLOBAL_44_comp_algo_deflate_I; extern  _GLOBAL_189_T  _GLOBAL_45_comp_algo_deflate_I; extern  _GLOBAL_189_T  _GLOBAL_46_comp_algo_deflate_I; extern  _GLOBAL_189_T  _GLOBAL_47_comp_algo_deflate_I; extern  _GLOBAL_189_T  _GLOBAL_48_comp_algo_deflate_I; extern  _GLOBAL_189_T  _GLOBAL_49_comp_algo_deflate_I; static __attribute__ ((unused)) __typeof__(_GLOBAL_0_comp_algo_deflate_I) *_GLOBAL_comp_algo_deflate_38_A[NUM_STACKS];   

typedef  struct ipsec_policy_head { struct ipsec_policy   * tqh_first  ;  struct ipsec_policy   * *  tqh_last  ;   }   _GLOBAL_190_T; extern  _GLOBAL_190_T  global_ipsec_policy_head[NUM_STACKS];            
typedef  struct ipsec_acquire_head { struct ipsec_acquire   * tqh_first  ;  struct ipsec_acquire   * *  tqh_last  ;   }   _GLOBAL_191_T; extern  _GLOBAL_191_T  global_ipsec_acquire_head[NUM_STACKS];            

typedef  struct xformsw   _GLOBAL_192_T; extern  _GLOBAL_192_T  _GLOBAL_0_xformsw_I [ ] ; extern  _GLOBAL_192_T  _GLOBAL_1_xformsw_I [ ] ; extern  _GLOBAL_192_T  _GLOBAL_2_xformsw_I [ ] ; extern  _GLOBAL_192_T  _GLOBAL_3_xformsw_I [ ] ; extern  _GLOBAL_192_T  _GLOBAL_4_xformsw_I [ ] ; extern  _GLOBAL_192_T  _GLOBAL_5_xformsw_I [ ] ; extern  _GLOBAL_192_T  _GLOBAL_6_xformsw_I [ ] ; extern  _GLOBAL_192_T  _GLOBAL_7_xformsw_I [ ] ; extern  _GLOBAL_192_T  _GLOBAL_8_xformsw_I [ ] ; extern  _GLOBAL_192_T  _GLOBAL_9_xformsw_I [ ] ; extern  _GLOBAL_192_T  _GLOBAL_10_xformsw_I [ ] ; extern  _GLOBAL_192_T  _GLOBAL_11_xformsw_I [ ] ; extern  _GLOBAL_192_T  _GLOBAL_12_xformsw_I [ ] ; extern  _GLOBAL_192_T  _GLOBAL_13_xformsw_I [ ] ; extern  _GLOBAL_192_T  _GLOBAL_14_xformsw_I [ ] ; extern  _GLOBAL_192_T  _GLOBAL_15_xformsw_I [ ] ; extern  _GLOBAL_192_T  _GLOBAL_16_xformsw_I [ ] ; extern  _GLOBAL_192_T  _GLOBAL_17_xformsw_I [ ] ; extern  _GLOBAL_192_T  _GLOBAL_18_xformsw_I [ ] ; extern  _GLOBAL_192_T  _GLOBAL_19_xformsw_I [ ] ; extern  _GLOBAL_192_T  _GLOBAL_20_xformsw_I [ ] ; extern  _GLOBAL_192_T  _GLOBAL_21_xformsw_I [ ] ; extern  _GLOBAL_192_T  _GLOBAL_22_xformsw_I [ ] ; extern  _GLOBAL_192_T  _GLOBAL_23_xformsw_I [ ] ; extern  _GLOBAL_192_T  _GLOBAL_24_xformsw_I [ ] ; extern  _GLOBAL_192_T  _GLOBAL_25_xformsw_I [ ] ; extern  _GLOBAL_192_T  _GLOBAL_26_xformsw_I [ ] ; extern  _GLOBAL_192_T  _GLOBAL_27_xformsw_I [ ] ; extern  _GLOBAL_192_T  _GLOBAL_28_xformsw_I [ ] ; extern  _GLOBAL_192_T  _GLOBAL_29_xformsw_I [ ] ; extern  _GLOBAL_192_T  _GLOBAL_30_xformsw_I [ ] ; extern  _GLOBAL_192_T  _GLOBAL_31_xformsw_I [ ] ; extern  _GLOBAL_192_T  _GLOBAL_32_xformsw_I [ ] ; extern  _GLOBAL_192_T  _GLOBAL_33_xformsw_I [ ] ; extern  _GLOBAL_192_T  _GLOBAL_34_xformsw_I [ ] ; extern  _GLOBAL_192_T  _GLOBAL_35_xformsw_I [ ] ; extern  _GLOBAL_192_T  _GLOBAL_36_xformsw_I [ ] ; extern  _GLOBAL_192_T  _GLOBAL_37_xformsw_I [ ] ; extern  _GLOBAL_192_T  _GLOBAL_38_xformsw_I [ ] ; extern  _GLOBAL_192_T  _GLOBAL_39_xformsw_I [ ] ; extern  _GLOBAL_192_T  _GLOBAL_40_xformsw_I [ ] ; extern  _GLOBAL_192_T  _GLOBAL_41_xformsw_I [ ] ; extern  _GLOBAL_192_T  _GLOBAL_42_xformsw_I [ ] ; extern  _GLOBAL_192_T  _GLOBAL_43_xformsw_I [ ] ; extern  _GLOBAL_192_T  _GLOBAL_44_xformsw_I [ ] ; extern  _GLOBAL_192_T  _GLOBAL_45_xformsw_I [ ] ; extern  _GLOBAL_192_T  _GLOBAL_46_xformsw_I [ ] ; extern  _GLOBAL_192_T  _GLOBAL_47_xformsw_I [ ] ; extern  _GLOBAL_192_T  _GLOBAL_48_xformsw_I [ ] ; extern  _GLOBAL_192_T  _GLOBAL_49_xformsw_I [ ] ; static __attribute__ ((unused)) __typeof__(_GLOBAL_0_xformsw_I) *_GLOBAL_xformsw_39_A[NUM_STACKS];extern  _GLOBAL_192_T  * global_xformswNXFORMSW[NUM_STACKS];     
# 522 "openbsd3/netinet/ip_ipsp.h"
extern char *inet_ntoa4(struct in_addr);
extern char *ipsp_address(union sockaddr_union);


extern void tdb_add_inp(struct tdb *, struct inpcb *, int);
extern u_int32_t reserve_spi(u_int32_t, u_int32_t, union sockaddr_union *,
    union sockaddr_union *, u_int8_t, int *);
extern struct tdb *gettdb(u_int32_t, union sockaddr_union *, u_int8_t);
extern struct tdb *gettdbbyaddr(union sockaddr_union *, u_int8_t,
    struct ipsec_ref *, struct ipsec_ref *, struct ipsec_ref *,
    struct mbuf *, int, struct sockaddr_encap *, struct sockaddr_encap *);
extern struct tdb *gettdbbysrc(union sockaddr_union *, u_int8_t,
    struct ipsec_ref *, struct ipsec_ref *, struct mbuf *, int,
    struct sockaddr_encap *, struct sockaddr_encap *);
extern struct tdb *gettdbbysrcdst(u_int32_t, union sockaddr_union *,
    union sockaddr_union *, u_int8_t);
extern void puttdb(struct tdb *);
extern void tdb_delete(struct tdb *);
extern struct tdb *tdb_alloc(void);
extern int tdb_init(struct tdb *, u_int16_t, struct ipsecinit *);
extern int tdb_walk(int (*)(struct tdb *, void *, int), void *);


extern int ipe4_attach(void);
extern int ipe4_init(struct tdb *, struct xformsw *, struct ipsecinit *);
extern int ipe4_zeroize(struct tdb *);
extern int ipip_output(struct mbuf *, struct tdb *, struct mbuf **, int, int);
extern void ipe4_input(struct mbuf *, ...);
extern void ipip_input(struct mbuf *, int, struct ifnet *);


extern void ip4_input(struct mbuf *, ...);



extern int ip4_input6(struct mbuf **, int *, int);



extern int etherip_output(struct mbuf *, struct tdb *, struct mbuf **,
    int, int);
extern void etherip_input(struct mbuf *, ...);


extern int ah_attach(void);
extern int ah_init(struct tdb *, struct xformsw *, struct ipsecinit *);
extern int ah_zeroize(struct tdb *);
extern int ah_output(struct mbuf *, struct tdb *, struct mbuf **, int, int);
extern int ah_output_cb(void *);
extern int ah_input(struct mbuf *, struct tdb *, int, int);
extern int ah_input_cb(void *);
extern int ah_sysctl(int *, u_int, void *, size_t *, void *, size_t);
extern int ah_massage_headers(struct mbuf **, int, int, int, int);


extern void ah4_input(struct mbuf *, ...);
extern int ah4_input_cb(struct mbuf *, ...);
extern void *ah4_ctlinput(int, struct sockaddr *, void *);



extern int ah6_input(struct mbuf **, int *, int);
extern int ah6_input_cb(struct mbuf *, int, int);



extern int esp_attach(void);
extern int esp_init(struct tdb *, struct xformsw *, struct ipsecinit *);
extern int esp_zeroize(struct tdb *);
extern int esp_output(struct mbuf *, struct tdb *, struct mbuf **, int, int);
extern int esp_output_cb(void *);
extern int esp_input(struct mbuf *, struct tdb *, int, int);
extern int esp_input_cb(void *);
extern int esp_sysctl(int *, u_int, void *, size_t *, void *, size_t);


extern void esp4_input(struct mbuf *, ...);
extern int esp4_input_cb(struct mbuf *, ...);
extern void *esp4_ctlinput(int, struct sockaddr *, void *);



extern int esp6_input(struct mbuf **, int *, int);
extern int esp6_input_cb(struct mbuf *, int, int);



extern int ipcomp_attach(void);
extern int ipcomp_init(struct tdb *, struct xformsw *, struct ipsecinit *);
extern int ipcomp_zeroize(struct tdb *);
extern int ipcomp_output(struct mbuf *, struct tdb *, struct mbuf **, int, int);
extern int ipcomp_output_cb(void *);
extern int ipcomp_input(struct mbuf *, struct tdb *, int, int);
extern int ipcomp_input_cb(void *);
extern int ipcomp_sysctl(int *, u_int, void *, size_t *, void *, size_t);


extern void ipcomp4_input(struct mbuf *, ...);
extern int ipcomp4_input_cb(struct mbuf *, ...);



extern int ipcomp6_input(struct mbuf **, int *, int);
extern int ipcomp6_input_cb(struct mbuf *, int, int);



extern int tcp_signature_tdb_attach(void);
extern int tcp_signature_tdb_init(struct tdb *, struct xformsw *,
    struct ipsecinit *);
extern int tcp_signature_tdb_zeroize(struct tdb *);
extern int tcp_signature_tdb_input(struct mbuf *, struct tdb *, int,
    int);
extern int tcp_signature_tdb_output(struct mbuf *, struct tdb *,
    struct mbuf **, int, int);


extern caddr_t m_pad(struct mbuf *, int);


extern int checkreplaywindow32(u_int32_t, u_int32_t, u_int32_t *, u_int32_t,
    u_int32_t *, int);

typedef  unsigned char   _GLOBAL_193_T; extern  _GLOBAL_193_T  _GLOBAL_0_ipseczeroes_I [ ] ; extern  _GLOBAL_193_T  _GLOBAL_1_ipseczeroes_I [ ] ; extern  _GLOBAL_193_T  _GLOBAL_2_ipseczeroes_I [ ] ; extern  _GLOBAL_193_T  _GLOBAL_3_ipseczeroes_I [ ] ; extern  _GLOBAL_193_T  _GLOBAL_4_ipseczeroes_I [ ] ; extern  _GLOBAL_193_T  _GLOBAL_5_ipseczeroes_I [ ] ; extern  _GLOBAL_193_T  _GLOBAL_6_ipseczeroes_I [ ] ; extern  _GLOBAL_193_T  _GLOBAL_7_ipseczeroes_I [ ] ; extern  _GLOBAL_193_T  _GLOBAL_8_ipseczeroes_I [ ] ; extern  _GLOBAL_193_T  _GLOBAL_9_ipseczeroes_I [ ] ; extern  _GLOBAL_193_T  _GLOBAL_10_ipseczeroes_I [ ] ; extern  _GLOBAL_193_T  _GLOBAL_11_ipseczeroes_I [ ] ; extern  _GLOBAL_193_T  _GLOBAL_12_ipseczeroes_I [ ] ; extern  _GLOBAL_193_T  _GLOBAL_13_ipseczeroes_I [ ] ; extern  _GLOBAL_193_T  _GLOBAL_14_ipseczeroes_I [ ] ; extern  _GLOBAL_193_T  _GLOBAL_15_ipseczeroes_I [ ] ; extern  _GLOBAL_193_T  _GLOBAL_16_ipseczeroes_I [ ] ; extern  _GLOBAL_193_T  _GLOBAL_17_ipseczeroes_I [ ] ; extern  _GLOBAL_193_T  _GLOBAL_18_ipseczeroes_I [ ] ; extern  _GLOBAL_193_T  _GLOBAL_19_ipseczeroes_I [ ] ; extern  _GLOBAL_193_T  _GLOBAL_20_ipseczeroes_I [ ] ; extern  _GLOBAL_193_T  _GLOBAL_21_ipseczeroes_I [ ] ; extern  _GLOBAL_193_T  _GLOBAL_22_ipseczeroes_I [ ] ; extern  _GLOBAL_193_T  _GLOBAL_23_ipseczeroes_I [ ] ; extern  _GLOBAL_193_T  _GLOBAL_24_ipseczeroes_I [ ] ; extern  _GLOBAL_193_T  _GLOBAL_25_ipseczeroes_I [ ] ; extern  _GLOBAL_193_T  _GLOBAL_26_ipseczeroes_I [ ] ; extern  _GLOBAL_193_T  _GLOBAL_27_ipseczeroes_I [ ] ; extern  _GLOBAL_193_T  _GLOBAL_28_ipseczeroes_I [ ] ; extern  _GLOBAL_193_T  _GLOBAL_29_ipseczeroes_I [ ] ; extern  _GLOBAL_193_T  _GLOBAL_30_ipseczeroes_I [ ] ; extern  _GLOBAL_193_T  _GLOBAL_31_ipseczeroes_I [ ] ; extern  _GLOBAL_193_T  _GLOBAL_32_ipseczeroes_I [ ] ; extern  _GLOBAL_193_T  _GLOBAL_33_ipseczeroes_I [ ] ; extern  _GLOBAL_193_T  _GLOBAL_34_ipseczeroes_I [ ] ; extern  _GLOBAL_193_T  _GLOBAL_35_ipseczeroes_I [ ] ; extern  _GLOBAL_193_T  _GLOBAL_36_ipseczeroes_I [ ] ; extern  _GLOBAL_193_T  _GLOBAL_37_ipseczeroes_I [ ] ; extern  _GLOBAL_193_T  _GLOBAL_38_ipseczeroes_I [ ] ; extern  _GLOBAL_193_T  _GLOBAL_39_ipseczeroes_I [ ] ; extern  _GLOBAL_193_T  _GLOBAL_40_ipseczeroes_I [ ] ; extern  _GLOBAL_193_T  _GLOBAL_41_ipseczeroes_I [ ] ; extern  _GLOBAL_193_T  _GLOBAL_42_ipseczeroes_I [ ] ; extern  _GLOBAL_193_T  _GLOBAL_43_ipseczeroes_I [ ] ; extern  _GLOBAL_193_T  _GLOBAL_44_ipseczeroes_I [ ] ; extern  _GLOBAL_193_T  _GLOBAL_45_ipseczeroes_I [ ] ; extern  _GLOBAL_193_T  _GLOBAL_46_ipseczeroes_I [ ] ; extern  _GLOBAL_193_T  _GLOBAL_47_ipseczeroes_I [ ] ; extern  _GLOBAL_193_T  _GLOBAL_48_ipseczeroes_I [ ] ; extern  _GLOBAL_193_T  _GLOBAL_49_ipseczeroes_I [ ] ; static __attribute__ ((unused)) __typeof__(_GLOBAL_0_ipseczeroes_I) *_GLOBAL_ipseczeroes_40_A[NUM_STACKS];   


extern int ipsp_process_packet(struct mbuf *, struct tdb *, int, int);
extern int ipsp_process_done(struct mbuf *, struct tdb *);
extern struct tdb *ipsp_spd_lookup(struct mbuf *, int, int, int *, int,
    struct tdb *, struct inpcb *);
extern struct tdb *ipsp_spd_inp(struct mbuf *, int, int, int *, int,
    struct tdb *, struct inpcb *, struct ipsec_policy *);
extern int ipsec_common_input(struct mbuf *, int, int, int, int, int);
extern int ipsec_common_input_cb(struct mbuf *, struct tdb *, int, int,
    struct m_tag *);
extern int ipsp_acquire_sa(struct ipsec_policy *, union sockaddr_union *,
    union sockaddr_union *, struct sockaddr_encap *, struct mbuf *);
extern struct ipsec_policy *ipsec_add_policy(struct inpcb *, int, int);
extern void ipsec_update_policy(struct inpcb *, struct ipsec_policy *,
    int, int);
extern int ipsec_delete_policy(struct ipsec_policy *);
extern struct ipsec_acquire *ipsp_pending_acquire(struct ipsec_policy *,
    union sockaddr_union *);
extern void ipsp_delete_acquire(void *);
extern int ipsp_is_unspecified(union sockaddr_union);
extern void ipsp_reffree(struct ipsec_ref *);
extern void ipsp_skipcrypto_unmark(struct tdb_ident *);
extern void ipsp_skipcrypto_mark(struct tdb_ident *);
extern struct m_tag *ipsp_parse_headers(struct mbuf *, int, u_int8_t);
extern int ipsp_ref_match(struct ipsec_ref *, struct ipsec_ref *);
extern ssize_t ipsec_hdrsz(struct tdb *);
extern void ipsec_adjust_mtu(struct mbuf *, u_int32_t);
extern int ipsp_print_tdb(struct tdb *, char *, size_t);
extern struct ipsec_acquire *ipsec_get_acquire(u_int32_t);
extern int ipsp_aux_match(struct ipsec_ref *, struct ipsec_ref *,
    struct ipsec_ref *, struct ipsec_ref *, struct ipsec_ref *,
    struct ipsec_ref *, struct ipsec_ref *, struct ipsec_ref *,
    struct sockaddr_encap *, struct sockaddr_encap *,
    struct sockaddr_encap *, struct sockaddr_encap *);
# 72 "openbsd3/netinet/in_pcb.h" 2

union inpaddru {
 struct in6_addr iau_addr6;
 struct {
  uint8_t pad[12];
  struct in_addr inaddr;
 } iau_a4u;
};
# 88 "openbsd3/netinet/in_pcb.h"
struct inpcb {
 struct { struct inpcb *le_next; struct inpcb **le_prev; } inp_hash;
 struct { struct inpcb *le_next; struct inpcb **le_prev; } inp_lhash;
 struct { struct inpcb *cqe_next; struct inpcb *cqe_prev; } inp_queue;
 struct inpcbtable *inp_table;
 union inpaddru inp_faddru;
 union inpaddru inp_laddru;




 u_int16_t inp_fport;
 u_int16_t inp_lport;
 struct socket *inp_socket;
 caddr_t inp_ppcb;
 union {
  struct route ru_route;
  struct route_in6 ru_route6;
 } inp_ru;


 int inp_flags;
 union {
  struct ip hu_ip;
  struct ip6_hdr hu_ipv6;
 } inp_hu;


 struct mbuf *inp_options;
 struct ip6_pktopts *inp_outputopts6;
 int inp_hops;
 union {
  struct ip_moptions *mou_mo;
  struct ip6_moptions *mou_mo6;
 } inp_mou;


 u_char inp_seclevel[4];




 u_int8_t inp_secrequire:4,
           inp_secresult:4;



 struct { struct inpcb *tqe_next; struct inpcb **tqe_prev; } inp_tdb_in_next, inp_tdb_out_next;
 struct tdb *inp_tdb_in, *inp_tdb_out;
 struct ipsec_policy *inp_ipo;
 struct ipsec_ref *inp_ipsec_remotecred;
 struct ipsec_ref *inp_ipsec_remoteauth;


 int in6p_cksum;



 struct icmp6_filter *inp_icmp6filt;
};

struct inpcbtable {
 struct { struct inpcb *cqh_first; struct inpcb *cqh_last; } inpt_queue;
 struct inpcbhead { struct inpcb *lh_first; } *inpt_hashtbl, *inpt_lhashtbl;
 u_long inpt_hash, inpt_lhash;
 u_int16_t inpt_lastport;
};
# 223 "openbsd3/netinet/in_pcb.h"
struct baddynamicports {
 u_int32_t tcp[((((1024/2) + (((sizeof(u_int32_t) * 8)) - 1)) / ((sizeof(u_int32_t) * 8))))];
 u_int32_t udp[((((1024/2) + (((sizeof(u_int32_t) * 8)) - 1)) / ((sizeof(u_int32_t) * 8))))];
};





void in_losing(struct inpcb *);
int in_pcballoc(struct socket *, void *);
int in_pcbbind(void *, struct mbuf *);
int in_pcbconnect(void *, struct mbuf *);
void in_pcbdetach(void *);
void in_pcbdisconnect(void *);
struct inpcb *
  in_pcbhashlookup(struct inpcbtable *, struct in_addr,
          u_int, struct in_addr, u_int);
struct inpcb *
  in_pcblookup_listen(struct inpcbtable *, struct in_addr, u_int, int);

struct inpcb *
  in6_pcbhashlookup(struct inpcbtable *, struct in6_addr *,
          u_int, struct in6_addr *, u_int);
struct inpcb *
  in6_pcblookup_listen(struct inpcbtable *,
          struct in6_addr *, u_int, int);
int in6_pcbbind(struct inpcb *, struct mbuf *);
int in6_pcbconnect(struct inpcb *, struct mbuf *);
int in6_setsockaddr(struct inpcb *, struct mbuf *);
int in6_setpeeraddr(struct inpcb *, struct mbuf *);

void in_pcbinit(struct inpcbtable *, int);
struct inpcb *
  in_pcblookup(struct inpcbtable *, void *, u_int, void *,
     u_int, int);
int in_pcbnotify(struct inpcbtable *, struct sockaddr *,
     u_int, struct in_addr, u_int, int, void (*)(struct inpcb *, int));
void in_pcbnotifyall(struct inpcbtable *, struct sockaddr *,
     int, void (*)(struct inpcb *, int));
void in_pcbrehash(struct inpcb *);
void in_rtchange(struct inpcb *, int);
void in_setpeeraddr(struct inpcb *, struct mbuf *);
void in_setsockaddr(struct inpcb *, struct mbuf *);
int in_baddynamic(u_int16_t, u_int16_t);
extern struct sockaddr_in *in_selectsrc(struct sockaddr_in *,
 struct route *, int, struct ip_moptions *, int *);
struct rtentry *
 in_pcbrtentry(struct inpcb *);


int in6_pcbnotify(struct inpcbtable *, struct sockaddr *,
 u_int, struct sockaddr *, u_int, int, void *,
 void (*)(struct inpcb *, int));
int in6_selecthlim(struct inpcb *, struct ifnet *);
int in6_pcbsetport(struct in6_addr *, struct inpcb *, struct proc *);
# 67 "openbsd3/net/pf.c" 2
# 1 "openbsd3/netinet/tcp_timer.h" 1
# 142 "openbsd3/netinet/tcp_timer.h"
typedef void (*tcp_timer_func_t)(void *);

typedef  const tcp_timer_func_t   _GLOBAL_194_T; extern  _GLOBAL_194_T  _GLOBAL_0_tcp_timer_funcs_I [ 4 ] ; extern  _GLOBAL_194_T  _GLOBAL_1_tcp_timer_funcs_I [ 4 ] ; extern  _GLOBAL_194_T  _GLOBAL_2_tcp_timer_funcs_I [ 4 ] ; extern  _GLOBAL_194_T  _GLOBAL_3_tcp_timer_funcs_I [ 4 ] ; extern  _GLOBAL_194_T  _GLOBAL_4_tcp_timer_funcs_I [ 4 ] ; extern  _GLOBAL_194_T  _GLOBAL_5_tcp_timer_funcs_I [ 4 ] ; extern  _GLOBAL_194_T  _GLOBAL_6_tcp_timer_funcs_I [ 4 ] ; extern  _GLOBAL_194_T  _GLOBAL_7_tcp_timer_funcs_I [ 4 ] ; extern  _GLOBAL_194_T  _GLOBAL_8_tcp_timer_funcs_I [ 4 ] ; extern  _GLOBAL_194_T  _GLOBAL_9_tcp_timer_funcs_I [ 4 ] ; extern  _GLOBAL_194_T  _GLOBAL_10_tcp_timer_funcs_I [ 4 ] ; extern  _GLOBAL_194_T  _GLOBAL_11_tcp_timer_funcs_I [ 4 ] ; extern  _GLOBAL_194_T  _GLOBAL_12_tcp_timer_funcs_I [ 4 ] ; extern  _GLOBAL_194_T  _GLOBAL_13_tcp_timer_funcs_I [ 4 ] ; extern  _GLOBAL_194_T  _GLOBAL_14_tcp_timer_funcs_I [ 4 ] ; extern  _GLOBAL_194_T  _GLOBAL_15_tcp_timer_funcs_I [ 4 ] ; extern  _GLOBAL_194_T  _GLOBAL_16_tcp_timer_funcs_I [ 4 ] ; extern  _GLOBAL_194_T  _GLOBAL_17_tcp_timer_funcs_I [ 4 ] ; extern  _GLOBAL_194_T  _GLOBAL_18_tcp_timer_funcs_I [ 4 ] ; extern  _GLOBAL_194_T  _GLOBAL_19_tcp_timer_funcs_I [ 4 ] ; extern  _GLOBAL_194_T  _GLOBAL_20_tcp_timer_funcs_I [ 4 ] ; extern  _GLOBAL_194_T  _GLOBAL_21_tcp_timer_funcs_I [ 4 ] ; extern  _GLOBAL_194_T  _GLOBAL_22_tcp_timer_funcs_I [ 4 ] ; extern  _GLOBAL_194_T  _GLOBAL_23_tcp_timer_funcs_I [ 4 ] ; extern  _GLOBAL_194_T  _GLOBAL_24_tcp_timer_funcs_I [ 4 ] ; extern  _GLOBAL_194_T  _GLOBAL_25_tcp_timer_funcs_I [ 4 ] ; extern  _GLOBAL_194_T  _GLOBAL_26_tcp_timer_funcs_I [ 4 ] ; extern  _GLOBAL_194_T  _GLOBAL_27_tcp_timer_funcs_I [ 4 ] ; extern  _GLOBAL_194_T  _GLOBAL_28_tcp_timer_funcs_I [ 4 ] ; extern  _GLOBAL_194_T  _GLOBAL_29_tcp_timer_funcs_I [ 4 ] ; extern  _GLOBAL_194_T  _GLOBAL_30_tcp_timer_funcs_I [ 4 ] ; extern  _GLOBAL_194_T  _GLOBAL_31_tcp_timer_funcs_I [ 4 ] ; extern  _GLOBAL_194_T  _GLOBAL_32_tcp_timer_funcs_I [ 4 ] ; extern  _GLOBAL_194_T  _GLOBAL_33_tcp_timer_funcs_I [ 4 ] ; extern  _GLOBAL_194_T  _GLOBAL_34_tcp_timer_funcs_I [ 4 ] ; extern  _GLOBAL_194_T  _GLOBAL_35_tcp_timer_funcs_I [ 4 ] ; extern  _GLOBAL_194_T  _GLOBAL_36_tcp_timer_funcs_I [ 4 ] ; extern  _GLOBAL_194_T  _GLOBAL_37_tcp_timer_funcs_I [ 4 ] ; extern  _GLOBAL_194_T  _GLOBAL_38_tcp_timer_funcs_I [ 4 ] ; extern  _GLOBAL_194_T  _GLOBAL_39_tcp_timer_funcs_I [ 4 ] ; extern  _GLOBAL_194_T  _GLOBAL_40_tcp_timer_funcs_I [ 4 ] ; extern  _GLOBAL_194_T  _GLOBAL_41_tcp_timer_funcs_I [ 4 ] ; extern  _GLOBAL_194_T  _GLOBAL_42_tcp_timer_funcs_I [ 4 ] ; extern  _GLOBAL_194_T  _GLOBAL_43_tcp_timer_funcs_I [ 4 ] ; extern  _GLOBAL_194_T  _GLOBAL_44_tcp_timer_funcs_I [ 4 ] ; extern  _GLOBAL_194_T  _GLOBAL_45_tcp_timer_funcs_I [ 4 ] ; extern  _GLOBAL_194_T  _GLOBAL_46_tcp_timer_funcs_I [ 4 ] ; extern  _GLOBAL_194_T  _GLOBAL_47_tcp_timer_funcs_I [ 4 ] ; extern  _GLOBAL_194_T  _GLOBAL_48_tcp_timer_funcs_I [ 4 ] ; extern  _GLOBAL_194_T  _GLOBAL_49_tcp_timer_funcs_I [ 4 ] ; static __attribute__ ((unused)) __typeof__(_GLOBAL_0_tcp_timer_funcs_I) *_GLOBAL_tcp_timer_funcs_41_A[NUM_STACKS];   

typedef  int  _GLOBAL_195_T; extern  _GLOBAL_195_T  global_tcptv_keep_init[NUM_STACKS];   
typedef  int  _GLOBAL_196_T; extern  _GLOBAL_196_T  global_tcp_keepidle[NUM_STACKS];   
typedef  int  _GLOBAL_197_T; extern  _GLOBAL_197_T  global_tcp_keepintvl[NUM_STACKS];   
typedef  int  _GLOBAL_198_T; extern  _GLOBAL_198_T  global_tcp_maxidle[NUM_STACKS];   
typedef  int  _GLOBAL_199_T; extern  _GLOBAL_199_T  global_tcp_ttl[NUM_STACKS];   
typedef  int  _GLOBAL_200_T; extern  _GLOBAL_200_T  _GLOBAL_0_tcp_backoff_I [ ] ; extern  _GLOBAL_200_T  _GLOBAL_1_tcp_backoff_I [ ] ; extern  _GLOBAL_200_T  _GLOBAL_2_tcp_backoff_I [ ] ; extern  _GLOBAL_200_T  _GLOBAL_3_tcp_backoff_I [ ] ; extern  _GLOBAL_200_T  _GLOBAL_4_tcp_backoff_I [ ] ; extern  _GLOBAL_200_T  _GLOBAL_5_tcp_backoff_I [ ] ; extern  _GLOBAL_200_T  _GLOBAL_6_tcp_backoff_I [ ] ; extern  _GLOBAL_200_T  _GLOBAL_7_tcp_backoff_I [ ] ; extern  _GLOBAL_200_T  _GLOBAL_8_tcp_backoff_I [ ] ; extern  _GLOBAL_200_T  _GLOBAL_9_tcp_backoff_I [ ] ; extern  _GLOBAL_200_T  _GLOBAL_10_tcp_backoff_I [ ] ; extern  _GLOBAL_200_T  _GLOBAL_11_tcp_backoff_I [ ] ; extern  _GLOBAL_200_T  _GLOBAL_12_tcp_backoff_I [ ] ; extern  _GLOBAL_200_T  _GLOBAL_13_tcp_backoff_I [ ] ; extern  _GLOBAL_200_T  _GLOBAL_14_tcp_backoff_I [ ] ; extern  _GLOBAL_200_T  _GLOBAL_15_tcp_backoff_I [ ] ; extern  _GLOBAL_200_T  _GLOBAL_16_tcp_backoff_I [ ] ; extern  _GLOBAL_200_T  _GLOBAL_17_tcp_backoff_I [ ] ; extern  _GLOBAL_200_T  _GLOBAL_18_tcp_backoff_I [ ] ; extern  _GLOBAL_200_T  _GLOBAL_19_tcp_backoff_I [ ] ; extern  _GLOBAL_200_T  _GLOBAL_20_tcp_backoff_I [ ] ; extern  _GLOBAL_200_T  _GLOBAL_21_tcp_backoff_I [ ] ; extern  _GLOBAL_200_T  _GLOBAL_22_tcp_backoff_I [ ] ; extern  _GLOBAL_200_T  _GLOBAL_23_tcp_backoff_I [ ] ; extern  _GLOBAL_200_T  _GLOBAL_24_tcp_backoff_I [ ] ; extern  _GLOBAL_200_T  _GLOBAL_25_tcp_backoff_I [ ] ; extern  _GLOBAL_200_T  _GLOBAL_26_tcp_backoff_I [ ] ; extern  _GLOBAL_200_T  _GLOBAL_27_tcp_backoff_I [ ] ; extern  _GLOBAL_200_T  _GLOBAL_28_tcp_backoff_I [ ] ; extern  _GLOBAL_200_T  _GLOBAL_29_tcp_backoff_I [ ] ; extern  _GLOBAL_200_T  _GLOBAL_30_tcp_backoff_I [ ] ; extern  _GLOBAL_200_T  _GLOBAL_31_tcp_backoff_I [ ] ; extern  _GLOBAL_200_T  _GLOBAL_32_tcp_backoff_I [ ] ; extern  _GLOBAL_200_T  _GLOBAL_33_tcp_backoff_I [ ] ; extern  _GLOBAL_200_T  _GLOBAL_34_tcp_backoff_I [ ] ; extern  _GLOBAL_200_T  _GLOBAL_35_tcp_backoff_I [ ] ; extern  _GLOBAL_200_T  _GLOBAL_36_tcp_backoff_I [ ] ; extern  _GLOBAL_200_T  _GLOBAL_37_tcp_backoff_I [ ] ; extern  _GLOBAL_200_T  _GLOBAL_38_tcp_backoff_I [ ] ; extern  _GLOBAL_200_T  _GLOBAL_39_tcp_backoff_I [ ] ; extern  _GLOBAL_200_T  _GLOBAL_40_tcp_backoff_I [ ] ; extern  _GLOBAL_200_T  _GLOBAL_41_tcp_backoff_I [ ] ; extern  _GLOBAL_200_T  _GLOBAL_42_tcp_backoff_I [ ] ; extern  _GLOBAL_200_T  _GLOBAL_43_tcp_backoff_I [ ] ; extern  _GLOBAL_200_T  _GLOBAL_44_tcp_backoff_I [ ] ; extern  _GLOBAL_200_T  _GLOBAL_45_tcp_backoff_I [ ] ; extern  _GLOBAL_200_T  _GLOBAL_46_tcp_backoff_I [ ] ; extern  _GLOBAL_200_T  _GLOBAL_47_tcp_backoff_I [ ] ; extern  _GLOBAL_200_T  _GLOBAL_48_tcp_backoff_I [ ] ; extern  _GLOBAL_200_T  _GLOBAL_49_tcp_backoff_I [ ] ; static __attribute__ ((unused)) __typeof__(_GLOBAL_0_tcp_backoff_I) *_GLOBAL_tcp_backoff_42_A[NUM_STACKS];  

void tcp_timer_init(void);
# 68 "openbsd3/net/pf.c" 2
# 1 "openbsd3/netinet/tcp_var.h" 1
# 38 "openbsd3/netinet/tcp_var.h"
struct sackblk {
 tcp_seq start;
 tcp_seq end;
};

struct sackhole {
 tcp_seq start;
 tcp_seq end;
 int dups;
 tcp_seq rxmit;
 struct sackhole *next;
};
# 58 "openbsd3/netinet/tcp_var.h"
struct tcpcb {
 struct ipqehead segq;
 struct timeout t_timer[4];
 short t_state;
 short t_rxtshift;
 short t_rxtcur;
 short t_dupacks;
 u_short t_maxseg;
 char t_force;
 u_int t_flags;
# 87 "openbsd3/netinet/tcp_var.h"
 struct mbuf *t_template;
 struct inpcb *t_inpcb;
 struct timeout t_delack_to;





 tcp_seq snd_una;
 tcp_seq snd_nxt;
 tcp_seq snd_up;
 tcp_seq snd_wl1;
 tcp_seq snd_wl2;
 tcp_seq iss;
 u_long snd_wnd;

 int sack_enable;
 int snd_numholes;
 struct sackhole *snd_holes;

 tcp_seq snd_fack;
 u_long snd_awnd;

 int retran_data;



 tcp_seq snd_last;


 u_long rcv_wnd;
 tcp_seq rcv_nxt;
 tcp_seq rcv_up;
 tcp_seq irs;

 tcp_seq rcv_laststart;
 tcp_seq rcv_lastend;
 tcp_seq rcv_lastsack;
 int rcv_numsacks;
 struct sackblk sackblks[6];






 tcp_seq rcv_adv;

 tcp_seq snd_max;



 u_long snd_cwnd;
 u_long snd_ssthresh;



 u_short t_maxopd;
 u_short t_peermss;





 uint32_t t_rcvtime;
 uint32_t t_rtttime;
 tcp_seq t_rtseq;
 short t_srtt;
 short t_rttvar;
 u_short t_rttmin;
 u_long max_sndwnd;


 char t_oobflags;
 char t_iobc;


 short t_softerror;


 u_char snd_scale;
 u_char rcv_scale;
 u_char request_r_scale;
 u_char requested_s_scale;
 u_int32_t ts_recent;
 u_int32_t ts_recent_age;
 tcp_seq last_ack_sent;


 struct { struct syn_cache *lh_first; } t_sc;


 caddr_t t_tuba_pcb;

 int pf;
};





typedef  int  _GLOBAL_201_T; extern  _GLOBAL_201_T  global_tcp_delack_ticks[NUM_STACKS];   
void tcp_delack(void *);
# 216 "openbsd3/netinet/tcp_var.h"
struct tcp_opt_info {
 int ts_present;
 u_int32_t ts_val;
 u_int32_t ts_ecr;
 u_int16_t maxseg;
};




union syn_cache_sa {
 struct sockaddr sa;
 struct sockaddr_in sin;

 struct sockaddr_in6 sin6;

};

struct syn_cache {
 struct { struct syn_cache *tqe_next; struct syn_cache **tqe_prev; } sc_bucketq;
 struct timeout sc_timer;
 union {
  struct route route4;

  struct route_in6 route6;

 } sc_route_u;




 long sc_win;
 int sc_bucketidx;
 u_int32_t sc_hash;
 u_int32_t sc_timestamp;



 union syn_cache_sa sc_src;
 union syn_cache_sa sc_dst;
 tcp_seq sc_irs;
 tcp_seq sc_iss;
 u_int sc_rxtcur;
 u_int sc_rxttot;
 u_short sc_rxtshift;
 u_short sc_flags;
# 270 "openbsd3/netinet/tcp_var.h"
 struct mbuf *sc_ipopts;
 u_int16_t sc_peermaxseg;
 u_int16_t sc_ourmaxseg;
 u_int8_t sc_request_r_scale : 4,
   sc_requested_s_scale : 4;

 struct tcpcb *sc_tp;
 struct { struct syn_cache *le_next; struct syn_cache **le_prev; } sc_tpq;
};

struct syn_cache_head {
 struct { struct syn_cache *tqh_first; struct syn_cache **tqh_last; } sch_bucket;
 u_short sch_length;
};

static __inline int tcp_reass_lock_try(struct tcpcb *);
static __inline void tcp_reass_unlock(struct tcpcb *);


static __inline int
tcp_reass_lock_try(struct tcpcb *tp)
{
 int s;

 s = splraise((0x20 + ((6) << 4)));
 if (tp->t_flags & 0x00080000) {
  splx(s);
  return (0);
 }
 tp->t_flags |= 0x00080000;
 splx(s);
 return (1);
}

static __inline void
tcp_reass_unlock(struct tcpcb *tp)
{
 int s;

 s = splraise((0x20 + ((6) << 4)));
 tp->t_flags &= ~0x00080000;
 splx(s);
}
# 350 "openbsd3/netinet/tcp_var.h"
struct tcpstat {
 u_int32_t tcps_connattempt;
 u_int32_t tcps_accepts;
 u_int32_t tcps_connects;
 u_int32_t tcps_drops;
 u_int32_t tcps_conndrops;
 u_int32_t tcps_closed;
 u_int32_t tcps_segstimed;
 u_int32_t tcps_rttupdated;
 u_int32_t tcps_delack;
 u_int32_t tcps_timeoutdrop;
 u_int32_t tcps_rexmttimeo;
 u_int32_t tcps_persisttimeo;
 u_int32_t tcps_persistdrop;
 u_int32_t tcps_keeptimeo;
 u_int32_t tcps_keepprobe;
 u_int32_t tcps_keepdrops;

 u_int32_t tcps_sndtotal;
 u_int32_t tcps_sndpack;
 u_int64_t tcps_sndbyte;
 u_int32_t tcps_sndrexmitpack;
 u_int64_t tcps_sndrexmitbyte;
 u_int64_t tcps_sndrexmitfast;
 u_int32_t tcps_sndacks;
 u_int32_t tcps_sndprobe;
 u_int32_t tcps_sndurg;
 u_int32_t tcps_sndwinup;
 u_int32_t tcps_sndctrl;

 u_int32_t tcps_rcvtotal;
 u_int32_t tcps_rcvpack;
 u_int64_t tcps_rcvbyte;
 u_int32_t tcps_rcvbadsum;
 u_int32_t tcps_rcvbadoff;
 u_int32_t tcps_rcvmemdrop;
 u_int32_t tcps_rcvnosec;
 u_int32_t tcps_rcvshort;
 u_int32_t tcps_rcvduppack;
 u_int64_t tcps_rcvdupbyte;
 u_int32_t tcps_rcvpartduppack;
 u_int64_t tcps_rcvpartdupbyte;
 u_int32_t tcps_rcvoopack;
 u_int64_t tcps_rcvoobyte;
 u_int32_t tcps_rcvpackafterwin;
 u_int64_t tcps_rcvbyteafterwin;
 u_int32_t tcps_rcvafterclose;
 u_int32_t tcps_rcvwinprobe;
 u_int32_t tcps_rcvdupack;
 u_int32_t tcps_rcvacktoomuch;
 u_int32_t tcps_rcvackpack;
 u_int64_t tcps_rcvackbyte;
 u_int32_t tcps_rcvwinupd;
 u_int32_t tcps_pawsdrop;
 u_int32_t tcps_predack;
 u_int32_t tcps_preddat;

 u_int32_t tcps_pcbhashmiss;
 u_int32_t tcps_noport;
 u_int32_t tcps_badsyn;

 u_int32_t tcps_rcvbadsig;
 u_int64_t tcps_rcvgoodsig;
 u_int32_t tcps_inhwcsum;
 u_int32_t tcps_outhwcsum;


 u_int32_t tcps_ecn_accepts;
 u_int32_t tcps_ecn_rcvece;
 u_int32_t tcps_ecn_rcvcwr;
 u_int32_t tcps_ecn_rcvce;
 u_int32_t tcps_ecn_sndect;
 u_int32_t tcps_ecn_sndece;
 u_int32_t tcps_ecn_sndcwr;
 u_int32_t tcps_cwr_ecn;
 u_int32_t tcps_cwr_frecovery;
 u_int32_t tcps_cwr_timeout;


 u_int64_t tcps_sc_added;
 u_int64_t tcps_sc_completed;
 u_int64_t tcps_sc_timed_out;
 u_int64_t tcps_sc_overflowed;
 u_int64_t tcps_sc_reset;
 u_int64_t tcps_sc_unreach;
 u_int64_t tcps_sc_bucketoverflow;
 u_int64_t tcps_sc_aborted;
 u_int64_t tcps_sc_dupesyn;
 u_int64_t tcps_sc_dropped;
 u_int64_t tcps_sc_collisions;
 u_int64_t tcps_sc_retransmitted;

 u_int64_t tcps_conndrained;
};
# 513 "openbsd3/netinet/tcp_var.h"
struct tcp_ident_mapping {
 struct sockaddr_storage faddr, laddr;
 int euid, ruid;
};


typedef  struct inpcbtable   _GLOBAL_202_T; extern  _GLOBAL_202_T  global_tcbtable[NUM_STACKS];    
typedef  struct tcpstat   _GLOBAL_203_T; extern  _GLOBAL_203_T  global_tcpstat[NUM_STACKS];    
typedef  u_int32_t  _GLOBAL_204_T; extern  _GLOBAL_204_T  global_tcp_now[NUM_STACKS];   
typedef  int  _GLOBAL_205_T; extern  _GLOBAL_205_T  global_tcp_do_rfc1323[NUM_STACKS];   
typedef  int  _GLOBAL_206_T; extern  _GLOBAL_206_T  global_tcp_mssdflt[NUM_STACKS];   
typedef  int  _GLOBAL_207_T; extern  _GLOBAL_207_T  global_tcp_ack_on_push[NUM_STACKS];   

typedef  int  _GLOBAL_208_T; extern  _GLOBAL_208_T  global_tcp_do_sack[NUM_STACKS];   
typedef  struct pool   _GLOBAL_209_T; extern  _GLOBAL_209_T  global_sackhl_pool[NUM_STACKS];    

typedef  int  _GLOBAL_210_T; extern  _GLOBAL_210_T  global_tcp_do_ecn[NUM_STACKS];   
typedef  int  _GLOBAL_211_T; extern  _GLOBAL_211_T  global_tcp_do_rfc3390[NUM_STACKS];   

typedef  struct pool   _GLOBAL_212_T; extern  _GLOBAL_212_T  global_tcpqe_pool[NUM_STACKS];    
typedef  int  _GLOBAL_213_T; extern  _GLOBAL_213_T  global_tcp_reass_limit[NUM_STACKS];   

typedef  int  _GLOBAL_214_T; extern  _GLOBAL_214_T  global_tcp_syn_cache_limit[NUM_STACKS];   
typedef  int  _GLOBAL_215_T; extern  _GLOBAL_215_T  global_tcp_syn_bucket_limit[NUM_STACKS];   

typedef  int  _GLOBAL_216_T; extern  _GLOBAL_216_T  global_tcp_syn_cache_size[NUM_STACKS];   
typedef  struct syn_cache_head   _GLOBAL_217_T; extern  _GLOBAL_217_T  _GLOBAL_0_tcp_syn_cache_I [ ] ; extern  _GLOBAL_217_T  _GLOBAL_1_tcp_syn_cache_I [ ] ; extern  _GLOBAL_217_T  _GLOBAL_2_tcp_syn_cache_I [ ] ; extern  _GLOBAL_217_T  _GLOBAL_3_tcp_syn_cache_I [ ] ; extern  _GLOBAL_217_T  _GLOBAL_4_tcp_syn_cache_I [ ] ; extern  _GLOBAL_217_T  _GLOBAL_5_tcp_syn_cache_I [ ] ; extern  _GLOBAL_217_T  _GLOBAL_6_tcp_syn_cache_I [ ] ; extern  _GLOBAL_217_T  _GLOBAL_7_tcp_syn_cache_I [ ] ; extern  _GLOBAL_217_T  _GLOBAL_8_tcp_syn_cache_I [ ] ; extern  _GLOBAL_217_T  _GLOBAL_9_tcp_syn_cache_I [ ] ; extern  _GLOBAL_217_T  _GLOBAL_10_tcp_syn_cache_I [ ] ; extern  _GLOBAL_217_T  _GLOBAL_11_tcp_syn_cache_I [ ] ; extern  _GLOBAL_217_T  _GLOBAL_12_tcp_syn_cache_I [ ] ; extern  _GLOBAL_217_T  _GLOBAL_13_tcp_syn_cache_I [ ] ; extern  _GLOBAL_217_T  _GLOBAL_14_tcp_syn_cache_I [ ] ; extern  _GLOBAL_217_T  _GLOBAL_15_tcp_syn_cache_I [ ] ; extern  _GLOBAL_217_T  _GLOBAL_16_tcp_syn_cache_I [ ] ; extern  _GLOBAL_217_T  _GLOBAL_17_tcp_syn_cache_I [ ] ; extern  _GLOBAL_217_T  _GLOBAL_18_tcp_syn_cache_I [ ] ; extern  _GLOBAL_217_T  _GLOBAL_19_tcp_syn_cache_I [ ] ; extern  _GLOBAL_217_T  _GLOBAL_20_tcp_syn_cache_I [ ] ; extern  _GLOBAL_217_T  _GLOBAL_21_tcp_syn_cache_I [ ] ; extern  _GLOBAL_217_T  _GLOBAL_22_tcp_syn_cache_I [ ] ; extern  _GLOBAL_217_T  _GLOBAL_23_tcp_syn_cache_I [ ] ; extern  _GLOBAL_217_T  _GLOBAL_24_tcp_syn_cache_I [ ] ; extern  _GLOBAL_217_T  _GLOBAL_25_tcp_syn_cache_I [ ] ; extern  _GLOBAL_217_T  _GLOBAL_26_tcp_syn_cache_I [ ] ; extern  _GLOBAL_217_T  _GLOBAL_27_tcp_syn_cache_I [ ] ; extern  _GLOBAL_217_T  _GLOBAL_28_tcp_syn_cache_I [ ] ; extern  _GLOBAL_217_T  _GLOBAL_29_tcp_syn_cache_I [ ] ; extern  _GLOBAL_217_T  _GLOBAL_30_tcp_syn_cache_I [ ] ; extern  _GLOBAL_217_T  _GLOBAL_31_tcp_syn_cache_I [ ] ; extern  _GLOBAL_217_T  _GLOBAL_32_tcp_syn_cache_I [ ] ; extern  _GLOBAL_217_T  _GLOBAL_33_tcp_syn_cache_I [ ] ; extern  _GLOBAL_217_T  _GLOBAL_34_tcp_syn_cache_I [ ] ; extern  _GLOBAL_217_T  _GLOBAL_35_tcp_syn_cache_I [ ] ; extern  _GLOBAL_217_T  _GLOBAL_36_tcp_syn_cache_I [ ] ; extern  _GLOBAL_217_T  _GLOBAL_37_tcp_syn_cache_I [ ] ; extern  _GLOBAL_217_T  _GLOBAL_38_tcp_syn_cache_I [ ] ; extern  _GLOBAL_217_T  _GLOBAL_39_tcp_syn_cache_I [ ] ; extern  _GLOBAL_217_T  _GLOBAL_40_tcp_syn_cache_I [ ] ; extern  _GLOBAL_217_T  _GLOBAL_41_tcp_syn_cache_I [ ] ; extern  _GLOBAL_217_T  _GLOBAL_42_tcp_syn_cache_I [ ] ; extern  _GLOBAL_217_T  _GLOBAL_43_tcp_syn_cache_I [ ] ; extern  _GLOBAL_217_T  _GLOBAL_44_tcp_syn_cache_I [ ] ; extern  _GLOBAL_217_T  _GLOBAL_45_tcp_syn_cache_I [ ] ; extern  _GLOBAL_217_T  _GLOBAL_46_tcp_syn_cache_I [ ] ; extern  _GLOBAL_217_T  _GLOBAL_47_tcp_syn_cache_I [ ] ; extern  _GLOBAL_217_T  _GLOBAL_48_tcp_syn_cache_I [ ] ; extern  _GLOBAL_217_T  _GLOBAL_49_tcp_syn_cache_I [ ] ; static __attribute__ ((unused)) __typeof__(_GLOBAL_0_tcp_syn_cache_I) *_GLOBAL_tcp_syn_cache_43_A[NUM_STACKS];   
typedef  u_long  _GLOBAL_218_T; extern  _GLOBAL_218_T  global_syn_cache_count[NUM_STACKS];   

int tcp_attach(struct socket *);
void tcp_canceltimers(struct tcpcb *);
struct tcpcb *
  tcp_close(struct tcpcb *);
int tcp_freeq(struct tcpcb *);

void tcp6_ctlinput(int, struct sockaddr *, void *);

void *tcp_ctlinput(int, struct sockaddr *, void *);
int tcp_ctloutput(int, struct socket *, int, int, struct mbuf **);
struct tcpcb *
  tcp_disconnect(struct tcpcb *);
struct tcpcb *
  tcp_drop(struct tcpcb *, int);
int tcp_dooptions(struct tcpcb *, u_char *, int, struct tcphdr *,
  struct mbuf *, int, struct tcp_opt_info *);
void tcp_drain(void);
void tcp_init(void);

int tcp6_input(struct mbuf **, int *, int);

void tcp_input(struct mbuf *, ...);
int tcp_mss(struct tcpcb *, int);
void tcp_mss_update(struct tcpcb *);
void tcp_mtudisc(struct inpcb *, int);
void tcp_mtudisc_increase(struct inpcb *, int);

void tcp6_mtudisc(struct inpcb *, int);
void tcp6_mtudisc_callback(struct in6_addr *);

struct tcpcb *
  tcp_newtcpcb(struct inpcb *);
void tcp_notify(struct inpcb *, int);
int tcp_output(struct tcpcb *);
void tcp_pulloutofband(struct socket *, u_int, struct mbuf *, int);
void tcp_quench(struct inpcb *, int);
int tcp_reass(struct tcpcb *, struct tcphdr *, struct mbuf *, int *);
void tcp_rscale(struct tcpcb *, u_long);
void tcp_respond(struct tcpcb *, caddr_t, struct mbuf *, tcp_seq,
  tcp_seq, int);
void tcp_setpersist(struct tcpcb *);
void tcp_slowtimo(void);
struct mbuf *
  tcp_template(struct tcpcb *);
void tcp_trace(int, int, struct tcpcb *, caddr_t, int, int);
struct tcpcb *
  tcp_usrclosed(struct tcpcb *);
int tcp_sysctl(int *, u_int, void *, size_t *, void *, size_t);

int tcp6_usrreq(struct socket *,
     int, struct mbuf *, struct mbuf *, struct mbuf *, struct proc *);

int tcp_usrreq(struct socket *,
     int, struct mbuf *, struct mbuf *, struct mbuf *);
void tcp_xmit_timer(struct tcpcb *, int);
void tcpdropoldhalfopen(struct tcpcb *, u_int16_t);

int tcp_sack_option(struct tcpcb *,struct tcphdr *,u_char *,int);
void tcp_update_sack_list(struct tcpcb *tp);
void tcp_del_sackholes(struct tcpcb *, struct tcphdr *);
void tcp_clean_sackreport(struct tcpcb *tp);
void tcp_sack_adjust(struct tcpcb *tp);
struct sackhole *
  tcp_sack_output(struct tcpcb *tp);
int tcp_sack_partialack(struct tcpcb *, struct tcphdr *);





int tcp_newreno(struct tcpcb *, struct tcphdr *);
u_long tcp_seq_subtract(u_long, u_long );


int tcp_signature_apply(caddr_t, caddr_t, unsigned int);

void tcp_rndiss_init(void);
tcp_seq tcp_rndiss_next(void);
u_int16_t
 tcp_rndiss_encrypt(u_int16_t);

int syn_cache_add(struct sockaddr *, struct sockaddr *,
  struct tcphdr *, unsigned int, struct socket *,
  struct mbuf *, u_char *, int, struct tcp_opt_info *);
void syn_cache_unreach(struct sockaddr *, struct sockaddr *,
    struct tcphdr *);
struct socket *syn_cache_get(struct sockaddr *, struct sockaddr *,
  struct tcphdr *, unsigned int, unsigned int,
  struct socket *so, struct mbuf *);
void syn_cache_init(void);
void syn_cache_insert(struct syn_cache *, struct tcpcb *);
struct syn_cache *syn_cache_lookup(struct sockaddr *, struct sockaddr *,
  struct syn_cache_head **);
void syn_cache_reset(struct sockaddr *, struct sockaddr *,
  struct tcphdr *);
int syn_cache_respond(struct syn_cache *, struct mbuf *);
void syn_cache_timer(void *);
void syn_cache_cleanup(struct tcpcb *);
# 69 "openbsd3/net/pf.c" 2
# 1 "openbsd3/netinet/udp_var.h" 1
# 41 "openbsd3/netinet/udp_var.h"
struct udpiphdr {
 struct ipovly ui_i;
 struct udphdr ui_u;
};
# 55 "openbsd3/netinet/udp_var.h"
struct udpstat {

 u_long udps_ipackets;
 u_long udps_hdrops;
 u_long udps_badsum;
 u_long udps_nosum;
 u_long udps_badlen;
 u_long udps_noport;
 u_long udps_noportbcast;
 u_long udps_nosec;
 u_long udps_fullsock;
 u_long udps_pcbhashmiss;
 u_long udps_inhwcsum;

 u_long udps_opackets;
 u_long udps_outhwcsum;
};
# 99 "openbsd3/netinet/udp_var.h"
typedef  struct inpcbtable   _GLOBAL_219_T; extern  _GLOBAL_219_T  global_udbtable[NUM_STACKS];    
typedef  struct udpstat   _GLOBAL_220_T; extern  _GLOBAL_220_T  global_udpstat[NUM_STACKS];    


void udp6_ctlinput(int, struct sockaddr *, void *);
int udp6_input(struct mbuf **, int *, int);
int udp6_usrreq(struct socket *,
     int, struct mbuf *, struct mbuf *, struct mbuf *, struct proc *);

void *udp_ctlinput(int, struct sockaddr *, void *);
void udp_init(void);
void udp_input(struct mbuf *, ...);

int udp6_output(struct inpcb *, struct mbuf *, struct mbuf *,
 struct mbuf *);

int udp_output(struct mbuf *, ...);
int udp_sysctl(int *, u_int, void *, size_t *, void *, size_t);
int udp_usrreq(struct socket *,
     int, struct mbuf *, struct mbuf *, struct mbuf *);
# 70 "openbsd3/net/pf.c" 2
# 1 "openbsd3/netinet/icmp_var.h" 1
# 42 "openbsd3/netinet/icmp_var.h"
struct icmpstat {

 u_long icps_error;
 u_long icps_oldshort;
 u_long icps_oldicmp;
 u_long icps_outhist[40 + 1];

 u_long icps_badcode;
 u_long icps_tooshort;
 u_long icps_checksum;
 u_long icps_badlen;
 u_long icps_reflect;
 u_long icps_bmcastecho;
 u_long icps_inhist[40 + 1];
};
# 90 "openbsd3/netinet/icmp_var.h"
typedef  struct icmpstat   _GLOBAL_221_T; extern  _GLOBAL_221_T  global_icmpstat[NUM_STACKS];    
# 71 "openbsd3/net/pf.c" 2

# 1 "openbsd3/dev/rndvar.h" 1
# 53 "openbsd3/dev/rndvar.h"
struct rndstats {
 quad_t rnd_total;
 quad_t rnd_used;
 quad_t rnd_reads;
 quad_t arc4_reads;
 quad_t arc4_nstirs;
 quad_t arc4_stirs;

 quad_t rnd_pad[5];

 quad_t rnd_waits;
 quad_t rnd_enqs;
 quad_t rnd_deqs;
 quad_t rnd_drops;
 quad_t rnd_drople;

 quad_t rnd_ed[32];
 quad_t rnd_sc[8];
 quad_t rnd_sb[8];
};


typedef  struct rndstats   _GLOBAL_222_T; extern  _GLOBAL_222_T  global_rndstats[NUM_STACKS];    
# 86 "openbsd3/dev/rndvar.h"
void enqueue_randomness(int, int);
void get_random_bytes(void *, size_t);
void arc4random_bytes(void *, size_t);
u_int32_t arc4random(void);
# 73 "openbsd3/net/pf.c" 2
# 1 "openbsd3/net/pfvar.h" 1
# 42 "openbsd3/net/pfvar.h"
# 1 "openbsd3/netinet/tcp_fsm.h" 1
# 43 "openbsd3/net/pfvar.h" 2

struct ip;




enum { PF_INOUT, PF_IN, PF_OUT };
enum { PF_LAN_EXT, PF_EXT_GWY, PF_ID };
enum { PF_PASS, PF_DROP, PF_SCRUB, PF_NAT, PF_NONAT,
   PF_BINAT, PF_NOBINAT, PF_RDR, PF_NORDR, PF_SYNPROXY_DROP };
enum { PF_RULESET_SCRUB, PF_RULESET_FILTER, PF_RULESET_NAT,
   PF_RULESET_BINAT, PF_RULESET_RDR, PF_RULESET_MAX };
enum { PF_OP_NONE, PF_OP_IRG, PF_OP_EQ, PF_OP_NE, PF_OP_LT,
   PF_OP_LE, PF_OP_GT, PF_OP_GE, PF_OP_XRG, PF_OP_RRG };
enum { PF_DEBUG_NONE, PF_DEBUG_URGENT, PF_DEBUG_MISC, PF_DEBUG_NOISY };
enum { PF_CHANGE_NONE, PF_CHANGE_ADD_HEAD, PF_CHANGE_ADD_TAIL,
   PF_CHANGE_ADD_BEFORE, PF_CHANGE_ADD_AFTER,
   PF_CHANGE_REMOVE, PF_CHANGE_GET_TICKET };




enum { PFTM_TCP_FIRST_PACKET, PFTM_TCP_OPENING, PFTM_TCP_ESTABLISHED,
   PFTM_TCP_CLOSING, PFTM_TCP_FIN_WAIT, PFTM_TCP_CLOSED,
   PFTM_UDP_FIRST_PACKET, PFTM_UDP_SINGLE, PFTM_UDP_MULTIPLE,
   PFTM_ICMP_FIRST_PACKET, PFTM_ICMP_ERROR_REPLY,
   PFTM_OTHER_FIRST_PACKET, PFTM_OTHER_SINGLE,
   PFTM_OTHER_MULTIPLE, PFTM_FRAG, PFTM_INTERVAL,
   PFTM_ADAPTIVE_START, PFTM_ADAPTIVE_END, PFTM_SRC_NODE,
   PFTM_MAX, PFTM_PURGE, PFTM_UNTIL_PACKET };
enum { PF_NOPFROUTE, PF_FASTROUTE, PF_ROUTETO, PF_DUPTO, PF_REPLYTO };
enum { PF_LIMIT_STATES, PF_LIMIT_SRC_NODES, PF_LIMIT_FRAGS, PF_LIMIT_MAX };

enum { PF_POOL_NONE, PF_POOL_BITMASK, PF_POOL_RANDOM,
   PF_POOL_SRCHASH, PF_POOL_ROUNDROBIN };
enum { PF_ADDR_ADDRMASK, PF_ADDR_NOROUTE, PF_ADDR_DYNIFTL,
   PF_ADDR_TABLE };





struct pf_addr {
 union {
  struct in_addr v4;
  struct in6_addr v6;
  u_int8_t addr8[16];
  u_int16_t addr16[8];
  u_int32_t addr32[4];
 } pfa;





};
# 108 "openbsd3/net/pfvar.h"
struct pf_addr_wrap {
 union {
  struct {
   struct pf_addr addr;
   struct pf_addr mask;
  } a;
  char ifname[16];
  char tblname[32];
 } v;
 union {
  struct pfi_dynaddr *dyn;
  struct pfr_ktable *tbl;
  int dyncnt;
  int tblcnt;
 } p;
 u_int8_t type;
 u_int8_t iflags;
};



struct pfi_dynaddr {
 struct pf_addr pfid_addr4;
 struct pf_addr pfid_mask4;
 struct pf_addr pfid_addr6;
 struct pf_addr pfid_mask6;
 struct pfr_ktable *pfid_kt;
 struct pfi_kif *pfid_kif;
 void *pfid_hook_cookie;
 int pfid_net;
 int pfid_acnt4;
 int pfid_acnt6;
 sa_family_t pfid_af;
 u_int8_t pfid_iflags;
};
# 292 "openbsd3/net/pfvar.h"
struct pf_rule_uid {
 uid_t uid[2];
 u_int8_t op;
};

struct pf_rule_gid {
 uid_t gid[2];
 u_int8_t op;
};

struct pf_rule_addr {
 struct pf_addr_wrap addr;
 u_int16_t port[2];
 u_int8_t not;
 u_int8_t port_op;
};

struct pf_pooladdr {
 struct pf_addr_wrap addr;
 struct { struct pf_pooladdr *tqe_next; struct pf_pooladdr **tqe_prev; } entries;
 char ifname[16];
 struct pfi_kif *kif;
};

struct pf_palist { struct pf_pooladdr *tqh_first; struct pf_pooladdr **tqh_last; };

struct pf_poolhashkey {
 union {
  u_int8_t key8[16];
  u_int16_t key16[8];
  u_int32_t key32[4];
 } pfk;



};

struct pf_pool {
 struct pf_palist list;
 struct pf_pooladdr *cur;
 struct pf_poolhashkey key;
 struct pf_addr counter;
 int tblidx;
 u_int16_t proxy_port[2];
 u_int8_t port_op;
 u_int8_t opts;
};



typedef u_int32_t pf_osfp_t;




struct pf_osfp_entry {
 struct { struct pf_osfp_entry *sle_next; } fp_entry;
 pf_osfp_t fp_os;
 int fp_enflags;




 char fp_class_nm[32];
 char fp_version_nm[32];
 char fp_subtype_nm[32];
};
# 387 "openbsd3/net/pfvar.h"
typedef u_int64_t pf_tcpopts_t;
struct pf_os_fingerprint {
 struct pf_osfp_enlist { struct pf_osfp_entry *slh_first; } fp_oses;
 pf_tcpopts_t fp_tcpopts;
 u_int16_t fp_wsize;
 u_int16_t fp_psize;
 u_int16_t fp_mss;
 u_int16_t fp_flags;
# 409 "openbsd3/net/pfvar.h"
 u_int8_t fp_optcnt;
 u_int8_t fp_wscale;
 u_int8_t fp_ttl;
# 424 "openbsd3/net/pfvar.h"
 struct { struct pf_os_fingerprint *sle_next; } fp_next;
};

struct pf_osfp_ioctl {
 struct pf_osfp_entry fp_os;
 pf_tcpopts_t fp_tcpopts;
 u_int16_t fp_wsize;
 u_int16_t fp_psize;
 u_int16_t fp_mss;
 u_int16_t fp_flags;
 u_int8_t fp_optcnt;
 u_int8_t fp_wscale;
 u_int8_t fp_ttl;

 int fp_getnum;
};


union pf_rule_ptr {
 struct pf_rule *ptr;
 u_int32_t nr;
};

struct pf_rule {
 struct pf_rule_addr src;
 struct pf_rule_addr dst;
# 459 "openbsd3/net/pfvar.h"
 union pf_rule_ptr skip[8];

 char label[64];

 char ifname[16];
 char qname[16];
 char pqname[16];

 char anchorname[16];

 char tagname[16];
 char match_tagname[16];

 struct { struct pf_rule *tqe_next; struct pf_rule **tqe_prev; } entries;
 struct pf_pool rpool;

 u_int64_t evaluations;
 u_int64_t packets;
 u_int64_t bytes;

 struct pfi_kif *kif;
 struct pf_anchor *anchor;

 pf_osfp_t os_fingerprint;

 u_int32_t timeout[PFTM_MAX];
 u_int32_t states;
 u_int32_t max_states;
 u_int32_t src_nodes;
 u_int32_t max_src_nodes;
 u_int32_t max_src_states;
 u_int32_t qid;
 u_int32_t pqid;
 u_int32_t rt_listid;
 u_int32_t nr;

 u_int16_t return_icmp;
 u_int16_t return_icmp6;
 u_int16_t max_mss;
 u_int16_t tag;
 u_int16_t match_tag;

 struct pf_rule_uid uid;
 struct pf_rule_gid gid;

 u_int32_t rule_flag;
 u_int8_t action;
 u_int8_t direction;
 u_int8_t log;
 u_int8_t quick;
 u_int8_t ifnot;
 u_int8_t match_tag_not;
 u_int8_t natpass;




 u_int8_t keep_state;
 sa_family_t af;
 u_int8_t proto;
 u_int8_t type;
 u_int8_t code;
 u_int8_t flags;
 u_int8_t flagset;
 u_int8_t min_ttl;
 u_int8_t allow_opts;
 u_int8_t rt;
 u_int8_t return_ttl;
 u_int8_t tos;
};
# 553 "openbsd3/net/pfvar.h"
struct pf_src_node {
 struct { struct pf_src_node *rbe_left; struct pf_src_node *rbe_right; struct pf_src_node *rbe_parent; int rbe_color; } entry;
 struct pf_addr addr;
 struct pf_addr raddr;
 union pf_rule_ptr rule;
 struct pfi_kif *kif;
 u_int32_t bytes;
 u_int32_t packets;
 u_int32_t states;
 u_int32_t creation;
 u_int32_t expire;
 sa_family_t af;
 u_int8_t ruletype;
};



struct pf_state_scrub {
 u_int16_t pfss_flags;

 u_int8_t pfss_ttl;
 u_int8_t pad;
 u_int32_t pfss_ts_mod;
};

struct pf_state_host {
 struct pf_addr addr;
 u_int16_t port;
 u_int16_t pad;
};

struct pf_state_peer {
 u_int32_t seqlo;
 u_int32_t seqhi;
 u_int32_t seqdiff;
 u_int16_t max_win;
 u_int8_t state;
 u_int8_t wscale;
 u_int16_t mss;
 struct pf_state_scrub *scrub;
};

struct pf_state_queue { struct pf_state *tqh_first; struct pf_state **tqh_last; };

struct pf_state {
 u_int64_t id;
 union {
  struct {
   struct { struct pf_state *rbe_left; struct pf_state *rbe_right; struct pf_state *rbe_parent; int rbe_color; } entry_lan_ext;
   struct { struct pf_state *rbe_left; struct pf_state *rbe_right; struct pf_state *rbe_parent; int rbe_color; } entry_ext_gwy;
   struct { struct pf_state *rbe_left; struct pf_state *rbe_right; struct pf_state *rbe_parent; int rbe_color; } entry_id;
   struct { struct pf_state *tqe_next; struct pf_state **tqe_prev; } entry_updates;
   struct pfi_kif *kif;
  } s;
  char ifname[16];
 } u;
 struct pf_state_host lan;
 struct pf_state_host gwy;
 struct pf_state_host ext;
 struct pf_state_peer src;
 struct pf_state_peer dst;
 union pf_rule_ptr rule;
 union pf_rule_ptr anchor;
 union pf_rule_ptr nat_rule;
 struct pf_addr rt_addr;
 struct pfi_kif *rt_kif;
 struct pf_src_node *src_node;
 struct pf_src_node *nat_src_node;
 u_int32_t creation;
 u_int32_t expire;
 u_int32_t pfsync_time;
 u_int32_t packets[2];
 u_int32_t bytes[2];
 u_int32_t creatorid;
 sa_family_t af;
 u_int8_t proto;
 u_int8_t direction;
 u_int8_t log;
 u_int8_t allow_opts;
 u_int8_t timeout;
 u_int8_t sync_flags;


 u_int8_t pad;
};

struct pf_rulequeue { struct pf_rule *tqh_first; struct pf_rule **tqh_last; };

struct pf_anchor;

struct pf_ruleset {
 struct { struct pf_ruleset *tqe_next; struct pf_ruleset **tqe_prev; } entries;

 char name[16];
 struct {
  struct pf_rulequeue queues[2];
  struct {
   struct pf_rulequeue *ptr;
   u_int32_t ticket;
   int open;
  } active, inactive;
 } rules[PF_RULESET_MAX];
 struct pf_anchor *anchor;
 u_int32_t tticket;
 int tables;
 int topen;
};

struct pf_rulesetqueue { struct pf_ruleset *tqh_first; struct pf_ruleset **tqh_last; };

struct pf_anchor {
 struct { struct pf_anchor *tqe_next; struct pf_anchor **tqe_prev; } entries;
 char name[16];
 struct pf_rulesetqueue rulesets;
 int tables;
};

struct pf_anchorqueue { struct pf_anchor *tqh_first; struct pf_anchor **tqh_last; };
# 685 "openbsd3/net/pfvar.h"
struct pfr_table {
 char pfrt_anchor[16];
 char pfrt_ruleset[16];
 char pfrt_name[32];
 u_int32_t pfrt_flags;
 u_int8_t pfrt_fback;
};

enum { PFR_FB_NONE, PFR_FB_MATCH, PFR_FB_ADDED, PFR_FB_DELETED,
 PFR_FB_CHANGED, PFR_FB_CLEARED, PFR_FB_DUPLICATE,
 PFR_FB_NOTMATCH, PFR_FB_CONFLICT, PFR_FB_MAX };

struct pfr_addr {
 union {
  struct in_addr _pfra_ip4addr;
  struct in6_addr _pfra_ip6addr;
 } pfra_u;
 u_int8_t pfra_af;
 u_int8_t pfra_net;
 u_int8_t pfra_not;
 u_int8_t pfra_fback;
};



enum { PFR_DIR_IN, PFR_DIR_OUT, PFR_DIR_MAX };
enum { PFR_OP_BLOCK, PFR_OP_PASS, PFR_OP_ADDR_MAX, PFR_OP_TABLE_MAX };


struct pfr_astats {
 struct pfr_addr pfras_a;
 u_int64_t pfras_packets[PFR_DIR_MAX][PFR_OP_ADDR_MAX];
 u_int64_t pfras_bytes[PFR_DIR_MAX][PFR_OP_ADDR_MAX];
 long pfras_tzero;
};

enum { PFR_REFCNT_RULE, PFR_REFCNT_ANCHOR, PFR_REFCNT_MAX };

struct pfr_tstats {
 struct pfr_table pfrts_t;
 u_int64_t pfrts_packets[PFR_DIR_MAX][PFR_OP_TABLE_MAX];
 u_int64_t pfrts_bytes[PFR_DIR_MAX][PFR_OP_TABLE_MAX];
 u_int64_t pfrts_match;
 u_int64_t pfrts_nomatch;
 long pfrts_tzero;
 int pfrts_cnt;
 int pfrts_refcnt[PFR_REFCNT_MAX];
};



struct pfr_kentryworkq { struct pfr_kentry *slh_first; };
struct pfr_kentry {
 struct radix_node pfrke_node[2];
 union sockaddr_union pfrke_sa;
 u_int64_t pfrke_packets[PFR_DIR_MAX][PFR_OP_ADDR_MAX];
 u_int64_t pfrke_bytes[PFR_DIR_MAX][PFR_OP_ADDR_MAX];
 struct { struct pfr_kentry *sle_next; } pfrke_workq;
 long pfrke_tzero;
 u_int8_t pfrke_af;
 u_int8_t pfrke_net;
 u_int8_t pfrke_not;
 u_int8_t pfrke_mark;
};

struct pfr_ktableworkq { struct pfr_ktable *slh_first; };
struct pfr_ktablehead { struct pfr_ktable *rbh_root; };
struct pfr_ktable {
 struct pfr_tstats pfrkt_ts;
 struct { struct pfr_ktable *rbe_left; struct pfr_ktable *rbe_right; struct pfr_ktable *rbe_parent; int rbe_color; } pfrkt_tree;
 struct { struct pfr_ktable *sle_next; } pfrkt_workq;
 struct radix_node_head *pfrkt_ip4;
 struct radix_node_head *pfrkt_ip6;
 struct pfr_ktable *pfrkt_shadow;
 struct pfr_ktable *pfrkt_root;
 struct pf_ruleset *pfrkt_rs;
 long pfrkt_larg;
 int pfrkt_nflags;
};
# 777 "openbsd3/net/pfvar.h"
struct pf_state_tree_lan_ext { struct pf_state *rbh_root; };
void
 pf_state_tree_lan_ext_RB_INSERT_COLOR
# 778 "openbsd3/net/pfvar.h"
 (struct pf_state_tree_lan_ext *, struct pf_state *); void
 pf_state_tree_lan_ext_RB_REMOVE_COLOR
# 778 "openbsd3/net/pfvar.h"
 (struct pf_state_tree_lan_ext *, struct pf_state *, struct pf_state *);struct pf_state *
 pf_state_tree_lan_ext_RB_REMOVE
# 778 "openbsd3/net/pfvar.h"
 (struct pf_state_tree_lan_ext *, struct pf_state *); struct pf_state *
 pf_state_tree_lan_ext_RB_INSERT
# 778 "openbsd3/net/pfvar.h"
 (struct pf_state_tree_lan_ext *, struct pf_state *); struct pf_state *
 pf_state_tree_lan_ext_RB_FIND
# 778 "openbsd3/net/pfvar.h"
 (struct pf_state_tree_lan_ext *, struct pf_state *); struct pf_state *
 pf_state_tree_lan_ext_RB_NEXT
# 778 "openbsd3/net/pfvar.h"
 (struct pf_state_tree_lan_ext *, struct pf_state *); struct pf_state *
 pf_state_tree_lan_ext_RB_MINMAX
# 778 "openbsd3/net/pfvar.h"
 (struct pf_state_tree_lan_ext *, int);
                                                ;

struct pf_state_tree_ext_gwy { struct pf_state *rbh_root; };
void
 pf_state_tree_ext_gwy_RB_INSERT_COLOR
# 782 "openbsd3/net/pfvar.h"
 (struct pf_state_tree_ext_gwy *, struct pf_state *); void
 pf_state_tree_ext_gwy_RB_REMOVE_COLOR
# 782 "openbsd3/net/pfvar.h"
 (struct pf_state_tree_ext_gwy *, struct pf_state *, struct pf_state *);struct pf_state *
 pf_state_tree_ext_gwy_RB_REMOVE
# 782 "openbsd3/net/pfvar.h"
 (struct pf_state_tree_ext_gwy *, struct pf_state *); struct pf_state *
 pf_state_tree_ext_gwy_RB_INSERT
# 782 "openbsd3/net/pfvar.h"
 (struct pf_state_tree_ext_gwy *, struct pf_state *); struct pf_state *
 pf_state_tree_ext_gwy_RB_FIND
# 782 "openbsd3/net/pfvar.h"
 (struct pf_state_tree_ext_gwy *, struct pf_state *); struct pf_state *
 pf_state_tree_ext_gwy_RB_NEXT
# 782 "openbsd3/net/pfvar.h"
 (struct pf_state_tree_ext_gwy *, struct pf_state *); struct pf_state *
 pf_state_tree_ext_gwy_RB_MINMAX
# 782 "openbsd3/net/pfvar.h"
 (struct pf_state_tree_ext_gwy *, int);
                                                ;

struct pfi_if {
 char pfif_name[16];
 u_int64_t pfif_packets[2][2][2];
 u_int64_t pfif_bytes[2][2][2];
 u_int64_t pfif_addcnt;
 u_int64_t pfif_delcnt;
 long pfif_tzero;
 int pfif_states;
 int pfif_rules;
 int pfif_flags;
};

struct pfi_grouphead { struct pfi_kif *tqh_first; struct pfi_kif **tqh_last; };
struct pfi_statehead { struct pfi_kif *tqh_first; struct pfi_kif **tqh_last; };
struct pfi_ifhead { struct pfi_kif *rbh_root; };
struct pfi_kif {
 struct pfi_if pfik_if;
 struct { struct pfi_kif *rbe_left; struct pfi_kif *rbe_right; struct pfi_kif *rbe_parent; int rbe_color; } pfik_tree;
 struct pf_state_tree_lan_ext pfik_lan_ext;
 struct pf_state_tree_ext_gwy pfik_ext_gwy;
 struct pfi_grouphead pfik_grouphead;
 struct { struct pfi_kif *tqe_next; struct pfi_kif **tqe_prev; } pfik_instances;
 struct { struct pfi_kif *tqe_next; struct pfi_kif **tqe_prev; } pfik_w_states;
 struct hook_desc_head *pfik_ah_head;
 void *pfik_ah_cookie;
 struct pfi_kif *pfik_parent;
 struct ifnet *pfik_ifp;
 int pfik_states;
 int pfik_rules;
};
# 831 "openbsd3/net/pfvar.h"
struct pf_pdesc {
 u_int64_t tot_len;
 union {
  struct tcphdr *tcp;
  struct udphdr *udp;
  struct icmp *icmp;

  struct icmp6_hdr *icmp6;

  void *any;
 } hdr;
 struct pf_addr baddr;
 struct pf_addr naddr;
 struct pf_rule *nat_rule;
 struct pf_addr *src;
 struct pf_addr *dst;
 u_int16_t *ip_sum;
 u_int32_t p_len;
 u_int16_t flags;


 sa_family_t af;
 u_int8_t proto;
 u_int8_t tos;
};
# 932 "openbsd3/net/pfvar.h"
struct pf_status {
 u_int64_t counters[6];
 u_int64_t fcounters[3];
 u_int64_t scounters[3];
 u_int64_t pcounters[2][2][3];
 u_int64_t bcounters[2][2];
 u_int64_t stateid;
 u_int32_t running;
 u_int32_t states;
 u_int32_t src_nodes;
 u_int32_t since;
 u_int32_t debug;
 u_int32_t hostid;
 char ifname[16];
};

struct cbq_opts {
 u_int minburst;
 u_int maxburst;
 u_int pktsize;
 u_int maxpktsize;
 u_int ns_per_byte;
 u_int maxidle;
 int minidle;
 u_int offtime;
 int flags;
};

struct priq_opts {
 int flags;
};

struct hfsc_opts {

 u_int rtsc_m1;
 u_int rtsc_d;
 u_int rtsc_m2;

 u_int lssc_m1;
 u_int lssc_d;
 u_int lssc_m2;

 u_int ulsc_m1;
 u_int ulsc_d;
 u_int ulsc_m2;
 int flags;
};

struct pf_altq {
 char ifname[16];

 void *altq_disc;
 struct { struct pf_altq *tqe_next; struct pf_altq **tqe_prev; } entries;


 u_int8_t scheduler;
 u_int16_t tbrsize;
 u_int32_t ifbandwidth;


 char qname[16];
 char parent[16];
 u_int32_t parent_qid;
 u_int32_t bandwidth;
 u_int8_t priority;
 u_int16_t qlimit;
 u_int16_t flags;
 union {
  struct cbq_opts cbq_opts;
  struct priq_opts priq_opts;
  struct hfsc_opts hfsc_opts;
 } pq_u;

 u_int32_t qid;
};

struct pf_tag {
 u_int16_t tag;
};

struct pf_tagname {
 struct { struct pf_tagname *tqe_next; struct pf_tagname **tqe_prev; } entries;
 char name[16];
 u_int16_t tag;
 int ref;
};
# 1028 "openbsd3/net/pfvar.h"
struct pfioc_pooladdr {
 u_int32_t action;
 u_int32_t ticket;
 u_int32_t nr;
 u_int32_t r_num;
 u_int8_t r_action;
 u_int8_t r_last;
 u_int8_t af;
 char anchor[16];
 char ruleset[16];
 struct pf_pooladdr addr;
};

struct pfioc_rule {
 u_int32_t action;
 u_int32_t ticket;
 u_int32_t pool_ticket;
 u_int32_t nr;
 char anchor[16];
 char ruleset[16];
 struct pf_rule rule;
};

struct pfioc_natlook {
 struct pf_addr saddr;
 struct pf_addr daddr;
 struct pf_addr rsaddr;
 struct pf_addr rdaddr;
 u_int16_t sport;
 u_int16_t dport;
 u_int16_t rsport;
 u_int16_t rdport;
 sa_family_t af;
 u_int8_t proto;
 u_int8_t direction;
};

struct pfioc_state {
 u_int32_t nr;
 struct pf_state state;
};

struct pfioc_state_kill {

 sa_family_t psk_af;
 int psk_proto;
 struct pf_rule_addr psk_src;
 struct pf_rule_addr psk_dst;
 char psk_ifname[16];
};

struct pfioc_states {
 int ps_len;
 union {
  caddr_t psu_buf;
  struct pf_state *psu_states;
 } ps_u;


};

struct pfioc_src_nodes {
 int psn_len;
 union {
  caddr_t psu_buf;
  struct pf_src_node *psu_src_nodes;
 } psn_u;


};

struct pfioc_if {
 char ifname[16];
};

struct pfioc_tm {
 int timeout;
 int seconds;
};

struct pfioc_limit {
 int index;
 unsigned limit;
};

struct pfioc_altq {
 u_int32_t action;
 u_int32_t ticket;
 u_int32_t nr;
 struct pf_altq altq;
};

struct pfioc_qstats {
 u_int32_t ticket;
 u_int32_t nr;
 void *buf;
 int nbytes;
 u_int8_t scheduler;
};

struct pfioc_anchor {
 u_int32_t nr;
 char name[16];
};

struct pfioc_ruleset {
 u_int32_t nr;
 char anchor[16];
 char name[16];
};



struct pfioc_trans {
 int size;
 int esize;
 struct pfioc_trans_e {
  int rs_num;
  char anchor[16];
  char ruleset[16];
  u_int32_t ticket;
 } *array;
};
# 1164 "openbsd3/net/pfvar.h"
struct pfioc_table {
 struct pfr_table pfrio_table;
 void *pfrio_buffer;
 int pfrio_esize;
 int pfrio_size;
 int pfrio_size2;
 int pfrio_nadd;
 int pfrio_ndel;
 int pfrio_nchange;
 int pfrio_flags;
 u_int32_t pfrio_ticket;
};
# 1188 "openbsd3/net/pfvar.h"
struct pfioc_iface {
 char pfiio_name[16];
 void *pfiio_buffer;
 int pfiio_esize;
 int pfiio_size;
 int pfiio_nzero;
 int pfiio_flags;
};
# 1276 "openbsd3/net/pfvar.h"
struct pf_src_tree { struct pf_src_node *rbh_root; };
void pf_src_tree_RB_INSERT_COLOR(struct pf_src_tree *, struct pf_src_node *); void pf_src_tree_RB_REMOVE_COLOR(struct pf_src_tree *, struct pf_src_node *, struct pf_src_node *);struct pf_src_node *pf_src_tree_RB_REMOVE(struct pf_src_tree *, struct pf_src_node *); struct pf_src_node *pf_src_tree_RB_INSERT(struct pf_src_tree *, struct pf_src_node *); struct pf_src_node *pf_src_tree_RB_FIND(struct pf_src_tree *, struct pf_src_node *); struct pf_src_node *pf_src_tree_RB_NEXT(struct pf_src_tree *, struct pf_src_node *); struct pf_src_node *pf_src_tree_RB_MINMAX(struct pf_src_tree *, int);;
typedef  struct pf_src_tree   _GLOBAL_223_T; extern  _GLOBAL_223_T  global_tree_src_tracking[NUM_STACKS];    

struct pf_state_tree_id { struct pf_state *rbh_root; };
void
 pf_state_tree_id_RB_INSERT_COLOR
# 1281 "openbsd3/net/pfvar.h"
 (struct pf_state_tree_id *, struct pf_state *); void
 pf_state_tree_id_RB_REMOVE_COLOR
# 1281 "openbsd3/net/pfvar.h"
 (struct pf_state_tree_id *, struct pf_state *, struct pf_state *);struct pf_state *
 pf_state_tree_id_RB_REMOVE
# 1281 "openbsd3/net/pfvar.h"
 (struct pf_state_tree_id *, struct pf_state *); struct pf_state *
 pf_state_tree_id_RB_INSERT
# 1281 "openbsd3/net/pfvar.h"
 (struct pf_state_tree_id *, struct pf_state *); struct pf_state *
 pf_state_tree_id_RB_FIND
# 1281 "openbsd3/net/pfvar.h"
 (struct pf_state_tree_id *, struct pf_state *); struct pf_state *
 pf_state_tree_id_RB_NEXT
# 1281 "openbsd3/net/pfvar.h"
 (struct pf_state_tree_id *, struct pf_state *); struct pf_state *
 pf_state_tree_id_RB_MINMAX
# 1281 "openbsd3/net/pfvar.h"
 (struct pf_state_tree_id *, int);
                                  ;
typedef  struct pf_state_tree_id   _GLOBAL_224_T; extern  _GLOBAL_224_T  global_tree_id[NUM_STACKS];    
typedef  struct pf_state_queue   _GLOBAL_225_T; extern  _GLOBAL_225_T  global_state_updates[NUM_STACKS];    

typedef  struct pf_anchorqueue   _GLOBAL_226_T; extern  _GLOBAL_226_T  global_pf_anchors[NUM_STACKS];    
typedef  struct pf_ruleset   _GLOBAL_227_T; extern  _GLOBAL_227_T  global_pf_main_ruleset[NUM_STACKS];    
struct pf_poolqueue { struct pf_pool *tqh_first; struct pf_pool **tqh_last; };
typedef  struct pf_poolqueue   _GLOBAL_228_T; extern  _GLOBAL_228_T  _GLOBAL_0_pf_pools_I [ 2 ] ; extern  _GLOBAL_228_T  _GLOBAL_1_pf_pools_I [ 2 ] ; extern  _GLOBAL_228_T  _GLOBAL_2_pf_pools_I [ 2 ] ; extern  _GLOBAL_228_T  _GLOBAL_3_pf_pools_I [ 2 ] ; extern  _GLOBAL_228_T  _GLOBAL_4_pf_pools_I [ 2 ] ; extern  _GLOBAL_228_T  _GLOBAL_5_pf_pools_I [ 2 ] ; extern  _GLOBAL_228_T  _GLOBAL_6_pf_pools_I [ 2 ] ; extern  _GLOBAL_228_T  _GLOBAL_7_pf_pools_I [ 2 ] ; extern  _GLOBAL_228_T  _GLOBAL_8_pf_pools_I [ 2 ] ; extern  _GLOBAL_228_T  _GLOBAL_9_pf_pools_I [ 2 ] ; extern  _GLOBAL_228_T  _GLOBAL_10_pf_pools_I [ 2 ] ; extern  _GLOBAL_228_T  _GLOBAL_11_pf_pools_I [ 2 ] ; extern  _GLOBAL_228_T  _GLOBAL_12_pf_pools_I [ 2 ] ; extern  _GLOBAL_228_T  _GLOBAL_13_pf_pools_I [ 2 ] ; extern  _GLOBAL_228_T  _GLOBAL_14_pf_pools_I [ 2 ] ; extern  _GLOBAL_228_T  _GLOBAL_15_pf_pools_I [ 2 ] ; extern  _GLOBAL_228_T  _GLOBAL_16_pf_pools_I [ 2 ] ; extern  _GLOBAL_228_T  _GLOBAL_17_pf_pools_I [ 2 ] ; extern  _GLOBAL_228_T  _GLOBAL_18_pf_pools_I [ 2 ] ; extern  _GLOBAL_228_T  _GLOBAL_19_pf_pools_I [ 2 ] ; extern  _GLOBAL_228_T  _GLOBAL_20_pf_pools_I [ 2 ] ; extern  _GLOBAL_228_T  _GLOBAL_21_pf_pools_I [ 2 ] ; extern  _GLOBAL_228_T  _GLOBAL_22_pf_pools_I [ 2 ] ; extern  _GLOBAL_228_T  _GLOBAL_23_pf_pools_I [ 2 ] ; extern  _GLOBAL_228_T  _GLOBAL_24_pf_pools_I [ 2 ] ; extern  _GLOBAL_228_T  _GLOBAL_25_pf_pools_I [ 2 ] ; extern  _GLOBAL_228_T  _GLOBAL_26_pf_pools_I [ 2 ] ; extern  _GLOBAL_228_T  _GLOBAL_27_pf_pools_I [ 2 ] ; extern  _GLOBAL_228_T  _GLOBAL_28_pf_pools_I [ 2 ] ; extern  _GLOBAL_228_T  _GLOBAL_29_pf_pools_I [ 2 ] ; extern  _GLOBAL_228_T  _GLOBAL_30_pf_pools_I [ 2 ] ; extern  _GLOBAL_228_T  _GLOBAL_31_pf_pools_I [ 2 ] ; extern  _GLOBAL_228_T  _GLOBAL_32_pf_pools_I [ 2 ] ; extern  _GLOBAL_228_T  _GLOBAL_33_pf_pools_I [ 2 ] ; extern  _GLOBAL_228_T  _GLOBAL_34_pf_pools_I [ 2 ] ; extern  _GLOBAL_228_T  _GLOBAL_35_pf_pools_I [ 2 ] ; extern  _GLOBAL_228_T  _GLOBAL_36_pf_pools_I [ 2 ] ; extern  _GLOBAL_228_T  _GLOBAL_37_pf_pools_I [ 2 ] ; extern  _GLOBAL_228_T  _GLOBAL_38_pf_pools_I [ 2 ] ; extern  _GLOBAL_228_T  _GLOBAL_39_pf_pools_I [ 2 ] ; extern  _GLOBAL_228_T  _GLOBAL_40_pf_pools_I [ 2 ] ; extern  _GLOBAL_228_T  _GLOBAL_41_pf_pools_I [ 2 ] ; extern  _GLOBAL_228_T  _GLOBAL_42_pf_pools_I [ 2 ] ; extern  _GLOBAL_228_T  _GLOBAL_43_pf_pools_I [ 2 ] ; extern  _GLOBAL_228_T  _GLOBAL_44_pf_pools_I [ 2 ] ; extern  _GLOBAL_228_T  _GLOBAL_45_pf_pools_I [ 2 ] ; extern  _GLOBAL_228_T  _GLOBAL_46_pf_pools_I [ 2 ] ; extern  _GLOBAL_228_T  _GLOBAL_47_pf_pools_I [ 2 ] ; extern  _GLOBAL_228_T  _GLOBAL_48_pf_pools_I [ 2 ] ; extern  _GLOBAL_228_T  _GLOBAL_49_pf_pools_I [ 2 ] ; static __attribute__ ((unused)) __typeof__(_GLOBAL_0_pf_pools_I) *_GLOBAL_pf_pools_44_A[NUM_STACKS];   
struct pf_altqqueue { struct pf_altq *tqh_first; struct pf_altq **tqh_last; };
typedef  struct pf_altqqueue   _GLOBAL_229_T; extern  _GLOBAL_229_T  _GLOBAL_0_pf_altqs_I [ 2 ] ; extern  _GLOBAL_229_T  _GLOBAL_1_pf_altqs_I [ 2 ] ; extern  _GLOBAL_229_T  _GLOBAL_2_pf_altqs_I [ 2 ] ; extern  _GLOBAL_229_T  _GLOBAL_3_pf_altqs_I [ 2 ] ; extern  _GLOBAL_229_T  _GLOBAL_4_pf_altqs_I [ 2 ] ; extern  _GLOBAL_229_T  _GLOBAL_5_pf_altqs_I [ 2 ] ; extern  _GLOBAL_229_T  _GLOBAL_6_pf_altqs_I [ 2 ] ; extern  _GLOBAL_229_T  _GLOBAL_7_pf_altqs_I [ 2 ] ; extern  _GLOBAL_229_T  _GLOBAL_8_pf_altqs_I [ 2 ] ; extern  _GLOBAL_229_T  _GLOBAL_9_pf_altqs_I [ 2 ] ; extern  _GLOBAL_229_T  _GLOBAL_10_pf_altqs_I [ 2 ] ; extern  _GLOBAL_229_T  _GLOBAL_11_pf_altqs_I [ 2 ] ; extern  _GLOBAL_229_T  _GLOBAL_12_pf_altqs_I [ 2 ] ; extern  _GLOBAL_229_T  _GLOBAL_13_pf_altqs_I [ 2 ] ; extern  _GLOBAL_229_T  _GLOBAL_14_pf_altqs_I [ 2 ] ; extern  _GLOBAL_229_T  _GLOBAL_15_pf_altqs_I [ 2 ] ; extern  _GLOBAL_229_T  _GLOBAL_16_pf_altqs_I [ 2 ] ; extern  _GLOBAL_229_T  _GLOBAL_17_pf_altqs_I [ 2 ] ; extern  _GLOBAL_229_T  _GLOBAL_18_pf_altqs_I [ 2 ] ; extern  _GLOBAL_229_T  _GLOBAL_19_pf_altqs_I [ 2 ] ; extern  _GLOBAL_229_T  _GLOBAL_20_pf_altqs_I [ 2 ] ; extern  _GLOBAL_229_T  _GLOBAL_21_pf_altqs_I [ 2 ] ; extern  _GLOBAL_229_T  _GLOBAL_22_pf_altqs_I [ 2 ] ; extern  _GLOBAL_229_T  _GLOBAL_23_pf_altqs_I [ 2 ] ; extern  _GLOBAL_229_T  _GLOBAL_24_pf_altqs_I [ 2 ] ; extern  _GLOBAL_229_T  _GLOBAL_25_pf_altqs_I [ 2 ] ; extern  _GLOBAL_229_T  _GLOBAL_26_pf_altqs_I [ 2 ] ; extern  _GLOBAL_229_T  _GLOBAL_27_pf_altqs_I [ 2 ] ; extern  _GLOBAL_229_T  _GLOBAL_28_pf_altqs_I [ 2 ] ; extern  _GLOBAL_229_T  _GLOBAL_29_pf_altqs_I [ 2 ] ; extern  _GLOBAL_229_T  _GLOBAL_30_pf_altqs_I [ 2 ] ; extern  _GLOBAL_229_T  _GLOBAL_31_pf_altqs_I [ 2 ] ; extern  _GLOBAL_229_T  _GLOBAL_32_pf_altqs_I [ 2 ] ; extern  _GLOBAL_229_T  _GLOBAL_33_pf_altqs_I [ 2 ] ; extern  _GLOBAL_229_T  _GLOBAL_34_pf_altqs_I [ 2 ] ; extern  _GLOBAL_229_T  _GLOBAL_35_pf_altqs_I [ 2 ] ; extern  _GLOBAL_229_T  _GLOBAL_36_pf_altqs_I [ 2 ] ; extern  _GLOBAL_229_T  _GLOBAL_37_pf_altqs_I [ 2 ] ; extern  _GLOBAL_229_T  _GLOBAL_38_pf_altqs_I [ 2 ] ; extern  _GLOBAL_229_T  _GLOBAL_39_pf_altqs_I [ 2 ] ; extern  _GLOBAL_229_T  _GLOBAL_40_pf_altqs_I [ 2 ] ; extern  _GLOBAL_229_T  _GLOBAL_41_pf_altqs_I [ 2 ] ; extern  _GLOBAL_229_T  _GLOBAL_42_pf_altqs_I [ 2 ] ; extern  _GLOBAL_229_T  _GLOBAL_43_pf_altqs_I [ 2 ] ; extern  _GLOBAL_229_T  _GLOBAL_44_pf_altqs_I [ 2 ] ; extern  _GLOBAL_229_T  _GLOBAL_45_pf_altqs_I [ 2 ] ; extern  _GLOBAL_229_T  _GLOBAL_46_pf_altqs_I [ 2 ] ; extern  _GLOBAL_229_T  _GLOBAL_47_pf_altqs_I [ 2 ] ; extern  _GLOBAL_229_T  _GLOBAL_48_pf_altqs_I [ 2 ] ; extern  _GLOBAL_229_T  _GLOBAL_49_pf_altqs_I [ 2 ] ; static __attribute__ ((unused)) __typeof__(_GLOBAL_0_pf_altqs_I) *_GLOBAL_pf_altqs_45_A[NUM_STACKS];   
typedef  struct pf_palist   _GLOBAL_230_T; extern  _GLOBAL_230_T  global_pf_pabuf[NUM_STACKS];    
typedef  struct pfi_kif   _GLOBAL_231_T; extern  _GLOBAL_231_T  * *  global_pfi_index2kif[NUM_STACKS];    

typedef  u_int32_t  _GLOBAL_232_T; extern  _GLOBAL_232_T  global_ticket_altqs_active[NUM_STACKS];   
typedef  u_int32_t  _GLOBAL_233_T; extern  _GLOBAL_233_T  global_ticket_altqs_inactive[NUM_STACKS];   
typedef  int  _GLOBAL_234_T; extern  _GLOBAL_234_T  global_altqs_inactive_open[NUM_STACKS];   
typedef  u_int32_t  _GLOBAL_235_T; extern  _GLOBAL_235_T  global_ticket_pabuf[NUM_STACKS];   
typedef  struct pf_altqqueue   _GLOBAL_236_T; extern  _GLOBAL_236_T  * global_pf_altqs_active[NUM_STACKS];    
typedef  struct pf_altqqueue   _GLOBAL_237_T; extern  _GLOBAL_237_T  * global_pf_altqs_inactive[NUM_STACKS];    
typedef  struct pf_poolqueue   _GLOBAL_238_T; extern  _GLOBAL_238_T  * global_pf_pools_active[NUM_STACKS];    
typedef  struct pf_poolqueue   _GLOBAL_239_T; extern  _GLOBAL_239_T  * global_pf_pools_inactive[NUM_STACKS];    
extern int pf_tbladdr_setup(struct pf_ruleset *,
        struct pf_addr_wrap *);
extern void pf_tbladdr_remove(struct pf_addr_wrap *);
extern void pf_tbladdr_copyout(struct pf_addr_wrap *);
extern void pf_calc_skip_steps(struct pf_rulequeue *);
extern void pf_update_anchor_rules(void);
typedef  struct pool   _GLOBAL_240_T; extern  _GLOBAL_240_T  global_pf_src_tree_pl[NUM_STACKS]; extern  _GLOBAL_240_T  global_pf_rule_pl[NUM_STACKS];     
typedef  struct pool   _GLOBAL_241_T; extern  _GLOBAL_241_T  global_pf_state_pl[NUM_STACKS]; extern  _GLOBAL_241_T  global_pf_altq_pl[NUM_STACKS]; extern  _GLOBAL_241_T  global_pf_pooladdr_pl[NUM_STACKS];      
typedef  struct pool   _GLOBAL_242_T; extern  _GLOBAL_242_T  global_pf_state_scrub_pl[NUM_STACKS];    
extern void pf_purge_timeout(void *);
extern void pf_purge_expired_src_nodes(void);
extern void pf_purge_expired_states(void);
extern int pf_insert_state(struct pfi_kif *,
        struct pf_state *);
extern int pf_insert_src_node(struct pf_src_node **,
        struct pf_rule *, struct pf_addr *,
        sa_family_t);
void pf_src_tree_remove_state(struct pf_state *);
extern struct pf_state *pf_find_state_byid(struct pf_state *);
extern struct pf_state *pf_find_state_all(struct pf_state *key,
        u_int8_t tree, int *more);
extern struct pf_anchor *pf_find_anchor(const char *);
extern struct pf_ruleset *pf_find_ruleset(char *, char *);
extern struct pf_ruleset *pf_find_or_create_ruleset(
        char[16],
        char[16]);
extern void pf_remove_if_empty_ruleset(
        struct pf_ruleset *);

typedef  struct ifnet   _GLOBAL_243_T; extern  _GLOBAL_243_T  * global_sync_ifp[NUM_STACKS];    
typedef  struct pf_rule   _GLOBAL_244_T; extern  _GLOBAL_244_T  global_pf_default_rule[NUM_STACKS];    
extern void pf_addrcpy(struct pf_addr *, struct pf_addr *,
        u_int8_t);
void pf_rm_rule(struct pf_rulequeue *,
        struct pf_rule *);


int pf_test(int, struct ifnet *, struct mbuf **);



int pf_test6(int, struct ifnet *, struct mbuf **);
void pf_poolmask(struct pf_addr *, struct pf_addr*,
     struct pf_addr *, struct pf_addr *, u_int8_t);
void pf_addr_inc(struct pf_addr *, sa_family_t);


void *pf_pull_hdr(struct mbuf *, int, void *, int, u_short *, u_short *,
     sa_family_t);
void pf_change_a(void *, u_int16_t *, u_int32_t, u_int8_t);
int pflog_packet(struct pfi_kif *, struct mbuf *, sa_family_t, u_int8_t,
     u_int8_t, struct pf_rule *, struct pf_rule *, struct pf_ruleset *);
int pf_match_addr(u_int8_t, struct pf_addr *, struct pf_addr *,
     struct pf_addr *, sa_family_t);
int pf_match(u_int8_t, u_int32_t, u_int32_t, u_int32_t);
int pf_match_port(u_int8_t, u_int16_t, u_int16_t, u_int16_t);
int pf_match_uid(u_int8_t, uid_t, uid_t, uid_t);
int pf_match_gid(u_int8_t, gid_t, gid_t, gid_t);

void pf_normalize_init(void);
int pf_normalize_ip(struct mbuf **, int, struct pfi_kif *, u_short *);
int pf_normalize_ip6(struct mbuf **, int, struct pfi_kif *, u_short *);
int pf_normalize_tcp(int, struct pfi_kif *, struct mbuf *, int, int, void *,
     struct pf_pdesc *);
void pf_normalize_tcp_cleanup(struct pf_state *);
int pf_normalize_tcp_init(struct mbuf *, int, struct pf_pdesc *,
     struct tcphdr *, struct pf_state_peer *, struct pf_state_peer *);
int pf_normalize_tcp_stateful(struct mbuf *, int, struct pf_pdesc *,
     u_short *, struct tcphdr *, struct pf_state_peer *,
     struct pf_state_peer *, int *);
u_int32_t
 pf_state_expires(const struct pf_state *);
void pf_purge_expired_fragments(void);
int pf_routable(struct pf_addr *addr, sa_family_t af);
void pfr_initialize(void);
int pfr_match_addr(struct pfr_ktable *, struct pf_addr *, sa_family_t);
void pfr_update_stats(struct pfr_ktable *, struct pf_addr *, sa_family_t,
     u_int64_t, int, int, int);
int pfr_pool_get(struct pfr_ktable *, int *, struct pf_addr *,
     struct pf_addr **, struct pf_addr **, sa_family_t);
void pfr_dynaddr_update(struct pfr_ktable *, struct pfi_dynaddr *);
struct pfr_ktable *
 pfr_attach_table(struct pf_ruleset *, char *);
void pfr_detach_table(struct pfr_ktable *);
int pfr_clr_tables(struct pfr_table *, int *, int);
int pfr_add_tables(struct pfr_table *, int, int *, int);
int pfr_del_tables(struct pfr_table *, int, int *, int);
int pfr_get_tables(struct pfr_table *, struct pfr_table *, int *, int);
int pfr_get_tstats(struct pfr_table *, struct pfr_tstats *, int *, int);
int pfr_clr_tstats(struct pfr_table *, int, int *, int);
int pfr_set_tflags(struct pfr_table *, int, int, int, int *, int *, int);
int pfr_clr_addrs(struct pfr_table *, int *, int);
int pfr_add_addrs(struct pfr_table *, struct pfr_addr *, int, int *,
     int);
int pfr_del_addrs(struct pfr_table *, struct pfr_addr *, int, int *,
     int);
int pfr_set_addrs(struct pfr_table *, struct pfr_addr *, int, int *,
     int *, int *, int *, int);
int pfr_get_addrs(struct pfr_table *, struct pfr_addr *, int *, int);
int pfr_get_astats(struct pfr_table *, struct pfr_astats *, int *, int);
int pfr_clr_astats(struct pfr_table *, struct pfr_addr *, int, int *,
     int);
int pfr_tst_addrs(struct pfr_table *, struct pfr_addr *, int, int *,
     int);
int pfr_ina_begin(struct pfr_table *, u_int32_t *, int *, int);
int pfr_ina_rollback(struct pfr_table *, u_int32_t, int *, int);
int pfr_ina_commit(struct pfr_table *, u_int32_t, int *, int *, int);
int pfr_ina_define(struct pfr_table *, struct pfr_addr *, int, int *,
     int *, u_int32_t, int);

void pfi_initialize(void);
void pfi_attach_clone(struct if_clone *);
void pfi_attach_ifnet(struct ifnet *);
void pfi_detach_ifnet(struct ifnet *);
struct pfi_kif *pfi_lookup_create(const char *);
struct pfi_kif *pfi_lookup_if(const char *);
int pfi_maybe_destroy(struct pfi_kif *);
struct pfi_kif *pfi_attach_rule(const char *);
void pfi_detach_rule(struct pfi_kif *);
void pfi_attach_state(struct pfi_kif *);
void pfi_detach_state(struct pfi_kif *);
int pfi_dynaddr_setup(struct pf_addr_wrap *, sa_family_t);
void pfi_dynaddr_copyout(struct pf_addr_wrap *);
void pfi_dynaddr_remove(struct pf_addr_wrap *);
void pfi_fill_oldstatus(struct pf_status *);
int pfi_clr_istats(const char *, int *, int);
int pfi_get_ifaces(const char *, struct pfi_if *, int *, int);
int pfi_match_addr(struct pfi_dynaddr *, struct pf_addr *,
      sa_family_t);

typedef  struct pfi_statehead   _GLOBAL_245_T; extern  _GLOBAL_245_T  global_pfi_statehead[NUM_STACKS];    

u_int16_t pf_tagname2tag(char *);
void pf_tag2tagname(u_int16_t, char *);
void pf_tag_unref(u_int16_t);
int pf_tag_packet(struct mbuf *, struct pf_tag *, int);
u_int32_t pf_qname2qid(char *);
void pf_qid2qname(u_int32_t, char *);
void pf_qid_unref(u_int32_t);

typedef  struct pf_status   _GLOBAL_246_T; extern  _GLOBAL_246_T  global_pf_status[NUM_STACKS];    
typedef  struct pool   _GLOBAL_247_T; extern  _GLOBAL_247_T  global_pf_frent_pl[NUM_STACKS]; extern  _GLOBAL_247_T  global_pf_frag_pl[NUM_STACKS];     

struct pf_pool_limit {
 void *pp;
 unsigned limit;
};
typedef  struct pf_pool_limit   _GLOBAL_248_T; extern  _GLOBAL_248_T  _GLOBAL_0_pf_pool_limits_I [ PF_LIMIT_MAX ] ; extern  _GLOBAL_248_T  _GLOBAL_1_pf_pool_limits_I [ PF_LIMIT_MAX ] ; extern  _GLOBAL_248_T  _GLOBAL_2_pf_pool_limits_I [ PF_LIMIT_MAX ] ; extern  _GLOBAL_248_T  _GLOBAL_3_pf_pool_limits_I [ PF_LIMIT_MAX ] ; extern  _GLOBAL_248_T  _GLOBAL_4_pf_pool_limits_I [ PF_LIMIT_MAX ] ; extern  _GLOBAL_248_T  _GLOBAL_5_pf_pool_limits_I [ PF_LIMIT_MAX ] ; extern  _GLOBAL_248_T  _GLOBAL_6_pf_pool_limits_I [ PF_LIMIT_MAX ] ; extern  _GLOBAL_248_T  _GLOBAL_7_pf_pool_limits_I [ PF_LIMIT_MAX ] ; extern  _GLOBAL_248_T  _GLOBAL_8_pf_pool_limits_I [ PF_LIMIT_MAX ] ; extern  _GLOBAL_248_T  _GLOBAL_9_pf_pool_limits_I [ PF_LIMIT_MAX ] ; extern  _GLOBAL_248_T  _GLOBAL_10_pf_pool_limits_I [ PF_LIMIT_MAX ] ; extern  _GLOBAL_248_T  _GLOBAL_11_pf_pool_limits_I [ PF_LIMIT_MAX ] ; extern  _GLOBAL_248_T  _GLOBAL_12_pf_pool_limits_I [ PF_LIMIT_MAX ] ; extern  _GLOBAL_248_T  _GLOBAL_13_pf_pool_limits_I [ PF_LIMIT_MAX ] ; extern  _GLOBAL_248_T  _GLOBAL_14_pf_pool_limits_I [ PF_LIMIT_MAX ] ; extern  _GLOBAL_248_T  _GLOBAL_15_pf_pool_limits_I [ PF_LIMIT_MAX ] ; extern  _GLOBAL_248_T  _GLOBAL_16_pf_pool_limits_I [ PF_LIMIT_MAX ] ; extern  _GLOBAL_248_T  _GLOBAL_17_pf_pool_limits_I [ PF_LIMIT_MAX ] ; extern  _GLOBAL_248_T  _GLOBAL_18_pf_pool_limits_I [ PF_LIMIT_MAX ] ; extern  _GLOBAL_248_T  _GLOBAL_19_pf_pool_limits_I [ PF_LIMIT_MAX ] ; extern  _GLOBAL_248_T  _GLOBAL_20_pf_pool_limits_I [ PF_LIMIT_MAX ] ; extern  _GLOBAL_248_T  _GLOBAL_21_pf_pool_limits_I [ PF_LIMIT_MAX ] ; extern  _GLOBAL_248_T  _GLOBAL_22_pf_pool_limits_I [ PF_LIMIT_MAX ] ; extern  _GLOBAL_248_T  _GLOBAL_23_pf_pool_limits_I [ PF_LIMIT_MAX ] ; extern  _GLOBAL_248_T  _GLOBAL_24_pf_pool_limits_I [ PF_LIMIT_MAX ] ; extern  _GLOBAL_248_T  _GLOBAL_25_pf_pool_limits_I [ PF_LIMIT_MAX ] ; extern  _GLOBAL_248_T  _GLOBAL_26_pf_pool_limits_I [ PF_LIMIT_MAX ] ; extern  _GLOBAL_248_T  _GLOBAL_27_pf_pool_limits_I [ PF_LIMIT_MAX ] ; extern  _GLOBAL_248_T  _GLOBAL_28_pf_pool_limits_I [ PF_LIMIT_MAX ] ; extern  _GLOBAL_248_T  _GLOBAL_29_pf_pool_limits_I [ PF_LIMIT_MAX ] ; extern  _GLOBAL_248_T  _GLOBAL_30_pf_pool_limits_I [ PF_LIMIT_MAX ] ; extern  _GLOBAL_248_T  _GLOBAL_31_pf_pool_limits_I [ PF_LIMIT_MAX ] ; extern  _GLOBAL_248_T  _GLOBAL_32_pf_pool_limits_I [ PF_LIMIT_MAX ] ; extern  _GLOBAL_248_T  _GLOBAL_33_pf_pool_limits_I [ PF_LIMIT_MAX ] ; extern  _GLOBAL_248_T  _GLOBAL_34_pf_pool_limits_I [ PF_LIMIT_MAX ] ; extern  _GLOBAL_248_T  _GLOBAL_35_pf_pool_limits_I [ PF_LIMIT_MAX ] ; extern  _GLOBAL_248_T  _GLOBAL_36_pf_pool_limits_I [ PF_LIMIT_MAX ] ; extern  _GLOBAL_248_T  _GLOBAL_37_pf_pool_limits_I [ PF_LIMIT_MAX ] ; extern  _GLOBAL_248_T  _GLOBAL_38_pf_pool_limits_I [ PF_LIMIT_MAX ] ; extern  _GLOBAL_248_T  _GLOBAL_39_pf_pool_limits_I [ PF_LIMIT_MAX ] ; extern  _GLOBAL_248_T  _GLOBAL_40_pf_pool_limits_I [ PF_LIMIT_MAX ] ; extern  _GLOBAL_248_T  _GLOBAL_41_pf_pool_limits_I [ PF_LIMIT_MAX ] ; extern  _GLOBAL_248_T  _GLOBAL_42_pf_pool_limits_I [ PF_LIMIT_MAX ] ; extern  _GLOBAL_248_T  _GLOBAL_43_pf_pool_limits_I [ PF_LIMIT_MAX ] ; extern  _GLOBAL_248_T  _GLOBAL_44_pf_pool_limits_I [ PF_LIMIT_MAX ] ; extern  _GLOBAL_248_T  _GLOBAL_45_pf_pool_limits_I [ PF_LIMIT_MAX ] ; extern  _GLOBAL_248_T  _GLOBAL_46_pf_pool_limits_I [ PF_LIMIT_MAX ] ; extern  _GLOBAL_248_T  _GLOBAL_47_pf_pool_limits_I [ PF_LIMIT_MAX ] ; extern  _GLOBAL_248_T  _GLOBAL_48_pf_pool_limits_I [ PF_LIMIT_MAX ] ; extern  _GLOBAL_248_T  _GLOBAL_49_pf_pool_limits_I [ PF_LIMIT_MAX ] ; static __attribute__ ((unused)) __typeof__(_GLOBAL_0_pf_pool_limits_I) *_GLOBAL_pf_pool_limits_46_A[NUM_STACKS];   




int pf_osfp_add(struct pf_osfp_ioctl *);

struct pf_osfp_enlist *
 pf_osfp_fingerprint(struct pf_pdesc *, struct mbuf *, int,
     const struct tcphdr *);

struct pf_osfp_enlist *
 pf_osfp_fingerprint_hdr(const struct ip *, const struct tcphdr *);
void pf_osfp_flush(void);
int pf_osfp_get(struct pf_osfp_ioctl *);
void pf_osfp_initialize(void);
int pf_osfp_match(struct pf_osfp_enlist *, pf_osfp_t);
struct pf_os_fingerprint *
 pf_osfp_validate(void);
# 74 "openbsd3/net/pf.c" 2
# 1 "openbsd3/net/if_pflog.h" 1
# 30 "openbsd3/net/if_pflog.h"
struct pflog_softc {
 struct ifnet sc_if;
};






struct pfloghdr {
 u_int8_t length;
 sa_family_t af;
 u_int8_t action;
 u_int8_t reason;
 char ifname[16];
 char ruleset[16];
 u_int32_t rulenr;
 u_int32_t subrulenr;
 u_int8_t dir;
 u_int8_t pad[3];
};






struct old_pfloghdr {
 u_int32_t af;
 char ifname[16];
 short rnr;
 u_short reason;
 u_short action;
 u_short dir;
};
# 75 "openbsd3/net/pf.c" 2


# 1 "openbsd3/net/if_pfsync.h" 1
# 35 "openbsd3/net/if_pfsync.h"
struct pfsync_state_scrub {
 u_int16_t pfss_flags;
 u_int8_t pfss_ttl;
 u_int8_t scrub_flag;
 u_int32_t pfss_ts_mod;
} __attribute__((__packed__)) ;

struct pfsync_state_host {
 struct pf_addr addr;
 u_int16_t port;
 u_int16_t pad[3];
} __attribute__((__packed__)) ;

struct pfsync_state_peer {
 struct pfsync_state_scrub scrub;
 u_int32_t seqlo;
 u_int32_t seqhi;
 u_int32_t seqdiff;
 u_int16_t max_win;
 u_int16_t mss;
 u_int8_t state;
 u_int8_t wscale;
 u_int8_t scrub_flag;
 u_int8_t pad[5];
} __attribute__((__packed__)) ;

struct pfsync_state {
 u_int32_t id[2];
 char ifname[16];
 struct pfsync_state_host lan;
 struct pfsync_state_host gwy;
 struct pfsync_state_host ext;
 struct pfsync_state_peer src;
 struct pfsync_state_peer dst;
 struct pf_addr rt_addr;
 u_int32_t rule;
 u_int32_t anchor;
 u_int32_t nat_rule;
 u_int32_t creation;
 u_int32_t expire;
 u_int32_t packets[2];
 u_int32_t bytes[2];
 u_int32_t creatorid;
 sa_family_t af;
 u_int8_t proto;
 u_int8_t direction;
 u_int8_t log;
 u_int8_t allow_opts;
 u_int8_t timeout;
 u_int8_t sync_flags;
 u_int8_t updates;
} __attribute__((__packed__)) ;

struct pfsync_state_upd {
 u_int32_t id[2];
 struct pfsync_state_peer src;
 struct pfsync_state_peer dst;
 u_int32_t creatorid;
 u_int32_t expire;
 u_int8_t timeout;
 u_int8_t updates;
 u_int8_t pad[6];
} __attribute__((__packed__)) ;

struct pfsync_state_del {
 u_int32_t id[2];
 u_int32_t creatorid;
 struct {
  u_int8_t state;
 } src;
 struct {
  u_int8_t state;
 } dst;
 u_int8_t pad[2];
} __attribute__((__packed__)) ;

struct pfsync_state_upd_req {
 u_int32_t id[2];
 u_int32_t creatorid;
 u_int32_t pad;
} __attribute__((__packed__)) ;

struct pfsync_state_clr {
 char ifname[16];
 u_int32_t creatorid;
 u_int32_t pad;
} __attribute__((__packed__)) ;

struct pfsync_state_bus {
 u_int32_t creatorid;
 u_int32_t endtime;
 u_int8_t status;


 u_int8_t pad[7];
} __attribute__((__packed__)) ;



union sc_statep {
 struct pfsync_state *s;
 struct pfsync_state_upd *u;
 struct pfsync_state_del *d;
 struct pfsync_state_clr *c;
 struct pfsync_state_bus *b;
 struct pfsync_state_upd_req *r;
};

typedef  int  _GLOBAL_249_T; extern  _GLOBAL_249_T  global_pfsync_sync_ok[NUM_STACKS];   

struct pfsync_softc {
 struct ifnet sc_if;
 struct ifnet *sc_sync_ifp;

 struct ip_moptions sc_imo;
 struct timeout sc_tmo;
 struct timeout sc_bulk_tmo;
 struct timeout sc_bulkfail_tmo;
 struct in_addr sc_sendaddr;
 struct mbuf *sc_mbuf;
 struct mbuf *sc_mbuf_net;
 union sc_statep sc_statep;
 union sc_statep sc_statep_net;
 u_int32_t sc_ureq_received;
 u_int32_t sc_ureq_sent;
 int sc_bulk_tries;
 int sc_maxcount;
 int sc_maxupdates;
};



struct pfsync_header {
 u_int8_t version;

 u_int8_t af;
 u_int8_t action;
# 183 "openbsd3/net/if_pfsync.h"
 u_int8_t count;
} __attribute__((__packed__)) ;
# 196 "openbsd3/net/if_pfsync.h"
struct pfsyncstats {
 u_long pfsyncs_ipackets;
 u_long pfsyncs_ipackets6;
 u_long pfsyncs_badif;
 u_long pfsyncs_badttl;
 u_long pfsyncs_hdrops;
 u_long pfsyncs_badver;
 u_long pfsyncs_badact;
 u_long pfsyncs_badlen;
 u_long pfsyncs_badauth;
 u_long pfsyncs_badstate;

 u_long pfsyncs_opackets;
 u_long pfsyncs_opackets6;
 u_long pfsyncs_onomem;
 u_long pfsyncs_oerrors;
};




struct pfsyncreq {
 char pfsyncr_syncif[16];
 int pfsyncr_maxupdates;
 int pfsyncr_authlevel;
};
# 257 "openbsd3/net/if_pfsync.h"
void pfsync_input(struct mbuf *, ...);
int pfsync_clear_states(u_int32_t, char *);
int pfsync_pack_state(u_int8_t, struct pf_state *, int);
# 78 "openbsd3/net/pf.c" 2






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


typedef  int  _GLOBAL_250_T; extern  _GLOBAL_250_T  global_nd6_prune[NUM_STACKS];   
typedef  int  _GLOBAL_251_T; extern  _GLOBAL_251_T  global_nd6_delay[NUM_STACKS];   
typedef  int  _GLOBAL_252_T; extern  _GLOBAL_252_T  global_nd6_umaxtries[NUM_STACKS];   
typedef  int  _GLOBAL_253_T; extern  _GLOBAL_253_T  global_nd6_mmaxtries[NUM_STACKS];   
typedef  int  _GLOBAL_254_T; extern  _GLOBAL_254_T  global_nd6_useloopback[NUM_STACKS];   
typedef  int  _GLOBAL_255_T; extern  _GLOBAL_255_T  global_nd6_maxnudhint[NUM_STACKS];   
typedef  int  _GLOBAL_256_T; extern  _GLOBAL_256_T  global_nd6_gctimer[NUM_STACKS];   
typedef  struct llinfo_nd6   _GLOBAL_257_T; extern  _GLOBAL_257_T  global_llinfo_nd6[NUM_STACKS];    
typedef  struct nd_drhead   _GLOBAL_258_T; extern  _GLOBAL_258_T  global_nd_defrouter[NUM_STACKS];    
typedef  struct nd_prhead   _GLOBAL_259_T; extern  _GLOBAL_259_T  global_nd_prefix[NUM_STACKS];    
typedef  int  _GLOBAL_260_T; extern  _GLOBAL_260_T  global_nd6_debug[NUM_STACKS];   



typedef  struct timeout   _GLOBAL_261_T; extern  _GLOBAL_261_T  global_nd6_timer_ch[NUM_STACKS];    


typedef  int  _GLOBAL_262_T; extern  _GLOBAL_262_T  global_nd6_defifindex[NUM_STACKS];   

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
# 85 "openbsd3/net/pf.c" 2
# 94 "openbsd3/net/pf.c"
typedef  struct pf_anchorqueue  _GLOBAL_263_T;  _GLOBAL_263_T  global_pf_anchors[NUM_STACKS];   
typedef  struct pf_ruleset  _GLOBAL_264_T;  _GLOBAL_264_T  global_pf_main_ruleset[NUM_STACKS];   
typedef  struct pf_altqqueue  _GLOBAL_265_T;  _GLOBAL_265_T  _GLOBAL_0_pf_altqs_I [ 2 ] ;  _GLOBAL_265_T  _GLOBAL_1_pf_altqs_I [ 2 ] ;  _GLOBAL_265_T  _GLOBAL_2_pf_altqs_I [ 2 ] ;  _GLOBAL_265_T  _GLOBAL_3_pf_altqs_I [ 2 ] ;  _GLOBAL_265_T  _GLOBAL_4_pf_altqs_I [ 2 ] ;  _GLOBAL_265_T  _GLOBAL_5_pf_altqs_I [ 2 ] ;  _GLOBAL_265_T  _GLOBAL_6_pf_altqs_I [ 2 ] ;  _GLOBAL_265_T  _GLOBAL_7_pf_altqs_I [ 2 ] ;  _GLOBAL_265_T  _GLOBAL_8_pf_altqs_I [ 2 ] ;  _GLOBAL_265_T  _GLOBAL_9_pf_altqs_I [ 2 ] ;  _GLOBAL_265_T  _GLOBAL_10_pf_altqs_I [ 2 ] ;  _GLOBAL_265_T  _GLOBAL_11_pf_altqs_I [ 2 ] ;  _GLOBAL_265_T  _GLOBAL_12_pf_altqs_I [ 2 ] ;  _GLOBAL_265_T  _GLOBAL_13_pf_altqs_I [ 2 ] ;  _GLOBAL_265_T  _GLOBAL_14_pf_altqs_I [ 2 ] ;  _GLOBAL_265_T  _GLOBAL_15_pf_altqs_I [ 2 ] ;  _GLOBAL_265_T  _GLOBAL_16_pf_altqs_I [ 2 ] ;  _GLOBAL_265_T  _GLOBAL_17_pf_altqs_I [ 2 ] ;  _GLOBAL_265_T  _GLOBAL_18_pf_altqs_I [ 2 ] ;  _GLOBAL_265_T  _GLOBAL_19_pf_altqs_I [ 2 ] ;  _GLOBAL_265_T  _GLOBAL_20_pf_altqs_I [ 2 ] ;  _GLOBAL_265_T  _GLOBAL_21_pf_altqs_I [ 2 ] ;  _GLOBAL_265_T  _GLOBAL_22_pf_altqs_I [ 2 ] ;  _GLOBAL_265_T  _GLOBAL_23_pf_altqs_I [ 2 ] ;  _GLOBAL_265_T  _GLOBAL_24_pf_altqs_I [ 2 ] ;  _GLOBAL_265_T  _GLOBAL_25_pf_altqs_I [ 2 ] ;  _GLOBAL_265_T  _GLOBAL_26_pf_altqs_I [ 2 ] ;  _GLOBAL_265_T  _GLOBAL_27_pf_altqs_I [ 2 ] ;  _GLOBAL_265_T  _GLOBAL_28_pf_altqs_I [ 2 ] ;  _GLOBAL_265_T  _GLOBAL_29_pf_altqs_I [ 2 ] ;  _GLOBAL_265_T  _GLOBAL_30_pf_altqs_I [ 2 ] ;  _GLOBAL_265_T  _GLOBAL_31_pf_altqs_I [ 2 ] ;  _GLOBAL_265_T  _GLOBAL_32_pf_altqs_I [ 2 ] ;  _GLOBAL_265_T  _GLOBAL_33_pf_altqs_I [ 2 ] ;  _GLOBAL_265_T  _GLOBAL_34_pf_altqs_I [ 2 ] ;  _GLOBAL_265_T  _GLOBAL_35_pf_altqs_I [ 2 ] ;  _GLOBAL_265_T  _GLOBAL_36_pf_altqs_I [ 2 ] ;  _GLOBAL_265_T  _GLOBAL_37_pf_altqs_I [ 2 ] ;  _GLOBAL_265_T  _GLOBAL_38_pf_altqs_I [ 2 ] ;  _GLOBAL_265_T  _GLOBAL_39_pf_altqs_I [ 2 ] ;  _GLOBAL_265_T  _GLOBAL_40_pf_altqs_I [ 2 ] ;  _GLOBAL_265_T  _GLOBAL_41_pf_altqs_I [ 2 ] ;  _GLOBAL_265_T  _GLOBAL_42_pf_altqs_I [ 2 ] ;  _GLOBAL_265_T  _GLOBAL_43_pf_altqs_I [ 2 ] ;  _GLOBAL_265_T  _GLOBAL_44_pf_altqs_I [ 2 ] ;  _GLOBAL_265_T  _GLOBAL_45_pf_altqs_I [ 2 ] ;  _GLOBAL_265_T  _GLOBAL_46_pf_altqs_I [ 2 ] ;  _GLOBAL_265_T  _GLOBAL_47_pf_altqs_I [ 2 ] ;  _GLOBAL_265_T  _GLOBAL_48_pf_altqs_I [ 2 ] ;  _GLOBAL_265_T  _GLOBAL_49_pf_altqs_I [ 2 ] ; static __attribute__ ((unused)) __typeof__(_GLOBAL_0_pf_altqs_I) *_GLOBAL_pf_altqs_47_A[NUM_STACKS] = { &_GLOBAL_0_pf_altqs_I, &_GLOBAL_1_pf_altqs_I, &_GLOBAL_2_pf_altqs_I, &_GLOBAL_3_pf_altqs_I, &_GLOBAL_4_pf_altqs_I, &_GLOBAL_5_pf_altqs_I, &_GLOBAL_6_pf_altqs_I, &_GLOBAL_7_pf_altqs_I, &_GLOBAL_8_pf_altqs_I, &_GLOBAL_9_pf_altqs_I, &_GLOBAL_10_pf_altqs_I, &_GLOBAL_11_pf_altqs_I, &_GLOBAL_12_pf_altqs_I, &_GLOBAL_13_pf_altqs_I, &_GLOBAL_14_pf_altqs_I, &_GLOBAL_15_pf_altqs_I, &_GLOBAL_16_pf_altqs_I, &_GLOBAL_17_pf_altqs_I, &_GLOBAL_18_pf_altqs_I, &_GLOBAL_19_pf_altqs_I, &_GLOBAL_20_pf_altqs_I, &_GLOBAL_21_pf_altqs_I, &_GLOBAL_22_pf_altqs_I, &_GLOBAL_23_pf_altqs_I, &_GLOBAL_24_pf_altqs_I, &_GLOBAL_25_pf_altqs_I, &_GLOBAL_26_pf_altqs_I, &_GLOBAL_27_pf_altqs_I, &_GLOBAL_28_pf_altqs_I, &_GLOBAL_29_pf_altqs_I, &_GLOBAL_30_pf_altqs_I, &_GLOBAL_31_pf_altqs_I, &_GLOBAL_32_pf_altqs_I, &_GLOBAL_33_pf_altqs_I, &_GLOBAL_34_pf_altqs_I, &_GLOBAL_35_pf_altqs_I, &_GLOBAL_36_pf_altqs_I, &_GLOBAL_37_pf_altqs_I, &_GLOBAL_38_pf_altqs_I, &_GLOBAL_39_pf_altqs_I, &_GLOBAL_40_pf_altqs_I, &_GLOBAL_41_pf_altqs_I, &_GLOBAL_42_pf_altqs_I, &_GLOBAL_43_pf_altqs_I, &_GLOBAL_44_pf_altqs_I, &_GLOBAL_45_pf_altqs_I, &_GLOBAL_46_pf_altqs_I, &_GLOBAL_47_pf_altqs_I, &_GLOBAL_48_pf_altqs_I, &_GLOBAL_49_pf_altqs_I, };  
typedef  struct pf_palist  _GLOBAL_266_T;  _GLOBAL_266_T  global_pf_pabuf[NUM_STACKS];   
typedef  struct pf_altqqueue  _GLOBAL_267_T;  _GLOBAL_267_T  * global_pf_altqs_active[NUM_STACKS];   
typedef  struct pf_altqqueue  _GLOBAL_268_T;  _GLOBAL_268_T  * global_pf_altqs_inactive[NUM_STACKS];   
typedef  struct pf_status  _GLOBAL_269_T;  _GLOBAL_269_T  global_pf_status[NUM_STACKS];   

typedef  u_int32_t _GLOBAL_270_T;  _GLOBAL_270_T  global_ticket_altqs_active[NUM_STACKS];  
typedef  u_int32_t _GLOBAL_271_T;  _GLOBAL_271_T  global_ticket_altqs_inactive[NUM_STACKS];  
typedef  int _GLOBAL_272_T;  _GLOBAL_272_T  global_altqs_inactive_open[NUM_STACKS];  
typedef  u_int32_t _GLOBAL_273_T;  _GLOBAL_273_T  global_ticket_pabuf[NUM_STACKS];  

typedef  struct timeout  _GLOBAL_274_T;  _GLOBAL_274_T  global_pf_expire_to[NUM_STACKS];   

typedef  struct pool  _GLOBAL_275_T;  _GLOBAL_275_T  global_pf_src_tree_pl[NUM_STACKS];  _GLOBAL_275_T  global_pf_rule_pl[NUM_STACKS];    
typedef  struct pool  _GLOBAL_276_T;  _GLOBAL_276_T  global_pf_state_pl[NUM_STACKS];  _GLOBAL_276_T  global_pf_altq_pl[NUM_STACKS];  _GLOBAL_276_T  global_pf_pooladdr_pl[NUM_STACKS];     

void pf_print_host(struct pf_addr *, u_int16_t, u_int8_t);
void pf_print_state(struct pf_state *);
void pf_print_flags(u_int8_t);

u_int16_t pf_cksum_fixup(u_int16_t, u_int16_t, u_int16_t,
       u_int8_t);
void pf_change_ap(struct pf_addr *, u_int16_t *,
       u_int16_t *, u_int16_t *, struct pf_addr *,
       u_int16_t, u_int8_t, sa_family_t);

void pf_change_a6(struct pf_addr *, u_int16_t *,
       struct pf_addr *, u_int8_t);

void pf_change_icmp(struct pf_addr *, u_int16_t *,
       struct pf_addr *, struct pf_addr *, u_int16_t,
       u_int16_t *, u_int16_t *, u_int16_t *,
       u_int16_t *, u_int8_t, sa_family_t);
void pf_send_tcp(const struct pf_rule *, sa_family_t,
       const struct pf_addr *, const struct pf_addr *,
       u_int16_t, u_int16_t, u_int32_t, u_int32_t,
       u_int8_t, u_int16_t, u_int16_t, u_int8_t);
void pf_send_icmp(struct mbuf *, u_int8_t, u_int8_t,
       sa_family_t, struct pf_rule *);
struct pf_rule *pf_match_translation(struct pf_pdesc *, struct mbuf *,
       int, int, struct pfi_kif *,
       struct pf_addr *, u_int16_t, struct pf_addr *,
       u_int16_t, int);
struct pf_rule *pf_get_translation(struct pf_pdesc *, struct mbuf *,
       int, int, struct pfi_kif *, struct pf_src_node **,
       struct pf_addr *, u_int16_t,
       struct pf_addr *, u_int16_t,
       struct pf_addr *, u_int16_t *);
int pf_test_tcp(struct pf_rule **, struct pf_state **,
       int, struct pfi_kif *, struct mbuf *, int,
       void *, struct pf_pdesc *, struct pf_rule **,
       struct pf_ruleset **);
int pf_test_udp(struct pf_rule **, struct pf_state **,
       int, struct pfi_kif *, struct mbuf *, int,
       void *, struct pf_pdesc *, struct pf_rule **,
       struct pf_ruleset **);
int pf_test_icmp(struct pf_rule **, struct pf_state **,
       int, struct pfi_kif *, struct mbuf *, int,
       void *, struct pf_pdesc *, struct pf_rule **,
       struct pf_ruleset **);
int pf_test_other(struct pf_rule **, struct pf_state **,
       int, struct pfi_kif *, struct mbuf *, int, void *,
       struct pf_pdesc *, struct pf_rule **,
       struct pf_ruleset **);
int pf_test_fragment(struct pf_rule **, int,
       struct pfi_kif *, struct mbuf *, void *,
       struct pf_pdesc *, struct pf_rule **,
       struct pf_ruleset **);
int pf_test_state_tcp(struct pf_state **, int,
       struct pfi_kif *, struct mbuf *, int,
       void *, struct pf_pdesc *, u_short *);
int pf_test_state_udp(struct pf_state **, int,
       struct pfi_kif *, struct mbuf *, int,
       void *, struct pf_pdesc *);
int pf_test_state_icmp(struct pf_state **, int,
       struct pfi_kif *, struct mbuf *, int,
       void *, struct pf_pdesc *);
int pf_test_state_other(struct pf_state **, int,
       struct pfi_kif *, struct pf_pdesc *);
struct pf_tag *pf_get_tag(struct mbuf *);
int pf_match_tag(struct mbuf *, struct pf_rule *,
        struct pf_rule *, struct pf_tag *, int *);
void pf_hash(struct pf_addr *, struct pf_addr *,
       struct pf_poolhashkey *, sa_family_t);
int pf_map_addr(u_int8_t, struct pf_rule *,
       struct pf_addr *, struct pf_addr *,
       struct pf_addr *, struct pf_src_node **);
int pf_get_sport(sa_family_t, u_int8_t, struct pf_rule *,
       struct pf_addr *, struct pf_addr *, u_int16_t,
       struct pf_addr *, u_int16_t*, u_int16_t, u_int16_t,
       struct pf_src_node **);
void pf_route(struct mbuf **, struct pf_rule *, int,
       struct ifnet *, struct pf_state *);
void pf_route6(struct mbuf **, struct pf_rule *, int,
       struct ifnet *, struct pf_state *);
int pf_socket_lookup(uid_t *, gid_t *,
       int, struct pf_pdesc *);
u_int8_t pf_get_wscale(struct mbuf *, int, u_int16_t,
       sa_family_t);
u_int16_t pf_get_mss(struct mbuf *, int, u_int16_t,
       sa_family_t);
u_int16_t pf_calc_mss(struct pf_addr *, sa_family_t,
    u_int16_t);
void pf_set_rt_ifp(struct pf_state *,
       struct pf_addr *);
int pf_check_proto_cksum(struct mbuf *, int, int,
       u_int8_t, sa_family_t);
int pf_addr_wrap_neq(struct pf_addr_wrap *,
       struct pf_addr_wrap *);
static int pf_add_mbuf_tag(struct mbuf *, u_int);
struct pf_state *pf_find_state_recurse(struct pfi_kif *,
       struct pf_state *, u_int8_t);

typedef  struct pf_pool_limit  _GLOBAL_277_T;  _GLOBAL_277_T  _GLOBAL_0_pf_pool_limits_I [ PF_LIMIT_MAX ]  = { { & global_pf_state_pl[0]  , 10000  }  , { & global_pf_src_tree_pl[0]  , 10000  }   , { & global_pf_frent_pl[0]  , 5000  }   }  ;  _GLOBAL_277_T  _GLOBAL_1_pf_pool_limits_I [ PF_LIMIT_MAX ]  = { { & global_pf_state_pl[1]  , 10000  }  , { & global_pf_src_tree_pl[1]  , 10000  }   , { & global_pf_frent_pl[1]  , 5000  }   }  ;  _GLOBAL_277_T  _GLOBAL_2_pf_pool_limits_I [ PF_LIMIT_MAX ]  = { { & global_pf_state_pl[2]  , 10000  }  , { & global_pf_src_tree_pl[2]  , 10000  }   , { & global_pf_frent_pl[2]  , 5000  }   }  ;  _GLOBAL_277_T  _GLOBAL_3_pf_pool_limits_I [ PF_LIMIT_MAX ]  = { { & global_pf_state_pl[3]  , 10000  }  , { & global_pf_src_tree_pl[3]  , 10000  }   , { & global_pf_frent_pl[3]  , 5000  }   }  ;  _GLOBAL_277_T  _GLOBAL_4_pf_pool_limits_I [ PF_LIMIT_MAX ]  = { { & global_pf_state_pl[4]  , 10000  }  , { & global_pf_src_tree_pl[4]  , 10000  }   , { & global_pf_frent_pl[4]  , 5000  }   }  ;  _GLOBAL_277_T  _GLOBAL_5_pf_pool_limits_I [ PF_LIMIT_MAX ]  = { { & global_pf_state_pl[5]  , 10000  }  , { & global_pf_src_tree_pl[5]  , 10000  }   , { & global_pf_frent_pl[5]  , 5000  }   }  ;  _GLOBAL_277_T  _GLOBAL_6_pf_pool_limits_I [ PF_LIMIT_MAX ]  = { { & global_pf_state_pl[6]  , 10000  }  , { & global_pf_src_tree_pl[6]  , 10000  }   , { & global_pf_frent_pl[6]  , 5000  }   }  ;  _GLOBAL_277_T  _GLOBAL_7_pf_pool_limits_I [ PF_LIMIT_MAX ]  = { { & global_pf_state_pl[7]  , 10000  }  , { & global_pf_src_tree_pl[7]  , 10000  }   , { & global_pf_frent_pl[7]  , 5000  }   }  ;  _GLOBAL_277_T  _GLOBAL_8_pf_pool_limits_I [ PF_LIMIT_MAX ]  = { { & global_pf_state_pl[8]  , 10000  }  , { & global_pf_src_tree_pl[8]  , 10000  }   , { & global_pf_frent_pl[8]  , 5000  }   }  ;  _GLOBAL_277_T  _GLOBAL_9_pf_pool_limits_I [ PF_LIMIT_MAX ]  = { { & global_pf_state_pl[9]  , 10000  }  , { & global_pf_src_tree_pl[9]  , 10000  }   , { & global_pf_frent_pl[9]  , 5000  }   }  ;  _GLOBAL_277_T  _GLOBAL_10_pf_pool_limits_I [ PF_LIMIT_MAX ]  = { { & global_pf_state_pl[10]  , 10000  }  , { & global_pf_src_tree_pl[10]  , 10000  }   , { & global_pf_frent_pl[10]  , 5000  }   }  ;  _GLOBAL_277_T  _GLOBAL_11_pf_pool_limits_I [ PF_LIMIT_MAX ]  = { { & global_pf_state_pl[11]  , 10000  }  , { & global_pf_src_tree_pl[11]  , 10000  }   , { & global_pf_frent_pl[11]  , 5000  }   }  ;  _GLOBAL_277_T  _GLOBAL_12_pf_pool_limits_I [ PF_LIMIT_MAX ]  = { { & global_pf_state_pl[12]  , 10000  }  , { & global_pf_src_tree_pl[12]  , 10000  }   , { & global_pf_frent_pl[12]  , 5000  }   }  ;  _GLOBAL_277_T  _GLOBAL_13_pf_pool_limits_I [ PF_LIMIT_MAX ]  = { { & global_pf_state_pl[13]  , 10000  }  , { & global_pf_src_tree_pl[13]  , 10000  }   , { & global_pf_frent_pl[13]  , 5000  }   }  ;  _GLOBAL_277_T  _GLOBAL_14_pf_pool_limits_I [ PF_LIMIT_MAX ]  = { { & global_pf_state_pl[14]  , 10000  }  , { & global_pf_src_tree_pl[14]  , 10000  }   , { & global_pf_frent_pl[14]  , 5000  }   }  ;  _GLOBAL_277_T  _GLOBAL_15_pf_pool_limits_I [ PF_LIMIT_MAX ]  = { { & global_pf_state_pl[15]  , 10000  }  , { & global_pf_src_tree_pl[15]  , 10000  }   , { & global_pf_frent_pl[15]  , 5000  }   }  ;  _GLOBAL_277_T  _GLOBAL_16_pf_pool_limits_I [ PF_LIMIT_MAX ]  = { { & global_pf_state_pl[16]  , 10000  }  , { & global_pf_src_tree_pl[16]  , 10000  }   , { & global_pf_frent_pl[16]  , 5000  }   }  ;  _GLOBAL_277_T  _GLOBAL_17_pf_pool_limits_I [ PF_LIMIT_MAX ]  = { { & global_pf_state_pl[17]  , 10000  }  , { & global_pf_src_tree_pl[17]  , 10000  }   , { & global_pf_frent_pl[17]  , 5000  }   }  ;  _GLOBAL_277_T  _GLOBAL_18_pf_pool_limits_I [ PF_LIMIT_MAX ]  = { { & global_pf_state_pl[18]  , 10000  }  , { & global_pf_src_tree_pl[18]  , 10000  }   , { & global_pf_frent_pl[18]  , 5000  }   }  ;  _GLOBAL_277_T  _GLOBAL_19_pf_pool_limits_I [ PF_LIMIT_MAX ]  = { { & global_pf_state_pl[19]  , 10000  }  , { & global_pf_src_tree_pl[19]  , 10000  }   , { & global_pf_frent_pl[19]  , 5000  }   }  ;  _GLOBAL_277_T  _GLOBAL_20_pf_pool_limits_I [ PF_LIMIT_MAX ]  = { { & global_pf_state_pl[20]  , 10000  }  , { & global_pf_src_tree_pl[20]  , 10000  }   , { & global_pf_frent_pl[20]  , 5000  }   }  ;  _GLOBAL_277_T  _GLOBAL_21_pf_pool_limits_I [ PF_LIMIT_MAX ]  = { { & global_pf_state_pl[21]  , 10000  }  , { & global_pf_src_tree_pl[21]  , 10000  }   , { & global_pf_frent_pl[21]  , 5000  }   }  ;  _GLOBAL_277_T  _GLOBAL_22_pf_pool_limits_I [ PF_LIMIT_MAX ]  = { { & global_pf_state_pl[22]  , 10000  }  , { & global_pf_src_tree_pl[22]  , 10000  }   , { & global_pf_frent_pl[22]  , 5000  }   }  ;  _GLOBAL_277_T  _GLOBAL_23_pf_pool_limits_I [ PF_LIMIT_MAX ]  = { { & global_pf_state_pl[23]  , 10000  }  , { & global_pf_src_tree_pl[23]  , 10000  }   , { & global_pf_frent_pl[23]  , 5000  }   }  ;  _GLOBAL_277_T  _GLOBAL_24_pf_pool_limits_I [ PF_LIMIT_MAX ]  = { { & global_pf_state_pl[24]  , 10000  }  , { & global_pf_src_tree_pl[24]  , 10000  }   , { & global_pf_frent_pl[24]  , 5000  }   }  ;  _GLOBAL_277_T  _GLOBAL_25_pf_pool_limits_I [ PF_LIMIT_MAX ]  = { { & global_pf_state_pl[25]  , 10000  }  , { & global_pf_src_tree_pl[25]  , 10000  }   , { & global_pf_frent_pl[25]  , 5000  }   }  ;  _GLOBAL_277_T  _GLOBAL_26_pf_pool_limits_I [ PF_LIMIT_MAX ]  = { { & global_pf_state_pl[26]  , 10000  }  , { & global_pf_src_tree_pl[26]  , 10000  }   , { & global_pf_frent_pl[26]  , 5000  }   }  ;  _GLOBAL_277_T  _GLOBAL_27_pf_pool_limits_I [ PF_LIMIT_MAX ]  = { { & global_pf_state_pl[27]  , 10000  }  , { & global_pf_src_tree_pl[27]  , 10000  }   , { & global_pf_frent_pl[27]  , 5000  }   }  ;  _GLOBAL_277_T  _GLOBAL_28_pf_pool_limits_I [ PF_LIMIT_MAX ]  = { { & global_pf_state_pl[28]  , 10000  }  , { & global_pf_src_tree_pl[28]  , 10000  }   , { & global_pf_frent_pl[28]  , 5000  }   }  ;  _GLOBAL_277_T  _GLOBAL_29_pf_pool_limits_I [ PF_LIMIT_MAX ]  = { { & global_pf_state_pl[29]  , 10000  }  , { & global_pf_src_tree_pl[29]  , 10000  }   , { & global_pf_frent_pl[29]  , 5000  }   }  ;  _GLOBAL_277_T  _GLOBAL_30_pf_pool_limits_I [ PF_LIMIT_MAX ]  = { { & global_pf_state_pl[30]  , 10000  }  , { & global_pf_src_tree_pl[30]  , 10000  }   , { & global_pf_frent_pl[30]  , 5000  }   }  ;  _GLOBAL_277_T  _GLOBAL_31_pf_pool_limits_I [ PF_LIMIT_MAX ]  = { { & global_pf_state_pl[31]  , 10000  }  , { & global_pf_src_tree_pl[31]  , 10000  }   , { & global_pf_frent_pl[31]  , 5000  }   }  ;  _GLOBAL_277_T  _GLOBAL_32_pf_pool_limits_I [ PF_LIMIT_MAX ]  = { { & global_pf_state_pl[32]  , 10000  }  , { & global_pf_src_tree_pl[32]  , 10000  }   , { & global_pf_frent_pl[32]  , 5000  }   }  ;  _GLOBAL_277_T  _GLOBAL_33_pf_pool_limits_I [ PF_LIMIT_MAX ]  = { { & global_pf_state_pl[33]  , 10000  }  , { & global_pf_src_tree_pl[33]  , 10000  }   , { & global_pf_frent_pl[33]  , 5000  }   }  ;  _GLOBAL_277_T  _GLOBAL_34_pf_pool_limits_I [ PF_LIMIT_MAX ]  = { { & global_pf_state_pl[34]  , 10000  }  , { & global_pf_src_tree_pl[34]  , 10000  }   , { & global_pf_frent_pl[34]  , 5000  }   }  ;  _GLOBAL_277_T  _GLOBAL_35_pf_pool_limits_I [ PF_LIMIT_MAX ]  = { { & global_pf_state_pl[35]  , 10000  }  , { & global_pf_src_tree_pl[35]  , 10000  }   , { & global_pf_frent_pl[35]  , 5000  }   }  ;  _GLOBAL_277_T  _GLOBAL_36_pf_pool_limits_I [ PF_LIMIT_MAX ]  = { { & global_pf_state_pl[36]  , 10000  }  , { & global_pf_src_tree_pl[36]  , 10000  }   , { & global_pf_frent_pl[36]  , 5000  }   }  ;  _GLOBAL_277_T  _GLOBAL_37_pf_pool_limits_I [ PF_LIMIT_MAX ]  = { { & global_pf_state_pl[37]  , 10000  }  , { & global_pf_src_tree_pl[37]  , 10000  }   , { & global_pf_frent_pl[37]  , 5000  }   }  ;  _GLOBAL_277_T  _GLOBAL_38_pf_pool_limits_I [ PF_LIMIT_MAX ]  = { { & global_pf_state_pl[38]  , 10000  }  , { & global_pf_src_tree_pl[38]  , 10000  }   , { & global_pf_frent_pl[38]  , 5000  }   }  ;  _GLOBAL_277_T  _GLOBAL_39_pf_pool_limits_I [ PF_LIMIT_MAX ]  = { { & global_pf_state_pl[39]  , 10000  }  , { & global_pf_src_tree_pl[39]  , 10000  }   , { & global_pf_frent_pl[39]  , 5000  }   }  ;  _GLOBAL_277_T  _GLOBAL_40_pf_pool_limits_I [ PF_LIMIT_MAX ]  = { { & global_pf_state_pl[40]  , 10000  }  , { & global_pf_src_tree_pl[40]  , 10000  }   , { & global_pf_frent_pl[40]  , 5000  }   }  ;  _GLOBAL_277_T  _GLOBAL_41_pf_pool_limits_I [ PF_LIMIT_MAX ]  = { { & global_pf_state_pl[41]  , 10000  }  , { & global_pf_src_tree_pl[41]  , 10000  }   , { & global_pf_frent_pl[41]  , 5000  }   }  ;  _GLOBAL_277_T  _GLOBAL_42_pf_pool_limits_I [ PF_LIMIT_MAX ]  = { { & global_pf_state_pl[42]  , 10000  }  , { & global_pf_src_tree_pl[42]  , 10000  }   , { & global_pf_frent_pl[42]  , 5000  }   }  ;  _GLOBAL_277_T  _GLOBAL_43_pf_pool_limits_I [ PF_LIMIT_MAX ]  = { { & global_pf_state_pl[43]  , 10000  }  , { & global_pf_src_tree_pl[43]  , 10000  }   , { & global_pf_frent_pl[43]  , 5000  }   }  ;  _GLOBAL_277_T  _GLOBAL_44_pf_pool_limits_I [ PF_LIMIT_MAX ]  = { { & global_pf_state_pl[44]  , 10000  }  , { & global_pf_src_tree_pl[44]  , 10000  }   , { & global_pf_frent_pl[44]  , 5000  }   }  ;  _GLOBAL_277_T  _GLOBAL_45_pf_pool_limits_I [ PF_LIMIT_MAX ]  = { { & global_pf_state_pl[45]  , 10000  }  , { & global_pf_src_tree_pl[45]  , 10000  }   , { & global_pf_frent_pl[45]  , 5000  }   }  ;  _GLOBAL_277_T  _GLOBAL_46_pf_pool_limits_I [ PF_LIMIT_MAX ]  = { { & global_pf_state_pl[46]  , 10000  }  , { & global_pf_src_tree_pl[46]  , 10000  }   , { & global_pf_frent_pl[46]  , 5000  }   }  ;  _GLOBAL_277_T  _GLOBAL_47_pf_pool_limits_I [ PF_LIMIT_MAX ]  = { { & global_pf_state_pl[47]  , 10000  }  , { & global_pf_src_tree_pl[47]  , 10000  }   , { & global_pf_frent_pl[47]  , 5000  }   }  ;  _GLOBAL_277_T  _GLOBAL_48_pf_pool_limits_I [ PF_LIMIT_MAX ]  = { { & global_pf_state_pl[48]  , 10000  }  , { & global_pf_src_tree_pl[48]  , 10000  }   , { & global_pf_frent_pl[48]  , 5000  }   }  ;  _GLOBAL_277_T  _GLOBAL_49_pf_pool_limits_I [ PF_LIMIT_MAX ]  = { { & global_pf_state_pl[49]  , 10000  }  , { & global_pf_src_tree_pl[49]  , 10000  }   , { & global_pf_frent_pl[49]  , 5000  }   }  ; static __attribute__ ((unused)) __typeof__(_GLOBAL_0_pf_pool_limits_I) *_GLOBAL_pf_pool_limits_48_A[NUM_STACKS] = { &_GLOBAL_0_pf_pool_limits_I, &_GLOBAL_1_pf_pool_limits_I, &_GLOBAL_2_pf_pool_limits_I, &_GLOBAL_3_pf_pool_limits_I, &_GLOBAL_4_pf_pool_limits_I, &_GLOBAL_5_pf_pool_limits_I, &_GLOBAL_6_pf_pool_limits_I, &_GLOBAL_7_pf_pool_limits_I, &_GLOBAL_8_pf_pool_limits_I, &_GLOBAL_9_pf_pool_limits_I, &_GLOBAL_10_pf_pool_limits_I, &_GLOBAL_11_pf_pool_limits_I, &_GLOBAL_12_pf_pool_limits_I, &_GLOBAL_13_pf_pool_limits_I, &_GLOBAL_14_pf_pool_limits_I, &_GLOBAL_15_pf_pool_limits_I, &_GLOBAL_16_pf_pool_limits_I, &_GLOBAL_17_pf_pool_limits_I, &_GLOBAL_18_pf_pool_limits_I, &_GLOBAL_19_pf_pool_limits_I, &_GLOBAL_20_pf_pool_limits_I, &_GLOBAL_21_pf_pool_limits_I, &_GLOBAL_22_pf_pool_limits_I, &_GLOBAL_23_pf_pool_limits_I, &_GLOBAL_24_pf_pool_limits_I, &_GLOBAL_25_pf_pool_limits_I, &_GLOBAL_26_pf_pool_limits_I, &_GLOBAL_27_pf_pool_limits_I, &_GLOBAL_28_pf_pool_limits_I, &_GLOBAL_29_pf_pool_limits_I, &_GLOBAL_30_pf_pool_limits_I, &_GLOBAL_31_pf_pool_limits_I, &_GLOBAL_32_pf_pool_limits_I, &_GLOBAL_33_pf_pool_limits_I, &_GLOBAL_34_pf_pool_limits_I, &_GLOBAL_35_pf_pool_limits_I, &_GLOBAL_36_pf_pool_limits_I, &_GLOBAL_37_pf_pool_limits_I, &_GLOBAL_38_pf_pool_limits_I, &_GLOBAL_39_pf_pool_limits_I, &_GLOBAL_40_pf_pool_limits_I, &_GLOBAL_41_pf_pool_limits_I, &_GLOBAL_42_pf_pool_limits_I, &_GLOBAL_43_pf_pool_limits_I, &_GLOBAL_44_pf_pool_limits_I, &_GLOBAL_45_pf_pool_limits_I, &_GLOBAL_46_pf_pool_limits_I, &_GLOBAL_47_pf_pool_limits_I, &_GLOBAL_48_pf_pool_limits_I, &_GLOBAL_49_pf_pool_limits_I, };    
    
    
    

# 247 "openbsd3/net/pf.c"
static __inline int pf_src_compare(struct pf_src_node *, struct pf_src_node *);
static __inline int pf_state_compare_lan_ext(struct pf_state *,
 struct pf_state *);
static __inline int pf_state_compare_ext_gwy(struct pf_state *,
 struct pf_state *);
static __inline int pf_state_compare_id(struct pf_state *,
 struct pf_state *);

typedef  struct pf_src_tree  _GLOBAL_278_T;  _GLOBAL_278_T  global_tree_src_tracking[NUM_STACKS];   

typedef  struct pf_state_tree_id  _GLOBAL_279_T;  _GLOBAL_279_T  global_tree_id[NUM_STACKS];   
typedef  struct pf_state_queue  _GLOBAL_280_T;  _GLOBAL_280_T  global_state_updates[NUM_STACKS];   

void pf_src_tree_RB_INSERT_COLOR(struct pf_src_tree *head, struct pf_src_node *elm) { struct pf_src_node *parent, *gparent, *tmp; while ((parent = (elm)->entry.rbe_parent) && (parent)->entry.rbe_color == 1) { gparent = (parent)->entry.rbe_parent; if (parent == (gparent)->entry.rbe_left) { tmp = (gparent)->entry.rbe_right; if (tmp && (tmp)->entry.rbe_color == 1) { (tmp)->entry.rbe_color = 0; do { (parent)->entry.rbe_color = 0; (gparent)->entry.rbe_color = 1; } while (0); elm = gparent; continue; } if ((parent)->entry.rbe_right == elm) { do { (tmp) = (parent)->entry.rbe_right; if (((parent)->entry.rbe_right = (tmp)->entry.rbe_left)) { ((tmp)->entry.rbe_left)->entry.rbe_parent = (parent); } ; if (((tmp)->entry.rbe_parent = (parent)->entry.rbe_parent)) { if ((parent) == ((parent)->entry.rbe_parent)->entry.rbe_left) ((parent)->entry.rbe_parent)->entry.rbe_left = (tmp); else ((parent)->entry.rbe_parent)->entry.rbe_right = (tmp); } else (head)->rbh_root = (tmp); (tmp)->entry.rbe_left = (parent); (parent)->entry.rbe_parent = (tmp); ; if (((tmp)->entry.rbe_parent)) ; } while (0); tmp = parent; parent = elm; elm = tmp; } do { (parent)->entry.rbe_color = 0; (gparent)->entry.rbe_color = 1; } while (0); do { (tmp) = (gparent)->entry.rbe_left; if (((gparent)->entry.rbe_left = (tmp)->entry.rbe_right)) { ((tmp)->entry.rbe_right)->entry.rbe_parent = (gparent); } ; if (((tmp)->entry.rbe_parent = (gparent)->entry.rbe_parent)) { if ((gparent) == ((gparent)->entry.rbe_parent)->entry.rbe_left) ((gparent)->entry.rbe_parent)->entry.rbe_left = (tmp); else ((gparent)->entry.rbe_parent)->entry.rbe_right = (tmp); } else (head)->rbh_root = (tmp); (tmp)->entry.rbe_right = (gparent); (gparent)->entry.rbe_parent = (tmp); ; if (((tmp)->entry.rbe_parent)) ; } while (0); } else { tmp = (gparent)->entry.rbe_left; if (tmp && (tmp)->entry.rbe_color == 1) { (tmp)->entry.rbe_color = 0; do { (parent)->entry.rbe_color = 0; (gparent)->entry.rbe_color = 1; } while (0); elm = gparent; continue; } if ((parent)->entry.rbe_left == elm) { do { (tmp) = (parent)->entry.rbe_left; if (((parent)->entry.rbe_left = (tmp)->entry.rbe_right)) { ((tmp)->entry.rbe_right)->entry.rbe_parent = (parent); } ; if (((tmp)->entry.rbe_parent = (parent)->entry.rbe_parent)) { if ((parent) == ((parent)->entry.rbe_parent)->entry.rbe_left) ((parent)->entry.rbe_parent)->entry.rbe_left = (tmp); else ((parent)->entry.rbe_parent)->entry.rbe_right = (tmp); } else (head)->rbh_root = (tmp); (tmp)->entry.rbe_right = (parent); (parent)->entry.rbe_parent = (tmp); ; if (((tmp)->entry.rbe_parent)) ; } while (0); tmp = parent; parent = elm; elm = tmp; } do { (parent)->entry.rbe_color = 0; (gparent)->entry.rbe_color = 1; } while (0); do { (tmp) = (gparent)->entry.rbe_right; if (((gparent)->entry.rbe_right = (tmp)->entry.rbe_left)) { ((tmp)->entry.rbe_left)->entry.rbe_parent = (gparent); } ; if (((tmp)->entry.rbe_parent = (gparent)->entry.rbe_parent)) { if ((gparent) == ((gparent)->entry.rbe_parent)->entry.rbe_left) ((gparent)->entry.rbe_parent)->entry.rbe_left = (tmp); else ((gparent)->entry.rbe_parent)->entry.rbe_right = (tmp); } else (head)->rbh_root = (tmp); (tmp)->entry.rbe_left = (gparent); (gparent)->entry.rbe_parent = (tmp); ; if (((tmp)->entry.rbe_parent)) ; } while (0); } } (head->rbh_root)->entry.rbe_color = 0; } void pf_src_tree_RB_REMOVE_COLOR(struct pf_src_tree *head, struct pf_src_node *parent, struct pf_src_node *elm) { struct pf_src_node *tmp; while ((elm == 0L || (elm)->entry.rbe_color == 0) && elm != (head)->rbh_root) { if ((parent)->entry.rbe_left == elm) { tmp = (parent)->entry.rbe_right; if ((tmp)->entry.rbe_color == 1) { do { (tmp)->entry.rbe_color = 0; (parent)->entry.rbe_color = 1; } while (0); do { (tmp) = (parent)->entry.rbe_right; if (((parent)->entry.rbe_right = (tmp)->entry.rbe_left)) { ((tmp)->entry.rbe_left)->entry.rbe_parent = (parent); } ; if (((tmp)->entry.rbe_parent = (parent)->entry.rbe_parent)) { if ((parent) == ((parent)->entry.rbe_parent)->entry.rbe_left) ((parent)->entry.rbe_parent)->entry.rbe_left = (tmp); else ((parent)->entry.rbe_parent)->entry.rbe_right = (tmp); } else (head)->rbh_root = (tmp); (tmp)->entry.rbe_left = (parent); (parent)->entry.rbe_parent = (tmp); ; if (((tmp)->entry.rbe_parent)) ; } while (0); tmp = (parent)->entry.rbe_right; } if (((tmp)->entry.rbe_left == 0L || ((tmp)->entry.rbe_left)->entry.rbe_color == 0) && ((tmp)->entry.rbe_right == 0L || ((tmp)->entry.rbe_right)->entry.rbe_color == 0)) { (tmp)->entry.rbe_color = 1; elm = parent; parent = (elm)->entry.rbe_parent; } else { if ((tmp)->entry.rbe_right == 0L || ((tmp)->entry.rbe_right)->entry.rbe_color == 0) { struct pf_src_node *oleft; if ((oleft = (tmp)->entry.rbe_left)) (oleft)->entry.rbe_color = 0; (tmp)->entry.rbe_color = 1; do { (oleft) = (tmp)->entry.rbe_left; if (((tmp)->entry.rbe_left = (oleft)->entry.rbe_right)) { ((oleft)->entry.rbe_right)->entry.rbe_parent = (tmp); } ; if (((oleft)->entry.rbe_parent = (tmp)->entry.rbe_parent)) { if ((tmp) == ((tmp)->entry.rbe_parent)->entry.rbe_left) ((tmp)->entry.rbe_parent)->entry.rbe_left = (oleft); else ((tmp)->entry.rbe_parent)->entry.rbe_right = (oleft); } else (head)->rbh_root = (oleft); (oleft)->entry.rbe_right = (tmp); (tmp)->entry.rbe_parent = (oleft); ; if (((oleft)->entry.rbe_parent)) ; } while (0); tmp = (parent)->entry.rbe_right; } (tmp)->entry.rbe_color = (parent)->entry.rbe_color; (parent)->entry.rbe_color = 0; if ((tmp)->entry.rbe_right) ((tmp)->entry.rbe_right)->entry.rbe_color = 0; do { (tmp) = (parent)->entry.rbe_right; if (((parent)->entry.rbe_right = (tmp)->entry.rbe_left)) { ((tmp)->entry.rbe_left)->entry.rbe_parent = (parent); } ; if (((tmp)->entry.rbe_parent = (parent)->entry.rbe_parent)) { if ((parent) == ((parent)->entry.rbe_parent)->entry.rbe_left) ((parent)->entry.rbe_parent)->entry.rbe_left = (tmp); else ((parent)->entry.rbe_parent)->entry.rbe_right = (tmp); } else (head)->rbh_root = (tmp); (tmp)->entry.rbe_left = (parent); (parent)->entry.rbe_parent = (tmp); ; if (((tmp)->entry.rbe_parent)) ; } while (0); elm = (head)->rbh_root; break; } } else { tmp = (parent)->entry.rbe_left; if ((tmp)->entry.rbe_color == 1) { do { (tmp)->entry.rbe_color = 0; (parent)->entry.rbe_color = 1; } while (0); do { (tmp) = (parent)->entry.rbe_left; if (((parent)->entry.rbe_left = (tmp)->entry.rbe_right)) { ((tmp)->entry.rbe_right)->entry.rbe_parent = (parent); } ; if (((tmp)->entry.rbe_parent = (parent)->entry.rbe_parent)) { if ((parent) == ((parent)->entry.rbe_parent)->entry.rbe_left) ((parent)->entry.rbe_parent)->entry.rbe_left = (tmp); else ((parent)->entry.rbe_parent)->entry.rbe_right = (tmp); } else (head)->rbh_root = (tmp); (tmp)->entry.rbe_right = (parent); (parent)->entry.rbe_parent = (tmp); ; if (((tmp)->entry.rbe_parent)) ; } while (0); tmp = (parent)->entry.rbe_left; } if (((tmp)->entry.rbe_left == 0L || ((tmp)->entry.rbe_left)->entry.rbe_color == 0) && ((tmp)->entry.rbe_right == 0L || ((tmp)->entry.rbe_right)->entry.rbe_color == 0)) { (tmp)->entry.rbe_color = 1; elm = parent; parent = (elm)->entry.rbe_parent; } else { if ((tmp)->entry.rbe_left == 0L || ((tmp)->entry.rbe_left)->entry.rbe_color == 0) { struct pf_src_node *oright; if ((oright = (tmp)->entry.rbe_right)) (oright)->entry.rbe_color = 0; (tmp)->entry.rbe_color = 1; do { (oright) = (tmp)->entry.rbe_right; if (((tmp)->entry.rbe_right = (oright)->entry.rbe_left)) { ((oright)->entry.rbe_left)->entry.rbe_parent = (tmp); } ; if (((oright)->entry.rbe_parent = (tmp)->entry.rbe_parent)) { if ((tmp) == ((tmp)->entry.rbe_parent)->entry.rbe_left) ((tmp)->entry.rbe_parent)->entry.rbe_left = (oright); else ((tmp)->entry.rbe_parent)->entry.rbe_right = (oright); } else (head)->rbh_root = (oright); (oright)->entry.rbe_left = (tmp); (tmp)->entry.rbe_parent = (oright); ; if (((oright)->entry.rbe_parent)) ; } while (0); tmp = (parent)->entry.rbe_left; } (tmp)->entry.rbe_color = (parent)->entry.rbe_color; (parent)->entry.rbe_color = 0; if ((tmp)->entry.rbe_left) ((tmp)->entry.rbe_left)->entry.rbe_color = 0; do { (tmp) = (parent)->entry.rbe_left; if (((parent)->entry.rbe_left = (tmp)->entry.rbe_right)) { ((tmp)->entry.rbe_right)->entry.rbe_parent = (parent); } ; if (((tmp)->entry.rbe_parent = (parent)->entry.rbe_parent)) { if ((parent) == ((parent)->entry.rbe_parent)->entry.rbe_left) ((parent)->entry.rbe_parent)->entry.rbe_left = (tmp); else ((parent)->entry.rbe_parent)->entry.rbe_right = (tmp); } else (head)->rbh_root = (tmp); (tmp)->entry.rbe_right = (parent); (parent)->entry.rbe_parent = (tmp); ; if (((tmp)->entry.rbe_parent)) ; } while (0); elm = (head)->rbh_root; break; } } } if (elm) (elm)->entry.rbe_color = 0; } struct pf_src_node * pf_src_tree_RB_REMOVE(struct pf_src_tree *head, struct pf_src_node *elm) { struct pf_src_node *child, *parent, *old = elm; int color; if ((elm)->entry.rbe_left == 0L) child = (elm)->entry.rbe_right; else if ((elm)->entry.rbe_right == 0L) child = (elm)->entry.rbe_left; else { struct pf_src_node *left; elm = (elm)->entry.rbe_right; while ((left = (elm)->entry.rbe_left)) elm = left; child = (elm)->entry.rbe_right; parent = (elm)->entry.rbe_parent; color = (elm)->entry.rbe_color; if (child) (child)->entry.rbe_parent = parent; if (parent) { if ((parent)->entry.rbe_left == elm) (parent)->entry.rbe_left = child; else (parent)->entry.rbe_right = child; ; } else (head)->rbh_root = child; if ((elm)->entry.rbe_parent == old) parent = elm; (elm)->entry = (old)->entry; if ((old)->entry.rbe_parent) { if (((old)->entry.rbe_parent)->entry.rbe_left == old) ((old)->entry.rbe_parent)->entry.rbe_left = elm; else ((old)->entry.rbe_parent)->entry.rbe_right = elm; ; } else (head)->rbh_root = elm; ((old)->entry.rbe_left)->entry.rbe_parent = elm; if ((old)->entry.rbe_right) ((old)->entry.rbe_right)->entry.rbe_parent = elm; if (parent) { left = parent; do { ; } while ((left = (left)->entry.rbe_parent)); } goto color; } parent = (elm)->entry.rbe_parent; color = (elm)->entry.rbe_color; if (child) (child)->entry.rbe_parent = parent; if (parent) { if ((parent)->entry.rbe_left == elm) (parent)->entry.rbe_left = child; else (parent)->entry.rbe_right = child; ; } else (head)->rbh_root = child; color: if (color == 0) pf_src_tree_RB_REMOVE_COLOR(head, parent, child); return (old); } struct pf_src_node * pf_src_tree_RB_INSERT(struct pf_src_tree *head, struct pf_src_node *elm) { struct pf_src_node *tmp; struct pf_src_node *parent = 0L; int comp = 0; tmp = (head)->rbh_root; while (tmp) { parent = tmp; comp = (pf_src_compare)(elm, parent); if (comp < 0) tmp = (tmp)->entry.rbe_left; else if (comp > 0) tmp = (tmp)->entry.rbe_right; else return (tmp); } do { (elm)->entry.rbe_parent = parent; (elm)->entry.rbe_left = (elm)->entry.rbe_right = 0L; (elm)->entry.rbe_color = 1; } while (0); if (parent != 0L) { if (comp < 0) (parent)->entry.rbe_left = elm; else (parent)->entry.rbe_right = elm; ; } else (head)->rbh_root = elm; pf_src_tree_RB_INSERT_COLOR(head, elm); return (0L); } struct pf_src_node * pf_src_tree_RB_FIND(struct pf_src_tree *head, struct pf_src_node *elm) { struct pf_src_node *tmp = (head)->rbh_root; int comp; while (tmp) { comp = pf_src_compare(elm, tmp); if (comp < 0) tmp = (tmp)->entry.rbe_left; else if (comp > 0) tmp = (tmp)->entry.rbe_right; else return (tmp); } return (0L); } struct pf_src_node * pf_src_tree_RB_NEXT(struct pf_src_tree *head, struct pf_src_node *elm) { if ((elm)->entry.rbe_right) { elm = (elm)->entry.rbe_right; while ((elm)->entry.rbe_left) elm = (elm)->entry.rbe_left; } else { if ((elm)->entry.rbe_parent && (elm == ((elm)->entry.rbe_parent)->entry.rbe_left)) elm = (elm)->entry.rbe_parent; else { while ((elm)->entry.rbe_parent && (elm == ((elm)->entry.rbe_parent)->entry.rbe_right)) elm = (elm)->entry.rbe_parent; elm = (elm)->entry.rbe_parent; } } return (elm); } struct pf_src_node * pf_src_tree_RB_MINMAX(struct pf_src_tree *head, int val) { struct pf_src_node *tmp = (head)->rbh_root; struct pf_src_node *parent = 0L; while (tmp) { parent = tmp; if (val < 0) tmp = (tmp)->entry.rbe_left; else tmp = (tmp)->entry.rbe_right; } return (parent); };
void
 pf_state_tree_lan_ext_RB_INSERT_COLOR
# 261 "openbsd3/net/pf.c"
 (struct pf_state_tree_lan_ext *head, struct pf_state *elm) { struct pf_state *parent, *gparent, *tmp; while ((parent = (elm)->u.s.entry_lan_ext.rbe_parent) && (parent)->u.s.entry_lan_ext.rbe_color == 1) { gparent = (parent)->u.s.entry_lan_ext.rbe_parent; if (parent == (gparent)->u.s.entry_lan_ext.rbe_left) { tmp = (gparent)->u.s.entry_lan_ext.rbe_right; if (tmp && (tmp)->u.s.entry_lan_ext.rbe_color == 1) { (tmp)->u.s.entry_lan_ext.rbe_color = 0; do { (parent)->u.s.entry_lan_ext.rbe_color = 0; (gparent)->u.s.entry_lan_ext.rbe_color = 1; } while (0); elm = gparent; continue; } if ((parent)->u.s.entry_lan_ext.rbe_right == elm) { do { (tmp) = (parent)->u.s.entry_lan_ext.rbe_right; if (((parent)->u.s.entry_lan_ext.rbe_right = (tmp)->u.s.entry_lan_ext.rbe_left)) { ((tmp)->u.s.entry_lan_ext.rbe_left)->u.s.entry_lan_ext.rbe_parent = (parent); } ; if (((tmp)->u.s.entry_lan_ext.rbe_parent = (parent)->u.s.entry_lan_ext.rbe_parent)) { if ((parent) == ((parent)->u.s.entry_lan_ext.rbe_parent)->u.s.entry_lan_ext.rbe_left) ((parent)->u.s.entry_lan_ext.rbe_parent)->u.s.entry_lan_ext.rbe_left = (tmp); else ((parent)->u.s.entry_lan_ext.rbe_parent)->u.s.entry_lan_ext.rbe_right = (tmp); } else (head)->rbh_root = (tmp); (tmp)->u.s.entry_lan_ext.rbe_left = (parent); (parent)->u.s.entry_lan_ext.rbe_parent = (tmp); ; if (((tmp)->u.s.entry_lan_ext.rbe_parent)) ; } while (0); tmp = parent; parent = elm; elm = tmp; } do { (parent)->u.s.entry_lan_ext.rbe_color = 0; (gparent)->u.s.entry_lan_ext.rbe_color = 1; } while (0); do { (tmp) = (gparent)->u.s.entry_lan_ext.rbe_left; if (((gparent)->u.s.entry_lan_ext.rbe_left = (tmp)->u.s.entry_lan_ext.rbe_right)) { ((tmp)->u.s.entry_lan_ext.rbe_right)->u.s.entry_lan_ext.rbe_parent = (gparent); } ; if (((tmp)->u.s.entry_lan_ext.rbe_parent = (gparent)->u.s.entry_lan_ext.rbe_parent)) { if ((gparent) == ((gparent)->u.s.entry_lan_ext.rbe_parent)->u.s.entry_lan_ext.rbe_left) ((gparent)->u.s.entry_lan_ext.rbe_parent)->u.s.entry_lan_ext.rbe_left = (tmp); else ((gparent)->u.s.entry_lan_ext.rbe_parent)->u.s.entry_lan_ext.rbe_right = (tmp); } else (head)->rbh_root = (tmp); (tmp)->u.s.entry_lan_ext.rbe_right = (gparent); (gparent)->u.s.entry_lan_ext.rbe_parent = (tmp); ; if (((tmp)->u.s.entry_lan_ext.rbe_parent)) ; } while (0); } else { tmp = (gparent)->u.s.entry_lan_ext.rbe_left; if (tmp && (tmp)->u.s.entry_lan_ext.rbe_color == 1) { (tmp)->u.s.entry_lan_ext.rbe_color = 0; do { (parent)->u.s.entry_lan_ext.rbe_color = 0; (gparent)->u.s.entry_lan_ext.rbe_color = 1; } while (0); elm = gparent; continue; } if ((parent)->u.s.entry_lan_ext.rbe_left == elm) { do { (tmp) = (parent)->u.s.entry_lan_ext.rbe_left; if (((parent)->u.s.entry_lan_ext.rbe_left = (tmp)->u.s.entry_lan_ext.rbe_right)) { ((tmp)->u.s.entry_lan_ext.rbe_right)->u.s.entry_lan_ext.rbe_parent = (parent); } ; if (((tmp)->u.s.entry_lan_ext.rbe_parent = (parent)->u.s.entry_lan_ext.rbe_parent)) { if ((parent) == ((parent)->u.s.entry_lan_ext.rbe_parent)->u.s.entry_lan_ext.rbe_left) ((parent)->u.s.entry_lan_ext.rbe_parent)->u.s.entry_lan_ext.rbe_left = (tmp); else ((parent)->u.s.entry_lan_ext.rbe_parent)->u.s.entry_lan_ext.rbe_right = (tmp); } else (head)->rbh_root = (tmp); (tmp)->u.s.entry_lan_ext.rbe_right = (parent); (parent)->u.s.entry_lan_ext.rbe_parent = (tmp); ; if (((tmp)->u.s.entry_lan_ext.rbe_parent)) ; } while (0); tmp = parent; parent = elm; elm = tmp; } do { (parent)->u.s.entry_lan_ext.rbe_color = 0; (gparent)->u.s.entry_lan_ext.rbe_color = 1; } while (0); do { (tmp) = (gparent)->u.s.entry_lan_ext.rbe_right; if (((gparent)->u.s.entry_lan_ext.rbe_right = (tmp)->u.s.entry_lan_ext.rbe_left)) { ((tmp)->u.s.entry_lan_ext.rbe_left)->u.s.entry_lan_ext.rbe_parent = (gparent); } ; if (((tmp)->u.s.entry_lan_ext.rbe_parent = (gparent)->u.s.entry_lan_ext.rbe_parent)) { if ((gparent) == ((gparent)->u.s.entry_lan_ext.rbe_parent)->u.s.entry_lan_ext.rbe_left) ((gparent)->u.s.entry_lan_ext.rbe_parent)->u.s.entry_lan_ext.rbe_left = (tmp); else ((gparent)->u.s.entry_lan_ext.rbe_parent)->u.s.entry_lan_ext.rbe_right = (tmp); } else (head)->rbh_root = (tmp); (tmp)->u.s.entry_lan_ext.rbe_left = (gparent); (gparent)->u.s.entry_lan_ext.rbe_parent = (tmp); ; if (((tmp)->u.s.entry_lan_ext.rbe_parent)) ; } while (0); } } (head->rbh_root)->u.s.entry_lan_ext.rbe_color = 0; } void
 pf_state_tree_lan_ext_RB_REMOVE_COLOR
# 261 "openbsd3/net/pf.c"
 (struct pf_state_tree_lan_ext *head, struct pf_state *parent, struct pf_state *elm) { struct pf_state *tmp; while ((elm == 0L || (elm)->u.s.entry_lan_ext.rbe_color == 0) && elm != (head)->rbh_root) { if ((parent)->u.s.entry_lan_ext.rbe_left == elm) { tmp = (parent)->u.s.entry_lan_ext.rbe_right; if ((tmp)->u.s.entry_lan_ext.rbe_color == 1) { do { (tmp)->u.s.entry_lan_ext.rbe_color = 0; (parent)->u.s.entry_lan_ext.rbe_color = 1; } while (0); do { (tmp) = (parent)->u.s.entry_lan_ext.rbe_right; if (((parent)->u.s.entry_lan_ext.rbe_right = (tmp)->u.s.entry_lan_ext.rbe_left)) { ((tmp)->u.s.entry_lan_ext.rbe_left)->u.s.entry_lan_ext.rbe_parent = (parent); } ; if (((tmp)->u.s.entry_lan_ext.rbe_parent = (parent)->u.s.entry_lan_ext.rbe_parent)) { if ((parent) == ((parent)->u.s.entry_lan_ext.rbe_parent)->u.s.entry_lan_ext.rbe_left) ((parent)->u.s.entry_lan_ext.rbe_parent)->u.s.entry_lan_ext.rbe_left = (tmp); else ((parent)->u.s.entry_lan_ext.rbe_parent)->u.s.entry_lan_ext.rbe_right = (tmp); } else (head)->rbh_root = (tmp); (tmp)->u.s.entry_lan_ext.rbe_left = (parent); (parent)->u.s.entry_lan_ext.rbe_parent = (tmp); ; if (((tmp)->u.s.entry_lan_ext.rbe_parent)) ; } while (0); tmp = (parent)->u.s.entry_lan_ext.rbe_right; } if (((tmp)->u.s.entry_lan_ext.rbe_left == 0L || ((tmp)->u.s.entry_lan_ext.rbe_left)->u.s.entry_lan_ext.rbe_color == 0) && ((tmp)->u.s.entry_lan_ext.rbe_right == 0L || ((tmp)->u.s.entry_lan_ext.rbe_right)->u.s.entry_lan_ext.rbe_color == 0)) { (tmp)->u.s.entry_lan_ext.rbe_color = 1; elm = parent; parent = (elm)->u.s.entry_lan_ext.rbe_parent; } else { if ((tmp)->u.s.entry_lan_ext.rbe_right == 0L || ((tmp)->u.s.entry_lan_ext.rbe_right)->u.s.entry_lan_ext.rbe_color == 0) { struct pf_state *oleft; if ((oleft = (tmp)->u.s.entry_lan_ext.rbe_left)) (oleft)->u.s.entry_lan_ext.rbe_color = 0; (tmp)->u.s.entry_lan_ext.rbe_color = 1; do { (oleft) = (tmp)->u.s.entry_lan_ext.rbe_left; if (((tmp)->u.s.entry_lan_ext.rbe_left = (oleft)->u.s.entry_lan_ext.rbe_right)) { ((oleft)->u.s.entry_lan_ext.rbe_right)->u.s.entry_lan_ext.rbe_parent = (tmp); } ; if (((oleft)->u.s.entry_lan_ext.rbe_parent = (tmp)->u.s.entry_lan_ext.rbe_parent)) { if ((tmp) == ((tmp)->u.s.entry_lan_ext.rbe_parent)->u.s.entry_lan_ext.rbe_left) ((tmp)->u.s.entry_lan_ext.rbe_parent)->u.s.entry_lan_ext.rbe_left = (oleft); else ((tmp)->u.s.entry_lan_ext.rbe_parent)->u.s.entry_lan_ext.rbe_right = (oleft); } else (head)->rbh_root = (oleft); (oleft)->u.s.entry_lan_ext.rbe_right = (tmp); (tmp)->u.s.entry_lan_ext.rbe_parent = (oleft); ; if (((oleft)->u.s.entry_lan_ext.rbe_parent)) ; } while (0); tmp = (parent)->u.s.entry_lan_ext.rbe_right; } (tmp)->u.s.entry_lan_ext.rbe_color = (parent)->u.s.entry_lan_ext.rbe_color; (parent)->u.s.entry_lan_ext.rbe_color = 0; if ((tmp)->u.s.entry_lan_ext.rbe_right) ((tmp)->u.s.entry_lan_ext.rbe_right)->u.s.entry_lan_ext.rbe_color = 0; do { (tmp) = (parent)->u.s.entry_lan_ext.rbe_right; if (((parent)->u.s.entry_lan_ext.rbe_right = (tmp)->u.s.entry_lan_ext.rbe_left)) { ((tmp)->u.s.entry_lan_ext.rbe_left)->u.s.entry_lan_ext.rbe_parent = (parent); } ; if (((tmp)->u.s.entry_lan_ext.rbe_parent = (parent)->u.s.entry_lan_ext.rbe_parent)) { if ((parent) == ((parent)->u.s.entry_lan_ext.rbe_parent)->u.s.entry_lan_ext.rbe_left) ((parent)->u.s.entry_lan_ext.rbe_parent)->u.s.entry_lan_ext.rbe_left = (tmp); else ((parent)->u.s.entry_lan_ext.rbe_parent)->u.s.entry_lan_ext.rbe_right = (tmp); } else (head)->rbh_root = (tmp); (tmp)->u.s.entry_lan_ext.rbe_left = (parent); (parent)->u.s.entry_lan_ext.rbe_parent = (tmp); ; if (((tmp)->u.s.entry_lan_ext.rbe_parent)) ; } while (0); elm = (head)->rbh_root; break; } } else { tmp = (parent)->u.s.entry_lan_ext.rbe_left; if ((tmp)->u.s.entry_lan_ext.rbe_color == 1) { do { (tmp)->u.s.entry_lan_ext.rbe_color = 0; (parent)->u.s.entry_lan_ext.rbe_color = 1; } while (0); do { (tmp) = (parent)->u.s.entry_lan_ext.rbe_left; if (((parent)->u.s.entry_lan_ext.rbe_left = (tmp)->u.s.entry_lan_ext.rbe_right)) { ((tmp)->u.s.entry_lan_ext.rbe_right)->u.s.entry_lan_ext.rbe_parent = (parent); } ; if (((tmp)->u.s.entry_lan_ext.rbe_parent = (parent)->u.s.entry_lan_ext.rbe_parent)) { if ((parent) == ((parent)->u.s.entry_lan_ext.rbe_parent)->u.s.entry_lan_ext.rbe_left) ((parent)->u.s.entry_lan_ext.rbe_parent)->u.s.entry_lan_ext.rbe_left = (tmp); else ((parent)->u.s.entry_lan_ext.rbe_parent)->u.s.entry_lan_ext.rbe_right = (tmp); } else (head)->rbh_root = (tmp); (tmp)->u.s.entry_lan_ext.rbe_right = (parent); (parent)->u.s.entry_lan_ext.rbe_parent = (tmp); ; if (((tmp)->u.s.entry_lan_ext.rbe_parent)) ; } while (0); tmp = (parent)->u.s.entry_lan_ext.rbe_left; } if (((tmp)->u.s.entry_lan_ext.rbe_left == 0L || ((tmp)->u.s.entry_lan_ext.rbe_left)->u.s.entry_lan_ext.rbe_color == 0) && ((tmp)->u.s.entry_lan_ext.rbe_right == 0L || ((tmp)->u.s.entry_lan_ext.rbe_right)->u.s.entry_lan_ext.rbe_color == 0)) { (tmp)->u.s.entry_lan_ext.rbe_color = 1; elm = parent; parent = (elm)->u.s.entry_lan_ext.rbe_parent; } else { if ((tmp)->u.s.entry_lan_ext.rbe_left == 0L || ((tmp)->u.s.entry_lan_ext.rbe_left)->u.s.entry_lan_ext.rbe_color == 0) { struct pf_state *oright; if ((oright = (tmp)->u.s.entry_lan_ext.rbe_right)) (oright)->u.s.entry_lan_ext.rbe_color = 0; (tmp)->u.s.entry_lan_ext.rbe_color = 1; do { (oright) = (tmp)->u.s.entry_lan_ext.rbe_right; if (((tmp)->u.s.entry_lan_ext.rbe_right = (oright)->u.s.entry_lan_ext.rbe_left)) { ((oright)->u.s.entry_lan_ext.rbe_left)->u.s.entry_lan_ext.rbe_parent = (tmp); } ; if (((oright)->u.s.entry_lan_ext.rbe_parent = (tmp)->u.s.entry_lan_ext.rbe_parent)) { if ((tmp) == ((tmp)->u.s.entry_lan_ext.rbe_parent)->u.s.entry_lan_ext.rbe_left) ((tmp)->u.s.entry_lan_ext.rbe_parent)->u.s.entry_lan_ext.rbe_left = (oright); else ((tmp)->u.s.entry_lan_ext.rbe_parent)->u.s.entry_lan_ext.rbe_right = (oright); } else (head)->rbh_root = (oright); (oright)->u.s.entry_lan_ext.rbe_left = (tmp); (tmp)->u.s.entry_lan_ext.rbe_parent = (oright); ; if (((oright)->u.s.entry_lan_ext.rbe_parent)) ; } while (0); tmp = (parent)->u.s.entry_lan_ext.rbe_left; } (tmp)->u.s.entry_lan_ext.rbe_color = (parent)->u.s.entry_lan_ext.rbe_color; (parent)->u.s.entry_lan_ext.rbe_color = 0; if ((tmp)->u.s.entry_lan_ext.rbe_left) ((tmp)->u.s.entry_lan_ext.rbe_left)->u.s.entry_lan_ext.rbe_color = 0; do { (tmp) = (parent)->u.s.entry_lan_ext.rbe_left; if (((parent)->u.s.entry_lan_ext.rbe_left = (tmp)->u.s.entry_lan_ext.rbe_right)) { ((tmp)->u.s.entry_lan_ext.rbe_right)->u.s.entry_lan_ext.rbe_parent = (parent); } ; if (((tmp)->u.s.entry_lan_ext.rbe_parent = (parent)->u.s.entry_lan_ext.rbe_parent)) { if ((parent) == ((parent)->u.s.entry_lan_ext.rbe_parent)->u.s.entry_lan_ext.rbe_left) ((parent)->u.s.entry_lan_ext.rbe_parent)->u.s.entry_lan_ext.rbe_left = (tmp); else ((parent)->u.s.entry_lan_ext.rbe_parent)->u.s.entry_lan_ext.rbe_right = (tmp); } else (head)->rbh_root = (tmp); (tmp)->u.s.entry_lan_ext.rbe_right = (parent); (parent)->u.s.entry_lan_ext.rbe_parent = (tmp); ; if (((tmp)->u.s.entry_lan_ext.rbe_parent)) ; } while (0); elm = (head)->rbh_root; break; } } } if (elm) (elm)->u.s.entry_lan_ext.rbe_color = 0; } struct pf_state *
 pf_state_tree_lan_ext_RB_REMOVE
# 261 "openbsd3/net/pf.c"
 (struct pf_state_tree_lan_ext *head, struct pf_state *elm) { struct pf_state *child, *parent, *old = elm; int color; if ((elm)->u.s.entry_lan_ext.rbe_left == 0L) child = (elm)->u.s.entry_lan_ext.rbe_right; else if ((elm)->u.s.entry_lan_ext.rbe_right == 0L) child = (elm)->u.s.entry_lan_ext.rbe_left; else { struct pf_state *left; elm = (elm)->u.s.entry_lan_ext.rbe_right; while ((left = (elm)->u.s.entry_lan_ext.rbe_left)) elm = left; child = (elm)->u.s.entry_lan_ext.rbe_right; parent = (elm)->u.s.entry_lan_ext.rbe_parent; color = (elm)->u.s.entry_lan_ext.rbe_color; if (child) (child)->u.s.entry_lan_ext.rbe_parent = parent; if (parent) { if ((parent)->u.s.entry_lan_ext.rbe_left == elm) (parent)->u.s.entry_lan_ext.rbe_left = child; else (parent)->u.s.entry_lan_ext.rbe_right = child; ; } else (head)->rbh_root = child; if ((elm)->u.s.entry_lan_ext.rbe_parent == old) parent = elm; (elm)->u.s.entry_lan_ext = (old)->u.s.entry_lan_ext; if ((old)->u.s.entry_lan_ext.rbe_parent) { if (((old)->u.s.entry_lan_ext.rbe_parent)->u.s.entry_lan_ext.rbe_left == old) ((old)->u.s.entry_lan_ext.rbe_parent)->u.s.entry_lan_ext.rbe_left = elm; else ((old)->u.s.entry_lan_ext.rbe_parent)->u.s.entry_lan_ext.rbe_right = elm; ; } else (head)->rbh_root = elm; ((old)->u.s.entry_lan_ext.rbe_left)->u.s.entry_lan_ext.rbe_parent = elm; if ((old)->u.s.entry_lan_ext.rbe_right) ((old)->u.s.entry_lan_ext.rbe_right)->u.s.entry_lan_ext.rbe_parent = elm; if (parent) { left = parent; do { ; } while ((left = (left)->u.s.entry_lan_ext.rbe_parent)); } goto color; } parent = (elm)->u.s.entry_lan_ext.rbe_parent; color = (elm)->u.s.entry_lan_ext.rbe_color; if (child) (child)->u.s.entry_lan_ext.rbe_parent = parent; if (parent) { if ((parent)->u.s.entry_lan_ext.rbe_left == elm) (parent)->u.s.entry_lan_ext.rbe_left = child; else (parent)->u.s.entry_lan_ext.rbe_right = child; ; } else (head)->rbh_root = child; color: if (color == 0)
 pf_state_tree_lan_ext_RB_REMOVE_COLOR
# 261 "openbsd3/net/pf.c"
 (head, parent, child); return (old); } struct pf_state *
 pf_state_tree_lan_ext_RB_INSERT
# 261 "openbsd3/net/pf.c"
 (struct pf_state_tree_lan_ext *head, struct pf_state *elm) { struct pf_state *tmp; struct pf_state *parent = 0L; int comp = 0; tmp = (head)->rbh_root; while (tmp) { parent = tmp; comp = (pf_state_compare_lan_ext)(elm, parent); if (comp < 0) tmp = (tmp)->u.s.entry_lan_ext.rbe_left; else if (comp > 0) tmp = (tmp)->u.s.entry_lan_ext.rbe_right; else return (tmp); } do { (elm)->u.s.entry_lan_ext.rbe_parent = parent; (elm)->u.s.entry_lan_ext.rbe_left = (elm)->u.s.entry_lan_ext.rbe_right = 0L; (elm)->u.s.entry_lan_ext.rbe_color = 1; } while (0); if (parent != 0L) { if (comp < 0) (parent)->u.s.entry_lan_ext.rbe_left = elm; else (parent)->u.s.entry_lan_ext.rbe_right = elm; ; } else (head)->rbh_root = elm;
 pf_state_tree_lan_ext_RB_INSERT_COLOR
# 261 "openbsd3/net/pf.c"
 (head, elm); return (0L); } struct pf_state *
 pf_state_tree_lan_ext_RB_FIND
# 261 "openbsd3/net/pf.c"
 (struct pf_state_tree_lan_ext *head, struct pf_state *elm) { struct pf_state *tmp = (head)->rbh_root; int comp; while (tmp) { comp = pf_state_compare_lan_ext(elm, tmp); if (comp < 0) tmp = (tmp)->u.s.entry_lan_ext.rbe_left; else if (comp > 0) tmp = (tmp)->u.s.entry_lan_ext.rbe_right; else return (tmp); } return (0L); } struct pf_state *
 pf_state_tree_lan_ext_RB_NEXT
# 261 "openbsd3/net/pf.c"
 (struct pf_state_tree_lan_ext *head, struct pf_state *elm) { if ((elm)->u.s.entry_lan_ext.rbe_right) { elm = (elm)->u.s.entry_lan_ext.rbe_right; while ((elm)->u.s.entry_lan_ext.rbe_left) elm = (elm)->u.s.entry_lan_ext.rbe_left; } else { if ((elm)->u.s.entry_lan_ext.rbe_parent && (elm == ((elm)->u.s.entry_lan_ext.rbe_parent)->u.s.entry_lan_ext.rbe_left)) elm = (elm)->u.s.entry_lan_ext.rbe_parent; else { while ((elm)->u.s.entry_lan_ext.rbe_parent && (elm == ((elm)->u.s.entry_lan_ext.rbe_parent)->u.s.entry_lan_ext.rbe_right)) elm = (elm)->u.s.entry_lan_ext.rbe_parent; elm = (elm)->u.s.entry_lan_ext.rbe_parent; } } return (elm); } struct pf_state *
 pf_state_tree_lan_ext_RB_MINMAX
# 261 "openbsd3/net/pf.c"
 (struct pf_state_tree_lan_ext *head, int val) { struct pf_state *tmp = (head)->rbh_root; struct pf_state *parent = 0L; while (tmp) { parent = tmp; if (val < 0) tmp = (tmp)->u.s.entry_lan_ext.rbe_left; else tmp = (tmp)->u.s.entry_lan_ext.rbe_right; } return (parent); }
                                                ;
void
 pf_state_tree_ext_gwy_RB_INSERT_COLOR
# 263 "openbsd3/net/pf.c"
 (struct pf_state_tree_ext_gwy *head, struct pf_state *elm) { struct pf_state *parent, *gparent, *tmp; while ((parent = (elm)->u.s.entry_ext_gwy.rbe_parent) && (parent)->u.s.entry_ext_gwy.rbe_color == 1) { gparent = (parent)->u.s.entry_ext_gwy.rbe_parent; if (parent == (gparent)->u.s.entry_ext_gwy.rbe_left) { tmp = (gparent)->u.s.entry_ext_gwy.rbe_right; if (tmp && (tmp)->u.s.entry_ext_gwy.rbe_color == 1) { (tmp)->u.s.entry_ext_gwy.rbe_color = 0; do { (parent)->u.s.entry_ext_gwy.rbe_color = 0; (gparent)->u.s.entry_ext_gwy.rbe_color = 1; } while (0); elm = gparent; continue; } if ((parent)->u.s.entry_ext_gwy.rbe_right == elm) { do { (tmp) = (parent)->u.s.entry_ext_gwy.rbe_right; if (((parent)->u.s.entry_ext_gwy.rbe_right = (tmp)->u.s.entry_ext_gwy.rbe_left)) { ((tmp)->u.s.entry_ext_gwy.rbe_left)->u.s.entry_ext_gwy.rbe_parent = (parent); } ; if (((tmp)->u.s.entry_ext_gwy.rbe_parent = (parent)->u.s.entry_ext_gwy.rbe_parent)) { if ((parent) == ((parent)->u.s.entry_ext_gwy.rbe_parent)->u.s.entry_ext_gwy.rbe_left) ((parent)->u.s.entry_ext_gwy.rbe_parent)->u.s.entry_ext_gwy.rbe_left = (tmp); else ((parent)->u.s.entry_ext_gwy.rbe_parent)->u.s.entry_ext_gwy.rbe_right = (tmp); } else (head)->rbh_root = (tmp); (tmp)->u.s.entry_ext_gwy.rbe_left = (parent); (parent)->u.s.entry_ext_gwy.rbe_parent = (tmp); ; if (((tmp)->u.s.entry_ext_gwy.rbe_parent)) ; } while (0); tmp = parent; parent = elm; elm = tmp; } do { (parent)->u.s.entry_ext_gwy.rbe_color = 0; (gparent)->u.s.entry_ext_gwy.rbe_color = 1; } while (0); do { (tmp) = (gparent)->u.s.entry_ext_gwy.rbe_left; if (((gparent)->u.s.entry_ext_gwy.rbe_left = (tmp)->u.s.entry_ext_gwy.rbe_right)) { ((tmp)->u.s.entry_ext_gwy.rbe_right)->u.s.entry_ext_gwy.rbe_parent = (gparent); } ; if (((tmp)->u.s.entry_ext_gwy.rbe_parent = (gparent)->u.s.entry_ext_gwy.rbe_parent)) { if ((gparent) == ((gparent)->u.s.entry_ext_gwy.rbe_parent)->u.s.entry_ext_gwy.rbe_left) ((gparent)->u.s.entry_ext_gwy.rbe_parent)->u.s.entry_ext_gwy.rbe_left = (tmp); else ((gparent)->u.s.entry_ext_gwy.rbe_parent)->u.s.entry_ext_gwy.rbe_right = (tmp); } else (head)->rbh_root = (tmp); (tmp)->u.s.entry_ext_gwy.rbe_right = (gparent); (gparent)->u.s.entry_ext_gwy.rbe_parent = (tmp); ; if (((tmp)->u.s.entry_ext_gwy.rbe_parent)) ; } while (0); } else { tmp = (gparent)->u.s.entry_ext_gwy.rbe_left; if (tmp && (tmp)->u.s.entry_ext_gwy.rbe_color == 1) { (tmp)->u.s.entry_ext_gwy.rbe_color = 0; do { (parent)->u.s.entry_ext_gwy.rbe_color = 0; (gparent)->u.s.entry_ext_gwy.rbe_color = 1; } while (0); elm = gparent; continue; } if ((parent)->u.s.entry_ext_gwy.rbe_left == elm) { do { (tmp) = (parent)->u.s.entry_ext_gwy.rbe_left; if (((parent)->u.s.entry_ext_gwy.rbe_left = (tmp)->u.s.entry_ext_gwy.rbe_right)) { ((tmp)->u.s.entry_ext_gwy.rbe_right)->u.s.entry_ext_gwy.rbe_parent = (parent); } ; if (((tmp)->u.s.entry_ext_gwy.rbe_parent = (parent)->u.s.entry_ext_gwy.rbe_parent)) { if ((parent) == ((parent)->u.s.entry_ext_gwy.rbe_parent)->u.s.entry_ext_gwy.rbe_left) ((parent)->u.s.entry_ext_gwy.rbe_parent)->u.s.entry_ext_gwy.rbe_left = (tmp); else ((parent)->u.s.entry_ext_gwy.rbe_parent)->u.s.entry_ext_gwy.rbe_right = (tmp); } else (head)->rbh_root = (tmp); (tmp)->u.s.entry_ext_gwy.rbe_right = (parent); (parent)->u.s.entry_ext_gwy.rbe_parent = (tmp); ; if (((tmp)->u.s.entry_ext_gwy.rbe_parent)) ; } while (0); tmp = parent; parent = elm; elm = tmp; } do { (parent)->u.s.entry_ext_gwy.rbe_color = 0; (gparent)->u.s.entry_ext_gwy.rbe_color = 1; } while (0); do { (tmp) = (gparent)->u.s.entry_ext_gwy.rbe_right; if (((gparent)->u.s.entry_ext_gwy.rbe_right = (tmp)->u.s.entry_ext_gwy.rbe_left)) { ((tmp)->u.s.entry_ext_gwy.rbe_left)->u.s.entry_ext_gwy.rbe_parent = (gparent); } ; if (((tmp)->u.s.entry_ext_gwy.rbe_parent = (gparent)->u.s.entry_ext_gwy.rbe_parent)) { if ((gparent) == ((gparent)->u.s.entry_ext_gwy.rbe_parent)->u.s.entry_ext_gwy.rbe_left) ((gparent)->u.s.entry_ext_gwy.rbe_parent)->u.s.entry_ext_gwy.rbe_left = (tmp); else ((gparent)->u.s.entry_ext_gwy.rbe_parent)->u.s.entry_ext_gwy.rbe_right = (tmp); } else (head)->rbh_root = (tmp); (tmp)->u.s.entry_ext_gwy.rbe_left = (gparent); (gparent)->u.s.entry_ext_gwy.rbe_parent = (tmp); ; if (((tmp)->u.s.entry_ext_gwy.rbe_parent)) ; } while (0); } } (head->rbh_root)->u.s.entry_ext_gwy.rbe_color = 0; } void
 pf_state_tree_ext_gwy_RB_REMOVE_COLOR
# 263 "openbsd3/net/pf.c"
 (struct pf_state_tree_ext_gwy *head, struct pf_state *parent, struct pf_state *elm) { struct pf_state *tmp; while ((elm == 0L || (elm)->u.s.entry_ext_gwy.rbe_color == 0) && elm != (head)->rbh_root) { if ((parent)->u.s.entry_ext_gwy.rbe_left == elm) { tmp = (parent)->u.s.entry_ext_gwy.rbe_right; if ((tmp)->u.s.entry_ext_gwy.rbe_color == 1) { do { (tmp)->u.s.entry_ext_gwy.rbe_color = 0; (parent)->u.s.entry_ext_gwy.rbe_color = 1; } while (0); do { (tmp) = (parent)->u.s.entry_ext_gwy.rbe_right; if (((parent)->u.s.entry_ext_gwy.rbe_right = (tmp)->u.s.entry_ext_gwy.rbe_left)) { ((tmp)->u.s.entry_ext_gwy.rbe_left)->u.s.entry_ext_gwy.rbe_parent = (parent); } ; if (((tmp)->u.s.entry_ext_gwy.rbe_parent = (parent)->u.s.entry_ext_gwy.rbe_parent)) { if ((parent) == ((parent)->u.s.entry_ext_gwy.rbe_parent)->u.s.entry_ext_gwy.rbe_left) ((parent)->u.s.entry_ext_gwy.rbe_parent)->u.s.entry_ext_gwy.rbe_left = (tmp); else ((parent)->u.s.entry_ext_gwy.rbe_parent)->u.s.entry_ext_gwy.rbe_right = (tmp); } else (head)->rbh_root = (tmp); (tmp)->u.s.entry_ext_gwy.rbe_left = (parent); (parent)->u.s.entry_ext_gwy.rbe_parent = (tmp); ; if (((tmp)->u.s.entry_ext_gwy.rbe_parent)) ; } while (0); tmp = (parent)->u.s.entry_ext_gwy.rbe_right; } if (((tmp)->u.s.entry_ext_gwy.rbe_left == 0L || ((tmp)->u.s.entry_ext_gwy.rbe_left)->u.s.entry_ext_gwy.rbe_color == 0) && ((tmp)->u.s.entry_ext_gwy.rbe_right == 0L || ((tmp)->u.s.entry_ext_gwy.rbe_right)->u.s.entry_ext_gwy.rbe_color == 0)) { (tmp)->u.s.entry_ext_gwy.rbe_color = 1; elm = parent; parent = (elm)->u.s.entry_ext_gwy.rbe_parent; } else { if ((tmp)->u.s.entry_ext_gwy.rbe_right == 0L || ((tmp)->u.s.entry_ext_gwy.rbe_right)->u.s.entry_ext_gwy.rbe_color == 0) { struct pf_state *oleft; if ((oleft = (tmp)->u.s.entry_ext_gwy.rbe_left)) (oleft)->u.s.entry_ext_gwy.rbe_color = 0; (tmp)->u.s.entry_ext_gwy.rbe_color = 1; do { (oleft) = (tmp)->u.s.entry_ext_gwy.rbe_left; if (((tmp)->u.s.entry_ext_gwy.rbe_left = (oleft)->u.s.entry_ext_gwy.rbe_right)) { ((oleft)->u.s.entry_ext_gwy.rbe_right)->u.s.entry_ext_gwy.rbe_parent = (tmp); } ; if (((oleft)->u.s.entry_ext_gwy.rbe_parent = (tmp)->u.s.entry_ext_gwy.rbe_parent)) { if ((tmp) == ((tmp)->u.s.entry_ext_gwy.rbe_parent)->u.s.entry_ext_gwy.rbe_left) ((tmp)->u.s.entry_ext_gwy.rbe_parent)->u.s.entry_ext_gwy.rbe_left = (oleft); else ((tmp)->u.s.entry_ext_gwy.rbe_parent)->u.s.entry_ext_gwy.rbe_right = (oleft); } else (head)->rbh_root = (oleft); (oleft)->u.s.entry_ext_gwy.rbe_right = (tmp); (tmp)->u.s.entry_ext_gwy.rbe_parent = (oleft); ; if (((oleft)->u.s.entry_ext_gwy.rbe_parent)) ; } while (0); tmp = (parent)->u.s.entry_ext_gwy.rbe_right; } (tmp)->u.s.entry_ext_gwy.rbe_color = (parent)->u.s.entry_ext_gwy.rbe_color; (parent)->u.s.entry_ext_gwy.rbe_color = 0; if ((tmp)->u.s.entry_ext_gwy.rbe_right) ((tmp)->u.s.entry_ext_gwy.rbe_right)->u.s.entry_ext_gwy.rbe_color = 0; do { (tmp) = (parent)->u.s.entry_ext_gwy.rbe_right; if (((parent)->u.s.entry_ext_gwy.rbe_right = (tmp)->u.s.entry_ext_gwy.rbe_left)) { ((tmp)->u.s.entry_ext_gwy.rbe_left)->u.s.entry_ext_gwy.rbe_parent = (parent); } ; if (((tmp)->u.s.entry_ext_gwy.rbe_parent = (parent)->u.s.entry_ext_gwy.rbe_parent)) { if ((parent) == ((parent)->u.s.entry_ext_gwy.rbe_parent)->u.s.entry_ext_gwy.rbe_left) ((parent)->u.s.entry_ext_gwy.rbe_parent)->u.s.entry_ext_gwy.rbe_left = (tmp); else ((parent)->u.s.entry_ext_gwy.rbe_parent)->u.s.entry_ext_gwy.rbe_right = (tmp); } else (head)->rbh_root = (tmp); (tmp)->u.s.entry_ext_gwy.rbe_left = (parent); (parent)->u.s.entry_ext_gwy.rbe_parent = (tmp); ; if (((tmp)->u.s.entry_ext_gwy.rbe_parent)) ; } while (0); elm = (head)->rbh_root; break; } } else { tmp = (parent)->u.s.entry_ext_gwy.rbe_left; if ((tmp)->u.s.entry_ext_gwy.rbe_color == 1) { do { (tmp)->u.s.entry_ext_gwy.rbe_color = 0; (parent)->u.s.entry_ext_gwy.rbe_color = 1; } while (0); do { (tmp) = (parent)->u.s.entry_ext_gwy.rbe_left; if (((parent)->u.s.entry_ext_gwy.rbe_left = (tmp)->u.s.entry_ext_gwy.rbe_right)) { ((tmp)->u.s.entry_ext_gwy.rbe_right)->u.s.entry_ext_gwy.rbe_parent = (parent); } ; if (((tmp)->u.s.entry_ext_gwy.rbe_parent = (parent)->u.s.entry_ext_gwy.rbe_parent)) { if ((parent) == ((parent)->u.s.entry_ext_gwy.rbe_parent)->u.s.entry_ext_gwy.rbe_left) ((parent)->u.s.entry_ext_gwy.rbe_parent)->u.s.entry_ext_gwy.rbe_left = (tmp); else ((parent)->u.s.entry_ext_gwy.rbe_parent)->u.s.entry_ext_gwy.rbe_right = (tmp); } else (head)->rbh_root = (tmp); (tmp)->u.s.entry_ext_gwy.rbe_right = (parent); (parent)->u.s.entry_ext_gwy.rbe_parent = (tmp); ; if (((tmp)->u.s.entry_ext_gwy.rbe_parent)) ; } while (0); tmp = (parent)->u.s.entry_ext_gwy.rbe_left; } if (((tmp)->u.s.entry_ext_gwy.rbe_left == 0L || ((tmp)->u.s.entry_ext_gwy.rbe_left)->u.s.entry_ext_gwy.rbe_color == 0) && ((tmp)->u.s.entry_ext_gwy.rbe_right == 0L || ((tmp)->u.s.entry_ext_gwy.rbe_right)->u.s.entry_ext_gwy.rbe_color == 0)) { (tmp)->u.s.entry_ext_gwy.rbe_color = 1; elm = parent; parent = (elm)->u.s.entry_ext_gwy.rbe_parent; } else { if ((tmp)->u.s.entry_ext_gwy.rbe_left == 0L || ((tmp)->u.s.entry_ext_gwy.rbe_left)->u.s.entry_ext_gwy.rbe_color == 0) { struct pf_state *oright; if ((oright = (tmp)->u.s.entry_ext_gwy.rbe_right)) (oright)->u.s.entry_ext_gwy.rbe_color = 0; (tmp)->u.s.entry_ext_gwy.rbe_color = 1; do { (oright) = (tmp)->u.s.entry_ext_gwy.rbe_right; if (((tmp)->u.s.entry_ext_gwy.rbe_right = (oright)->u.s.entry_ext_gwy.rbe_left)) { ((oright)->u.s.entry_ext_gwy.rbe_left)->u.s.entry_ext_gwy.rbe_parent = (tmp); } ; if (((oright)->u.s.entry_ext_gwy.rbe_parent = (tmp)->u.s.entry_ext_gwy.rbe_parent)) { if ((tmp) == ((tmp)->u.s.entry_ext_gwy.rbe_parent)->u.s.entry_ext_gwy.rbe_left) ((tmp)->u.s.entry_ext_gwy.rbe_parent)->u.s.entry_ext_gwy.rbe_left = (oright); else ((tmp)->u.s.entry_ext_gwy.rbe_parent)->u.s.entry_ext_gwy.rbe_right = (oright); } else (head)->rbh_root = (oright); (oright)->u.s.entry_ext_gwy.rbe_left = (tmp); (tmp)->u.s.entry_ext_gwy.rbe_parent = (oright); ; if (((oright)->u.s.entry_ext_gwy.rbe_parent)) ; } while (0); tmp = (parent)->u.s.entry_ext_gwy.rbe_left; } (tmp)->u.s.entry_ext_gwy.rbe_color = (parent)->u.s.entry_ext_gwy.rbe_color; (parent)->u.s.entry_ext_gwy.rbe_color = 0; if ((tmp)->u.s.entry_ext_gwy.rbe_left) ((tmp)->u.s.entry_ext_gwy.rbe_left)->u.s.entry_ext_gwy.rbe_color = 0; do { (tmp) = (parent)->u.s.entry_ext_gwy.rbe_left; if (((parent)->u.s.entry_ext_gwy.rbe_left = (tmp)->u.s.entry_ext_gwy.rbe_right)) { ((tmp)->u.s.entry_ext_gwy.rbe_right)->u.s.entry_ext_gwy.rbe_parent = (parent); } ; if (((tmp)->u.s.entry_ext_gwy.rbe_parent = (parent)->u.s.entry_ext_gwy.rbe_parent)) { if ((parent) == ((parent)->u.s.entry_ext_gwy.rbe_parent)->u.s.entry_ext_gwy.rbe_left) ((parent)->u.s.entry_ext_gwy.rbe_parent)->u.s.entry_ext_gwy.rbe_left = (tmp); else ((parent)->u.s.entry_ext_gwy.rbe_parent)->u.s.entry_ext_gwy.rbe_right = (tmp); } else (head)->rbh_root = (tmp); (tmp)->u.s.entry_ext_gwy.rbe_right = (parent); (parent)->u.s.entry_ext_gwy.rbe_parent = (tmp); ; if (((tmp)->u.s.entry_ext_gwy.rbe_parent)) ; } while (0); elm = (head)->rbh_root; break; } } } if (elm) (elm)->u.s.entry_ext_gwy.rbe_color = 0; } struct pf_state *
 pf_state_tree_ext_gwy_RB_REMOVE
# 263 "openbsd3/net/pf.c"
 (struct pf_state_tree_ext_gwy *head, struct pf_state *elm) { struct pf_state *child, *parent, *old = elm; int color; if ((elm)->u.s.entry_ext_gwy.rbe_left == 0L) child = (elm)->u.s.entry_ext_gwy.rbe_right; else if ((elm)->u.s.entry_ext_gwy.rbe_right == 0L) child = (elm)->u.s.entry_ext_gwy.rbe_left; else { struct pf_state *left; elm = (elm)->u.s.entry_ext_gwy.rbe_right; while ((left = (elm)->u.s.entry_ext_gwy.rbe_left)) elm = left; child = (elm)->u.s.entry_ext_gwy.rbe_right; parent = (elm)->u.s.entry_ext_gwy.rbe_parent; color = (elm)->u.s.entry_ext_gwy.rbe_color; if (child) (child)->u.s.entry_ext_gwy.rbe_parent = parent; if (parent) { if ((parent)->u.s.entry_ext_gwy.rbe_left == elm) (parent)->u.s.entry_ext_gwy.rbe_left = child; else (parent)->u.s.entry_ext_gwy.rbe_right = child; ; } else (head)->rbh_root = child; if ((elm)->u.s.entry_ext_gwy.rbe_parent == old) parent = elm; (elm)->u.s.entry_ext_gwy = (old)->u.s.entry_ext_gwy; if ((old)->u.s.entry_ext_gwy.rbe_parent) { if (((old)->u.s.entry_ext_gwy.rbe_parent)->u.s.entry_ext_gwy.rbe_left == old) ((old)->u.s.entry_ext_gwy.rbe_parent)->u.s.entry_ext_gwy.rbe_left = elm; else ((old)->u.s.entry_ext_gwy.rbe_parent)->u.s.entry_ext_gwy.rbe_right = elm; ; } else (head)->rbh_root = elm; ((old)->u.s.entry_ext_gwy.rbe_left)->u.s.entry_ext_gwy.rbe_parent = elm; if ((old)->u.s.entry_ext_gwy.rbe_right) ((old)->u.s.entry_ext_gwy.rbe_right)->u.s.entry_ext_gwy.rbe_parent = elm; if (parent) { left = parent; do { ; } while ((left = (left)->u.s.entry_ext_gwy.rbe_parent)); } goto color; } parent = (elm)->u.s.entry_ext_gwy.rbe_parent; color = (elm)->u.s.entry_ext_gwy.rbe_color; if (child) (child)->u.s.entry_ext_gwy.rbe_parent = parent; if (parent) { if ((parent)->u.s.entry_ext_gwy.rbe_left == elm) (parent)->u.s.entry_ext_gwy.rbe_left = child; else (parent)->u.s.entry_ext_gwy.rbe_right = child; ; } else (head)->rbh_root = child; color: if (color == 0)
 pf_state_tree_ext_gwy_RB_REMOVE_COLOR
# 263 "openbsd3/net/pf.c"
 (head, parent, child); return (old); } struct pf_state *
 pf_state_tree_ext_gwy_RB_INSERT
# 263 "openbsd3/net/pf.c"
 (struct pf_state_tree_ext_gwy *head, struct pf_state *elm) { struct pf_state *tmp; struct pf_state *parent = 0L; int comp = 0; tmp = (head)->rbh_root; while (tmp) { parent = tmp; comp = (pf_state_compare_ext_gwy)(elm, parent); if (comp < 0) tmp = (tmp)->u.s.entry_ext_gwy.rbe_left; else if (comp > 0) tmp = (tmp)->u.s.entry_ext_gwy.rbe_right; else return (tmp); } do { (elm)->u.s.entry_ext_gwy.rbe_parent = parent; (elm)->u.s.entry_ext_gwy.rbe_left = (elm)->u.s.entry_ext_gwy.rbe_right = 0L; (elm)->u.s.entry_ext_gwy.rbe_color = 1; } while (0); if (parent != 0L) { if (comp < 0) (parent)->u.s.entry_ext_gwy.rbe_left = elm; else (parent)->u.s.entry_ext_gwy.rbe_right = elm; ; } else (head)->rbh_root = elm;
 pf_state_tree_ext_gwy_RB_INSERT_COLOR
# 263 "openbsd3/net/pf.c"
 (head, elm); return (0L); } struct pf_state *
 pf_state_tree_ext_gwy_RB_FIND
# 263 "openbsd3/net/pf.c"
 (struct pf_state_tree_ext_gwy *head, struct pf_state *elm) { struct pf_state *tmp = (head)->rbh_root; int comp; while (tmp) { comp = pf_state_compare_ext_gwy(elm, tmp); if (comp < 0) tmp = (tmp)->u.s.entry_ext_gwy.rbe_left; else if (comp > 0) tmp = (tmp)->u.s.entry_ext_gwy.rbe_right; else return (tmp); } return (0L); } struct pf_state *
 pf_state_tree_ext_gwy_RB_NEXT
# 263 "openbsd3/net/pf.c"
 (struct pf_state_tree_ext_gwy *head, struct pf_state *elm) { if ((elm)->u.s.entry_ext_gwy.rbe_right) { elm = (elm)->u.s.entry_ext_gwy.rbe_right; while ((elm)->u.s.entry_ext_gwy.rbe_left) elm = (elm)->u.s.entry_ext_gwy.rbe_left; } else { if ((elm)->u.s.entry_ext_gwy.rbe_parent && (elm == ((elm)->u.s.entry_ext_gwy.rbe_parent)->u.s.entry_ext_gwy.rbe_left)) elm = (elm)->u.s.entry_ext_gwy.rbe_parent; else { while ((elm)->u.s.entry_ext_gwy.rbe_parent && (elm == ((elm)->u.s.entry_ext_gwy.rbe_parent)->u.s.entry_ext_gwy.rbe_right)) elm = (elm)->u.s.entry_ext_gwy.rbe_parent; elm = (elm)->u.s.entry_ext_gwy.rbe_parent; } } return (elm); } struct pf_state *
 pf_state_tree_ext_gwy_RB_MINMAX
# 263 "openbsd3/net/pf.c"
 (struct pf_state_tree_ext_gwy *head, int val) { struct pf_state *tmp = (head)->rbh_root; struct pf_state *parent = 0L; while (tmp) { parent = tmp; if (val < 0) tmp = (tmp)->u.s.entry_ext_gwy.rbe_left; else tmp = (tmp)->u.s.entry_ext_gwy.rbe_right; } return (parent); }
                                                ;
void
 pf_state_tree_id_RB_INSERT_COLOR
# 265 "openbsd3/net/pf.c"
 (struct pf_state_tree_id *head, struct pf_state *elm) { struct pf_state *parent, *gparent, *tmp; while ((parent = (elm)->u.s.entry_id.rbe_parent) && (parent)->u.s.entry_id.rbe_color == 1) { gparent = (parent)->u.s.entry_id.rbe_parent; if (parent == (gparent)->u.s.entry_id.rbe_left) { tmp = (gparent)->u.s.entry_id.rbe_right; if (tmp && (tmp)->u.s.entry_id.rbe_color == 1) { (tmp)->u.s.entry_id.rbe_color = 0; do { (parent)->u.s.entry_id.rbe_color = 0; (gparent)->u.s.entry_id.rbe_color = 1; } while (0); elm = gparent; continue; } if ((parent)->u.s.entry_id.rbe_right == elm) { do { (tmp) = (parent)->u.s.entry_id.rbe_right; if (((parent)->u.s.entry_id.rbe_right = (tmp)->u.s.entry_id.rbe_left)) { ((tmp)->u.s.entry_id.rbe_left)->u.s.entry_id.rbe_parent = (parent); } ; if (((tmp)->u.s.entry_id.rbe_parent = (parent)->u.s.entry_id.rbe_parent)) { if ((parent) == ((parent)->u.s.entry_id.rbe_parent)->u.s.entry_id.rbe_left) ((parent)->u.s.entry_id.rbe_parent)->u.s.entry_id.rbe_left = (tmp); else ((parent)->u.s.entry_id.rbe_parent)->u.s.entry_id.rbe_right = (tmp); } else (head)->rbh_root = (tmp); (tmp)->u.s.entry_id.rbe_left = (parent); (parent)->u.s.entry_id.rbe_parent = (tmp); ; if (((tmp)->u.s.entry_id.rbe_parent)) ; } while (0); tmp = parent; parent = elm; elm = tmp; } do { (parent)->u.s.entry_id.rbe_color = 0; (gparent)->u.s.entry_id.rbe_color = 1; } while (0); do { (tmp) = (gparent)->u.s.entry_id.rbe_left; if (((gparent)->u.s.entry_id.rbe_left = (tmp)->u.s.entry_id.rbe_right)) { ((tmp)->u.s.entry_id.rbe_right)->u.s.entry_id.rbe_parent = (gparent); } ; if (((tmp)->u.s.entry_id.rbe_parent = (gparent)->u.s.entry_id.rbe_parent)) { if ((gparent) == ((gparent)->u.s.entry_id.rbe_parent)->u.s.entry_id.rbe_left) ((gparent)->u.s.entry_id.rbe_parent)->u.s.entry_id.rbe_left = (tmp); else ((gparent)->u.s.entry_id.rbe_parent)->u.s.entry_id.rbe_right = (tmp); } else (head)->rbh_root = (tmp); (tmp)->u.s.entry_id.rbe_right = (gparent); (gparent)->u.s.entry_id.rbe_parent = (tmp); ; if (((tmp)->u.s.entry_id.rbe_parent)) ; } while (0); } else { tmp = (gparent)->u.s.entry_id.rbe_left; if (tmp && (tmp)->u.s.entry_id.rbe_color == 1) { (tmp)->u.s.entry_id.rbe_color = 0; do { (parent)->u.s.entry_id.rbe_color = 0; (gparent)->u.s.entry_id.rbe_color = 1; } while (0); elm = gparent; continue; } if ((parent)->u.s.entry_id.rbe_left == elm) { do { (tmp) = (parent)->u.s.entry_id.rbe_left; if (((parent)->u.s.entry_id.rbe_left = (tmp)->u.s.entry_id.rbe_right)) { ((tmp)->u.s.entry_id.rbe_right)->u.s.entry_id.rbe_parent = (parent); } ; if (((tmp)->u.s.entry_id.rbe_parent = (parent)->u.s.entry_id.rbe_parent)) { if ((parent) == ((parent)->u.s.entry_id.rbe_parent)->u.s.entry_id.rbe_left) ((parent)->u.s.entry_id.rbe_parent)->u.s.entry_id.rbe_left = (tmp); else ((parent)->u.s.entry_id.rbe_parent)->u.s.entry_id.rbe_right = (tmp); } else (head)->rbh_root = (tmp); (tmp)->u.s.entry_id.rbe_right = (parent); (parent)->u.s.entry_id.rbe_parent = (tmp); ; if (((tmp)->u.s.entry_id.rbe_parent)) ; } while (0); tmp = parent; parent = elm; elm = tmp; } do { (parent)->u.s.entry_id.rbe_color = 0; (gparent)->u.s.entry_id.rbe_color = 1; } while (0); do { (tmp) = (gparent)->u.s.entry_id.rbe_right; if (((gparent)->u.s.entry_id.rbe_right = (tmp)->u.s.entry_id.rbe_left)) { ((tmp)->u.s.entry_id.rbe_left)->u.s.entry_id.rbe_parent = (gparent); } ; if (((tmp)->u.s.entry_id.rbe_parent = (gparent)->u.s.entry_id.rbe_parent)) { if ((gparent) == ((gparent)->u.s.entry_id.rbe_parent)->u.s.entry_id.rbe_left) ((gparent)->u.s.entry_id.rbe_parent)->u.s.entry_id.rbe_left = (tmp); else ((gparent)->u.s.entry_id.rbe_parent)->u.s.entry_id.rbe_right = (tmp); } else (head)->rbh_root = (tmp); (tmp)->u.s.entry_id.rbe_left = (gparent); (gparent)->u.s.entry_id.rbe_parent = (tmp); ; if (((tmp)->u.s.entry_id.rbe_parent)) ; } while (0); } } (head->rbh_root)->u.s.entry_id.rbe_color = 0; } void
 pf_state_tree_id_RB_REMOVE_COLOR
# 265 "openbsd3/net/pf.c"
 (struct pf_state_tree_id *head, struct pf_state *parent, struct pf_state *elm) { struct pf_state *tmp; while ((elm == 0L || (elm)->u.s.entry_id.rbe_color == 0) && elm != (head)->rbh_root) { if ((parent)->u.s.entry_id.rbe_left == elm) { tmp = (parent)->u.s.entry_id.rbe_right; if ((tmp)->u.s.entry_id.rbe_color == 1) { do { (tmp)->u.s.entry_id.rbe_color = 0; (parent)->u.s.entry_id.rbe_color = 1; } while (0); do { (tmp) = (parent)->u.s.entry_id.rbe_right; if (((parent)->u.s.entry_id.rbe_right = (tmp)->u.s.entry_id.rbe_left)) { ((tmp)->u.s.entry_id.rbe_left)->u.s.entry_id.rbe_parent = (parent); } ; if (((tmp)->u.s.entry_id.rbe_parent = (parent)->u.s.entry_id.rbe_parent)) { if ((parent) == ((parent)->u.s.entry_id.rbe_parent)->u.s.entry_id.rbe_left) ((parent)->u.s.entry_id.rbe_parent)->u.s.entry_id.rbe_left = (tmp); else ((parent)->u.s.entry_id.rbe_parent)->u.s.entry_id.rbe_right = (tmp); } else (head)->rbh_root = (tmp); (tmp)->u.s.entry_id.rbe_left = (parent); (parent)->u.s.entry_id.rbe_parent = (tmp); ; if (((tmp)->u.s.entry_id.rbe_parent)) ; } while (0); tmp = (parent)->u.s.entry_id.rbe_right; } if (((tmp)->u.s.entry_id.rbe_left == 0L || ((tmp)->u.s.entry_id.rbe_left)->u.s.entry_id.rbe_color == 0) && ((tmp)->u.s.entry_id.rbe_right == 0L || ((tmp)->u.s.entry_id.rbe_right)->u.s.entry_id.rbe_color == 0)) { (tmp)->u.s.entry_id.rbe_color = 1; elm = parent; parent = (elm)->u.s.entry_id.rbe_parent; } else { if ((tmp)->u.s.entry_id.rbe_right == 0L || ((tmp)->u.s.entry_id.rbe_right)->u.s.entry_id.rbe_color == 0) { struct pf_state *oleft; if ((oleft = (tmp)->u.s.entry_id.rbe_left)) (oleft)->u.s.entry_id.rbe_color = 0; (tmp)->u.s.entry_id.rbe_color = 1; do { (oleft) = (tmp)->u.s.entry_id.rbe_left; if (((tmp)->u.s.entry_id.rbe_left = (oleft)->u.s.entry_id.rbe_right)) { ((oleft)->u.s.entry_id.rbe_right)->u.s.entry_id.rbe_parent = (tmp); } ; if (((oleft)->u.s.entry_id.rbe_parent = (tmp)->u.s.entry_id.rbe_parent)) { if ((tmp) == ((tmp)->u.s.entry_id.rbe_parent)->u.s.entry_id.rbe_left) ((tmp)->u.s.entry_id.rbe_parent)->u.s.entry_id.rbe_left = (oleft); else ((tmp)->u.s.entry_id.rbe_parent)->u.s.entry_id.rbe_right = (oleft); } else (head)->rbh_root = (oleft); (oleft)->u.s.entry_id.rbe_right = (tmp); (tmp)->u.s.entry_id.rbe_parent = (oleft); ; if (((oleft)->u.s.entry_id.rbe_parent)) ; } while (0); tmp = (parent)->u.s.entry_id.rbe_right; } (tmp)->u.s.entry_id.rbe_color = (parent)->u.s.entry_id.rbe_color; (parent)->u.s.entry_id.rbe_color = 0; if ((tmp)->u.s.entry_id.rbe_right) ((tmp)->u.s.entry_id.rbe_right)->u.s.entry_id.rbe_color = 0; do { (tmp) = (parent)->u.s.entry_id.rbe_right; if (((parent)->u.s.entry_id.rbe_right = (tmp)->u.s.entry_id.rbe_left)) { ((tmp)->u.s.entry_id.rbe_left)->u.s.entry_id.rbe_parent = (parent); } ; if (((tmp)->u.s.entry_id.rbe_parent = (parent)->u.s.entry_id.rbe_parent)) { if ((parent) == ((parent)->u.s.entry_id.rbe_parent)->u.s.entry_id.rbe_left) ((parent)->u.s.entry_id.rbe_parent)->u.s.entry_id.rbe_left = (tmp); else ((parent)->u.s.entry_id.rbe_parent)->u.s.entry_id.rbe_right = (tmp); } else (head)->rbh_root = (tmp); (tmp)->u.s.entry_id.rbe_left = (parent); (parent)->u.s.entry_id.rbe_parent = (tmp); ; if (((tmp)->u.s.entry_id.rbe_parent)) ; } while (0); elm = (head)->rbh_root; break; } } else { tmp = (parent)->u.s.entry_id.rbe_left; if ((tmp)->u.s.entry_id.rbe_color == 1) { do { (tmp)->u.s.entry_id.rbe_color = 0; (parent)->u.s.entry_id.rbe_color = 1; } while (0); do { (tmp) = (parent)->u.s.entry_id.rbe_left; if (((parent)->u.s.entry_id.rbe_left = (tmp)->u.s.entry_id.rbe_right)) { ((tmp)->u.s.entry_id.rbe_right)->u.s.entry_id.rbe_parent = (parent); } ; if (((tmp)->u.s.entry_id.rbe_parent = (parent)->u.s.entry_id.rbe_parent)) { if ((parent) == ((parent)->u.s.entry_id.rbe_parent)->u.s.entry_id.rbe_left) ((parent)->u.s.entry_id.rbe_parent)->u.s.entry_id.rbe_left = (tmp); else ((parent)->u.s.entry_id.rbe_parent)->u.s.entry_id.rbe_right = (tmp); } else (head)->rbh_root = (tmp); (tmp)->u.s.entry_id.rbe_right = (parent); (parent)->u.s.entry_id.rbe_parent = (tmp); ; if (((tmp)->u.s.entry_id.rbe_parent)) ; } while (0); tmp = (parent)->u.s.entry_id.rbe_left; } if (((tmp)->u.s.entry_id.rbe_left == 0L || ((tmp)->u.s.entry_id.rbe_left)->u.s.entry_id.rbe_color == 0) && ((tmp)->u.s.entry_id.rbe_right == 0L || ((tmp)->u.s.entry_id.rbe_right)->u.s.entry_id.rbe_color == 0)) { (tmp)->u.s.entry_id.rbe_color = 1; elm = parent; parent = (elm)->u.s.entry_id.rbe_parent; } else { if ((tmp)->u.s.entry_id.rbe_left == 0L || ((tmp)->u.s.entry_id.rbe_left)->u.s.entry_id.rbe_color == 0) { struct pf_state *oright; if ((oright = (tmp)->u.s.entry_id.rbe_right)) (oright)->u.s.entry_id.rbe_color = 0; (tmp)->u.s.entry_id.rbe_color = 1; do { (oright) = (tmp)->u.s.entry_id.rbe_right; if (((tmp)->u.s.entry_id.rbe_right = (oright)->u.s.entry_id.rbe_left)) { ((oright)->u.s.entry_id.rbe_left)->u.s.entry_id.rbe_parent = (tmp); } ; if (((oright)->u.s.entry_id.rbe_parent = (tmp)->u.s.entry_id.rbe_parent)) { if ((tmp) == ((tmp)->u.s.entry_id.rbe_parent)->u.s.entry_id.rbe_left) ((tmp)->u.s.entry_id.rbe_parent)->u.s.entry_id.rbe_left = (oright); else ((tmp)->u.s.entry_id.rbe_parent)->u.s.entry_id.rbe_right = (oright); } else (head)->rbh_root = (oright); (oright)->u.s.entry_id.rbe_left = (tmp); (tmp)->u.s.entry_id.rbe_parent = (oright); ; if (((oright)->u.s.entry_id.rbe_parent)) ; } while (0); tmp = (parent)->u.s.entry_id.rbe_left; } (tmp)->u.s.entry_id.rbe_color = (parent)->u.s.entry_id.rbe_color; (parent)->u.s.entry_id.rbe_color = 0; if ((tmp)->u.s.entry_id.rbe_left) ((tmp)->u.s.entry_id.rbe_left)->u.s.entry_id.rbe_color = 0; do { (tmp) = (parent)->u.s.entry_id.rbe_left; if (((parent)->u.s.entry_id.rbe_left = (tmp)->u.s.entry_id.rbe_right)) { ((tmp)->u.s.entry_id.rbe_right)->u.s.entry_id.rbe_parent = (parent); } ; if (((tmp)->u.s.entry_id.rbe_parent = (parent)->u.s.entry_id.rbe_parent)) { if ((parent) == ((parent)->u.s.entry_id.rbe_parent)->u.s.entry_id.rbe_left) ((parent)->u.s.entry_id.rbe_parent)->u.s.entry_id.rbe_left = (tmp); else ((parent)->u.s.entry_id.rbe_parent)->u.s.entry_id.rbe_right = (tmp); } else (head)->rbh_root = (tmp); (tmp)->u.s.entry_id.rbe_right = (parent); (parent)->u.s.entry_id.rbe_parent = (tmp); ; if (((tmp)->u.s.entry_id.rbe_parent)) ; } while (0); elm = (head)->rbh_root; break; } } } if (elm) (elm)->u.s.entry_id.rbe_color = 0; } struct pf_state *
 pf_state_tree_id_RB_REMOVE
# 265 "openbsd3/net/pf.c"
 (struct pf_state_tree_id *head, struct pf_state *elm) { struct pf_state *child, *parent, *old = elm; int color; if ((elm)->u.s.entry_id.rbe_left == 0L) child = (elm)->u.s.entry_id.rbe_right; else if ((elm)->u.s.entry_id.rbe_right == 0L) child = (elm)->u.s.entry_id.rbe_left; else { struct pf_state *left; elm = (elm)->u.s.entry_id.rbe_right; while ((left = (elm)->u.s.entry_id.rbe_left)) elm = left; child = (elm)->u.s.entry_id.rbe_right; parent = (elm)->u.s.entry_id.rbe_parent; color = (elm)->u.s.entry_id.rbe_color; if (child) (child)->u.s.entry_id.rbe_parent = parent; if (parent) { if ((parent)->u.s.entry_id.rbe_left == elm) (parent)->u.s.entry_id.rbe_left = child; else (parent)->u.s.entry_id.rbe_right = child; ; } else (head)->rbh_root = child; if ((elm)->u.s.entry_id.rbe_parent == old) parent = elm; (elm)->u.s.entry_id = (old)->u.s.entry_id; if ((old)->u.s.entry_id.rbe_parent) { if (((old)->u.s.entry_id.rbe_parent)->u.s.entry_id.rbe_left == old) ((old)->u.s.entry_id.rbe_parent)->u.s.entry_id.rbe_left = elm; else ((old)->u.s.entry_id.rbe_parent)->u.s.entry_id.rbe_right = elm; ; } else (head)->rbh_root = elm; ((old)->u.s.entry_id.rbe_left)->u.s.entry_id.rbe_parent = elm; if ((old)->u.s.entry_id.rbe_right) ((old)->u.s.entry_id.rbe_right)->u.s.entry_id.rbe_parent = elm; if (parent) { left = parent; do { ; } while ((left = (left)->u.s.entry_id.rbe_parent)); } goto color; } parent = (elm)->u.s.entry_id.rbe_parent; color = (elm)->u.s.entry_id.rbe_color; if (child) (child)->u.s.entry_id.rbe_parent = parent; if (parent) { if ((parent)->u.s.entry_id.rbe_left == elm) (parent)->u.s.entry_id.rbe_left = child; else (parent)->u.s.entry_id.rbe_right = child; ; } else (head)->rbh_root = child; color: if (color == 0)
 pf_state_tree_id_RB_REMOVE_COLOR
# 265 "openbsd3/net/pf.c"
 (head, parent, child); return (old); } struct pf_state *
 pf_state_tree_id_RB_INSERT
# 265 "openbsd3/net/pf.c"
 (struct pf_state_tree_id *head, struct pf_state *elm) { struct pf_state *tmp; struct pf_state *parent = 0L; int comp = 0; tmp = (head)->rbh_root; while (tmp) { parent = tmp; comp = (pf_state_compare_id)(elm, parent); if (comp < 0) tmp = (tmp)->u.s.entry_id.rbe_left; else if (comp > 0) tmp = (tmp)->u.s.entry_id.rbe_right; else return (tmp); } do { (elm)->u.s.entry_id.rbe_parent = parent; (elm)->u.s.entry_id.rbe_left = (elm)->u.s.entry_id.rbe_right = 0L; (elm)->u.s.entry_id.rbe_color = 1; } while (0); if (parent != 0L) { if (comp < 0) (parent)->u.s.entry_id.rbe_left = elm; else (parent)->u.s.entry_id.rbe_right = elm; ; } else (head)->rbh_root = elm;
 pf_state_tree_id_RB_INSERT_COLOR
# 265 "openbsd3/net/pf.c"
 (head, elm); return (0L); } struct pf_state *
 pf_state_tree_id_RB_FIND
# 265 "openbsd3/net/pf.c"
 (struct pf_state_tree_id *head, struct pf_state *elm) { struct pf_state *tmp = (head)->rbh_root; int comp; while (tmp) { comp = pf_state_compare_id(elm, tmp); if (comp < 0) tmp = (tmp)->u.s.entry_id.rbe_left; else if (comp > 0) tmp = (tmp)->u.s.entry_id.rbe_right; else return (tmp); } return (0L); } struct pf_state *
 pf_state_tree_id_RB_NEXT
# 265 "openbsd3/net/pf.c"
 (struct pf_state_tree_id *head, struct pf_state *elm) { if ((elm)->u.s.entry_id.rbe_right) { elm = (elm)->u.s.entry_id.rbe_right; while ((elm)->u.s.entry_id.rbe_left) elm = (elm)->u.s.entry_id.rbe_left; } else { if ((elm)->u.s.entry_id.rbe_parent && (elm == ((elm)->u.s.entry_id.rbe_parent)->u.s.entry_id.rbe_left)) elm = (elm)->u.s.entry_id.rbe_parent; else { while ((elm)->u.s.entry_id.rbe_parent && (elm == ((elm)->u.s.entry_id.rbe_parent)->u.s.entry_id.rbe_right)) elm = (elm)->u.s.entry_id.rbe_parent; elm = (elm)->u.s.entry_id.rbe_parent; } } return (elm); } struct pf_state *
 pf_state_tree_id_RB_MINMAX
# 265 "openbsd3/net/pf.c"
 (struct pf_state_tree_id *head, int val) { struct pf_state *tmp = (head)->rbh_root; struct pf_state *parent = 0L; while (tmp) { parent = tmp; if (val < 0) tmp = (tmp)->u.s.entry_id.rbe_left; else tmp = (tmp)->u.s.entry_id.rbe_right; } return (parent); }
                                      ;

static __inline int
pf_src_compare(struct pf_src_node *a, struct pf_src_node *b)
{
 int diff;

 if (a->rule.ptr > b->rule.ptr)
  return (1);
 if (a->rule.ptr < b->rule.ptr)
  return (-1);
 if ((diff = a->af - b->af) != 0)
  return (diff);
 switch (a->af) {

 case 2:
  if (a->addr.pfa.addr32[0] > b->addr.pfa.addr32[0])
   return (1);
  if (a->addr.pfa.addr32[0] < b->addr.pfa.addr32[0])
   return (-1);
  break;


 case 24:
  if (a->addr.pfa.addr32[3] > b->addr.pfa.addr32[3])
   return (1);
  if (a->addr.pfa.addr32[3] < b->addr.pfa.addr32[3])
   return (-1);
  if (a->addr.pfa.addr32[2] > b->addr.pfa.addr32[2])
   return (1);
  if (a->addr.pfa.addr32[2] < b->addr.pfa.addr32[2])
   return (-1);
  if (a->addr.pfa.addr32[1] > b->addr.pfa.addr32[1])
   return (1);
  if (a->addr.pfa.addr32[1] < b->addr.pfa.addr32[1])
   return (-1);
  if (a->addr.pfa.addr32[0] > b->addr.pfa.addr32[0])
   return (1);
  if (a->addr.pfa.addr32[0] < b->addr.pfa.addr32[0])
   return (-1);
  break;

 }
 return (0);
}

static __inline int
pf_state_compare_lan_ext(struct pf_state *a, struct pf_state *b)
{
 int diff;

 if ((diff = a->proto - b->proto) != 0)
  return (diff);
 if ((diff = a->af - b->af) != 0)
  return (diff);
 switch (a->af) {

 case 2:
  if (a->lan.addr.pfa.addr32[0] > b->lan.addr.pfa.addr32[0])
   return (1);
  if (a->lan.addr.pfa.addr32[0] < b->lan.addr.pfa.addr32[0])
   return (-1);
  if (a->ext.addr.pfa.addr32[0] > b->ext.addr.pfa.addr32[0])
   return (1);
  if (a->ext.addr.pfa.addr32[0] < b->ext.addr.pfa.addr32[0])
   return (-1);
  break;


 case 24:
  if (a->lan.addr.pfa.addr32[3] > b->lan.addr.pfa.addr32[3])
   return (1);
  if (a->lan.addr.pfa.addr32[3] < b->lan.addr.pfa.addr32[3])
   return (-1);
  if (a->ext.addr.pfa.addr32[3] > b->ext.addr.pfa.addr32[3])
   return (1);
  if (a->ext.addr.pfa.addr32[3] < b->ext.addr.pfa.addr32[3])
   return (-1);
  if (a->lan.addr.pfa.addr32[2] > b->lan.addr.pfa.addr32[2])
   return (1);
  if (a->lan.addr.pfa.addr32[2] < b->lan.addr.pfa.addr32[2])
   return (-1);
  if (a->ext.addr.pfa.addr32[2] > b->ext.addr.pfa.addr32[2])
   return (1);
  if (a->ext.addr.pfa.addr32[2] < b->ext.addr.pfa.addr32[2])
   return (-1);
  if (a->lan.addr.pfa.addr32[1] > b->lan.addr.pfa.addr32[1])
   return (1);
  if (a->lan.addr.pfa.addr32[1] < b->lan.addr.pfa.addr32[1])
   return (-1);
  if (a->ext.addr.pfa.addr32[1] > b->ext.addr.pfa.addr32[1])
   return (1);
  if (a->ext.addr.pfa.addr32[1] < b->ext.addr.pfa.addr32[1])
   return (-1);
  if (a->lan.addr.pfa.addr32[0] > b->lan.addr.pfa.addr32[0])
   return (1);
  if (a->lan.addr.pfa.addr32[0] < b->lan.addr.pfa.addr32[0])
   return (-1);
  if (a->ext.addr.pfa.addr32[0] > b->ext.addr.pfa.addr32[0])
   return (1);
  if (a->ext.addr.pfa.addr32[0] < b->ext.addr.pfa.addr32[0])
   return (-1);
  break;

 }

 if ((diff = a->lan.port - b->lan.port) != 0)
  return (diff);
 if ((diff = a->ext.port - b->ext.port) != 0)
  return (diff);

 return (0);
}

static __inline int
pf_state_compare_ext_gwy(struct pf_state *a, struct pf_state *b)
{
 int diff;

 if ((diff = a->proto - b->proto) != 0)
  return (diff);
 if ((diff = a->af - b->af) != 0)
  return (diff);
 switch (a->af) {

 case 2:
  if (a->ext.addr.pfa.addr32[0] > b->ext.addr.pfa.addr32[0])
   return (1);
  if (a->ext.addr.pfa.addr32[0] < b->ext.addr.pfa.addr32[0])
   return (-1);
  if (a->gwy.addr.pfa.addr32[0] > b->gwy.addr.pfa.addr32[0])
   return (1);
  if (a->gwy.addr.pfa.addr32[0] < b->gwy.addr.pfa.addr32[0])
   return (-1);
  break;


 case 24:
  if (a->ext.addr.pfa.addr32[3] > b->ext.addr.pfa.addr32[3])
   return (1);
  if (a->ext.addr.pfa.addr32[3] < b->ext.addr.pfa.addr32[3])
   return (-1);
  if (a->gwy.addr.pfa.addr32[3] > b->gwy.addr.pfa.addr32[3])
   return (1);
  if (a->gwy.addr.pfa.addr32[3] < b->gwy.addr.pfa.addr32[3])
   return (-1);
  if (a->ext.addr.pfa.addr32[2] > b->ext.addr.pfa.addr32[2])
   return (1);
  if (a->ext.addr.pfa.addr32[2] < b->ext.addr.pfa.addr32[2])
   return (-1);
  if (a->gwy.addr.pfa.addr32[2] > b->gwy.addr.pfa.addr32[2])
   return (1);
  if (a->gwy.addr.pfa.addr32[2] < b->gwy.addr.pfa.addr32[2])
   return (-1);
  if (a->ext.addr.pfa.addr32[1] > b->ext.addr.pfa.addr32[1])
   return (1);
  if (a->ext.addr.pfa.addr32[1] < b->ext.addr.pfa.addr32[1])
   return (-1);
  if (a->gwy.addr.pfa.addr32[1] > b->gwy.addr.pfa.addr32[1])
   return (1);
  if (a->gwy.addr.pfa.addr32[1] < b->gwy.addr.pfa.addr32[1])
   return (-1);
  if (a->ext.addr.pfa.addr32[0] > b->ext.addr.pfa.addr32[0])
   return (1);
  if (a->ext.addr.pfa.addr32[0] < b->ext.addr.pfa.addr32[0])
   return (-1);
  if (a->gwy.addr.pfa.addr32[0] > b->gwy.addr.pfa.addr32[0])
   return (1);
  if (a->gwy.addr.pfa.addr32[0] < b->gwy.addr.pfa.addr32[0])
   return (-1);
  break;

 }

 if ((diff = a->ext.port - b->ext.port) != 0)
  return (diff);
 if ((diff = a->gwy.port - b->gwy.port) != 0)
  return (diff);

 return (0);
}

static __inline int
pf_state_compare_id(struct pf_state *a, struct pf_state *b)
{
 if (a->id > b->id)
  return (1);
 if (a->id < b->id)
  return (-1);
 if (a->creatorid > b->creatorid)
  return (1);
 if (a->creatorid < b->creatorid)
  return (-1);

 return (0);
}


void
pf_addrcpy(struct pf_addr *dst, struct pf_addr *src, sa_family_t af)
{
 switch (af) {

 case 2:
  dst->pfa.addr32[0] = src->pfa.addr32[0];
  break;

 case 24:
  dst->pfa.addr32[0] = src->pfa.addr32[0];
  dst->pfa.addr32[1] = src->pfa.addr32[1];
  dst->pfa.addr32[2] = src->pfa.addr32[2];
  dst->pfa.addr32[3] = src->pfa.addr32[3];
  break;
 }
}


struct pf_state *
pf_find_state_byid(struct pf_state *key)
{
 global_pf_status[get_stack_id()].fcounters[0]++;
 return (pf_state_tree_id_RB_FIND(&global_tree_id[get_stack_id()], key));
}

struct pf_state *
pf_find_state_recurse(struct pfi_kif *kif, struct pf_state *key, u_int8_t tree)
{
 struct pf_state *s;

 global_pf_status[get_stack_id()].fcounters[0]++;

 switch (tree) {
 case PF_LAN_EXT:
  for (; kif != 0L; kif = kif->pfik_parent) {
   s =
 pf_state_tree_lan_ext_RB_FIND
# 500 "openbsd3/net/pf.c"
       (&kif->pfik_lan_ext, key)
                               ;
   if (s != 0L)
    return (s);
  }
  return (0L);
 case PF_EXT_GWY:
  for (; kif != 0L; kif = kif->pfik_parent) {
   s =
 pf_state_tree_ext_gwy_RB_FIND
# 508 "openbsd3/net/pf.c"
       (&kif->pfik_ext_gwy, key)
                               ;
   if (s != 0L)
    return (s);
  }
  return (0L);
 default:
  panic("pf_find_state_recurse");
 }
}

struct pf_state *
pf_find_state_all(struct pf_state *key, u_int8_t tree, int *more)
{
 struct pf_state *s, *ss = 0L;
 struct pfi_kif *kif;

 global_pf_status[get_stack_id()].fcounters[0]++;

 switch (tree) {
 case PF_LAN_EXT:
  for((kif) = ((&global_pfi_statehead[get_stack_id()])->tqh_first); (kif) != 0L; (kif) = ((kif)->pfik_w_states.tqe_next)) {
   s =
 pf_state_tree_lan_ext_RB_FIND
# 530 "openbsd3/net/pf.c"
       (&kif->pfik_lan_ext, key)
                               ;
   if (s == 0L)
    continue;
   if (more == 0L)
    return (s);
   ss = s;
   (*more)++;
  }
  return (ss);
 case PF_EXT_GWY:
  for((kif) = ((&global_pfi_statehead[get_stack_id()])->tqh_first); (kif) != 0L; (kif) = ((kif)->pfik_w_states.tqe_next)) {
   s =
 pf_state_tree_ext_gwy_RB_FIND
# 542 "openbsd3/net/pf.c"
       (&kif->pfik_ext_gwy, key)
                               ;
   if (s == 0L)
    continue;
   if (more == 0L)
    return (s);
   ss = s;
   (*more)++;
  }
  return (ss);
 default:
  panic("pf_find_state_all");
 }
}

int
pf_insert_src_node(struct pf_src_node **sn, struct pf_rule *rule,
    struct pf_addr *src, sa_family_t af)
{
 struct pf_src_node k;

 if (*sn == 0L) {
  k.af = af;
  pf_addrcpy(&k.addr, src, af);
  if (rule->rule_flag & 0x0040 ||
      rule->rpool.opts & 0x20)
   k.rule.ptr = rule;
  else
   k.rule.ptr = 0L;
  global_pf_status[get_stack_id()].scounters[0]++;
  *sn = pf_src_tree_RB_FIND(&global_tree_src_tracking[get_stack_id()], &k);
 }
 if (*sn == 0L) {
  if (!rule->max_src_nodes ||
      rule->src_nodes < rule->max_src_nodes)
   (*sn) = pool_get(&global_pf_src_tree_pl[get_stack_id()], 0x00);
  if ((*sn) == 0L)
   return (-1);
  bzero(*sn, sizeof(struct pf_src_node));
  (*sn)->af = af;
  if (rule->rule_flag & 0x0040 ||
      rule->rpool.opts & 0x20)
   (*sn)->rule.ptr = rule;
  else
   (*sn)->rule.ptr = 0L;
  pf_addrcpy(&(*sn)->addr, src, af);
  if (
 pf_src_tree_RB_INSERT
# 588 "openbsd3/net/pf.c"
      (&global_tree_src_tracking[get_stack_id()], *sn)
                               != 0L) {
   if (global_pf_status[get_stack_id()].debug >= PF_DEBUG_MISC) {
    printf("pf: src_tree insert failed: ");
    pf_print_host(&(*sn)->addr, 0, af);
    printf("\n");
   }
   pool_put(&global_pf_src_tree_pl[get_stack_id()], *sn);
   return (-1);
  }
  (*sn)->creation = time.tv_sec;
  (*sn)->ruletype = rule->action;
  if ((*sn)->rule.ptr != 0L)
   (*sn)->rule.ptr->src_nodes++;
  global_pf_status[get_stack_id()].scounters[1]++;
  global_pf_status[get_stack_id()].src_nodes++;
 } else {
  if (rule->max_src_states &&
      (*sn)->states >= rule->max_src_states)
   return (-1);
 }
 return (0);
}

int
pf_insert_state(struct pfi_kif *kif, struct pf_state *state)
{

 state->u.s.kif = kif;
 if (pf_state_tree_lan_ext_RB_INSERT(&kif->pfik_lan_ext, state)) {
  if (global_pf_status[get_stack_id()].debug >= PF_DEBUG_MISC) {
   printf("pf: state insert failed: tree_lan_ext");
   printf(" lan: ");
   pf_print_host(&state->lan.addr, state->lan.port,
       state->af);
   printf(" gwy: ");
   pf_print_host(&state->gwy.addr, state->gwy.port,
       state->af);
   printf(" ext: ");
   pf_print_host(&state->ext.addr, state->ext.port,
       state->af);
   if (state->sync_flags & 0x02)
    printf(" (from sync)");
   printf("\n");
  }
  return (-1);
 }

 if (pf_state_tree_ext_gwy_RB_INSERT(&kif->pfik_ext_gwy, state)) {
  if (global_pf_status[get_stack_id()].debug >= PF_DEBUG_MISC) {
   printf("pf: state insert failed: tree_ext_gwy");
   printf(" lan: ");
   pf_print_host(&state->lan.addr, state->lan.port,
       state->af);
   printf(" gwy: ");
   pf_print_host(&state->gwy.addr, state->gwy.port,
       state->af);
   printf(" ext: ");
   pf_print_host(&state->ext.addr, state->ext.port,
       state->af);
   if (state->sync_flags & 0x02)
    printf(" (from sync)");
   printf("\n");
  }
  pf_state_tree_lan_ext_RB_REMOVE(&kif->pfik_lan_ext, state);
  return (-1);
 }

 if (state->id == 0 && state->creatorid == 0) {
  state->id = __extension__({ u_int64_t __swap64_x = (global_pf_status[get_stack_id()].stateid++); __builtin_constant_p(global_pf_status[get_stack_id()].stateid++) ? __extension__({ u_int64_t __swap64gen_x = (__swap64_x); (u_int64_t)((__swap64gen_x & 0xff) << 56 | (__swap64gen_x & 0xff00ULL) << 40 | (__swap64gen_x & 0xff0000ULL) << 24 | (__swap64gen_x & 0xff000000ULL) << 8 | (__swap64gen_x & 0xff00000000ULL) >> 8 | (__swap64gen_x & 0xff0000000000ULL) >> 24 | (__swap64gen_x & 0xff000000000000ULL) >> 40 | (__swap64gen_x & 0xff00000000000000ULL) >> 56); }) : ({ u_int64_t __swap64md_x = (__swap64_x); (u_int64_t)({ u_int32_t __swap32md_x = (__swap64md_x >> 32); __asm ("bswap %1" : "+r" (__swap32md_x)); __swap32md_x; }) | (u_int64_t)({ u_int32_t __swap32md_x = (__swap64md_x & 0xffffffff); __asm ("bswap %1" : "+r" (__swap32md_x)); __swap32md_x; }) << 32; }); });
  state->creatorid = global_pf_status[get_stack_id()].hostid;
 }
 if (pf_state_tree_id_RB_INSERT(&global_tree_id[get_stack_id()], state) != 0L) {
  if (global_pf_status[get_stack_id()].debug >= PF_DEBUG_MISC) {
   printf("pf: state insert failed: "
       "id: %016llx creatorid: %08x",
       __extension__({ u_int64_t __swap64_x = (state->id); __builtin_constant_p(state->id) ? __extension__({ u_int64_t __swap64gen_x = (__swap64_x); (u_int64_t)((__swap64gen_x & 0xff) << 56 | (__swap64gen_x & 0xff00ULL) << 40 | (__swap64gen_x & 0xff0000ULL) << 24 | (__swap64gen_x & 0xff000000ULL) << 8 | (__swap64gen_x & 0xff00000000ULL) >> 8 | (__swap64gen_x & 0xff0000000000ULL) >> 24 | (__swap64gen_x & 0xff000000000000ULL) >> 40 | (__swap64gen_x & 0xff00000000000000ULL) >> 56); }) : ({ u_int64_t __swap64md_x = (__swap64_x); (u_int64_t)({ u_int32_t __swap32md_x = (__swap64md_x >> 32); __asm ("bswap %1" : "+r" (__swap32md_x)); __swap32md_x; }) | (u_int64_t)({ u_int32_t __swap32md_x = (__swap64md_x & 0xffffffff); __asm ("bswap %1" : "+r" (__swap32md_x)); __swap32md_x; }) << 32; }); }), __extension__({ u_int32_t __swap32_x = (state->creatorid); __builtin_constant_p(state->creatorid) ? __extension__({ u_int32_t __swap32gen_x = (__swap32_x); (u_int32_t)((__swap32gen_x & 0xff) << 24 | (__swap32gen_x & 0xff00) << 8 | (__swap32gen_x & 0xff0000) >> 8 | (__swap32gen_x & 0xff000000) >> 24); }) : ({ u_int32_t __swap32md_x = (__swap32_x); __asm ("bswap %1" : "+r" (__swap32md_x)); __swap32md_x; }); }));
   if (state->sync_flags & 0x02)
    printf(" (from sync)");
   printf("\n");
  }
  pf_state_tree_lan_ext_RB_REMOVE(&kif->pfik_lan_ext, state);
  pf_state_tree_ext_gwy_RB_REMOVE(&kif->pfik_ext_gwy, state);
  return (-1);
 }
 do { if (((state)->u.s.entry_updates.tqe_next = (&global_state_updates[get_stack_id()])->tqh_first) != 0L) (&global_state_updates[get_stack_id()])->tqh_first->u.s.entry_updates.tqe_prev = &(state)->u.s.entry_updates.tqe_next; else (&global_state_updates[get_stack_id()])->tqh_last = &(state)->u.s.entry_updates.tqe_next; (&global_state_updates[get_stack_id()])->tqh_first = (state); (state)->u.s.entry_updates.tqe_prev = &(&global_state_updates[get_stack_id()])->tqh_first; } while (0);

 global_pf_status[get_stack_id()].fcounters[1]++;
 global_pf_status[get_stack_id()].states++;
 pfi_attach_state(kif);

 do { if ((state->rule.ptr->rule_flag & 0x0010) || (state->proto == 240)) state->sync_flags |= 0x01; else if (!state->sync_flags) pfsync_pack_state(1, (state), 1); state->sync_flags &= ~0x02; } while (0);

 return (0);
}

void
pf_purge_timeout(void *arg)
{
 struct timeout *to = arg;
 int s;

 s = splraise((0x20 + ((1) << 4)));
 pf_purge_expired_states();
 pf_purge_expired_fragments();
 pf_purge_expired_src_nodes();
 splx(s);

 timeout_add(to, global_pf_default_rule[get_stack_id()].timeout[PFTM_INTERVAL] * global_hz[get_stack_id()]);
}

u_int32_t
pf_state_expires(const struct pf_state *state)
{
 u_int32_t timeout;
 u_int32_t start;
 u_int32_t end;
 u_int32_t states;


 if (state->timeout == PFTM_PURGE)
  return (time.tv_sec);
 if (state->timeout == PFTM_UNTIL_PACKET)
  return (0);
 ((state->timeout < PFTM_MAX) ? (void)0 : __assert("diagnostic ", "openbsd3/net/pf.c", 712, "state->timeout < PFTM_MAX"));
 timeout = state->rule.ptr->timeout[state->timeout];
 if (!timeout)
  timeout = global_pf_default_rule[get_stack_id()].timeout[state->timeout];
 start = state->rule.ptr->timeout[PFTM_ADAPTIVE_START];
 if (start) {
  end = state->rule.ptr->timeout[PFTM_ADAPTIVE_END];
  states = state->rule.ptr->states;
 } else {
  start = global_pf_default_rule[get_stack_id()].timeout[PFTM_ADAPTIVE_START];
  end = global_pf_default_rule[get_stack_id()].timeout[PFTM_ADAPTIVE_END];
  states = global_pf_status[get_stack_id()].states;
 }
 if (end && states > start && start < end) {
  if (states < end)
   return (state->expire + timeout * (end - states) /
       (end - start));
  else
   return (time.tv_sec);
 }
 return (state->expire + timeout);
}

void
pf_purge_expired_src_nodes(void)
{
  struct pf_src_node *cur, *next;

  for (cur = pf_src_tree_RB_MINMAX(&global_tree_src_tracking[get_stack_id()], -1); cur; cur = next) {
   next = pf_src_tree_RB_NEXT(&global_tree_src_tracking[get_stack_id()], cur);

   if (cur->states <= 0 && cur->expire <= time.tv_sec) {
    if (cur->rule.ptr != 0L) {
     cur->rule.ptr->src_nodes--;
     if (cur->rule.ptr->states <= 0 &&
         cur->rule.ptr->max_src_nodes <= 0)
      pf_rm_rule(0L, cur->rule.ptr);
    }
    pf_src_tree_RB_REMOVE(&global_tree_src_tracking[get_stack_id()], cur);
    global_pf_status[get_stack_id()].scounters[2]++;
    global_pf_status[get_stack_id()].src_nodes--;
    pool_put(&global_pf_src_tree_pl[get_stack_id()], cur);
   }
  }
}

void
pf_src_tree_remove_state(struct pf_state *s)
{
 u_int32_t timeout;

 if (s->src_node != 0L) {
  if (--s->src_node->states <= 0) {
   timeout = s->rule.ptr->timeout[PFTM_SRC_NODE];
   if (!timeout)
    timeout =
        global_pf_default_rule[get_stack_id()].timeout[PFTM_SRC_NODE];
   s->src_node->expire = time.tv_sec + timeout;
  }
 }
 if (s->nat_src_node != s->src_node && s->nat_src_node != 0L) {
  if (--s->nat_src_node->states <= 0) {
   timeout = s->rule.ptr->timeout[PFTM_SRC_NODE];
   if (!timeout)
    timeout =
        global_pf_default_rule[get_stack_id()].timeout[PFTM_SRC_NODE];
   s->nat_src_node->expire = time.tv_sec + timeout;
  }
 }
 s->src_node = s->nat_src_node = 0L;
}

void
pf_purge_expired_states(void)
{
 struct pf_state *cur, *next;

 for (cur = pf_state_tree_id_RB_MINMAX(&global_tree_id[get_stack_id()], -1);
     cur; cur = next) {
  next = pf_state_tree_id_RB_NEXT(&global_tree_id[get_stack_id()], cur);

  if (pf_state_expires(cur) <= time.tv_sec) {
   if (cur->src.state == ((11)+1))
    pf_send_tcp(cur->rule.ptr, cur->af,
        &cur->ext.addr, &cur->lan.addr,
        cur->ext.port, cur->lan.port,
        cur->src.seqhi, cur->src.seqlo + 1, 0,
        0x04|0x10, 0, 0);
  
 pf_state_tree_ext_gwy_RB_REMOVE
# 800 "openbsd3/net/pf.c"
   (&cur->u.s.kif->pfik_ext_gwy, cur)
                                        ;
  
 pf_state_tree_lan_ext_RB_REMOVE
# 802 "openbsd3/net/pf.c"
   (&cur->u.s.kif->pfik_lan_ext, cur)
                                        ;
   pf_state_tree_id_RB_REMOVE(&global_tree_id[get_stack_id()], cur);

   do { if (!cur->sync_flags) pfsync_pack_state(3, (cur), 1); cur->sync_flags &= ~0x02; } while (0);

   pf_src_tree_remove_state(cur);
   if (--cur->rule.ptr->states <= 0 &&
       cur->rule.ptr->src_nodes <= 0)
    pf_rm_rule(0L, cur->rule.ptr);
   if (cur->nat_rule.ptr != 0L)
    if (--cur->nat_rule.ptr->states <= 0 &&
     cur->nat_rule.ptr->src_nodes <= 0)
     pf_rm_rule(0L, cur->nat_rule.ptr);
   if (cur->anchor.ptr != 0L)
    if (--cur->anchor.ptr->states <= 0)
     pf_rm_rule(0L, cur->anchor.ptr);
   pf_normalize_tcp_cleanup(cur);
   pfi_detach_state(cur->u.s.kif);
   do { if (((cur)->u.s.entry_updates.tqe_next) != 0L) (cur)->u.s.entry_updates.tqe_next->u.s.entry_updates.tqe_prev = (cur)->u.s.entry_updates.tqe_prev; else (&global_state_updates[get_stack_id()])->tqh_last = (cur)->u.s.entry_updates.tqe_prev; *(cur)->u.s.entry_updates.tqe_prev = (cur)->u.s.entry_updates.tqe_next; } while (0);
   pool_put(&global_pf_state_pl[get_stack_id()], cur);
   global_pf_status[get_stack_id()].fcounters[2]++;
   global_pf_status[get_stack_id()].states--;
  }
 }
}

int
pf_tbladdr_setup(struct pf_ruleset *rs, struct pf_addr_wrap *aw)
{
 if (aw->type != PF_ADDR_TABLE)
  return (0);
 if ((aw->p.tbl = pfr_attach_table(rs, aw->v.tblname)) == 0L)
  return (1);
 return (0);
}

void
pf_tbladdr_remove(struct pf_addr_wrap *aw)
{
 if (aw->type != PF_ADDR_TABLE || aw->p.tbl == 0L)
  return;
 pfr_detach_table(aw->p.tbl);
 aw->p.tbl = 0L;
}

void
pf_tbladdr_copyout(struct pf_addr_wrap *aw)
{
 struct pfr_ktable *kt = aw->p.tbl;

 if (aw->type != PF_ADDR_TABLE || kt == 0L)
  return;
 if (!(kt->pfrkt_ts.pfrts_t.pfrt_flags & 0x00000004) && kt->pfrkt_root != 0L)
  kt = kt->pfrkt_root;
 aw->p.tbl = 0L;
 aw->p.tblcnt = (kt->pfrkt_ts.pfrts_t.pfrt_flags & 0x00000004) ?
  kt->pfrkt_ts.pfrts_cnt : -1;
}

void
pf_print_host(struct pf_addr *addr, u_int16_t p, sa_family_t af)
{
 switch (af) {

 case 2: {
  u_int32_t a = __extension__({ u_int32_t __swap32_x = (addr->pfa.addr32[0]); __builtin_constant_p(addr->pfa.addr32[0]) ? __extension__({ u_int32_t __swap32gen_x = (__swap32_x); (u_int32_t)((__swap32gen_x & 0xff) << 24 | (__swap32gen_x & 0xff00) << 8 | (__swap32gen_x & 0xff0000) >> 8 | (__swap32gen_x & 0xff000000) >> 24); }) : ({ u_int32_t __swap32md_x = (__swap32_x); __asm ("bswap %1" : "+r" (__swap32md_x)); __swap32md_x; }); });
  printf("%u.%u.%u.%u", (a>>24)&255, (a>>16)&255,
      (a>>8)&255, a&255);
  if (p) {
   p = __extension__({ u_int16_t __swap16_x = (p); __builtin_constant_p(p) ? __extension__({ u_int16_t __swap16gen_x = (__swap16_x); (u_int16_t)((__swap16gen_x & 0xff) << 8 | (__swap16gen_x & 0xff00) >> 8); }) : ({ u_int16_t __swap16md_x = (__swap16_x); __asm ("rorw $8, %w1" : "+r" (__swap16md_x)); __swap16md_x; }); });
   printf(":%u", p);
  }
  break;
 }


 case 24: {
  u_int16_t b;
  u_int8_t i, curstart = 255, curend = 0,
      maxstart = 0, maxend = 0;
  for (i = 0; i < 8; i++) {
   if (!addr->pfa.addr16[i]) {
    if (curstart == 255)
     curstart = i;
    else
     curend = i;
   } else {
    if (curstart) {
     if ((curend - curstart) >
         (maxend - maxstart)) {
      maxstart = curstart;
      maxend = curend;
      curstart = 255;
     }
    }
   }
  }
  for (i = 0; i < 8; i++) {
   if (i >= maxstart && i <= maxend) {
    if (maxend != 7) {
     if (i == maxstart)
      printf(":");
    } else {
     if (i == maxend)
      printf(":");
    }
   } else {
    b = __extension__({ u_int16_t __swap16_x = (addr->pfa.addr16[i]); __builtin_constant_p(addr->pfa.addr16[i]) ? __extension__({ u_int16_t __swap16gen_x = (__swap16_x); (u_int16_t)((__swap16gen_x & 0xff) << 8 | (__swap16gen_x & 0xff00) >> 8); }) : ({ u_int16_t __swap16md_x = (__swap16_x); __asm ("rorw $8, %w1" : "+r" (__swap16md_x)); __swap16md_x; }); });
    printf("%x", b);
    if (i < 7)
     printf(":");
   }
  }
  if (p) {
   p = __extension__({ u_int16_t __swap16_x = (p); __builtin_constant_p(p) ? __extension__({ u_int16_t __swap16gen_x = (__swap16_x); (u_int16_t)((__swap16gen_x & 0xff) << 8 | (__swap16gen_x & 0xff00) >> 8); }) : ({ u_int16_t __swap16md_x = (__swap16_x); __asm ("rorw $8, %w1" : "+r" (__swap16md_x)); __swap16md_x; }); });
   printf("[%u]", p);
  }
  break;
 }

 }
}

void
pf_print_state(struct pf_state *s)
{
 switch (s->proto) {
 case 6:
  printf("TCP ");
  break;
 case 17:
  printf("UDP ");
  break;
 case 1:
  printf("ICMP ");
  break;
 case 58:
  printf("ICMPV6 ");
  break;
 default:
  printf("%u ", s->proto);
  break;
 }
 pf_print_host(&s->lan.addr, s->lan.port, s->af);
 printf(" ");
 pf_print_host(&s->gwy.addr, s->gwy.port, s->af);
 printf(" ");
 pf_print_host(&s->ext.addr, s->ext.port, s->af);
 printf(" [lo=%u high=%u win=%u modulator=%u", s->src.seqlo,
     s->src.seqhi, s->src.max_win, s->src.seqdiff);
 if (s->src.wscale && s->dst.wscale)
  printf(" wscale=%u", s->src.wscale & 0x0f);
 printf("]");
 printf(" [lo=%u high=%u win=%u modulator=%u", s->dst.seqlo,
     s->dst.seqhi, s->dst.max_win, s->dst.seqdiff);
 if (s->src.wscale && s->dst.wscale)
  printf(" wscale=%u", s->dst.wscale & 0x0f);
 printf("]");
 printf(" %u:%u", s->src.state, s->dst.state);
}

void
pf_print_flags(u_int8_t f)
{
 if (f)
  printf(" ");
 if (f & 0x01)
  printf("F");
 if (f & 0x02)
  printf("S");
 if (f & 0x04)
  printf("R");
 if (f & 0x08)
  printf("P");
 if (f & 0x10)
  printf("A");
 if (f & 0x20)
  printf("U");
 if (f & 0x40)
  printf("E");
 if (f & 0x80)
  printf("W");
}
# 995 "openbsd3/net/pf.c"
void
pf_calc_skip_steps(struct pf_rulequeue *rules)
{
 struct pf_rule *cur, *prev, *head[8];
 int i;

 cur = ((rules)->tqh_first);
 prev = cur;
 for (i = 0; i < 8; ++i)
  head[i] = cur;
 while (cur != 0L) {

  if (cur->kif != prev->kif || cur->ifnot != prev->ifnot)
   do { while (head[0] != cur) { head[0]->skip[0].ptr = cur; head[0] = ((head[0])->entries.tqe_next); } } while (0);
  if (cur->direction != prev->direction)
   do { while (head[1] != cur) { head[1]->skip[1].ptr = cur; head[1] = ((head[1])->entries.tqe_next); } } while (0);
  if (cur->af != prev->af)
   do { while (head[2] != cur) { head[2]->skip[2].ptr = cur; head[2] = ((head[2])->entries.tqe_next); } } while (0);
  if (cur->proto != prev->proto)
   do { while (head[3] != cur) { head[3]->skip[3].ptr = cur; head[3] = ((head[3])->entries.tqe_next); } } while (0);
  if (cur->src.not != prev->src.not ||
      pf_addr_wrap_neq(&cur->src.addr, &prev->src.addr))
   do { while (head[4] != cur) { head[4]->skip[4].ptr = cur; head[4] = ((head[4])->entries.tqe_next); } } while (0);
  if (cur->src.port[0] != prev->src.port[0] ||
      cur->src.port[1] != prev->src.port[1] ||
      cur->src.port_op != prev->src.port_op)
   do { while (head[5] != cur) { head[5]->skip[5].ptr = cur; head[5] = ((head[5])->entries.tqe_next); } } while (0);
  if (cur->dst.not != prev->dst.not ||
      pf_addr_wrap_neq(&cur->dst.addr, &prev->dst.addr))
   do { while (head[6] != cur) { head[6]->skip[6].ptr = cur; head[6] = ((head[6])->entries.tqe_next); } } while (0);
  if (cur->dst.port[0] != prev->dst.port[0] ||
      cur->dst.port[1] != prev->dst.port[1] ||
      cur->dst.port_op != prev->dst.port_op)
   do { while (head[7] != cur) { head[7]->skip[7].ptr = cur; head[7] = ((head[7])->entries.tqe_next); } } while (0);

  prev = cur;
  cur = ((cur)->entries.tqe_next);
 }
 for (i = 0; i < 8; ++i)
  do { while (head[i] != cur) { head[i]->skip[i].ptr = cur; head[i] = ((head[i])->entries.tqe_next); } } while (0);
}

int
pf_addr_wrap_neq(struct pf_addr_wrap *aw1, struct pf_addr_wrap *aw2)
{
 if (aw1->type != aw2->type)
  return (1);
 switch (aw1->type) {
 case PF_ADDR_ADDRMASK:
  if (((0 == 2 && (&aw1->v.a.addr)->pfa.addr32[0] != (&aw2->v.a.addr)->pfa.addr32[0]) || ((&aw1->v.a.addr)->pfa.addr32[3] != (&aw2->v.a.addr)->pfa.addr32[3] || (&aw1->v.a.addr)->pfa.addr32[2] != (&aw2->v.a.addr)->pfa.addr32[2] || (&aw1->v.a.addr)->pfa.addr32[1] != (&aw2->v.a.addr)->pfa.addr32[1] || (&aw1->v.a.addr)->pfa.addr32[0] != (&aw2->v.a.addr)->pfa.addr32[0])))
   return (1);
  if (((0 == 2 && (&aw1->v.a.mask)->pfa.addr32[0] != (&aw2->v.a.mask)->pfa.addr32[0]) || ((&aw1->v.a.mask)->pfa.addr32[3] != (&aw2->v.a.mask)->pfa.addr32[3] || (&aw1->v.a.mask)->pfa.addr32[2] != (&aw2->v.a.mask)->pfa.addr32[2] || (&aw1->v.a.mask)->pfa.addr32[1] != (&aw2->v.a.mask)->pfa.addr32[1] || (&aw1->v.a.mask)->pfa.addr32[0] != (&aw2->v.a.mask)->pfa.addr32[0])))
   return (1);
  return (0);
 case PF_ADDR_DYNIFTL:
  return (aw1->p.dyn->pfid_kt != aw2->p.dyn->pfid_kt);
 case PF_ADDR_NOROUTE:
  return (0);
 case PF_ADDR_TABLE:
  return (aw1->p.tbl != aw2->p.tbl);
 default:
  printf("invalid address type: %d\n", aw1->type);
  return (1);
 }
}

void
pf_update_anchor_rules()
{
 struct pf_rule *rule;
 int i;

 for (i = 0; i < PF_RULESET_MAX; ++i)
  for((rule) = ((global_pf_main_ruleset[get_stack_id()].rules[i].active.ptr)->tqh_first); (rule) != 0L; (rule) = ((rule)->entries.tqe_next))

   if (rule->anchorname[0])
    rule->anchor = pf_find_anchor(rule->anchorname);
   else
    rule->anchor = 0L;
}

u_int16_t
pf_cksum_fixup(u_int16_t cksum, u_int16_t old, u_int16_t new, u_int8_t udp)
{
 u_int32_t l;

 if (udp && !cksum)
  return (0x0000);
 l = cksum + old - new;
 l = (l >> 16) + (l & 65535);
 l = l & 65535;
 if (udp && !l)
  return (0xFFFF);
 return (l);
}

void
pf_change_ap(struct pf_addr *a, u_int16_t *p, u_int16_t *ic, u_int16_t *pc,
    struct pf_addr *an, u_int16_t pn, u_int8_t u, sa_family_t af)
{
 struct pf_addr ao;
 u_int16_t po = *p;

 pf_addrcpy(&ao, a, af);
 pf_addrcpy(a, an, af);

 *p = pn;

 switch (af) {

 case 2:
  *ic = pf_cksum_fixup(pf_cksum_fixup(*ic,
      ao.pfa.addr16[0], an->pfa.addr16[0], 0),
      ao.pfa.addr16[1], an->pfa.addr16[1], 0);
  *p = pn;
  *pc = pf_cksum_fixup(pf_cksum_fixup(pf_cksum_fixup(*pc,
      ao.pfa.addr16[0], an->pfa.addr16[0], u),
      ao.pfa.addr16[1], an->pfa.addr16[1], u),
      po, pn, u);
  break;


 case 24:
  *pc = pf_cksum_fixup(pf_cksum_fixup(pf_cksum_fixup(
      pf_cksum_fixup(pf_cksum_fixup(pf_cksum_fixup(
      pf_cksum_fixup(pf_cksum_fixup(pf_cksum_fixup(*pc,
      ao.pfa.addr16[0], an->pfa.addr16[0], u),
      ao.pfa.addr16[1], an->pfa.addr16[1], u),
      ao.pfa.addr16[2], an->pfa.addr16[2], u),
      ao.pfa.addr16[3], an->pfa.addr16[3], u),
      ao.pfa.addr16[4], an->pfa.addr16[4], u),
      ao.pfa.addr16[5], an->pfa.addr16[5], u),
      ao.pfa.addr16[6], an->pfa.addr16[6], u),
      ao.pfa.addr16[7], an->pfa.addr16[7], u),
      po, pn, u);
  break;

 }
}



void
pf_change_a(void *a, u_int16_t *c, u_int32_t an, u_int8_t u)
{
 u_int32_t ao;

 memcpy(&ao, a, sizeof(ao));
 memcpy(a, &an, sizeof(u_int32_t));
 *c = pf_cksum_fixup(pf_cksum_fixup(*c, ao / 65536, an / 65536, u),
     ao % 65536, an % 65536, u);
}


void
pf_change_a6(struct pf_addr *a, u_int16_t *c, struct pf_addr *an, u_int8_t u)
{
 struct pf_addr ao;

 pf_addrcpy(&ao, a, 24);
 pf_addrcpy(a, an, 24);

 *c = pf_cksum_fixup(pf_cksum_fixup(pf_cksum_fixup(
     pf_cksum_fixup(pf_cksum_fixup(pf_cksum_fixup(
     pf_cksum_fixup(pf_cksum_fixup(*c,
     ao.pfa.addr16[0], an->pfa.addr16[0], u),
     ao.pfa.addr16[1], an->pfa.addr16[1], u),
     ao.pfa.addr16[2], an->pfa.addr16[2], u),
     ao.pfa.addr16[3], an->pfa.addr16[3], u),
     ao.pfa.addr16[4], an->pfa.addr16[4], u),
     ao.pfa.addr16[5], an->pfa.addr16[5], u),
     ao.pfa.addr16[6], an->pfa.addr16[6], u),
     ao.pfa.addr16[7], an->pfa.addr16[7], u);
}


void
pf_change_icmp(struct pf_addr *ia, u_int16_t *ip, struct pf_addr *oa,
    struct pf_addr *na, u_int16_t np, u_int16_t *pc, u_int16_t *h2c,
    u_int16_t *ic, u_int16_t *hc, u_int8_t u, sa_family_t af)
{
 struct pf_addr oia, ooa;

 pf_addrcpy(&oia, ia, af);
 pf_addrcpy(&ooa, oa, af);


 if (ip != 0L) {
  u_int16_t oip = *ip;
  u_int32_t opc;

  if (pc != 0L)
   opc = *pc;
  *ip = np;
  if (pc != 0L)
   *pc = pf_cksum_fixup(*pc, oip, *ip, u);
  *ic = pf_cksum_fixup(*ic, oip, *ip, 0);
  if (pc != 0L)
   *ic = pf_cksum_fixup(*ic, opc, *pc, 0);
 }

 pf_addrcpy(ia, na, af);
 switch (af) {

 case 2: {
  u_int32_t oh2c = *h2c;

  *h2c = pf_cksum_fixup(pf_cksum_fixup(*h2c,
      oia.pfa.addr16[0], ia->pfa.addr16[0], 0),
      oia.pfa.addr16[1], ia->pfa.addr16[1], 0);
  *ic = pf_cksum_fixup(pf_cksum_fixup(*ic,
      oia.pfa.addr16[0], ia->pfa.addr16[0], 0),
      oia.pfa.addr16[1], ia->pfa.addr16[1], 0);
  *ic = pf_cksum_fixup(*ic, oh2c, *h2c, 0);
  break;
 }


 case 24:
  *ic = pf_cksum_fixup(pf_cksum_fixup(pf_cksum_fixup(
      pf_cksum_fixup(pf_cksum_fixup(pf_cksum_fixup(
      pf_cksum_fixup(pf_cksum_fixup(*ic,
      oia.pfa.addr16[0], ia->pfa.addr16[0], u),
      oia.pfa.addr16[1], ia->pfa.addr16[1], u),
      oia.pfa.addr16[2], ia->pfa.addr16[2], u),
      oia.pfa.addr16[3], ia->pfa.addr16[3], u),
      oia.pfa.addr16[4], ia->pfa.addr16[4], u),
      oia.pfa.addr16[5], ia->pfa.addr16[5], u),
      oia.pfa.addr16[6], ia->pfa.addr16[6], u),
      oia.pfa.addr16[7], ia->pfa.addr16[7], u);
  break;

 }

 pf_addrcpy(oa, na, af);
 switch (af) {

 case 2:
  *hc = pf_cksum_fixup(pf_cksum_fixup(*hc,
      ooa.pfa.addr16[0], oa->pfa.addr16[0], 0),
      ooa.pfa.addr16[1], oa->pfa.addr16[1], 0);
  break;


 case 24:
  *ic = pf_cksum_fixup(pf_cksum_fixup(pf_cksum_fixup(
      pf_cksum_fixup(pf_cksum_fixup(pf_cksum_fixup(
      pf_cksum_fixup(pf_cksum_fixup(*ic,
      ooa.pfa.addr16[0], oa->pfa.addr16[0], u),
      ooa.pfa.addr16[1], oa->pfa.addr16[1], u),
      ooa.pfa.addr16[2], oa->pfa.addr16[2], u),
      ooa.pfa.addr16[3], oa->pfa.addr16[3], u),
      ooa.pfa.addr16[4], oa->pfa.addr16[4], u),
      ooa.pfa.addr16[5], oa->pfa.addr16[5], u),
      ooa.pfa.addr16[6], oa->pfa.addr16[6], u),
      ooa.pfa.addr16[7], oa->pfa.addr16[7], u);
  break;

 }
}

void
pf_send_tcp(const struct pf_rule *r, sa_family_t af,
    const struct pf_addr *saddr, const struct pf_addr *daddr,
    u_int16_t sport, u_int16_t dport, u_int32_t seq, u_int32_t ack,
    u_int8_t flags, u_int16_t win, u_int16_t mss, u_int8_t ttl)
{
 struct mbuf *m;
 struct m_tag *mtag;
 int len, tlen;

 struct ip *h;


 struct ip6_hdr *h6;

 struct tcphdr *th;
 char *opt;


 tlen = sizeof(struct tcphdr);
 if (mss)
  tlen += 4;

 switch (af) {

 case 2:
  len = sizeof(struct ip) + tlen;
  break;


 case 24:
  len = sizeof(struct ip6_hdr) + tlen;
  break;

 }


 mtag = m_tag_get(11, 0, 0x0001);
 if (mtag == 0L)
  return;
 m = m_gethdr(0x0001, 2);
 if (m == 0L) {
  m_tag_free(mtag);
  return;
 }
 m_tag_prepend(m, mtag);

 if (r != 0L && r->qid) {
  struct altq_tag *atag;

  mtag = m_tag_get(14, sizeof(*atag), 0x0001);
  if (mtag != 0L) {
   atag = (struct altq_tag *)(mtag + 1);
   atag->qid = r->qid;

   atag->af = af;
   atag->hdr = ((struct ip *)((m)->m_hdr.mh_data));
   m_tag_prepend(m, mtag);
  }
 }

 m->m_hdr.mh_data += global_max_linkhdr[get_stack_id()];
 m->M_dat.MH.MH_pkthdr.len = m->m_hdr.mh_len = len;
 m->M_dat.MH.MH_pkthdr.rcvif = 0L;
 bzero(m->m_hdr.mh_data, len);
 switch (af) {

 case 2:
  h = ((struct ip *)((m)->m_hdr.mh_data));


  h->ip_p = 6;
  h->ip_len = __extension__({ u_int16_t __swap16_x = (tlen); __builtin_constant_p(tlen) ? __extension__({ u_int16_t __swap16gen_x = (__swap16_x); (u_int16_t)((__swap16gen_x & 0xff) << 8 | (__swap16gen_x & 0xff00) >> 8); }) : ({ u_int16_t __swap16md_x = (__swap16_x); __asm ("rorw $8, %w1" : "+r" (__swap16md_x)); __swap16md_x; }); });
  h->ip_src.s_addr = saddr->pfa.v4.s_addr;
  h->ip_dst.s_addr = daddr->pfa.v4.s_addr;

  th = (struct tcphdr *)((caddr_t)h + sizeof(struct ip));
  break;


 case 24:
  h6 = ((struct ip6_hdr *)((m)->m_hdr.mh_data));


  h6->ip6_ctlun.ip6_un1.ip6_un1_nxt = 6;
  h6->ip6_ctlun.ip6_un1.ip6_un1_plen = __extension__({ u_int16_t __swap16_x = (tlen); __builtin_constant_p(tlen) ? __extension__({ u_int16_t __swap16gen_x = (__swap16_x); (u_int16_t)((__swap16gen_x & 0xff) << 8 | (__swap16gen_x & 0xff00) >> 8); }) : ({ u_int16_t __swap16md_x = (__swap16_x); __asm ("rorw $8, %w1" : "+r" (__swap16md_x)); __swap16md_x; }); });
  memcpy(&h6->ip6_src, &saddr->pfa.v6, sizeof(struct in6_addr));
  memcpy(&h6->ip6_dst, &daddr->pfa.v6, sizeof(struct in6_addr));

  th = (struct tcphdr *)((caddr_t)h6 + sizeof(struct ip6_hdr));
  break;

 }


 th->th_sport = sport;
 th->th_dport = dport;
 th->th_seq = __extension__({ u_int32_t __swap32_x = (seq); __builtin_constant_p(seq) ? __extension__({ u_int32_t __swap32gen_x = (__swap32_x); (u_int32_t)((__swap32gen_x & 0xff) << 24 | (__swap32gen_x & 0xff00) << 8 | (__swap32gen_x & 0xff0000) >> 8 | (__swap32gen_x & 0xff000000) >> 24); }) : ({ u_int32_t __swap32md_x = (__swap32_x); __asm ("bswap %1" : "+r" (__swap32md_x)); __swap32md_x; }); });
 th->th_ack = __extension__({ u_int32_t __swap32_x = (ack); __builtin_constant_p(ack) ? __extension__({ u_int32_t __swap32gen_x = (__swap32_x); (u_int32_t)((__swap32gen_x & 0xff) << 24 | (__swap32gen_x & 0xff00) << 8 | (__swap32gen_x & 0xff0000) >> 8 | (__swap32gen_x & 0xff000000) >> 24); }) : ({ u_int32_t __swap32md_x = (__swap32_x); __asm ("bswap %1" : "+r" (__swap32md_x)); __swap32md_x; }); });
 th->th_off = tlen >> 2;
 th->th_flags = flags;
 th->th_win = __extension__({ u_int16_t __swap16_x = (win); __builtin_constant_p(win) ? __extension__({ u_int16_t __swap16gen_x = (__swap16_x); (u_int16_t)((__swap16gen_x & 0xff) << 8 | (__swap16gen_x & 0xff00) >> 8); }) : ({ u_int16_t __swap16md_x = (__swap16_x); __asm ("rorw $8, %w1" : "+r" (__swap16md_x)); __swap16md_x; }); });

 if (mss) {
  opt = (char *)(th + 1);
  opt[0] = 2;
  opt[1] = 4;
  (mss) = __extension__({ u_int16_t __swap16_x = ((u_int16_t)(mss)); __builtin_constant_p((u_int16_t)(mss)) ? __extension__({ u_int16_t __swap16gen_x = (__swap16_x); (u_int16_t)((__swap16gen_x & 0xff) << 8 | (__swap16gen_x & 0xff00) >> 8); }) : ({ u_int16_t __swap16md_x = (__swap16_x); __asm ("rorw $8, %w1" : "+r" (__swap16md_x)); __swap16md_x; }); });
  bcopy((caddr_t)&mss, (caddr_t)(opt + 2), 2);
 }

 switch (af) {

 case 2:

  th->th_sum = in_cksum(m, len);


  h->ip_v = 4;
  h->ip_hl = sizeof(*h) >> 2;
  h->ip_tos = 0x10;
  h->ip_len = __extension__({ u_int16_t __swap16_x = (len); __builtin_constant_p(len) ? __extension__({ u_int16_t __swap16gen_x = (__swap16_x); (u_int16_t)((__swap16gen_x & 0xff) << 8 | (__swap16gen_x & 0xff00) >> 8); }) : ({ u_int16_t __swap16md_x = (__swap16_x); __asm ("rorw $8, %w1" : "+r" (__swap16md_x)); __swap16md_x; }); });
  h->ip_off = __extension__({ u_int16_t __swap16_x = (global_ip_mtudisc[get_stack_id()] ? 0x4000 : 0); __builtin_constant_p(global_ip_mtudisc[get_stack_id()] ? 0x4000 : 0) ? __extension__({ u_int16_t __swap16gen_x = (__swap16_x); (u_int16_t)((__swap16gen_x & 0xff) << 8 | (__swap16gen_x & 0xff00) >> 8); }) : ({ u_int16_t __swap16md_x = (__swap16_x); __asm ("rorw $8, %w1" : "+r" (__swap16md_x)); __swap16md_x; }); });
  h->ip_ttl = ttl ? ttl : global_ip_defttl[get_stack_id()];
  h->ip_sum = 0;
  ip_output(m, (void *)0L, (void *)0L, 0, (void *)0L,
      (void *)0L);
  break;


 case 24:

  th->th_sum = in6_cksum(m, 6,
      sizeof(struct ip6_hdr), tlen);

  h6->ip6_ctlun.ip6_un2_vfc |= 0x60;
  h6->ip6_ctlun.ip6_un1.ip6_un1_hlim = 64;

  ip6_output(m, 0L, 0L, 0, 0L, 0L);
  break;

 }
}

void
pf_send_icmp(struct mbuf *m, u_int8_t type, u_int8_t code, sa_family_t af,
    struct pf_rule *r)
{
 struct m_tag *mtag;
 struct mbuf *m0;

 mtag = m_tag_get(11, 0, 0x0001);
 if (mtag == 0L)
  return;
 m0 = m_copym((m), (0), (1000000000), 0x0001);
 if (m0 == 0L) {
  m_tag_free(mtag);
  return;
 }
 m_tag_prepend(m0, mtag);


 if (r->qid) {
  struct altq_tag *atag;

  mtag = m_tag_get(14, sizeof(*atag), 0x0001);
  if (mtag != 0L) {
   atag = (struct altq_tag *)(mtag + 1);
   atag->qid = r->qid;

   atag->af = af;
   atag->hdr = ((struct ip *)((m0)->m_hdr.mh_data));
   m_tag_prepend(m0, mtag);
  }
 }


 switch (af) {

 case 2:
  icmp_error(m0, type, code, 0, (void *)0L);
  break;


 case 24:
  icmp6_error(m0, type, code, 0);
  break;

 }
}






int
pf_match_addr(u_int8_t n, struct pf_addr *a, struct pf_addr *m,
    struct pf_addr *b, sa_family_t af)
{
 int match = 0;

 switch (af) {

 case 2:
  if ((a->pfa.addr32[0] & m->pfa.addr32[0]) ==
      (b->pfa.addr32[0] & m->pfa.addr32[0]))
   match++;
  break;


 case 24:
  if (((a->pfa.addr32[0] & m->pfa.addr32[0]) ==
       (b->pfa.addr32[0] & m->pfa.addr32[0])) &&
      ((a->pfa.addr32[1] & m->pfa.addr32[1]) ==
       (b->pfa.addr32[1] & m->pfa.addr32[1])) &&
      ((a->pfa.addr32[2] & m->pfa.addr32[2]) ==
       (b->pfa.addr32[2] & m->pfa.addr32[2])) &&
      ((a->pfa.addr32[3] & m->pfa.addr32[3]) ==
       (b->pfa.addr32[3] & m->pfa.addr32[3])))
   match++;
  break;

 }
 if (match) {
  if (n)
   return (0);
  else
   return (1);
 } else {
  if (n)
   return (1);
  else
   return (0);
 }
}

int
pf_match(u_int8_t op, u_int32_t a1, u_int32_t a2, u_int32_t p)
{
 switch (op) {
 case PF_OP_IRG:
  return ((p > a1) && (p < a2));
 case PF_OP_XRG:
  return ((p < a1) || (p > a2));
 case PF_OP_RRG:
  return ((p >= a1) && (p <= a2));
 case PF_OP_EQ:
  return (p == a1);
 case PF_OP_NE:
  return (p != a1);
 case PF_OP_LT:
  return (p < a1);
 case PF_OP_LE:
  return (p <= a1);
 case PF_OP_GT:
  return (p > a1);
 case PF_OP_GE:
  return (p >= a1);
 }
 return (0);
}

int
pf_match_port(u_int8_t op, u_int16_t a1, u_int16_t a2, u_int16_t p)
{
 (a1) = __extension__({ u_int16_t __swap16_x = ((u_int16_t)(a1)); __builtin_constant_p((u_int16_t)(a1)) ? __extension__({ u_int16_t __swap16gen_x = (__swap16_x); (u_int16_t)((__swap16gen_x & 0xff) << 8 | (__swap16gen_x & 0xff00) >> 8); }) : ({ u_int16_t __swap16md_x = (__swap16_x); __asm ("rorw $8, %w1" : "+r" (__swap16md_x)); __swap16md_x; }); });
 (a2) = __extension__({ u_int16_t __swap16_x = ((u_int16_t)(a2)); __builtin_constant_p((u_int16_t)(a2)) ? __extension__({ u_int16_t __swap16gen_x = (__swap16_x); (u_int16_t)((__swap16gen_x & 0xff) << 8 | (__swap16gen_x & 0xff00) >> 8); }) : ({ u_int16_t __swap16md_x = (__swap16_x); __asm ("rorw $8, %w1" : "+r" (__swap16md_x)); __swap16md_x; }); });
 (p) = __extension__({ u_int16_t __swap16_x = ((u_int16_t)(p)); __builtin_constant_p((u_int16_t)(p)) ? __extension__({ u_int16_t __swap16gen_x = (__swap16_x); (u_int16_t)((__swap16gen_x & 0xff) << 8 | (__swap16gen_x & 0xff00) >> 8); }) : ({ u_int16_t __swap16md_x = (__swap16_x); __asm ("rorw $8, %w1" : "+r" (__swap16md_x)); __swap16md_x; }); });
 return (pf_match(op, a1, a2, p));
}

int
pf_match_uid(u_int8_t op, uid_t a1, uid_t a2, uid_t u)
{
 if (u == 0xffffffffU && op != PF_OP_EQ && op != PF_OP_NE)
  return (0);
 return (pf_match(op, a1, a2, u));
}

int
pf_match_gid(u_int8_t op, gid_t a1, gid_t a2, gid_t g)
{
 if (g == 0xffffffffU && op != PF_OP_EQ && op != PF_OP_NE)
  return (0);
 return (pf_match(op, a1, a2, g));
}

struct pf_tag *
pf_get_tag(struct mbuf *m)
{
 struct m_tag *mtag;

 if ((mtag = m_tag_find(m, 15, 0L)) != 0L)
  return ((struct pf_tag *)(mtag + 1));
 else
  return (0L);
}

int
pf_match_tag(struct mbuf *m, struct pf_rule *r, struct pf_rule *nat_rule,
    struct pf_tag *pftag, int *tag)
{
 if (*tag == -1) {
  pftag = pf_get_tag(m);
  if (pftag != 0L)
   *tag = pftag->tag;
  else
   *tag = 0;
  if (nat_rule != 0L && nat_rule->tag)
   *tag = nat_rule->tag;
 }

 return ((!r->match_tag_not && r->match_tag == *tag) ||
     (r->match_tag_not && r->match_tag != *tag));
}

int
pf_tag_packet(struct mbuf *m, struct pf_tag *pftag, int tag)
{
 struct m_tag *mtag;

 if (tag <= 0)
  return (0);

 if (pftag == 0L) {
  mtag = m_tag_get(15, sizeof(*pftag), 0x0001);
  if (mtag == 0L)
   return (1);
  ((struct pf_tag *)(mtag + 1))->tag = tag;
  m_tag_prepend(m, mtag);
 } else
  pftag->tag = tag;

 return (0);
}
# 1625 "openbsd3/net/pf.c"
void
pf_poolmask(struct pf_addr *naddr, struct pf_addr *raddr,
    struct pf_addr *rmask, struct pf_addr *saddr, sa_family_t af)
{
 switch (af) {

 case 2:
  naddr->pfa.addr32[0] = (raddr->pfa.addr32[0] & rmask->pfa.addr32[0]) |
  ((rmask->pfa.addr32[0] ^ 0xffffffff ) & saddr->pfa.addr32[0]);
  break;

 case 24:
  naddr->pfa.addr32[0] = (raddr->pfa.addr32[0] & rmask->pfa.addr32[0]) |
  ((rmask->pfa.addr32[0] ^ 0xffffffff ) & saddr->pfa.addr32[0]);
  naddr->pfa.addr32[1] = (raddr->pfa.addr32[1] & rmask->pfa.addr32[1]) |
  ((rmask->pfa.addr32[1] ^ 0xffffffff ) & saddr->pfa.addr32[1]);
  naddr->pfa.addr32[2] = (raddr->pfa.addr32[2] & rmask->pfa.addr32[2]) |
  ((rmask->pfa.addr32[2] ^ 0xffffffff ) & saddr->pfa.addr32[2]);
  naddr->pfa.addr32[3] = (raddr->pfa.addr32[3] & rmask->pfa.addr32[3]) |
  ((rmask->pfa.addr32[3] ^ 0xffffffff ) & saddr->pfa.addr32[3]);
  break;
 }
}

void
pf_addr_inc(struct pf_addr *addr, sa_family_t af)
{
 switch (af) {

 case 2:
  addr->pfa.addr32[0] = __extension__({ u_int32_t __swap32_x = (__extension__({ u_int32_t __swap32_x = (addr->pfa.addr32[0]); __builtin_constant_p(addr->pfa.addr32[0]) ? __extension__({ u_int32_t __swap32gen_x = (__swap32_x); (u_int32_t)((__swap32gen_x & 0xff) << 24 | (__swap32gen_x & 0xff00) << 8 | (__swap32gen_x & 0xff0000) >> 8 | (__swap32gen_x & 0xff000000) >> 24); }) : ({ u_int32_t __swap32md_x = (__swap32_x); __asm ("bswap %1" : "+r" (__swap32md_x)); __swap32md_x; }); }) + 1); __builtin_constant_p(__extension__({ u_int32_t __swap32_x = (addr->pfa.addr32[0]); __builtin_constant_p(addr->pfa.addr32[0]) ? __extension__({ u_int32_t __swap32gen_x = (__swap32_x); (u_int32_t)((__swap32gen_x & 0xff) << 24 | (__swap32gen_x & 0xff00) << 8 | (__swap32gen_x & 0xff0000) >> 8 | (__swap32gen_x & 0xff000000) >> 24); }) : ({ u_int32_t __swap32md_x = (__swap32_x); __asm ("bswap %1" : "+r" (__swap32md_x)); __swap32md_x; }); }) + 1) ? __extension__({ u_int32_t __swap32gen_x = (__swap32_x); (u_int32_t)((__swap32gen_x & 0xff) << 24 | (__swap32gen_x & 0xff00) << 8 | (__swap32gen_x & 0xff0000) >> 8 | (__swap32gen_x & 0xff000000) >> 24); }) : ({ u_int32_t __swap32md_x = (__swap32_x); __asm ("bswap %1" : "+r" (__swap32md_x)); __swap32md_x; }); });
  break;

 case 24:
  if (addr->pfa.addr32[3] == 0xffffffff) {
   addr->pfa.addr32[3] = 0;
   if (addr->pfa.addr32[2] == 0xffffffff) {
    addr->pfa.addr32[2] = 0;
    if (addr->pfa.addr32[1] == 0xffffffff) {
     addr->pfa.addr32[1] = 0;
     addr->pfa.addr32[0] =
         __extension__({ u_int32_t __swap32_x = (__extension__({ u_int32_t __swap32_x = (addr->pfa.addr32[0]); __builtin_constant_p(addr->pfa.addr32[0]) ? __extension__({ u_int32_t __swap32gen_x = (__swap32_x); (u_int32_t)((__swap32gen_x & 0xff) << 24 | (__swap32gen_x & 0xff00) << 8 | (__swap32gen_x & 0xff0000) >> 8 | (__swap32gen_x & 0xff000000) >> 24); }) : ({ u_int32_t __swap32md_x = (__swap32_x); __asm ("bswap %1" : "+r" (__swap32md_x)); __swap32md_x; }); }) + 1); __builtin_constant_p(__extension__({ u_int32_t __swap32_x = (addr->pfa.addr32[0]); __builtin_constant_p(addr->pfa.addr32[0]) ? __extension__({ u_int32_t __swap32gen_x = (__swap32_x); (u_int32_t)((__swap32gen_x & 0xff) << 24 | (__swap32gen_x & 0xff00) << 8 | (__swap32gen_x & 0xff0000) >> 8 | (__swap32gen_x & 0xff000000) >> 24); }) : ({ u_int32_t __swap32md_x = (__swap32_x); __asm ("bswap %1" : "+r" (__swap32md_x)); __swap32md_x; }); }) + 1) ? __extension__({ u_int32_t __swap32gen_x = (__swap32_x); (u_int32_t)((__swap32gen_x & 0xff) << 24 | (__swap32gen_x & 0xff00) << 8 | (__swap32gen_x & 0xff0000) >> 8 | (__swap32gen_x & 0xff000000) >> 24); }) : ({ u_int32_t __swap32md_x = (__swap32_x); __asm ("bswap %1" : "+r" (__swap32md_x)); __swap32md_x; }); });
    } else
     addr->pfa.addr32[1] =
         __extension__({ u_int32_t __swap32_x = (__extension__({ u_int32_t __swap32_x = (addr->pfa.addr32[1]); __builtin_constant_p(addr->pfa.addr32[1]) ? __extension__({ u_int32_t __swap32gen_x = (__swap32_x); (u_int32_t)((__swap32gen_x & 0xff) << 24 | (__swap32gen_x & 0xff00) << 8 | (__swap32gen_x & 0xff0000) >> 8 | (__swap32gen_x & 0xff000000) >> 24); }) : ({ u_int32_t __swap32md_x = (__swap32_x); __asm ("bswap %1" : "+r" (__swap32md_x)); __swap32md_x; }); }) + 1); __builtin_constant_p(__extension__({ u_int32_t __swap32_x = (addr->pfa.addr32[1]); __builtin_constant_p(addr->pfa.addr32[1]) ? __extension__({ u_int32_t __swap32gen_x = (__swap32_x); (u_int32_t)((__swap32gen_x & 0xff) << 24 | (__swap32gen_x & 0xff00) << 8 | (__swap32gen_x & 0xff0000) >> 8 | (__swap32gen_x & 0xff000000) >> 24); }) : ({ u_int32_t __swap32md_x = (__swap32_x); __asm ("bswap %1" : "+r" (__swap32md_x)); __swap32md_x; }); }) + 1) ? __extension__({ u_int32_t __swap32gen_x = (__swap32_x); (u_int32_t)((__swap32gen_x & 0xff) << 24 | (__swap32gen_x & 0xff00) << 8 | (__swap32gen_x & 0xff0000) >> 8 | (__swap32gen_x & 0xff000000) >> 24); }) : ({ u_int32_t __swap32md_x = (__swap32_x); __asm ("bswap %1" : "+r" (__swap32md_x)); __swap32md_x; }); });
   } else
    addr->pfa.addr32[2] =
        __extension__({ u_int32_t __swap32_x = (__extension__({ u_int32_t __swap32_x = (addr->pfa.addr32[2]); __builtin_constant_p(addr->pfa.addr32[2]) ? __extension__({ u_int32_t __swap32gen_x = (__swap32_x); (u_int32_t)((__swap32gen_x & 0xff) << 24 | (__swap32gen_x & 0xff00) << 8 | (__swap32gen_x & 0xff0000) >> 8 | (__swap32gen_x & 0xff000000) >> 24); }) : ({ u_int32_t __swap32md_x = (__swap32_x); __asm ("bswap %1" : "+r" (__swap32md_x)); __swap32md_x; }); }) + 1); __builtin_constant_p(__extension__({ u_int32_t __swap32_x = (addr->pfa.addr32[2]); __builtin_constant_p(addr->pfa.addr32[2]) ? __extension__({ u_int32_t __swap32gen_x = (__swap32_x); (u_int32_t)((__swap32gen_x & 0xff) << 24 | (__swap32gen_x & 0xff00) << 8 | (__swap32gen_x & 0xff0000) >> 8 | (__swap32gen_x & 0xff000000) >> 24); }) : ({ u_int32_t __swap32md_x = (__swap32_x); __asm ("bswap %1" : "+r" (__swap32md_x)); __swap32md_x; }); }) + 1) ? __extension__({ u_int32_t __swap32gen_x = (__swap32_x); (u_int32_t)((__swap32gen_x & 0xff) << 24 | (__swap32gen_x & 0xff00) << 8 | (__swap32gen_x & 0xff0000) >> 8 | (__swap32gen_x & 0xff000000) >> 24); }) : ({ u_int32_t __swap32md_x = (__swap32_x); __asm ("bswap %1" : "+r" (__swap32md_x)); __swap32md_x; }); });
  } else
   addr->pfa.addr32[3] =
       __extension__({ u_int32_t __swap32_x = (__extension__({ u_int32_t __swap32_x = (addr->pfa.addr32[3]); __builtin_constant_p(addr->pfa.addr32[3]) ? __extension__({ u_int32_t __swap32gen_x = (__swap32_x); (u_int32_t)((__swap32gen_x & 0xff) << 24 | (__swap32gen_x & 0xff00) << 8 | (__swap32gen_x & 0xff0000) >> 8 | (__swap32gen_x & 0xff000000) >> 24); }) : ({ u_int32_t __swap32md_x = (__swap32_x); __asm ("bswap %1" : "+r" (__swap32md_x)); __swap32md_x; }); }) + 1); __builtin_constant_p(__extension__({ u_int32_t __swap32_x = (addr->pfa.addr32[3]); __builtin_constant_p(addr->pfa.addr32[3]) ? __extension__({ u_int32_t __swap32gen_x = (__swap32_x); (u_int32_t)((__swap32gen_x & 0xff) << 24 | (__swap32gen_x & 0xff00) << 8 | (__swap32gen_x & 0xff0000) >> 8 | (__swap32gen_x & 0xff000000) >> 24); }) : ({ u_int32_t __swap32md_x = (__swap32_x); __asm ("bswap %1" : "+r" (__swap32md_x)); __swap32md_x; }); }) + 1) ? __extension__({ u_int32_t __swap32gen_x = (__swap32_x); (u_int32_t)((__swap32gen_x & 0xff) << 24 | (__swap32gen_x & 0xff00) << 8 | (__swap32gen_x & 0xff0000) >> 8 | (__swap32gen_x & 0xff000000) >> 24); }) : ({ u_int32_t __swap32md_x = (__swap32_x); __asm ("bswap %1" : "+r" (__swap32md_x)); __swap32md_x; }); });
  break;
 }
}
# 1697 "openbsd3/net/pf.c"
void
pf_hash(struct pf_addr *inaddr, struct pf_addr *hash,
    struct pf_poolhashkey *key, sa_family_t af)
{
 u_int32_t a = 0x9e3779b9, b = 0x9e3779b9, c = key->pfk.key32[0];

 switch (af) {

 case 2:
  a += inaddr->pfa.addr32[0];
  b += key->pfk.key32[1];
  do { a -= b; a -= c; a ^= (c >> 13); b -= c; b -= a; b ^= (a << 8); c -= a; c -= b; c ^= (b >> 13); a -= b; a -= c; a ^= (c >> 12); b -= c; b -= a; b ^= (a << 16); c -= a; c -= b; c ^= (b >> 5); a -= b; a -= c; a ^= (c >> 3); b -= c; b -= a; b ^= (a << 10); c -= a; c -= b; c ^= (b >> 15); } while (0);
  hash->pfa.addr32[0] = c + key->pfk.key32[2];
  break;


 case 24:
  a += inaddr->pfa.addr32[0];
  b += inaddr->pfa.addr32[2];
  do { a -= b; a -= c; a ^= (c >> 13); b -= c; b -= a; b ^= (a << 8); c -= a; c -= b; c ^= (b >> 13); a -= b; a -= c; a ^= (c >> 12); b -= c; b -= a; b ^= (a << 16); c -= a; c -= b; c ^= (b >> 5); a -= b; a -= c; a ^= (c >> 3); b -= c; b -= a; b ^= (a << 10); c -= a; c -= b; c ^= (b >> 15); } while (0);
  hash->pfa.addr32[0] = c;
  a += inaddr->pfa.addr32[1];
  b += inaddr->pfa.addr32[3];
  c += key->pfk.key32[1];
  do { a -= b; a -= c; a ^= (c >> 13); b -= c; b -= a; b ^= (a << 8); c -= a; c -= b; c ^= (b >> 13); a -= b; a -= c; a ^= (c >> 12); b -= c; b -= a; b ^= (a << 16); c -= a; c -= b; c ^= (b >> 5); a -= b; a -= c; a ^= (c >> 3); b -= c; b -= a; b ^= (a << 10); c -= a; c -= b; c ^= (b >> 15); } while (0);
  hash->pfa.addr32[1] = c;
  a += inaddr->pfa.addr32[2];
  b += inaddr->pfa.addr32[1];
  c += key->pfk.key32[2];
  do { a -= b; a -= c; a ^= (c >> 13); b -= c; b -= a; b ^= (a << 8); c -= a; c -= b; c ^= (b >> 13); a -= b; a -= c; a ^= (c >> 12); b -= c; b -= a; b ^= (a << 16); c -= a; c -= b; c ^= (b >> 5); a -= b; a -= c; a ^= (c >> 3); b -= c; b -= a; b ^= (a << 10); c -= a; c -= b; c ^= (b >> 15); } while (0);
  hash->pfa.addr32[2] = c;
  a += inaddr->pfa.addr32[3];
  b += inaddr->pfa.addr32[0];
  c += key->pfk.key32[3];
  do { a -= b; a -= c; a ^= (c >> 13); b -= c; b -= a; b ^= (a << 8); c -= a; c -= b; c ^= (b >> 13); a -= b; a -= c; a ^= (c >> 12); b -= c; b -= a; b ^= (a << 16); c -= a; c -= b; c ^= (b >> 5); a -= b; a -= c; a ^= (c >> 3); b -= c; b -= a; b ^= (a << 10); c -= a; c -= b; c ^= (b >> 15); } while (0);
  hash->pfa.addr32[3] = c;
  break;

 }
}

int
pf_map_addr(sa_family_t af, struct pf_rule *r, struct pf_addr *saddr,
    struct pf_addr *naddr, struct pf_addr *init_addr, struct pf_src_node **sn)
{
 unsigned char hash[16];
 struct pf_pool *rpool = &r->rpool;
 struct pf_addr *raddr = &rpool->cur->addr.v.a.addr;
 struct pf_addr *rmask = &rpool->cur->addr.v.a.mask;
 struct pf_pooladdr *acur = rpool->cur;
 struct pf_src_node k;

 if (*sn == 0L && r->rpool.opts & 0x20 &&
     (r->rpool.opts & 0x0f) != PF_POOL_NONE) {
  k.af = af;
  pf_addrcpy(&k.addr, saddr, af);
  if (r->rule_flag & 0x0040 ||
      r->rpool.opts & 0x20)
   k.rule.ptr = r;
  else
   k.rule.ptr = 0L;
  global_pf_status[get_stack_id()].scounters[0]++;
  *sn = pf_src_tree_RB_FIND(&global_tree_src_tracking[get_stack_id()], &k);
  if (*sn != 0L && !((af == 2 && !(&(*sn)->raddr)->pfa.addr32[0]) || (!(&(*sn)->raddr)->pfa.addr32[0] && !(&(*sn)->raddr)->pfa.addr32[1] && !(&(*sn)->raddr)->pfa.addr32[2] && !(&(*sn)->raddr)->pfa.addr32[3] ))) {
   pf_addrcpy(naddr, &(*sn)->raddr, af);
   if (global_pf_status[get_stack_id()].debug >= PF_DEBUG_MISC) {
    printf("pf_map_addr: src tracking maps ");
    pf_print_host(&k.addr, 0, af);
    printf(" to ");
    pf_print_host(naddr, 0, af);
    printf("\n");
   }
   return (0);
  }
 }

 if (rpool->cur->addr.type == PF_ADDR_NOROUTE)
  return (1);
 if (rpool->cur->addr.type == PF_ADDR_DYNIFTL) {
  if (af == 2) {
   if (rpool->cur->addr.p.dyn->pfid_acnt4 < 1 &&
       (rpool->opts & 0x0f) !=
       PF_POOL_ROUNDROBIN)
    return (1);
    raddr = &rpool->cur->addr.p.dyn->pfid_addr4;
    rmask = &rpool->cur->addr.p.dyn->pfid_mask4;
  } else {
   if (rpool->cur->addr.p.dyn->pfid_acnt6 < 1 &&
       (rpool->opts & 0x0f) !=
       PF_POOL_ROUNDROBIN)
    return (1);
   raddr = &rpool->cur->addr.p.dyn->pfid_addr6;
   rmask = &rpool->cur->addr.p.dyn->pfid_mask6;
  }
 } else if (rpool->cur->addr.type == PF_ADDR_TABLE) {
  if ((rpool->opts & 0x0f) != PF_POOL_ROUNDROBIN)
   return (1);
 } else {
  raddr = &rpool->cur->addr.v.a.addr;
  rmask = &rpool->cur->addr.v.a.mask;
 }

 switch (rpool->opts & 0x0f) {
 case PF_POOL_NONE:
  pf_addrcpy(naddr, raddr, af);
  break;
 case PF_POOL_BITMASK:
  pf_poolmask(naddr, raddr, rmask, saddr, af);
  break;
 case PF_POOL_RANDOM:
  if (init_addr != 0L && ((af == 2 && !(init_addr)->pfa.addr32[0]) || (!(init_addr)->pfa.addr32[0] && !(init_addr)->pfa.addr32[1] && !(init_addr)->pfa.addr32[2] && !(init_addr)->pfa.addr32[3] ))) {
   switch (af) {

   case 2:
    rpool->counter.pfa.addr32[0] = arc4random();
    break;


   case 24:
    if (rmask->pfa.addr32[3] != 0xffffffff)
     rpool->counter.pfa.addr32[3] = arc4random();
    else
     break;
    if (rmask->pfa.addr32[2] != 0xffffffff)
     rpool->counter.pfa.addr32[2] = arc4random();
    else
     break;
    if (rmask->pfa.addr32[1] != 0xffffffff)
     rpool->counter.pfa.addr32[1] = arc4random();
    else
     break;
    if (rmask->pfa.addr32[0] != 0xffffffff)
     rpool->counter.pfa.addr32[0] = arc4random();
    break;

   }
   pf_poolmask(naddr, raddr, rmask, &rpool->counter, af);
   pf_addrcpy(init_addr, naddr, af);

  } else {
   pf_addr_inc(&rpool->counter, af);
   pf_poolmask(naddr, raddr, rmask, &rpool->counter, af);
  }
  break;
 case PF_POOL_SRCHASH:
  pf_hash(saddr, (struct pf_addr *)&hash, &rpool->key, af);
  pf_poolmask(naddr, raddr, rmask, (struct pf_addr *)&hash, af);
  break;
 case PF_POOL_ROUNDROBIN:
  if (rpool->cur->addr.type == PF_ADDR_TABLE) {
   if (!pfr_pool_get(rpool->cur->addr.p.tbl,
       &rpool->tblidx, &rpool->counter,
       &raddr, &rmask, af))
    goto get_addr;
  } else if (rpool->cur->addr.type == PF_ADDR_DYNIFTL) {
   if (!pfr_pool_get(rpool->cur->addr.p.dyn->pfid_kt,
       &rpool->tblidx, &rpool->counter,
       &raddr, &rmask, af))
    goto get_addr;
  } else if (pf_match_addr(0, raddr, rmask, &rpool->counter, af))
   goto get_addr;

 try_next:
  if ((rpool->cur = ((rpool->cur)->entries.tqe_next)) == 0L)
   rpool->cur = ((&rpool->list)->tqh_first);
  if (rpool->cur->addr.type == PF_ADDR_TABLE) {
   rpool->tblidx = -1;
   if (pfr_pool_get(rpool->cur->addr.p.tbl,
       &rpool->tblidx, &rpool->counter,
       &raddr, &rmask, af)) {

    if (rpool->cur != acur)
     goto try_next;
    return (1);
   }
  } else if (rpool->cur->addr.type == PF_ADDR_DYNIFTL) {
   rpool->tblidx = -1;
   if (pfr_pool_get(rpool->cur->addr.p.dyn->pfid_kt,
       &rpool->tblidx, &rpool->counter,
       &raddr, &rmask, af)) {

    if (rpool->cur != acur)
     goto try_next;
    return (1);
   }
  } else {
   raddr = &rpool->cur->addr.v.a.addr;
   rmask = &rpool->cur->addr.v.a.mask;
   pf_addrcpy(&rpool->counter, raddr, af);
  }

 get_addr:
  pf_addrcpy(naddr, &rpool->counter, af);
  pf_addr_inc(&rpool->counter, af);
  break;
 }
 if (*sn != 0L)
  pf_addrcpy(&(*sn)->raddr, naddr, af);

 if (global_pf_status[get_stack_id()].debug >= PF_DEBUG_MISC &&
     (rpool->opts & 0x0f) != PF_POOL_NONE) {
  printf("pf_map_addr: selected address ");
  pf_print_host(naddr, 0, af);
  printf("\n");
 }

 return (0);
}

int
pf_get_sport(sa_family_t af, u_int8_t proto, struct pf_rule *r,
    struct pf_addr *saddr, struct pf_addr *daddr, u_int16_t dport,
    struct pf_addr *naddr, u_int16_t *nport, u_int16_t low, u_int16_t high,
    struct pf_src_node **sn)
{
 struct pf_state key;
 struct pf_addr init_addr;
 u_int16_t cut;

 bzero(&init_addr, sizeof(init_addr));
 if (pf_map_addr(af, r, saddr, naddr, &init_addr, sn))
  return (1);

 do {
  key.af = af;
  key.proto = proto;
  pf_addrcpy(&key.ext.addr, daddr, key.af);
  pf_addrcpy(&key.gwy.addr, naddr, key.af);
  key.ext.port = dport;





  if (!(proto == 6 || proto == 17)) {
   key.gwy.port = 0;
   if (pf_find_state_all(&key, PF_EXT_GWY, 0L) == 0L)
    return (0);
  } else if (low == 0 && high == 0) {
   key.gwy.port = *nport;
   if (pf_find_state_all(&key, PF_EXT_GWY, 0L) == 0L)
    return (0);
  } else if (low == high) {
   key.gwy.port = __extension__({ u_int16_t __swap16_x = (low); __builtin_constant_p(low) ? __extension__({ u_int16_t __swap16gen_x = (__swap16_x); (u_int16_t)((__swap16gen_x & 0xff) << 8 | (__swap16gen_x & 0xff00) >> 8); }) : ({ u_int16_t __swap16md_x = (__swap16_x); __asm ("rorw $8, %w1" : "+r" (__swap16md_x)); __swap16md_x; }); });
   if (pf_find_state_all(&key, PF_EXT_GWY, 0L) == 0L) {
    *nport = __extension__({ u_int16_t __swap16_x = (low); __builtin_constant_p(low) ? __extension__({ u_int16_t __swap16gen_x = (__swap16_x); (u_int16_t)((__swap16gen_x & 0xff) << 8 | (__swap16gen_x & 0xff00) >> 8); }) : ({ u_int16_t __swap16md_x = (__swap16_x); __asm ("rorw $8, %w1" : "+r" (__swap16md_x)); __swap16md_x; }); });
    return (0);
   }
  } else {
   u_int16_t tmp;

   if (low > high) {
    tmp = low;
    low = high;
    high = tmp;
   }

   cut = arc4random() % (1 + high - low) + low;

   for (tmp = cut; tmp <= high; ++(tmp)) {
    key.gwy.port = __extension__({ u_int16_t __swap16_x = (tmp); __builtin_constant_p(tmp) ? __extension__({ u_int16_t __swap16gen_x = (__swap16_x); (u_int16_t)((__swap16gen_x & 0xff) << 8 | (__swap16gen_x & 0xff00) >> 8); }) : ({ u_int16_t __swap16md_x = (__swap16_x); __asm ("rorw $8, %w1" : "+r" (__swap16md_x)); __swap16md_x; }); });
    if (pf_find_state_all(&key, PF_EXT_GWY, 0L) ==
        0L) {
     *nport = __extension__({ u_int16_t __swap16_x = (tmp); __builtin_constant_p(tmp) ? __extension__({ u_int16_t __swap16gen_x = (__swap16_x); (u_int16_t)((__swap16gen_x & 0xff) << 8 | (__swap16gen_x & 0xff00) >> 8); }) : ({ u_int16_t __swap16md_x = (__swap16_x); __asm ("rorw $8, %w1" : "+r" (__swap16md_x)); __swap16md_x; }); });
     return (0);
    }
   }
   for (tmp = cut - 1; tmp >= low; --(tmp)) {
    key.gwy.port = __extension__({ u_int16_t __swap16_x = (tmp); __builtin_constant_p(tmp) ? __extension__({ u_int16_t __swap16gen_x = (__swap16_x); (u_int16_t)((__swap16gen_x & 0xff) << 8 | (__swap16gen_x & 0xff00) >> 8); }) : ({ u_int16_t __swap16md_x = (__swap16_x); __asm ("rorw $8, %w1" : "+r" (__swap16md_x)); __swap16md_x; }); });
    if (pf_find_state_all(&key, PF_EXT_GWY, 0L) ==
        0L) {
     *nport = __extension__({ u_int16_t __swap16_x = (tmp); __builtin_constant_p(tmp) ? __extension__({ u_int16_t __swap16gen_x = (__swap16_x); (u_int16_t)((__swap16gen_x & 0xff) << 8 | (__swap16gen_x & 0xff00) >> 8); }) : ({ u_int16_t __swap16md_x = (__swap16_x); __asm ("rorw $8, %w1" : "+r" (__swap16md_x)); __swap16md_x; }); });
     return (0);
    }
   }
  }

  switch (r->rpool.opts & 0x0f) {
  case PF_POOL_RANDOM:
  case PF_POOL_ROUNDROBIN:
   if (pf_map_addr(af, r, saddr, naddr, &init_addr, sn))
    return (1);
   break;
  case PF_POOL_NONE:
  case PF_POOL_SRCHASH:
  case PF_POOL_BITMASK:
  default:
   return (1);
  }
 } while (! ((af == 2 && (&init_addr)->pfa.addr32[0] == (naddr)->pfa.addr32[0]) || ((&init_addr)->pfa.addr32[3] == (naddr)->pfa.addr32[3] && (&init_addr)->pfa.addr32[2] == (naddr)->pfa.addr32[2] && (&init_addr)->pfa.addr32[1] == (naddr)->pfa.addr32[1] && (&init_addr)->pfa.addr32[0] == (naddr)->pfa.addr32[0])) );

 return (1);
}

struct pf_rule *
pf_match_translation(struct pf_pdesc *pd, struct mbuf *m, int off,
    int direction, struct pfi_kif *kif, struct pf_addr *saddr, u_int16_t sport,
    struct pf_addr *daddr, u_int16_t dport, int rs_num)
{
 struct pf_rule *r, *rm = 0L, *anchorrule = 0L;
 struct pf_ruleset *ruleset = 0L;

 r = ((global_pf_main_ruleset[get_stack_id()].rules[rs_num].active.ptr)->tqh_first);
 while (r && rm == 0L) {
  struct pf_rule_addr *src = 0L, *dst = 0L;
  struct pf_addr_wrap *xdst = 0L;

  if (r->action == PF_BINAT && direction == PF_IN) {
   src = &r->dst;
   if (r->rpool.cur != 0L)
    xdst = &r->rpool.cur->addr;
  } else {
   src = &r->src;
   dst = &r->dst;
  }

  r->evaluations++;
  if (r->kif != 0L &&
      (r->kif != kif && r->kif != kif->pfik_parent) == !r->ifnot)
   r = r->skip[0].ptr;
  else if (r->direction && r->direction != direction)
   r = r->skip[1].ptr;
  else if (r->af && r->af != pd->af)
   r = r->skip[2].ptr;
  else if (r->proto && r->proto != pd->proto)
   r = r->skip[3].ptr;
  else if (( (((&src->addr)->type == PF_ADDR_NOROUTE && pf_routable((saddr), (pd->af))) || ((&src->addr)->type == PF_ADDR_TABLE && !pfr_match_addr((&src->addr)->p.tbl, (saddr), (pd->af))) || ((&src->addr)->type == PF_ADDR_DYNIFTL && !pfi_match_addr((&src->addr)->p.dyn, (saddr), (pd->af))) || ((&src->addr)->type == PF_ADDR_ADDRMASK && !(((pd->af) == 2 && !(&(&src->addr)->v.a.mask)->pfa.addr32[0]) || (!(&(&src->addr)->v.a.mask)->pfa.addr32[0] && !(&(&src->addr)->v.a.mask)->pfa.addr32[1] && !(&(&src->addr)->v.a.mask)->pfa.addr32[2] && !(&(&src->addr)->v.a.mask)->pfa.addr32[3] )) && !pf_match_addr(0, &(&src->addr)->v.a.addr, &(&src->addr)->v.a.mask, (saddr), (pd->af)))) != (src->not) ))
   r = r->skip[src == &r->src ? 4 :
       6].ptr;
  else if (src->port_op && !pf_match_port(src->port_op,
      src->port[0], src->port[1], sport))
   r = r->skip[src == &r->src ? 5 :
       7].ptr;
  else if (dst != 0L &&
      ( (((&dst->addr)->type == PF_ADDR_NOROUTE && pf_routable((daddr), (pd->af))) || ((&dst->addr)->type == PF_ADDR_TABLE && !pfr_match_addr((&dst->addr)->p.tbl, (daddr), (pd->af))) || ((&dst->addr)->type == PF_ADDR_DYNIFTL && !pfi_match_addr((&dst->addr)->p.dyn, (daddr), (pd->af))) || ((&dst->addr)->type == PF_ADDR_ADDRMASK && !(((pd->af) == 2 && !(&(&dst->addr)->v.a.mask)->pfa.addr32[0]) || (!(&(&dst->addr)->v.a.mask)->pfa.addr32[0] && !(&(&dst->addr)->v.a.mask)->pfa.addr32[1] && !(&(&dst->addr)->v.a.mask)->pfa.addr32[2] && !(&(&dst->addr)->v.a.mask)->pfa.addr32[3] )) && !pf_match_addr(0, &(&dst->addr)->v.a.addr, &(&dst->addr)->v.a.mask, (daddr), (pd->af)))) != (dst->not) ))
   r = r->skip[6].ptr;
  else if (xdst != 0L && ( (((xdst)->type == PF_ADDR_NOROUTE && pf_routable((daddr), (pd->af))) || ((xdst)->type == PF_ADDR_TABLE && !pfr_match_addr((xdst)->p.tbl, (daddr), (pd->af))) || ((xdst)->type == PF_ADDR_DYNIFTL && !pfi_match_addr((xdst)->p.dyn, (daddr), (pd->af))) || ((xdst)->type == PF_ADDR_ADDRMASK && !(((pd->af) == 2 && !(&(xdst)->v.a.mask)->pfa.addr32[0]) || (!(&(xdst)->v.a.mask)->pfa.addr32[0] && !(&(xdst)->v.a.mask)->pfa.addr32[1] && !(&(xdst)->v.a.mask)->pfa.addr32[2] && !(&(xdst)->v.a.mask)->pfa.addr32[3] )) && !pf_match_addr(0, &(xdst)->v.a.addr, &(xdst)->v.a.mask, (daddr), (pd->af)))) != (0) ))
   r = ((r)->entries.tqe_next);
  else if (dst != 0L && dst->port_op &&
      !pf_match_port(dst->port_op, dst->port[0],
      dst->port[1], dport))
   r = r->skip[7].ptr;
  else if (r->os_fingerprint != ((pf_osfp_t)0) && (pd->proto !=
      6 || !pf_osfp_match(pf_osfp_fingerprint(pd, m,
      off, pd->hdr.tcp), r->os_fingerprint)))
   r = ((r)->entries.tqe_next);
  else if (r->anchorname[0] && r->anchor == 0L)
   r = ((r)->entries.tqe_next);
  else if (r->anchor == 0L)
    rm = r;
  else
   do { if ((r) == 0L || (r)->anchor == 0L || (ruleset) != 0L || (anchorrule) != 0L) panic("PF_STEP_INTO_ANCHOR"); (anchorrule) = (r); (ruleset) = ((&(r)->anchor->rulesets)->tqh_first); (r) = 0L; while ((ruleset) != 0L && ((r) = (((ruleset)->rules[rs_num].active.ptr)->tqh_first)) == 0L) (ruleset) = (((ruleset))->entries.tqe_next); if ((r) == 0L) { (r) = (((anchorrule))->entries.tqe_next); (anchorrule) = 0L; } } while (0);
  if (r == 0L && anchorrule != 0L)
   do { if ((r) != 0L || (anchorrule) == 0L || (ruleset) == 0L) panic("PF_STEP_OUT_OF_ANCHOR"); (ruleset) = (((ruleset))->entries.tqe_next); while ((ruleset) != 0L && ((r) = (((ruleset)->rules[rs_num].active.ptr)->tqh_first)) == 0L) (ruleset) = (((ruleset))->entries.tqe_next); if ((r) == 0L) { (r) = (((anchorrule))->entries.tqe_next); (anchorrule) = 0L; } } while (0)
              ;
 }
 if (rm != 0L && (rm->action == PF_NONAT ||
     rm->action == PF_NORDR || rm->action == PF_NOBINAT))
  return (0L);
 return (rm);
}

struct pf_rule *
pf_get_translation(struct pf_pdesc *pd, struct mbuf *m, int off, int direction,
    struct pfi_kif *kif, struct pf_src_node **sn,
    struct pf_addr *saddr, u_int16_t sport,
    struct pf_addr *daddr, u_int16_t dport,
    struct pf_addr *naddr, u_int16_t *nport)
{
 struct pf_rule *r = 0L;

 if (direction == PF_OUT) {
  r = pf_match_translation(pd, m, off, direction, kif, saddr,
      sport, daddr, dport, PF_RULESET_BINAT);
  if (r == 0L)
   r = pf_match_translation(pd, m, off, direction, kif,
       saddr, sport, daddr, dport, PF_RULESET_NAT);
 } else {
  r = pf_match_translation(pd, m, off, direction, kif, saddr,
      sport, daddr, dport, PF_RULESET_RDR);
  if (r == 0L)
   r = pf_match_translation(pd, m, off, direction, kif,
       saddr, sport, daddr, dport, PF_RULESET_BINAT);
 }

 if (r != 0L) {
  switch (r->action) {
  case PF_NONAT:
  case PF_NOBINAT:
  case PF_NORDR:
   return (0L);
  case PF_NAT:
   if (pf_get_sport(pd->af, pd->proto, r, saddr,
       daddr, dport, naddr, nport, r->rpool.proxy_port[0],
       r->rpool.proxy_port[1], sn)) {
    if (global_pf_status[get_stack_id()].debug >= (PF_DEBUG_MISC)) printf ("pf: NAT proxy port allocation " "(%u-%u) failed\n", r->rpool.proxy_port[0], r->rpool.proxy_port[1])



                                ;
    return (0L);
   }
   break;
  case PF_BINAT:
   switch (direction) {
   case PF_OUT:
    if (r->rpool.cur->addr.type == PF_ADDR_DYNIFTL){
     if (pd->af == 2) {
      if (r->rpool.cur->addr.p.dyn->
          pfid_acnt4 < 1)
       return (0L);
      pf_poolmask(naddr, &r->rpool.cur->addr.p.dyn-> pfid_addr4, &r->rpool.cur->addr.p.dyn-> pfid_mask4, saddr, 2)




                         ;
     } else {
      if (r->rpool.cur->addr.p.dyn->
          pfid_acnt6 < 1)
       return (0L);
      pf_poolmask(naddr, &r->rpool.cur->addr.p.dyn-> pfid_addr6, &r->rpool.cur->addr.p.dyn-> pfid_mask6, saddr, 24)




                          ;
     }
    } else
     pf_poolmask(naddr, &r->rpool.cur->addr.v.a.addr, &r->rpool.cur->addr.v.a.mask, saddr, pd->af)


                       ;
    break;
   case PF_IN:
    if (r->rpool.cur->addr.type == PF_ADDR_DYNIFTL){
     if (pd->af == 2) {
      if (r->src.addr.p.dyn->
          pfid_acnt4 < 1)
       return (0L);
      pf_poolmask(naddr, &r->src.addr.p.dyn-> pfid_addr4, &r->src.addr.p.dyn-> pfid_mask4, daddr, 2)




                         ;
     } else {
      if (r->src.addr.p.dyn->
          pfid_acnt6 < 1)
       return (0L);
      pf_poolmask(naddr, &r->src.addr.p.dyn-> pfid_addr6, &r->src.addr.p.dyn-> pfid_mask6, daddr, 24)




                          ;
     }
    } else
     pf_poolmask(naddr, &r->src.addr.v.a.addr, &r->src.addr.v.a.mask, daddr, pd->af)


                ;
    break;
   }
   break;
  case PF_RDR: {
   if (pf_map_addr(r->af, r, saddr, naddr, 0L, sn))
    return (0L);

   if (r->rpool.proxy_port[1]) {
    u_int32_t tmp_nport;

    tmp_nport = ((__extension__({ u_int16_t __swap16_x = (dport); __builtin_constant_p(dport) ? __extension__({ u_int16_t __swap16gen_x = (__swap16_x); (u_int16_t)((__swap16gen_x & 0xff) << 8 | (__swap16gen_x & 0xff00) >> 8); }) : ({ u_int16_t __swap16md_x = (__swap16_x); __asm ("rorw $8, %w1" : "+r" (__swap16md_x)); __swap16md_x; }); }) -
        __extension__({ u_int16_t __swap16_x = (r->dst.port[0]); __builtin_constant_p(r->dst.port[0]) ? __extension__({ u_int16_t __swap16gen_x = (__swap16_x); (u_int16_t)((__swap16gen_x & 0xff) << 8 | (__swap16gen_x & 0xff00) >> 8); }) : ({ u_int16_t __swap16md_x = (__swap16_x); __asm ("rorw $8, %w1" : "+r" (__swap16md_x)); __swap16md_x; }); })) %
        (r->rpool.proxy_port[1] -
        r->rpool.proxy_port[0] + 1)) +
        r->rpool.proxy_port[0];


    if (tmp_nport > 65535)
     tmp_nport -= 65535;
    *nport = __extension__({ u_int16_t __swap16_x = ((u_int16_t)tmp_nport); __builtin_constant_p((u_int16_t)tmp_nport) ? __extension__({ u_int16_t __swap16gen_x = (__swap16_x); (u_int16_t)((__swap16gen_x & 0xff) << 8 | (__swap16gen_x & 0xff00) >> 8); }) : ({ u_int16_t __swap16md_x = (__swap16_x); __asm ("rorw $8, %w1" : "+r" (__swap16md_x)); __swap16md_x; }); });
   } else if (r->rpool.proxy_port[0])
    *nport = __extension__({ u_int16_t __swap16_x = (r->rpool.proxy_port[0]); __builtin_constant_p(r->rpool.proxy_port[0]) ? __extension__({ u_int16_t __swap16gen_x = (__swap16_x); (u_int16_t)((__swap16gen_x & 0xff) << 8 | (__swap16gen_x & 0xff00) >> 8); }) : ({ u_int16_t __swap16md_x = (__swap16_x); __asm ("rorw $8, %w1" : "+r" (__swap16md_x)); __swap16md_x; }); });
   break;
  }
  default:
   return (0L);
  }
 }

 return (r);
}

int
pf_socket_lookup(uid_t *uid, gid_t *gid, int direction, struct pf_pdesc *pd)
{
 struct pf_addr *saddr, *daddr;
 u_int16_t sport, dport;
 struct inpcbtable *tb;
 struct inpcb *inp;

 *uid = 0xffffffffU;
 *gid = 0xffffffffU;
 switch (pd->proto) {
 case 6:
  sport = pd->hdr.tcp->th_sport;
  dport = pd->hdr.tcp->th_dport;
  tb = &global_tcbtable[get_stack_id()];
  break;
 case 17:
  sport = pd->hdr.udp->uh_sport;
  dport = pd->hdr.udp->uh_dport;
  tb = &global_udbtable[get_stack_id()];
  break;
 default:
  return (0);
 }
 if (direction == PF_IN) {
  saddr = pd->src;
  daddr = pd->dst;
 } else {
  u_int16_t p;

  p = sport;
  sport = dport;
  dport = p;
  saddr = pd->dst;
  daddr = pd->src;
 }
 switch (pd->af) {
 case 2:
  inp = in_pcbhashlookup(tb, saddr->pfa.v4, sport, daddr->pfa.v4, dport);
  if (inp == 0L) {
   inp = in_pcblookup_listen(tb, daddr->pfa.v4, dport, 0);
   if (inp == 0L)
    return (0);
  }
  break;

 case 24:
  inp = in6_pcbhashlookup(tb, &saddr->pfa.v6, sport, &daddr->pfa.v6,
      dport);
  if (inp == 0L) {
   inp = in6_pcblookup_listen(tb, &daddr->pfa.v6, dport, 0);
   if (inp == 0L)
    return (0);
  }
  break;


 default:
  return (0);
 }
 *uid = inp->inp_socket->so_euid;
 *gid = inp->inp_socket->so_egid;
 return (1);
}

u_int8_t
pf_get_wscale(struct mbuf *m, int off, u_int16_t th_off, sa_family_t af)
{
 int hlen;
 u_int8_t hdr[60];
 u_int8_t *opt, optlen;
 u_int8_t wscale = 0;

 hlen = th_off << 2;
 if (hlen <= sizeof(struct tcphdr))
  return (0);
 if (!pf_pull_hdr(m, off, hdr, hlen, 0L, 0L, af))
  return (0);
 opt = hdr + sizeof(struct tcphdr);
 hlen -= sizeof(struct tcphdr);
 while (hlen >= 3) {
  switch (*opt) {
  case 0:
  case 1:
   ++opt;
   --hlen;
   break;
  case 3:
   wscale = opt[2];
   if (wscale > 14)
    wscale = 14;
   wscale |= 0x80;

  default:
   optlen = opt[1];
   if (optlen < 2)
    optlen = 2;
   hlen -= optlen;
   opt += optlen;
   break;
  }
 }
 return (wscale);
}

u_int16_t
pf_get_mss(struct mbuf *m, int off, u_int16_t th_off, sa_family_t af)
{
 int hlen;
 u_int8_t hdr[60];
 u_int8_t *opt, optlen;
 u_int16_t mss = global_tcp_mssdflt[get_stack_id()];

 hlen = th_off << 2;
 if (hlen <= sizeof(struct tcphdr))
  return (0);
 if (!pf_pull_hdr(m, off, hdr, hlen, 0L, 0L, af))
  return (0);
 opt = hdr + sizeof(struct tcphdr);
 hlen -= sizeof(struct tcphdr);
 while (hlen >= 4) {
  switch (*opt) {
  case 0:
  case 1:
   ++opt;
   --hlen;
   break;
  case 2:
   bcopy((caddr_t)(opt + 2), (caddr_t)&mss, 2);

  default:
   optlen = opt[1];
   if (optlen < 2)
    optlen = 2;
   hlen -= optlen;
   opt += optlen;
   break;
  }
 }
 return (mss);
}

u_int16_t
pf_calc_mss(struct pf_addr *addr, sa_family_t af, u_int16_t offer)
{

 struct sockaddr_in *dst;
 struct route ro;


 struct sockaddr_in6 *dst6;
 struct route_in6 ro6;

 struct rtentry *rt = 0L;
 int hlen;
 u_int16_t mss = global_tcp_mssdflt[get_stack_id()];

 switch (af) {

 case 2:
  hlen = sizeof(struct ip);
  bzero(&ro, sizeof(ro));
  dst = (struct sockaddr_in *)&ro.ro_dst;
  dst->sin_family = 2;
  dst->sin_len = sizeof(*dst);
  dst->sin_addr = addr->pfa.v4;
  rtalloc_noclone(&ro, 2);
  rt = ro.ro_rt;
  break;


 case 24:
  hlen = sizeof(struct ip6_hdr);
  bzero(&ro6, sizeof(ro6));
  dst6 = (struct sockaddr_in6 *)&ro6.ro_dst;
  dst6->sin6_family = 24;
  dst6->sin6_len = sizeof(*dst6);
  dst6->sin6_addr = addr->pfa.v6;
  rtalloc_noclone((struct route *)&ro6, 2);
  rt = ro6.ro_rt;
  break;

 }

 if (rt && rt->rt_ifp) {
  mss = rt->rt_ifp->if_data.ifi_mtu - hlen - sizeof(struct tcphdr);
  mss = max(global_tcp_mssdflt[get_stack_id()], mss);
  do { if ((rt)->rt_refcnt <= 1) rtfree(rt); else (rt)->rt_refcnt--; } while (0);
 }
 mss = min(mss, offer);
 mss = max(mss, 64);
 return (mss);
}

void
pf_set_rt_ifp(struct pf_state *s, struct pf_addr *saddr)
{
 struct pf_rule *r = s->rule.ptr;

 s->rt_kif = 0L;
 if (!r->rt || r->rt == PF_FASTROUTE)
  return;
 switch (s->af) {

 case 2:
  pf_map_addr(2, r, saddr, &s->rt_addr, 0L,
      &s->nat_src_node);
  s->rt_kif = r->rpool.cur->kif;
  break;


 case 24:
  pf_map_addr(24, r, saddr, &s->rt_addr, 0L,
      &s->nat_src_node);
  s->rt_kif = r->rpool.cur->kif;
  break;

 }
}

int
pf_test_tcp(struct pf_rule **rm, struct pf_state **sm, int direction,
    struct pfi_kif *kif, struct mbuf *m, int off, void *h,
    struct pf_pdesc *pd, struct pf_rule **am, struct pf_ruleset **rsm)
{
 struct pf_rule *nr = 0L;
 struct pf_addr *saddr = pd->src, *daddr = pd->dst;
 struct tcphdr *th = pd->hdr.tcp;
 u_int16_t bport, nport = 0;
 sa_family_t af = pd->af;
 int lookup = -1;
 uid_t uid;
 gid_t gid;
 struct pf_rule *r, *a = 0L;
 struct pf_ruleset *ruleset = 0L;
 struct pf_src_node *nsn = 0L;
 u_short reason;
 int rewrite = 0;
 struct pf_tag *pftag = 0L;
 int tag = -1;
 u_int16_t mss = global_tcp_mssdflt[get_stack_id()];

 r = ((global_pf_main_ruleset[get_stack_id()].rules[PF_RULESET_FILTER].active.ptr)->tqh_first);

 if (direction == PF_OUT) {
  bport = nport = th->th_sport;

  if ((nr = pf_get_translation(pd, m, off, PF_OUT, kif, &nsn,
      saddr, th->th_sport, daddr, th->th_dport,
      &pd->naddr, &nport)) != 0L) {
   pf_addrcpy(&pd->baddr, saddr, af);
   pf_change_ap(saddr, &th->th_sport, pd->ip_sum,
       &th->th_sum, &pd->naddr, nport, 0, af);
   rewrite++;
   if (nr->natpass)
    r = 0L;
   pd->nat_rule = nr;
  }
 } else {
  bport = nport = th->th_dport;

  if ((nr = pf_get_translation(pd, m, off, PF_IN, kif, &nsn,
      saddr, th->th_sport, daddr, th->th_dport,
      &pd->naddr, &nport)) != 0L) {
   pf_addrcpy(&pd->baddr, daddr, af);
   pf_change_ap(daddr, &th->th_dport, pd->ip_sum,
       &th->th_sum, &pd->naddr, nport, 0, af);
   rewrite++;
   if (nr->natpass)
    r = 0L;
   pd->nat_rule = nr;
  }
 }

 while (r != 0L) {
  r->evaluations++;
  if (r->kif != 0L &&
      (r->kif != kif && r->kif != kif->pfik_parent) == !r->ifnot)
   r = r->skip[0].ptr;
  else if (r->direction && r->direction != direction)
   r = r->skip[1].ptr;
  else if (r->af && r->af != af)
   r = r->skip[2].ptr;
  else if (r->proto && r->proto != 6)
   r = r->skip[3].ptr;
  else if (( (((&r->src.addr)->type == PF_ADDR_NOROUTE && pf_routable((saddr), (af))) || ((&r->src.addr)->type == PF_ADDR_TABLE && !pfr_match_addr((&r->src.addr)->p.tbl, (saddr), (af))) || ((&r->src.addr)->type == PF_ADDR_DYNIFTL && !pfi_match_addr((&r->src.addr)->p.dyn, (saddr), (af))) || ((&r->src.addr)->type == PF_ADDR_ADDRMASK && !(((af) == 2 && !(&(&r->src.addr)->v.a.mask)->pfa.addr32[0]) || (!(&(&r->src.addr)->v.a.mask)->pfa.addr32[0] && !(&(&r->src.addr)->v.a.mask)->pfa.addr32[1] && !(&(&r->src.addr)->v.a.mask)->pfa.addr32[2] && !(&(&r->src.addr)->v.a.mask)->pfa.addr32[3] )) && !pf_match_addr(0, &(&r->src.addr)->v.a.addr, &(&r->src.addr)->v.a.mask, (saddr), (af)))) != (r->src.not) ))
   r = r->skip[4].ptr;
  else if (r->src.port_op && !pf_match_port(r->src.port_op,
      r->src.port[0], r->src.port[1], th->th_sport))
   r = r->skip[5].ptr;
  else if (( (((&r->dst.addr)->type == PF_ADDR_NOROUTE && pf_routable((daddr), (af))) || ((&r->dst.addr)->type == PF_ADDR_TABLE && !pfr_match_addr((&r->dst.addr)->p.tbl, (daddr), (af))) || ((&r->dst.addr)->type == PF_ADDR_DYNIFTL && !pfi_match_addr((&r->dst.addr)->p.dyn, (daddr), (af))) || ((&r->dst.addr)->type == PF_ADDR_ADDRMASK && !(((af) == 2 && !(&(&r->dst.addr)->v.a.mask)->pfa.addr32[0]) || (!(&(&r->dst.addr)->v.a.mask)->pfa.addr32[0] && !(&(&r->dst.addr)->v.a.mask)->pfa.addr32[1] && !(&(&r->dst.addr)->v.a.mask)->pfa.addr32[2] && !(&(&r->dst.addr)->v.a.mask)->pfa.addr32[3] )) && !pf_match_addr(0, &(&r->dst.addr)->v.a.addr, &(&r->dst.addr)->v.a.mask, (daddr), (af)))) != (r->dst.not) ))
   r = r->skip[6].ptr;
  else if (r->dst.port_op && !pf_match_port(r->dst.port_op,
      r->dst.port[0], r->dst.port[1], th->th_dport))
   r = r->skip[7].ptr;
  else if (r->tos && !(r->tos & pd->tos))
   r = ((r)->entries.tqe_next);
  else if (r->rule_flag & 0x0002)
   r = ((r)->entries.tqe_next);
  else if ((r->flagset & th->th_flags) != r->flags)
   r = ((r)->entries.tqe_next);
  else if (r->uid.op && (lookup != -1 || (lookup =
      pf_socket_lookup(&uid, &gid, direction, pd), 1)) &&
      !pf_match_uid(r->uid.op, r->uid.uid[0], r->uid.uid[1],
      uid))
   r = ((r)->entries.tqe_next);
  else if (r->gid.op && (lookup != -1 || (lookup =
      pf_socket_lookup(&uid, &gid, direction, pd), 1)) &&
      !pf_match_gid(r->gid.op, r->gid.gid[0], r->gid.gid[1],
      gid))
   r = ((r)->entries.tqe_next);
  else if (r->match_tag && !pf_match_tag(m, r, nr, pftag, &tag))
   r = ((r)->entries.tqe_next);
  else if (r->anchorname[0] && r->anchor == 0L)
   r = ((r)->entries.tqe_next);
  else if (r->os_fingerprint != ((pf_osfp_t)0) && !pf_osfp_match(
      pf_osfp_fingerprint(pd, m, off, th), r->os_fingerprint))
   r = ((r)->entries.tqe_next);
  else {
   if (r->tag)
    tag = r->tag;
   if (r->anchor == 0L) {
    *rm = r;
    *am = a;
    *rsm = ruleset;
    if ((*rm)->quick)
     break;
    r = ((r)->entries.tqe_next);
   } else
    do { if ((r) == 0L || (r)->anchor == 0L || (ruleset) != 0L || (a) != 0L) panic("PF_STEP_INTO_ANCHOR"); (a) = (r); (ruleset) = ((&(r)->anchor->rulesets)->tqh_first); (r) = 0L; while ((ruleset) != 0L && ((r) = (((ruleset)->rules[PF_RULESET_FILTER].active.ptr)->tqh_first)) == 0L) (ruleset) = (((ruleset))->entries.tqe_next); if ((r) == 0L) { (r) = (((a))->entries.tqe_next); (a) = 0L; } } while (0)
                          ;
  }
  if (r == 0L && a != 0L)
   do { if ((r) != 0L || (a) == 0L || (ruleset) == 0L) panic("PF_STEP_OUT_OF_ANCHOR"); (ruleset) = (((ruleset))->entries.tqe_next); while ((ruleset) != 0L && ((r) = (((ruleset)->rules[PF_RULESET_FILTER].active.ptr)->tqh_first)) == 0L) (ruleset) = (((ruleset))->entries.tqe_next); if ((r) == 0L) { (r) = (((a))->entries.tqe_next); (a) = 0L; } } while (0)
                         ;
 }
 r = *rm;
 a = *am;
 ruleset = *rsm;

 do { if ((&reason) != 0L) *(&reason) = (0); if (0 < 6) global_pf_status[get_stack_id()].counters[0]++; } while (0);

 if (r->log) {
  if (rewrite)
   m_copyback(m, off, sizeof(*th), th);
  pflog_packet(kif,m,af,direction,reason,r,a,ruleset);
 }

 if ((r->action == PF_DROP) &&
     ((r->rule_flag & 0x0001) ||
     (r->rule_flag & 0x0004) ||
     (r->rule_flag & 0x0008))) {

  if (nr != 0L) {
   if (direction == PF_OUT) {
    pf_change_ap(saddr, &th->th_sport, pd->ip_sum,
        &th->th_sum, &pd->baddr, bport, 0, af);
    rewrite++;
   } else {
    pf_change_ap(daddr, &th->th_dport, pd->ip_sum,
        &th->th_sum, &pd->baddr, bport, 0, af);
    rewrite++;
   }
  }
  if (((r->rule_flag & 0x0001) ||
      (r->rule_flag & 0x0008)) &&
      !(th->th_flags & 0x04)) {
   u_int32_t ack = __extension__({ u_int32_t __swap32_x = (th->th_seq); __builtin_constant_p(th->th_seq) ? __extension__({ u_int32_t __swap32gen_x = (__swap32_x); (u_int32_t)((__swap32gen_x & 0xff) << 24 | (__swap32gen_x & 0xff00) << 8 | (__swap32gen_x & 0xff0000) >> 8 | (__swap32gen_x & 0xff000000) >> 24); }) : ({ u_int32_t __swap32md_x = (__swap32_x); __asm ("bswap %1" : "+r" (__swap32md_x)); __swap32md_x; }); }) + pd->p_len;

   if (th->th_flags & 0x02)
    ack++;
   if (th->th_flags & 0x01)
    ack++;
   pf_send_tcp(r, af, pd->dst,
       pd->src, th->th_dport, th->th_sport,
       __extension__({ u_int32_t __swap32_x = (th->th_ack); __builtin_constant_p(th->th_ack) ? __extension__({ u_int32_t __swap32gen_x = (__swap32_x); (u_int32_t)((__swap32gen_x & 0xff) << 24 | (__swap32gen_x & 0xff00) << 8 | (__swap32gen_x & 0xff0000) >> 8 | (__swap32gen_x & 0xff000000) >> 24); }) : ({ u_int32_t __swap32md_x = (__swap32_x); __asm ("bswap %1" : "+r" (__swap32md_x)); __swap32md_x; }); }), ack, 0x04|0x10, 0, 0,
       r->return_ttl);
  } else if ((af == 2) && r->return_icmp)
   pf_send_icmp(m, r->return_icmp >> 8,
       r->return_icmp & 255, af, r);
  else if ((af == 24) && r->return_icmp6)
   pf_send_icmp(m, r->return_icmp6 >> 8,
       r->return_icmp6 & 255, af, r);
 }

 if (r->action == PF_DROP)
  return (PF_DROP);

 if (pf_tag_packet(m, pftag, tag)) {
  do { if ((&reason) != 0L) *(&reason) = (5); if (5 < 6) global_pf_status[get_stack_id()].counters[5]++; } while (0);
  return (PF_DROP);
 }

 if (r->keep_state || nr != 0L ||
     (pd->flags & 0x0001)) {

  u_int16_t len;
  struct pf_state *s = 0L;
  struct pf_src_node *sn = 0L;

  len = pd->tot_len - off - (th->th_off << 2);


  if (r->max_states && (r->states >= r->max_states))
   goto cleanup;

  if ((r->rule_flag & 0x0020 ||
      r->rpool.opts & 0x20) &&
      pf_insert_src_node(&sn, r, saddr, af) != 0)
   goto cleanup;

  if (nr != 0L && (nr->rpool.opts & 0x20) &&
      ((direction == PF_OUT &&
      pf_insert_src_node(&nsn, nr, &pd->baddr, af) != 0) ||
      (pf_insert_src_node(&nsn, nr, saddr, af) != 0)))
   goto cleanup;
  s = pool_get(&global_pf_state_pl[get_stack_id()], 0x00);
  if (s == 0L) {
cleanup:
   if (sn != 0L && sn->states == 0 && sn->expire == 0) {
    pf_src_tree_RB_REMOVE(&global_tree_src_tracking[get_stack_id()], sn);
    global_pf_status[get_stack_id()].scounters[2]++;
    global_pf_status[get_stack_id()].src_nodes--;
    pool_put(&global_pf_src_tree_pl[get_stack_id()], sn);
   }
   if (nsn != sn && nsn != 0L && nsn->states == 0 &&
       nsn->expire == 0) {
    pf_src_tree_RB_REMOVE(&global_tree_src_tracking[get_stack_id()], nsn);
    global_pf_status[get_stack_id()].scounters[2]++;
    global_pf_status[get_stack_id()].src_nodes--;
    pool_put(&global_pf_src_tree_pl[get_stack_id()], nsn);
   }
   do { if ((&reason) != 0L) *(&reason) = (5); if (5 < 6) global_pf_status[get_stack_id()].counters[5]++; } while (0);
   return (PF_DROP);
  }
  bzero(s, sizeof(*s));
  r->states++;
  if (a != 0L)
   a->states++;
  s->rule.ptr = r;
  s->nat_rule.ptr = nr;
  if (s->nat_rule.ptr != 0L)
   s->nat_rule.ptr->states++;
  s->anchor.ptr = a;
  s->allow_opts = r->allow_opts;
  s->log = r->log & 2;
  s->proto = 6;
  s->direction = direction;
  s->af = af;
  if (direction == PF_OUT) {
   pf_addrcpy(&s->gwy.addr, saddr, af);
   s->gwy.port = th->th_sport;
   pf_addrcpy(&s->ext.addr, daddr, af);
   s->ext.port = th->th_dport;
   if (nr != 0L) {
    pf_addrcpy(&s->lan.addr, &pd->baddr, af);
    s->lan.port = bport;
   } else {
    pf_addrcpy(&s->lan.addr, &s->gwy.addr, af);
    s->lan.port = s->gwy.port;
   }
  } else {
   pf_addrcpy(&s->lan.addr, daddr, af);
   s->lan.port = th->th_dport;
   pf_addrcpy(&s->ext.addr, saddr, af);
   s->ext.port = th->th_sport;
   if (nr != 0L) {
    pf_addrcpy(&s->gwy.addr, &pd->baddr, af);
    s->gwy.port = bport;
   } else {
    pf_addrcpy(&s->gwy.addr, &s->lan.addr, af);
    s->gwy.port = s->lan.port;
   }
  }

  s->src.seqlo = __extension__({ u_int32_t __swap32_x = (th->th_seq); __builtin_constant_p(th->th_seq) ? __extension__({ u_int32_t __swap32gen_x = (__swap32_x); (u_int32_t)((__swap32gen_x & 0xff) << 24 | (__swap32gen_x & 0xff00) << 8 | (__swap32gen_x & 0xff0000) >> 8 | (__swap32gen_x & 0xff000000) >> 24); }) : ({ u_int32_t __swap32md_x = (__swap32_x); __asm ("bswap %1" : "+r" (__swap32md_x)); __swap32md_x; }); });
  s->src.seqhi = s->src.seqlo + len + 1;
  if ((th->th_flags & (0x02|0x10)) == 0x02 &&
      r->keep_state == 0x2) {

   while ((s->src.seqdiff = arc4random()) == 0)
    ;
   pf_change_a(&th->th_seq, &th->th_sum,
       __extension__({ u_int32_t __swap32_x = (s->src.seqlo + s->src.seqdiff); __builtin_constant_p(s->src.seqlo + s->src.seqdiff) ? __extension__({ u_int32_t __swap32gen_x = (__swap32_x); (u_int32_t)((__swap32gen_x & 0xff) << 24 | (__swap32gen_x & 0xff00) << 8 | (__swap32gen_x & 0xff0000) >> 8 | (__swap32gen_x & 0xff000000) >> 24); }) : ({ u_int32_t __swap32md_x = (__swap32_x); __asm ("bswap %1" : "+r" (__swap32md_x)); __swap32md_x; }); }), 0);
   rewrite = 1;
  } else
   s->src.seqdiff = 0;
  if (th->th_flags & 0x02) {
   s->src.seqhi++;
   s->src.wscale = pf_get_wscale(m, off, th->th_off, af);
  }
  s->src.max_win = (((__extension__({ u_int16_t __swap16_x = (th->th_win); __builtin_constant_p(th->th_win) ? __extension__({ u_int16_t __swap16gen_x = (__swap16_x); (u_int16_t)((__swap16gen_x & 0xff) << 8 | (__swap16gen_x & 0xff00) >> 8); }) : ({ u_int16_t __swap16md_x = (__swap16_x); __asm ("rorw $8, %w1" : "+r" (__swap16md_x)); __swap16md_x; }); }))>(1))?(__extension__({ u_int16_t __swap16_x = (th->th_win); __builtin_constant_p(th->th_win) ? __extension__({ u_int16_t __swap16gen_x = (__swap16_x); (u_int16_t)((__swap16gen_x & 0xff) << 8 | (__swap16gen_x & 0xff00) >> 8); }) : ({ u_int16_t __swap16md_x = (__swap16_x); __asm ("rorw $8, %w1" : "+r" (__swap16md_x)); __swap16md_x; }); })):(1));
  if (s->src.wscale & 0x0f) {

   int win = s->src.max_win;
   win += 1 << (s->src.wscale & 0x0f);
   s->src.max_win = (win - 1) >>
       (s->src.wscale & 0x0f);
  }
  if (th->th_flags & 0x01)
   s->src.seqhi++;
  s->dst.seqhi = 1;
  s->dst.max_win = 1;
  s->src.state = 2;
  s->dst.state = 0;
  s->creation = time.tv_sec;
  s->expire = time.tv_sec;
  s->timeout = PFTM_TCP_FIRST_PACKET;
  pf_set_rt_ifp(s, saddr);
  if (sn != 0L) {
   s->src_node = sn;
   s->src_node->states++;
  }
  if (nsn != 0L) {
   pf_addrcpy(&nsn->raddr, &pd->naddr, af);
   s->nat_src_node = nsn;
   s->nat_src_node->states++;
  }
  if ((pd->flags & 0x0001) && pf_normalize_tcp_init(m,
      off, pd, th, &s->src, &s->dst)) {
   do { if ((&reason) != 0L) *(&reason) = (5); if (5 < 6) global_pf_status[get_stack_id()].counters[5]++; } while (0);
   pf_src_tree_remove_state(s);
   pool_put(&global_pf_state_pl[get_stack_id()], s);
   return (PF_DROP);
  }
  if ((pd->flags & 0x0001) && s->src.scrub &&
      pf_normalize_tcp_stateful(m, off, pd, &reason, th, &s->src,
      &s->dst, &rewrite)) {
   pf_normalize_tcp_cleanup(s);
   pf_src_tree_remove_state(s);
   pool_put(&global_pf_state_pl[get_stack_id()], s);
   return (PF_DROP);
  }
  if (pf_insert_state((((r)->rule_flag & 0x00010000) ? (kif) : ((r)->rule_flag & 0x00020000) ? (kif)->pfik_parent : (kif)->pfik_parent->pfik_parent), s)) {
   pf_normalize_tcp_cleanup(s);
   do { if ((&reason) != 0L) *(&reason) = (5); if (5 < 6) global_pf_status[get_stack_id()].counters[5]++; } while (0);
   pf_src_tree_remove_state(s);
   pool_put(&global_pf_state_pl[get_stack_id()], s);
   return (PF_DROP);
  } else
   *sm = s;
  if ((th->th_flags & (0x02|0x10)) == 0x02 &&
      r->keep_state == 0x3) {
   s->src.state = ((11)+0);
   if (nr != 0L) {
    if (direction == PF_OUT) {
     pf_change_ap(saddr, &th->th_sport,
         pd->ip_sum, &th->th_sum, &pd->baddr,
         bport, 0, af);
    } else {
     pf_change_ap(daddr, &th->th_dport,
         pd->ip_sum, &th->th_sum, &pd->baddr,
         bport, 0, af);
    }
   }
   s->src.seqhi = arc4random();

   mss = pf_get_mss(m, off, th->th_off, af);
   mss = pf_calc_mss(saddr, af, mss);
   mss = pf_calc_mss(daddr, af, mss);
   s->src.mss = mss;
   pf_send_tcp(r, af, daddr, saddr, th->th_dport,
       th->th_sport, s->src.seqhi, __extension__({ u_int32_t __swap32_x = (th->th_seq); __builtin_constant_p(th->th_seq) ? __extension__({ u_int32_t __swap32gen_x = (__swap32_x); (u_int32_t)((__swap32gen_x & 0xff) << 24 | (__swap32gen_x & 0xff00) << 8 | (__swap32gen_x & 0xff0000) >> 8 | (__swap32gen_x & 0xff000000) >> 24); }) : ({ u_int32_t __swap32md_x = (__swap32_x); __asm ("bswap %1" : "+r" (__swap32md_x)); __swap32md_x; }); }) + 1,
       0x02|0x10, 0, s->src.mss, 0);
   return (PF_SYNPROXY_DROP);
  }
 }


 if (rewrite)
  m_copyback(m, off, sizeof(*th), th);

 return (PF_PASS);
}

int
pf_test_udp(struct pf_rule **rm, struct pf_state **sm, int direction,
    struct pfi_kif *kif, struct mbuf *m, int off, void *h,
    struct pf_pdesc *pd, struct pf_rule **am, struct pf_ruleset **rsm)
{
 struct pf_rule *nr = 0L;
 struct pf_addr *saddr = pd->src, *daddr = pd->dst;
 struct udphdr *uh = pd->hdr.udp;
 u_int16_t bport, nport = 0;
 sa_family_t af = pd->af;
 int lookup = -1;
 uid_t uid;
 gid_t gid;
 struct pf_rule *r, *a = 0L;
 struct pf_ruleset *ruleset = 0L;
 struct pf_src_node *nsn = 0L;
 u_short reason;
 int rewrite = 0;
 struct pf_tag *pftag = 0L;
 int tag = -1;

 r = ((global_pf_main_ruleset[get_stack_id()].rules[PF_RULESET_FILTER].active.ptr)->tqh_first);

 if (direction == PF_OUT) {
  bport = nport = uh->uh_sport;

  if ((nr = pf_get_translation(pd, m, off, PF_OUT, kif, &nsn,
      saddr, uh->uh_sport, daddr, uh->uh_dport,
      &pd->naddr, &nport)) != 0L) {
   pf_addrcpy(&pd->baddr, saddr, af);
   pf_change_ap(saddr, &uh->uh_sport, pd->ip_sum,
       &uh->uh_sum, &pd->naddr, nport, 1, af);
   rewrite++;
   if (nr->natpass)
    r = 0L;
   pd->nat_rule = nr;
  }
 } else {
  bport = nport = uh->uh_dport;

  if ((nr = pf_get_translation(pd, m, off, PF_IN, kif, &nsn,
      saddr, uh->uh_sport, daddr, uh->uh_dport, &pd->naddr,
      &nport)) != 0L) {
   pf_addrcpy(&pd->baddr, daddr, af);
   pf_change_ap(daddr, &uh->uh_dport, pd->ip_sum,
       &uh->uh_sum, &pd->naddr, nport, 1, af);
   rewrite++;
   if (nr->natpass)
    r = 0L;
   pd->nat_rule = nr;
  }
 }

 while (r != 0L) {
  r->evaluations++;
  if (r->kif != 0L &&
      (r->kif != kif && r->kif != kif->pfik_parent) == !r->ifnot)
   r = r->skip[0].ptr;
  else if (r->direction && r->direction != direction)
   r = r->skip[1].ptr;
  else if (r->af && r->af != af)
   r = r->skip[2].ptr;
  else if (r->proto && r->proto != 17)
   r = r->skip[3].ptr;
  else if (( (((&r->src.addr)->type == PF_ADDR_NOROUTE && pf_routable((saddr), (af))) || ((&r->src.addr)->type == PF_ADDR_TABLE && !pfr_match_addr((&r->src.addr)->p.tbl, (saddr), (af))) || ((&r->src.addr)->type == PF_ADDR_DYNIFTL && !pfi_match_addr((&r->src.addr)->p.dyn, (saddr), (af))) || ((&r->src.addr)->type == PF_ADDR_ADDRMASK && !(((af) == 2 && !(&(&r->src.addr)->v.a.mask)->pfa.addr32[0]) || (!(&(&r->src.addr)->v.a.mask)->pfa.addr32[0] && !(&(&r->src.addr)->v.a.mask)->pfa.addr32[1] && !(&(&r->src.addr)->v.a.mask)->pfa.addr32[2] && !(&(&r->src.addr)->v.a.mask)->pfa.addr32[3] )) && !pf_match_addr(0, &(&r->src.addr)->v.a.addr, &(&r->src.addr)->v.a.mask, (saddr), (af)))) != (r->src.not) ))
   r = r->skip[4].ptr;
  else if (r->src.port_op && !pf_match_port(r->src.port_op,
      r->src.port[0], r->src.port[1], uh->uh_sport))
   r = r->skip[5].ptr;
  else if (( (((&r->dst.addr)->type == PF_ADDR_NOROUTE && pf_routable((daddr), (af))) || ((&r->dst.addr)->type == PF_ADDR_TABLE && !pfr_match_addr((&r->dst.addr)->p.tbl, (daddr), (af))) || ((&r->dst.addr)->type == PF_ADDR_DYNIFTL && !pfi_match_addr((&r->dst.addr)->p.dyn, (daddr), (af))) || ((&r->dst.addr)->type == PF_ADDR_ADDRMASK && !(((af) == 2 && !(&(&r->dst.addr)->v.a.mask)->pfa.addr32[0]) || (!(&(&r->dst.addr)->v.a.mask)->pfa.addr32[0] && !(&(&r->dst.addr)->v.a.mask)->pfa.addr32[1] && !(&(&r->dst.addr)->v.a.mask)->pfa.addr32[2] && !(&(&r->dst.addr)->v.a.mask)->pfa.addr32[3] )) && !pf_match_addr(0, &(&r->dst.addr)->v.a.addr, &(&r->dst.addr)->v.a.mask, (daddr), (af)))) != (r->dst.not) ))
   r = r->skip[6].ptr;
  else if (r->dst.port_op && !pf_match_port(r->dst.port_op,
      r->dst.port[0], r->dst.port[1], uh->uh_dport))
   r = r->skip[7].ptr;
  else if (r->tos && !(r->tos & pd->tos))
   r = ((r)->entries.tqe_next);
  else if (r->rule_flag & 0x0002)
   r = ((r)->entries.tqe_next);
  else if (r->uid.op && (lookup != -1 || (lookup =
      pf_socket_lookup(&uid, &gid, direction, pd), 1)) &&
      !pf_match_uid(r->uid.op, r->uid.uid[0], r->uid.uid[1],
      uid))
   r = ((r)->entries.tqe_next);
  else if (r->gid.op && (lookup != -1 || (lookup =
      pf_socket_lookup(&uid, &gid, direction, pd), 1)) &&
      !pf_match_gid(r->gid.op, r->gid.gid[0], r->gid.gid[1],
      gid))
   r = ((r)->entries.tqe_next);
  else if (r->match_tag && !pf_match_tag(m, r, nr, pftag, &tag))
   r = ((r)->entries.tqe_next);
  else if (r->anchorname[0] && r->anchor == 0L)
   r = ((r)->entries.tqe_next);
  else if (r->os_fingerprint != ((pf_osfp_t)0))
   r = ((r)->entries.tqe_next);
  else {
   if (r->tag)
    tag = r->tag;
   if (r->anchor == 0L) {
    *rm = r;
    *am = a;
    *rsm = ruleset;
    if ((*rm)->quick)
     break;
    r = ((r)->entries.tqe_next);
   } else
    do { if ((r) == 0L || (r)->anchor == 0L || (ruleset) != 0L || (a) != 0L) panic("PF_STEP_INTO_ANCHOR"); (a) = (r); (ruleset) = ((&(r)->anchor->rulesets)->tqh_first); (r) = 0L; while ((ruleset) != 0L && ((r) = (((ruleset)->rules[PF_RULESET_FILTER].active.ptr)->tqh_first)) == 0L) (ruleset) = (((ruleset))->entries.tqe_next); if ((r) == 0L) { (r) = (((a))->entries.tqe_next); (a) = 0L; } } while (0)
                          ;
  }
  if (r == 0L && a != 0L)
   do { if ((r) != 0L || (a) == 0L || (ruleset) == 0L) panic("PF_STEP_OUT_OF_ANCHOR"); (ruleset) = (((ruleset))->entries.tqe_next); while ((ruleset) != 0L && ((r) = (((ruleset)->rules[PF_RULESET_FILTER].active.ptr)->tqh_first)) == 0L) (ruleset) = (((ruleset))->entries.tqe_next); if ((r) == 0L) { (r) = (((a))->entries.tqe_next); (a) = 0L; } } while (0)
                         ;
 }
 r = *rm;
 a = *am;
 ruleset = *rsm;

 do { if ((&reason) != 0L) *(&reason) = (0); if (0 < 6) global_pf_status[get_stack_id()].counters[0]++; } while (0);

 if (r->log) {
  if (rewrite)
   m_copyback(m, off, sizeof(*uh), uh);
  pflog_packet(kif,m,af,direction,reason,r,a,ruleset);
 }

 if ((r->action == PF_DROP) &&
     ((r->rule_flag & 0x0004) ||
     (r->rule_flag & 0x0008))) {

  if (nr != 0L) {
   if (direction == PF_OUT) {
    pf_change_ap(saddr, &uh->uh_sport, pd->ip_sum,
        &uh->uh_sum, &pd->baddr, bport, 1, af);
    rewrite++;
   } else {
    pf_change_ap(daddr, &uh->uh_dport, pd->ip_sum,
        &uh->uh_sum, &pd->baddr, bport, 1, af);
    rewrite++;
   }
  }
  if ((af == 2) && r->return_icmp)
   pf_send_icmp(m, r->return_icmp >> 8,
       r->return_icmp & 255, af, r);
  else if ((af == 24) && r->return_icmp6)
   pf_send_icmp(m, r->return_icmp6 >> 8,
       r->return_icmp6 & 255, af, r);
 }

 if (r->action == PF_DROP)
  return (PF_DROP);

 if (pf_tag_packet(m, pftag, tag)) {
  do { if ((&reason) != 0L) *(&reason) = (5); if (5 < 6) global_pf_status[get_stack_id()].counters[5]++; } while (0);
  return (PF_DROP);
 }

 if (r->keep_state || nr != 0L) {

  struct pf_state *s = 0L;
  struct pf_src_node *sn = 0L;


  if (r->max_states && (r->states >= r->max_states))
   goto cleanup;

  if ((r->rule_flag & 0x0020 ||
      r->rpool.opts & 0x20) &&
      pf_insert_src_node(&sn, r, saddr, af) != 0)
   goto cleanup;

  if (nr != 0L && (nr->rpool.opts & 0x20) &&
      ((direction == PF_OUT &&
      pf_insert_src_node(&nsn, nr, &pd->baddr, af) != 0) ||
      (pf_insert_src_node(&nsn, nr, saddr, af) != 0)))
   goto cleanup;
  s = pool_get(&global_pf_state_pl[get_stack_id()], 0x00);
  if (s == 0L) {
cleanup:
   if (sn != 0L && sn->states == 0 && sn->expire == 0) {
    pf_src_tree_RB_REMOVE(&global_tree_src_tracking[get_stack_id()], sn);
    global_pf_status[get_stack_id()].scounters[2]++;
    global_pf_status[get_stack_id()].src_nodes--;
    pool_put(&global_pf_src_tree_pl[get_stack_id()], sn);
   }
   if (nsn != sn && nsn != 0L && nsn->states == 0 &&
       nsn->expire == 0) {
    pf_src_tree_RB_REMOVE(&global_tree_src_tracking[get_stack_id()], nsn);
    global_pf_status[get_stack_id()].scounters[2]++;
    global_pf_status[get_stack_id()].src_nodes--;
    pool_put(&global_pf_src_tree_pl[get_stack_id()], nsn);
   }
   do { if ((&reason) != 0L) *(&reason) = (5); if (5 < 6) global_pf_status[get_stack_id()].counters[5]++; } while (0);
   return (PF_DROP);
  }
  bzero(s, sizeof(*s));
  r->states++;
  if (a != 0L)
   a->states++;
  s->rule.ptr = r;
  s->nat_rule.ptr = nr;
  if (s->nat_rule.ptr != 0L)
   s->nat_rule.ptr->states++;
  s->anchor.ptr = a;
  s->allow_opts = r->allow_opts;
  s->log = r->log & 2;
  s->proto = 17;
  s->direction = direction;
  s->af = af;
  if (direction == PF_OUT) {
   pf_addrcpy(&s->gwy.addr, saddr, af);
   s->gwy.port = uh->uh_sport;
   pf_addrcpy(&s->ext.addr, daddr, af);
   s->ext.port = uh->uh_dport;
   if (nr != 0L) {
    pf_addrcpy(&s->lan.addr, &pd->baddr, af);
    s->lan.port = bport;
   } else {
    pf_addrcpy(&s->lan.addr, &s->gwy.addr, af);
    s->lan.port = s->gwy.port;
   }
  } else {
   pf_addrcpy(&s->lan.addr, daddr, af);
   s->lan.port = uh->uh_dport;
   pf_addrcpy(&s->ext.addr, saddr, af);
   s->ext.port = uh->uh_sport;
   if (nr != 0L) {
    pf_addrcpy(&s->gwy.addr, &pd->baddr, af);
    s->gwy.port = bport;
   } else {
    pf_addrcpy(&s->gwy.addr, &s->lan.addr, af);
    s->gwy.port = s->lan.port;
   }
  }
  s->src.state = 1;
  s->dst.state = 0;
  s->creation = time.tv_sec;
  s->expire = time.tv_sec;
  s->timeout = PFTM_UDP_FIRST_PACKET;
  pf_set_rt_ifp(s, saddr);
  if (sn != 0L) {
   s->src_node = sn;
   s->src_node->states++;
  }
  if (nsn != 0L) {
   pf_addrcpy(&nsn->raddr, &pd->naddr, af);
   s->nat_src_node = nsn;
   s->nat_src_node->states++;
  }
  if (pf_insert_state((((r)->rule_flag & 0x00010000) ? (kif) : ((r)->rule_flag & 0x00020000) ? (kif)->pfik_parent : (kif)->pfik_parent->pfik_parent), s)) {
   do { if ((&reason) != 0L) *(&reason) = (5); if (5 < 6) global_pf_status[get_stack_id()].counters[5]++; } while (0);
   pf_src_tree_remove_state(s);
   pool_put(&global_pf_state_pl[get_stack_id()], s);
   return (PF_DROP);
  } else
   *sm = s;
 }


 if (rewrite)
  m_copyback(m, off, sizeof(*uh), uh);

 return (PF_PASS);
}

int
pf_test_icmp(struct pf_rule **rm, struct pf_state **sm, int direction,
    struct pfi_kif *kif, struct mbuf *m, int off, void *h,
    struct pf_pdesc *pd, struct pf_rule **am, struct pf_ruleset **rsm)
{
 struct pf_rule *nr = 0L;
 struct pf_addr *saddr = pd->src, *daddr = pd->dst;
 struct pf_rule *r, *a = 0L;
 struct pf_ruleset *ruleset = 0L;
 struct pf_src_node *nsn = 0L;
 u_short reason;
 u_int16_t icmpid;
 sa_family_t af = pd->af;
 u_int8_t icmptype, icmpcode;
 int state_icmp = 0;
 struct pf_tag *pftag = 0L;
 int tag = -1;

 int rewrite = 0;


 switch (pd->proto) {

 case 1:
  icmptype = pd->hdr.icmp->icmp_type;
  icmpcode = pd->hdr.icmp->icmp_code;
  icmpid = pd->hdr.icmp->icmp_hun.ih_idseq.icd_id;

  if (icmptype == 3 ||
      icmptype == 4 ||
      icmptype == 5 ||
      icmptype == 11 ||
      icmptype == 12)
   state_icmp++;
  break;


 case 58:
  icmptype = pd->hdr.icmp6->icmp6_type;
  icmpcode = pd->hdr.icmp6->icmp6_code;
  icmpid = pd->hdr.icmp6->icmp6_dataun.icmp6_un_data16[0];

  if (icmptype == 1 ||
      icmptype == 2 ||
      icmptype == 3 ||
      icmptype == 4)
   state_icmp++;
  break;

 }

 r = ((global_pf_main_ruleset[get_stack_id()].rules[PF_RULESET_FILTER].active.ptr)->tqh_first);

 if (direction == PF_OUT) {

  if ((nr = pf_get_translation(pd, m, off, PF_OUT, kif, &nsn,
      saddr, 0, daddr, 0, &pd->naddr, 0L)) != 0L) {
   pf_addrcpy(&pd->baddr, saddr, af);
   switch (af) {

   case 2:
    pf_change_a(&saddr->pfa.v4.s_addr, pd->ip_sum,
        pd->naddr.pfa.v4.s_addr, 0);
    break;


   case 24:
    pf_change_a6(saddr, &pd->hdr.icmp6->icmp6_cksum,
        &pd->naddr, 0);
    rewrite++;
    break;

   }
   if (nr->natpass)
    r = 0L;
   pd->nat_rule = nr;
  }
 } else {

  if ((nr = pf_get_translation(pd, m, off, PF_IN, kif, &nsn,
      saddr, 0, daddr, 0, &pd->naddr, 0L)) != 0L) {
   pf_addrcpy(&pd->baddr, daddr, af);
   switch (af) {

   case 2:
    pf_change_a(&daddr->pfa.v4.s_addr,
        pd->ip_sum, pd->naddr.pfa.v4.s_addr, 0);
    break;


   case 24:
    pf_change_a6(daddr, &pd->hdr.icmp6->icmp6_cksum,
        &pd->naddr, 0);
    rewrite++;
    break;

   }
   if (nr->natpass)
    r = 0L;
   pd->nat_rule = nr;
  }
 }

 while (r != 0L) {
  r->evaluations++;
  if (r->kif != 0L &&
      (r->kif != kif && r->kif != kif->pfik_parent) == !r->ifnot)
   r = r->skip[0].ptr;
  else if (r->direction && r->direction != direction)
   r = r->skip[1].ptr;
  else if (r->af && r->af != af)
   r = r->skip[2].ptr;
  else if (r->proto && r->proto != pd->proto)
   r = r->skip[3].ptr;
  else if (( (((&r->src.addr)->type == PF_ADDR_NOROUTE && pf_routable((saddr), (af))) || ((&r->src.addr)->type == PF_ADDR_TABLE && !pfr_match_addr((&r->src.addr)->p.tbl, (saddr), (af))) || ((&r->src.addr)->type == PF_ADDR_DYNIFTL && !pfi_match_addr((&r->src.addr)->p.dyn, (saddr), (af))) || ((&r->src.addr)->type == PF_ADDR_ADDRMASK && !(((af) == 2 && !(&(&r->src.addr)->v.a.mask)->pfa.addr32[0]) || (!(&(&r->src.addr)->v.a.mask)->pfa.addr32[0] && !(&(&r->src.addr)->v.a.mask)->pfa.addr32[1] && !(&(&r->src.addr)->v.a.mask)->pfa.addr32[2] && !(&(&r->src.addr)->v.a.mask)->pfa.addr32[3] )) && !pf_match_addr(0, &(&r->src.addr)->v.a.addr, &(&r->src.addr)->v.a.mask, (saddr), (af)))) != (r->src.not) ))
   r = r->skip[4].ptr;
  else if (( (((&r->dst.addr)->type == PF_ADDR_NOROUTE && pf_routable((daddr), (af))) || ((&r->dst.addr)->type == PF_ADDR_TABLE && !pfr_match_addr((&r->dst.addr)->p.tbl, (daddr), (af))) || ((&r->dst.addr)->type == PF_ADDR_DYNIFTL && !pfi_match_addr((&r->dst.addr)->p.dyn, (daddr), (af))) || ((&r->dst.addr)->type == PF_ADDR_ADDRMASK && !(((af) == 2 && !(&(&r->dst.addr)->v.a.mask)->pfa.addr32[0]) || (!(&(&r->dst.addr)->v.a.mask)->pfa.addr32[0] && !(&(&r->dst.addr)->v.a.mask)->pfa.addr32[1] && !(&(&r->dst.addr)->v.a.mask)->pfa.addr32[2] && !(&(&r->dst.addr)->v.a.mask)->pfa.addr32[3] )) && !pf_match_addr(0, &(&r->dst.addr)->v.a.addr, &(&r->dst.addr)->v.a.mask, (daddr), (af)))) != (r->dst.not) ))
   r = r->skip[6].ptr;
  else if (r->type && r->type != icmptype + 1)
   r = ((r)->entries.tqe_next);
  else if (r->code && r->code != icmpcode + 1)
   r = ((r)->entries.tqe_next);
  else if (r->tos && !(r->tos & pd->tos))
   r = ((r)->entries.tqe_next);
  else if (r->rule_flag & 0x0002)
   r = ((r)->entries.tqe_next);
  else if (r->match_tag && !pf_match_tag(m, r, nr, pftag, &tag))
   r = ((r)->entries.tqe_next);
  else if (r->anchorname[0] && r->anchor == 0L)
   r = ((r)->entries.tqe_next);
  else if (r->os_fingerprint != ((pf_osfp_t)0))
   r = ((r)->entries.tqe_next);
  else {
   if (r->tag)
    tag = r->tag;
   if (r->anchor == 0L) {
    *rm = r;
    *am = a;
    *rsm = ruleset;
    if ((*rm)->quick)
     break;
    r = ((r)->entries.tqe_next);
   } else
    do { if ((r) == 0L || (r)->anchor == 0L || (ruleset) != 0L || (a) != 0L) panic("PF_STEP_INTO_ANCHOR"); (a) = (r); (ruleset) = ((&(r)->anchor->rulesets)->tqh_first); (r) = 0L; while ((ruleset) != 0L && ((r) = (((ruleset)->rules[PF_RULESET_FILTER].active.ptr)->tqh_first)) == 0L) (ruleset) = (((ruleset))->entries.tqe_next); if ((r) == 0L) { (r) = (((a))->entries.tqe_next); (a) = 0L; } } while (0)
                          ;
  }
  if (r == 0L && a != 0L)
   do { if ((r) != 0L || (a) == 0L || (ruleset) == 0L) panic("PF_STEP_OUT_OF_ANCHOR"); (ruleset) = (((ruleset))->entries.tqe_next); while ((ruleset) != 0L && ((r) = (((ruleset)->rules[PF_RULESET_FILTER].active.ptr)->tqh_first)) == 0L) (ruleset) = (((ruleset))->entries.tqe_next); if ((r) == 0L) { (r) = (((a))->entries.tqe_next); (a) = 0L; } } while (0)
                         ;
 }
 r = *rm;
 a = *am;
 ruleset = *rsm;

 do { if ((&reason) != 0L) *(&reason) = (0); if (0 < 6) global_pf_status[get_stack_id()].counters[0]++; } while (0);

 if (r->log) {

  if (rewrite)
   m_copyback(m, off, sizeof(struct icmp6_hdr),
       pd->hdr.icmp6);

  pflog_packet(kif,m,af,direction,reason,r,a,ruleset);
 }

 if (r->action != PF_PASS)
  return (PF_DROP);

 if (pf_tag_packet(m, pftag, tag)) {
  do { if ((&reason) != 0L) *(&reason) = (5); if (5 < 6) global_pf_status[get_stack_id()].counters[5]++; } while (0);
  return (PF_DROP);
 }

 if (!state_icmp && (r->keep_state || nr != 0L)) {

  struct pf_state *s = 0L;
  struct pf_src_node *sn = 0L;


  if (r->max_states && (r->states >= r->max_states))
   goto cleanup;

  if ((r->rule_flag & 0x0020 ||
      r->rpool.opts & 0x20) &&
      pf_insert_src_node(&sn, r, saddr, af) != 0)
   goto cleanup;

  if (nr != 0L && (nr->rpool.opts & 0x20) &&
      ((direction == PF_OUT &&
      pf_insert_src_node(&nsn, nr, &pd->baddr, af) != 0) ||
      (pf_insert_src_node(&nsn, nr, saddr, af) != 0)))
   goto cleanup;
  s = pool_get(&global_pf_state_pl[get_stack_id()], 0x00);
  if (s == 0L) {
cleanup:
   if (sn != 0L && sn->states == 0 && sn->expire == 0) {
    pf_src_tree_RB_REMOVE(&global_tree_src_tracking[get_stack_id()], sn);
    global_pf_status[get_stack_id()].scounters[2]++;
    global_pf_status[get_stack_id()].src_nodes--;
    pool_put(&global_pf_src_tree_pl[get_stack_id()], sn);
   }
   if (nsn != sn && nsn != 0L && nsn->states == 0 &&
       nsn->expire == 0) {
    pf_src_tree_RB_REMOVE(&global_tree_src_tracking[get_stack_id()], nsn);
    global_pf_status[get_stack_id()].scounters[2]++;
    global_pf_status[get_stack_id()].src_nodes--;
    pool_put(&global_pf_src_tree_pl[get_stack_id()], nsn);
   }
   do { if ((&reason) != 0L) *(&reason) = (5); if (5 < 6) global_pf_status[get_stack_id()].counters[5]++; } while (0);
   return (PF_DROP);
  }
  bzero(s, sizeof(*s));
  r->states++;
  if (a != 0L)
   a->states++;
  s->rule.ptr = r;
  s->nat_rule.ptr = nr;
  if (s->nat_rule.ptr != 0L)
   s->nat_rule.ptr->states++;
  s->anchor.ptr = a;
  s->allow_opts = r->allow_opts;
  s->log = r->log & 2;
  s->proto = pd->proto;
  s->direction = direction;
  s->af = af;
  if (direction == PF_OUT) {
   pf_addrcpy(&s->gwy.addr, saddr, af);
   s->gwy.port = icmpid;
   pf_addrcpy(&s->ext.addr, daddr, af);
   s->ext.port = icmpid;
   if (nr != 0L)
    pf_addrcpy(&s->lan.addr, &pd->baddr, af);
   else
    pf_addrcpy(&s->lan.addr, &s->gwy.addr, af);
   s->lan.port = icmpid;
  } else {
   pf_addrcpy(&s->lan.addr, daddr, af);
   s->lan.port = icmpid;
   pf_addrcpy(&s->ext.addr, saddr, af);
   s->ext.port = icmpid;
   if (nr != 0L)
    pf_addrcpy(&s->gwy.addr, &pd->baddr, af);
   else
    pf_addrcpy(&s->gwy.addr, &s->lan.addr, af);
   s->gwy.port = icmpid;
  }
  s->creation = time.tv_sec;
  s->expire = time.tv_sec;
  s->timeout = PFTM_ICMP_FIRST_PACKET;
  pf_set_rt_ifp(s, saddr);
  if (sn != 0L) {
   s->src_node = sn;
   s->src_node->states++;
  }
  if (nsn != 0L) {
   pf_addrcpy(&nsn->raddr, &pd->naddr, af);
   s->nat_src_node = nsn;
   s->nat_src_node->states++;
  }
  if (pf_insert_state((((r)->rule_flag & 0x00010000) ? (kif) : ((r)->rule_flag & 0x00020000) ? (kif)->pfik_parent : (kif)->pfik_parent->pfik_parent), s)) {
   do { if ((&reason) != 0L) *(&reason) = (5); if (5 < 6) global_pf_status[get_stack_id()].counters[5]++; } while (0);
   pf_src_tree_remove_state(s);
   pool_put(&global_pf_state_pl[get_stack_id()], s);
   return (PF_DROP);
  } else
   *sm = s;
 }



 if (rewrite)
  m_copyback(m, off, sizeof(struct icmp6_hdr),
      pd->hdr.icmp6);


 return (PF_PASS);
}

int
pf_test_other(struct pf_rule **rm, struct pf_state **sm, int direction,
    struct pfi_kif *kif, struct mbuf *m, int off, void *h, struct pf_pdesc *pd,
    struct pf_rule **am, struct pf_ruleset **rsm)
{
 struct pf_rule *nr = 0L;
 struct pf_rule *r, *a = 0L;
 struct pf_ruleset *ruleset = 0L;
 struct pf_src_node *nsn = 0L;
 struct pf_addr *saddr = pd->src, *daddr = pd->dst;
 sa_family_t af = pd->af;
 u_short reason;
 struct pf_tag *pftag = 0L;
 int tag = -1;

 r = ((global_pf_main_ruleset[get_stack_id()].rules[PF_RULESET_FILTER].active.ptr)->tqh_first);

 if (direction == PF_OUT) {

  if ((nr = pf_get_translation(pd, m, off, PF_OUT, kif, &nsn,
      saddr, 0, daddr, 0, &pd->naddr, 0L)) != 0L) {
   pf_addrcpy(&pd->baddr, saddr, af);
   switch (af) {

   case 2:
    pf_change_a(&saddr->pfa.v4.s_addr, pd->ip_sum,
        pd->naddr.pfa.v4.s_addr, 0);
    break;


   case 24:
    pf_addrcpy(saddr, &pd->naddr, af);
    break;

   }
   if (nr->natpass)
    r = 0L;
   pd->nat_rule = nr;
  }
 } else {

  if ((nr = pf_get_translation(pd, m, off, PF_IN, kif, &nsn,
      saddr, 0, daddr, 0, &pd->naddr, 0L)) != 0L) {
   pf_addrcpy(&pd->baddr, daddr, af);
   switch (af) {

   case 2:
    pf_change_a(&daddr->pfa.v4.s_addr,
        pd->ip_sum, pd->naddr.pfa.v4.s_addr, 0);
    break;


   case 24:
    pf_addrcpy(daddr, &pd->naddr, af);
    break;

   }
   if (nr->natpass)
    r = 0L;
   pd->nat_rule = nr;
  }
 }

 while (r != 0L) {
  r->evaluations++;
  if (r->kif != 0L &&
      (r->kif != kif && r->kif != kif->pfik_parent) == !r->ifnot)
   r = r->skip[0].ptr;
  else if (r->direction && r->direction != direction)
   r = r->skip[1].ptr;
  else if (r->af && r->af != af)
   r = r->skip[2].ptr;
  else if (r->proto && r->proto != pd->proto)
   r = r->skip[3].ptr;
  else if (( (((&r->src.addr)->type == PF_ADDR_NOROUTE && pf_routable((pd->src), (af))) || ((&r->src.addr)->type == PF_ADDR_TABLE && !pfr_match_addr((&r->src.addr)->p.tbl, (pd->src), (af))) || ((&r->src.addr)->type == PF_ADDR_DYNIFTL && !pfi_match_addr((&r->src.addr)->p.dyn, (pd->src), (af))) || ((&r->src.addr)->type == PF_ADDR_ADDRMASK && !(((af) == 2 && !(&(&r->src.addr)->v.a.mask)->pfa.addr32[0]) || (!(&(&r->src.addr)->v.a.mask)->pfa.addr32[0] && !(&(&r->src.addr)->v.a.mask)->pfa.addr32[1] && !(&(&r->src.addr)->v.a.mask)->pfa.addr32[2] && !(&(&r->src.addr)->v.a.mask)->pfa.addr32[3] )) && !pf_match_addr(0, &(&r->src.addr)->v.a.addr, &(&r->src.addr)->v.a.mask, (pd->src), (af)))) != (r->src.not) ))
   r = r->skip[4].ptr;
  else if (( (((&r->dst.addr)->type == PF_ADDR_NOROUTE && pf_routable((pd->dst), (af))) || ((&r->dst.addr)->type == PF_ADDR_TABLE && !pfr_match_addr((&r->dst.addr)->p.tbl, (pd->dst), (af))) || ((&r->dst.addr)->type == PF_ADDR_DYNIFTL && !pfi_match_addr((&r->dst.addr)->p.dyn, (pd->dst), (af))) || ((&r->dst.addr)->type == PF_ADDR_ADDRMASK && !(((af) == 2 && !(&(&r->dst.addr)->v.a.mask)->pfa.addr32[0]) || (!(&(&r->dst.addr)->v.a.mask)->pfa.addr32[0] && !(&(&r->dst.addr)->v.a.mask)->pfa.addr32[1] && !(&(&r->dst.addr)->v.a.mask)->pfa.addr32[2] && !(&(&r->dst.addr)->v.a.mask)->pfa.addr32[3] )) && !pf_match_addr(0, &(&r->dst.addr)->v.a.addr, &(&r->dst.addr)->v.a.mask, (pd->dst), (af)))) != (r->dst.not) ))
   r = r->skip[6].ptr;
  else if (r->tos && !(r->tos & pd->tos))
   r = ((r)->entries.tqe_next);
  else if (r->rule_flag & 0x0002)
   r = ((r)->entries.tqe_next);
  else if (r->match_tag && !pf_match_tag(m, r, nr, pftag, &tag))
   r = ((r)->entries.tqe_next);
  else if (r->anchorname[0] && r->anchor == 0L)
   r = ((r)->entries.tqe_next);
  else if (r->os_fingerprint != ((pf_osfp_t)0))
   r = ((r)->entries.tqe_next);
  else {
   if (r->tag)
    tag = r->tag;
   if (r->anchor == 0L) {
    *rm = r;
    *am = a;
    *rsm = ruleset;
    if ((*rm)->quick)
     break;
    r = ((r)->entries.tqe_next);
   } else
    do { if ((r) == 0L || (r)->anchor == 0L || (ruleset) != 0L || (a) != 0L) panic("PF_STEP_INTO_ANCHOR"); (a) = (r); (ruleset) = ((&(r)->anchor->rulesets)->tqh_first); (r) = 0L; while ((ruleset) != 0L && ((r) = (((ruleset)->rules[PF_RULESET_FILTER].active.ptr)->tqh_first)) == 0L) (ruleset) = (((ruleset))->entries.tqe_next); if ((r) == 0L) { (r) = (((a))->entries.tqe_next); (a) = 0L; } } while (0)
                          ;
  }
  if (r == 0L && a != 0L)
   do { if ((r) != 0L || (a) == 0L || (ruleset) == 0L) panic("PF_STEP_OUT_OF_ANCHOR"); (ruleset) = (((ruleset))->entries.tqe_next); while ((ruleset) != 0L && ((r) = (((ruleset)->rules[PF_RULESET_FILTER].active.ptr)->tqh_first)) == 0L) (ruleset) = (((ruleset))->entries.tqe_next); if ((r) == 0L) { (r) = (((a))->entries.tqe_next); (a) = 0L; } } while (0)
                         ;
 }
 r = *rm;
 a = *am;
 ruleset = *rsm;

 do { if ((&reason) != 0L) *(&reason) = (0); if (0 < 6) global_pf_status[get_stack_id()].counters[0]++; } while (0);

 if (r->log)
  pflog_packet(kif,m,af,direction,reason,r,a,ruleset);

 if ((r->action == PF_DROP) &&
     ((r->rule_flag & 0x0004) ||
     (r->rule_flag & 0x0008))) {
  struct pf_addr *a = 0L;

  if (nr != 0L) {
   if (direction == PF_OUT)
    a = saddr;
   else
    a = daddr;
  }
  if (a != 0L) {
   switch (af) {

   case 2:
    pf_change_a(&a->pfa.v4.s_addr, pd->ip_sum,
        pd->baddr.pfa.v4.s_addr, 0);
    break;


   case 24:
    pf_addrcpy(a, &pd->baddr, af);
    break;

   }
  }
  if ((af == 2) && r->return_icmp)
   pf_send_icmp(m, r->return_icmp >> 8,
       r->return_icmp & 255, af, r);
  else if ((af == 24) && r->return_icmp6)
   pf_send_icmp(m, r->return_icmp6 >> 8,
       r->return_icmp6 & 255, af, r);
 }

 if (r->action != PF_PASS)
  return (PF_DROP);

 if (pf_tag_packet(m, pftag, tag)) {
  do { if ((&reason) != 0L) *(&reason) = (5); if (5 < 6) global_pf_status[get_stack_id()].counters[5]++; } while (0);
  return (PF_DROP);
 }

 if (r->keep_state || nr != 0L) {

  struct pf_state *s = 0L;
  struct pf_src_node *sn = 0L;


  if (r->max_states && (r->states >= r->max_states))
   goto cleanup;

  if ((r->rule_flag & 0x0020 ||
      r->rpool.opts & 0x20) &&
      pf_insert_src_node(&sn, r, saddr, af) != 0)
   goto cleanup;

  if (nr != 0L && (nr->rpool.opts & 0x20) &&
      ((direction == PF_OUT &&
      pf_insert_src_node(&nsn, nr, &pd->baddr, af) != 0) ||
      (pf_insert_src_node(&nsn, nr, saddr, af) != 0)))
   goto cleanup;
  s = pool_get(&global_pf_state_pl[get_stack_id()], 0x00);
  if (s == 0L) {
cleanup:
   if (sn != 0L && sn->states == 0 && sn->expire == 0) {
    pf_src_tree_RB_REMOVE(&global_tree_src_tracking[get_stack_id()], sn);
    global_pf_status[get_stack_id()].scounters[2]++;
    global_pf_status[get_stack_id()].src_nodes--;
    pool_put(&global_pf_src_tree_pl[get_stack_id()], sn);
   }
   if (nsn != sn && nsn != 0L && nsn->states == 0 &&
       nsn->expire == 0) {
    pf_src_tree_RB_REMOVE(&global_tree_src_tracking[get_stack_id()], nsn);
    global_pf_status[get_stack_id()].scounters[2]++;
    global_pf_status[get_stack_id()].src_nodes--;
    pool_put(&global_pf_src_tree_pl[get_stack_id()], nsn);
   }
   do { if ((&reason) != 0L) *(&reason) = (5); if (5 < 6) global_pf_status[get_stack_id()].counters[5]++; } while (0);
   return (PF_DROP);
  }
  bzero(s, sizeof(*s));
  r->states++;
  if (a != 0L)
   a->states++;
  s->rule.ptr = r;
  s->nat_rule.ptr = nr;
  if (s->nat_rule.ptr != 0L)
   s->nat_rule.ptr->states++;
  s->anchor.ptr = a;
  s->allow_opts = r->allow_opts;
  s->log = r->log & 2;
  s->proto = pd->proto;
  s->direction = direction;
  s->af = af;
  if (direction == PF_OUT) {
   pf_addrcpy(&s->gwy.addr, saddr, af);
   pf_addrcpy(&s->ext.addr, daddr, af);
   if (nr != 0L)
    pf_addrcpy(&s->lan.addr, &pd->baddr, af);
   else
    pf_addrcpy(&s->lan.addr, &s->gwy.addr, af);
  } else {
   pf_addrcpy(&s->lan.addr, daddr, af);
   pf_addrcpy(&s->ext.addr, saddr, af);
   if (nr != 0L)
    pf_addrcpy(&s->gwy.addr, &pd->baddr, af);
   else
    pf_addrcpy(&s->gwy.addr, &s->lan.addr, af);
  }
  s->src.state = 1;
  s->dst.state = 0;
  s->creation = time.tv_sec;
  s->expire = time.tv_sec;
  s->timeout = PFTM_OTHER_FIRST_PACKET;
  pf_set_rt_ifp(s, saddr);
  if (sn != 0L) {
   s->src_node = sn;
   s->src_node->states++;
  }
  if (nsn != 0L) {
   pf_addrcpy(&nsn->raddr, &pd->naddr, af);
   s->nat_src_node = nsn;
   s->nat_src_node->states++;
  }
  if (pf_insert_state((((r)->rule_flag & 0x00010000) ? (kif) : ((r)->rule_flag & 0x00020000) ? (kif)->pfik_parent : (kif)->pfik_parent->pfik_parent), s)) {
   do { if ((&reason) != 0L) *(&reason) = (5); if (5 < 6) global_pf_status[get_stack_id()].counters[5]++; } while (0);
   pf_src_tree_remove_state(s);
   pool_put(&global_pf_state_pl[get_stack_id()], s);
   return (PF_DROP);
  } else
   *sm = s;
 }

 return (PF_PASS);
}

int
pf_test_fragment(struct pf_rule **rm, int direction, struct pfi_kif *kif,
    struct mbuf *m, void *h, struct pf_pdesc *pd, struct pf_rule **am,
    struct pf_ruleset **rsm)
{
 struct pf_rule *r, *a = 0L;
 struct pf_ruleset *ruleset = 0L;
 sa_family_t af = pd->af;
 u_short reason;
 struct pf_tag *pftag = 0L;
 int tag = -1;

 r = ((global_pf_main_ruleset[get_stack_id()].rules[PF_RULESET_FILTER].active.ptr)->tqh_first);
 while (r != 0L) {
  r->evaluations++;
  if (r->kif != 0L &&
      (r->kif != kif && r->kif != kif->pfik_parent) == !r->ifnot)
   r = r->skip[0].ptr;
  else if (r->direction && r->direction != direction)
   r = r->skip[1].ptr;
  else if (r->af && r->af != af)
   r = r->skip[2].ptr;
  else if (r->proto && r->proto != pd->proto)
   r = r->skip[3].ptr;
  else if (( (((&r->src.addr)->type == PF_ADDR_NOROUTE && pf_routable((pd->src), (af))) || ((&r->src.addr)->type == PF_ADDR_TABLE && !pfr_match_addr((&r->src.addr)->p.tbl, (pd->src), (af))) || ((&r->src.addr)->type == PF_ADDR_DYNIFTL && !pfi_match_addr((&r->src.addr)->p.dyn, (pd->src), (af))) || ((&r->src.addr)->type == PF_ADDR_ADDRMASK && !(((af) == 2 && !(&(&r->src.addr)->v.a.mask)->pfa.addr32[0]) || (!(&(&r->src.addr)->v.a.mask)->pfa.addr32[0] && !(&(&r->src.addr)->v.a.mask)->pfa.addr32[1] && !(&(&r->src.addr)->v.a.mask)->pfa.addr32[2] && !(&(&r->src.addr)->v.a.mask)->pfa.addr32[3] )) && !pf_match_addr(0, &(&r->src.addr)->v.a.addr, &(&r->src.addr)->v.a.mask, (pd->src), (af)))) != (r->src.not) ))
   r = r->skip[4].ptr;
  else if (( (((&r->dst.addr)->type == PF_ADDR_NOROUTE && pf_routable((pd->dst), (af))) || ((&r->dst.addr)->type == PF_ADDR_TABLE && !pfr_match_addr((&r->dst.addr)->p.tbl, (pd->dst), (af))) || ((&r->dst.addr)->type == PF_ADDR_DYNIFTL && !pfi_match_addr((&r->dst.addr)->p.dyn, (pd->dst), (af))) || ((&r->dst.addr)->type == PF_ADDR_ADDRMASK && !(((af) == 2 && !(&(&r->dst.addr)->v.a.mask)->pfa.addr32[0]) || (!(&(&r->dst.addr)->v.a.mask)->pfa.addr32[0] && !(&(&r->dst.addr)->v.a.mask)->pfa.addr32[1] && !(&(&r->dst.addr)->v.a.mask)->pfa.addr32[2] && !(&(&r->dst.addr)->v.a.mask)->pfa.addr32[3] )) && !pf_match_addr(0, &(&r->dst.addr)->v.a.addr, &(&r->dst.addr)->v.a.mask, (pd->dst), (af)))) != (r->dst.not) ))
   r = r->skip[6].ptr;
  else if (r->tos && !(r->tos & pd->tos))
   r = ((r)->entries.tqe_next);
  else if (r->src.port_op || r->dst.port_op ||
      r->flagset || r->type || r->code ||
      r->os_fingerprint != ((pf_osfp_t)0))
   r = ((r)->entries.tqe_next);
  else if (r->match_tag && !pf_match_tag(m, r, 0L, pftag, &tag))
   r = ((r)->entries.tqe_next);
  else if (r->anchorname[0] && r->anchor == 0L)
   r = ((r)->entries.tqe_next);
  else {
   if (r->anchor == 0L) {
    *rm = r;
    *am = a;
    *rsm = ruleset;
    if ((*rm)->quick)
     break;
    r = ((r)->entries.tqe_next);
   } else
    do { if ((r) == 0L || (r)->anchor == 0L || (ruleset) != 0L || (a) != 0L) panic("PF_STEP_INTO_ANCHOR"); (a) = (r); (ruleset) = ((&(r)->anchor->rulesets)->tqh_first); (r) = 0L; while ((ruleset) != 0L && ((r) = (((ruleset)->rules[PF_RULESET_FILTER].active.ptr)->tqh_first)) == 0L) (ruleset) = (((ruleset))->entries.tqe_next); if ((r) == 0L) { (r) = (((a))->entries.tqe_next); (a) = 0L; } } while (0)
                          ;
  }
  if (r == 0L && a != 0L)
   do { if ((r) != 0L || (a) == 0L || (ruleset) == 0L) panic("PF_STEP_OUT_OF_ANCHOR"); (ruleset) = (((ruleset))->entries.tqe_next); while ((ruleset) != 0L && ((r) = (((ruleset)->rules[PF_RULESET_FILTER].active.ptr)->tqh_first)) == 0L) (ruleset) = (((ruleset))->entries.tqe_next); if ((r) == 0L) { (r) = (((a))->entries.tqe_next); (a) = 0L; } } while (0)
                         ;
 }
 r = *rm;
 a = *am;
 ruleset = *rsm;

 do { if ((&reason) != 0L) *(&reason) = (0); if (0 < 6) global_pf_status[get_stack_id()].counters[0]++; } while (0);

 if (r->log)
  pflog_packet(kif,m,af,direction,reason,r,a,ruleset);

 if (r->action != PF_PASS)
  return (PF_DROP);

 if (pf_tag_packet(m, pftag, tag)) {
  do { if ((&reason) != 0L) *(&reason) = (5); if (5 < 6) global_pf_status[get_stack_id()].counters[5]++; } while (0);
  return (PF_DROP);
 }

 return (PF_PASS);
}

int
pf_test_state_tcp(struct pf_state **state, int direction, struct pfi_kif *kif,
    struct mbuf *m, int off, void *h, struct pf_pdesc *pd,
    u_short *reason)
{
 struct pf_state key;
 struct tcphdr *th = pd->hdr.tcp;
 u_int16_t win = __extension__({ u_int16_t __swap16_x = (th->th_win); __builtin_constant_p(th->th_win) ? __extension__({ u_int16_t __swap16gen_x = (__swap16_x); (u_int16_t)((__swap16gen_x & 0xff) << 8 | (__swap16gen_x & 0xff00) >> 8); }) : ({ u_int16_t __swap16md_x = (__swap16_x); __asm ("rorw $8, %w1" : "+r" (__swap16md_x)); __swap16md_x; }); });
 u_int32_t ack, end, seq;
 u_int8_t sws, dws;
 int ackskew;
 int copyback = 0;
 struct pf_state_peer *src, *dst;

 key.af = pd->af;
 key.proto = 6;
 if (direction == PF_IN) {
  pf_addrcpy(&key.ext.addr, pd->src, key.af);
  pf_addrcpy(&key.gwy.addr, pd->dst, key.af);
  key.ext.port = th->th_sport;
  key.gwy.port = th->th_dport;
 } else {
  pf_addrcpy(&key.lan.addr, pd->src, key.af);
  pf_addrcpy(&key.ext.addr, pd->dst, key.af);
  key.lan.port = th->th_sport;
  key.ext.port = th->th_dport;
 }

 do { if (direction == PF_IN) *state = pf_find_state_recurse( kif, &key, PF_EXT_GWY); else *state = pf_find_state_recurse( kif, &key, PF_LAN_EXT); if (*state == 0L) return (PF_DROP); if (direction == PF_OUT && (((*state)->rule.ptr->rt == PF_ROUTETO && (*state)->rule.ptr->direction == PF_OUT) || ((*state)->rule.ptr->rt == PF_REPLYTO && (*state)->rule.ptr->direction == PF_IN)) && (*state)->rt_kif != 0L && (*state)->rt_kif != kif) return (PF_PASS); } while (0);

 if (direction == (*state)->direction) {
  src = &(*state)->src;
  dst = &(*state)->dst;
 } else {
  src = &(*state)->dst;
  dst = &(*state)->src;
 }

 if ((*state)->src.state == ((11)+0)) {
  if (direction != (*state)->direction)
   return (PF_SYNPROXY_DROP);
  if (th->th_flags & 0x02) {
   if (__extension__({ u_int32_t __swap32_x = (th->th_seq); __builtin_constant_p(th->th_seq) ? __extension__({ u_int32_t __swap32gen_x = (__swap32_x); (u_int32_t)((__swap32gen_x & 0xff) << 24 | (__swap32gen_x & 0xff00) << 8 | (__swap32gen_x & 0xff0000) >> 8 | (__swap32gen_x & 0xff000000) >> 24); }) : ({ u_int32_t __swap32md_x = (__swap32_x); __asm ("bswap %1" : "+r" (__swap32md_x)); __swap32md_x; }); }) != (*state)->src.seqlo)
    return (PF_DROP);
   pf_send_tcp((*state)->rule.ptr, pd->af, pd->dst,
       pd->src, th->th_dport, th->th_sport,
       (*state)->src.seqhi, __extension__({ u_int32_t __swap32_x = (th->th_seq); __builtin_constant_p(th->th_seq) ? __extension__({ u_int32_t __swap32gen_x = (__swap32_x); (u_int32_t)((__swap32gen_x & 0xff) << 24 | (__swap32gen_x & 0xff00) << 8 | (__swap32gen_x & 0xff0000) >> 8 | (__swap32gen_x & 0xff000000) >> 24); }) : ({ u_int32_t __swap32md_x = (__swap32_x); __asm ("bswap %1" : "+r" (__swap32md_x)); __swap32md_x; }); }) + 1,
       0x02|0x10, 0, (*state)->src.mss, 0);
   return (PF_SYNPROXY_DROP);
  } else if (!(th->th_flags & 0x10) ||
      (__extension__({ u_int32_t __swap32_x = (th->th_ack); __builtin_constant_p(th->th_ack) ? __extension__({ u_int32_t __swap32gen_x = (__swap32_x); (u_int32_t)((__swap32gen_x & 0xff) << 24 | (__swap32gen_x & 0xff00) << 8 | (__swap32gen_x & 0xff0000) >> 8 | (__swap32gen_x & 0xff000000) >> 24); }) : ({ u_int32_t __swap32md_x = (__swap32_x); __asm ("bswap %1" : "+r" (__swap32md_x)); __swap32md_x; }); }) != (*state)->src.seqhi + 1) ||
      (__extension__({ u_int32_t __swap32_x = (th->th_seq); __builtin_constant_p(th->th_seq) ? __extension__({ u_int32_t __swap32gen_x = (__swap32_x); (u_int32_t)((__swap32gen_x & 0xff) << 24 | (__swap32gen_x & 0xff00) << 8 | (__swap32gen_x & 0xff0000) >> 8 | (__swap32gen_x & 0xff000000) >> 24); }) : ({ u_int32_t __swap32md_x = (__swap32_x); __asm ("bswap %1" : "+r" (__swap32md_x)); __swap32md_x; }); }) != (*state)->src.seqlo + 1))
   return (PF_DROP);
  else
   (*state)->src.state = ((11)+1);
 }
 if ((*state)->src.state == ((11)+1)) {
  struct pf_state_host *src, *dst;

  if (direction == PF_OUT) {
   src = &(*state)->gwy;
   dst = &(*state)->ext;
  } else {
   src = &(*state)->ext;
   dst = &(*state)->lan;
  }
  if (direction == (*state)->direction) {
   if (((th->th_flags & (0x02|0x10)) != 0x10) ||
       (__extension__({ u_int32_t __swap32_x = (th->th_ack); __builtin_constant_p(th->th_ack) ? __extension__({ u_int32_t __swap32gen_x = (__swap32_x); (u_int32_t)((__swap32gen_x & 0xff) << 24 | (__swap32gen_x & 0xff00) << 8 | (__swap32gen_x & 0xff0000) >> 8 | (__swap32gen_x & 0xff000000) >> 24); }) : ({ u_int32_t __swap32md_x = (__swap32_x); __asm ("bswap %1" : "+r" (__swap32md_x)); __swap32md_x; }); }) != (*state)->src.seqhi + 1) ||
       (__extension__({ u_int32_t __swap32_x = (th->th_seq); __builtin_constant_p(th->th_seq) ? __extension__({ u_int32_t __swap32gen_x = (__swap32_x); (u_int32_t)((__swap32gen_x & 0xff) << 24 | (__swap32gen_x & 0xff00) << 8 | (__swap32gen_x & 0xff0000) >> 8 | (__swap32gen_x & 0xff000000) >> 24); }) : ({ u_int32_t __swap32md_x = (__swap32_x); __asm ("bswap %1" : "+r" (__swap32md_x)); __swap32md_x; }); }) != (*state)->src.seqlo + 1))
    return (PF_DROP);
   (*state)->src.max_win = (((__extension__({ u_int16_t __swap16_x = (th->th_win); __builtin_constant_p(th->th_win) ? __extension__({ u_int16_t __swap16gen_x = (__swap16_x); (u_int16_t)((__swap16gen_x & 0xff) << 8 | (__swap16gen_x & 0xff00) >> 8); }) : ({ u_int16_t __swap16md_x = (__swap16_x); __asm ("rorw $8, %w1" : "+r" (__swap16md_x)); __swap16md_x; }); }))>(1))?(__extension__({ u_int16_t __swap16_x = (th->th_win); __builtin_constant_p(th->th_win) ? __extension__({ u_int16_t __swap16gen_x = (__swap16_x); (u_int16_t)((__swap16gen_x & 0xff) << 8 | (__swap16gen_x & 0xff00) >> 8); }) : ({ u_int16_t __swap16md_x = (__swap16_x); __asm ("rorw $8, %w1" : "+r" (__swap16md_x)); __swap16md_x; }); })):(1));
   if ((*state)->dst.seqhi == 1)
    (*state)->dst.seqhi = arc4random();
   pf_send_tcp((*state)->rule.ptr, pd->af, &src->addr,
       &dst->addr, src->port, dst->port,
       (*state)->dst.seqhi, 0, 0x02, 0,
       (*state)->src.mss, 0);
   return (PF_SYNPROXY_DROP);
  } else if (((th->th_flags & (0x02|0x10)) !=
      (0x02|0x10)) ||
      (__extension__({ u_int32_t __swap32_x = (th->th_ack); __builtin_constant_p(th->th_ack) ? __extension__({ u_int32_t __swap32gen_x = (__swap32_x); (u_int32_t)((__swap32gen_x & 0xff) << 24 | (__swap32gen_x & 0xff00) << 8 | (__swap32gen_x & 0xff0000) >> 8 | (__swap32gen_x & 0xff000000) >> 24); }) : ({ u_int32_t __swap32md_x = (__swap32_x); __asm ("bswap %1" : "+r" (__swap32md_x)); __swap32md_x; }); }) != (*state)->dst.seqhi + 1))
   return (PF_DROP);
  else {
   (*state)->dst.max_win = (((__extension__({ u_int16_t __swap16_x = (th->th_win); __builtin_constant_p(th->th_win) ? __extension__({ u_int16_t __swap16gen_x = (__swap16_x); (u_int16_t)((__swap16gen_x & 0xff) << 8 | (__swap16gen_x & 0xff00) >> 8); }) : ({ u_int16_t __swap16md_x = (__swap16_x); __asm ("rorw $8, %w1" : "+r" (__swap16md_x)); __swap16md_x; }); }))>(1))?(__extension__({ u_int16_t __swap16_x = (th->th_win); __builtin_constant_p(th->th_win) ? __extension__({ u_int16_t __swap16gen_x = (__swap16_x); (u_int16_t)((__swap16gen_x & 0xff) << 8 | (__swap16gen_x & 0xff00) >> 8); }) : ({ u_int16_t __swap16md_x = (__swap16_x); __asm ("rorw $8, %w1" : "+r" (__swap16md_x)); __swap16md_x; }); })):(1));
   (*state)->dst.seqlo = __extension__({ u_int32_t __swap32_x = (th->th_seq); __builtin_constant_p(th->th_seq) ? __extension__({ u_int32_t __swap32gen_x = (__swap32_x); (u_int32_t)((__swap32gen_x & 0xff) << 24 | (__swap32gen_x & 0xff00) << 8 | (__swap32gen_x & 0xff0000) >> 8 | (__swap32gen_x & 0xff000000) >> 24); }) : ({ u_int32_t __swap32md_x = (__swap32_x); __asm ("bswap %1" : "+r" (__swap32md_x)); __swap32md_x; }); });
   pf_send_tcp((*state)->rule.ptr, pd->af, pd->dst,
       pd->src, th->th_dport, th->th_sport,
       __extension__({ u_int32_t __swap32_x = (th->th_ack); __builtin_constant_p(th->th_ack) ? __extension__({ u_int32_t __swap32gen_x = (__swap32_x); (u_int32_t)((__swap32gen_x & 0xff) << 24 | (__swap32gen_x & 0xff00) << 8 | (__swap32gen_x & 0xff0000) >> 8 | (__swap32gen_x & 0xff000000) >> 24); }) : ({ u_int32_t __swap32md_x = (__swap32_x); __asm ("bswap %1" : "+r" (__swap32md_x)); __swap32md_x; }); }), __extension__({ u_int32_t __swap32_x = (th->th_seq); __builtin_constant_p(th->th_seq) ? __extension__({ u_int32_t __swap32gen_x = (__swap32_x); (u_int32_t)((__swap32gen_x & 0xff) << 24 | (__swap32gen_x & 0xff00) << 8 | (__swap32gen_x & 0xff0000) >> 8 | (__swap32gen_x & 0xff000000) >> 24); }) : ({ u_int32_t __swap32md_x = (__swap32_x); __asm ("bswap %1" : "+r" (__swap32md_x)); __swap32md_x; }); }) + 1,
       0x10, (*state)->src.max_win, 0, 0);
   pf_send_tcp((*state)->rule.ptr, pd->af, &src->addr,
       &dst->addr, src->port, dst->port,
       (*state)->src.seqhi + 1, (*state)->src.seqlo + 1,
       0x10, (*state)->dst.max_win, 0, 0);
   (*state)->src.seqdiff = (*state)->dst.seqhi -
       (*state)->src.seqlo;
   (*state)->dst.seqdiff = (*state)->src.seqhi -
       (*state)->dst.seqlo;
   (*state)->src.seqhi = (*state)->src.seqlo +
       (*state)->src.max_win;
   (*state)->dst.seqhi = (*state)->dst.seqlo +
       (*state)->dst.max_win;
   (*state)->src.wscale = (*state)->dst.wscale = 0;
   (*state)->src.state = (*state)->dst.state =
       4;
   return (PF_SYNPROXY_DROP);
  }
 }

 if (src->wscale && dst->wscale && !(th->th_flags & 0x02)) {
  sws = src->wscale & 0x0f;
  dws = dst->wscale & 0x0f;
 } else
  sws = dws = 0;







 seq = __extension__({ u_int32_t __swap32_x = (th->th_seq); __builtin_constant_p(th->th_seq) ? __extension__({ u_int32_t __swap32gen_x = (__swap32_x); (u_int32_t)((__swap32gen_x & 0xff) << 24 | (__swap32gen_x & 0xff00) << 8 | (__swap32gen_x & 0xff0000) >> 8 | (__swap32gen_x & 0xff000000) >> 24); }) : ({ u_int32_t __swap32md_x = (__swap32_x); __asm ("bswap %1" : "+r" (__swap32md_x)); __swap32md_x; }); });
 if (src->seqlo == 0) {


  if ((pd->flags & 0x0001 || dst->scrub) &&
      src->scrub == 0L) {
   if (pf_normalize_tcp_init(m, off, pd, th, src, dst)) {
    do { if ((reason) != 0L) *(reason) = (5); if (5 < 6) global_pf_status[get_stack_id()].counters[5]++; } while (0);
    return (PF_DROP);
   }
  }


  if (dst->seqdiff && !src->seqdiff) {
   while ((src->seqdiff = arc4random()) == 0)
    ;
   ack = __extension__({ u_int32_t __swap32_x = (th->th_ack); __builtin_constant_p(th->th_ack) ? __extension__({ u_int32_t __swap32gen_x = (__swap32_x); (u_int32_t)((__swap32gen_x & 0xff) << 24 | (__swap32gen_x & 0xff00) << 8 | (__swap32gen_x & 0xff0000) >> 8 | (__swap32gen_x & 0xff000000) >> 24); }) : ({ u_int32_t __swap32md_x = (__swap32_x); __asm ("bswap %1" : "+r" (__swap32md_x)); __swap32md_x; }); }) - dst->seqdiff;
   pf_change_a(&th->th_seq, &th->th_sum, __extension__({ u_int32_t __swap32_x = (seq + src->seqdiff); __builtin_constant_p(seq + src->seqdiff) ? __extension__({ u_int32_t __swap32gen_x = (__swap32_x); (u_int32_t)((__swap32gen_x & 0xff) << 24 | (__swap32gen_x & 0xff00) << 8 | (__swap32gen_x & 0xff0000) >> 8 | (__swap32gen_x & 0xff000000) >> 24); }) : ({ u_int32_t __swap32md_x = (__swap32_x); __asm ("bswap %1" : "+r" (__swap32md_x)); __swap32md_x; }); })
                    , 0);
   pf_change_a(&th->th_ack, &th->th_sum, __extension__({ u_int32_t __swap32_x = (ack); __builtin_constant_p(ack) ? __extension__({ u_int32_t __swap32gen_x = (__swap32_x); (u_int32_t)((__swap32gen_x & 0xff) << 24 | (__swap32gen_x & 0xff00) << 8 | (__swap32gen_x & 0xff0000) >> 8 | (__swap32gen_x & 0xff000000) >> 24); }) : ({ u_int32_t __swap32md_x = (__swap32_x); __asm ("bswap %1" : "+r" (__swap32md_x)); __swap32md_x; }); }), 0);
   copyback = 1;
  } else {
   ack = __extension__({ u_int32_t __swap32_x = (th->th_ack); __builtin_constant_p(th->th_ack) ? __extension__({ u_int32_t __swap32gen_x = (__swap32_x); (u_int32_t)((__swap32gen_x & 0xff) << 24 | (__swap32gen_x & 0xff00) << 8 | (__swap32gen_x & 0xff0000) >> 8 | (__swap32gen_x & 0xff000000) >> 24); }) : ({ u_int32_t __swap32md_x = (__swap32_x); __asm ("bswap %1" : "+r" (__swap32md_x)); __swap32md_x; }); });
  }

  end = seq + pd->p_len;
  if (th->th_flags & 0x02) {
   end++;
   if (dst->wscale & 0x80) {
    src->wscale = pf_get_wscale(m, off, th->th_off,
        pd->af);
    if (src->wscale & 0x80) {


     sws = src->wscale & 0x0f;
     win = ((u_int32_t)win + (1 << sws) - 1)
         >> sws;
     dws = dst->wscale & 0x0f;
    } else {

     dst->max_win <<= dst->wscale &
         0x0f;

     dst->wscale = 0;
    }
   }
  }
  if (th->th_flags & 0x01)
   end++;

  src->seqlo = seq;
  if (src->state < 2)
   src->state = 2;






  if (src->seqhi == 1 ||
      ((int)((end + (((1)>(dst->max_win << dws))?(1):(dst->max_win << dws)))-(src->seqhi)) >= 0))
   src->seqhi = end + (((1)>(dst->max_win << dws))?(1):(dst->max_win << dws));
  if (win > src->max_win)
   src->max_win = win;

 } else {
  ack = __extension__({ u_int32_t __swap32_x = (th->th_ack); __builtin_constant_p(th->th_ack) ? __extension__({ u_int32_t __swap32gen_x = (__swap32_x); (u_int32_t)((__swap32gen_x & 0xff) << 24 | (__swap32gen_x & 0xff00) << 8 | (__swap32gen_x & 0xff0000) >> 8 | (__swap32gen_x & 0xff000000) >> 24); }) : ({ u_int32_t __swap32md_x = (__swap32_x); __asm ("bswap %1" : "+r" (__swap32md_x)); __swap32md_x; }); }) - dst->seqdiff;
  if (src->seqdiff) {

   pf_change_a(&th->th_seq, &th->th_sum, __extension__({ u_int32_t __swap32_x = (seq + src->seqdiff); __builtin_constant_p(seq + src->seqdiff) ? __extension__({ u_int32_t __swap32gen_x = (__swap32_x); (u_int32_t)((__swap32gen_x & 0xff) << 24 | (__swap32gen_x & 0xff00) << 8 | (__swap32gen_x & 0xff0000) >> 8 | (__swap32gen_x & 0xff000000) >> 24); }) : ({ u_int32_t __swap32md_x = (__swap32_x); __asm ("bswap %1" : "+r" (__swap32md_x)); __swap32md_x; }); })
                    , 0);
   pf_change_a(&th->th_ack, &th->th_sum, __extension__({ u_int32_t __swap32_x = (ack); __builtin_constant_p(ack) ? __extension__({ u_int32_t __swap32gen_x = (__swap32_x); (u_int32_t)((__swap32gen_x & 0xff) << 24 | (__swap32gen_x & 0xff00) << 8 | (__swap32gen_x & 0xff0000) >> 8 | (__swap32gen_x & 0xff000000) >> 24); }) : ({ u_int32_t __swap32md_x = (__swap32_x); __asm ("bswap %1" : "+r" (__swap32md_x)); __swap32md_x; }); }), 0);
   copyback = 1;
  }
  end = seq + pd->p_len;
  if (th->th_flags & 0x02)
   end++;
  if (th->th_flags & 0x01)
   end++;
 }

 if ((th->th_flags & 0x10) == 0) {

  ack = dst->seqlo;
 } else if ((ack == 0 &&
     (th->th_flags & (0x10|0x04)) == (0x10|0x04)) ||

     (dst->state < 2)) {




  ack = dst->seqlo;
 }

 if (seq == end) {

  seq = src->seqlo;
  end = seq;
 }

 ackskew = dst->seqlo - ack;


 if (((int)((src->seqhi)-(end)) >= 0) &&

     ((int)((seq)-(src->seqlo - (dst->max_win << dws))) >= 0) &&

     (ackskew >= -(0xffff + 1500)) &&

     (ackskew <= ((0xffff + 1500) << sws))) {



  if (src->max_win < win)
   src->max_win = win;

  if (((int)((end)-(src->seqlo)) > 0))
   src->seqlo = end;

  if (((int)((ack + (win << sws))-(dst->seqhi)) >= 0))
   dst->seqhi = ack + ((((win << sws))>(1))?((win << sws)):(1));



  if (th->th_flags & 0x02)
   if (src->state < 2)
    src->state = 2;
  if (th->th_flags & 0x01)
   if (src->state < 7)
    src->state = 7;
  if (th->th_flags & 0x10) {
   if (dst->state == 2)
    dst->state = 4;
   else if (dst->state == 7)
    dst->state = 9;
  }
  if (th->th_flags & 0x04)
   src->state = dst->state = 10;


  (*state)->expire = time.tv_sec;
  if (src->state >= 9 &&
      dst->state >= 9)
   (*state)->timeout = PFTM_TCP_CLOSED;
  else if (src->state >= 9 ||
      dst->state >= 9)
   (*state)->timeout = PFTM_TCP_FIN_WAIT;
  else if (src->state < 4 ||
      dst->state < 4)
   (*state)->timeout = PFTM_TCP_OPENING;
  else if (src->state >= 7 ||
      dst->state >= 7)
   (*state)->timeout = PFTM_TCP_CLOSING;
  else
   (*state)->timeout = PFTM_TCP_ESTABLISHED;



 } else if ((dst->state < 2 ||
  dst->state >= 9 ||
  src->state >= 9) &&
     ((int)((src->seqhi + (0xffff + 1500))-(end)) >= 0) &&

     ((int)((seq)-(src->seqlo - (0xffff + 1500))) >= 0)) {
# 3941 "openbsd3/net/pf.c"
  if (global_pf_status[get_stack_id()].debug >= PF_DEBUG_MISC) {
   printf("pf: loose state match: ");
   pf_print_state(*state);
   pf_print_flags(th->th_flags);
   printf(" seq=%u ack=%u len=%u ackskew=%d pkts=%d:%d\n",
       seq, ack, pd->p_len, ackskew,
       (*state)->packets[0], (*state)->packets[1]);
  }


  if (src->max_win < win)
   src->max_win = win;

  if (((int)((end)-(src->seqlo)) > 0))
   src->seqlo = end;

  if (((int)((ack + (win << sws))-(dst->seqhi)) >= 0))
   dst->seqhi = ack + ((((win << sws))>(1))?((win << sws)):(1));






  if (th->th_flags & 0x01)
   if (src->state < 7)
    src->state = 7;
  if (th->th_flags & 0x04)
   src->state = dst->state = 10;



 } else {
  if ((*state)->dst.state == 2 &&
      (*state)->src.state == 2) {

   if (!(th->th_flags & 0x04)) {
    u_int32_t ack = __extension__({ u_int32_t __swap32_x = (th->th_seq); __builtin_constant_p(th->th_seq) ? __extension__({ u_int32_t __swap32gen_x = (__swap32_x); (u_int32_t)((__swap32gen_x & 0xff) << 24 | (__swap32gen_x & 0xff00) << 8 | (__swap32gen_x & 0xff0000) >> 8 | (__swap32gen_x & 0xff000000) >> 24); }) : ({ u_int32_t __swap32md_x = (__swap32_x); __asm ("bswap %1" : "+r" (__swap32md_x)); __swap32md_x; }); }) + pd->p_len;

    if (th->th_flags & 0x02)
     ack++;
    if (th->th_flags & 0x01)
     ack++;
    pf_send_tcp((*state)->rule.ptr, pd->af,
        pd->dst, pd->src, th->th_dport,
        th->th_sport, __extension__({ u_int32_t __swap32_x = (th->th_ack); __builtin_constant_p(th->th_ack) ? __extension__({ u_int32_t __swap32gen_x = (__swap32_x); (u_int32_t)((__swap32gen_x & 0xff) << 24 | (__swap32gen_x & 0xff00) << 8 | (__swap32gen_x & 0xff0000) >> 8 | (__swap32gen_x & 0xff000000) >> 24); }) : ({ u_int32_t __swap32md_x = (__swap32_x); __asm ("bswap %1" : "+r" (__swap32md_x)); __swap32md_x; }); }), ack,
        0x04|0x10, 0, 0,
        (*state)->rule.ptr->return_ttl);
   }
   src->seqlo = 0;
   src->seqhi = 1;
   src->max_win = 1;
  } else if (global_pf_status[get_stack_id()].debug >= PF_DEBUG_MISC) {
   printf("pf: BAD state: ");
   pf_print_state(*state);
   pf_print_flags(th->th_flags);
   printf(" seq=%u ack=%u len=%u ackskew=%d pkts=%d:%d "
       "dir=%s,%s\n", seq, ack, pd->p_len, ackskew,
       (*state)->packets[0], (*state)->packets[1],
       direction == PF_IN ? "in" : "out",
       direction == (*state)->direction ? "fwd" : "rev");
   printf("pf: State failure on: %c %c %c %c | %c %c\n",
       ((int)((src->seqhi)-(end)) >= 0) ? ' ' : '1',
       ((int)((seq)-(src->seqlo - (dst->max_win << dws))) >= 0) ?
       ' ': '2',
       (ackskew >= -(0xffff + 1500)) ? ' ' : '3',
       (ackskew <= ((0xffff + 1500) << sws)) ? ' ' : '4',
       ((int)((src->seqhi + (0xffff + 1500))-(end)) >= 0) ?' ' :'5',
       ((int)((seq)-(src->seqlo - (0xffff + 1500))) >= 0) ?' ' :'6');
  }
  return (PF_DROP);
 }

 if (dst->scrub || src->scrub) {
  if (pf_normalize_tcp_stateful(m, off, pd, reason, th,
      src, dst, &copyback))
   return (PF_DROP);
 }




 if ((*state)->lan.addr.pfa.addr32[0] != (*state)->gwy.addr.pfa.addr32[0] || ((*state)->af == 24 && ((*state)->lan.addr.pfa.addr32[1] != (*state)->gwy.addr.pfa.addr32[1] || (*state)->lan.addr.pfa.addr32[2] != (*state)->gwy.addr.pfa.addr32[2] || (*state)->lan.addr.pfa.addr32[3] != (*state)->gwy.addr.pfa.addr32[3])) || (*state)->lan.port != (*state)->gwy.port) {
  if (direction == PF_OUT)
   pf_change_ap(pd->src, &th->th_sport, pd->ip_sum,
       &th->th_sum, &(*state)->gwy.addr,
       (*state)->gwy.port, 0, pd->af);
  else
   pf_change_ap(pd->dst, &th->th_dport, pd->ip_sum,
       &th->th_sum, &(*state)->lan.addr,
       (*state)->lan.port, 0, pd->af);
  m_copyback(m, off, sizeof(*th), th);
 } else if (copyback) {

  m_copyback(m, off, sizeof(*th), th);
 }

 return (PF_PASS);
}

int
pf_test_state_udp(struct pf_state **state, int direction, struct pfi_kif *kif,
    struct mbuf *m, int off, void *h, struct pf_pdesc *pd)
{
 struct pf_state_peer *src, *dst;
 struct pf_state key;
 struct udphdr *uh = pd->hdr.udp;

 key.af = pd->af;
 key.proto = 17;
 if (direction == PF_IN) {
  pf_addrcpy(&key.ext.addr, pd->src, key.af);
  pf_addrcpy(&key.gwy.addr, pd->dst, key.af);
  key.ext.port = uh->uh_sport;
  key.gwy.port = uh->uh_dport;
 } else {
  pf_addrcpy(&key.lan.addr, pd->src, key.af);
  pf_addrcpy(&key.ext.addr, pd->dst, key.af);
  key.lan.port = uh->uh_sport;
  key.ext.port = uh->uh_dport;
 }

 do { if (direction == PF_IN) *state = pf_find_state_recurse( kif, &key, PF_EXT_GWY); else *state = pf_find_state_recurse( kif, &key, PF_LAN_EXT); if (*state == 0L) return (PF_DROP); if (direction == PF_OUT && (((*state)->rule.ptr->rt == PF_ROUTETO && (*state)->rule.ptr->direction == PF_OUT) || ((*state)->rule.ptr->rt == PF_REPLYTO && (*state)->rule.ptr->direction == PF_IN)) && (*state)->rt_kif != 0L && (*state)->rt_kif != kif) return (PF_PASS); } while (0);

 if (direction == (*state)->direction) {
  src = &(*state)->src;
  dst = &(*state)->dst;
 } else {
  src = &(*state)->dst;
  dst = &(*state)->src;
 }


 if (src->state < 1)
  src->state = 1;
 if (dst->state == 1)
  dst->state = 2;


 (*state)->expire = time.tv_sec;
 if (src->state == 2 && dst->state == 2)
  (*state)->timeout = PFTM_UDP_MULTIPLE;
 else
  (*state)->timeout = PFTM_UDP_SINGLE;


 if ((*state)->lan.addr.pfa.addr32[0] != (*state)->gwy.addr.pfa.addr32[0] || ((*state)->af == 24 && ((*state)->lan.addr.pfa.addr32[1] != (*state)->gwy.addr.pfa.addr32[1] || (*state)->lan.addr.pfa.addr32[2] != (*state)->gwy.addr.pfa.addr32[2] || (*state)->lan.addr.pfa.addr32[3] != (*state)->gwy.addr.pfa.addr32[3])) || (*state)->lan.port != (*state)->gwy.port) {
  if (direction == PF_OUT)
   pf_change_ap(pd->src, &uh->uh_sport, pd->ip_sum,
       &uh->uh_sum, &(*state)->gwy.addr,
       (*state)->gwy.port, 1, pd->af);
  else
   pf_change_ap(pd->dst, &uh->uh_dport, pd->ip_sum,
       &uh->uh_sum, &(*state)->lan.addr,
       (*state)->lan.port, 1, pd->af);
  m_copyback(m, off, sizeof(*uh), uh);
 }

 return (PF_PASS);
}

int
pf_test_state_icmp(struct pf_state **state, int direction, struct pfi_kif *kif,
    struct mbuf *m, int off, void *h, struct pf_pdesc *pd)
{
 struct pf_addr *saddr = pd->src, *daddr = pd->dst;
 u_int16_t icmpid, *icmpsum;
 u_int8_t icmptype;
 int state_icmp = 0;

 switch (pd->proto) {

 case 1:
  icmptype = pd->hdr.icmp->icmp_type;
  icmpid = pd->hdr.icmp->icmp_hun.ih_idseq.icd_id;
  icmpsum = &pd->hdr.icmp->icmp_cksum;

  if (icmptype == 3 ||
      icmptype == 4 ||
      icmptype == 5 ||
      icmptype == 11 ||
      icmptype == 12)
   state_icmp++;
  break;


 case 58:
  icmptype = pd->hdr.icmp6->icmp6_type;
  icmpid = pd->hdr.icmp6->icmp6_dataun.icmp6_un_data16[0];
  icmpsum = &pd->hdr.icmp6->icmp6_cksum;

  if (icmptype == 1 ||
      icmptype == 2 ||
      icmptype == 3 ||
      icmptype == 4)
   state_icmp++;
  break;

 }

 if (!state_icmp) {





  struct pf_state key;

  key.af = pd->af;
  key.proto = pd->proto;
  if (direction == PF_IN) {
   pf_addrcpy(&key.ext.addr, pd->src, key.af);
   pf_addrcpy(&key.gwy.addr, pd->dst, key.af);
   key.ext.port = icmpid;
   key.gwy.port = icmpid;
  } else {
   pf_addrcpy(&key.lan.addr, pd->src, key.af);
   pf_addrcpy(&key.ext.addr, pd->dst, key.af);
   key.lan.port = icmpid;
   key.ext.port = icmpid;
  }

  do { if (direction == PF_IN) *state = pf_find_state_recurse( kif, &key, PF_EXT_GWY); else *state = pf_find_state_recurse( kif, &key, PF_LAN_EXT); if (*state == 0L) return (PF_DROP); if (direction == PF_OUT && (((*state)->rule.ptr->rt == PF_ROUTETO && (*state)->rule.ptr->direction == PF_OUT) || ((*state)->rule.ptr->rt == PF_REPLYTO && (*state)->rule.ptr->direction == PF_IN)) && (*state)->rt_kif != 0L && (*state)->rt_kif != kif) return (PF_PASS); } while (0);

  (*state)->expire = time.tv_sec;
  (*state)->timeout = PFTM_ICMP_ERROR_REPLY;


  if (((pd->af == 2 && (&(*state)->lan.addr)->pfa.addr32[0] != (&(*state)->gwy.addr)->pfa.addr32[0]) || ((&(*state)->lan.addr)->pfa.addr32[3] != (&(*state)->gwy.addr)->pfa.addr32[3] || (&(*state)->lan.addr)->pfa.addr32[2] != (&(*state)->gwy.addr)->pfa.addr32[2] || (&(*state)->lan.addr)->pfa.addr32[1] != (&(*state)->gwy.addr)->pfa.addr32[1] || (&(*state)->lan.addr)->pfa.addr32[0] != (&(*state)->gwy.addr)->pfa.addr32[0]))) {
   if (direction == PF_OUT) {
    switch (pd->af) {

    case 2:
     pf_change_a(&saddr->pfa.v4.s_addr,
         pd->ip_sum,
         (*state)->gwy.addr.pfa.v4.s_addr, 0);
     break;


    case 24:
     pf_change_a6(saddr,
         &pd->hdr.icmp6->icmp6_cksum,
         &(*state)->gwy.addr, 0);
     m_copyback(m, off,
         sizeof(struct icmp6_hdr),
         pd->hdr.icmp6);
     break;

    }
   } else {
    switch (pd->af) {

    case 2:
     pf_change_a(&daddr->pfa.v4.s_addr,
         pd->ip_sum,
         (*state)->lan.addr.pfa.v4.s_addr, 0);
     break;


    case 24:
     pf_change_a6(daddr,
         &pd->hdr.icmp6->icmp6_cksum,
         &(*state)->lan.addr, 0);
     m_copyback(m, off,
         sizeof(struct icmp6_hdr),
         pd->hdr.icmp6);
     break;

    }
   }
  }

  return (PF_PASS);

 } else {





  struct pf_pdesc pd2;

  struct ip h2;


  struct ip6_hdr h2_6;
  int terminal = 0;

  int ipoff2;
  int off2;

  pd2.af = pd->af;
  switch (pd->af) {

  case 2:

   ipoff2 = off + 8;

   if (!pf_pull_hdr(m, ipoff2, &h2, sizeof(h2),
       0L, 0L, pd2.af)) {
    if (global_pf_status[get_stack_id()].debug >= (PF_DEBUG_MISC)) printf ("pf: ICMP error message too short " "(ip)\n")

                  ;
    return (PF_DROP);
   }




   if (h2.ip_off & __extension__({ u_int16_t __swap16_x = (0x1fff); __builtin_constant_p(0x1fff) ? __extension__({ u_int16_t __swap16gen_x = (__swap16_x); (u_int16_t)((__swap16gen_x & 0xff) << 8 | (__swap16gen_x & 0xff00) >> 8); }) : ({ u_int16_t __swap16md_x = (__swap16_x); __asm ("rorw $8, %w1" : "+r" (__swap16md_x)); __swap16md_x; }); }))
    return (PF_DROP);


   off2 = ipoff2 + (h2.ip_hl << 2);

   pd2.proto = h2.ip_p;
   pd2.src = (struct pf_addr *)&h2.ip_src;
   pd2.dst = (struct pf_addr *)&h2.ip_dst;
   pd2.ip_sum = &h2.ip_sum;
   break;


  case 24:
   ipoff2 = off + sizeof(struct icmp6_hdr);

   if (!pf_pull_hdr(m, ipoff2, &h2_6, sizeof(h2_6),
       0L, 0L, pd2.af)) {
    if (global_pf_status[get_stack_id()].debug >= (PF_DEBUG_MISC)) printf ("pf: ICMP error message too short " "(ip6)\n")

                   ;
    return (PF_DROP);
   }
   pd2.proto = h2_6.ip6_ctlun.ip6_un1.ip6_un1_nxt;
   pd2.src = (struct pf_addr *)&h2_6.ip6_src;
   pd2.dst = (struct pf_addr *)&h2_6.ip6_dst;
   pd2.ip_sum = 0L;
   off2 = ipoff2 + sizeof(h2_6);
   do {
    switch (pd2.proto) {
    case 44:




     return (PF_DROP);
    case 51:
    case 0:
    case 43:
    case 60: {

     struct ip6_ext opt6;

     if (!pf_pull_hdr(m, off2, &opt6,
         sizeof(opt6), 0L, 0L, pd2.af)) {
      if (global_pf_status[get_stack_id()].debug >= (PF_DEBUG_MISC)) printf ("pf: ICMPv6 short opt\n")
                                     ;
      return (PF_DROP);
     }
     if (pd2.proto == 51)
      off2 += (opt6.ip6e_len + 2) * 4;
     else
      off2 += (opt6.ip6e_len + 1) * 8;
     pd2.proto = opt6.ip6e_nxt;

     break;
    }
    default:
     terminal++;
     break;
    }
   } while (!terminal);
   break;

  }

  switch (pd2.proto) {
  case 6: {
   struct tcphdr th;
   u_int32_t seq;
   struct pf_state key;
   struct pf_state_peer *src, *dst;
   u_int8_t dws;
   int copyback = 0;






   if (!pf_pull_hdr(m, off2, &th, 8, 0L, 0L, pd2.af)) {
    if (global_pf_status[get_stack_id()].debug >= (PF_DEBUG_MISC)) printf ("pf: ICMP error message too short " "(tcp)\n")

                   ;
    return (PF_DROP);
   }

   key.af = pd2.af;
   key.proto = 6;
   if (direction == PF_IN) {
    pf_addrcpy(&key.ext.addr, pd2.dst, key.af);
    pf_addrcpy(&key.gwy.addr, pd2.src, key.af);
    key.ext.port = th.th_dport;
    key.gwy.port = th.th_sport;
   } else {
    pf_addrcpy(&key.lan.addr, pd2.dst, key.af);
    pf_addrcpy(&key.ext.addr, pd2.src, key.af);
    key.lan.port = th.th_dport;
    key.ext.port = th.th_sport;
   }

   do { if (direction == PF_IN) *state = pf_find_state_recurse( kif, &key, PF_EXT_GWY); else *state = pf_find_state_recurse( kif, &key, PF_LAN_EXT); if (*state == 0L) return (PF_DROP); if (direction == PF_OUT && (((*state)->rule.ptr->rt == PF_ROUTETO && (*state)->rule.ptr->direction == PF_OUT) || ((*state)->rule.ptr->rt == PF_REPLYTO && (*state)->rule.ptr->direction == PF_IN)) && (*state)->rt_kif != 0L && (*state)->rt_kif != kif) return (PF_PASS); } while (0);

   if (direction == (*state)->direction) {
    src = &(*state)->dst;
    dst = &(*state)->src;
   } else {
    src = &(*state)->src;
    dst = &(*state)->dst;
   }

   if (src->wscale && dst->wscale &&
       !(th.th_flags & 0x02))
    dws = dst->wscale & 0x0f;
   else
    dws = 0;


   seq = __extension__({ u_int32_t __swap32_x = (th.th_seq); __builtin_constant_p(th.th_seq) ? __extension__({ u_int32_t __swap32gen_x = (__swap32_x); (u_int32_t)((__swap32gen_x & 0xff) << 24 | (__swap32gen_x & 0xff00) << 8 | (__swap32gen_x & 0xff0000) >> 8 | (__swap32gen_x & 0xff000000) >> 24); }) : ({ u_int32_t __swap32md_x = (__swap32_x); __asm ("bswap %1" : "+r" (__swap32md_x)); __swap32md_x; }); }) - src->seqdiff;
   if (src->seqdiff) {
    pf_change_a(&th.th_seq, icmpsum,
        __extension__({ u_int32_t __swap32_x = (seq); __builtin_constant_p(seq) ? __extension__({ u_int32_t __swap32gen_x = (__swap32_x); (u_int32_t)((__swap32gen_x & 0xff) << 24 | (__swap32gen_x & 0xff00) << 8 | (__swap32gen_x & 0xff0000) >> 8 | (__swap32gen_x & 0xff000000) >> 24); }) : ({ u_int32_t __swap32md_x = (__swap32_x); __asm ("bswap %1" : "+r" (__swap32md_x)); __swap32md_x; }); }), 0);
    copyback = 1;
   }

   if (!((int)((src->seqhi)-(seq)) >= 0) ||
       !((int)((seq)-(src->seqlo - (dst->max_win << dws))) >= 0)) {
    if (global_pf_status[get_stack_id()].debug >= PF_DEBUG_MISC) {
     printf("pf: BAD ICMP %d:%d ",
         icmptype, pd->hdr.icmp->icmp_code);
     pf_print_host(pd->src, 0, pd->af);
     printf(" -> ");
     pf_print_host(pd->dst, 0, pd->af);
     printf(" state: ");
     pf_print_state(*state);
     printf(" seq=%u\n", seq);
    }
    return (PF_DROP);
   }

   if ((*state)->lan.addr.pfa.addr32[0] != (*state)->gwy.addr.pfa.addr32[0] || ((*state)->af == 24 && ((*state)->lan.addr.pfa.addr32[1] != (*state)->gwy.addr.pfa.addr32[1] || (*state)->lan.addr.pfa.addr32[2] != (*state)->gwy.addr.pfa.addr32[2] || (*state)->lan.addr.pfa.addr32[3] != (*state)->gwy.addr.pfa.addr32[3])) || (*state)->lan.port != (*state)->gwy.port) {
    if (direction == PF_IN) {
     pf_change_icmp(pd2.src, &th.th_sport,
         daddr, &(*state)->lan.addr,
         (*state)->lan.port, 0L,
         pd2.ip_sum, icmpsum,
         pd->ip_sum, 0, pd2.af);
    } else {
     pf_change_icmp(pd2.dst, &th.th_dport,
         saddr, &(*state)->gwy.addr,
         (*state)->gwy.port, 0L,
         pd2.ip_sum, icmpsum,
         pd->ip_sum, 0, pd2.af);
    }
    copyback = 1;
   }

   if (copyback) {
    switch (pd2.af) {

    case 2:
     m_copyback(m, off, 8,
         pd->hdr.icmp);
     m_copyback(m, ipoff2, sizeof(h2),
         &h2);
     break;


    case 24:
     m_copyback(m, off,
         sizeof(struct icmp6_hdr),
         pd->hdr.icmp6);
     m_copyback(m, ipoff2, sizeof(h2_6),
         &h2_6);
     break;

    }
    m_copyback(m, off2, 8, &th);
   }

   return (PF_PASS);
   break;
  }
  case 17: {
   struct udphdr uh;
   struct pf_state key;

   if (!pf_pull_hdr(m, off2, &uh, sizeof(uh),
       0L, 0L, pd2.af)) {
    if (global_pf_status[get_stack_id()].debug >= (PF_DEBUG_MISC)) printf ("pf: ICMP error message too short " "(udp)\n")

                   ;
    return (PF_DROP);
   }

   key.af = pd2.af;
   key.proto = 17;
   if (direction == PF_IN) {
    pf_addrcpy(&key.ext.addr, pd2.dst, key.af);
    pf_addrcpy(&key.gwy.addr, pd2.src, key.af);
    key.ext.port = uh.uh_dport;
    key.gwy.port = uh.uh_sport;
   } else {
    pf_addrcpy(&key.lan.addr, pd2.dst, key.af);
    pf_addrcpy(&key.ext.addr, pd2.src, key.af);
    key.lan.port = uh.uh_dport;
    key.ext.port = uh.uh_sport;
   }

   do { if (direction == PF_IN) *state = pf_find_state_recurse( kif, &key, PF_EXT_GWY); else *state = pf_find_state_recurse( kif, &key, PF_LAN_EXT); if (*state == 0L) return (PF_DROP); if (direction == PF_OUT && (((*state)->rule.ptr->rt == PF_ROUTETO && (*state)->rule.ptr->direction == PF_OUT) || ((*state)->rule.ptr->rt == PF_REPLYTO && (*state)->rule.ptr->direction == PF_IN)) && (*state)->rt_kif != 0L && (*state)->rt_kif != kif) return (PF_PASS); } while (0);

   if ((*state)->lan.addr.pfa.addr32[0] != (*state)->gwy.addr.pfa.addr32[0] || ((*state)->af == 24 && ((*state)->lan.addr.pfa.addr32[1] != (*state)->gwy.addr.pfa.addr32[1] || (*state)->lan.addr.pfa.addr32[2] != (*state)->gwy.addr.pfa.addr32[2] || (*state)->lan.addr.pfa.addr32[3] != (*state)->gwy.addr.pfa.addr32[3])) || (*state)->lan.port != (*state)->gwy.port) {
    if (direction == PF_IN) {
     pf_change_icmp(pd2.src, &uh.uh_sport,
         daddr, &(*state)->lan.addr,
         (*state)->lan.port, &uh.uh_sum,
         pd2.ip_sum, icmpsum,
         pd->ip_sum, 1, pd2.af);
    } else {
     pf_change_icmp(pd2.dst, &uh.uh_dport,
         saddr, &(*state)->gwy.addr,
         (*state)->gwy.port, &uh.uh_sum,
         pd2.ip_sum, icmpsum,
         pd->ip_sum, 1, pd2.af);
    }
    switch (pd2.af) {

    case 2:
     m_copyback(m, off, 8,
         pd->hdr.icmp);
     m_copyback(m, ipoff2, sizeof(h2), &h2);
     break;


    case 24:
     m_copyback(m, off,
         sizeof(struct icmp6_hdr),
         pd->hdr.icmp6);
     m_copyback(m, ipoff2, sizeof(h2_6),
         &h2_6);
     break;

    }
    m_copyback(m, off2, sizeof(uh), &uh);
   }

   return (PF_PASS);
   break;
  }

  case 1: {
   struct icmp iih;
   struct pf_state key;

   if (!pf_pull_hdr(m, off2, &iih, 8,
       0L, 0L, pd2.af)) {
    if (global_pf_status[get_stack_id()].debug >= (PF_DEBUG_MISC)) printf ("pf: ICMP error message too short i" "(icmp)\n")

                    ;
    return (PF_DROP);
   }

   key.af = pd2.af;
   key.proto = 1;
   if (direction == PF_IN) {
    pf_addrcpy(&key.ext.addr, pd2.dst, key.af);
    pf_addrcpy(&key.gwy.addr, pd2.src, key.af);
    key.ext.port = iih.icmp_hun.ih_idseq.icd_id;
    key.gwy.port = iih.icmp_hun.ih_idseq.icd_id;
   } else {
    pf_addrcpy(&key.lan.addr, pd2.dst, key.af);
    pf_addrcpy(&key.ext.addr, pd2.src, key.af);
    key.lan.port = iih.icmp_hun.ih_idseq.icd_id;
    key.ext.port = iih.icmp_hun.ih_idseq.icd_id;
   }

   do { if (direction == PF_IN) *state = pf_find_state_recurse( kif, &key, PF_EXT_GWY); else *state = pf_find_state_recurse( kif, &key, PF_LAN_EXT); if (*state == 0L) return (PF_DROP); if (direction == PF_OUT && (((*state)->rule.ptr->rt == PF_ROUTETO && (*state)->rule.ptr->direction == PF_OUT) || ((*state)->rule.ptr->rt == PF_REPLYTO && (*state)->rule.ptr->direction == PF_IN)) && (*state)->rt_kif != 0L && (*state)->rt_kif != kif) return (PF_PASS); } while (0);

   if ((*state)->lan.addr.pfa.addr32[0] != (*state)->gwy.addr.pfa.addr32[0] || ((*state)->af == 24 && ((*state)->lan.addr.pfa.addr32[1] != (*state)->gwy.addr.pfa.addr32[1] || (*state)->lan.addr.pfa.addr32[2] != (*state)->gwy.addr.pfa.addr32[2] || (*state)->lan.addr.pfa.addr32[3] != (*state)->gwy.addr.pfa.addr32[3])) || (*state)->lan.port != (*state)->gwy.port) {
    if (direction == PF_IN) {
     pf_change_icmp(pd2.src, &iih.icmp_hun.ih_idseq.icd_id,
         daddr, &(*state)->lan.addr,
         (*state)->lan.port, 0L,
         pd2.ip_sum, icmpsum,
         pd->ip_sum, 0, 2);
    } else {
     pf_change_icmp(pd2.dst, &iih.icmp_hun.ih_idseq.icd_id,
         saddr, &(*state)->gwy.addr,
         (*state)->gwy.port, 0L,
         pd2.ip_sum, icmpsum,
         pd->ip_sum, 0, 2);
    }
    m_copyback(m, off, 8, pd->hdr.icmp);
    m_copyback(m, ipoff2, sizeof(h2), &h2);
    m_copyback(m, off2, 8, &iih);
   }

   return (PF_PASS);
   break;
  }


  case 58: {
   struct icmp6_hdr iih;
   struct pf_state key;

   if (!pf_pull_hdr(m, off2, &iih,
       sizeof(struct icmp6_hdr), 0L, 0L, pd2.af)) {
    if (global_pf_status[get_stack_id()].debug >= (PF_DEBUG_MISC)) printf ("pf: ICMP error message too short " "(icmp6)\n")

                     ;
    return (PF_DROP);
   }

   key.af = pd2.af;
   key.proto = 58;
   if (direction == PF_IN) {
    pf_addrcpy(&key.ext.addr, pd2.dst, key.af);
    pf_addrcpy(&key.gwy.addr, pd2.src, key.af);
    key.ext.port = iih.icmp6_dataun.icmp6_un_data16[0];
    key.gwy.port = iih.icmp6_dataun.icmp6_un_data16[0];
   } else {
    pf_addrcpy(&key.lan.addr, pd2.dst, key.af);
    pf_addrcpy(&key.ext.addr, pd2.src, key.af);
    key.lan.port = iih.icmp6_dataun.icmp6_un_data16[0];
    key.ext.port = iih.icmp6_dataun.icmp6_un_data16[0];
   }

   do { if (direction == PF_IN) *state = pf_find_state_recurse( kif, &key, PF_EXT_GWY); else *state = pf_find_state_recurse( kif, &key, PF_LAN_EXT); if (*state == 0L) return (PF_DROP); if (direction == PF_OUT && (((*state)->rule.ptr->rt == PF_ROUTETO && (*state)->rule.ptr->direction == PF_OUT) || ((*state)->rule.ptr->rt == PF_REPLYTO && (*state)->rule.ptr->direction == PF_IN)) && (*state)->rt_kif != 0L && (*state)->rt_kif != kif) return (PF_PASS); } while (0);

   if ((*state)->lan.addr.pfa.addr32[0] != (*state)->gwy.addr.pfa.addr32[0] || ((*state)->af == 24 && ((*state)->lan.addr.pfa.addr32[1] != (*state)->gwy.addr.pfa.addr32[1] || (*state)->lan.addr.pfa.addr32[2] != (*state)->gwy.addr.pfa.addr32[2] || (*state)->lan.addr.pfa.addr32[3] != (*state)->gwy.addr.pfa.addr32[3])) || (*state)->lan.port != (*state)->gwy.port) {
    if (direction == PF_IN) {
     pf_change_icmp(pd2.src, &iih.icmp6_dataun.icmp6_un_data16[0],
         daddr, &(*state)->lan.addr,
         (*state)->lan.port, 0L,
         pd2.ip_sum, icmpsum,
         pd->ip_sum, 0, 24);
    } else {
     pf_change_icmp(pd2.dst, &iih.icmp6_dataun.icmp6_un_data16[0],
         saddr, &(*state)->gwy.addr,
         (*state)->gwy.port, 0L,
         pd2.ip_sum, icmpsum,
         pd->ip_sum, 0, 24);
    }
    m_copyback(m, off, sizeof(struct icmp6_hdr),
        pd->hdr.icmp6);
    m_copyback(m, ipoff2, sizeof(h2_6), &h2_6);
    m_copyback(m, off2, sizeof(struct icmp6_hdr),
        &iih);
   }

   return (PF_PASS);
   break;
  }

  default: {
   struct pf_state key;

   key.af = pd2.af;
   key.proto = pd2.proto;
   if (direction == PF_IN) {
    pf_addrcpy(&key.ext.addr, pd2.dst, key.af);
    pf_addrcpy(&key.gwy.addr, pd2.src, key.af);
    key.ext.port = 0;
    key.gwy.port = 0;
   } else {
    pf_addrcpy(&key.lan.addr, pd2.dst, key.af);
    pf_addrcpy(&key.ext.addr, pd2.src, key.af);
    key.lan.port = 0;
    key.ext.port = 0;
   }

   do { if (direction == PF_IN) *state = pf_find_state_recurse( kif, &key, PF_EXT_GWY); else *state = pf_find_state_recurse( kif, &key, PF_LAN_EXT); if (*state == 0L) return (PF_DROP); if (direction == PF_OUT && (((*state)->rule.ptr->rt == PF_ROUTETO && (*state)->rule.ptr->direction == PF_OUT) || ((*state)->rule.ptr->rt == PF_REPLYTO && (*state)->rule.ptr->direction == PF_IN)) && (*state)->rt_kif != 0L && (*state)->rt_kif != kif) return (PF_PASS); } while (0);

   if ((*state)->lan.addr.pfa.addr32[0] != (*state)->gwy.addr.pfa.addr32[0] || ((*state)->af == 24 && ((*state)->lan.addr.pfa.addr32[1] != (*state)->gwy.addr.pfa.addr32[1] || (*state)->lan.addr.pfa.addr32[2] != (*state)->gwy.addr.pfa.addr32[2] || (*state)->lan.addr.pfa.addr32[3] != (*state)->gwy.addr.pfa.addr32[3])) || (*state)->lan.port != (*state)->gwy.port) {
    if (direction == PF_IN) {
     pf_change_icmp(pd2.src, 0L,
         daddr, &(*state)->lan.addr,
         0, 0L,
         pd2.ip_sum, icmpsum,
         pd->ip_sum, 0, pd2.af);
    } else {
     pf_change_icmp(pd2.dst, 0L,
         saddr, &(*state)->gwy.addr,
         0, 0L,
         pd2.ip_sum, icmpsum,
         pd->ip_sum, 0, pd2.af);
    }
    switch (pd2.af) {

    case 2:
     m_copyback(m, off, 8,
         pd->hdr.icmp);
     m_copyback(m, ipoff2, sizeof(h2), &h2);
     break;


    case 24:
     m_copyback(m, off,
         sizeof(struct icmp6_hdr),
         pd->hdr.icmp6);
     m_copyback(m, ipoff2, sizeof(h2_6),
         &h2_6);
     break;

    }
   }

   return (PF_PASS);
   break;
  }
  }
 }
}

int
pf_test_state_other(struct pf_state **state, int direction, struct pfi_kif *kif,
    struct pf_pdesc *pd)
{
 struct pf_state_peer *src, *dst;
 struct pf_state key;

 key.af = pd->af;
 key.proto = pd->proto;
 if (direction == PF_IN) {
  pf_addrcpy(&key.ext.addr, pd->src, key.af);
  pf_addrcpy(&key.gwy.addr, pd->dst, key.af);
  key.ext.port = 0;
  key.gwy.port = 0;
 } else {
  pf_addrcpy(&key.lan.addr, pd->src, key.af);
  pf_addrcpy(&key.ext.addr, pd->dst, key.af);
  key.lan.port = 0;
  key.ext.port = 0;
 }

 do { if (direction == PF_IN) *state = pf_find_state_recurse( kif, &key, PF_EXT_GWY); else *state = pf_find_state_recurse( kif, &key, PF_LAN_EXT); if (*state == 0L) return (PF_DROP); if (direction == PF_OUT && (((*state)->rule.ptr->rt == PF_ROUTETO && (*state)->rule.ptr->direction == PF_OUT) || ((*state)->rule.ptr->rt == PF_REPLYTO && (*state)->rule.ptr->direction == PF_IN)) && (*state)->rt_kif != 0L && (*state)->rt_kif != kif) return (PF_PASS); } while (0);

 if (direction == (*state)->direction) {
  src = &(*state)->src;
  dst = &(*state)->dst;
 } else {
  src = &(*state)->dst;
  dst = &(*state)->src;
 }


 if (src->state < 1)
  src->state = 1;
 if (dst->state == 1)
  dst->state = 2;


 (*state)->expire = time.tv_sec;
 if (src->state == 2 && dst->state == 2)
  (*state)->timeout = PFTM_OTHER_MULTIPLE;
 else
  (*state)->timeout = PFTM_OTHER_SINGLE;


 if ((*state)->lan.addr.pfa.addr32[0] != (*state)->gwy.addr.pfa.addr32[0] || ((*state)->af == 24 && ((*state)->lan.addr.pfa.addr32[1] != (*state)->gwy.addr.pfa.addr32[1] || (*state)->lan.addr.pfa.addr32[2] != (*state)->gwy.addr.pfa.addr32[2] || (*state)->lan.addr.pfa.addr32[3] != (*state)->gwy.addr.pfa.addr32[3])) || (*state)->lan.port != (*state)->gwy.port) {
  if (direction == PF_OUT)
   switch (pd->af) {

   case 2:
    pf_change_a(&pd->src->pfa.v4.s_addr,
        pd->ip_sum, (*state)->gwy.addr.pfa.v4.s_addr,
        0);
    break;


   case 24:
    pf_addrcpy(pd->src, &(*state)->gwy.addr, pd->af);
    break;

   }
  else
   switch (pd->af) {

   case 2:
    pf_change_a(&pd->dst->pfa.v4.s_addr,
        pd->ip_sum, (*state)->lan.addr.pfa.v4.s_addr,
        0);
    break;


   case 24:
    pf_addrcpy(pd->dst, &(*state)->lan.addr, pd->af);
    break;

   }
 }

 return (PF_PASS);
}





void *
pf_pull_hdr(struct mbuf *m, int off, void *p, int len,
    u_short *actionp, u_short *reasonp, sa_family_t af)
{
 switch (af) {

 case 2: {
  struct ip *h = ((struct ip *)((m)->m_hdr.mh_data));
  u_int16_t fragoff = (__extension__({ u_int16_t __swap16_x = (h->ip_off); __builtin_constant_p(h->ip_off) ? __extension__({ u_int16_t __swap16gen_x = (__swap16_x); (u_int16_t)((__swap16gen_x & 0xff) << 8 | (__swap16gen_x & 0xff00) >> 8); }) : ({ u_int16_t __swap16md_x = (__swap16_x); __asm ("rorw $8, %w1" : "+r" (__swap16md_x)); __swap16md_x; }); }) & 0x1fff) << 3;

  if (fragoff) {
   if (fragoff >= len)
    do { if ((actionp) != 0L) *(actionp) = (PF_PASS); } while (0);
   else {
    do { if ((actionp) != 0L) *(actionp) = (PF_DROP); } while (0);
    do { if ((reasonp) != 0L) *(reasonp) = (2); if (2 < 6) global_pf_status[get_stack_id()].counters[2]++; } while (0);
   }
   return (0L);
  }
  if (m->M_dat.MH.MH_pkthdr.len < off + len ||
      __extension__({ u_int16_t __swap16_x = (h->ip_len); __builtin_constant_p(h->ip_len) ? __extension__({ u_int16_t __swap16gen_x = (__swap16_x); (u_int16_t)((__swap16gen_x & 0xff) << 8 | (__swap16gen_x & 0xff00) >> 8); }) : ({ u_int16_t __swap16md_x = (__swap16_x); __asm ("rorw $8, %w1" : "+r" (__swap16md_x)); __swap16md_x; }); }) < off + len) {
   do { if ((actionp) != 0L) *(actionp) = (PF_DROP); } while (0);
   do { if ((reasonp) != 0L) *(reasonp) = (3); if (3 < 6) global_pf_status[get_stack_id()].counters[3]++; } while (0);
   return (0L);
  }
  break;
 }


 case 24: {
  struct ip6_hdr *h = ((struct ip6_hdr *)((m)->m_hdr.mh_data));

  if (m->M_dat.MH.MH_pkthdr.len < off + len ||
      (__extension__({ u_int16_t __swap16_x = (h->ip6_ctlun.ip6_un1.ip6_un1_plen); __builtin_constant_p(h->ip6_ctlun.ip6_un1.ip6_un1_plen) ? __extension__({ u_int16_t __swap16gen_x = (__swap16_x); (u_int16_t)((__swap16gen_x & 0xff) << 8 | (__swap16gen_x & 0xff00) >> 8); }) : ({ u_int16_t __swap16md_x = (__swap16_x); __asm ("rorw $8, %w1" : "+r" (__swap16md_x)); __swap16md_x; }); }) + sizeof(struct ip6_hdr)) <
      (unsigned)(off + len)) {
   do { if ((actionp) != 0L) *(actionp) = (PF_DROP); } while (0);
   do { if ((reasonp) != 0L) *(reasonp) = (3); if (3 < 6) global_pf_status[get_stack_id()].counters[3]++; } while (0);
   return (0L);
  }
  break;
 }

 }
 m_copydata(m, off, len, p);
 return (p);
}

int
pf_routable(struct pf_addr *addr, sa_family_t af)
{
 struct sockaddr_in *dst;
 struct route ro;
 int ret = 0;

 bzero(&ro, sizeof(ro));
 dst = ((struct sockaddr_in *)(&ro.ro_dst));
 dst->sin_family = af;
 dst->sin_len = sizeof(*dst);
 dst->sin_addr = addr->pfa.v4;
 rtalloc_noclone(&ro, 2);

 if (ro.ro_rt != 0L) {
  ret = 1;
  do { if ((ro.ro_rt)->rt_refcnt <= 1) rtfree(ro.ro_rt); else (ro.ro_rt)->rt_refcnt--; } while (0);
 }

 return (ret);
}


void
pf_route(struct mbuf **m, struct pf_rule *r, int dir, struct ifnet *oifp,
    struct pf_state *s)
{
 struct mbuf *m0, *m1;
 struct route iproute;
 struct route *ro;
 struct sockaddr_in *dst;
 struct ip *ip;
 struct ifnet *ifp = 0L;
 struct m_tag *mtag;
 struct pf_addr naddr;
 struct pf_src_node *sn = 0L;
 int error = 0;

 if (m == 0L || *m == 0L || r == 0L ||
     (dir != PF_IN && dir != PF_OUT) || oifp == 0L)
  panic("pf_route: invalid parameters");

 if (r->rt == PF_DUPTO) {
  m0 = *m;
  mtag = m_tag_find(m0, 12, 0L);
  if (mtag == 0L) {
   mtag = m_tag_get(12, 0, 0x0001);
   if (mtag == 0L)
    goto bad;
   m_tag_prepend(m0, mtag);
  }
  m0 = m_copym2(*m, 0, 1000000000, 0x0001);
  if (m0 == 0L)
   return;
 } else {
  if ((r->rt == PF_REPLYTO) == (r->direction == dir))
   return;
  m0 = *m;
 }

 if (m0->m_hdr.mh_len < sizeof(struct ip))
  panic("pf_route: m0->m_len < sizeof(struct ip)");
 ip = ((struct ip *)((m0)->m_hdr.mh_data));

 ro = &iproute;
 bzero((caddr_t)ro, sizeof(*ro));
 dst = ((struct sockaddr_in *)(&ro->ro_dst));
 dst->sin_family = 2;
 dst->sin_len = sizeof(*dst);
 dst->sin_addr = ip->ip_dst;

 if (r->rt == PF_FASTROUTE) {
  rtalloc(ro);
  if (ro->ro_rt == 0) {
   global_ipstat[get_stack_id()].ips_noroute++;
   goto bad;
  }

  ifp = ro->ro_rt->rt_ifp;
  ro->ro_rt->rt_rmx.rmx_pksent++;

  if (ro->ro_rt->rt_flags & 0x2)
   dst = ((struct sockaddr_in *)(ro->ro_rt->rt_gateway));
 } else {
  if ((((&r->rpool.list)->tqh_first) == 0L))
   panic("pf_route: TAILQ_EMPTY(&r->rpool.list)");
  if (s == 0L) {
   pf_map_addr(2, r, (struct pf_addr *)&ip->ip_src,
       &naddr, 0L, &sn);
   if (!((2 == 2 && !(&naddr)->pfa.addr32[0]) || (!(&naddr)->pfa.addr32[0] && !(&naddr)->pfa.addr32[1] && !(&naddr)->pfa.addr32[2] && !(&naddr)->pfa.addr32[3] )))
    dst->sin_addr.s_addr = naddr.pfa.v4.s_addr;
   ifp = r->rpool.cur->kif ?
       r->rpool.cur->kif->pfik_ifp : 0L;
  } else {
   if (!((2 == 2 && !(&s->rt_addr)->pfa.addr32[0]) || (!(&s->rt_addr)->pfa.addr32[0] && !(&s->rt_addr)->pfa.addr32[1] && !(&s->rt_addr)->pfa.addr32[2] && !(&s->rt_addr)->pfa.addr32[3] )))
    dst->sin_addr.s_addr =
        s->rt_addr.pfa.v4.s_addr;
   ifp = s->rt_kif ? s->rt_kif->pfik_ifp : 0L;
  }
 }

 if (ifp == 0L)
  goto bad;

 mtag = m_tag_find(m0, 12, 0L);
 if (mtag == 0L) {
  struct m_tag *mtag;

  mtag = m_tag_get(12, 0, 0x0001);
  if (mtag == 0L)
   goto bad;
  m_tag_prepend(m0, mtag);
 }

 if (oifp != ifp && mtag == 0L) {
  if (pf_test(PF_OUT, ifp, &m0) != PF_PASS)
   goto bad;
  else if (m0 == 0L)
   goto done;
  if (m0->m_hdr.mh_len < sizeof(struct ip))
   panic("pf_route: m0->m_len < sizeof(struct ip)");
  ip = ((struct ip *)((m0)->m_hdr.mh_data));
 }







 if ((mtag = m_tag_find(m0, 4, 0L))
     != 0L && (ifp->if_capabilities & 0x00000008) == 0) {

  ipsp_skipcrypto_unmark((struct tdb_ident *)(mtag + 1));
  goto bad;
 }



 if (m0->M_dat.MH.MH_pkthdr.csum & 0x0002) {
  if (!(ifp->if_capabilities & 0x00000002) ||
      ifp->if_bridge != 0L) {
   in_delayed_cksum(m0);
   m0->M_dat.MH.MH_pkthdr.csum &= ~0x0002;
  }
 } else if (m0->M_dat.MH.MH_pkthdr.csum & 0x0004) {
  if (!(ifp->if_capabilities & 0x00000004) ||
      ifp->if_bridge != 0L) {
   in_delayed_cksum(m0);
   m0->M_dat.MH.MH_pkthdr.csum &= ~0x0004;
  }
 }

 if (__extension__({ u_int16_t __swap16_x = (ip->ip_len); __builtin_constant_p(ip->ip_len) ? __extension__({ u_int16_t __swap16gen_x = (__swap16_x); (u_int16_t)((__swap16gen_x & 0xff) << 8 | (__swap16gen_x & 0xff00) >> 8); }) : ({ u_int16_t __swap16md_x = (__swap16_x); __asm ("rorw $8, %w1" : "+r" (__swap16md_x)); __swap16md_x; }); }) <= ifp->if_data.ifi_mtu) {
  if ((ifp->if_capabilities & 0x00000001) &&
      ifp->if_bridge == 0L) {
   m0->M_dat.MH.MH_pkthdr.csum |= 0x0001;
   global_ipstat[get_stack_id()].ips_outhwcsum++;
  } else {
   ip->ip_sum = 0;
   ip->ip_sum = in_cksum(m0, ip->ip_hl << 2);
  }

  if (m0->M_dat.MH.MH_pkthdr.csum & 0x0002)
   global_tcpstat[get_stack_id()].tcps_outhwcsum++;
  else if (m0->M_dat.MH.MH_pkthdr.csum & 0x0004)
   global_udpstat[get_stack_id()].udps_outhwcsum++;
  error = (*ifp->if_output)(ifp, m0, ((struct sockaddr *)(dst)), 0L);
  goto done;
 }





 if (ip->ip_off & __extension__({ u_int16_t __swap16_x = (0x4000); __builtin_constant_p(0x4000) ? __extension__({ u_int16_t __swap16gen_x = (__swap16_x); (u_int16_t)((__swap16gen_x & 0xff) << 8 | (__swap16gen_x & 0xff00) >> 8); }) : ({ u_int16_t __swap16md_x = (__swap16_x); __asm ("rorw $8, %w1" : "+r" (__swap16md_x)); __swap16md_x; }); })) {
  global_ipstat[get_stack_id()].ips_cantfrag++;
  if (r->rt != PF_DUPTO) {
   icmp_error(m0, 3, 4, 0,
       ifp);
   goto done;
  } else
   goto bad;
 }

 m1 = m0;
 error = ip_fragment(m0, ifp, ifp->if_data.ifi_mtu);
 if (error) {
  m0 = 0L;
  goto bad;
 }

 for (m0 = m1; m0; m0 = m1) {
  m1 = m0->m_hdr.mh_nextpkt;
  m0->m_hdr.mh_nextpkt = 0;
  if (error == 0)
   error = (*ifp->if_output)(ifp, m0, ((struct sockaddr *)(dst)),
       0L);
  else
   m_freem(m0);
 }

 if (error == 0)
  global_ipstat[get_stack_id()].ips_fragmented++;

done:
 if (r->rt != PF_DUPTO)
  *m = 0L;
 if (ro == &iproute && ro->ro_rt)
  do { if ((ro->ro_rt)->rt_refcnt <= 1) rtfree(ro->ro_rt); else (ro->ro_rt)->rt_refcnt--; } while (0);
 return;

bad:
 m_freem(m0);
 goto done;
}



void
pf_route6(struct mbuf **m, struct pf_rule *r, int dir, struct ifnet *oifp,
    struct pf_state *s)
{
 struct mbuf *m0;
 struct m_tag *mtag;
 struct route_in6 ip6route;
 struct route_in6 *ro;
 struct sockaddr_in6 *dst;
 struct ip6_hdr *ip6;
 struct ifnet *ifp = 0L;
 struct pf_addr naddr;
 struct pf_src_node *sn = 0L;
 int error = 0;

 if (m == 0L || *m == 0L || r == 0L ||
     (dir != PF_IN && dir != PF_OUT) || oifp == 0L)
  panic("pf_route6: invalid parameters");

 if (r->rt == PF_DUPTO) {
  m0 = *m;
  mtag = m_tag_find(m0, 12, 0L);
  if (mtag == 0L) {
   mtag = m_tag_get(12, 0, 0x0001);
   if (mtag == 0L)
    goto bad;
   m_tag_prepend(m0, mtag);
  }
  m0 = m_copym2(*m, 0, 1000000000, 0x0001);
  if (m0 == 0L)
   return;
 } else {
  if ((r->rt == PF_REPLYTO) == (r->direction == dir))
   return;
  m0 = *m;
 }

 if (m0->m_hdr.mh_len < sizeof(struct ip6_hdr))
  panic("pf_route6: m0->m_len < sizeof(struct ip6_hdr)");
 ip6 = ((struct ip6_hdr *)((m0)->m_hdr.mh_data));

 ro = &ip6route;
 bzero((caddr_t)ro, sizeof(*ro));
 dst = (struct sockaddr_in6 *)&ro->ro_dst;
 dst->sin6_family = 24;
 dst->sin6_len = sizeof(*dst);
 dst->sin6_addr = ip6->ip6_dst;


 if (r->rt == PF_FASTROUTE) {
  mtag = m_tag_get(11, 0, 0x0001);
  if (mtag == 0L)
   goto bad;
  m_tag_prepend(m0, mtag);
  ip6_output(m0, 0L, 0L, 0, 0L, 0L);
  return;
 }

 if ((((&r->rpool.list)->tqh_first) == 0L))
  panic("pf_route6: TAILQ_EMPTY(&r->rpool.list)");
 if (s == 0L) {
  pf_map_addr(24, r, (struct pf_addr *)&ip6->ip6_src,
      &naddr, 0L, &sn);
  if (!((24 == 2 && !(&naddr)->pfa.addr32[0]) || (!(&naddr)->pfa.addr32[0] && !(&naddr)->pfa.addr32[1] && !(&naddr)->pfa.addr32[2] && !(&naddr)->pfa.addr32[3] )))
   pf_addrcpy((struct pf_addr *)&dst->sin6_addr, &naddr, 24)
                        ;
  ifp = r->rpool.cur->kif ? r->rpool.cur->kif->pfik_ifp : 0L;
 } else {
  if (!((24 == 2 && !(&s->rt_addr)->pfa.addr32[0]) || (!(&s->rt_addr)->pfa.addr32[0] && !(&s->rt_addr)->pfa.addr32[1] && !(&s->rt_addr)->pfa.addr32[2] && !(&s->rt_addr)->pfa.addr32[3] )))
   pf_addrcpy((struct pf_addr *)&dst->sin6_addr, &s->rt_addr, 24)
                             ;
  ifp = s->rt_kif ? s->rt_kif->pfik_ifp : 0L;
 }

 if (ifp == 0L)
  goto bad;

 if (oifp != ifp) {
  mtag = m_tag_find(m0, 12, 0L);
  if (mtag == 0L) {
   mtag = m_tag_get(12, 0, 0x0001);
   if (mtag == 0L)
    goto bad;
   m_tag_prepend(m0, mtag);
   if (pf_test6(PF_OUT, ifp, &m0) != PF_PASS)
    goto bad;
   else if (m0 == 0L)
    goto done;
  }
 }





 if ((((&dst->sin6_addr)->__u6_addr.__u6_addr8[0] == 0xfe) && (((&dst->sin6_addr)->__u6_addr.__u6_addr8[1] & 0xc0) == 0x80)))
  dst->sin6_addr.__u6_addr.__u6_addr16[1] = __extension__({ u_int16_t __swap16_x = (ifp->if_index); __builtin_constant_p(ifp->if_index) ? __extension__({ u_int16_t __swap16gen_x = (__swap16_x); (u_int16_t)((__swap16gen_x & 0xff) << 8 | (__swap16gen_x & 0xff00) >> 8); }) : ({ u_int16_t __swap16md_x = (__swap16_x); __asm ("rorw $8, %w1" : "+r" (__swap16md_x)); __swap16md_x; }); });
 if ((u_long)m0->M_dat.MH.MH_pkthdr.len <= ifp->if_data.ifi_mtu) {
  error = nd6_output(ifp, ifp, m0, dst, 0L);
 } else {
  do { if (ifp) ((struct in6_ifextra *)((ifp)->if_afdata[24]))->in6_ifstat->ifs6_in_toobig++; } while (0);
  if (r->rt != PF_DUPTO)
   icmp6_error(m0, 2, 0, ifp->if_data.ifi_mtu);
  else
   goto bad;
 }

done:
 if (r->rt != PF_DUPTO)
  *m = 0L;
 return;

bad:
 m_freem(m0);
 goto done;
}
# 5141 "openbsd3/net/pf.c"
int
pf_check_proto_cksum(struct mbuf *m, int off, int len, u_int8_t p,
    sa_family_t af)
{
 u_int16_t flag_ok, flag_bad;
 u_int16_t sum;

 switch (p) {
 case 6:
  flag_ok = 0x0020;
  flag_bad = 0x0040;
  break;
 case 17:
  flag_ok = 0x0080;
  flag_bad = 0x0100;
  break;
 case 1:

 case 58:

  flag_ok = flag_bad = 0;
  break;
 default:
  return (1);
 }
 if (m->M_dat.MH.MH_pkthdr.csum & flag_ok)
  return (0);
 if (m->M_dat.MH.MH_pkthdr.csum & flag_bad)
  return (1);
 if (off < sizeof(struct ip) || len < sizeof(struct udphdr))
  return (1);
 if (m->M_dat.MH.MH_pkthdr.len < off + len)
  return (1);
  switch (af) {
 case 2:
  if (p == 1) {
   if (m->m_hdr.mh_len < off)
    return (1);
   m->m_hdr.mh_data += off;
   m->m_hdr.mh_len -= off;
   sum = in_cksum(m, len);
   m->m_hdr.mh_data -= off;
   m->m_hdr.mh_len += off;
  } else {
   if (m->m_hdr.mh_len < sizeof(struct ip))
    return (1);
   sum = in4_cksum(m, p, off, len);
  }
  break;

 case 24:
  if (m->m_hdr.mh_len < sizeof(struct ip6_hdr))
   return (1);
  sum = in6_cksum(m, p, off, len);
  break;

 default:
  return (1);
 }
 if (sum) {
  m->M_dat.MH.MH_pkthdr.csum |= flag_bad;
  switch (p) {
  case 6:
   global_tcpstat[get_stack_id()].tcps_rcvbadsum++;
   break;
  case 17:
   global_udpstat[get_stack_id()].udps_badsum++;
   break;
  case 1:
   global_icmpstat[get_stack_id()].icps_checksum++;
   break;

  case 58:
   (*_GLOBAL_icmp6stat_25_A[get_stack_id()]).icp6s_checksum++;
   break;

  }
  return (1);
 }
 m->M_dat.MH.MH_pkthdr.csum |= flag_ok;
 return (0);
}

static int
pf_add_mbuf_tag(struct mbuf *m, u_int tag)
{
 struct m_tag *mtag;

 if (m_tag_find(m, tag, 0L) != 0L)
  return (0);
 mtag = m_tag_get(tag, 0, 0x0001);
 if (mtag == 0L)
  return (1);
 m_tag_prepend(m, mtag);
 return (0);
}


int
pf_test(int dir, struct ifnet *ifp, struct mbuf **m0)
{
 struct pfi_kif *kif;
 u_short action, reason = 0, log = 0;
 struct mbuf *m = *m0;
 struct ip *h;
 struct pf_rule *a = 0L, *r = &global_pf_default_rule[get_stack_id()], *tr, *nr;
 struct pf_state *s = 0L;
 struct pf_ruleset *ruleset = 0L;
 struct pf_pdesc pd;
 int off, dirndx, pqid = 0;

 if (!global_pf_status[get_stack_id()].running ||
     (m_tag_find(m, 11, 0L) != 0L))
  return (PF_PASS);

 kif = global_pfi_index2kif[get_stack_id()][ifp->if_index];
 if (kif == 0L)
  return (PF_DROP);


 if ((m->m_hdr.mh_flags & 0x0002) == 0)
  panic("non-M_PKTHDR is passed to pf_test");


 memset(&pd, 0, sizeof(pd));
 if (m->M_dat.MH.MH_pkthdr.len < (int)sizeof(*h)) {
  action = PF_DROP;
  do { if ((&reason) != 0L) *(&reason) = (3); if (3 < 6) global_pf_status[get_stack_id()].counters[3]++; } while (0);
  log = 1;
  goto done;
 }


 if (pf_normalize_ip(m0, dir, kif, &reason) != PF_PASS) {
  action = PF_DROP;
  goto done;
 }
 m = *m0;
 h = ((struct ip *)((m)->m_hdr.mh_data));

 off = h->ip_hl << 2;
 if (off < (int)sizeof(*h)) {
  action = PF_DROP;
  do { if ((&reason) != 0L) *(&reason) = (3); if (3 < 6) global_pf_status[get_stack_id()].counters[3]++; } while (0);
  log = 1;
  goto done;
 }

 pd.src = (struct pf_addr *)&h->ip_src;
 pd.dst = (struct pf_addr *)&h->ip_dst;
 pf_addrcpy(&pd.baddr, dir == PF_OUT ? pd.src : pd.dst, 2);
 pd.ip_sum = &h->ip_sum;
 pd.proto = h->ip_p;
 pd.af = 2;
 pd.tos = h->ip_tos;
 pd.tot_len = __extension__({ u_int16_t __swap16_x = (h->ip_len); __builtin_constant_p(h->ip_len) ? __extension__({ u_int16_t __swap16gen_x = (__swap16_x); (u_int16_t)((__swap16gen_x & 0xff) << 8 | (__swap16gen_x & 0xff00) >> 8); }) : ({ u_int16_t __swap16md_x = (__swap16_x); __asm ("rorw $8, %w1" : "+r" (__swap16md_x)); __swap16md_x; }); });


 if (h->ip_off & __extension__({ u_int16_t __swap16_x = (0x2000 | 0x1fff); __builtin_constant_p(0x2000 | 0x1fff) ? __extension__({ u_int16_t __swap16gen_x = (__swap16_x); (u_int16_t)((__swap16gen_x & 0xff) << 8 | (__swap16gen_x & 0xff00) >> 8); }) : ({ u_int16_t __swap16md_x = (__swap16_x); __asm ("rorw $8, %w1" : "+r" (__swap16md_x)); __swap16md_x; }); })) {
  action = pf_test_fragment(&r, dir, kif, m, h,
      &pd, &a, &ruleset);
  goto done;
 }

 switch (h->ip_p) {

 case 6: {
  struct tcphdr th;

  pd.hdr.tcp = &th;
  if (!pf_pull_hdr(m, off, &th, sizeof(th),
      &action, &reason, 2)) {
   log = action != PF_PASS;
   goto done;
  }
  if (dir == PF_IN && pf_check_proto_cksum(m, off,
      __extension__({ u_int16_t __swap16_x = (h->ip_len); __builtin_constant_p(h->ip_len) ? __extension__({ u_int16_t __swap16gen_x = (__swap16_x); (u_int16_t)((__swap16gen_x & 0xff) << 8 | (__swap16gen_x & 0xff00) >> 8); }) : ({ u_int16_t __swap16md_x = (__swap16_x); __asm ("rorw $8, %w1" : "+r" (__swap16md_x)); __swap16md_x; }); }) - off, 6, 2)) {
   action = PF_DROP;
   goto done;
  }
  pd.p_len = pd.tot_len - off - (th.th_off << 2);
  if ((th.th_flags & 0x10) && pd.p_len == 0)
   pqid = 1;
  action = pf_normalize_tcp(dir, kif, m, 0, off, h, &pd);
  if (action == PF_DROP)
   goto done;
  action = pf_test_state_tcp(&s, dir, kif, m, off, h, &pd,
      &reason);
  if (action == PF_PASS) {

   do { if (!s->sync_flags) pfsync_pack_state(2, (s), 1); s->sync_flags &= ~0x02; } while (0);

   r = s->rule.ptr;
   a = s->anchor.ptr;
   log = s->log;
  } else if (s == 0L)
   action = pf_test_tcp(&r, &s, dir, kif,
       m, off, h, &pd, &a, &ruleset);
  break;
 }

 case 17: {
  struct udphdr uh;

  pd.hdr.udp = &uh;
  if (!pf_pull_hdr(m, off, &uh, sizeof(uh),
      &action, &reason, 2)) {
   log = action != PF_PASS;
   goto done;
  }
  if (dir == PF_IN && uh.uh_sum && pf_check_proto_cksum(m,
      off, __extension__({ u_int16_t __swap16_x = (h->ip_len); __builtin_constant_p(h->ip_len) ? __extension__({ u_int16_t __swap16gen_x = (__swap16_x); (u_int16_t)((__swap16gen_x & 0xff) << 8 | (__swap16gen_x & 0xff00) >> 8); }) : ({ u_int16_t __swap16md_x = (__swap16_x); __asm ("rorw $8, %w1" : "+r" (__swap16md_x)); __swap16md_x; }); }) - off, 17, 2)) {
   action = PF_DROP;
   goto done;
  }
  if (uh.uh_dport == 0 ||
      __extension__({ u_int16_t __swap16_x = (uh.uh_ulen); __builtin_constant_p(uh.uh_ulen) ? __extension__({ u_int16_t __swap16gen_x = (__swap16_x); (u_int16_t)((__swap16gen_x & 0xff) << 8 | (__swap16gen_x & 0xff00) >> 8); }) : ({ u_int16_t __swap16md_x = (__swap16_x); __asm ("rorw $8, %w1" : "+r" (__swap16md_x)); __swap16md_x; }); }) > m->M_dat.MH.MH_pkthdr.len - off ||
      __extension__({ u_int16_t __swap16_x = (uh.uh_ulen); __builtin_constant_p(uh.uh_ulen) ? __extension__({ u_int16_t __swap16gen_x = (__swap16_x); (u_int16_t)((__swap16gen_x & 0xff) << 8 | (__swap16gen_x & 0xff00) >> 8); }) : ({ u_int16_t __swap16md_x = (__swap16_x); __asm ("rorw $8, %w1" : "+r" (__swap16md_x)); __swap16md_x; }); }) < sizeof(struct udphdr)) {
   action = PF_DROP;
   goto done;
  }
  action = pf_test_state_udp(&s, dir, kif, m, off, h, &pd);
  if (action == PF_PASS) {

   do { if (!s->sync_flags) pfsync_pack_state(2, (s), 1); s->sync_flags &= ~0x02; } while (0);

   r = s->rule.ptr;
   a = s->anchor.ptr;
   log = s->log;
  } else if (s == 0L)
   action = pf_test_udp(&r, &s, dir, kif,
       m, off, h, &pd, &a, &ruleset);
  break;
 }

 case 1: {
  struct icmp ih;

  pd.hdr.icmp = &ih;
  if (!pf_pull_hdr(m, off, &ih, 8,
      &action, &reason, 2)) {
   log = action != PF_PASS;
   goto done;
  }
  if (dir == PF_IN && pf_check_proto_cksum(m, off,
      __extension__({ u_int16_t __swap16_x = (h->ip_len); __builtin_constant_p(h->ip_len) ? __extension__({ u_int16_t __swap16gen_x = (__swap16_x); (u_int16_t)((__swap16gen_x & 0xff) << 8 | (__swap16gen_x & 0xff00) >> 8); }) : ({ u_int16_t __swap16md_x = (__swap16_x); __asm ("rorw $8, %w1" : "+r" (__swap16md_x)); __swap16md_x; }); }) - off, 1, 2)) {
   action = PF_DROP;
   goto done;
  }
  action = pf_test_state_icmp(&s, dir, kif, m, off, h, &pd);
  if (action == PF_PASS) {

   do { if (!s->sync_flags) pfsync_pack_state(2, (s), 1); s->sync_flags &= ~0x02; } while (0);

   r = s->rule.ptr;
   a = s->anchor.ptr;
   log = s->log;
  } else if (s == 0L)
   action = pf_test_icmp(&r, &s, dir, kif,
       m, off, h, &pd, &a, &ruleset);
  break;
 }

 default:
  action = pf_test_state_other(&s, dir, kif, &pd);
  if (action == PF_PASS) {

   do { if (!s->sync_flags) pfsync_pack_state(2, (s), 1); s->sync_flags &= ~0x02; } while (0);

   r = s->rule.ptr;
   a = s->anchor.ptr;
   log = s->log;
  } else if (s == 0L)
   action = pf_test_other(&r, &s, dir, kif, m, off, h,
       &pd, &a, &ruleset);
  break;
 }

done:
 if (action == PF_PASS && h->ip_hl > 5 &&
     !((s && s->allow_opts) || r->allow_opts)) {
  action = PF_DROP;
  do { if ((&reason) != 0L) *(&reason) = (3); if (3 < 6) global_pf_status[get_stack_id()].counters[3]++; } while (0);
  log = 1;
  if (global_pf_status[get_stack_id()].debug >= (PF_DEBUG_MISC)) printf ("pf: dropping packet with ip options\n")
                                                ;
 }


 if (action == PF_PASS && r->qid) {
  struct m_tag *mtag;
  struct altq_tag *atag;

  mtag = m_tag_get(14, sizeof(*atag), 0x0001);
  if (mtag != 0L) {
   atag = (struct altq_tag *)(mtag + 1);
   if (pqid || pd.tos == 0x10)
    atag->qid = r->pqid;
   else
    atag->qid = r->qid;

   atag->af = 2;
   atag->hdr = h;
   m_tag_prepend(m, mtag);
  }
 }







 if (dir == PF_IN && action == PF_PASS && (pd.proto == 6 ||
     pd.proto == 17) && s != 0L && s->nat_rule.ptr != 0L &&
     (s->nat_rule.ptr->action == PF_RDR ||
     s->nat_rule.ptr->action == PF_BINAT) &&
     (__extension__({ u_int32_t __swap32_x = (pd.dst->pfa.v4.s_addr); __builtin_constant_p(pd.dst->pfa.v4.s_addr) ? __extension__({ u_int32_t __swap32gen_x = (__swap32_x); (u_int32_t)((__swap32gen_x & 0xff) << 24 | (__swap32gen_x & 0xff00) << 8 | (__swap32gen_x & 0xff0000) >> 8 | (__swap32gen_x & 0xff000000) >> 24); }) : ({ u_int32_t __swap32md_x = (__swap32_x); __asm ("bswap %1" : "+r" (__swap32md_x)); __swap32md_x; }); }) >> 24) == 127 &&
     pf_add_mbuf_tag(m, 17)) {
  action = PF_DROP;
  do { if ((&reason) != 0L) *(&reason) = (5); if (5 < 6) global_pf_status[get_stack_id()].counters[5]++; } while (0);
 }

 if (log)
  pflog_packet(kif,m,2,dir,reason,r,a,ruleset);

 kif->pfik_if.pfif_bytes[0][dir == PF_OUT][action != PF_PASS] += pd.tot_len;
 kif->pfik_if.pfif_packets[0][dir == PF_OUT][action != PF_PASS]++;

 if (action == PF_PASS || r->action == PF_DROP) {
  r->packets++;
  r->bytes += pd.tot_len;
  if (a != 0L) {
   a->packets++;
   a->bytes += pd.tot_len;
  }
  if (s != 0L) {
   dirndx = (dir == s->direction) ? 0 : 1;
   s->packets[dirndx]++;
   s->bytes[dirndx] += pd.tot_len;
   if (s->nat_rule.ptr != 0L) {
    s->nat_rule.ptr->packets++;
    s->nat_rule.ptr->bytes += pd.tot_len;
   }
   if (s->src_node != 0L) {
    s->src_node->packets++;
    s->src_node->bytes += pd.tot_len;
   }
   if (s->nat_src_node != 0L) {
    s->nat_src_node->packets++;
    s->nat_src_node->bytes += pd.tot_len;
   }
  }
  tr = r;
  nr = (s != 0L) ? s->nat_rule.ptr : pd.nat_rule;
  if (nr != 0L) {
   struct pf_addr *x;





   if (r == &global_pf_default_rule[get_stack_id()]) {
    tr = nr;
    x = (s == 0L || s->direction == dir) ?
        &pd.baddr : &pd.naddr;
   } else
    x = (s == 0L || s->direction == dir) ?
        &pd.naddr : &pd.baddr;
   if (x == &pd.baddr || s == 0L) {

    if (dir == PF_OUT)
     pd.src = x;
    else
     pd.dst = x;
   }
  }
  if (tr->src.addr.type == PF_ADDR_TABLE)
   pfr_update_stats(tr->src.addr.p.tbl, (s == 0L ||
       s->direction == dir) ? pd.src : pd.dst, pd.af,
       pd.tot_len, dir == PF_OUT, r->action == PF_PASS,
       tr->src.not);
  if (tr->dst.addr.type == PF_ADDR_TABLE)
   pfr_update_stats(tr->dst.addr.p.tbl, (s == 0L ||
       s->direction == dir) ? pd.dst : pd.src, pd.af,
       pd.tot_len, dir == PF_OUT, r->action == PF_PASS,
       tr->dst.not);
 }


 if (action == PF_SYNPROXY_DROP) {
  m_freem(*m0);
  *m0 = 0L;
  action = PF_PASS;
 } else if (r->rt)

  pf_route(m0, r, dir, ifp, s);

 return (action);
}



int
pf_test6(int dir, struct ifnet *ifp, struct mbuf **m0)
{
 struct pfi_kif *kif;
 u_short action, reason = 0, log = 0;
 struct mbuf *m = *m0;
 struct ip6_hdr *h;
 struct pf_rule *a = 0L, *r = &global_pf_default_rule[get_stack_id()], *tr, *nr;
 struct pf_state *s = 0L;
 struct pf_ruleset *ruleset = 0L;
 struct pf_pdesc pd;
 int off, terminal = 0, dirndx;

 if (!global_pf_status[get_stack_id()].running ||
     (m_tag_find(m, 11, 0L) != 0L))
  return (PF_PASS);

 kif = global_pfi_index2kif[get_stack_id()][ifp->if_index];
 if (kif == 0L)
  return (PF_DROP);


 if ((m->m_hdr.mh_flags & 0x0002) == 0)
  panic("non-M_PKTHDR is passed to pf_test");


 memset(&pd, 0, sizeof(pd));
 if (m->M_dat.MH.MH_pkthdr.len < (int)sizeof(*h)) {
  action = PF_DROP;
  do { if ((&reason) != 0L) *(&reason) = (3); if (3 < 6) global_pf_status[get_stack_id()].counters[3]++; } while (0);
  log = 1;
  goto done;
 }


 if (pf_normalize_ip6(m0, dir, kif, &reason) != PF_PASS) {
  action = PF_DROP;
  goto done;
 }
 m = *m0;
 h = ((struct ip6_hdr *)((m)->m_hdr.mh_data));

 pd.src = (struct pf_addr *)&h->ip6_src;
 pd.dst = (struct pf_addr *)&h->ip6_dst;
 pf_addrcpy(&pd.baddr, dir == PF_OUT ? pd.src : pd.dst, 24);
 pd.ip_sum = 0L;
 pd.af = 24;
 pd.tos = 0;
 pd.tot_len = __extension__({ u_int16_t __swap16_x = (h->ip6_ctlun.ip6_un1.ip6_un1_plen); __builtin_constant_p(h->ip6_ctlun.ip6_un1.ip6_un1_plen) ? __extension__({ u_int16_t __swap16gen_x = (__swap16_x); (u_int16_t)((__swap16gen_x & 0xff) << 8 | (__swap16gen_x & 0xff00) >> 8); }) : ({ u_int16_t __swap16md_x = (__swap16_x); __asm ("rorw $8, %w1" : "+r" (__swap16md_x)); __swap16md_x; }); }) + sizeof(struct ip6_hdr);

 off = ((caddr_t)h - m->m_hdr.mh_data) + sizeof(struct ip6_hdr);
 pd.proto = h->ip6_ctlun.ip6_un1.ip6_un1_nxt;
 do {
  switch (pd.proto) {
  case 44:
   action = pf_test_fragment(&r, dir, kif, m, h,
       &pd, &a, &ruleset);
   if (action == PF_DROP)
    do { if ((&reason) != 0L) *(&reason) = (2); if (2 < 6) global_pf_status[get_stack_id()].counters[2]++; } while (0);
   goto done;
  case 51:
  case 0:
  case 43:
  case 60: {

   struct ip6_ext opt6;

   if (!pf_pull_hdr(m, off, &opt6, sizeof(opt6),
       0L, 0L, pd.af)) {
    if (global_pf_status[get_stack_id()].debug >= (PF_DEBUG_MISC)) printf ("pf: IPv6 short opt\n")
                                 ;
    action = PF_DROP;
    do { if ((&reason) != 0L) *(&reason) = (3); if (3 < 6) global_pf_status[get_stack_id()].counters[3]++; } while (0);
    log = 1;
    goto done;
   }
   if (pd.proto == 51)
    off += (opt6.ip6e_len + 2) * 4;
   else
    off += (opt6.ip6e_len + 1) * 8;
   pd.proto = opt6.ip6e_nxt;

   break;
  }
  default:
   terminal++;
   break;
  }
 } while (!terminal);

 switch (pd.proto) {

 case 6: {
  struct tcphdr th;

  pd.hdr.tcp = &th;
  if (!pf_pull_hdr(m, off, &th, sizeof(th),
      &action, &reason, 24)) {
   log = action != PF_PASS;
   goto done;
  }
  if (dir == PF_IN && pf_check_proto_cksum(m, off,
      __extension__({ u_int16_t __swap16_x = (h->ip6_ctlun.ip6_un1.ip6_un1_plen); __builtin_constant_p(h->ip6_ctlun.ip6_un1.ip6_un1_plen) ? __extension__({ u_int16_t __swap16gen_x = (__swap16_x); (u_int16_t)((__swap16gen_x & 0xff) << 8 | (__swap16gen_x & 0xff00) >> 8); }) : ({ u_int16_t __swap16md_x = (__swap16_x); __asm ("rorw $8, %w1" : "+r" (__swap16md_x)); __swap16md_x; }); }), 6, 24)) {
   action = PF_DROP;
   goto done;
  }
  pd.p_len = pd.tot_len - off - (th.th_off << 2);
  action = pf_normalize_tcp(dir, kif, m, 0, off, h, &pd);
  if (action == PF_DROP)
   goto done;
  action = pf_test_state_tcp(&s, dir, kif, m, off, h, &pd,
      &reason);
  if (action == PF_PASS) {

   do { if (!s->sync_flags) pfsync_pack_state(2, (s), 1); s->sync_flags &= ~0x02; } while (0);

   r = s->rule.ptr;
   a = s->anchor.ptr;
   log = s->log;
  } else if (s == 0L)
   action = pf_test_tcp(&r, &s, dir, kif,
       m, off, h, &pd, &a, &ruleset);
  break;
 }

 case 17: {
  struct udphdr uh;

  pd.hdr.udp = &uh;
  if (!pf_pull_hdr(m, off, &uh, sizeof(uh),
      &action, &reason, 24)) {
   log = action != PF_PASS;
   goto done;
  }
  if (dir == PF_IN && uh.uh_sum && pf_check_proto_cksum(m,
      off, __extension__({ u_int16_t __swap16_x = (h->ip6_ctlun.ip6_un1.ip6_un1_plen); __builtin_constant_p(h->ip6_ctlun.ip6_un1.ip6_un1_plen) ? __extension__({ u_int16_t __swap16gen_x = (__swap16_x); (u_int16_t)((__swap16gen_x & 0xff) << 8 | (__swap16gen_x & 0xff00) >> 8); }) : ({ u_int16_t __swap16md_x = (__swap16_x); __asm ("rorw $8, %w1" : "+r" (__swap16md_x)); __swap16md_x; }); }), 17, 24)) {
   action = PF_DROP;
   goto done;
  }
  if (uh.uh_dport == 0 ||
      __extension__({ u_int16_t __swap16_x = (uh.uh_ulen); __builtin_constant_p(uh.uh_ulen) ? __extension__({ u_int16_t __swap16gen_x = (__swap16_x); (u_int16_t)((__swap16gen_x & 0xff) << 8 | (__swap16gen_x & 0xff00) >> 8); }) : ({ u_int16_t __swap16md_x = (__swap16_x); __asm ("rorw $8, %w1" : "+r" (__swap16md_x)); __swap16md_x; }); }) > m->M_dat.MH.MH_pkthdr.len - off ||
      __extension__({ u_int16_t __swap16_x = (uh.uh_ulen); __builtin_constant_p(uh.uh_ulen) ? __extension__({ u_int16_t __swap16gen_x = (__swap16_x); (u_int16_t)((__swap16gen_x & 0xff) << 8 | (__swap16gen_x & 0xff00) >> 8); }) : ({ u_int16_t __swap16md_x = (__swap16_x); __asm ("rorw $8, %w1" : "+r" (__swap16md_x)); __swap16md_x; }); }) < sizeof(struct udphdr)) {
   action = PF_DROP;
   goto done;
  }
  action = pf_test_state_udp(&s, dir, kif, m, off, h, &pd);
  if (action == PF_PASS) {

   do { if (!s->sync_flags) pfsync_pack_state(2, (s), 1); s->sync_flags &= ~0x02; } while (0);

   r = s->rule.ptr;
   a = s->anchor.ptr;
   log = s->log;
  } else if (s == 0L)
   action = pf_test_udp(&r, &s, dir, kif,
       m, off, h, &pd, &a, &ruleset);
  break;
 }

 case 58: {
  struct icmp6_hdr ih;

  pd.hdr.icmp6 = &ih;
  if (!pf_pull_hdr(m, off, &ih, sizeof(ih),
      &action, &reason, 24)) {
   log = action != PF_PASS;
   goto done;
  }
  if (dir == PF_IN && pf_check_proto_cksum(m, off,
      __extension__({ u_int16_t __swap16_x = (h->ip6_ctlun.ip6_un1.ip6_un1_plen); __builtin_constant_p(h->ip6_ctlun.ip6_un1.ip6_un1_plen) ? __extension__({ u_int16_t __swap16gen_x = (__swap16_x); (u_int16_t)((__swap16gen_x & 0xff) << 8 | (__swap16gen_x & 0xff00) >> 8); }) : ({ u_int16_t __swap16md_x = (__swap16_x); __asm ("rorw $8, %w1" : "+r" (__swap16md_x)); __swap16md_x; }); }), 58, 24)) {
   action = PF_DROP;
   goto done;
  }
  action = pf_test_state_icmp(&s, dir, kif,
      m, off, h, &pd);
  if (action == PF_PASS) {

   do { if (!s->sync_flags) pfsync_pack_state(2, (s), 1); s->sync_flags &= ~0x02; } while (0);

   r = s->rule.ptr;
   a = s->anchor.ptr;
   log = s->log;
  } else if (s == 0L)
   action = pf_test_icmp(&r, &s, dir, kif,
       m, off, h, &pd, &a, &ruleset);
  break;
 }

 default:
  action = pf_test_state_other(&s, dir, kif, &pd);
  if (action == PF_PASS) {
   r = s->rule.ptr;
   a = s->anchor.ptr;
   log = s->log;
  } else if (s == 0L)
   action = pf_test_other(&r, &s, dir, kif, m, off, h,
       &pd, &a, &ruleset);
  break;
 }

done:



 if (action == PF_PASS && r->qid) {
  struct m_tag *mtag;
  struct altq_tag *atag;

  mtag = m_tag_get(14, sizeof(*atag), 0x0001);
  if (mtag != 0L) {
   atag = (struct altq_tag *)(mtag + 1);
   if (pd.tos == 0x10)
    atag->qid = r->pqid;
   else
    atag->qid = r->qid;

   atag->af = 24;
   atag->hdr = h;
   m_tag_prepend(m, mtag);
  }
 }


 if (dir == PF_IN && action == PF_PASS && (pd.proto == 6 ||
     pd.proto == 17) && s != 0L && s->nat_rule.ptr != 0L &&
     (s->nat_rule.ptr->action == PF_RDR ||
     s->nat_rule.ptr->action == PF_BINAT) &&
     ((*(const u_int32_t *)(const void *)(&(&pd.dst->pfa.v6)->__u6_addr.__u6_addr8[0]) == 0) && (*(const u_int32_t *)(const void *)(&(&pd.dst->pfa.v6)->__u6_addr.__u6_addr8[4]) == 0) && (*(const u_int32_t *)(const void *)(&(&pd.dst->pfa.v6)->__u6_addr.__u6_addr8[8]) == 0) && (*(const u_int32_t *)(const void *)(&(&pd.dst->pfa.v6)->__u6_addr.__u6_addr8[12]) == __extension__({ u_int32_t __swap32_x = (1); __builtin_constant_p(1) ? __extension__({ u_int32_t __swap32gen_x = (__swap32_x); (u_int32_t)((__swap32gen_x & 0xff) << 24 | (__swap32gen_x & 0xff00) << 8 | (__swap32gen_x & 0xff0000) >> 8 | (__swap32gen_x & 0xff000000) >> 24); }) : ({ u_int32_t __swap32md_x = (__swap32_x); __asm ("bswap %1" : "+r" (__swap32md_x)); __swap32md_x; }); }))) &&
     pf_add_mbuf_tag(m, 17)) {
  action = PF_DROP;
  do { if ((&reason) != 0L) *(&reason) = (5); if (5 < 6) global_pf_status[get_stack_id()].counters[5]++; } while (0);
 }

 if (log)
  pflog_packet(kif,m,24,dir,reason,r,a,ruleset);

 kif->pfik_if.pfif_bytes[1][dir == PF_OUT][action != PF_PASS] += pd.tot_len;
 kif->pfik_if.pfif_packets[1][dir == PF_OUT][action != PF_PASS]++;

 if (action == PF_PASS || r->action == PF_DROP) {
  r->packets++;
  r->bytes += pd.tot_len;
  if (a != 0L) {
   a->packets++;
   a->bytes += pd.tot_len;
  }
  if (s != 0L) {
   dirndx = (dir == s->direction) ? 0 : 1;
   s->packets[dirndx]++;
   s->bytes[dirndx] += pd.tot_len;
   if (s->nat_rule.ptr != 0L) {
    s->nat_rule.ptr->packets++;
    s->nat_rule.ptr->bytes += pd.tot_len;
   }
   if (s->src_node != 0L) {
    s->src_node->packets++;
    s->src_node->bytes += pd.tot_len;
   }
   if (s->nat_src_node != 0L) {
    s->nat_src_node->packets++;
    s->nat_src_node->bytes += pd.tot_len;
   }
  }
  tr = r;
  nr = (s != 0L) ? s->nat_rule.ptr : pd.nat_rule;
  if (nr != 0L) {
   struct pf_addr *x;





   if (r == &global_pf_default_rule[get_stack_id()]) {
    tr = nr;
    x = (s == 0L || s->direction == dir) ?
        &pd.baddr : &pd.naddr;
   } else {
    x = (s == 0L || s->direction == dir) ?
        &pd.naddr : &pd.baddr;
   }
   if (x == &pd.baddr || s == 0L) {
    if (dir == PF_OUT)
     pd.src = x;
    else
     pd.dst = x;
   }
  }
  if (tr->src.addr.type == PF_ADDR_TABLE)
   pfr_update_stats(tr->src.addr.p.tbl, (s == 0L ||
       s->direction == dir) ? pd.src : pd.dst, pd.af,
       pd.tot_len, dir == PF_OUT, r->action == PF_PASS,
       tr->src.not);
  if (tr->dst.addr.type == PF_ADDR_TABLE)
   pfr_update_stats(tr->dst.addr.p.tbl, (s == 0L ||
       s->direction == dir) ? pd.dst : pd.src, pd.af,
       pd.tot_len, dir == PF_OUT, r->action == PF_PASS,
       tr->dst.not);
 }


 if (action == PF_SYNPROXY_DROP) {
  m_freem(*m0);
  *m0 = 0L;
  action = PF_PASS;
 } else if (r->rt)

  pf_route6(m0, r, dir, ifp, s);

 return (action);
}

