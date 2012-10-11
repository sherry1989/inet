# 1 "openbsd3/net/bpf.c"
# 1 "/home/cmcc/omnet_workspace/inet/3rdparty/nsc-0.5.2//"
# 1 "<built-in>"
# 1 "<command-line>"
# 1 "openbsd3/net/bpf.c"
# 40 "openbsd3/net/bpf.c"
# 1 "openbsd3/openbsd/usr/src/sys/arch/i386/compile/SAMSKERNEL/bpfilter.h" 1
# 41 "openbsd3/net/bpf.c" 2

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
# 43 "openbsd3/net/bpf.c" 2
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
typedef  struct kmemstats   _GLOBAL_27_T; extern  _GLOBAL_27_T  _GLOBAL_0_kmemstats_I [ ] ; extern  _GLOBAL_27_T  _GLOBAL_1_kmemstats_I [ ] ; extern  _GLOBAL_27_T  _GLOBAL_2_kmemstats_I [ ] ; extern  _GLOBAL_27_T  _GLOBAL_3_kmemstats_I [ ] ; extern  _GLOBAL_27_T  _GLOBAL_4_kmemstats_I [ ] ; extern  _GLOBAL_27_T  _GLOBAL_5_kmemstats_I [ ] ; extern  _GLOBAL_27_T  _GLOBAL_6_kmemstats_I [ ] ; extern  _GLOBAL_27_T  _GLOBAL_7_kmemstats_I [ ] ; extern  _GLOBAL_27_T  _GLOBAL_8_kmemstats_I [ ] ; extern  _GLOBAL_27_T  _GLOBAL_9_kmemstats_I [ ] ; extern  _GLOBAL_27_T  _GLOBAL_10_kmemstats_I [ ] ; extern  _GLOBAL_27_T  _GLOBAL_11_kmemstats_I [ ] ; extern  _GLOBAL_27_T  _GLOBAL_12_kmemstats_I [ ] ; extern  _GLOBAL_27_T  _GLOBAL_13_kmemstats_I [ ] ; extern  _GLOBAL_27_T  _GLOBAL_14_kmemstats_I [ ] ; extern  _GLOBAL_27_T  _GLOBAL_15_kmemstats_I [ ] ; extern  _GLOBAL_27_T  _GLOBAL_16_kmemstats_I [ ] ; extern  _GLOBAL_27_T  _GLOBAL_17_kmemstats_I [ ] ; extern  _GLOBAL_27_T  _GLOBAL_18_kmemstats_I [ ] ; extern  _GLOBAL_27_T  _GLOBAL_19_kmemstats_I [ ] ; extern  _GLOBAL_27_T  _GLOBAL_20_kmemstats_I [ ] ; extern  _GLOBAL_27_T  _GLOBAL_21_kmemstats_I [ ] ; extern  _GLOBAL_27_T  _GLOBAL_22_kmemstats_I [ ] ; extern  _GLOBAL_27_T  _GLOBAL_23_kmemstats_I [ ] ; extern  _GLOBAL_27_T  _GLOBAL_24_kmemstats_I [ ] ; extern  _GLOBAL_27_T  _GLOBAL_25_kmemstats_I [ ] ; extern  _GLOBAL_27_T  _GLOBAL_26_kmemstats_I [ ] ; extern  _GLOBAL_27_T  _GLOBAL_27_kmemstats_I [ ] ; extern  _GLOBAL_27_T  _GLOBAL_28_kmemstats_I [ ] ; extern  _GLOBAL_27_T  _GLOBAL_29_kmemstats_I [ ] ; extern  _GLOBAL_27_T  _GLOBAL_30_kmemstats_I [ ] ; extern  _GLOBAL_27_T  _GLOBAL_31_kmemstats_I [ ] ; extern  _GLOBAL_27_T  _GLOBAL_32_kmemstats_I [ ] ; extern  _GLOBAL_27_T  _GLOBAL_33_kmemstats_I [ ] ; extern  _GLOBAL_27_T  _GLOBAL_34_kmemstats_I [ ] ; extern  _GLOBAL_27_T  _GLOBAL_35_kmemstats_I [ ] ; extern  _GLOBAL_27_T  _GLOBAL_36_kmemstats_I [ ] ; extern  _GLOBAL_27_T  _GLOBAL_37_kmemstats_I [ ] ; extern  _GLOBAL_27_T  _GLOBAL_38_kmemstats_I [ ] ; extern  _GLOBAL_27_T  _GLOBAL_39_kmemstats_I [ ] ; extern  _GLOBAL_27_T  _GLOBAL_40_kmemstats_I [ ] ; extern  _GLOBAL_27_T  _GLOBAL_41_kmemstats_I [ ] ; extern  _GLOBAL_27_T  _GLOBAL_42_kmemstats_I [ ] ; extern  _GLOBAL_27_T  _GLOBAL_43_kmemstats_I [ ] ; extern  _GLOBAL_27_T  _GLOBAL_44_kmemstats_I [ ] ; extern  _GLOBAL_27_T  _GLOBAL_45_kmemstats_I [ ] ; extern  _GLOBAL_27_T  _GLOBAL_46_kmemstats_I [ ] ; extern  _GLOBAL_27_T  _GLOBAL_47_kmemstats_I [ ] ; extern  _GLOBAL_27_T  _GLOBAL_48_kmemstats_I [ ] ; extern  _GLOBAL_27_T  _GLOBAL_49_kmemstats_I [ ] ; static __attribute__ ((unused)) __typeof__(_GLOBAL_0_kmemstats_I) *_GLOBAL_kmemstats_7_A[NUM_STACKS];   
typedef  struct kmemusage   _GLOBAL_28_T; extern  _GLOBAL_28_T  * global_kmemusage[NUM_STACKS];    
typedef  char  _GLOBAL_29_T; extern  _GLOBAL_29_T  * global_kmembase[NUM_STACKS];   
typedef  struct kmembuckets   _GLOBAL_30_T; extern  _GLOBAL_30_T  _GLOBAL_0_bucket_I [ ] ; extern  _GLOBAL_30_T  _GLOBAL_1_bucket_I [ ] ; extern  _GLOBAL_30_T  _GLOBAL_2_bucket_I [ ] ; extern  _GLOBAL_30_T  _GLOBAL_3_bucket_I [ ] ; extern  _GLOBAL_30_T  _GLOBAL_4_bucket_I [ ] ; extern  _GLOBAL_30_T  _GLOBAL_5_bucket_I [ ] ; extern  _GLOBAL_30_T  _GLOBAL_6_bucket_I [ ] ; extern  _GLOBAL_30_T  _GLOBAL_7_bucket_I [ ] ; extern  _GLOBAL_30_T  _GLOBAL_8_bucket_I [ ] ; extern  _GLOBAL_30_T  _GLOBAL_9_bucket_I [ ] ; extern  _GLOBAL_30_T  _GLOBAL_10_bucket_I [ ] ; extern  _GLOBAL_30_T  _GLOBAL_11_bucket_I [ ] ; extern  _GLOBAL_30_T  _GLOBAL_12_bucket_I [ ] ; extern  _GLOBAL_30_T  _GLOBAL_13_bucket_I [ ] ; extern  _GLOBAL_30_T  _GLOBAL_14_bucket_I [ ] ; extern  _GLOBAL_30_T  _GLOBAL_15_bucket_I [ ] ; extern  _GLOBAL_30_T  _GLOBAL_16_bucket_I [ ] ; extern  _GLOBAL_30_T  _GLOBAL_17_bucket_I [ ] ; extern  _GLOBAL_30_T  _GLOBAL_18_bucket_I [ ] ; extern  _GLOBAL_30_T  _GLOBAL_19_bucket_I [ ] ; extern  _GLOBAL_30_T  _GLOBAL_20_bucket_I [ ] ; extern  _GLOBAL_30_T  _GLOBAL_21_bucket_I [ ] ; extern  _GLOBAL_30_T  _GLOBAL_22_bucket_I [ ] ; extern  _GLOBAL_30_T  _GLOBAL_23_bucket_I [ ] ; extern  _GLOBAL_30_T  _GLOBAL_24_bucket_I [ ] ; extern  _GLOBAL_30_T  _GLOBAL_25_bucket_I [ ] ; extern  _GLOBAL_30_T  _GLOBAL_26_bucket_I [ ] ; extern  _GLOBAL_30_T  _GLOBAL_27_bucket_I [ ] ; extern  _GLOBAL_30_T  _GLOBAL_28_bucket_I [ ] ; extern  _GLOBAL_30_T  _GLOBAL_29_bucket_I [ ] ; extern  _GLOBAL_30_T  _GLOBAL_30_bucket_I [ ] ; extern  _GLOBAL_30_T  _GLOBAL_31_bucket_I [ ] ; extern  _GLOBAL_30_T  _GLOBAL_32_bucket_I [ ] ; extern  _GLOBAL_30_T  _GLOBAL_33_bucket_I [ ] ; extern  _GLOBAL_30_T  _GLOBAL_34_bucket_I [ ] ; extern  _GLOBAL_30_T  _GLOBAL_35_bucket_I [ ] ; extern  _GLOBAL_30_T  _GLOBAL_36_bucket_I [ ] ; extern  _GLOBAL_30_T  _GLOBAL_37_bucket_I [ ] ; extern  _GLOBAL_30_T  _GLOBAL_38_bucket_I [ ] ; extern  _GLOBAL_30_T  _GLOBAL_39_bucket_I [ ] ; extern  _GLOBAL_30_T  _GLOBAL_40_bucket_I [ ] ; extern  _GLOBAL_30_T  _GLOBAL_41_bucket_I [ ] ; extern  _GLOBAL_30_T  _GLOBAL_42_bucket_I [ ] ; extern  _GLOBAL_30_T  _GLOBAL_43_bucket_I [ ] ; extern  _GLOBAL_30_T  _GLOBAL_44_bucket_I [ ] ; extern  _GLOBAL_30_T  _GLOBAL_45_bucket_I [ ] ; extern  _GLOBAL_30_T  _GLOBAL_46_bucket_I [ ] ; extern  _GLOBAL_30_T  _GLOBAL_47_bucket_I [ ] ; extern  _GLOBAL_30_T  _GLOBAL_48_bucket_I [ ] ; extern  _GLOBAL_30_T  _GLOBAL_49_bucket_I [ ] ; static __attribute__ ((unused)) __typeof__(_GLOBAL_0_bucket_I) *_GLOBAL_bucket_8_A[NUM_STACKS];   

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
# 1 "openbsd3/sys/queue.h" 1
# 56 "openbsd3/sys/pool.h" 2

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






typedef  struct pool_allocator   _GLOBAL_31_T; extern  _GLOBAL_31_T  global_pool_allocator_nointr[NUM_STACKS];    

typedef  struct pool_allocator   _GLOBAL_32_T; extern  _GLOBAL_32_T  global_pool_allocator_kmem[NUM_STACKS];    

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


typedef  struct mbstat   _GLOBAL_33_T; extern  _GLOBAL_33_T  global_mbstat[NUM_STACKS];    
typedef  int  _GLOBAL_34_T; extern  _GLOBAL_34_T  global_nmbclust[NUM_STACKS];   
typedef  int  _GLOBAL_35_T; extern  _GLOBAL_35_T  global_mblowat[NUM_STACKS];   
typedef  int  _GLOBAL_36_T; extern  _GLOBAL_36_T  global_mcllowat[NUM_STACKS];   
typedef  int  _GLOBAL_37_T; extern  _GLOBAL_37_T  global_max_linkhdr[NUM_STACKS];   
typedef  int  _GLOBAL_38_T; extern  _GLOBAL_38_T  global_max_protohdr[NUM_STACKS];   
typedef  int  _GLOBAL_39_T; extern  _GLOBAL_39_T  global_max_hdr[NUM_STACKS];   
typedef  int  _GLOBAL_40_T; extern  _GLOBAL_40_T  global_max_datalen[NUM_STACKS];   
typedef  int  _GLOBAL_41_T; extern  _GLOBAL_41_T  _GLOBAL_0_mbtypes_I [ ] ; extern  _GLOBAL_41_T  _GLOBAL_1_mbtypes_I [ ] ; extern  _GLOBAL_41_T  _GLOBAL_2_mbtypes_I [ ] ; extern  _GLOBAL_41_T  _GLOBAL_3_mbtypes_I [ ] ; extern  _GLOBAL_41_T  _GLOBAL_4_mbtypes_I [ ] ; extern  _GLOBAL_41_T  _GLOBAL_5_mbtypes_I [ ] ; extern  _GLOBAL_41_T  _GLOBAL_6_mbtypes_I [ ] ; extern  _GLOBAL_41_T  _GLOBAL_7_mbtypes_I [ ] ; extern  _GLOBAL_41_T  _GLOBAL_8_mbtypes_I [ ] ; extern  _GLOBAL_41_T  _GLOBAL_9_mbtypes_I [ ] ; extern  _GLOBAL_41_T  _GLOBAL_10_mbtypes_I [ ] ; extern  _GLOBAL_41_T  _GLOBAL_11_mbtypes_I [ ] ; extern  _GLOBAL_41_T  _GLOBAL_12_mbtypes_I [ ] ; extern  _GLOBAL_41_T  _GLOBAL_13_mbtypes_I [ ] ; extern  _GLOBAL_41_T  _GLOBAL_14_mbtypes_I [ ] ; extern  _GLOBAL_41_T  _GLOBAL_15_mbtypes_I [ ] ; extern  _GLOBAL_41_T  _GLOBAL_16_mbtypes_I [ ] ; extern  _GLOBAL_41_T  _GLOBAL_17_mbtypes_I [ ] ; extern  _GLOBAL_41_T  _GLOBAL_18_mbtypes_I [ ] ; extern  _GLOBAL_41_T  _GLOBAL_19_mbtypes_I [ ] ; extern  _GLOBAL_41_T  _GLOBAL_20_mbtypes_I [ ] ; extern  _GLOBAL_41_T  _GLOBAL_21_mbtypes_I [ ] ; extern  _GLOBAL_41_T  _GLOBAL_22_mbtypes_I [ ] ; extern  _GLOBAL_41_T  _GLOBAL_23_mbtypes_I [ ] ; extern  _GLOBAL_41_T  _GLOBAL_24_mbtypes_I [ ] ; extern  _GLOBAL_41_T  _GLOBAL_25_mbtypes_I [ ] ; extern  _GLOBAL_41_T  _GLOBAL_26_mbtypes_I [ ] ; extern  _GLOBAL_41_T  _GLOBAL_27_mbtypes_I [ ] ; extern  _GLOBAL_41_T  _GLOBAL_28_mbtypes_I [ ] ; extern  _GLOBAL_41_T  _GLOBAL_29_mbtypes_I [ ] ; extern  _GLOBAL_41_T  _GLOBAL_30_mbtypes_I [ ] ; extern  _GLOBAL_41_T  _GLOBAL_31_mbtypes_I [ ] ; extern  _GLOBAL_41_T  _GLOBAL_32_mbtypes_I [ ] ; extern  _GLOBAL_41_T  _GLOBAL_33_mbtypes_I [ ] ; extern  _GLOBAL_41_T  _GLOBAL_34_mbtypes_I [ ] ; extern  _GLOBAL_41_T  _GLOBAL_35_mbtypes_I [ ] ; extern  _GLOBAL_41_T  _GLOBAL_36_mbtypes_I [ ] ; extern  _GLOBAL_41_T  _GLOBAL_37_mbtypes_I [ ] ; extern  _GLOBAL_41_T  _GLOBAL_38_mbtypes_I [ ] ; extern  _GLOBAL_41_T  _GLOBAL_39_mbtypes_I [ ] ; extern  _GLOBAL_41_T  _GLOBAL_40_mbtypes_I [ ] ; extern  _GLOBAL_41_T  _GLOBAL_41_mbtypes_I [ ] ; extern  _GLOBAL_41_T  _GLOBAL_42_mbtypes_I [ ] ; extern  _GLOBAL_41_T  _GLOBAL_43_mbtypes_I [ ] ; extern  _GLOBAL_41_T  _GLOBAL_44_mbtypes_I [ ] ; extern  _GLOBAL_41_T  _GLOBAL_45_mbtypes_I [ ] ; extern  _GLOBAL_41_T  _GLOBAL_46_mbtypes_I [ ] ; extern  _GLOBAL_41_T  _GLOBAL_47_mbtypes_I [ ] ; extern  _GLOBAL_41_T  _GLOBAL_48_mbtypes_I [ ] ; extern  _GLOBAL_41_T  _GLOBAL_49_mbtypes_I [ ] ; static __attribute__ ((unused)) __typeof__(_GLOBAL_0_mbtypes_I) *_GLOBAL_mbtypes_9_A[NUM_STACKS];  
typedef  struct pool   _GLOBAL_42_T; extern  _GLOBAL_42_T  global_mbpool[NUM_STACKS];    
typedef  struct pool   _GLOBAL_43_T; extern  _GLOBAL_43_T  global_mclpool[NUM_STACKS];    

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
# 44 "openbsd3/net/bpf.c" 2
# 1 "openbsd3/sys/proc.h" 1
# 43 "openbsd3/sys/proc.h"
# 1 "openbsd3/openbsd/usr/src/sys/arch/i386/compile/SAMSKERNEL/machine/proc.h" 1
# 38 "openbsd3/openbsd/usr/src/sys/arch/i386/compile/SAMSKERNEL/machine/proc.h"
struct mdproc {
 struct trapframe *md_regs;
 int md_flags;
};
# 44 "openbsd3/sys/proc.h" 2
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
# 45 "openbsd3/sys/proc.h" 2

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
# 47 "openbsd3/sys/proc.h" 2





struct session {
 int s_count;
 struct proc *s_leader;
 struct vnode *s_ttyvp;
 struct tty *s_ttyp;
 char s_login[32];
};




struct pgrp {
 struct { struct pgrp *le_next; struct pgrp **le_prev; } pg_hash;
 struct { struct proc *lh_first; } pg_members;
 struct session *pg_session;
 pid_t pg_id;
 int pg_jobc;
};




struct exec_package;
struct ps_strings;
struct uvm_object;
union sigval;

struct emul {
 char e_name[8];
 int *e_errno;

 void (*e_sendsig)(sig_t, int, int, u_long, int, union sigval);
 int e_nosys;
 int e_nsysent;
 struct sysent *e_sysent;
 char **e_syscallnames;
 int e_arglen;

 void *(*e_copyargs)(struct exec_package *, struct ps_strings *,
        void *, void *);

 void (*e_setregs)(struct proc *, struct exec_package *,
      u_long, register_t *);
 int (*e_fixup)(struct proc *, struct exec_package *);
 char *e_sigcode;
 char *e_esigcode;
 int e_flags;
 struct uvm_object *e_sigobject;

 void (*e_proc_exec)(struct proc *, struct exec_package *);
 void (*e_proc_fork)(struct proc *p, struct proc *parent);
 void (*e_proc_exit)(struct proc *);
};




typedef  struct emul   _GLOBAL_44_T; extern  _GLOBAL_44_T  * _GLOBAL_0_emulsw_I [ ]  ; extern  _GLOBAL_44_T  * _GLOBAL_1_emulsw_I [ ]  ; extern  _GLOBAL_44_T  * _GLOBAL_2_emulsw_I [ ]  ; extern  _GLOBAL_44_T  * _GLOBAL_3_emulsw_I [ ]  ; extern  _GLOBAL_44_T  * _GLOBAL_4_emulsw_I [ ]  ; extern  _GLOBAL_44_T  * _GLOBAL_5_emulsw_I [ ]  ; extern  _GLOBAL_44_T  * _GLOBAL_6_emulsw_I [ ]  ; extern  _GLOBAL_44_T  * _GLOBAL_7_emulsw_I [ ]  ; extern  _GLOBAL_44_T  * _GLOBAL_8_emulsw_I [ ]  ; extern  _GLOBAL_44_T  * _GLOBAL_9_emulsw_I [ ]  ; extern  _GLOBAL_44_T  * _GLOBAL_10_emulsw_I [ ]  ; extern  _GLOBAL_44_T  * _GLOBAL_11_emulsw_I [ ]  ; extern  _GLOBAL_44_T  * _GLOBAL_12_emulsw_I [ ]  ; extern  _GLOBAL_44_T  * _GLOBAL_13_emulsw_I [ ]  ; extern  _GLOBAL_44_T  * _GLOBAL_14_emulsw_I [ ]  ; extern  _GLOBAL_44_T  * _GLOBAL_15_emulsw_I [ ]  ; extern  _GLOBAL_44_T  * _GLOBAL_16_emulsw_I [ ]  ; extern  _GLOBAL_44_T  * _GLOBAL_17_emulsw_I [ ]  ; extern  _GLOBAL_44_T  * _GLOBAL_18_emulsw_I [ ]  ; extern  _GLOBAL_44_T  * _GLOBAL_19_emulsw_I [ ]  ; extern  _GLOBAL_44_T  * _GLOBAL_20_emulsw_I [ ]  ; extern  _GLOBAL_44_T  * _GLOBAL_21_emulsw_I [ ]  ; extern  _GLOBAL_44_T  * _GLOBAL_22_emulsw_I [ ]  ; extern  _GLOBAL_44_T  * _GLOBAL_23_emulsw_I [ ]  ; extern  _GLOBAL_44_T  * _GLOBAL_24_emulsw_I [ ]  ; extern  _GLOBAL_44_T  * _GLOBAL_25_emulsw_I [ ]  ; extern  _GLOBAL_44_T  * _GLOBAL_26_emulsw_I [ ]  ; extern  _GLOBAL_44_T  * _GLOBAL_27_emulsw_I [ ]  ; extern  _GLOBAL_44_T  * _GLOBAL_28_emulsw_I [ ]  ; extern  _GLOBAL_44_T  * _GLOBAL_29_emulsw_I [ ]  ; extern  _GLOBAL_44_T  * _GLOBAL_30_emulsw_I [ ]  ; extern  _GLOBAL_44_T  * _GLOBAL_31_emulsw_I [ ]  ; extern  _GLOBAL_44_T  * _GLOBAL_32_emulsw_I [ ]  ; extern  _GLOBAL_44_T  * _GLOBAL_33_emulsw_I [ ]  ; extern  _GLOBAL_44_T  * _GLOBAL_34_emulsw_I [ ]  ; extern  _GLOBAL_44_T  * _GLOBAL_35_emulsw_I [ ]  ; extern  _GLOBAL_44_T  * _GLOBAL_36_emulsw_I [ ]  ; extern  _GLOBAL_44_T  * _GLOBAL_37_emulsw_I [ ]  ; extern  _GLOBAL_44_T  * _GLOBAL_38_emulsw_I [ ]  ; extern  _GLOBAL_44_T  * _GLOBAL_39_emulsw_I [ ]  ; extern  _GLOBAL_44_T  * _GLOBAL_40_emulsw_I [ ]  ; extern  _GLOBAL_44_T  * _GLOBAL_41_emulsw_I [ ]  ; extern  _GLOBAL_44_T  * _GLOBAL_42_emulsw_I [ ]  ; extern  _GLOBAL_44_T  * _GLOBAL_43_emulsw_I [ ]  ; extern  _GLOBAL_44_T  * _GLOBAL_44_emulsw_I [ ]  ; extern  _GLOBAL_44_T  * _GLOBAL_45_emulsw_I [ ]  ; extern  _GLOBAL_44_T  * _GLOBAL_46_emulsw_I [ ]  ; extern  _GLOBAL_44_T  * _GLOBAL_47_emulsw_I [ ]  ; extern  _GLOBAL_44_T  * _GLOBAL_48_emulsw_I [ ]  ; extern  _GLOBAL_44_T  * _GLOBAL_49_emulsw_I [ ]  ; static __attribute__ ((unused)) __typeof__(_GLOBAL_0_emulsw_I) *_GLOBAL_emulsw_10_A[NUM_STACKS];   
typedef  int  _GLOBAL_45_T; extern  _GLOBAL_45_T  global_nemuls[NUM_STACKS];   
# 123 "openbsd3/sys/proc.h"
struct proc {
 struct proc *p_forw;
 struct proc *p_back;
 struct { struct proc *le_next; struct proc **le_prev; } p_list;


 struct pcred *p_cred;
 struct filedesc *p_fd;
 struct pstats *p_stats;
 struct plimit *p_limit;
 struct vmspace *p_vmspace;
 struct sigacts *p_sigacts;




 int p_exitsig;
 int p_flag;
 u_char p_os;
 char p_stat;
 char p_pad1[2];

 pid_t p_pid;
 struct { struct proc *le_next; struct proc **le_prev; } p_hash;
 struct { struct proc *le_next; struct proc **le_prev; } p_pglist;
 struct proc *p_pptr;
 struct { struct proc *le_next; struct proc **le_prev; } p_sibling;
 struct { struct proc *lh_first; } p_children;




 pid_t p_oppid;
 int p_dupfd;


 u_int p_estcpu;
 int p_cpticks;
 fixpt_t p_pctcpu;
 void *p_wchan;
 struct timeout p_sleep_to;
 const char *p_wmesg;
 u_int p_swtime;
 u_int p_slptime;
 int p_schedflags;

 struct itimerval p_realtimer;
 struct timeout p_realit_to;
 struct timeval p_rtime;
 u_quad_t p_uticks;
 u_quad_t p_sticks;
 u_quad_t p_iticks;

 int p_traceflag;
 struct vnode *p_tracep;

 void *p_systrace;

 int p_siglist;

 struct vnode *p_textvp;

 int p_holdcnt;
 struct emul *p_emul;
 void *p_emuldata;

 struct klist p_klist;
# 199 "openbsd3/sys/proc.h"
 sigset_t p_sigmask;
 sigset_t p_sigignore;
 sigset_t p_sigcatch;

 u_char p_priority;
 u_char p_usrpri;
 char p_nice;
 char p_comm[16 +1];

 struct pgrp *p_pgrp;
 vaddr_t p_sigcode;




 struct user *p_addr;
 struct mdproc p_md;

 u_short p_xstat;
 u_short p_acflag;
 struct rusage *p_ru;
};
# 294 "openbsd3/sys/proc.h"
struct pcred {
 struct ucred *pc_ucred;
 uid_t p_ruid;
 uid_t p_svuid;
 gid_t p_rgid;
 gid_t p_svgid;
 int p_refcnt;
};
# 340 "openbsd3/sys/proc.h"
typedef  struct pidhashhead { struct proc   * lh_first  ;  }   _GLOBAL_46_T; extern  _GLOBAL_46_T  * global_pidhashtbl[NUM_STACKS];         
typedef  u_long  _GLOBAL_47_T; extern  _GLOBAL_47_T  global_pidhash[NUM_STACKS];   


typedef  struct pgrphashhead { struct pgrp   * lh_first  ;  }   _GLOBAL_48_T; extern  _GLOBAL_48_T  * global_pgrphashtbl[NUM_STACKS];         
typedef  u_long  _GLOBAL_49_T; extern  _GLOBAL_49_T  global_pgrphash[NUM_STACKS];   


typedef  struct proc   _GLOBAL_50_T; extern  _GLOBAL_50_T  * global_curproc[NUM_STACKS];    

typedef  struct proc   _GLOBAL_51_T; extern  _GLOBAL_51_T  global_proc0[NUM_STACKS];    
typedef  int  _GLOBAL_52_T; extern  _GLOBAL_52_T  global_nprocs[NUM_STACKS]; extern  _GLOBAL_52_T  global_maxproc[NUM_STACKS];    
typedef  int  _GLOBAL_53_T; extern  _GLOBAL_53_T  global_randompid[NUM_STACKS];   

struct proclist { struct proc *lh_first; };
typedef  struct proclist   _GLOBAL_54_T; extern  _GLOBAL_54_T  global_allproc[NUM_STACKS];    
typedef  struct proclist   _GLOBAL_55_T; extern  _GLOBAL_55_T  global_zombproc[NUM_STACKS];    

typedef  struct proclist   _GLOBAL_56_T; extern  _GLOBAL_56_T  global_deadproc[NUM_STACKS];    
typedef  struct simplelock   _GLOBAL_57_T; extern  _GLOBAL_57_T  global_deadproc_slock[NUM_STACKS];    

typedef  struct proc   _GLOBAL_58_T; extern  _GLOBAL_58_T  * global_initproc[NUM_STACKS];    
typedef  struct proc   _GLOBAL_59_T; extern  _GLOBAL_59_T  * global_syncerproc[NUM_STACKS];    

typedef  struct pool   _GLOBAL_60_T; extern  _GLOBAL_60_T  global_proc_pool[NUM_STACKS];    
typedef  struct pool   _GLOBAL_61_T; extern  _GLOBAL_61_T  global_rusage_pool[NUM_STACKS];    
typedef  struct pool   _GLOBAL_62_T; extern  _GLOBAL_62_T  global_ucred_pool[NUM_STACKS];    
typedef  struct pool   _GLOBAL_63_T; extern  _GLOBAL_63_T  global_session_pool[NUM_STACKS];    
typedef  struct pool   _GLOBAL_64_T; extern  _GLOBAL_64_T  global_pcred_pool[NUM_STACKS];    


typedef  int  _GLOBAL_65_T; extern  _GLOBAL_65_T  global_whichqs[NUM_STACKS];   
struct prochd {
 struct proc *ph_link;
 struct proc *ph_rlink;
};
typedef  struct prochd   _GLOBAL_66_T; extern  _GLOBAL_66_T  _GLOBAL_0_qs_I [ 32 ] ; extern  _GLOBAL_66_T  _GLOBAL_1_qs_I [ 32 ] ; extern  _GLOBAL_66_T  _GLOBAL_2_qs_I [ 32 ] ; extern  _GLOBAL_66_T  _GLOBAL_3_qs_I [ 32 ] ; extern  _GLOBAL_66_T  _GLOBAL_4_qs_I [ 32 ] ; extern  _GLOBAL_66_T  _GLOBAL_5_qs_I [ 32 ] ; extern  _GLOBAL_66_T  _GLOBAL_6_qs_I [ 32 ] ; extern  _GLOBAL_66_T  _GLOBAL_7_qs_I [ 32 ] ; extern  _GLOBAL_66_T  _GLOBAL_8_qs_I [ 32 ] ; extern  _GLOBAL_66_T  _GLOBAL_9_qs_I [ 32 ] ; extern  _GLOBAL_66_T  _GLOBAL_10_qs_I [ 32 ] ; extern  _GLOBAL_66_T  _GLOBAL_11_qs_I [ 32 ] ; extern  _GLOBAL_66_T  _GLOBAL_12_qs_I [ 32 ] ; extern  _GLOBAL_66_T  _GLOBAL_13_qs_I [ 32 ] ; extern  _GLOBAL_66_T  _GLOBAL_14_qs_I [ 32 ] ; extern  _GLOBAL_66_T  _GLOBAL_15_qs_I [ 32 ] ; extern  _GLOBAL_66_T  _GLOBAL_16_qs_I [ 32 ] ; extern  _GLOBAL_66_T  _GLOBAL_17_qs_I [ 32 ] ; extern  _GLOBAL_66_T  _GLOBAL_18_qs_I [ 32 ] ; extern  _GLOBAL_66_T  _GLOBAL_19_qs_I [ 32 ] ; extern  _GLOBAL_66_T  _GLOBAL_20_qs_I [ 32 ] ; extern  _GLOBAL_66_T  _GLOBAL_21_qs_I [ 32 ] ; extern  _GLOBAL_66_T  _GLOBAL_22_qs_I [ 32 ] ; extern  _GLOBAL_66_T  _GLOBAL_23_qs_I [ 32 ] ; extern  _GLOBAL_66_T  _GLOBAL_24_qs_I [ 32 ] ; extern  _GLOBAL_66_T  _GLOBAL_25_qs_I [ 32 ] ; extern  _GLOBAL_66_T  _GLOBAL_26_qs_I [ 32 ] ; extern  _GLOBAL_66_T  _GLOBAL_27_qs_I [ 32 ] ; extern  _GLOBAL_66_T  _GLOBAL_28_qs_I [ 32 ] ; extern  _GLOBAL_66_T  _GLOBAL_29_qs_I [ 32 ] ; extern  _GLOBAL_66_T  _GLOBAL_30_qs_I [ 32 ] ; extern  _GLOBAL_66_T  _GLOBAL_31_qs_I [ 32 ] ; extern  _GLOBAL_66_T  _GLOBAL_32_qs_I [ 32 ] ; extern  _GLOBAL_66_T  _GLOBAL_33_qs_I [ 32 ] ; extern  _GLOBAL_66_T  _GLOBAL_34_qs_I [ 32 ] ; extern  _GLOBAL_66_T  _GLOBAL_35_qs_I [ 32 ] ; extern  _GLOBAL_66_T  _GLOBAL_36_qs_I [ 32 ] ; extern  _GLOBAL_66_T  _GLOBAL_37_qs_I [ 32 ] ; extern  _GLOBAL_66_T  _GLOBAL_38_qs_I [ 32 ] ; extern  _GLOBAL_66_T  _GLOBAL_39_qs_I [ 32 ] ; extern  _GLOBAL_66_T  _GLOBAL_40_qs_I [ 32 ] ; extern  _GLOBAL_66_T  _GLOBAL_41_qs_I [ 32 ] ; extern  _GLOBAL_66_T  _GLOBAL_42_qs_I [ 32 ] ; extern  _GLOBAL_66_T  _GLOBAL_43_qs_I [ 32 ] ; extern  _GLOBAL_66_T  _GLOBAL_44_qs_I [ 32 ] ; extern  _GLOBAL_66_T  _GLOBAL_45_qs_I [ 32 ] ; extern  _GLOBAL_66_T  _GLOBAL_46_qs_I [ 32 ] ; extern  _GLOBAL_66_T  _GLOBAL_47_qs_I [ 32 ] ; extern  _GLOBAL_66_T  _GLOBAL_48_qs_I [ 32 ] ; extern  _GLOBAL_66_T  _GLOBAL_49_qs_I [ 32 ] ; static __attribute__ ((unused)) __typeof__(_GLOBAL_0_qs_I) *_GLOBAL_qs_11_A[NUM_STACKS];   

struct simplelock;

struct proc *pfind(pid_t);
struct pgrp *pgfind(pid_t);
void proc_printit(struct proc *p, const char *modif,
    int (*pr)(const char *, ...));

int chgproccnt(uid_t uid, int diff);
int enterpgrp(struct proc *p, pid_t pgid, int mksess);
void fixjobc(struct proc *p, struct pgrp *pgrp, int entering);
int inferior(struct proc *p);
int leavepgrp(struct proc *p);
void yield(void);
void preempt(struct proc *);
void mi_switch(void);
void pgdelete(struct pgrp *pgrp);
void procinit(void);

void remrunqueue(struct proc *);

void resetpriority(struct proc *);
void setrunnable(struct proc *);

void setrunqueue(struct proc *);

void sleep(void *chan, int pri);
void uvm_swapin(struct proc *);
int ltsleep(void *chan, int pri, const char *wmesg, int timo,
     volatile struct simplelock *);

void unsleep(struct proc *);
void wakeup_n(void *chan, int);
void wakeup(void *chan);

void reaper(void);
void exit1(struct proc *, int);
void exit2(struct proc *);
int fork1(struct proc *, int, int, void *, size_t, void (*)(void *),
     void *, register_t *);
void rqinit(void);
int groupmember(gid_t, struct ucred *);

void cpu_switch(struct proc *);


void cpu_wait(struct proc *);

void cpu_exit(struct proc *);

void child_return(void *);

int proc_cansugid(struct proc *);
void proc_zap(struct proc *);
# 45 "openbsd3/net/bpf.c" 2
# 1 "openbsd3/sys/signalvar.h" 1
# 47 "openbsd3/sys/signalvar.h"
struct sigacts {
 sig_t ps_sigact[32];
 sigset_t ps_catchmask[32];
 sigset_t ps_sigonstack;
 sigset_t ps_sigintr;
 sigset_t ps_sigreset;
 sigset_t ps_siginfo;
 sigset_t ps_oldmask;
 int ps_flags;
 struct sigaltstack ps_sigstk;
 int ps_sig;
 long ps_code;
 sigset_t ps_usertramp;
 int ps_refcnt;
};
# 153 "openbsd3/sys/signalvar.h"
int coredump(struct proc *p);
void execsigs(struct proc *p);
void gsignal(int pgid, int sig);
void csignal(pid_t pgid, int signum, uid_t uid, uid_t euid);
int issignal(struct proc *p);
void pgsignal(struct pgrp *pgrp, int sig, int checkctty);
void postsig(int sig);
void psignal(struct proc *p, int sig);
void siginit(struct proc *p);
void trapsignal(struct proc *p, int sig, u_long code, int type,
     union sigval val);
void sigexit(struct proc *, int);
void setsigvec(struct proc *, int, struct sigaction *);
int killpg1(struct proc *, int, int, int);

void signal_init(void);

struct sigacts *sigactsinit(struct proc *);
void sigactsshare(struct proc *, struct proc *);
void sigactsunshare(struct proc *);
void sigactsfree(struct proc *);




void sendsig(sig_t action, int sig, int returnmask, u_long code,
     int type, union sigval val);
struct core;
struct vnode;
struct ucred;
int cpu_coredump(struct proc *, struct vnode *, struct ucred *,
     struct core *);
# 46 "openbsd3/net/bpf.c" 2
# 1 "openbsd3/sys/ioctl.h" 1
# 43 "openbsd3/sys/ioctl.h"
# 1 "openbsd3/sys/ttycom.h" 1
# 43 "openbsd3/sys/ttycom.h"
# 1 "openbsd3/sys/ioccom.h" 1
# 44 "openbsd3/sys/ttycom.h" 2
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
# 1 "openbsd3/sys/sockio.h" 1
# 64 "openbsd3/sys/ioctl.h" 2
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
# 47 "openbsd3/net/bpf.c" 2
# 1 "openbsd3/sys/conf.h" 1
# 48 "openbsd3/sys/conf.h"
struct buf;
struct proc;
struct tty;
struct uio;
struct vnode;
struct knote;
# 84 "openbsd3/sys/conf.h"
struct bdevsw {
 int (*d_open)(dev_t dev, int oflags, int devtype,
         struct proc *p);
 int (*d_close)(dev_t dev, int fflag, int devtype,
         struct proc *p);
 void (*d_strategy)(struct buf *bp);
 int (*d_ioctl)(dev_t dev, u_long cmd, caddr_t data,
         int fflag, struct proc *p);
 int (*d_dump)(dev_t dev, daddr_t blkno, caddr_t va,
        size_t size);
 int (*d_psize)(dev_t dev);
 int d_type;
};



typedef  struct bdevsw   _GLOBAL_67_T; extern  _GLOBAL_67_T  _GLOBAL_0_bdevsw_I [ ] ; extern  _GLOBAL_67_T  _GLOBAL_1_bdevsw_I [ ] ; extern  _GLOBAL_67_T  _GLOBAL_2_bdevsw_I [ ] ; extern  _GLOBAL_67_T  _GLOBAL_3_bdevsw_I [ ] ; extern  _GLOBAL_67_T  _GLOBAL_4_bdevsw_I [ ] ; extern  _GLOBAL_67_T  _GLOBAL_5_bdevsw_I [ ] ; extern  _GLOBAL_67_T  _GLOBAL_6_bdevsw_I [ ] ; extern  _GLOBAL_67_T  _GLOBAL_7_bdevsw_I [ ] ; extern  _GLOBAL_67_T  _GLOBAL_8_bdevsw_I [ ] ; extern  _GLOBAL_67_T  _GLOBAL_9_bdevsw_I [ ] ; extern  _GLOBAL_67_T  _GLOBAL_10_bdevsw_I [ ] ; extern  _GLOBAL_67_T  _GLOBAL_11_bdevsw_I [ ] ; extern  _GLOBAL_67_T  _GLOBAL_12_bdevsw_I [ ] ; extern  _GLOBAL_67_T  _GLOBAL_13_bdevsw_I [ ] ; extern  _GLOBAL_67_T  _GLOBAL_14_bdevsw_I [ ] ; extern  _GLOBAL_67_T  _GLOBAL_15_bdevsw_I [ ] ; extern  _GLOBAL_67_T  _GLOBAL_16_bdevsw_I [ ] ; extern  _GLOBAL_67_T  _GLOBAL_17_bdevsw_I [ ] ; extern  _GLOBAL_67_T  _GLOBAL_18_bdevsw_I [ ] ; extern  _GLOBAL_67_T  _GLOBAL_19_bdevsw_I [ ] ; extern  _GLOBAL_67_T  _GLOBAL_20_bdevsw_I [ ] ; extern  _GLOBAL_67_T  _GLOBAL_21_bdevsw_I [ ] ; extern  _GLOBAL_67_T  _GLOBAL_22_bdevsw_I [ ] ; extern  _GLOBAL_67_T  _GLOBAL_23_bdevsw_I [ ] ; extern  _GLOBAL_67_T  _GLOBAL_24_bdevsw_I [ ] ; extern  _GLOBAL_67_T  _GLOBAL_25_bdevsw_I [ ] ; extern  _GLOBAL_67_T  _GLOBAL_26_bdevsw_I [ ] ; extern  _GLOBAL_67_T  _GLOBAL_27_bdevsw_I [ ] ; extern  _GLOBAL_67_T  _GLOBAL_28_bdevsw_I [ ] ; extern  _GLOBAL_67_T  _GLOBAL_29_bdevsw_I [ ] ; extern  _GLOBAL_67_T  _GLOBAL_30_bdevsw_I [ ] ; extern  _GLOBAL_67_T  _GLOBAL_31_bdevsw_I [ ] ; extern  _GLOBAL_67_T  _GLOBAL_32_bdevsw_I [ ] ; extern  _GLOBAL_67_T  _GLOBAL_33_bdevsw_I [ ] ; extern  _GLOBAL_67_T  _GLOBAL_34_bdevsw_I [ ] ; extern  _GLOBAL_67_T  _GLOBAL_35_bdevsw_I [ ] ; extern  _GLOBAL_67_T  _GLOBAL_36_bdevsw_I [ ] ; extern  _GLOBAL_67_T  _GLOBAL_37_bdevsw_I [ ] ; extern  _GLOBAL_67_T  _GLOBAL_38_bdevsw_I [ ] ; extern  _GLOBAL_67_T  _GLOBAL_39_bdevsw_I [ ] ; extern  _GLOBAL_67_T  _GLOBAL_40_bdevsw_I [ ] ; extern  _GLOBAL_67_T  _GLOBAL_41_bdevsw_I [ ] ; extern  _GLOBAL_67_T  _GLOBAL_42_bdevsw_I [ ] ; extern  _GLOBAL_67_T  _GLOBAL_43_bdevsw_I [ ] ; extern  _GLOBAL_67_T  _GLOBAL_44_bdevsw_I [ ] ; extern  _GLOBAL_67_T  _GLOBAL_45_bdevsw_I [ ] ; extern  _GLOBAL_67_T  _GLOBAL_46_bdevsw_I [ ] ; extern  _GLOBAL_67_T  _GLOBAL_47_bdevsw_I [ ] ; extern  _GLOBAL_67_T  _GLOBAL_48_bdevsw_I [ ] ; extern  _GLOBAL_67_T  _GLOBAL_49_bdevsw_I [ ] ; static __attribute__ ((unused)) __typeof__(_GLOBAL_0_bdevsw_I) *_GLOBAL_bdevsw_12_A[NUM_STACKS];   
# 143 "openbsd3/sys/conf.h"
struct cdevsw {
 int (*d_open)(dev_t dev, int oflags, int devtype,
         struct proc *p);
 int (*d_close)(dev_t dev, int fflag, int devtype,
         struct proc *);
 int (*d_read)(dev_t dev, struct uio *uio, int ioflag);
 int (*d_write)(dev_t dev, struct uio *uio, int ioflag);
 int (*d_ioctl)(dev_t dev, u_long cmd, caddr_t data,
         int fflag, struct proc *p);
 int (*d_stop)(struct tty *tp, int rw);
 struct tty *
  (*d_tty)(dev_t dev);
 int (*d_poll)(dev_t dev, int events, struct proc *p);
 paddr_t (*d_mmap)(dev_t, off_t, int);
 u_int d_type;
 int (*d_kqfilter)(dev_t dev, struct knote *kn);
};



typedef  struct cdevsw   _GLOBAL_68_T; extern  _GLOBAL_68_T  _GLOBAL_0_cdevsw_I [ ] ; extern  _GLOBAL_68_T  _GLOBAL_1_cdevsw_I [ ] ; extern  _GLOBAL_68_T  _GLOBAL_2_cdevsw_I [ ] ; extern  _GLOBAL_68_T  _GLOBAL_3_cdevsw_I [ ] ; extern  _GLOBAL_68_T  _GLOBAL_4_cdevsw_I [ ] ; extern  _GLOBAL_68_T  _GLOBAL_5_cdevsw_I [ ] ; extern  _GLOBAL_68_T  _GLOBAL_6_cdevsw_I [ ] ; extern  _GLOBAL_68_T  _GLOBAL_7_cdevsw_I [ ] ; extern  _GLOBAL_68_T  _GLOBAL_8_cdevsw_I [ ] ; extern  _GLOBAL_68_T  _GLOBAL_9_cdevsw_I [ ] ; extern  _GLOBAL_68_T  _GLOBAL_10_cdevsw_I [ ] ; extern  _GLOBAL_68_T  _GLOBAL_11_cdevsw_I [ ] ; extern  _GLOBAL_68_T  _GLOBAL_12_cdevsw_I [ ] ; extern  _GLOBAL_68_T  _GLOBAL_13_cdevsw_I [ ] ; extern  _GLOBAL_68_T  _GLOBAL_14_cdevsw_I [ ] ; extern  _GLOBAL_68_T  _GLOBAL_15_cdevsw_I [ ] ; extern  _GLOBAL_68_T  _GLOBAL_16_cdevsw_I [ ] ; extern  _GLOBAL_68_T  _GLOBAL_17_cdevsw_I [ ] ; extern  _GLOBAL_68_T  _GLOBAL_18_cdevsw_I [ ] ; extern  _GLOBAL_68_T  _GLOBAL_19_cdevsw_I [ ] ; extern  _GLOBAL_68_T  _GLOBAL_20_cdevsw_I [ ] ; extern  _GLOBAL_68_T  _GLOBAL_21_cdevsw_I [ ] ; extern  _GLOBAL_68_T  _GLOBAL_22_cdevsw_I [ ] ; extern  _GLOBAL_68_T  _GLOBAL_23_cdevsw_I [ ] ; extern  _GLOBAL_68_T  _GLOBAL_24_cdevsw_I [ ] ; extern  _GLOBAL_68_T  _GLOBAL_25_cdevsw_I [ ] ; extern  _GLOBAL_68_T  _GLOBAL_26_cdevsw_I [ ] ; extern  _GLOBAL_68_T  _GLOBAL_27_cdevsw_I [ ] ; extern  _GLOBAL_68_T  _GLOBAL_28_cdevsw_I [ ] ; extern  _GLOBAL_68_T  _GLOBAL_29_cdevsw_I [ ] ; extern  _GLOBAL_68_T  _GLOBAL_30_cdevsw_I [ ] ; extern  _GLOBAL_68_T  _GLOBAL_31_cdevsw_I [ ] ; extern  _GLOBAL_68_T  _GLOBAL_32_cdevsw_I [ ] ; extern  _GLOBAL_68_T  _GLOBAL_33_cdevsw_I [ ] ; extern  _GLOBAL_68_T  _GLOBAL_34_cdevsw_I [ ] ; extern  _GLOBAL_68_T  _GLOBAL_35_cdevsw_I [ ] ; extern  _GLOBAL_68_T  _GLOBAL_36_cdevsw_I [ ] ; extern  _GLOBAL_68_T  _GLOBAL_37_cdevsw_I [ ] ; extern  _GLOBAL_68_T  _GLOBAL_38_cdevsw_I [ ] ; extern  _GLOBAL_68_T  _GLOBAL_39_cdevsw_I [ ] ; extern  _GLOBAL_68_T  _GLOBAL_40_cdevsw_I [ ] ; extern  _GLOBAL_68_T  _GLOBAL_41_cdevsw_I [ ] ; extern  _GLOBAL_68_T  _GLOBAL_42_cdevsw_I [ ] ; extern  _GLOBAL_68_T  _GLOBAL_43_cdevsw_I [ ] ; extern  _GLOBAL_68_T  _GLOBAL_44_cdevsw_I [ ] ; extern  _GLOBAL_68_T  _GLOBAL_45_cdevsw_I [ ] ; extern  _GLOBAL_68_T  _GLOBAL_46_cdevsw_I [ ] ; extern  _GLOBAL_68_T  _GLOBAL_47_cdevsw_I [ ] ; extern  _GLOBAL_68_T  _GLOBAL_48_cdevsw_I [ ] ; extern  _GLOBAL_68_T  _GLOBAL_49_cdevsw_I [ ] ; static __attribute__ ((unused)) __typeof__(_GLOBAL_0_cdevsw_I) *_GLOBAL_cdevsw_13_A[NUM_STACKS] = { &_GLOBAL_0_cdevsw_I, &_GLOBAL_1_cdevsw_I, &_GLOBAL_2_cdevsw_I, &_GLOBAL_3_cdevsw_I, &_GLOBAL_4_cdevsw_I, &_GLOBAL_5_cdevsw_I, &_GLOBAL_6_cdevsw_I, &_GLOBAL_7_cdevsw_I, &_GLOBAL_8_cdevsw_I, &_GLOBAL_9_cdevsw_I, &_GLOBAL_10_cdevsw_I, &_GLOBAL_11_cdevsw_I, &_GLOBAL_12_cdevsw_I, &_GLOBAL_13_cdevsw_I, &_GLOBAL_14_cdevsw_I, &_GLOBAL_15_cdevsw_I, &_GLOBAL_16_cdevsw_I, &_GLOBAL_17_cdevsw_I, &_GLOBAL_18_cdevsw_I, &_GLOBAL_19_cdevsw_I, &_GLOBAL_20_cdevsw_I, &_GLOBAL_21_cdevsw_I, &_GLOBAL_22_cdevsw_I, &_GLOBAL_23_cdevsw_I, &_GLOBAL_24_cdevsw_I, &_GLOBAL_25_cdevsw_I, &_GLOBAL_26_cdevsw_I, &_GLOBAL_27_cdevsw_I, &_GLOBAL_28_cdevsw_I, &_GLOBAL_29_cdevsw_I, &_GLOBAL_30_cdevsw_I, &_GLOBAL_31_cdevsw_I, &_GLOBAL_32_cdevsw_I, &_GLOBAL_33_cdevsw_I, &_GLOBAL_34_cdevsw_I, &_GLOBAL_35_cdevsw_I, &_GLOBAL_36_cdevsw_I, &_GLOBAL_37_cdevsw_I, &_GLOBAL_38_cdevsw_I, &_GLOBAL_39_cdevsw_I, &_GLOBAL_40_cdevsw_I, &_GLOBAL_41_cdevsw_I, &_GLOBAL_42_cdevsw_I, &_GLOBAL_43_cdevsw_I, &_GLOBAL_44_cdevsw_I, &_GLOBAL_45_cdevsw_I, &_GLOBAL_46_cdevsw_I, &_GLOBAL_47_cdevsw_I, &_GLOBAL_48_cdevsw_I, &_GLOBAL_49_cdevsw_I, };   
# 394 "openbsd3/sys/conf.h"
void randomattach(void);
# 470 "openbsd3/sys/conf.h"
typedef  char  _GLOBAL_69_T; extern  _GLOBAL_69_T  _GLOBAL_0_devopn_I [ ] ; extern  _GLOBAL_69_T  _GLOBAL_1_devopn_I [ ] ; extern  _GLOBAL_69_T  _GLOBAL_2_devopn_I [ ] ; extern  _GLOBAL_69_T  _GLOBAL_3_devopn_I [ ] ; extern  _GLOBAL_69_T  _GLOBAL_4_devopn_I [ ] ; extern  _GLOBAL_69_T  _GLOBAL_5_devopn_I [ ] ; extern  _GLOBAL_69_T  _GLOBAL_6_devopn_I [ ] ; extern  _GLOBAL_69_T  _GLOBAL_7_devopn_I [ ] ; extern  _GLOBAL_69_T  _GLOBAL_8_devopn_I [ ] ; extern  _GLOBAL_69_T  _GLOBAL_9_devopn_I [ ] ; extern  _GLOBAL_69_T  _GLOBAL_10_devopn_I [ ] ; extern  _GLOBAL_69_T  _GLOBAL_11_devopn_I [ ] ; extern  _GLOBAL_69_T  _GLOBAL_12_devopn_I [ ] ; extern  _GLOBAL_69_T  _GLOBAL_13_devopn_I [ ] ; extern  _GLOBAL_69_T  _GLOBAL_14_devopn_I [ ] ; extern  _GLOBAL_69_T  _GLOBAL_15_devopn_I [ ] ; extern  _GLOBAL_69_T  _GLOBAL_16_devopn_I [ ] ; extern  _GLOBAL_69_T  _GLOBAL_17_devopn_I [ ] ; extern  _GLOBAL_69_T  _GLOBAL_18_devopn_I [ ] ; extern  _GLOBAL_69_T  _GLOBAL_19_devopn_I [ ] ; extern  _GLOBAL_69_T  _GLOBAL_20_devopn_I [ ] ; extern  _GLOBAL_69_T  _GLOBAL_21_devopn_I [ ] ; extern  _GLOBAL_69_T  _GLOBAL_22_devopn_I [ ] ; extern  _GLOBAL_69_T  _GLOBAL_23_devopn_I [ ] ; extern  _GLOBAL_69_T  _GLOBAL_24_devopn_I [ ] ; extern  _GLOBAL_69_T  _GLOBAL_25_devopn_I [ ] ; extern  _GLOBAL_69_T  _GLOBAL_26_devopn_I [ ] ; extern  _GLOBAL_69_T  _GLOBAL_27_devopn_I [ ] ; extern  _GLOBAL_69_T  _GLOBAL_28_devopn_I [ ] ; extern  _GLOBAL_69_T  _GLOBAL_29_devopn_I [ ] ; extern  _GLOBAL_69_T  _GLOBAL_30_devopn_I [ ] ; extern  _GLOBAL_69_T  _GLOBAL_31_devopn_I [ ] ; extern  _GLOBAL_69_T  _GLOBAL_32_devopn_I [ ] ; extern  _GLOBAL_69_T  _GLOBAL_33_devopn_I [ ] ; extern  _GLOBAL_69_T  _GLOBAL_34_devopn_I [ ] ; extern  _GLOBAL_69_T  _GLOBAL_35_devopn_I [ ] ; extern  _GLOBAL_69_T  _GLOBAL_36_devopn_I [ ] ; extern  _GLOBAL_69_T  _GLOBAL_37_devopn_I [ ] ; extern  _GLOBAL_69_T  _GLOBAL_38_devopn_I [ ] ; extern  _GLOBAL_69_T  _GLOBAL_39_devopn_I [ ] ; extern  _GLOBAL_69_T  _GLOBAL_40_devopn_I [ ] ; extern  _GLOBAL_69_T  _GLOBAL_41_devopn_I [ ] ; extern  _GLOBAL_69_T  _GLOBAL_42_devopn_I [ ] ; extern  _GLOBAL_69_T  _GLOBAL_43_devopn_I [ ] ; extern  _GLOBAL_69_T  _GLOBAL_44_devopn_I [ ] ; extern  _GLOBAL_69_T  _GLOBAL_45_devopn_I [ ] ; extern  _GLOBAL_69_T  _GLOBAL_46_devopn_I [ ] ; extern  _GLOBAL_69_T  _GLOBAL_47_devopn_I [ ] ; extern  _GLOBAL_69_T  _GLOBAL_48_devopn_I [ ] ; extern  _GLOBAL_69_T  _GLOBAL_49_devopn_I [ ] ; static __attribute__ ((unused)) __typeof__(_GLOBAL_0_devopn_I) *_GLOBAL_devopn_14_A[NUM_STACKS];extern  _GLOBAL_69_T  _GLOBAL_0_devio_I [ ] ; extern  _GLOBAL_69_T  _GLOBAL_1_devio_I [ ] ; extern  _GLOBAL_69_T  _GLOBAL_2_devio_I [ ] ; extern  _GLOBAL_69_T  _GLOBAL_3_devio_I [ ] ; extern  _GLOBAL_69_T  _GLOBAL_4_devio_I [ ] ; extern  _GLOBAL_69_T  _GLOBAL_5_devio_I [ ] ; extern  _GLOBAL_69_T  _GLOBAL_6_devio_I [ ] ; extern  _GLOBAL_69_T  _GLOBAL_7_devio_I [ ] ; extern  _GLOBAL_69_T  _GLOBAL_8_devio_I [ ] ; extern  _GLOBAL_69_T  _GLOBAL_9_devio_I [ ] ; extern  _GLOBAL_69_T  _GLOBAL_10_devio_I [ ] ; extern  _GLOBAL_69_T  _GLOBAL_11_devio_I [ ] ; extern  _GLOBAL_69_T  _GLOBAL_12_devio_I [ ] ; extern  _GLOBAL_69_T  _GLOBAL_13_devio_I [ ] ; extern  _GLOBAL_69_T  _GLOBAL_14_devio_I [ ] ; extern  _GLOBAL_69_T  _GLOBAL_15_devio_I [ ] ; extern  _GLOBAL_69_T  _GLOBAL_16_devio_I [ ] ; extern  _GLOBAL_69_T  _GLOBAL_17_devio_I [ ] ; extern  _GLOBAL_69_T  _GLOBAL_18_devio_I [ ] ; extern  _GLOBAL_69_T  _GLOBAL_19_devio_I [ ] ; extern  _GLOBAL_69_T  _GLOBAL_20_devio_I [ ] ; extern  _GLOBAL_69_T  _GLOBAL_21_devio_I [ ] ; extern  _GLOBAL_69_T  _GLOBAL_22_devio_I [ ] ; extern  _GLOBAL_69_T  _GLOBAL_23_devio_I [ ] ; extern  _GLOBAL_69_T  _GLOBAL_24_devio_I [ ] ; extern  _GLOBAL_69_T  _GLOBAL_25_devio_I [ ] ; extern  _GLOBAL_69_T  _GLOBAL_26_devio_I [ ] ; extern  _GLOBAL_69_T  _GLOBAL_27_devio_I [ ] ; extern  _GLOBAL_69_T  _GLOBAL_28_devio_I [ ] ; extern  _GLOBAL_69_T  _GLOBAL_29_devio_I [ ] ; extern  _GLOBAL_69_T  _GLOBAL_30_devio_I [ ] ; extern  _GLOBAL_69_T  _GLOBAL_31_devio_I [ ] ; extern  _GLOBAL_69_T  _GLOBAL_32_devio_I [ ] ; extern  _GLOBAL_69_T  _GLOBAL_33_devio_I [ ] ; extern  _GLOBAL_69_T  _GLOBAL_34_devio_I [ ] ; extern  _GLOBAL_69_T  _GLOBAL_35_devio_I [ ] ; extern  _GLOBAL_69_T  _GLOBAL_36_devio_I [ ] ; extern  _GLOBAL_69_T  _GLOBAL_37_devio_I [ ] ; extern  _GLOBAL_69_T  _GLOBAL_38_devio_I [ ] ; extern  _GLOBAL_69_T  _GLOBAL_39_devio_I [ ] ; extern  _GLOBAL_69_T  _GLOBAL_40_devio_I [ ] ; extern  _GLOBAL_69_T  _GLOBAL_41_devio_I [ ] ; extern  _GLOBAL_69_T  _GLOBAL_42_devio_I [ ] ; extern  _GLOBAL_69_T  _GLOBAL_43_devio_I [ ] ; extern  _GLOBAL_69_T  _GLOBAL_44_devio_I [ ] ; extern  _GLOBAL_69_T  _GLOBAL_45_devio_I [ ] ; extern  _GLOBAL_69_T  _GLOBAL_46_devio_I [ ] ; extern  _GLOBAL_69_T  _GLOBAL_47_devio_I [ ] ; extern  _GLOBAL_69_T  _GLOBAL_48_devio_I [ ] ; extern  _GLOBAL_69_T  _GLOBAL_49_devio_I [ ] ; static __attribute__ ((unused)) __typeof__(_GLOBAL_0_devio_I) *_GLOBAL_devio_15_A[NUM_STACKS];extern  _GLOBAL_69_T  _GLOBAL_0_devwait_I [ ] ; extern  _GLOBAL_69_T  _GLOBAL_1_devwait_I [ ] ; extern  _GLOBAL_69_T  _GLOBAL_2_devwait_I [ ] ; extern  _GLOBAL_69_T  _GLOBAL_3_devwait_I [ ] ; extern  _GLOBAL_69_T  _GLOBAL_4_devwait_I [ ] ; extern  _GLOBAL_69_T  _GLOBAL_5_devwait_I [ ] ; extern  _GLOBAL_69_T  _GLOBAL_6_devwait_I [ ] ; extern  _GLOBAL_69_T  _GLOBAL_7_devwait_I [ ] ; extern  _GLOBAL_69_T  _GLOBAL_8_devwait_I [ ] ; extern  _GLOBAL_69_T  _GLOBAL_9_devwait_I [ ] ; extern  _GLOBAL_69_T  _GLOBAL_10_devwait_I [ ] ; extern  _GLOBAL_69_T  _GLOBAL_11_devwait_I [ ] ; extern  _GLOBAL_69_T  _GLOBAL_12_devwait_I [ ] ; extern  _GLOBAL_69_T  _GLOBAL_13_devwait_I [ ] ; extern  _GLOBAL_69_T  _GLOBAL_14_devwait_I [ ] ; extern  _GLOBAL_69_T  _GLOBAL_15_devwait_I [ ] ; extern  _GLOBAL_69_T  _GLOBAL_16_devwait_I [ ] ; extern  _GLOBAL_69_T  _GLOBAL_17_devwait_I [ ] ; extern  _GLOBAL_69_T  _GLOBAL_18_devwait_I [ ] ; extern  _GLOBAL_69_T  _GLOBAL_19_devwait_I [ ] ; extern  _GLOBAL_69_T  _GLOBAL_20_devwait_I [ ] ; extern  _GLOBAL_69_T  _GLOBAL_21_devwait_I [ ] ; extern  _GLOBAL_69_T  _GLOBAL_22_devwait_I [ ] ; extern  _GLOBAL_69_T  _GLOBAL_23_devwait_I [ ] ; extern  _GLOBAL_69_T  _GLOBAL_24_devwait_I [ ] ; extern  _GLOBAL_69_T  _GLOBAL_25_devwait_I [ ] ; extern  _GLOBAL_69_T  _GLOBAL_26_devwait_I [ ] ; extern  _GLOBAL_69_T  _GLOBAL_27_devwait_I [ ] ; extern  _GLOBAL_69_T  _GLOBAL_28_devwait_I [ ] ; extern  _GLOBAL_69_T  _GLOBAL_29_devwait_I [ ] ; extern  _GLOBAL_69_T  _GLOBAL_30_devwait_I [ ] ; extern  _GLOBAL_69_T  _GLOBAL_31_devwait_I [ ] ; extern  _GLOBAL_69_T  _GLOBAL_32_devwait_I [ ] ; extern  _GLOBAL_69_T  _GLOBAL_33_devwait_I [ ] ; extern  _GLOBAL_69_T  _GLOBAL_34_devwait_I [ ] ; extern  _GLOBAL_69_T  _GLOBAL_35_devwait_I [ ] ; extern  _GLOBAL_69_T  _GLOBAL_36_devwait_I [ ] ; extern  _GLOBAL_69_T  _GLOBAL_37_devwait_I [ ] ; extern  _GLOBAL_69_T  _GLOBAL_38_devwait_I [ ] ; extern  _GLOBAL_69_T  _GLOBAL_39_devwait_I [ ] ; extern  _GLOBAL_69_T  _GLOBAL_40_devwait_I [ ] ; extern  _GLOBAL_69_T  _GLOBAL_41_devwait_I [ ] ; extern  _GLOBAL_69_T  _GLOBAL_42_devwait_I [ ] ; extern  _GLOBAL_69_T  _GLOBAL_43_devwait_I [ ] ; extern  _GLOBAL_69_T  _GLOBAL_44_devwait_I [ ] ; extern  _GLOBAL_69_T  _GLOBAL_45_devwait_I [ ] ; extern  _GLOBAL_69_T  _GLOBAL_46_devwait_I [ ] ; extern  _GLOBAL_69_T  _GLOBAL_47_devwait_I [ ] ; extern  _GLOBAL_69_T  _GLOBAL_48_devwait_I [ ] ; extern  _GLOBAL_69_T  _GLOBAL_49_devwait_I [ ] ; static __attribute__ ((unused)) __typeof__(_GLOBAL_0_devwait_I) *_GLOBAL_devwait_16_A[NUM_STACKS];extern  _GLOBAL_69_T  _GLOBAL_0_devin_I [ ] ; extern  _GLOBAL_69_T  _GLOBAL_1_devin_I [ ] ; extern  _GLOBAL_69_T  _GLOBAL_2_devin_I [ ] ; extern  _GLOBAL_69_T  _GLOBAL_3_devin_I [ ] ; extern  _GLOBAL_69_T  _GLOBAL_4_devin_I [ ] ; extern  _GLOBAL_69_T  _GLOBAL_5_devin_I [ ] ; extern  _GLOBAL_69_T  _GLOBAL_6_devin_I [ ] ; extern  _GLOBAL_69_T  _GLOBAL_7_devin_I [ ] ; extern  _GLOBAL_69_T  _GLOBAL_8_devin_I [ ] ; extern  _GLOBAL_69_T  _GLOBAL_9_devin_I [ ] ; extern  _GLOBAL_69_T  _GLOBAL_10_devin_I [ ] ; extern  _GLOBAL_69_T  _GLOBAL_11_devin_I [ ] ; extern  _GLOBAL_69_T  _GLOBAL_12_devin_I [ ] ; extern  _GLOBAL_69_T  _GLOBAL_13_devin_I [ ] ; extern  _GLOBAL_69_T  _GLOBAL_14_devin_I [ ] ; extern  _GLOBAL_69_T  _GLOBAL_15_devin_I [ ] ; extern  _GLOBAL_69_T  _GLOBAL_16_devin_I [ ] ; extern  _GLOBAL_69_T  _GLOBAL_17_devin_I [ ] ; extern  _GLOBAL_69_T  _GLOBAL_18_devin_I [ ] ; extern  _GLOBAL_69_T  _GLOBAL_19_devin_I [ ] ; extern  _GLOBAL_69_T  _GLOBAL_20_devin_I [ ] ; extern  _GLOBAL_69_T  _GLOBAL_21_devin_I [ ] ; extern  _GLOBAL_69_T  _GLOBAL_22_devin_I [ ] ; extern  _GLOBAL_69_T  _GLOBAL_23_devin_I [ ] ; extern  _GLOBAL_69_T  _GLOBAL_24_devin_I [ ] ; extern  _GLOBAL_69_T  _GLOBAL_25_devin_I [ ] ; extern  _GLOBAL_69_T  _GLOBAL_26_devin_I [ ] ; extern  _GLOBAL_69_T  _GLOBAL_27_devin_I [ ] ; extern  _GLOBAL_69_T  _GLOBAL_28_devin_I [ ] ; extern  _GLOBAL_69_T  _GLOBAL_29_devin_I [ ] ; extern  _GLOBAL_69_T  _GLOBAL_30_devin_I [ ] ; extern  _GLOBAL_69_T  _GLOBAL_31_devin_I [ ] ; extern  _GLOBAL_69_T  _GLOBAL_32_devin_I [ ] ; extern  _GLOBAL_69_T  _GLOBAL_33_devin_I [ ] ; extern  _GLOBAL_69_T  _GLOBAL_34_devin_I [ ] ; extern  _GLOBAL_69_T  _GLOBAL_35_devin_I [ ] ; extern  _GLOBAL_69_T  _GLOBAL_36_devin_I [ ] ; extern  _GLOBAL_69_T  _GLOBAL_37_devin_I [ ] ; extern  _GLOBAL_69_T  _GLOBAL_38_devin_I [ ] ; extern  _GLOBAL_69_T  _GLOBAL_39_devin_I [ ] ; extern  _GLOBAL_69_T  _GLOBAL_40_devin_I [ ] ; extern  _GLOBAL_69_T  _GLOBAL_41_devin_I [ ] ; extern  _GLOBAL_69_T  _GLOBAL_42_devin_I [ ] ; extern  _GLOBAL_69_T  _GLOBAL_43_devin_I [ ] ; extern  _GLOBAL_69_T  _GLOBAL_44_devin_I [ ] ; extern  _GLOBAL_69_T  _GLOBAL_45_devin_I [ ] ; extern  _GLOBAL_69_T  _GLOBAL_46_devin_I [ ] ; extern  _GLOBAL_69_T  _GLOBAL_47_devin_I [ ] ; extern  _GLOBAL_69_T  _GLOBAL_48_devin_I [ ] ; extern  _GLOBAL_69_T  _GLOBAL_49_devin_I [ ] ; static __attribute__ ((unused)) __typeof__(_GLOBAL_0_devin_I) *_GLOBAL_devin_17_A[NUM_STACKS];extern  _GLOBAL_69_T  _GLOBAL_0_devout_I [ ] ; extern  _GLOBAL_69_T  _GLOBAL_1_devout_I [ ] ; extern  _GLOBAL_69_T  _GLOBAL_2_devout_I [ ] ; extern  _GLOBAL_69_T  _GLOBAL_3_devout_I [ ] ; extern  _GLOBAL_69_T  _GLOBAL_4_devout_I [ ] ; extern  _GLOBAL_69_T  _GLOBAL_5_devout_I [ ] ; extern  _GLOBAL_69_T  _GLOBAL_6_devout_I [ ] ; extern  _GLOBAL_69_T  _GLOBAL_7_devout_I [ ] ; extern  _GLOBAL_69_T  _GLOBAL_8_devout_I [ ] ; extern  _GLOBAL_69_T  _GLOBAL_9_devout_I [ ] ; extern  _GLOBAL_69_T  _GLOBAL_10_devout_I [ ] ; extern  _GLOBAL_69_T  _GLOBAL_11_devout_I [ ] ; extern  _GLOBAL_69_T  _GLOBAL_12_devout_I [ ] ; extern  _GLOBAL_69_T  _GLOBAL_13_devout_I [ ] ; extern  _GLOBAL_69_T  _GLOBAL_14_devout_I [ ] ; extern  _GLOBAL_69_T  _GLOBAL_15_devout_I [ ] ; extern  _GLOBAL_69_T  _GLOBAL_16_devout_I [ ] ; extern  _GLOBAL_69_T  _GLOBAL_17_devout_I [ ] ; extern  _GLOBAL_69_T  _GLOBAL_18_devout_I [ ] ; extern  _GLOBAL_69_T  _GLOBAL_19_devout_I [ ] ; extern  _GLOBAL_69_T  _GLOBAL_20_devout_I [ ] ; extern  _GLOBAL_69_T  _GLOBAL_21_devout_I [ ] ; extern  _GLOBAL_69_T  _GLOBAL_22_devout_I [ ] ; extern  _GLOBAL_69_T  _GLOBAL_23_devout_I [ ] ; extern  _GLOBAL_69_T  _GLOBAL_24_devout_I [ ] ; extern  _GLOBAL_69_T  _GLOBAL_25_devout_I [ ] ; extern  _GLOBAL_69_T  _GLOBAL_26_devout_I [ ] ; extern  _GLOBAL_69_T  _GLOBAL_27_devout_I [ ] ; extern  _GLOBAL_69_T  _GLOBAL_28_devout_I [ ] ; extern  _GLOBAL_69_T  _GLOBAL_29_devout_I [ ] ; extern  _GLOBAL_69_T  _GLOBAL_30_devout_I [ ] ; extern  _GLOBAL_69_T  _GLOBAL_31_devout_I [ ] ; extern  _GLOBAL_69_T  _GLOBAL_32_devout_I [ ] ; extern  _GLOBAL_69_T  _GLOBAL_33_devout_I [ ] ; extern  _GLOBAL_69_T  _GLOBAL_34_devout_I [ ] ; extern  _GLOBAL_69_T  _GLOBAL_35_devout_I [ ] ; extern  _GLOBAL_69_T  _GLOBAL_36_devout_I [ ] ; extern  _GLOBAL_69_T  _GLOBAL_37_devout_I [ ] ; extern  _GLOBAL_69_T  _GLOBAL_38_devout_I [ ] ; extern  _GLOBAL_69_T  _GLOBAL_39_devout_I [ ] ; extern  _GLOBAL_69_T  _GLOBAL_40_devout_I [ ] ; extern  _GLOBAL_69_T  _GLOBAL_41_devout_I [ ] ; extern  _GLOBAL_69_T  _GLOBAL_42_devout_I [ ] ; extern  _GLOBAL_69_T  _GLOBAL_43_devout_I [ ] ; extern  _GLOBAL_69_T  _GLOBAL_44_devout_I [ ] ; extern  _GLOBAL_69_T  _GLOBAL_45_devout_I [ ] ; extern  _GLOBAL_69_T  _GLOBAL_46_devout_I [ ] ; extern  _GLOBAL_69_T  _GLOBAL_47_devout_I [ ] ; extern  _GLOBAL_69_T  _GLOBAL_48_devout_I [ ] ; extern  _GLOBAL_69_T  _GLOBAL_49_devout_I [ ] ; static __attribute__ ((unused)) __typeof__(_GLOBAL_0_devout_I) *_GLOBAL_devout_18_A[NUM_STACKS];      
typedef  char  _GLOBAL_70_T; extern  _GLOBAL_70_T  _GLOBAL_0_devioc_I [ ] ; extern  _GLOBAL_70_T  _GLOBAL_1_devioc_I [ ] ; extern  _GLOBAL_70_T  _GLOBAL_2_devioc_I [ ] ; extern  _GLOBAL_70_T  _GLOBAL_3_devioc_I [ ] ; extern  _GLOBAL_70_T  _GLOBAL_4_devioc_I [ ] ; extern  _GLOBAL_70_T  _GLOBAL_5_devioc_I [ ] ; extern  _GLOBAL_70_T  _GLOBAL_6_devioc_I [ ] ; extern  _GLOBAL_70_T  _GLOBAL_7_devioc_I [ ] ; extern  _GLOBAL_70_T  _GLOBAL_8_devioc_I [ ] ; extern  _GLOBAL_70_T  _GLOBAL_9_devioc_I [ ] ; extern  _GLOBAL_70_T  _GLOBAL_10_devioc_I [ ] ; extern  _GLOBAL_70_T  _GLOBAL_11_devioc_I [ ] ; extern  _GLOBAL_70_T  _GLOBAL_12_devioc_I [ ] ; extern  _GLOBAL_70_T  _GLOBAL_13_devioc_I [ ] ; extern  _GLOBAL_70_T  _GLOBAL_14_devioc_I [ ] ; extern  _GLOBAL_70_T  _GLOBAL_15_devioc_I [ ] ; extern  _GLOBAL_70_T  _GLOBAL_16_devioc_I [ ] ; extern  _GLOBAL_70_T  _GLOBAL_17_devioc_I [ ] ; extern  _GLOBAL_70_T  _GLOBAL_18_devioc_I [ ] ; extern  _GLOBAL_70_T  _GLOBAL_19_devioc_I [ ] ; extern  _GLOBAL_70_T  _GLOBAL_20_devioc_I [ ] ; extern  _GLOBAL_70_T  _GLOBAL_21_devioc_I [ ] ; extern  _GLOBAL_70_T  _GLOBAL_22_devioc_I [ ] ; extern  _GLOBAL_70_T  _GLOBAL_23_devioc_I [ ] ; extern  _GLOBAL_70_T  _GLOBAL_24_devioc_I [ ] ; extern  _GLOBAL_70_T  _GLOBAL_25_devioc_I [ ] ; extern  _GLOBAL_70_T  _GLOBAL_26_devioc_I [ ] ; extern  _GLOBAL_70_T  _GLOBAL_27_devioc_I [ ] ; extern  _GLOBAL_70_T  _GLOBAL_28_devioc_I [ ] ; extern  _GLOBAL_70_T  _GLOBAL_29_devioc_I [ ] ; extern  _GLOBAL_70_T  _GLOBAL_30_devioc_I [ ] ; extern  _GLOBAL_70_T  _GLOBAL_31_devioc_I [ ] ; extern  _GLOBAL_70_T  _GLOBAL_32_devioc_I [ ] ; extern  _GLOBAL_70_T  _GLOBAL_33_devioc_I [ ] ; extern  _GLOBAL_70_T  _GLOBAL_34_devioc_I [ ] ; extern  _GLOBAL_70_T  _GLOBAL_35_devioc_I [ ] ; extern  _GLOBAL_70_T  _GLOBAL_36_devioc_I [ ] ; extern  _GLOBAL_70_T  _GLOBAL_37_devioc_I [ ] ; extern  _GLOBAL_70_T  _GLOBAL_38_devioc_I [ ] ; extern  _GLOBAL_70_T  _GLOBAL_39_devioc_I [ ] ; extern  _GLOBAL_70_T  _GLOBAL_40_devioc_I [ ] ; extern  _GLOBAL_70_T  _GLOBAL_41_devioc_I [ ] ; extern  _GLOBAL_70_T  _GLOBAL_42_devioc_I [ ] ; extern  _GLOBAL_70_T  _GLOBAL_43_devioc_I [ ] ; extern  _GLOBAL_70_T  _GLOBAL_44_devioc_I [ ] ; extern  _GLOBAL_70_T  _GLOBAL_45_devioc_I [ ] ; extern  _GLOBAL_70_T  _GLOBAL_46_devioc_I [ ] ; extern  _GLOBAL_70_T  _GLOBAL_47_devioc_I [ ] ; extern  _GLOBAL_70_T  _GLOBAL_48_devioc_I [ ] ; extern  _GLOBAL_70_T  _GLOBAL_49_devioc_I [ ] ; static __attribute__ ((unused)) __typeof__(_GLOBAL_0_devioc_I) *_GLOBAL_devioc_19_A[NUM_STACKS];extern  _GLOBAL_70_T  _GLOBAL_0_devcls_I [ ] ; extern  _GLOBAL_70_T  _GLOBAL_1_devcls_I [ ] ; extern  _GLOBAL_70_T  _GLOBAL_2_devcls_I [ ] ; extern  _GLOBAL_70_T  _GLOBAL_3_devcls_I [ ] ; extern  _GLOBAL_70_T  _GLOBAL_4_devcls_I [ ] ; extern  _GLOBAL_70_T  _GLOBAL_5_devcls_I [ ] ; extern  _GLOBAL_70_T  _GLOBAL_6_devcls_I [ ] ; extern  _GLOBAL_70_T  _GLOBAL_7_devcls_I [ ] ; extern  _GLOBAL_70_T  _GLOBAL_8_devcls_I [ ] ; extern  _GLOBAL_70_T  _GLOBAL_9_devcls_I [ ] ; extern  _GLOBAL_70_T  _GLOBAL_10_devcls_I [ ] ; extern  _GLOBAL_70_T  _GLOBAL_11_devcls_I [ ] ; extern  _GLOBAL_70_T  _GLOBAL_12_devcls_I [ ] ; extern  _GLOBAL_70_T  _GLOBAL_13_devcls_I [ ] ; extern  _GLOBAL_70_T  _GLOBAL_14_devcls_I [ ] ; extern  _GLOBAL_70_T  _GLOBAL_15_devcls_I [ ] ; extern  _GLOBAL_70_T  _GLOBAL_16_devcls_I [ ] ; extern  _GLOBAL_70_T  _GLOBAL_17_devcls_I [ ] ; extern  _GLOBAL_70_T  _GLOBAL_18_devcls_I [ ] ; extern  _GLOBAL_70_T  _GLOBAL_19_devcls_I [ ] ; extern  _GLOBAL_70_T  _GLOBAL_20_devcls_I [ ] ; extern  _GLOBAL_70_T  _GLOBAL_21_devcls_I [ ] ; extern  _GLOBAL_70_T  _GLOBAL_22_devcls_I [ ] ; extern  _GLOBAL_70_T  _GLOBAL_23_devcls_I [ ] ; extern  _GLOBAL_70_T  _GLOBAL_24_devcls_I [ ] ; extern  _GLOBAL_70_T  _GLOBAL_25_devcls_I [ ] ; extern  _GLOBAL_70_T  _GLOBAL_26_devcls_I [ ] ; extern  _GLOBAL_70_T  _GLOBAL_27_devcls_I [ ] ; extern  _GLOBAL_70_T  _GLOBAL_28_devcls_I [ ] ; extern  _GLOBAL_70_T  _GLOBAL_29_devcls_I [ ] ; extern  _GLOBAL_70_T  _GLOBAL_30_devcls_I [ ] ; extern  _GLOBAL_70_T  _GLOBAL_31_devcls_I [ ] ; extern  _GLOBAL_70_T  _GLOBAL_32_devcls_I [ ] ; extern  _GLOBAL_70_T  _GLOBAL_33_devcls_I [ ] ; extern  _GLOBAL_70_T  _GLOBAL_34_devcls_I [ ] ; extern  _GLOBAL_70_T  _GLOBAL_35_devcls_I [ ] ; extern  _GLOBAL_70_T  _GLOBAL_36_devcls_I [ ] ; extern  _GLOBAL_70_T  _GLOBAL_37_devcls_I [ ] ; extern  _GLOBAL_70_T  _GLOBAL_38_devcls_I [ ] ; extern  _GLOBAL_70_T  _GLOBAL_39_devcls_I [ ] ; extern  _GLOBAL_70_T  _GLOBAL_40_devcls_I [ ] ; extern  _GLOBAL_70_T  _GLOBAL_41_devcls_I [ ] ; extern  _GLOBAL_70_T  _GLOBAL_42_devcls_I [ ] ; extern  _GLOBAL_70_T  _GLOBAL_43_devcls_I [ ] ; extern  _GLOBAL_70_T  _GLOBAL_44_devcls_I [ ] ; extern  _GLOBAL_70_T  _GLOBAL_45_devcls_I [ ] ; extern  _GLOBAL_70_T  _GLOBAL_46_devcls_I [ ] ; extern  _GLOBAL_70_T  _GLOBAL_47_devcls_I [ ] ; extern  _GLOBAL_70_T  _GLOBAL_48_devcls_I [ ] ; extern  _GLOBAL_70_T  _GLOBAL_49_devcls_I [ ] ; static __attribute__ ((unused)) __typeof__(_GLOBAL_0_devcls_I) *_GLOBAL_devcls_20_A[NUM_STACKS];   






struct linesw {
 int (*l_open)(dev_t dev, struct tty *tp);
 int (*l_close)(struct tty *tp, int flags);
 int (*l_read)(struct tty *tp, struct uio *uio,
         int flag);
 int (*l_write)(struct tty *tp, struct uio *uio,
         int flag);
 int (*l_ioctl)(struct tty *tp, u_long cmd, caddr_t data,
         int flag, struct proc *p);
 int (*l_rint)(int c, struct tty *tp);
 int (*l_start)(struct tty *tp);
 int (*l_modem)(struct tty *tp, int flag);
};


typedef  struct linesw   _GLOBAL_71_T; extern  _GLOBAL_71_T  _GLOBAL_0_linesw_I [ ] ; extern  _GLOBAL_71_T  _GLOBAL_1_linesw_I [ ] ; extern  _GLOBAL_71_T  _GLOBAL_2_linesw_I [ ] ; extern  _GLOBAL_71_T  _GLOBAL_3_linesw_I [ ] ; extern  _GLOBAL_71_T  _GLOBAL_4_linesw_I [ ] ; extern  _GLOBAL_71_T  _GLOBAL_5_linesw_I [ ] ; extern  _GLOBAL_71_T  _GLOBAL_6_linesw_I [ ] ; extern  _GLOBAL_71_T  _GLOBAL_7_linesw_I [ ] ; extern  _GLOBAL_71_T  _GLOBAL_8_linesw_I [ ] ; extern  _GLOBAL_71_T  _GLOBAL_9_linesw_I [ ] ; extern  _GLOBAL_71_T  _GLOBAL_10_linesw_I [ ] ; extern  _GLOBAL_71_T  _GLOBAL_11_linesw_I [ ] ; extern  _GLOBAL_71_T  _GLOBAL_12_linesw_I [ ] ; extern  _GLOBAL_71_T  _GLOBAL_13_linesw_I [ ] ; extern  _GLOBAL_71_T  _GLOBAL_14_linesw_I [ ] ; extern  _GLOBAL_71_T  _GLOBAL_15_linesw_I [ ] ; extern  _GLOBAL_71_T  _GLOBAL_16_linesw_I [ ] ; extern  _GLOBAL_71_T  _GLOBAL_17_linesw_I [ ] ; extern  _GLOBAL_71_T  _GLOBAL_18_linesw_I [ ] ; extern  _GLOBAL_71_T  _GLOBAL_19_linesw_I [ ] ; extern  _GLOBAL_71_T  _GLOBAL_20_linesw_I [ ] ; extern  _GLOBAL_71_T  _GLOBAL_21_linesw_I [ ] ; extern  _GLOBAL_71_T  _GLOBAL_22_linesw_I [ ] ; extern  _GLOBAL_71_T  _GLOBAL_23_linesw_I [ ] ; extern  _GLOBAL_71_T  _GLOBAL_24_linesw_I [ ] ; extern  _GLOBAL_71_T  _GLOBAL_25_linesw_I [ ] ; extern  _GLOBAL_71_T  _GLOBAL_26_linesw_I [ ] ; extern  _GLOBAL_71_T  _GLOBAL_27_linesw_I [ ] ; extern  _GLOBAL_71_T  _GLOBAL_28_linesw_I [ ] ; extern  _GLOBAL_71_T  _GLOBAL_29_linesw_I [ ] ; extern  _GLOBAL_71_T  _GLOBAL_30_linesw_I [ ] ; extern  _GLOBAL_71_T  _GLOBAL_31_linesw_I [ ] ; extern  _GLOBAL_71_T  _GLOBAL_32_linesw_I [ ] ; extern  _GLOBAL_71_T  _GLOBAL_33_linesw_I [ ] ; extern  _GLOBAL_71_T  _GLOBAL_34_linesw_I [ ] ; extern  _GLOBAL_71_T  _GLOBAL_35_linesw_I [ ] ; extern  _GLOBAL_71_T  _GLOBAL_36_linesw_I [ ] ; extern  _GLOBAL_71_T  _GLOBAL_37_linesw_I [ ] ; extern  _GLOBAL_71_T  _GLOBAL_38_linesw_I [ ] ; extern  _GLOBAL_71_T  _GLOBAL_39_linesw_I [ ] ; extern  _GLOBAL_71_T  _GLOBAL_40_linesw_I [ ] ; extern  _GLOBAL_71_T  _GLOBAL_41_linesw_I [ ] ; extern  _GLOBAL_71_T  _GLOBAL_42_linesw_I [ ] ; extern  _GLOBAL_71_T  _GLOBAL_43_linesw_I [ ] ; extern  _GLOBAL_71_T  _GLOBAL_44_linesw_I [ ] ; extern  _GLOBAL_71_T  _GLOBAL_45_linesw_I [ ] ; extern  _GLOBAL_71_T  _GLOBAL_46_linesw_I [ ] ; extern  _GLOBAL_71_T  _GLOBAL_47_linesw_I [ ] ; extern  _GLOBAL_71_T  _GLOBAL_48_linesw_I [ ] ; extern  _GLOBAL_71_T  _GLOBAL_49_linesw_I [ ] ; static __attribute__ ((unused)) __typeof__(_GLOBAL_0_linesw_I) *_GLOBAL_linesw_21_A[NUM_STACKS];   





struct swdevt {
 dev_t sw_dev;
 int sw_flags;
 int sw_nblks;
 struct vnode *sw_vp;
};





typedef  struct swdevt   _GLOBAL_72_T; extern  _GLOBAL_72_T  _GLOBAL_0_swdevt_I [ ] ; extern  _GLOBAL_72_T  _GLOBAL_1_swdevt_I [ ] ; extern  _GLOBAL_72_T  _GLOBAL_2_swdevt_I [ ] ; extern  _GLOBAL_72_T  _GLOBAL_3_swdevt_I [ ] ; extern  _GLOBAL_72_T  _GLOBAL_4_swdevt_I [ ] ; extern  _GLOBAL_72_T  _GLOBAL_5_swdevt_I [ ] ; extern  _GLOBAL_72_T  _GLOBAL_6_swdevt_I [ ] ; extern  _GLOBAL_72_T  _GLOBAL_7_swdevt_I [ ] ; extern  _GLOBAL_72_T  _GLOBAL_8_swdevt_I [ ] ; extern  _GLOBAL_72_T  _GLOBAL_9_swdevt_I [ ] ; extern  _GLOBAL_72_T  _GLOBAL_10_swdevt_I [ ] ; extern  _GLOBAL_72_T  _GLOBAL_11_swdevt_I [ ] ; extern  _GLOBAL_72_T  _GLOBAL_12_swdevt_I [ ] ; extern  _GLOBAL_72_T  _GLOBAL_13_swdevt_I [ ] ; extern  _GLOBAL_72_T  _GLOBAL_14_swdevt_I [ ] ; extern  _GLOBAL_72_T  _GLOBAL_15_swdevt_I [ ] ; extern  _GLOBAL_72_T  _GLOBAL_16_swdevt_I [ ] ; extern  _GLOBAL_72_T  _GLOBAL_17_swdevt_I [ ] ; extern  _GLOBAL_72_T  _GLOBAL_18_swdevt_I [ ] ; extern  _GLOBAL_72_T  _GLOBAL_19_swdevt_I [ ] ; extern  _GLOBAL_72_T  _GLOBAL_20_swdevt_I [ ] ; extern  _GLOBAL_72_T  _GLOBAL_21_swdevt_I [ ] ; extern  _GLOBAL_72_T  _GLOBAL_22_swdevt_I [ ] ; extern  _GLOBAL_72_T  _GLOBAL_23_swdevt_I [ ] ; extern  _GLOBAL_72_T  _GLOBAL_24_swdevt_I [ ] ; extern  _GLOBAL_72_T  _GLOBAL_25_swdevt_I [ ] ; extern  _GLOBAL_72_T  _GLOBAL_26_swdevt_I [ ] ; extern  _GLOBAL_72_T  _GLOBAL_27_swdevt_I [ ] ; extern  _GLOBAL_72_T  _GLOBAL_28_swdevt_I [ ] ; extern  _GLOBAL_72_T  _GLOBAL_29_swdevt_I [ ] ; extern  _GLOBAL_72_T  _GLOBAL_30_swdevt_I [ ] ; extern  _GLOBAL_72_T  _GLOBAL_31_swdevt_I [ ] ; extern  _GLOBAL_72_T  _GLOBAL_32_swdevt_I [ ] ; extern  _GLOBAL_72_T  _GLOBAL_33_swdevt_I [ ] ; extern  _GLOBAL_72_T  _GLOBAL_34_swdevt_I [ ] ; extern  _GLOBAL_72_T  _GLOBAL_35_swdevt_I [ ] ; extern  _GLOBAL_72_T  _GLOBAL_36_swdevt_I [ ] ; extern  _GLOBAL_72_T  _GLOBAL_37_swdevt_I [ ] ; extern  _GLOBAL_72_T  _GLOBAL_38_swdevt_I [ ] ; extern  _GLOBAL_72_T  _GLOBAL_39_swdevt_I [ ] ; extern  _GLOBAL_72_T  _GLOBAL_40_swdevt_I [ ] ; extern  _GLOBAL_72_T  _GLOBAL_41_swdevt_I [ ] ; extern  _GLOBAL_72_T  _GLOBAL_42_swdevt_I [ ] ; extern  _GLOBAL_72_T  _GLOBAL_43_swdevt_I [ ] ; extern  _GLOBAL_72_T  _GLOBAL_44_swdevt_I [ ] ; extern  _GLOBAL_72_T  _GLOBAL_45_swdevt_I [ ] ; extern  _GLOBAL_72_T  _GLOBAL_46_swdevt_I [ ] ; extern  _GLOBAL_72_T  _GLOBAL_47_swdevt_I [ ] ; extern  _GLOBAL_72_T  _GLOBAL_48_swdevt_I [ ] ; extern  _GLOBAL_72_T  _GLOBAL_49_swdevt_I [ ] ; static __attribute__ ((unused)) __typeof__(_GLOBAL_0_swdevt_I) *_GLOBAL_swdevt_22_A[NUM_STACKS];   
typedef  int  _GLOBAL_73_T; extern  _GLOBAL_73_T  _GLOBAL_0_chrtoblktbl_I [ ] ; extern  _GLOBAL_73_T  _GLOBAL_1_chrtoblktbl_I [ ] ; extern  _GLOBAL_73_T  _GLOBAL_2_chrtoblktbl_I [ ] ; extern  _GLOBAL_73_T  _GLOBAL_3_chrtoblktbl_I [ ] ; extern  _GLOBAL_73_T  _GLOBAL_4_chrtoblktbl_I [ ] ; extern  _GLOBAL_73_T  _GLOBAL_5_chrtoblktbl_I [ ] ; extern  _GLOBAL_73_T  _GLOBAL_6_chrtoblktbl_I [ ] ; extern  _GLOBAL_73_T  _GLOBAL_7_chrtoblktbl_I [ ] ; extern  _GLOBAL_73_T  _GLOBAL_8_chrtoblktbl_I [ ] ; extern  _GLOBAL_73_T  _GLOBAL_9_chrtoblktbl_I [ ] ; extern  _GLOBAL_73_T  _GLOBAL_10_chrtoblktbl_I [ ] ; extern  _GLOBAL_73_T  _GLOBAL_11_chrtoblktbl_I [ ] ; extern  _GLOBAL_73_T  _GLOBAL_12_chrtoblktbl_I [ ] ; extern  _GLOBAL_73_T  _GLOBAL_13_chrtoblktbl_I [ ] ; extern  _GLOBAL_73_T  _GLOBAL_14_chrtoblktbl_I [ ] ; extern  _GLOBAL_73_T  _GLOBAL_15_chrtoblktbl_I [ ] ; extern  _GLOBAL_73_T  _GLOBAL_16_chrtoblktbl_I [ ] ; extern  _GLOBAL_73_T  _GLOBAL_17_chrtoblktbl_I [ ] ; extern  _GLOBAL_73_T  _GLOBAL_18_chrtoblktbl_I [ ] ; extern  _GLOBAL_73_T  _GLOBAL_19_chrtoblktbl_I [ ] ; extern  _GLOBAL_73_T  _GLOBAL_20_chrtoblktbl_I [ ] ; extern  _GLOBAL_73_T  _GLOBAL_21_chrtoblktbl_I [ ] ; extern  _GLOBAL_73_T  _GLOBAL_22_chrtoblktbl_I [ ] ; extern  _GLOBAL_73_T  _GLOBAL_23_chrtoblktbl_I [ ] ; extern  _GLOBAL_73_T  _GLOBAL_24_chrtoblktbl_I [ ] ; extern  _GLOBAL_73_T  _GLOBAL_25_chrtoblktbl_I [ ] ; extern  _GLOBAL_73_T  _GLOBAL_26_chrtoblktbl_I [ ] ; extern  _GLOBAL_73_T  _GLOBAL_27_chrtoblktbl_I [ ] ; extern  _GLOBAL_73_T  _GLOBAL_28_chrtoblktbl_I [ ] ; extern  _GLOBAL_73_T  _GLOBAL_29_chrtoblktbl_I [ ] ; extern  _GLOBAL_73_T  _GLOBAL_30_chrtoblktbl_I [ ] ; extern  _GLOBAL_73_T  _GLOBAL_31_chrtoblktbl_I [ ] ; extern  _GLOBAL_73_T  _GLOBAL_32_chrtoblktbl_I [ ] ; extern  _GLOBAL_73_T  _GLOBAL_33_chrtoblktbl_I [ ] ; extern  _GLOBAL_73_T  _GLOBAL_34_chrtoblktbl_I [ ] ; extern  _GLOBAL_73_T  _GLOBAL_35_chrtoblktbl_I [ ] ; extern  _GLOBAL_73_T  _GLOBAL_36_chrtoblktbl_I [ ] ; extern  _GLOBAL_73_T  _GLOBAL_37_chrtoblktbl_I [ ] ; extern  _GLOBAL_73_T  _GLOBAL_38_chrtoblktbl_I [ ] ; extern  _GLOBAL_73_T  _GLOBAL_39_chrtoblktbl_I [ ] ; extern  _GLOBAL_73_T  _GLOBAL_40_chrtoblktbl_I [ ] ; extern  _GLOBAL_73_T  _GLOBAL_41_chrtoblktbl_I [ ] ; extern  _GLOBAL_73_T  _GLOBAL_42_chrtoblktbl_I [ ] ; extern  _GLOBAL_73_T  _GLOBAL_43_chrtoblktbl_I [ ] ; extern  _GLOBAL_73_T  _GLOBAL_44_chrtoblktbl_I [ ] ; extern  _GLOBAL_73_T  _GLOBAL_45_chrtoblktbl_I [ ] ; extern  _GLOBAL_73_T  _GLOBAL_46_chrtoblktbl_I [ ] ; extern  _GLOBAL_73_T  _GLOBAL_47_chrtoblktbl_I [ ] ; extern  _GLOBAL_73_T  _GLOBAL_48_chrtoblktbl_I [ ] ; extern  _GLOBAL_73_T  _GLOBAL_49_chrtoblktbl_I [ ] ; static __attribute__ ((unused)) __typeof__(_GLOBAL_0_chrtoblktbl_I) *_GLOBAL_chrtoblktbl_23_A[NUM_STACKS];  
typedef  int  _GLOBAL_74_T; extern  _GLOBAL_74_T  global_nchrtoblktbl[NUM_STACKS];   

struct bdevsw *bdevsw_lookup(dev_t);
struct cdevsw *cdevsw_lookup(dev_t);
int chrtoblk(dev_t);
int blktochr(dev_t);
int iskmemdev(dev_t);
int iszerodev(dev_t);
dev_t getnulldev(void);

int filedescopen(dev_t, int, int, struct proc *); int filedescclose(dev_t, int, int, struct proc *); int filedescread(dev_t, struct uio *, int); int filedescwrite(dev_t, struct uio *, int); int filedescioctl(dev_t, u_long, caddr_t, int, struct proc *); int filedescstop(struct tty *, int); struct tty *filedesctty(dev_t); int filedescpoll(dev_t, int, struct proc *); paddr_t filedescmmap(dev_t, off_t, int); int filedesckqfilter(dev_t, struct knote *);

int logopen(dev_t, int, int, struct proc *); int logclose(dev_t, int, int, struct proc *); int logread(dev_t, struct uio *, int); int logwrite(dev_t, struct uio *, int); int logioctl(dev_t, u_long, caddr_t, int, struct proc *); int logstop(struct tty *, int); struct tty *logtty(dev_t); int logpoll(dev_t, int, struct proc *); paddr_t logmmap(dev_t, off_t, int); int logkqfilter(dev_t, struct knote *);







int lkmopen(dev_t, int, int, struct proc *); int lkmclose(dev_t, int, int, struct proc *); int lkmread(dev_t, struct uio *, int); int lkmwrite(dev_t, struct uio *, int); int lkmioctl(dev_t, u_long, caddr_t, int, struct proc *); int lkmstop(struct tty *, int); struct tty *lkmtty(dev_t); int lkmpoll(dev_t, int, struct proc *); paddr_t lkmmmap(dev_t, off_t, int); int lkmkqfilter(dev_t, struct knote *);



int ptsopen(dev_t, int, int, struct proc *); int ptsclose(dev_t, int, int, struct proc *); int ptsread(dev_t, struct uio *, int); int ptswrite(dev_t, struct uio *, int); int ptyioctl(dev_t, u_long, caddr_t, int, struct proc *); int ptsstop(struct tty *, int); struct tty *ptytty(dev_t); int ptspoll(dev_t, int, struct proc *); paddr_t ptsmmap(dev_t, off_t, int); int ptskqfilter(dev_t, struct knote *);



int ptcopen(dev_t, int, int, struct proc *); int ptcclose(dev_t, int, int, struct proc *); int ptcread(dev_t, struct uio *, int); int ptcwrite(dev_t, struct uio *, int); int ptyioctl(dev_t, u_long, caddr_t, int, struct proc *); int ptcstop(struct tty *, int); struct tty *ptytty(dev_t); int ptcpoll(dev_t, int, struct proc *); paddr_t ptcmmap(dev_t, off_t, int); int ptckqfilter(dev_t, struct knote *);

int ptmopen(dev_t, int, int, struct proc *); int ptmclose(dev_t, int, int, struct proc *); int ptmread(dev_t, struct uio *, int); int ptmwrite(dev_t, struct uio *, int); int ptmioctl(dev_t, u_long, caddr_t, int, struct proc *); int ptmstop(struct tty *, int); struct tty *ptmtty(dev_t); int ptmpoll(dev_t, int, struct proc *); paddr_t ptmmmap(dev_t, off_t, int); int ptmkqfilter(dev_t, struct knote *);

int cttyopen(dev_t, int, int, struct proc *); int cttyclose(dev_t, int, int, struct proc *); int cttyread(dev_t, struct uio *, int); int cttywrite(dev_t, struct uio *, int); int cttyioctl(dev_t, u_long, caddr_t, int, struct proc *); int cttystop(struct tty *, int); struct tty *cttytty(dev_t); int cttypoll(dev_t, int, struct proc *); paddr_t cttymmap(dev_t, off_t, int); int cttykqfilter(dev_t, struct knote *);

int audioopen(dev_t, int, int, struct proc *); int audioclose(dev_t, int, int, struct proc *); int audioread(dev_t, struct uio *, int); int audiowrite(dev_t, struct uio *, int); int audioioctl(dev_t, u_long, caddr_t, int, struct proc *); int audiostop(struct tty *, int); struct tty *audiotty(dev_t); int audiopoll(dev_t, int, struct proc *); paddr_t audiommap(dev_t, off_t, int); int audiokqfilter(dev_t, struct knote *);
int midiopen(dev_t, int, int, struct proc *); int midiclose(dev_t, int, int, struct proc *); int midiread(dev_t, struct uio *, int); int midiwrite(dev_t, struct uio *, int); int midiioctl(dev_t, u_long, caddr_t, int, struct proc *); int midistop(struct tty *, int); struct tty *miditty(dev_t); int midipoll(dev_t, int, struct proc *); paddr_t midimmap(dev_t, off_t, int); int midikqfilter(dev_t, struct knote *);
int sequenceropen(dev_t, int, int, struct proc *); int sequencerclose(dev_t, int, int, struct proc *); int sequencerread(dev_t, struct uio *, int); int sequencerwrite(dev_t, struct uio *, int); int sequencerioctl(dev_t, u_long, caddr_t, int, struct proc *); int sequencerstop(struct tty *, int); struct tty *sequencertty(dev_t); int sequencerpoll(dev_t, int, struct proc *); paddr_t sequencermmap(dev_t, off_t, int); int sequencerkqfilter(dev_t, struct knote *);
int radioopen(dev_t, int, int, struct proc *); int radioclose(dev_t, int, int, struct proc *); int radioread(dev_t, struct uio *, int); int radiowrite(dev_t, struct uio *, int); int radioioctl(dev_t, u_long, caddr_t, int, struct proc *); int radiostop(struct tty *, int); struct tty *radiotty(dev_t); int radiopoll(dev_t, int, struct proc *); paddr_t radiommap(dev_t, off_t, int); int radiokqfilter(dev_t, struct knote *);
int cnopen(dev_t, int, int, struct proc *); int cnclose(dev_t, int, int, struct proc *); int cnread(dev_t, struct uio *, int); int cnwrite(dev_t, struct uio *, int); int cnioctl(dev_t, u_long, caddr_t, int, struct proc *); int cnstop(struct tty *, int); struct tty *cntty(dev_t); int cnpoll(dev_t, int, struct proc *); paddr_t cnmmap(dev_t, off_t, int); int cnkqfilter(dev_t, struct knote *);

int swopen(dev_t, int, int, struct proc *); int swclose(dev_t, int, int, struct proc *); void swstrategy(struct buf *); int swioctl(dev_t, u_long, caddr_t, int, struct proc *); int swdump(dev_t, daddr_t, caddr_t, size_t); int swsize(dev_t);
int swopen(dev_t, int, int, struct proc *); int swclose(dev_t, int, int, struct proc *); int swread(dev_t, struct uio *, int); int swwrite(dev_t, struct uio *, int); int swioctl(dev_t, u_long, caddr_t, int, struct proc *); int swstop(struct tty *, int); struct tty *swtty(dev_t); int swpoll(dev_t, int, struct proc *); paddr_t swmmap(dev_t, off_t, int); int swkqfilter(dev_t, struct knote *);

int vndopen(dev_t, int, int, struct proc *); int vndclose(dev_t, int, int, struct proc *); void vndstrategy(struct buf *); int vndioctl(dev_t, u_long, caddr_t, int, struct proc *); int vnddump(dev_t, daddr_t, caddr_t, size_t); int vndsize(dev_t);
int vndopen(dev_t, int, int, struct proc *); int vndclose(dev_t, int, int, struct proc *); int vndread(dev_t, struct uio *, int); int vndwrite(dev_t, struct uio *, int); int vndioctl(dev_t, u_long, caddr_t, int, struct proc *); int vndstop(struct tty *, int); struct tty *vndtty(dev_t); int vndpoll(dev_t, int, struct proc *); paddr_t vndmmap(dev_t, off_t, int); int vndkqfilter(dev_t, struct knote *);

int ccdopen(dev_t, int, int, struct proc *); int ccdclose(dev_t, int, int, struct proc *); void ccdstrategy(struct buf *); int ccdioctl(dev_t, u_long, caddr_t, int, struct proc *); int ccddump(dev_t, daddr_t, caddr_t, size_t); int ccdsize(dev_t);
int ccdopen(dev_t, int, int, struct proc *); int ccdclose(dev_t, int, int, struct proc *); int ccdread(dev_t, struct uio *, int); int ccdwrite(dev_t, struct uio *, int); int ccdioctl(dev_t, u_long, caddr_t, int, struct proc *); int ccdstop(struct tty *, int); struct tty *ccdtty(dev_t); int ccdpoll(dev_t, int, struct proc *); paddr_t ccdmmap(dev_t, off_t, int); int ccdkqfilter(dev_t, struct knote *);

int raidopen(dev_t, int, int, struct proc *); int raidclose(dev_t, int, int, struct proc *); void raidstrategy(struct buf *); int raidioctl(dev_t, u_long, caddr_t, int, struct proc *); int raiddump(dev_t, daddr_t, caddr_t, size_t); int raidsize(dev_t);
int raidopen(dev_t, int, int, struct proc *); int raidclose(dev_t, int, int, struct proc *); int raidread(dev_t, struct uio *, int); int raidwrite(dev_t, struct uio *, int); int raidioctl(dev_t, u_long, caddr_t, int, struct proc *); int raidstop(struct tty *, int); struct tty *raidtty(dev_t); int raidpoll(dev_t, int, struct proc *); paddr_t raidmmap(dev_t, off_t, int); int raidkqfilter(dev_t, struct knote *);

int iopopen(dev_t, int, int, struct proc *); int iopclose(dev_t, int, int, struct proc *); int iopread(dev_t, struct uio *, int); int iopwrite(dev_t, struct uio *, int); int iopioctl(dev_t, u_long, caddr_t, int, struct proc *); int iopstop(struct tty *, int); struct tty *ioptty(dev_t); int ioppoll(dev_t, int, struct proc *); paddr_t iopmmap(dev_t, off_t, int); int iopkqfilter(dev_t, struct knote *);

int chopen(dev_t, int, int, struct proc *); int chclose(dev_t, int, int, struct proc *); int chread(dev_t, struct uio *, int); int chwrite(dev_t, struct uio *, int); int chioctl(dev_t, u_long, caddr_t, int, struct proc *); int chstop(struct tty *, int); struct tty *chtty(dev_t); int chpoll(dev_t, int, struct proc *); paddr_t chmmap(dev_t, off_t, int); int chkqfilter(dev_t, struct knote *);

int ssopen(dev_t, int, int, struct proc *); int ssclose(dev_t, int, int, struct proc *); int ssread(dev_t, struct uio *, int); int sswrite(dev_t, struct uio *, int); int ssioctl(dev_t, u_long, caddr_t, int, struct proc *); int ssstop(struct tty *, int); struct tty *sstty(dev_t); int sspoll(dev_t, int, struct proc *); paddr_t ssmmap(dev_t, off_t, int); int sskqfilter(dev_t, struct knote *);

int sdopen(dev_t, int, int, struct proc *); int sdclose(dev_t, int, int, struct proc *); void sdstrategy(struct buf *); int sdioctl(dev_t, u_long, caddr_t, int, struct proc *); int sddump(dev_t, daddr_t, caddr_t, size_t); int sdsize(dev_t);
int sdopen(dev_t, int, int, struct proc *); int sdclose(dev_t, int, int, struct proc *); int sdread(dev_t, struct uio *, int); int sdwrite(dev_t, struct uio *, int); int sdioctl(dev_t, u_long, caddr_t, int, struct proc *); int sdstop(struct tty *, int); struct tty *sdtty(dev_t); int sdpoll(dev_t, int, struct proc *); paddr_t sdmmap(dev_t, off_t, int); int sdkqfilter(dev_t, struct knote *);

int sesopen(dev_t, int, int, struct proc *); int sesclose(dev_t, int, int, struct proc *); int sesread(dev_t, struct uio *, int); int seswrite(dev_t, struct uio *, int); int sesioctl(dev_t, u_long, caddr_t, int, struct proc *); int sesstop(struct tty *, int); struct tty *sestty(dev_t); int sespoll(dev_t, int, struct proc *); paddr_t sesmmap(dev_t, off_t, int); int seskqfilter(dev_t, struct knote *);

int stopen(dev_t, int, int, struct proc *); int stclose(dev_t, int, int, struct proc *); void ststrategy(struct buf *); int stioctl(dev_t, u_long, caddr_t, int, struct proc *); int stdump(dev_t, daddr_t, caddr_t, size_t); int stsize(dev_t);
int stopen(dev_t, int, int, struct proc *); int stclose(dev_t, int, int, struct proc *); int stread(dev_t, struct uio *, int); int stwrite(dev_t, struct uio *, int); int stioctl(dev_t, u_long, caddr_t, int, struct proc *); int ststop(struct tty *, int); struct tty *sttty(dev_t); int stpoll(dev_t, int, struct proc *); paddr_t stmmap(dev_t, off_t, int); int stkqfilter(dev_t, struct knote *);

int cdopen(dev_t, int, int, struct proc *); int cdclose(dev_t, int, int, struct proc *); void cdstrategy(struct buf *); int cdioctl(dev_t, u_long, caddr_t, int, struct proc *); int cddump(dev_t, daddr_t, caddr_t, size_t); int cdsize(dev_t);
int cdopen(dev_t, int, int, struct proc *); int cdclose(dev_t, int, int, struct proc *); int cdread(dev_t, struct uio *, int); int cdwrite(dev_t, struct uio *, int); int cdioctl(dev_t, u_long, caddr_t, int, struct proc *); int cdstop(struct tty *, int); struct tty *cdtty(dev_t); int cdpoll(dev_t, int, struct proc *); paddr_t cdmmap(dev_t, off_t, int); int cdkqfilter(dev_t, struct knote *);

int rdopen(dev_t, int, int, struct proc *); int rdclose(dev_t, int, int, struct proc *); void rdstrategy(struct buf *); int rdioctl(dev_t, u_long, caddr_t, int, struct proc *); int rddump(dev_t, daddr_t, caddr_t, size_t); int rdsize(dev_t);
int rdopen(dev_t, int, int, struct proc *); int rdclose(dev_t, int, int, struct proc *); int rdread(dev_t, struct uio *, int); int rdwrite(dev_t, struct uio *, int); int rdioctl(dev_t, u_long, caddr_t, int, struct proc *); int rdstop(struct tty *, int); struct tty *rdtty(dev_t); int rdpoll(dev_t, int, struct proc *); paddr_t rdmmap(dev_t, off_t, int); int rdkqfilter(dev_t, struct knote *);

int ukopen(dev_t, int, int, struct proc *); int ukclose(dev_t, int, int, struct proc *); void ukstrategy(struct buf *); int ukioctl(dev_t, u_long, caddr_t, int, struct proc *); int ukdump(dev_t, daddr_t, caddr_t, size_t); int uksize(dev_t);
int ukopen(dev_t, int, int, struct proc *); int ukclose(dev_t, int, int, struct proc *); int ukread(dev_t, struct uio *, int); int ukwrite(dev_t, struct uio *, int); int ukioctl(dev_t, u_long, caddr_t, int, struct proc *); int ukstop(struct tty *, int); struct tty *uktty(dev_t); int ukpoll(dev_t, int, struct proc *); paddr_t ukmmap(dev_t, off_t, int); int ukkqfilter(dev_t, struct knote *);

int bpfopen(dev_t, int, int, struct proc *); int bpfclose(dev_t, int, int, struct proc *); int bpfread(dev_t, struct uio *, int); int bpfwrite(dev_t, struct uio *, int); int bpfioctl(dev_t, u_long, caddr_t, int, struct proc *); int bpfstop(struct tty *, int); struct tty *bpftty(dev_t); int bpfpoll(dev_t, int, struct proc *); paddr_t bpfmmap(dev_t, off_t, int); int bpfkqfilter(dev_t, struct knote *);

int pfopen(dev_t, int, int, struct proc *); int pfclose(dev_t, int, int, struct proc *); int pfread(dev_t, struct uio *, int); int pfwrite(dev_t, struct uio *, int); int pfioctl(dev_t, u_long, caddr_t, int, struct proc *); int pfstop(struct tty *, int); struct tty *pftty(dev_t); int pfpoll(dev_t, int, struct proc *); paddr_t pfmmap(dev_t, off_t, int); int pfkqfilter(dev_t, struct knote *);

int tunopen(dev_t, int, int, struct proc *); int tunclose(dev_t, int, int, struct proc *); int tunread(dev_t, struct uio *, int); int tunwrite(dev_t, struct uio *, int); int tunioctl(dev_t, u_long, caddr_t, int, struct proc *); int tunstop(struct tty *, int); struct tty *tuntty(dev_t); int tunpoll(dev_t, int, struct proc *); paddr_t tunmmap(dev_t, off_t, int); int tunkqfilter(dev_t, struct knote *);

int randomopen(dev_t, int, int, struct proc *); int randomclose(dev_t, int, int, struct proc *); int randomread(dev_t, struct uio *, int); int randomwrite(dev_t, struct uio *, int); int randomioctl(dev_t, u_long, caddr_t, int, struct proc *); int randomstop(struct tty *, int); struct tty *randomtty(dev_t); int randompoll(dev_t, int, struct proc *); paddr_t randommmap(dev_t, off_t, int); int randomkqfilter(dev_t, struct knote *);

int wsdisplayopen(dev_t, int, int, struct proc *); int wsdisplayclose(dev_t, int, int, struct proc *); int wsdisplayread(dev_t, struct uio *, int); int wsdisplaywrite(dev_t, struct uio *, int); int wsdisplayioctl(dev_t, u_long, caddr_t, int, struct proc *); int wsdisplaystop(struct tty *, int); struct tty *wsdisplaytty(dev_t); int wsdisplaypoll(dev_t, int, struct proc *); paddr_t wsdisplaymmap(dev_t, off_t, int); int wsdisplaykqfilter(dev_t, struct knote *);
int wskbdopen(dev_t, int, int, struct proc *); int wskbdclose(dev_t, int, int, struct proc *); int wskbdread(dev_t, struct uio *, int); int wskbdwrite(dev_t, struct uio *, int); int wskbdioctl(dev_t, u_long, caddr_t, int, struct proc *); int wskbdstop(struct tty *, int); struct tty *wskbdtty(dev_t); int wskbdpoll(dev_t, int, struct proc *); paddr_t wskbdmmap(dev_t, off_t, int); int wskbdkqfilter(dev_t, struct knote *);
int wsmouseopen(dev_t, int, int, struct proc *); int wsmouseclose(dev_t, int, int, struct proc *); int wsmouseread(dev_t, struct uio *, int); int wsmousewrite(dev_t, struct uio *, int); int wsmouseioctl(dev_t, u_long, caddr_t, int, struct proc *); int wsmousestop(struct tty *, int); struct tty *wsmousetty(dev_t); int wsmousepoll(dev_t, int, struct proc *); paddr_t wsmousemmap(dev_t, off_t, int); int wsmousekqfilter(dev_t, struct knote *);
int wsmuxopen(dev_t, int, int, struct proc *); int wsmuxclose(dev_t, int, int, struct proc *); int wsmuxread(dev_t, struct uio *, int); int wsmuxwrite(dev_t, struct uio *, int); int wsmuxioctl(dev_t, u_long, caddr_t, int, struct proc *); int wsmuxstop(struct tty *, int); struct tty *wsmuxtty(dev_t); int wsmuxpoll(dev_t, int, struct proc *); paddr_t wsmuxmmap(dev_t, off_t, int); int wsmuxkqfilter(dev_t, struct knote *);






int svr4_netopen(dev_t, int, int, struct proc *); int svr4_netclose(dev_t, int, int, struct proc *); int svr4_netread(dev_t, struct uio *, int); int svr4_netwrite(dev_t, struct uio *, int); int svr4_netioctl(dev_t, u_long, caddr_t, int, struct proc *); int svr4_netstop(struct tty *, int); struct tty *svr4_nettty(dev_t); int svr4_netpoll(dev_t, int, struct proc *); paddr_t svr4_netmmap(dev_t, off_t, int); int svr4_netkqfilter(dev_t, struct knote *);

int ksymsopen(dev_t, int, int, struct proc *); int ksymsclose(dev_t, int, int, struct proc *); int ksymsread(dev_t, struct uio *, int); int ksymswrite(dev_t, struct uio *, int); int ksymsioctl(dev_t, u_long, caddr_t, int, struct proc *); int ksymsstop(struct tty *, int); struct tty *ksymstty(dev_t); int ksymspoll(dev_t, int, struct proc *); paddr_t ksymsmmap(dev_t, off_t, int); int ksymskqfilter(dev_t, struct knote *);

int cryptoopen(dev_t, int, int, struct proc *); int cryptoclose(dev_t, int, int, struct proc *); int cryptoread(dev_t, struct uio *, int); int cryptowrite(dev_t, struct uio *, int); int cryptoioctl(dev_t, u_long, caddr_t, int, struct proc *); int cryptostop(struct tty *, int); struct tty *cryptotty(dev_t); int cryptopoll(dev_t, int, struct proc *); paddr_t cryptommap(dev_t, off_t, int); int cryptokqfilter(dev_t, struct knote *);

int systraceopen(dev_t, int, int, struct proc *); int systraceclose(dev_t, int, int, struct proc *); int systraceread(dev_t, struct uio *, int); int systracewrite(dev_t, struct uio *, int); int systraceioctl(dev_t, u_long, caddr_t, int, struct proc *); int systracestop(struct tty *, int); struct tty *systracetty(dev_t); int systracepoll(dev_t, int, struct proc *); paddr_t systracemmap(dev_t, off_t, int); int systracekqfilter(dev_t, struct knote *);

int bioopen(dev_t, int, int, struct proc *); int bioclose(dev_t, int, int, struct proc *); int bioread(dev_t, struct uio *, int); int biowrite(dev_t, struct uio *, int); int bioioctl(dev_t, u_long, caddr_t, int, struct proc *); int biostop(struct tty *, int); struct tty *biotty(dev_t); int biopoll(dev_t, int, struct proc *); paddr_t biommap(dev_t, off_t, int); int biokqfilter(dev_t, struct knote *);

int gpropen(dev_t, int, int, struct proc *); int gprclose(dev_t, int, int, struct proc *); int gprread(dev_t, struct uio *, int); int gprwrite(dev_t, struct uio *, int); int gprioctl(dev_t, u_long, caddr_t, int, struct proc *); int gprstop(struct tty *, int); struct tty *gprtty(dev_t); int gprpoll(dev_t, int, struct proc *); paddr_t gprmmap(dev_t, off_t, int); int gprkqfilter(dev_t, struct knote *);
int bktropen(dev_t, int, int, struct proc *); int bktrclose(dev_t, int, int, struct proc *); int bktrread(dev_t, struct uio *, int); int bktrwrite(dev_t, struct uio *, int); int bktrioctl(dev_t, u_long, caddr_t, int, struct proc *); int bktrstop(struct tty *, int); struct tty *bktrtty(dev_t); int bktrpoll(dev_t, int, struct proc *); paddr_t bktrmmap(dev_t, off_t, int); int bktrkqfilter(dev_t, struct knote *);

int usbopen(dev_t, int, int, struct proc *); int usbclose(dev_t, int, int, struct proc *); int usbread(dev_t, struct uio *, int); int usbwrite(dev_t, struct uio *, int); int usbioctl(dev_t, u_long, caddr_t, int, struct proc *); int usbstop(struct tty *, int); struct tty *usbtty(dev_t); int usbpoll(dev_t, int, struct proc *); paddr_t usbmmap(dev_t, off_t, int); int usbkqfilter(dev_t, struct knote *);
int ugenopen(dev_t, int, int, struct proc *); int ugenclose(dev_t, int, int, struct proc *); int ugenread(dev_t, struct uio *, int); int ugenwrite(dev_t, struct uio *, int); int ugenioctl(dev_t, u_long, caddr_t, int, struct proc *); int ugenstop(struct tty *, int); struct tty *ugentty(dev_t); int ugenpoll(dev_t, int, struct proc *); paddr_t ugenmmap(dev_t, off_t, int); int ugenkqfilter(dev_t, struct knote *);
int uhidopen(dev_t, int, int, struct proc *); int uhidclose(dev_t, int, int, struct proc *); int uhidread(dev_t, struct uio *, int); int uhidwrite(dev_t, struct uio *, int); int uhidioctl(dev_t, u_long, caddr_t, int, struct proc *); int uhidstop(struct tty *, int); struct tty *uhidtty(dev_t); int uhidpoll(dev_t, int, struct proc *); paddr_t uhidmmap(dev_t, off_t, int); int uhidkqfilter(dev_t, struct knote *);
int ucomopen(dev_t, int, int, struct proc *); int ucomclose(dev_t, int, int, struct proc *); int ucomread(dev_t, struct uio *, int); int ucomwrite(dev_t, struct uio *, int); int ucomioctl(dev_t, u_long, caddr_t, int, struct proc *); int ucomstop(struct tty *, int); struct tty *ucomtty(dev_t); int ucompoll(dev_t, int, struct proc *); paddr_t ucommmap(dev_t, off_t, int); int ucomkqfilter(dev_t, struct knote *);
int ulptopen(dev_t, int, int, struct proc *); int ulptclose(dev_t, int, int, struct proc *); int ulptread(dev_t, struct uio *, int); int ulptwrite(dev_t, struct uio *, int); int ulptioctl(dev_t, u_long, caddr_t, int, struct proc *); int ulptstop(struct tty *, int); struct tty *ulpttty(dev_t); int ulptpoll(dev_t, int, struct proc *); paddr_t ulptmmap(dev_t, off_t, int); int ulptkqfilter(dev_t, struct knote *);
int uscanneropen(dev_t, int, int, struct proc *); int uscannerclose(dev_t, int, int, struct proc *); int uscannerread(dev_t, struct uio *, int); int uscannerwrite(dev_t, struct uio *, int); int uscannerioctl(dev_t, u_long, caddr_t, int, struct proc *); int uscannerstop(struct tty *, int); struct tty *uscannertty(dev_t); int uscannerpoll(dev_t, int, struct proc *); paddr_t uscannermmap(dev_t, off_t, int); int uscannerkqfilter(dev_t, struct knote *);
int urioopen(dev_t, int, int, struct proc *); int urioclose(dev_t, int, int, struct proc *); int urioread(dev_t, struct uio *, int); int uriowrite(dev_t, struct uio *, int); int urioioctl(dev_t, u_long, caddr_t, int, struct proc *); int uriostop(struct tty *, int); struct tty *uriotty(dev_t); int uriopoll(dev_t, int, struct proc *); paddr_t uriommap(dev_t, off_t, int); int uriokqfilter(dev_t, struct knote *);
# 48 "openbsd3/net/bpf.c" 2
# 1 "openbsd3/sys/vnode.h" 1
# 41 "openbsd3/sys/vnode.h"
# 1 "openbsd3/uvm/uvm_pglist.h" 1
# 47 "openbsd3/uvm/uvm_pglist.h"
struct pglist { struct vm_page *tqh_first; struct vm_page **tqh_last; };
# 57 "openbsd3/uvm/uvm_pglist.h"
struct pgfreelist {
 struct pglist pgfl_queues[2];
};
# 42 "openbsd3/sys/vnode.h" 2

# 1 "openbsd3/uvm/uvm.h" 1
# 41 "openbsd3/uvm/uvm.h"
# 1 "openbsd3/uvm/uvm_extern.h" 1
# 87 "openbsd3/uvm/uvm_extern.h"
typedef unsigned int uvm_flag_t;
typedef int vm_fault_t;

typedef int vm_inherit_t;
typedef off_t voff_t;

union vm_map_object;
typedef union vm_map_object vm_map_object_t;

struct vm_map_entry;
typedef struct vm_map_entry *vm_map_entry_t;

struct vm_map;
typedef struct vm_map *vm_map_t;

struct vm_page;
typedef struct vm_page *vm_page_t;
# 145 "openbsd3/uvm/uvm_extern.h"
typedef int vm_prot_t;
# 231 "openbsd3/uvm/uvm_extern.h"
struct buf;
struct core;
struct mount;
struct pglist;
struct proc;
struct ucred;
struct uio;
struct uvm_object;
struct vm_anon;
struct vm_aref;
struct vm_map;
struct vmspace;
struct pmap;
struct vnode;
struct pool;
struct simplelock;

typedef  struct pool   _GLOBAL_75_T; extern  _GLOBAL_75_T  * global_uvm_aiobuf_pool[NUM_STACKS];    






struct uvmexp {

 int pagesize;
 int pagemask;
 int pageshift;


 int npages;
 int free;
 int active;
 int inactive;
 int paging;
 int wired;

 int zeropages;
 int reserve_pagedaemon;
 int reserve_kernel;
 int anonpages;
 int vnodepages;
 int vtextpages;


 int freemin;
 int freetarg;
 int inactarg;
 int wiredmax;
 int anonmin;
 int vtextmin;
 int vnodemin;
 int anonminpct;
 int vtextminpct;
 int vnodeminpct;


 int nswapdev;
 int swpages;
 int swpginuse;
 int swpgonly;
 int nswget;
 int nanon;
 int nanonneeded;
 int nfreeanon;


 int faults;
 int traps;
 int intrs;
 int swtch;
 int softs;
 int syscalls;
 int pageins;

 int swapins;
 int swapouts;
 int pgswapin;
 int pgswapout;
 int forks;
 int forks_ppwait;
 int forks_sharevm;
 int pga_zerohit;

 int pga_zeromiss;

 int zeroaborts;



 int fltnoram;
 int fltnoanon;
 int fltpgwait;
 int fltpgrele;
 int fltrelck;
 int fltrelckok;
 int fltanget;
 int fltanretry;
 int fltamcopy;
 int fltnamap;
 int fltnomap;
 int fltlget;
 int fltget;
 int flt_anon;
 int flt_acow;
 int flt_obj;
 int flt_prcopy;
 int flt_przero;


 int pdwoke;
 int pdrevs;
 int pdswout;
 int pdfreed;
 int pdscans;
 int pdanscan;
 int pdobscan;
 int pdreact;
 int pdbusy;
 int pdpageouts;
 int pdpending;
 int pddeact;
 int pdreanon;
 int pdrevnode;
 int pdrevtext;


 struct uvm_object *kmem_object;
 struct uvm_object *mb_object;
};


typedef  struct uvmexp   _GLOBAL_76_T; extern  _GLOBAL_76_T  global_uvmexp[NUM_STACKS];    





# 1 "openbsd3/sys/vmmeter.h" 1
# 44 "openbsd3/sys/vmmeter.h"
struct vmtotal
{
 u_int16_t t_rq;
 u_int16_t t_dw;
 u_int16_t t_pw;
 u_int16_t t_sl;
 u_int16_t t_sw;
 u_int32_t t_vm;
 u_int32_t t_avm;
 u_int32_t t_rm;
 u_int32_t t_arm;
 u_int32_t t_vmshr;
 u_int32_t t_avmshr;
 u_int32_t t_rmshr;
 u_int32_t t_armshr;
 u_int32_t t_free;
};




struct forkstat
{
 int cntfork;
 int cntvfork;
 int cntrfork;
 int cntkthread;
 int sizfork;
 int sizvfork;
 int sizrfork;
 int sizkthread;
};
# 371 "openbsd3/uvm/uvm_extern.h" 2


# 1 "openbsd3/uvm/uvm_param.h" 1
# 71 "openbsd3/uvm/uvm_param.h"
# 1 "openbsd3/openbsd/usr/src/sys/arch/i386/compile/SAMSKERNEL/machine/vmparam.h" 1
# 127 "openbsd3/openbsd/usr/src/sys/arch/i386/compile/SAMSKERNEL/machine/vmparam.h"
struct pmap_physseg {
 struct pv_head *pvhead;
 char *attrs;
};
# 72 "openbsd3/uvm/uvm_param.h" 2




typedef int boolean_t;
# 132 "openbsd3/uvm/uvm_param.h"
struct _ps_strings {
 void *val;
};
# 166 "openbsd3/uvm/uvm_param.h"
typedef  psize_t  _GLOBAL_77_T; extern  _GLOBAL_77_T  global_mem_size[NUM_STACKS];   
# 374 "openbsd3/uvm/uvm_extern.h" 2

# 1 "openbsd3/uvm/uvm_page.h" 1
# 118 "openbsd3/uvm/uvm_page.h"
# 1 "openbsd3/uvm/uvm_extern.h" 1
# 119 "openbsd3/uvm/uvm_page.h" 2


struct vm_page {
 struct { struct vm_page *tqe_next; struct vm_page **tqe_prev; } pageq;

 struct { struct vm_page *tqe_next; struct vm_page **tqe_prev; } hashq;
 struct { struct vm_page *tqe_next; struct vm_page **tqe_prev; } listq;

 struct vm_anon *uanon;
 struct uvm_object *uobject;
 voff_t offset;

 u_short flags;
 u_short version;
 u_short wire_count;
 u_short pqflags;
 u_int loan_count;


 paddr_t phys_addr;
# 148 "openbsd3/uvm/uvm_page.h"
};
# 209 "openbsd3/uvm/uvm_page.h"
struct vm_physseg {
 paddr_t start;
 paddr_t end;
 paddr_t avail_start;
 paddr_t avail_end;
 int free_list;
 struct vm_page *pgs;
 struct vm_page *lastpg;

 struct pmap_physseg pmseg;

};







typedef  boolean_t  _GLOBAL_78_T; extern  _GLOBAL_78_T  global_vm_page_zero_enable[NUM_STACKS];   
# 246 "openbsd3/uvm/uvm_page.h"
typedef  struct pglist   _GLOBAL_79_T; extern  _GLOBAL_79_T  global_vm_page_queue_free[NUM_STACKS];    
typedef  struct pglist   _GLOBAL_80_T; extern  _GLOBAL_80_T  global_vm_page_queue_active[NUM_STACKS];    
typedef  struct pglist   _GLOBAL_81_T; extern  _GLOBAL_81_T  global_vm_page_queue_inactive[NUM_STACKS];    





extern struct vm_physseg vm_physmem[4];
typedef  int  _GLOBAL_82_T; extern  _GLOBAL_82_T  global_vm_nphysseg[NUM_STACKS];   
# 271 "openbsd3/uvm/uvm_page.h"
void uvm_page_init(vaddr_t *, vaddr_t *);




boolean_t uvm_page_physget(paddr_t *);

void uvm_page_rehash(void);
void uvm_pageidlezero(void);

 int uvm_lock_fpageq(void);
 void uvm_unlock_fpageq(int);

 void uvm_pageactivate(struct vm_page *);
vaddr_t uvm_pageboot_alloc(vsize_t);
 void uvm_pagecopy(struct vm_page *, struct vm_page *);
 void uvm_pagedeactivate(struct vm_page *);
void uvm_pagefree(struct vm_page *);
void uvm_page_unbusy(struct vm_page **, int);
 struct vm_page *uvm_pagelookup(struct uvm_object *, voff_t);
 void uvm_pageunwire(struct vm_page *);
 void uvm_pagewait(struct vm_page *, int);
 void uvm_pagewake(struct vm_page *);
 void uvm_pagewire(struct vm_page *);
 void uvm_pagezero(struct vm_page *);

 int uvm_page_lookup_freelist(struct vm_page *);

static struct vm_page *PHYS_TO_VM_PAGE(paddr_t);
static int vm_physseg_find(paddr_t, int *);
# 323 "openbsd3/uvm/uvm_page.h"
static __inline int
vm_physseg_find(pframe, offp)
 paddr_t pframe;
 int *offp;
{
# 340 "openbsd3/uvm/uvm_page.h"
 int start, len, try;
# 355 "openbsd3/uvm/uvm_page.h"
 for (start = 0, len = global_vm_nphysseg[get_stack_id()] ; len != 0 ; len = len / 2) {
  try = start + (len / 2);


  if (pframe >= vm_physmem[try].start) {

   if (pframe < vm_physmem[try].end) {
    if (offp)
     *offp = pframe - vm_physmem[try].start;
    return(try);
   }
   start = try + 1;
   len--;
  } else {




  }
 }
 return(-1);
# 392 "openbsd3/uvm/uvm_page.h"
}
# 405 "openbsd3/uvm/uvm_page.h"
static __inline struct vm_page *
PHYS_TO_VM_PAGE(pa)
 paddr_t pa;
{
 paddr_t pf = (((paddr_t)(pa)) >> 12);
 int off;
 int psi;

 psi = vm_physseg_find(pf, &off);
 if (psi != -1)
  return(&vm_physmem[psi].pgs[off]);
 return(0L);
}
# 376 "openbsd3/uvm/uvm_extern.h" 2
# 1 "openbsd3/uvm/uvm_pmap.h" 1
# 72 "openbsd3/uvm/uvm_pmap.h"
struct proc;







struct pmap_statistics {
 long resident_count;
 long wired_count;
};
typedef struct pmap_statistics *pmap_statistics_t;

# 1 "openbsd3/openbsd/usr/src/sys/arch/i386/compile/SAMSKERNEL/machine/pmap.h" 1
# 43 "openbsd3/openbsd/usr/src/sys/arch/i386/compile/SAMSKERNEL/machine/pmap.h"
# 1 "openbsd3/openbsd/usr/src/sys/arch/i386/compile/SAMSKERNEL/machine/cpufunc.h" 1
# 46 "openbsd3/openbsd/usr/src/sys/arch/i386/compile/SAMSKERNEL/machine/cpufunc.h"
static __inline void invlpg(u_int);
static __inline void lidt(void *);
static __inline void lldt(u_short);
static __inline void ltr(u_short);
static __inline void lcr0(u_int);
static __inline u_int rcr0(void);
static __inline u_int rcr2(void);
static __inline void lcr3(u_int);
static __inline u_int rcr3(void);
static __inline void lcr4(u_int);
static __inline u_int rcr4(void);
static __inline void tlbflush(void);
static __inline void disable_intr(void);
static __inline void enable_intr(void);
static __inline u_int read_eflags(void);
static __inline void write_eflags(u_int);
static __inline void wbinvd(void);
static __inline void wrmsr(u_int, u_int64_t);
static __inline u_int64_t rdmsr(u_int);
static __inline void breakpoint(void);

static __inline void
invlpg(u_int addr)
{
        __asm volatile("invlpg (%0)" : : "r" (addr) : "memory");
}

static __inline void
lidt(void *p)
{
 __asm volatile("lidt (%0)" : : "r" (p));
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

static __inline void
lcr0(u_int val)
{
 __asm volatile("movl %0,%%cr0" : : "r" (val));
}

static __inline u_int
rcr0(void)
{
 u_int val;
 __asm volatile("movl %%cr0,%0" : "=r" (val));
 return val;
}

static __inline u_int
rcr2(void)
{
 u_int val;
 __asm volatile("movl %%cr2,%0" : "=r" (val));
 return val;
}

static __inline void
lcr3(u_int val)
{
 __asm volatile("movl %0,%%cr3" : : "r" (val));
}

static __inline u_int
rcr3(void)
{
 u_int val;
 __asm volatile("movl %%cr3,%0" : "=r" (val));
 return val;
}

static __inline void
lcr4(u_int val)
{
 __asm volatile("movl %0,%%cr4" : : "r" (val));
}

static __inline u_int
rcr4(void)
{
 u_int val;
 __asm volatile("movl %%cr4,%0" : "=r" (val));
 return val;
}

static __inline void
tlbflush(void)
{
 u_int val;
 __asm volatile("movl %%cr3,%0" : "=r" (val));
 __asm volatile("movl %0,%%cr3" : : "r" (val));
}
# 156 "openbsd3/openbsd/usr/src/sys/arch/i386/compile/SAMSKERNEL/machine/cpufunc.h"
static __inline void
disable_intr(void)
{
 __asm volatile("cli");
}

static __inline void
enable_intr(void)
{
 __asm volatile("sti");
}

static __inline u_int
read_eflags(void)
{
 u_int ef;

 __asm volatile("pushfl; popl %0" : "=r" (ef));
 return (ef);
}

static __inline void
write_eflags(u_int ef)
{
 __asm volatile("pushl %0; popfl" : : "r" (ef));
}

static __inline void
wbinvd(void)
{
        __asm volatile("wbinvd");
}


static __inline void
wrmsr(u_int msr, u_int64_t newval)
{
        __asm volatile("wrmsr" : : "A" (newval), "c" (msr));
}

static __inline u_int64_t
rdmsr(u_int msr)
{
        u_int64_t rv;

        __asm volatile("rdmsr" : "=A" (rv) : "c" (msr));
        return (rv);
}


static __inline void
breakpoint(void)
{
 __asm volatile("int $3");
}
# 44 "openbsd3/openbsd/usr/src/sys/arch/i386/compile/SAMSKERNEL/machine/pmap.h" 2
# 1 "openbsd3/openbsd/usr/src/sys/arch/i386/compile/SAMSKERNEL/machine/pte.h" 1
# 137 "openbsd3/openbsd/usr/src/sys/arch/i386/compile/SAMSKERNEL/machine/pte.h"
typedef u_int32_t pd_entry_t;
typedef u_int32_t pt_entry_t;
# 45 "openbsd3/openbsd/usr/src/sys/arch/i386/compile/SAMSKERNEL/machine/pmap.h" 2


# 1 "openbsd3/uvm/uvm_object.h" 1
# 49 "openbsd3/uvm/uvm_object.h"
struct uvm_object {
 simple_lock_data_t vmobjlock;
 struct uvm_pagerops *pgops;
 struct pglist memq;
 int uo_npages;
 int uo_refs;
};
# 88 "openbsd3/uvm/uvm_object.h"
typedef  struct uvm_pagerops   _GLOBAL_83_T; extern  _GLOBAL_83_T  _GLOBAL_0_uvm_vnodeops_I; extern  _GLOBAL_83_T  _GLOBAL_1_uvm_vnodeops_I; extern  _GLOBAL_83_T  _GLOBAL_2_uvm_vnodeops_I; extern  _GLOBAL_83_T  _GLOBAL_3_uvm_vnodeops_I; extern  _GLOBAL_83_T  _GLOBAL_4_uvm_vnodeops_I; extern  _GLOBAL_83_T  _GLOBAL_5_uvm_vnodeops_I; extern  _GLOBAL_83_T  _GLOBAL_6_uvm_vnodeops_I; extern  _GLOBAL_83_T  _GLOBAL_7_uvm_vnodeops_I; extern  _GLOBAL_83_T  _GLOBAL_8_uvm_vnodeops_I; extern  _GLOBAL_83_T  _GLOBAL_9_uvm_vnodeops_I; extern  _GLOBAL_83_T  _GLOBAL_10_uvm_vnodeops_I; extern  _GLOBAL_83_T  _GLOBAL_11_uvm_vnodeops_I; extern  _GLOBAL_83_T  _GLOBAL_12_uvm_vnodeops_I; extern  _GLOBAL_83_T  _GLOBAL_13_uvm_vnodeops_I; extern  _GLOBAL_83_T  _GLOBAL_14_uvm_vnodeops_I; extern  _GLOBAL_83_T  _GLOBAL_15_uvm_vnodeops_I; extern  _GLOBAL_83_T  _GLOBAL_16_uvm_vnodeops_I; extern  _GLOBAL_83_T  _GLOBAL_17_uvm_vnodeops_I; extern  _GLOBAL_83_T  _GLOBAL_18_uvm_vnodeops_I; extern  _GLOBAL_83_T  _GLOBAL_19_uvm_vnodeops_I; extern  _GLOBAL_83_T  _GLOBAL_20_uvm_vnodeops_I; extern  _GLOBAL_83_T  _GLOBAL_21_uvm_vnodeops_I; extern  _GLOBAL_83_T  _GLOBAL_22_uvm_vnodeops_I; extern  _GLOBAL_83_T  _GLOBAL_23_uvm_vnodeops_I; extern  _GLOBAL_83_T  _GLOBAL_24_uvm_vnodeops_I; extern  _GLOBAL_83_T  _GLOBAL_25_uvm_vnodeops_I; extern  _GLOBAL_83_T  _GLOBAL_26_uvm_vnodeops_I; extern  _GLOBAL_83_T  _GLOBAL_27_uvm_vnodeops_I; extern  _GLOBAL_83_T  _GLOBAL_28_uvm_vnodeops_I; extern  _GLOBAL_83_T  _GLOBAL_29_uvm_vnodeops_I; extern  _GLOBAL_83_T  _GLOBAL_30_uvm_vnodeops_I; extern  _GLOBAL_83_T  _GLOBAL_31_uvm_vnodeops_I; extern  _GLOBAL_83_T  _GLOBAL_32_uvm_vnodeops_I; extern  _GLOBAL_83_T  _GLOBAL_33_uvm_vnodeops_I; extern  _GLOBAL_83_T  _GLOBAL_34_uvm_vnodeops_I; extern  _GLOBAL_83_T  _GLOBAL_35_uvm_vnodeops_I; extern  _GLOBAL_83_T  _GLOBAL_36_uvm_vnodeops_I; extern  _GLOBAL_83_T  _GLOBAL_37_uvm_vnodeops_I; extern  _GLOBAL_83_T  _GLOBAL_38_uvm_vnodeops_I; extern  _GLOBAL_83_T  _GLOBAL_39_uvm_vnodeops_I; extern  _GLOBAL_83_T  _GLOBAL_40_uvm_vnodeops_I; extern  _GLOBAL_83_T  _GLOBAL_41_uvm_vnodeops_I; extern  _GLOBAL_83_T  _GLOBAL_42_uvm_vnodeops_I; extern  _GLOBAL_83_T  _GLOBAL_43_uvm_vnodeops_I; extern  _GLOBAL_83_T  _GLOBAL_44_uvm_vnodeops_I; extern  _GLOBAL_83_T  _GLOBAL_45_uvm_vnodeops_I; extern  _GLOBAL_83_T  _GLOBAL_46_uvm_vnodeops_I; extern  _GLOBAL_83_T  _GLOBAL_47_uvm_vnodeops_I; extern  _GLOBAL_83_T  _GLOBAL_48_uvm_vnodeops_I; extern  _GLOBAL_83_T  _GLOBAL_49_uvm_vnodeops_I; static __attribute__ ((unused)) __typeof__(_GLOBAL_0_uvm_vnodeops_I) *_GLOBAL_uvm_vnodeops_24_A[NUM_STACKS];   
# 48 "openbsd3/openbsd/usr/src/sys/arch/i386/compile/SAMSKERNEL/machine/pmap.h" 2
# 244 "openbsd3/openbsd/usr/src/sys/arch/i386/compile/SAMSKERNEL/machine/pmap.h"
struct pmap;
typedef struct pmap *pmap_t;





struct pmap_head { struct pmap *lh_first; };
# 260 "openbsd3/openbsd/usr/src/sys/arch/i386/compile/SAMSKERNEL/machine/pmap.h"
struct pmap {
 struct uvm_object pm_obj;

 struct { struct pmap *le_next; struct pmap **le_prev; } pm_list;
 pd_entry_t *pm_pdir;
 u_int32_t pm_pdirpa;
 struct vm_page *pm_ptphint;
 struct pmap_statistics pm_stats;

 vaddr_t pm_hiexec;
 int pm_flags;

 union descriptor *pm_ldt;
 int pm_ldt_len;
 int pm_ldt_sel;
};
# 288 "openbsd3/openbsd/usr/src/sys/arch/i386/compile/SAMSKERNEL/machine/pmap.h"
struct pv_entry;

struct pv_head {
 struct simplelock pvh_lock;
 struct pv_entry *pvh_list;
};

struct pv_entry {
 struct pv_entry *pv_next;
 struct pmap *pv_pmap;
 vaddr_t pv_va;
 struct vm_page *pv_ptp;
};
# 309 "openbsd3/openbsd/usr/src/sys/arch/i386/compile/SAMSKERNEL/machine/pmap.h"
struct pv_page_info {
 struct { struct pv_page *tqe_next; struct pv_page **tqe_prev; } pvpi_list;
 struct pv_entry *pvpi_pvfree;
 int pvpi_nfree;
};
# 327 "openbsd3/openbsd/usr/src/sys/arch/i386/compile/SAMSKERNEL/machine/pmap.h"
struct pv_page {
 struct pv_page_info pvinfo;
 struct pv_entry pvents[(((1 << 12) - sizeof(struct pv_page_info)) / sizeof(struct pv_entry))];
};
# 339 "openbsd3/openbsd/usr/src/sys/arch/i386/compile/SAMSKERNEL/machine/pmap.h"
struct pmap_remove_record {
 int prr_npages;
 vaddr_t prr_vas[16];
};





extern pd_entry_t PTD[];


typedef  u_long  _GLOBAL_84_T; extern  _GLOBAL_84_T  global_PTDpaddr[NUM_STACKS];   

typedef  struct pmap   _GLOBAL_85_T; extern  _GLOBAL_85_T  global_kernel_pmap_store[NUM_STACKS];    
typedef  int  _GLOBAL_86_T; extern  _GLOBAL_86_T  global_nkpde[NUM_STACKS];   
typedef  int  _GLOBAL_87_T; extern  _GLOBAL_87_T  global_pmap_pg_g[NUM_STACKS];   
# 378 "openbsd3/openbsd/usr/src/sys/arch/i386/compile/SAMSKERNEL/machine/pmap.h"
void pmap_bootstrap(vaddr_t);
boolean_t pmap_change_attrs(struct vm_page *, int, int);
static void pmap_page_protect(struct vm_page *, vm_prot_t);
void pmap_page_remove(struct vm_page *);
static void pmap_protect(struct pmap *, vaddr_t,
    vaddr_t, vm_prot_t);
void pmap_remove(struct pmap *, vaddr_t, vaddr_t);
boolean_t pmap_test_attrs(struct vm_page *, int);
static void pmap_update_pg(vaddr_t);
static void pmap_update_2pg(vaddr_t,vaddr_t);
void pmap_write_protect(struct pmap *, vaddr_t,
    vaddr_t, vm_prot_t);
int pmap_exec_fixup(struct vm_map *, struct trapframe *,
      struct pcb *);

vaddr_t reserve_dumppages(vaddr_t);






boolean_t pmap_zero_page_uncached(paddr_t);
# 412 "openbsd3/openbsd/usr/src/sys/arch/i386/compile/SAMSKERNEL/machine/pmap.h"
__inline static void
pmap_update_pg(va)
 vaddr_t va;
{





  invlpg((u_int) va);
}





__inline static void
pmap_update_2pg(va, vb)
 vaddr_t va, vb;
{





 {
  invlpg((u_int) va);
  invlpg((u_int) vb);
 }
}
# 452 "openbsd3/openbsd/usr/src/sys/arch/i386/compile/SAMSKERNEL/machine/pmap.h"
__inline static void
pmap_page_protect(pg, prot)
 struct vm_page *pg;
 vm_prot_t prot;
{
 if ((prot & ((vm_prot_t) 0x02)) == 0) {
  if (prot & (((vm_prot_t) 0x01)|((vm_prot_t) 0x04))) {
   (void) pmap_change_attrs(pg, 0x00000000, 0x00000002);
  } else {
   pmap_page_remove(pg);
  }
 }
}
# 474 "openbsd3/openbsd/usr/src/sys/arch/i386/compile/SAMSKERNEL/machine/pmap.h"
__inline static void
pmap_protect(pmap, sva, eva, prot)
 struct pmap *pmap;
 vaddr_t sva, eva;
 vm_prot_t prot;
{
 if ((prot & ((vm_prot_t) 0x02)) == 0) {
  if (prot & (((vm_prot_t) 0x01)|((vm_prot_t) 0x04))) {
   pmap_write_protect(pmap, sva, eva, prot);
  } else {
   pmap_remove(pmap, sva, eva);
  }
 }
}


void pmap_ldt_cleanup(struct proc *);
# 87 "openbsd3/uvm/uvm_pmap.h" 2
# 98 "openbsd3/uvm/uvm_pmap.h"

void *pmap_bootstrap_alloc(int);

void pmap_activate(struct proc *);


void pmap_deactivate(struct proc *);


void pmap_unwire(pmap_t, vaddr_t);
# 118 "openbsd3/uvm/uvm_pmap.h"
void pmap_collect(pmap_t);





void pmap_copy_page(struct vm_page *, struct vm_page *);

struct pmap *pmap_create(void);
void pmap_destroy(pmap_t);
int pmap_enter(pmap_t,
      vaddr_t, paddr_t, vm_prot_t, int);
boolean_t pmap_extract(pmap_t, vaddr_t, paddr_t *);

vaddr_t pmap_growkernel(vaddr_t);


void pmap_init(void);

void pmap_kenter_pa(vaddr_t, paddr_t, vm_prot_t);
void pmap_kremove(vaddr_t, vsize_t);







void pmap_page_protect(struct vm_page *, vm_prot_t);




void pmap_protect(pmap_t,
      vaddr_t, vaddr_t, vm_prot_t);

void pmap_reference(pmap_t);


void pmap_remove(pmap_t, vaddr_t, vaddr_t);





void pmap_zero_page(struct vm_page *);


void pmap_virtual_space(vaddr_t *, vaddr_t *);





void pmap_fork(pmap_t, pmap_t);


# 377 "openbsd3/uvm/uvm_extern.h" 2
# 1 "openbsd3/uvm/uvm_map.h" 1
# 113 "openbsd3/uvm/uvm_map.h"
# 1 "openbsd3/uvm/uvm_anon.h" 1
# 51 "openbsd3/uvm/uvm_anon.h"
struct vm_anon {
 int an_ref;
 simple_lock_data_t an_lock;
 union {
  struct vm_anon *an_nxt;
  struct vm_page *an_page;
 } u;
 int an_swslot;


};
# 86 "openbsd3/uvm/uvm_anon.h"
struct vm_aref {
 int ar_pageoff;
 struct vm_amap *ar_amap;
};
# 102 "openbsd3/uvm/uvm_anon.h"
struct vm_anon *uvm_analloc(void);
void uvm_anfree(struct vm_anon *);
void uvm_anon_init(void);
int uvm_anon_add(int);
void uvm_anon_remove(int);
struct vm_page *uvm_anon_lockloanpg(struct vm_anon *);
void uvm_anon_dropswap(struct vm_anon *);
boolean_t anon_swap_off(int, int);
# 114 "openbsd3/uvm/uvm_map.h" 2
# 130 "openbsd3/uvm/uvm_map.h"
union vm_map_object {
 struct uvm_object *uvm_obj;
 struct vm_map *sub_map;
};







struct vm_map_entry {
 struct { struct vm_map_entry *rbe_left; struct vm_map_entry *rbe_right; struct vm_map_entry *rbe_parent; int rbe_color; } rb_entry;
 vaddr_t ownspace;
 vaddr_t space;
 struct vm_map_entry *prev;
 struct vm_map_entry *next;
 vaddr_t start;
 vaddr_t end;
 union vm_map_object object;
 voff_t offset;
 int etype;
 vm_prot_t protection;
 vm_prot_t max_protection;
 vm_inherit_t inheritance;
 int wired_count;
 struct vm_aref aref;
 int advice;

 u_int8_t flags;




};
# 220 "openbsd3/uvm/uvm_map.h"
struct vm_map {
 struct pmap * pmap;
 lock_data_t lock;
 struct uvm_tree { struct vm_map_entry *rbh_root; } rbhead;
 struct vm_map_entry header;
 int nentries;
 vsize_t size;
 int ref_count;
 simple_lock_data_t ref_lock;
 vm_map_entry_t hint;
 simple_lock_data_t hint_lock;
 vm_map_entry_t first_free;
 int flags;
 simple_lock_data_t flags_lock;
 unsigned int timestamp;


};
# 269 "openbsd3/uvm/uvm_map.h"
struct vm_map_intrsafe {
 struct vm_map vmi_map;
 struct { struct vm_map_intrsafe *le_next; struct vm_map_intrsafe **le_prev; } vmi_list;
};

struct vmi_list { struct vm_map_intrsafe *lh_first; };

typedef  simple_lock_data_t  _GLOBAL_88_T; extern  _GLOBAL_88_T  global_vmi_list_slock[NUM_STACKS];   
typedef  struct vmi_list   _GLOBAL_89_T; extern  _GLOBAL_89_T  global_vmi_list[NUM_STACKS];    

static __inline int vmi_list_lock(void);
static __inline void vmi_list_unlock(int);

static __inline int
vmi_list_lock()
{
 int s;

 s = splraise((0x20 + ((9) << 4)));
 ;
 return (s);
}

static __inline void
vmi_list_unlock(s)
 int s;
{

 ;
 splx(s);
}
# 319 "openbsd3/uvm/uvm_map.h"
typedef  vaddr_t  _GLOBAL_90_T; extern  _GLOBAL_90_T  global_uvm_maxkaddr[NUM_STACKS];   







void uvm_map_deallocate(vm_map_t);

int uvm_map_clean(vm_map_t, vaddr_t, vaddr_t, int);
void uvm_map_clip_start(vm_map_t, vm_map_entry_t, vaddr_t);
void uvm_map_clip_end(vm_map_t, vm_map_entry_t, vaddr_t);

vm_map_t uvm_map_create(pmap_t, vaddr_t, vaddr_t, int);
int uvm_map_extract(vm_map_t, vaddr_t, vsize_t,
   vm_map_t, vaddr_t *, int);
vm_map_entry_t uvm_map_findspace(vm_map_t, vaddr_t, vsize_t, vaddr_t *,
   struct uvm_object *, voff_t, vsize_t, int);
vaddr_t uvm_map_hint(struct proc *, vm_prot_t);
int uvm_map_inherit(vm_map_t, vaddr_t, vaddr_t, vm_inherit_t);
int uvm_map_advice(vm_map_t, vaddr_t, vaddr_t, int);
void uvm_map_init(void);
boolean_t uvm_map_lookup_entry(vm_map_t, vaddr_t, vm_map_entry_t *);

void uvm_map_reference(vm_map_t);
int uvm_map_replace(vm_map_t, vaddr_t, vaddr_t,
   vm_map_entry_t, int);
int uvm_map_reserve(vm_map_t, vsize_t, vaddr_t, vsize_t,
   vaddr_t *);
void uvm_map_setup(vm_map_t, vaddr_t, vaddr_t, int);
int uvm_map_submap(vm_map_t, vaddr_t, vaddr_t, vm_map_t);

void uvm_unmap(vm_map_t, vaddr_t, vaddr_t);
void uvm_unmap_detach(vm_map_entry_t,int);
void uvm_unmap_remove(vm_map_t, vaddr_t, vaddr_t,
          vm_map_entry_t *);
# 391 "openbsd3/uvm/uvm_map.h"
# 1 "openbsd3/sys/systm.h" 1
# 44 "openbsd3/sys/systm.h"
# 1 "openbsd3/sys/stdarg.h" 1
# 28 "openbsd3/sys/stdarg.h"
typedef __builtin_va_list __gnuc_va_list;
# 42 "openbsd3/sys/stdarg.h"
typedef __gnuc_va_list va_list;
# 45 "openbsd3/sys/systm.h" 2
# 73 "openbsd3/sys/systm.h"
typedef  int  _GLOBAL_91_T; extern  _GLOBAL_91_T  global_securelevel[NUM_STACKS];   
typedef  const char   _GLOBAL_92_T; extern  _GLOBAL_92_T  * global_panicstr[NUM_STACKS];    
typedef  const char   _GLOBAL_93_T; extern  _GLOBAL_93_T  _GLOBAL_0_version_I [ ] ; extern  _GLOBAL_93_T  _GLOBAL_1_version_I [ ] ; extern  _GLOBAL_93_T  _GLOBAL_2_version_I [ ] ; extern  _GLOBAL_93_T  _GLOBAL_3_version_I [ ] ; extern  _GLOBAL_93_T  _GLOBAL_4_version_I [ ] ; extern  _GLOBAL_93_T  _GLOBAL_5_version_I [ ] ; extern  _GLOBAL_93_T  _GLOBAL_6_version_I [ ] ; extern  _GLOBAL_93_T  _GLOBAL_7_version_I [ ] ; extern  _GLOBAL_93_T  _GLOBAL_8_version_I [ ] ; extern  _GLOBAL_93_T  _GLOBAL_9_version_I [ ] ; extern  _GLOBAL_93_T  _GLOBAL_10_version_I [ ] ; extern  _GLOBAL_93_T  _GLOBAL_11_version_I [ ] ; extern  _GLOBAL_93_T  _GLOBAL_12_version_I [ ] ; extern  _GLOBAL_93_T  _GLOBAL_13_version_I [ ] ; extern  _GLOBAL_93_T  _GLOBAL_14_version_I [ ] ; extern  _GLOBAL_93_T  _GLOBAL_15_version_I [ ] ; extern  _GLOBAL_93_T  _GLOBAL_16_version_I [ ] ; extern  _GLOBAL_93_T  _GLOBAL_17_version_I [ ] ; extern  _GLOBAL_93_T  _GLOBAL_18_version_I [ ] ; extern  _GLOBAL_93_T  _GLOBAL_19_version_I [ ] ; extern  _GLOBAL_93_T  _GLOBAL_20_version_I [ ] ; extern  _GLOBAL_93_T  _GLOBAL_21_version_I [ ] ; extern  _GLOBAL_93_T  _GLOBAL_22_version_I [ ] ; extern  _GLOBAL_93_T  _GLOBAL_23_version_I [ ] ; extern  _GLOBAL_93_T  _GLOBAL_24_version_I [ ] ; extern  _GLOBAL_93_T  _GLOBAL_25_version_I [ ] ; extern  _GLOBAL_93_T  _GLOBAL_26_version_I [ ] ; extern  _GLOBAL_93_T  _GLOBAL_27_version_I [ ] ; extern  _GLOBAL_93_T  _GLOBAL_28_version_I [ ] ; extern  _GLOBAL_93_T  _GLOBAL_29_version_I [ ] ; extern  _GLOBAL_93_T  _GLOBAL_30_version_I [ ] ; extern  _GLOBAL_93_T  _GLOBAL_31_version_I [ ] ; extern  _GLOBAL_93_T  _GLOBAL_32_version_I [ ] ; extern  _GLOBAL_93_T  _GLOBAL_33_version_I [ ] ; extern  _GLOBAL_93_T  _GLOBAL_34_version_I [ ] ; extern  _GLOBAL_93_T  _GLOBAL_35_version_I [ ] ; extern  _GLOBAL_93_T  _GLOBAL_36_version_I [ ] ; extern  _GLOBAL_93_T  _GLOBAL_37_version_I [ ] ; extern  _GLOBAL_93_T  _GLOBAL_38_version_I [ ] ; extern  _GLOBAL_93_T  _GLOBAL_39_version_I [ ] ; extern  _GLOBAL_93_T  _GLOBAL_40_version_I [ ] ; extern  _GLOBAL_93_T  _GLOBAL_41_version_I [ ] ; extern  _GLOBAL_93_T  _GLOBAL_42_version_I [ ] ; extern  _GLOBAL_93_T  _GLOBAL_43_version_I [ ] ; extern  _GLOBAL_93_T  _GLOBAL_44_version_I [ ] ; extern  _GLOBAL_93_T  _GLOBAL_45_version_I [ ] ; extern  _GLOBAL_93_T  _GLOBAL_46_version_I [ ] ; extern  _GLOBAL_93_T  _GLOBAL_47_version_I [ ] ; extern  _GLOBAL_93_T  _GLOBAL_48_version_I [ ] ; extern  _GLOBAL_93_T  _GLOBAL_49_version_I [ ] ; static __attribute__ ((unused)) __typeof__(_GLOBAL_0_version_I) *_GLOBAL_version_25_A[NUM_STACKS];   
typedef  const char   _GLOBAL_94_T; extern  _GLOBAL_94_T  _GLOBAL_0_copyright_I [ ] ; extern  _GLOBAL_94_T  _GLOBAL_1_copyright_I [ ] ; extern  _GLOBAL_94_T  _GLOBAL_2_copyright_I [ ] ; extern  _GLOBAL_94_T  _GLOBAL_3_copyright_I [ ] ; extern  _GLOBAL_94_T  _GLOBAL_4_copyright_I [ ] ; extern  _GLOBAL_94_T  _GLOBAL_5_copyright_I [ ] ; extern  _GLOBAL_94_T  _GLOBAL_6_copyright_I [ ] ; extern  _GLOBAL_94_T  _GLOBAL_7_copyright_I [ ] ; extern  _GLOBAL_94_T  _GLOBAL_8_copyright_I [ ] ; extern  _GLOBAL_94_T  _GLOBAL_9_copyright_I [ ] ; extern  _GLOBAL_94_T  _GLOBAL_10_copyright_I [ ] ; extern  _GLOBAL_94_T  _GLOBAL_11_copyright_I [ ] ; extern  _GLOBAL_94_T  _GLOBAL_12_copyright_I [ ] ; extern  _GLOBAL_94_T  _GLOBAL_13_copyright_I [ ] ; extern  _GLOBAL_94_T  _GLOBAL_14_copyright_I [ ] ; extern  _GLOBAL_94_T  _GLOBAL_15_copyright_I [ ] ; extern  _GLOBAL_94_T  _GLOBAL_16_copyright_I [ ] ; extern  _GLOBAL_94_T  _GLOBAL_17_copyright_I [ ] ; extern  _GLOBAL_94_T  _GLOBAL_18_copyright_I [ ] ; extern  _GLOBAL_94_T  _GLOBAL_19_copyright_I [ ] ; extern  _GLOBAL_94_T  _GLOBAL_20_copyright_I [ ] ; extern  _GLOBAL_94_T  _GLOBAL_21_copyright_I [ ] ; extern  _GLOBAL_94_T  _GLOBAL_22_copyright_I [ ] ; extern  _GLOBAL_94_T  _GLOBAL_23_copyright_I [ ] ; extern  _GLOBAL_94_T  _GLOBAL_24_copyright_I [ ] ; extern  _GLOBAL_94_T  _GLOBAL_25_copyright_I [ ] ; extern  _GLOBAL_94_T  _GLOBAL_26_copyright_I [ ] ; extern  _GLOBAL_94_T  _GLOBAL_27_copyright_I [ ] ; extern  _GLOBAL_94_T  _GLOBAL_28_copyright_I [ ] ; extern  _GLOBAL_94_T  _GLOBAL_29_copyright_I [ ] ; extern  _GLOBAL_94_T  _GLOBAL_30_copyright_I [ ] ; extern  _GLOBAL_94_T  _GLOBAL_31_copyright_I [ ] ; extern  _GLOBAL_94_T  _GLOBAL_32_copyright_I [ ] ; extern  _GLOBAL_94_T  _GLOBAL_33_copyright_I [ ] ; extern  _GLOBAL_94_T  _GLOBAL_34_copyright_I [ ] ; extern  _GLOBAL_94_T  _GLOBAL_35_copyright_I [ ] ; extern  _GLOBAL_94_T  _GLOBAL_36_copyright_I [ ] ; extern  _GLOBAL_94_T  _GLOBAL_37_copyright_I [ ] ; extern  _GLOBAL_94_T  _GLOBAL_38_copyright_I [ ] ; extern  _GLOBAL_94_T  _GLOBAL_39_copyright_I [ ] ; extern  _GLOBAL_94_T  _GLOBAL_40_copyright_I [ ] ; extern  _GLOBAL_94_T  _GLOBAL_41_copyright_I [ ] ; extern  _GLOBAL_94_T  _GLOBAL_42_copyright_I [ ] ; extern  _GLOBAL_94_T  _GLOBAL_43_copyright_I [ ] ; extern  _GLOBAL_94_T  _GLOBAL_44_copyright_I [ ] ; extern  _GLOBAL_94_T  _GLOBAL_45_copyright_I [ ] ; extern  _GLOBAL_94_T  _GLOBAL_46_copyright_I [ ] ; extern  _GLOBAL_94_T  _GLOBAL_47_copyright_I [ ] ; extern  _GLOBAL_94_T  _GLOBAL_48_copyright_I [ ] ; extern  _GLOBAL_94_T  _GLOBAL_49_copyright_I [ ] ; static __attribute__ ((unused)) __typeof__(_GLOBAL_0_copyright_I) *_GLOBAL_copyright_26_A[NUM_STACKS];   
typedef  const char   _GLOBAL_95_T; extern  _GLOBAL_95_T  _GLOBAL_0_ostype_I [ ] ; extern  _GLOBAL_95_T  _GLOBAL_1_ostype_I [ ] ; extern  _GLOBAL_95_T  _GLOBAL_2_ostype_I [ ] ; extern  _GLOBAL_95_T  _GLOBAL_3_ostype_I [ ] ; extern  _GLOBAL_95_T  _GLOBAL_4_ostype_I [ ] ; extern  _GLOBAL_95_T  _GLOBAL_5_ostype_I [ ] ; extern  _GLOBAL_95_T  _GLOBAL_6_ostype_I [ ] ; extern  _GLOBAL_95_T  _GLOBAL_7_ostype_I [ ] ; extern  _GLOBAL_95_T  _GLOBAL_8_ostype_I [ ] ; extern  _GLOBAL_95_T  _GLOBAL_9_ostype_I [ ] ; extern  _GLOBAL_95_T  _GLOBAL_10_ostype_I [ ] ; extern  _GLOBAL_95_T  _GLOBAL_11_ostype_I [ ] ; extern  _GLOBAL_95_T  _GLOBAL_12_ostype_I [ ] ; extern  _GLOBAL_95_T  _GLOBAL_13_ostype_I [ ] ; extern  _GLOBAL_95_T  _GLOBAL_14_ostype_I [ ] ; extern  _GLOBAL_95_T  _GLOBAL_15_ostype_I [ ] ; extern  _GLOBAL_95_T  _GLOBAL_16_ostype_I [ ] ; extern  _GLOBAL_95_T  _GLOBAL_17_ostype_I [ ] ; extern  _GLOBAL_95_T  _GLOBAL_18_ostype_I [ ] ; extern  _GLOBAL_95_T  _GLOBAL_19_ostype_I [ ] ; extern  _GLOBAL_95_T  _GLOBAL_20_ostype_I [ ] ; extern  _GLOBAL_95_T  _GLOBAL_21_ostype_I [ ] ; extern  _GLOBAL_95_T  _GLOBAL_22_ostype_I [ ] ; extern  _GLOBAL_95_T  _GLOBAL_23_ostype_I [ ] ; extern  _GLOBAL_95_T  _GLOBAL_24_ostype_I [ ] ; extern  _GLOBAL_95_T  _GLOBAL_25_ostype_I [ ] ; extern  _GLOBAL_95_T  _GLOBAL_26_ostype_I [ ] ; extern  _GLOBAL_95_T  _GLOBAL_27_ostype_I [ ] ; extern  _GLOBAL_95_T  _GLOBAL_28_ostype_I [ ] ; extern  _GLOBAL_95_T  _GLOBAL_29_ostype_I [ ] ; extern  _GLOBAL_95_T  _GLOBAL_30_ostype_I [ ] ; extern  _GLOBAL_95_T  _GLOBAL_31_ostype_I [ ] ; extern  _GLOBAL_95_T  _GLOBAL_32_ostype_I [ ] ; extern  _GLOBAL_95_T  _GLOBAL_33_ostype_I [ ] ; extern  _GLOBAL_95_T  _GLOBAL_34_ostype_I [ ] ; extern  _GLOBAL_95_T  _GLOBAL_35_ostype_I [ ] ; extern  _GLOBAL_95_T  _GLOBAL_36_ostype_I [ ] ; extern  _GLOBAL_95_T  _GLOBAL_37_ostype_I [ ] ; extern  _GLOBAL_95_T  _GLOBAL_38_ostype_I [ ] ; extern  _GLOBAL_95_T  _GLOBAL_39_ostype_I [ ] ; extern  _GLOBAL_95_T  _GLOBAL_40_ostype_I [ ] ; extern  _GLOBAL_95_T  _GLOBAL_41_ostype_I [ ] ; extern  _GLOBAL_95_T  _GLOBAL_42_ostype_I [ ] ; extern  _GLOBAL_95_T  _GLOBAL_43_ostype_I [ ] ; extern  _GLOBAL_95_T  _GLOBAL_44_ostype_I [ ] ; extern  _GLOBAL_95_T  _GLOBAL_45_ostype_I [ ] ; extern  _GLOBAL_95_T  _GLOBAL_46_ostype_I [ ] ; extern  _GLOBAL_95_T  _GLOBAL_47_ostype_I [ ] ; extern  _GLOBAL_95_T  _GLOBAL_48_ostype_I [ ] ; extern  _GLOBAL_95_T  _GLOBAL_49_ostype_I [ ] ; static __attribute__ ((unused)) __typeof__(_GLOBAL_0_ostype_I) *_GLOBAL_ostype_27_A[NUM_STACKS];   
typedef  const char   _GLOBAL_96_T; extern  _GLOBAL_96_T  _GLOBAL_0_osversion_I [ ] ; extern  _GLOBAL_96_T  _GLOBAL_1_osversion_I [ ] ; extern  _GLOBAL_96_T  _GLOBAL_2_osversion_I [ ] ; extern  _GLOBAL_96_T  _GLOBAL_3_osversion_I [ ] ; extern  _GLOBAL_96_T  _GLOBAL_4_osversion_I [ ] ; extern  _GLOBAL_96_T  _GLOBAL_5_osversion_I [ ] ; extern  _GLOBAL_96_T  _GLOBAL_6_osversion_I [ ] ; extern  _GLOBAL_96_T  _GLOBAL_7_osversion_I [ ] ; extern  _GLOBAL_96_T  _GLOBAL_8_osversion_I [ ] ; extern  _GLOBAL_96_T  _GLOBAL_9_osversion_I [ ] ; extern  _GLOBAL_96_T  _GLOBAL_10_osversion_I [ ] ; extern  _GLOBAL_96_T  _GLOBAL_11_osversion_I [ ] ; extern  _GLOBAL_96_T  _GLOBAL_12_osversion_I [ ] ; extern  _GLOBAL_96_T  _GLOBAL_13_osversion_I [ ] ; extern  _GLOBAL_96_T  _GLOBAL_14_osversion_I [ ] ; extern  _GLOBAL_96_T  _GLOBAL_15_osversion_I [ ] ; extern  _GLOBAL_96_T  _GLOBAL_16_osversion_I [ ] ; extern  _GLOBAL_96_T  _GLOBAL_17_osversion_I [ ] ; extern  _GLOBAL_96_T  _GLOBAL_18_osversion_I [ ] ; extern  _GLOBAL_96_T  _GLOBAL_19_osversion_I [ ] ; extern  _GLOBAL_96_T  _GLOBAL_20_osversion_I [ ] ; extern  _GLOBAL_96_T  _GLOBAL_21_osversion_I [ ] ; extern  _GLOBAL_96_T  _GLOBAL_22_osversion_I [ ] ; extern  _GLOBAL_96_T  _GLOBAL_23_osversion_I [ ] ; extern  _GLOBAL_96_T  _GLOBAL_24_osversion_I [ ] ; extern  _GLOBAL_96_T  _GLOBAL_25_osversion_I [ ] ; extern  _GLOBAL_96_T  _GLOBAL_26_osversion_I [ ] ; extern  _GLOBAL_96_T  _GLOBAL_27_osversion_I [ ] ; extern  _GLOBAL_96_T  _GLOBAL_28_osversion_I [ ] ; extern  _GLOBAL_96_T  _GLOBAL_29_osversion_I [ ] ; extern  _GLOBAL_96_T  _GLOBAL_30_osversion_I [ ] ; extern  _GLOBAL_96_T  _GLOBAL_31_osversion_I [ ] ; extern  _GLOBAL_96_T  _GLOBAL_32_osversion_I [ ] ; extern  _GLOBAL_96_T  _GLOBAL_33_osversion_I [ ] ; extern  _GLOBAL_96_T  _GLOBAL_34_osversion_I [ ] ; extern  _GLOBAL_96_T  _GLOBAL_35_osversion_I [ ] ; extern  _GLOBAL_96_T  _GLOBAL_36_osversion_I [ ] ; extern  _GLOBAL_96_T  _GLOBAL_37_osversion_I [ ] ; extern  _GLOBAL_96_T  _GLOBAL_38_osversion_I [ ] ; extern  _GLOBAL_96_T  _GLOBAL_39_osversion_I [ ] ; extern  _GLOBAL_96_T  _GLOBAL_40_osversion_I [ ] ; extern  _GLOBAL_96_T  _GLOBAL_41_osversion_I [ ] ; extern  _GLOBAL_96_T  _GLOBAL_42_osversion_I [ ] ; extern  _GLOBAL_96_T  _GLOBAL_43_osversion_I [ ] ; extern  _GLOBAL_96_T  _GLOBAL_44_osversion_I [ ] ; extern  _GLOBAL_96_T  _GLOBAL_45_osversion_I [ ] ; extern  _GLOBAL_96_T  _GLOBAL_46_osversion_I [ ] ; extern  _GLOBAL_96_T  _GLOBAL_47_osversion_I [ ] ; extern  _GLOBAL_96_T  _GLOBAL_48_osversion_I [ ] ; extern  _GLOBAL_96_T  _GLOBAL_49_osversion_I [ ] ; static __attribute__ ((unused)) __typeof__(_GLOBAL_0_osversion_I) *_GLOBAL_osversion_28_A[NUM_STACKS];   
typedef  const char   _GLOBAL_97_T; extern  _GLOBAL_97_T  _GLOBAL_0_osrelease_I [ ] ; extern  _GLOBAL_97_T  _GLOBAL_1_osrelease_I [ ] ; extern  _GLOBAL_97_T  _GLOBAL_2_osrelease_I [ ] ; extern  _GLOBAL_97_T  _GLOBAL_3_osrelease_I [ ] ; extern  _GLOBAL_97_T  _GLOBAL_4_osrelease_I [ ] ; extern  _GLOBAL_97_T  _GLOBAL_5_osrelease_I [ ] ; extern  _GLOBAL_97_T  _GLOBAL_6_osrelease_I [ ] ; extern  _GLOBAL_97_T  _GLOBAL_7_osrelease_I [ ] ; extern  _GLOBAL_97_T  _GLOBAL_8_osrelease_I [ ] ; extern  _GLOBAL_97_T  _GLOBAL_9_osrelease_I [ ] ; extern  _GLOBAL_97_T  _GLOBAL_10_osrelease_I [ ] ; extern  _GLOBAL_97_T  _GLOBAL_11_osrelease_I [ ] ; extern  _GLOBAL_97_T  _GLOBAL_12_osrelease_I [ ] ; extern  _GLOBAL_97_T  _GLOBAL_13_osrelease_I [ ] ; extern  _GLOBAL_97_T  _GLOBAL_14_osrelease_I [ ] ; extern  _GLOBAL_97_T  _GLOBAL_15_osrelease_I [ ] ; extern  _GLOBAL_97_T  _GLOBAL_16_osrelease_I [ ] ; extern  _GLOBAL_97_T  _GLOBAL_17_osrelease_I [ ] ; extern  _GLOBAL_97_T  _GLOBAL_18_osrelease_I [ ] ; extern  _GLOBAL_97_T  _GLOBAL_19_osrelease_I [ ] ; extern  _GLOBAL_97_T  _GLOBAL_20_osrelease_I [ ] ; extern  _GLOBAL_97_T  _GLOBAL_21_osrelease_I [ ] ; extern  _GLOBAL_97_T  _GLOBAL_22_osrelease_I [ ] ; extern  _GLOBAL_97_T  _GLOBAL_23_osrelease_I [ ] ; extern  _GLOBAL_97_T  _GLOBAL_24_osrelease_I [ ] ; extern  _GLOBAL_97_T  _GLOBAL_25_osrelease_I [ ] ; extern  _GLOBAL_97_T  _GLOBAL_26_osrelease_I [ ] ; extern  _GLOBAL_97_T  _GLOBAL_27_osrelease_I [ ] ; extern  _GLOBAL_97_T  _GLOBAL_28_osrelease_I [ ] ; extern  _GLOBAL_97_T  _GLOBAL_29_osrelease_I [ ] ; extern  _GLOBAL_97_T  _GLOBAL_30_osrelease_I [ ] ; extern  _GLOBAL_97_T  _GLOBAL_31_osrelease_I [ ] ; extern  _GLOBAL_97_T  _GLOBAL_32_osrelease_I [ ] ; extern  _GLOBAL_97_T  _GLOBAL_33_osrelease_I [ ] ; extern  _GLOBAL_97_T  _GLOBAL_34_osrelease_I [ ] ; extern  _GLOBAL_97_T  _GLOBAL_35_osrelease_I [ ] ; extern  _GLOBAL_97_T  _GLOBAL_36_osrelease_I [ ] ; extern  _GLOBAL_97_T  _GLOBAL_37_osrelease_I [ ] ; extern  _GLOBAL_97_T  _GLOBAL_38_osrelease_I [ ] ; extern  _GLOBAL_97_T  _GLOBAL_39_osrelease_I [ ] ; extern  _GLOBAL_97_T  _GLOBAL_40_osrelease_I [ ] ; extern  _GLOBAL_97_T  _GLOBAL_41_osrelease_I [ ] ; extern  _GLOBAL_97_T  _GLOBAL_42_osrelease_I [ ] ; extern  _GLOBAL_97_T  _GLOBAL_43_osrelease_I [ ] ; extern  _GLOBAL_97_T  _GLOBAL_44_osrelease_I [ ] ; extern  _GLOBAL_97_T  _GLOBAL_45_osrelease_I [ ] ; extern  _GLOBAL_97_T  _GLOBAL_46_osrelease_I [ ] ; extern  _GLOBAL_97_T  _GLOBAL_47_osrelease_I [ ] ; extern  _GLOBAL_97_T  _GLOBAL_48_osrelease_I [ ] ; extern  _GLOBAL_97_T  _GLOBAL_49_osrelease_I [ ] ; static __attribute__ ((unused)) __typeof__(_GLOBAL_0_osrelease_I) *_GLOBAL_osrelease_29_A[NUM_STACKS];   
typedef  int  _GLOBAL_98_T; extern  _GLOBAL_98_T  global_cold[NUM_STACKS];   

typedef  int  _GLOBAL_99_T; extern  _GLOBAL_99_T  global_nblkdev[NUM_STACKS];   
typedef  int  _GLOBAL_100_T; extern  _GLOBAL_100_T  global_nchrdev[NUM_STACKS];   

typedef  int  _GLOBAL_101_T; extern  _GLOBAL_101_T  global_selwait[NUM_STACKS];   

typedef  u_char  _GLOBAL_102_T; extern  _GLOBAL_102_T  global_curpriority[NUM_STACKS];   

typedef  int  _GLOBAL_103_T; extern  _GLOBAL_103_T  global_maxmem[NUM_STACKS];   
typedef  int  _GLOBAL_104_T; extern  _GLOBAL_104_T  global_physmem[NUM_STACKS];   

typedef  dev_t  _GLOBAL_105_T; extern  _GLOBAL_105_T  global_dumpdev[NUM_STACKS];   
typedef  long  _GLOBAL_106_T; extern  _GLOBAL_106_T  global_dumplo[NUM_STACKS];   

typedef  dev_t  _GLOBAL_107_T; extern  _GLOBAL_107_T  global_rootdev[NUM_STACKS];   
typedef  struct vnode   _GLOBAL_108_T; extern  _GLOBAL_108_T  * global_rootvp[NUM_STACKS];    

typedef  dev_t  _GLOBAL_109_T; extern  _GLOBAL_109_T  global_swapdev[NUM_STACKS];   
typedef  struct vnode   _GLOBAL_110_T; extern  _GLOBAL_110_T  * global_swapdev_vp[NUM_STACKS];    

struct proc;

typedef int sy_call_t(struct proc *, void *, register_t *);

typedef  struct sysent { short  sy_narg ;  short  sy_argsize ;   sy_call_t  * sy_call  ;   }   _GLOBAL_111_T; extern  _GLOBAL_111_T  _GLOBAL_0_sysent_I [ ] ; extern  _GLOBAL_111_T  _GLOBAL_1_sysent_I [ ] ; extern  _GLOBAL_111_T  _GLOBAL_2_sysent_I [ ] ; extern  _GLOBAL_111_T  _GLOBAL_3_sysent_I [ ] ; extern  _GLOBAL_111_T  _GLOBAL_4_sysent_I [ ] ; extern  _GLOBAL_111_T  _GLOBAL_5_sysent_I [ ] ; extern  _GLOBAL_111_T  _GLOBAL_6_sysent_I [ ] ; extern  _GLOBAL_111_T  _GLOBAL_7_sysent_I [ ] ; extern  _GLOBAL_111_T  _GLOBAL_8_sysent_I [ ] ; extern  _GLOBAL_111_T  _GLOBAL_9_sysent_I [ ] ; extern  _GLOBAL_111_T  _GLOBAL_10_sysent_I [ ] ; extern  _GLOBAL_111_T  _GLOBAL_11_sysent_I [ ] ; extern  _GLOBAL_111_T  _GLOBAL_12_sysent_I [ ] ; extern  _GLOBAL_111_T  _GLOBAL_13_sysent_I [ ] ; extern  _GLOBAL_111_T  _GLOBAL_14_sysent_I [ ] ; extern  _GLOBAL_111_T  _GLOBAL_15_sysent_I [ ] ; extern  _GLOBAL_111_T  _GLOBAL_16_sysent_I [ ] ; extern  _GLOBAL_111_T  _GLOBAL_17_sysent_I [ ] ; extern  _GLOBAL_111_T  _GLOBAL_18_sysent_I [ ] ; extern  _GLOBAL_111_T  _GLOBAL_19_sysent_I [ ] ; extern  _GLOBAL_111_T  _GLOBAL_20_sysent_I [ ] ; extern  _GLOBAL_111_T  _GLOBAL_21_sysent_I [ ] ; extern  _GLOBAL_111_T  _GLOBAL_22_sysent_I [ ] ; extern  _GLOBAL_111_T  _GLOBAL_23_sysent_I [ ] ; extern  _GLOBAL_111_T  _GLOBAL_24_sysent_I [ ] ; extern  _GLOBAL_111_T  _GLOBAL_25_sysent_I [ ] ; extern  _GLOBAL_111_T  _GLOBAL_26_sysent_I [ ] ; extern  _GLOBAL_111_T  _GLOBAL_27_sysent_I [ ] ; extern  _GLOBAL_111_T  _GLOBAL_28_sysent_I [ ] ; extern  _GLOBAL_111_T  _GLOBAL_29_sysent_I [ ] ; extern  _GLOBAL_111_T  _GLOBAL_30_sysent_I [ ] ; extern  _GLOBAL_111_T  _GLOBAL_31_sysent_I [ ] ; extern  _GLOBAL_111_T  _GLOBAL_32_sysent_I [ ] ; extern  _GLOBAL_111_T  _GLOBAL_33_sysent_I [ ] ; extern  _GLOBAL_111_T  _GLOBAL_34_sysent_I [ ] ; extern  _GLOBAL_111_T  _GLOBAL_35_sysent_I [ ] ; extern  _GLOBAL_111_T  _GLOBAL_36_sysent_I [ ] ; extern  _GLOBAL_111_T  _GLOBAL_37_sysent_I [ ] ; extern  _GLOBAL_111_T  _GLOBAL_38_sysent_I [ ] ; extern  _GLOBAL_111_T  _GLOBAL_39_sysent_I [ ] ; extern  _GLOBAL_111_T  _GLOBAL_40_sysent_I [ ] ; extern  _GLOBAL_111_T  _GLOBAL_41_sysent_I [ ] ; extern  _GLOBAL_111_T  _GLOBAL_42_sysent_I [ ] ; extern  _GLOBAL_111_T  _GLOBAL_43_sysent_I [ ] ; extern  _GLOBAL_111_T  _GLOBAL_44_sysent_I [ ] ; extern  _GLOBAL_111_T  _GLOBAL_45_sysent_I [ ] ; extern  _GLOBAL_111_T  _GLOBAL_46_sysent_I [ ] ; extern  _GLOBAL_111_T  _GLOBAL_47_sysent_I [ ] ; extern  _GLOBAL_111_T  _GLOBAL_48_sysent_I [ ] ; extern  _GLOBAL_111_T  _GLOBAL_49_sysent_I [ ] ; static __attribute__ ((unused)) __typeof__(_GLOBAL_0_sysent_I) *_GLOBAL_sysent_30_A[NUM_STACKS];   
  
  
  
 
# 123 "openbsd3/sys/systm.h"
typedef  int  _GLOBAL_112_T; extern  _GLOBAL_112_T  global_boothowto[NUM_STACKS];   

typedef  void   ( *_GLOBAL_114_T  )  ( int  ) ; extern  _GLOBAL_114_T global_v_putc[NUM_STACKS];   

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
typedef  int  _GLOBAL_115_T; extern  _GLOBAL_115_T  global_splassert_ctl[NUM_STACKS];   

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

typedef  struct hook_desc_head   _GLOBAL_116_T; extern  _GLOBAL_116_T  global_shutdownhook_list[NUM_STACKS]; extern  _GLOBAL_116_T  global_startuphook_list[NUM_STACKS];     

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
typedef  void   ( *_GLOBAL_118_T  )  ( void  ) ; extern  _GLOBAL_118_T global_md_diskconf[NUM_STACKS];   






int nfs_mountroot(void);
int dk_mountroot(void);
typedef  int   ( *_GLOBAL_120_T  )  ( void  ) ; extern  _GLOBAL_120_T global_mountroot[NUM_STACKS];   

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

typedef  u_int8_t const   _GLOBAL_121_T; extern  _GLOBAL_121_T  _GLOBAL_0___bcd2bin_I [ ] ; extern  _GLOBAL_121_T  _GLOBAL_1___bcd2bin_I [ ] ; extern  _GLOBAL_121_T  _GLOBAL_2___bcd2bin_I [ ] ; extern  _GLOBAL_121_T  _GLOBAL_3___bcd2bin_I [ ] ; extern  _GLOBAL_121_T  _GLOBAL_4___bcd2bin_I [ ] ; extern  _GLOBAL_121_T  _GLOBAL_5___bcd2bin_I [ ] ; extern  _GLOBAL_121_T  _GLOBAL_6___bcd2bin_I [ ] ; extern  _GLOBAL_121_T  _GLOBAL_7___bcd2bin_I [ ] ; extern  _GLOBAL_121_T  _GLOBAL_8___bcd2bin_I [ ] ; extern  _GLOBAL_121_T  _GLOBAL_9___bcd2bin_I [ ] ; extern  _GLOBAL_121_T  _GLOBAL_10___bcd2bin_I [ ] ; extern  _GLOBAL_121_T  _GLOBAL_11___bcd2bin_I [ ] ; extern  _GLOBAL_121_T  _GLOBAL_12___bcd2bin_I [ ] ; extern  _GLOBAL_121_T  _GLOBAL_13___bcd2bin_I [ ] ; extern  _GLOBAL_121_T  _GLOBAL_14___bcd2bin_I [ ] ; extern  _GLOBAL_121_T  _GLOBAL_15___bcd2bin_I [ ] ; extern  _GLOBAL_121_T  _GLOBAL_16___bcd2bin_I [ ] ; extern  _GLOBAL_121_T  _GLOBAL_17___bcd2bin_I [ ] ; extern  _GLOBAL_121_T  _GLOBAL_18___bcd2bin_I [ ] ; extern  _GLOBAL_121_T  _GLOBAL_19___bcd2bin_I [ ] ; extern  _GLOBAL_121_T  _GLOBAL_20___bcd2bin_I [ ] ; extern  _GLOBAL_121_T  _GLOBAL_21___bcd2bin_I [ ] ; extern  _GLOBAL_121_T  _GLOBAL_22___bcd2bin_I [ ] ; extern  _GLOBAL_121_T  _GLOBAL_23___bcd2bin_I [ ] ; extern  _GLOBAL_121_T  _GLOBAL_24___bcd2bin_I [ ] ; extern  _GLOBAL_121_T  _GLOBAL_25___bcd2bin_I [ ] ; extern  _GLOBAL_121_T  _GLOBAL_26___bcd2bin_I [ ] ; extern  _GLOBAL_121_T  _GLOBAL_27___bcd2bin_I [ ] ; extern  _GLOBAL_121_T  _GLOBAL_28___bcd2bin_I [ ] ; extern  _GLOBAL_121_T  _GLOBAL_29___bcd2bin_I [ ] ; extern  _GLOBAL_121_T  _GLOBAL_30___bcd2bin_I [ ] ; extern  _GLOBAL_121_T  _GLOBAL_31___bcd2bin_I [ ] ; extern  _GLOBAL_121_T  _GLOBAL_32___bcd2bin_I [ ] ; extern  _GLOBAL_121_T  _GLOBAL_33___bcd2bin_I [ ] ; extern  _GLOBAL_121_T  _GLOBAL_34___bcd2bin_I [ ] ; extern  _GLOBAL_121_T  _GLOBAL_35___bcd2bin_I [ ] ; extern  _GLOBAL_121_T  _GLOBAL_36___bcd2bin_I [ ] ; extern  _GLOBAL_121_T  _GLOBAL_37___bcd2bin_I [ ] ; extern  _GLOBAL_121_T  _GLOBAL_38___bcd2bin_I [ ] ; extern  _GLOBAL_121_T  _GLOBAL_39___bcd2bin_I [ ] ; extern  _GLOBAL_121_T  _GLOBAL_40___bcd2bin_I [ ] ; extern  _GLOBAL_121_T  _GLOBAL_41___bcd2bin_I [ ] ; extern  _GLOBAL_121_T  _GLOBAL_42___bcd2bin_I [ ] ; extern  _GLOBAL_121_T  _GLOBAL_43___bcd2bin_I [ ] ; extern  _GLOBAL_121_T  _GLOBAL_44___bcd2bin_I [ ] ; extern  _GLOBAL_121_T  _GLOBAL_45___bcd2bin_I [ ] ; extern  _GLOBAL_121_T  _GLOBAL_46___bcd2bin_I [ ] ; extern  _GLOBAL_121_T  _GLOBAL_47___bcd2bin_I [ ] ; extern  _GLOBAL_121_T  _GLOBAL_48___bcd2bin_I [ ] ; extern  _GLOBAL_121_T  _GLOBAL_49___bcd2bin_I [ ] ; static __attribute__ ((unused)) __typeof__(_GLOBAL_0___bcd2bin_I) *_GLOBAL___bcd2bin_31_A[NUM_STACKS];extern  _GLOBAL_121_T  _GLOBAL_0___bin2bcd_I [ ] ; extern  _GLOBAL_121_T  _GLOBAL_1___bin2bcd_I [ ] ; extern  _GLOBAL_121_T  _GLOBAL_2___bin2bcd_I [ ] ; extern  _GLOBAL_121_T  _GLOBAL_3___bin2bcd_I [ ] ; extern  _GLOBAL_121_T  _GLOBAL_4___bin2bcd_I [ ] ; extern  _GLOBAL_121_T  _GLOBAL_5___bin2bcd_I [ ] ; extern  _GLOBAL_121_T  _GLOBAL_6___bin2bcd_I [ ] ; extern  _GLOBAL_121_T  _GLOBAL_7___bin2bcd_I [ ] ; extern  _GLOBAL_121_T  _GLOBAL_8___bin2bcd_I [ ] ; extern  _GLOBAL_121_T  _GLOBAL_9___bin2bcd_I [ ] ; extern  _GLOBAL_121_T  _GLOBAL_10___bin2bcd_I [ ] ; extern  _GLOBAL_121_T  _GLOBAL_11___bin2bcd_I [ ] ; extern  _GLOBAL_121_T  _GLOBAL_12___bin2bcd_I [ ] ; extern  _GLOBAL_121_T  _GLOBAL_13___bin2bcd_I [ ] ; extern  _GLOBAL_121_T  _GLOBAL_14___bin2bcd_I [ ] ; extern  _GLOBAL_121_T  _GLOBAL_15___bin2bcd_I [ ] ; extern  _GLOBAL_121_T  _GLOBAL_16___bin2bcd_I [ ] ; extern  _GLOBAL_121_T  _GLOBAL_17___bin2bcd_I [ ] ; extern  _GLOBAL_121_T  _GLOBAL_18___bin2bcd_I [ ] ; extern  _GLOBAL_121_T  _GLOBAL_19___bin2bcd_I [ ] ; extern  _GLOBAL_121_T  _GLOBAL_20___bin2bcd_I [ ] ; extern  _GLOBAL_121_T  _GLOBAL_21___bin2bcd_I [ ] ; extern  _GLOBAL_121_T  _GLOBAL_22___bin2bcd_I [ ] ; extern  _GLOBAL_121_T  _GLOBAL_23___bin2bcd_I [ ] ; extern  _GLOBAL_121_T  _GLOBAL_24___bin2bcd_I [ ] ; extern  _GLOBAL_121_T  _GLOBAL_25___bin2bcd_I [ ] ; extern  _GLOBAL_121_T  _GLOBAL_26___bin2bcd_I [ ] ; extern  _GLOBAL_121_T  _GLOBAL_27___bin2bcd_I [ ] ; extern  _GLOBAL_121_T  _GLOBAL_28___bin2bcd_I [ ] ; extern  _GLOBAL_121_T  _GLOBAL_29___bin2bcd_I [ ] ; extern  _GLOBAL_121_T  _GLOBAL_30___bin2bcd_I [ ] ; extern  _GLOBAL_121_T  _GLOBAL_31___bin2bcd_I [ ] ; extern  _GLOBAL_121_T  _GLOBAL_32___bin2bcd_I [ ] ; extern  _GLOBAL_121_T  _GLOBAL_33___bin2bcd_I [ ] ; extern  _GLOBAL_121_T  _GLOBAL_34___bin2bcd_I [ ] ; extern  _GLOBAL_121_T  _GLOBAL_35___bin2bcd_I [ ] ; extern  _GLOBAL_121_T  _GLOBAL_36___bin2bcd_I [ ] ; extern  _GLOBAL_121_T  _GLOBAL_37___bin2bcd_I [ ] ; extern  _GLOBAL_121_T  _GLOBAL_38___bin2bcd_I [ ] ; extern  _GLOBAL_121_T  _GLOBAL_39___bin2bcd_I [ ] ; extern  _GLOBAL_121_T  _GLOBAL_40___bin2bcd_I [ ] ; extern  _GLOBAL_121_T  _GLOBAL_41___bin2bcd_I [ ] ; extern  _GLOBAL_121_T  _GLOBAL_42___bin2bcd_I [ ] ; extern  _GLOBAL_121_T  _GLOBAL_43___bin2bcd_I [ ] ; extern  _GLOBAL_121_T  _GLOBAL_44___bin2bcd_I [ ] ; extern  _GLOBAL_121_T  _GLOBAL_45___bin2bcd_I [ ] ; extern  _GLOBAL_121_T  _GLOBAL_46___bin2bcd_I [ ] ; extern  _GLOBAL_121_T  _GLOBAL_47___bin2bcd_I [ ] ; extern  _GLOBAL_121_T  _GLOBAL_48___bin2bcd_I [ ] ; extern  _GLOBAL_121_T  _GLOBAL_49___bin2bcd_I [ ] ; static __attribute__ ((unused)) __typeof__(_GLOBAL_0___bin2bcd_I) *_GLOBAL___bin2bcd_32_A[NUM_STACKS];    
# 285 "openbsd3/sys/systm.h" 2



void Debugger(void);
int read_symtab_from_file(struct proc *,struct vnode *,const char *);



void user_config(void);
# 392 "openbsd3/uvm/uvm_map.h" 2

static __inline boolean_t vm_map_lock_try(vm_map_t);
static __inline void vm_map_lock(vm_map_t);
extern const char vmmapbsy[];

static __inline boolean_t
vm_map_lock_try(map)
 vm_map_t map;
{
 boolean_t rv;

 if (map->flags & 0x02)
  rv = (1);
 else {
  ;
  if (map->flags & 0x08) {
   ;
   return (0);
  }
  rv = (lockmgr(&map->lock, 0x00000002|0x00000010|0x00100000,
      &map->flags_lock, global_curproc[get_stack_id()]) == 0);
 }

 if (rv)
  map->timestamp++;

 return (rv);
}

static __inline void
vm_map_lock(map)
 vm_map_t map;
{
 int error;

 if (map->flags & 0x02) {
  ;
  return;
 }

 try_again:
 ;
 while (map->flags & 0x08) {
  map->flags |= 0x10;
  ltsleep(&map->flags, 4, (char *)vmmapbsy, 0, &map->flags_lock);
 }

 error = lockmgr(&map->lock, 0x00000002|0x00000020|0x00100000,
     &map->flags_lock, global_curproc[get_stack_id()]);

 if (error) {
  goto try_again;
 }

 (map)->timestamp++;
}
# 378 "openbsd3/uvm/uvm_extern.h" 2
# 1 "openbsd3/uvm/uvm_fault.h" 1
# 59 "openbsd3/uvm/uvm_fault.h"
struct uvm_faultinfo {
 vm_map_t orig_map;
 vaddr_t orig_rvaddr;
 vsize_t orig_size;
 vm_map_t map;
 unsigned int mapv;
 vm_map_entry_t entry;
 vsize_t size;
};
# 76 "openbsd3/uvm/uvm_fault.h"
int uvmfault_anonget(struct uvm_faultinfo *, struct vm_amap *,
     struct vm_anon *);

int uvm_fault_wire(vm_map_t, vaddr_t, vaddr_t, vm_prot_t);
void uvm_fault_unwire(vm_map_t, vaddr_t, vaddr_t);
void uvm_fault_unwire_locked(vm_map_t, vaddr_t, vaddr_t);
# 379 "openbsd3/uvm/uvm_extern.h" 2
# 1 "openbsd3/uvm/uvm_pager.h" 1
# 85 "openbsd3/uvm/uvm_pager.h"
struct uvm_pagerops {

 void (*pgo_init)(void);

 void (*pgo_reference)(struct uvm_object *);

 void (*pgo_detach)(struct uvm_object *);

 int (*pgo_fault)(struct uvm_faultinfo *, vaddr_t,
     vm_page_t *, int, int, vm_fault_t,
     vm_prot_t, int);

 boolean_t (*pgo_flush)(struct uvm_object *, voff_t,
     voff_t, int);

 int (*pgo_get)(struct uvm_object *, voff_t,
     vm_page_t *, int *, int, vm_prot_t, int, int);

 int (*pgo_put)(struct uvm_object *, vm_page_t *,
     int, boolean_t);

 void (*pgo_cluster)(struct uvm_object *, voff_t,
     voff_t *, voff_t *);

 struct vm_page ** (*pgo_mk_pcluster)(struct uvm_object *,
     struct vm_page **, int *, struct vm_page *,
     int, voff_t, voff_t);

 boolean_t (*pgo_releasepg)(struct vm_page *, struct vm_page **);
};
# 152 "openbsd3/uvm/uvm_pager.h"
void uvm_pager_dropcluster(struct uvm_object *,
     struct vm_page *, struct vm_page **,
     int *, int);
void uvm_pager_init(void);
int uvm_pager_put(struct uvm_object *, struct vm_page *,
       struct vm_page ***, int *, int,
       voff_t, voff_t);

 struct vm_page *uvm_pageratop(vaddr_t);

vaddr_t uvm_pagermapin(struct vm_page **, int, int);
void uvm_pagermapout(vaddr_t, int);
struct vm_page **uvm_mk_pcluster(struct uvm_object *, struct vm_page **,
           int *, struct vm_page *, int,
           voff_t, voff_t);
int uvm_errno2vmerror(int);
# 380 "openbsd3/uvm/uvm_extern.h" 2






struct vmspace {
 struct vm_map vm_map;
 int vm_refcnt;
 caddr_t vm_shm;


 segsz_t vm_rssize;
 segsz_t vm_swrss;
 segsz_t vm_tsize;
 segsz_t vm_dsize;
 segsz_t vm_ssize;
 caddr_t vm_taddr;
 caddr_t vm_daddr;
 caddr_t vm_maxsaddr;
 caddr_t vm_minsaddr;
};






typedef  struct vm_map   _GLOBAL_122_T; extern  _GLOBAL_122_T  * global_exec_map[NUM_STACKS];    
typedef  struct vm_map   _GLOBAL_123_T; extern  _GLOBAL_123_T  * global_kernel_map[NUM_STACKS];    
typedef  struct vm_map   _GLOBAL_124_T; extern  _GLOBAL_124_T  * global_kmem_map[NUM_STACKS];    
typedef  struct vm_map   _GLOBAL_125_T; extern  _GLOBAL_125_T  * global_mb_map[NUM_STACKS];    
typedef  struct vm_map   _GLOBAL_126_T; extern  _GLOBAL_126_T  * global_phys_map[NUM_STACKS];    
# 432 "openbsd3/uvm/uvm_extern.h"
struct buf;
struct loadavg;
struct proc;
struct pmap;
struct vmspace;
struct vmtotal;
struct mount;
struct vnode;
struct core;




void vmapbuf(struct buf *, vsize_t);
void vunmapbuf(struct buf *, vsize_t);
void pagemove(caddr_t, caddr_t, size_t);




void cpu_swapout(struct proc *);

void cpu_fork(struct proc *, struct proc *, void *, size_t,
      void (*)(void *), void *);


struct uvm_object *uao_create(vsize_t, int);
void uao_detach(struct uvm_object *);
void uao_detach_locked(struct uvm_object *);
void uao_reference(struct uvm_object *);
void uao_reference_locked(struct uvm_object *);


int uvm_fault(vm_map_t, vaddr_t,
    vm_fault_t, vm_prot_t);






void uvm_fork(struct proc *, struct proc *, boolean_t,
       void *, size_t, void (*)(void *), void *);
void uvm_exit(struct proc *);
void uvm_init_limits(struct proc *);
boolean_t uvm_kernacc(caddr_t, size_t, int);
 __attribute__((__noreturn__)) void uvm_scheduler(void);
void uvm_swapin(struct proc *);
int uvm_vslock(struct proc *, caddr_t, size_t,
       vm_prot_t);
void uvm_vsunlock(struct proc *, caddr_t, size_t);



void uvm_init(void);



int uvm_io(vm_map_t, struct uio *);


vaddr_t uvm_km_alloc1(vm_map_t, vsize_t, boolean_t);
void uvm_km_free(vm_map_t, vaddr_t, vsize_t);
void uvm_km_free_wakeup(vm_map_t, vaddr_t,
      vsize_t);
vaddr_t uvm_km_kmemalloc(vm_map_t, struct uvm_object *,
      vsize_t, int);
struct vm_map *uvm_km_suballoc(vm_map_t, vaddr_t *,
    vaddr_t *, vsize_t, int,
    boolean_t, vm_map_t);
vaddr_t uvm_km_valloc(vm_map_t, vsize_t);
vaddr_t uvm_km_valloc_align(vm_map_t, vsize_t, vsize_t);
vaddr_t uvm_km_valloc_wait(vm_map_t, vsize_t);
vaddr_t uvm_km_valloc_prefer_wait(vm_map_t, vsize_t,
     voff_t);
vaddr_t uvm_km_alloc_poolpage1(vm_map_t,
    struct uvm_object *, boolean_t);
void uvm_km_free_poolpage1(vm_map_t, vaddr_t);






int uvm_map(vm_map_t, vaddr_t *, vsize_t,
    struct uvm_object *, voff_t, vsize_t,
    uvm_flag_t);
int uvm_map_pageable(vm_map_t, vaddr_t,
    vaddr_t, boolean_t, int);
int uvm_map_pageable_all(vm_map_t, int, vsize_t);
boolean_t uvm_map_checkprot(vm_map_t, vaddr_t,
    vaddr_t, vm_prot_t);
int uvm_map_protect(vm_map_t, vaddr_t,
    vaddr_t, vm_prot_t, boolean_t);
struct vmspace *uvmspace_alloc(vaddr_t, vaddr_t,
    boolean_t);
void uvmspace_init(struct vmspace *, struct pmap *,
    vaddr_t, vaddr_t, boolean_t);
void uvmspace_exec(struct proc *, vaddr_t, vaddr_t);
struct vmspace *uvmspace_fork(struct vmspace *);
void uvmspace_free(struct vmspace *);
void uvmspace_share(struct proc *, struct proc *);
void uvmspace_unshare(struct proc *);



void uvm_meter(void);
int uvm_sysctl(int *, u_int, void *, size_t *,
    void *, size_t, struct proc *);
void uvm_total(struct vmtotal *);


int uvm_mmap(vm_map_t, vaddr_t *, vsize_t,
    vm_prot_t, vm_prot_t, int,
    caddr_t, voff_t, vsize_t);


struct vm_page *uvm_pagealloc_strat(struct uvm_object *,
    voff_t, struct vm_anon *, int, int, int);



vaddr_t uvm_pagealloc_contig(vaddr_t, vaddr_t,
    vaddr_t, vaddr_t);
void uvm_pagerealloc(struct vm_page *,
          struct uvm_object *, voff_t);

void uvm_page_physload(paddr_t, paddr_t,
            paddr_t, paddr_t, int);
void uvm_setpagesize(void);


void uvm_aio_biodone1(struct buf *);
void uvm_aio_biodone(struct buf *);
void uvm_aio_aiodone(struct buf *);


void uvm_pageout(void *);
void uvm_aiodone_daemon(void *);


int uvm_pglistalloc(psize_t, paddr_t,
    paddr_t, paddr_t, paddr_t,
    struct pglist *, int, int);
void uvm_pglistfree(struct pglist *);


void uvm_swap_init(void);


int uvm_coredump(struct proc *, struct vnode *,
    struct ucred *, struct core *);
int uvm_grow(struct proc *, vaddr_t);


void uvm_deallocate(vm_map_t, vaddr_t, vsize_t);


void uvm_vnp_setsize(struct vnode *, voff_t);
void uvm_vnp_sync(struct mount *);
void uvm_vnp_terminate(struct vnode *);

boolean_t uvm_vnp_uncache(struct vnode *);
struct uvm_object *uvn_attach(void *, vm_prot_t);


void kmeminit_nkmempages(void);
void kmeminit(void);
typedef  int  _GLOBAL_127_T; extern  _GLOBAL_127_T  global_nkmempages[NUM_STACKS];   
# 42 "openbsd3/uvm/uvm.h" 2

# 1 "openbsd3/uvm/uvm_stat.h" 1
# 55 "openbsd3/uvm/uvm_stat.h"
struct uvm_cnt {
 int c;
 int t;
 struct uvm_cnt *next;
 char *name;
 void *p;
};



typedef  struct uvm_cnt   _GLOBAL_128_T; extern  _GLOBAL_128_T  * global_uvm_cnt_head[NUM_STACKS];    
# 100 "openbsd3/uvm/uvm_stat.h"
struct uvm_history_ent {
 struct timeval tv;
 char *fmt;
 size_t fmtlen;
 char *fn;
 size_t fnlen;
 u_long call;
 u_long v[4];
};

struct uvm_history {
 const char *name;
 size_t namelen;
 struct { struct uvm_history *le_next; struct uvm_history **le_prev; } list;
 int n;
 int f;
 simple_lock_data_t l;
 struct uvm_history_ent *e;
};

struct uvm_history_head { struct uvm_history *lh_first; };
# 44 "openbsd3/uvm/uvm.h" 2





# 1 "openbsd3/uvm/uvm_amap.h" 1
# 66 "openbsd3/uvm/uvm_amap.h"
struct vm_amap;
# 84 "openbsd3/uvm/uvm_amap.h"

void amap_add(struct vm_aref *, vaddr_t, struct vm_anon *, boolean_t);

struct vm_amap *amap_alloc(vaddr_t, vaddr_t, int);

void amap_copy(vm_map_t, vm_map_entry_t, int, boolean_t, vaddr_t,
      vaddr_t);

void amap_cow_now(vm_map_t, vm_map_entry_t);

void amap_extend(vm_map_entry_t, vsize_t);

int amap_flags(struct vm_amap *);

void amap_free(struct vm_amap *);

void amap_init(void);

void amap_lock(struct vm_amap *);

struct vm_anon *amap_lookup(struct vm_aref *, vaddr_t);

void amap_lookups(struct vm_aref *, vaddr_t, struct vm_anon **, int);

void amap_ref(struct vm_amap *, vaddr_t, vsize_t, int);

int amap_refs(struct vm_amap *);

void amap_share_protect(vm_map_entry_t, vm_prot_t);

void amap_splitref(struct vm_aref *, struct vm_aref *, vaddr_t);

void amap_unadd(struct vm_aref *, vaddr_t);

void amap_unlock(struct vm_amap *);

void amap_unref(struct vm_amap *, vaddr_t, vsize_t, int);

void amap_wipeout(struct vm_amap *);
# 152 "openbsd3/uvm/uvm_amap.h"
struct vm_amap {
 simple_lock_data_t am_l;
 int am_ref;
 int am_flags;
 int am_maxslot;
 int am_nslot;
 int am_nused;
 int *am_slots;
 int *am_bckptr;
 struct vm_anon **am_anon;

 int *am_ppref;

};
# 266 "openbsd3/uvm/uvm_amap.h"
void amap_pp_adjref(struct vm_amap *, int, vsize_t, int);

void amap_pp_establish(struct vm_amap *);

void amap_wiperange(struct vm_amap *, int, int);
# 50 "openbsd3/uvm/uvm.h" 2
# 1 "openbsd3/uvm/uvm_aobj.h" 1
# 68 "openbsd3/uvm/uvm_aobj.h"
void uao_init(void);
int uao_set_swslot(struct uvm_object *, int, int);
void uao_dropswap(struct uvm_object *, int);
int uao_swap_off(int, int);





typedef  struct uvm_pagerops   _GLOBAL_129_T; extern  _GLOBAL_129_T  global_aobj_pager[NUM_STACKS];    
# 51 "openbsd3/uvm/uvm.h" 2

# 1 "openbsd3/uvm/uvm_glue.h" 1
# 47 "openbsd3/uvm/uvm_glue.h"
void uvm_swapout_threads(void);
# 53 "openbsd3/uvm/uvm.h" 2
# 1 "openbsd3/uvm/uvm_km.h" 1
# 51 "openbsd3/uvm/uvm_km.h"
void uvm_km_init(vaddr_t, vaddr_t);
void uvm_km_pgremove(struct uvm_object *, vaddr_t, vaddr_t);
void uvm_km_pgremove_intrsafe(struct uvm_object *, vaddr_t, vaddr_t);
# 54 "openbsd3/uvm/uvm.h" 2
# 1 "openbsd3/uvm/uvm_loan.h" 1
# 54 "openbsd3/uvm/uvm_loan.h"
int uvm_loan(struct vm_map *, vaddr_t, vsize_t, void **, int);
void uvm_unloananon(struct vm_anon **, int);
void uvm_unloanpage(struct vm_page **, int);
# 55 "openbsd3/uvm/uvm.h" 2




# 1 "openbsd3/uvm/uvm_pdaemon.h" 1
# 83 "openbsd3/uvm/uvm_pdaemon.h"
void uvm_wait(const char *);
# 60 "openbsd3/uvm/uvm.h" 2
# 1 "openbsd3/uvm/uvm_swap.h" 1
# 41 "openbsd3/uvm/uvm_swap.h"
int uvm_swap_get(struct vm_page *, int, int);
int uvm_swap_put(int, struct vm_page **, int, int);
int uvm_swap_alloc(int *, boolean_t);
void uvm_swap_free(int, int);
void uvm_swap_markbad(int, int);

void uvm_swap_initcrypt_all(void);
void uvm_swap_freepages(struct vm_page **, int);
# 61 "openbsd3/uvm/uvm.h" 2

# 1 "openbsd3/uvm/uvm_swap_encrypt.h" 1
# 50 "openbsd3/uvm/uvm_swap_encrypt.h"
struct swap_key {
 u_int32_t key[4];
 u_int16_t refcount;
};

int swap_encrypt_ctl(int *, u_int, void *, size_t *, void *, size_t,
     struct proc *);

void swap_encrypt(struct swap_key *,caddr_t, caddr_t, u_int64_t, size_t);
void swap_decrypt(struct swap_key *,caddr_t, caddr_t, u_int64_t, size_t);

void swap_key_cleanup(struct swap_key *);
void swap_key_prepare(struct swap_key *, int);
# 74 "openbsd3/uvm/uvm_swap_encrypt.h"
void swap_key_create(struct swap_key *);
void swap_key_delete(struct swap_key *);

typedef  int  _GLOBAL_130_T; extern  _GLOBAL_130_T  global_uvm_doswapencrypt[NUM_STACKS];   
typedef  int  _GLOBAL_131_T; extern  _GLOBAL_131_T  global_uvm_swprekeyprint[NUM_STACKS];   
typedef  u_int  _GLOBAL_132_T; extern  _GLOBAL_132_T  global_uvm_swpkeyexpire[NUM_STACKS];   
typedef  int  _GLOBAL_133_T; extern  _GLOBAL_133_T  global_swap_encrypt_initialized[NUM_STACKS];   
# 63 "openbsd3/uvm/uvm.h" 2
# 75 "openbsd3/uvm/uvm.h"
struct uvm {



 struct pgfreelist page_free[2];
 struct pglist page_active;
 struct pglist page_inactive_swp;
 struct pglist page_inactive_obj;
 simple_lock_data_t pageqlock;
 simple_lock_data_t fpageqlock;
 boolean_t page_init_done;
 boolean_t page_idle_zero;



 int pagedaemon;
 struct proc *pagedaemon_proc;
 simple_lock_data_t pagedaemon_lock;


 int aiodoned;
 struct proc *aiodoned_proc;
 simple_lock_data_t aiodoned_lock;


 struct pglist *page_hash;
 int page_nhash;
 int page_hashmask;
 simple_lock_data_t hashlock;


 struct vm_anon *afree;
 simple_lock_data_t afreelock;


 vm_map_entry_t kentry_free;
 simple_lock_data_t kentry_lock;


 struct { struct buf *tqh_first; struct buf **tqh_last; } aio_done;


 vaddr_t pager_sva;
 vaddr_t pager_eva;


 simple_lock_data_t swap_data_lock;


 struct uvm_object *kernel_object;
};
# 146 "openbsd3/uvm/uvm.h"
typedef  struct uvm   _GLOBAL_134_T; extern  _GLOBAL_134_T  global_uvm[NUM_STACKS];    





;
;
# 180 "openbsd3/uvm/uvm.h"
# 1 "openbsd3/uvm/uvm_amap_i.h" 1
# 181 "openbsd3/uvm/uvm.h" 2
# 1 "openbsd3/uvm/uvm_fault_i.h" 1
# 44 "openbsd3/uvm/uvm_fault_i.h"
static boolean_t uvmfault_check_intrsafe(struct uvm_faultinfo *);
static boolean_t uvmfault_lookup(struct uvm_faultinfo *, boolean_t);
static boolean_t uvmfault_relock(struct uvm_faultinfo *);
static void uvmfault_unlockall(struct uvm_faultinfo *, struct vm_amap *,
               struct uvm_object *, struct vm_anon *);
static void uvmfault_unlockmaps(struct uvm_faultinfo *, boolean_t);





static __inline void
uvmfault_unlockmaps(ufi, write_locked)
 struct uvm_faultinfo *ufi;
 boolean_t write_locked;
{





 if (ufi == 0L) {
  return;
 }

 if (write_locked) {
  do { if ((ufi->map)->flags & 0x02) ; else (void) lockmgr(&(ufi->map)->lock, 0x00000006, 0L, global_curproc[get_stack_id()]);} while (0);
 } else {
  (void) lockmgr(&(ufi->map)->lock, 0x00000006, 0L, global_curproc[get_stack_id()]);
 }
}







static __inline void
uvmfault_unlockall(ufi, amap, uobj, anon)
 struct uvm_faultinfo *ufi;
 struct vm_amap *amap;
 struct uvm_object *uobj;
 struct vm_anon *anon;
{

 if (anon)
  ;
 if (uobj)
  ;
 if (amap)
  ;
 uvmfault_unlockmaps(ufi, 0);
}
# 108 "openbsd3/uvm/uvm_fault_i.h"
static __inline boolean_t
uvmfault_check_intrsafe(ufi)
 struct uvm_faultinfo *ufi;
{
 struct vm_map_intrsafe *vmi;
 int s;

 s = vmi_list_lock();
 for (vmi = ((&global_vmi_list[get_stack_id()])->lh_first); vmi != 0L;
      vmi = ((vmi)->vmi_list.le_next)) {
  if (ufi->orig_rvaddr >= ((&vmi->vmi_map)->header.start) &&
      ufi->orig_rvaddr < ((&vmi->vmi_map)->header.end))
   break;
 }
 vmi_list_unlock(s);

 if (vmi != 0L) {
  ufi->map = &vmi->vmi_map;
  return (1);
 }

 return (0);
}
# 147 "openbsd3/uvm/uvm_fault_i.h"
static __inline boolean_t
uvmfault_lookup(ufi, write_lock)
 struct uvm_faultinfo *ufi;
 boolean_t write_lock;
{
 vm_map_t tmpmap;





 ufi->map = ufi->orig_map;
 ufi->size = ufi->orig_size;






 while (1) {




  if (write_lock) {
   vm_map_lock(ufi->map);
  } else {
   do { if (ufi->map->flags & 0x02) panic("vm_map_lock_read: intrsafe map"); (void) lockmgr(&(ufi->map)->lock, 0x00000001, 0L, global_curproc[get_stack_id()]); } while (0);
  }




  if (!uvm_map_lookup_entry(ufi->map, ufi->orig_rvaddr,
        &ufi->entry)) {
   uvmfault_unlockmaps(ufi, write_lock);
   return(0);
  }




  if (ufi->entry->end - ufi->orig_rvaddr < ufi->size)
   ufi->size = ufi->entry->end - ufi->orig_rvaddr;





  if ((((ufi->entry)->etype & 0x02) != 0)) {
   tmpmap = ufi->entry->object.sub_map;
   if (write_lock) {
    do { if ((ufi->map)->flags & 0x02) ; else (void) lockmgr(&(ufi->map)->lock, 0x00000006, 0L, global_curproc[get_stack_id()]);} while (0);
   } else {
    (void) lockmgr(&(ufi->map)->lock, 0x00000006, 0L, global_curproc[get_stack_id()]);
   }
   ufi->map = tmpmap;
   continue;
  }





  ufi->mapv = ufi->map->timestamp;
  return(1);

 }


}
# 226 "openbsd3/uvm/uvm_fault_i.h"
static __inline boolean_t
uvmfault_relock(ufi)
 struct uvm_faultinfo *ufi;
{





 if (ufi == 0L) {
  return 1;
 }

 global_uvmexp[get_stack_id()].fltrelck++;






 do { if (ufi->map->flags & 0x02) panic("vm_map_lock_read: intrsafe map"); (void) lockmgr(&(ufi->map)->lock, 0x00000001, 0L, global_curproc[get_stack_id()]); } while (0);
 if (ufi->mapv != ufi->map->timestamp) {
  (void) lockmgr(&(ufi->map)->lock, 0x00000006, 0L, global_curproc[get_stack_id()]);
  return(0);
 }

 global_uvmexp[get_stack_id()].fltrelckok++;
 return(1);
}
# 182 "openbsd3/uvm/uvm.h" 2
# 1 "openbsd3/uvm/uvm_map_i.h" 1
# 183 "openbsd3/uvm/uvm.h" 2
# 1 "openbsd3/uvm/uvm_page_i.h" 1
# 184 "openbsd3/uvm/uvm.h" 2
# 1 "openbsd3/uvm/uvm_pager_i.h" 1
# 185 "openbsd3/uvm/uvm.h" 2
# 44 "openbsd3/sys/vnode.h" 2
# 1 "openbsd3/uvm/uvm_vnode.h" 1
# 53 "openbsd3/uvm/uvm_vnode.h"
struct uvm_vnode {
 struct uvm_object u_obj;
 int u_flags;
 int u_nio;
 voff_t u_size;


 struct { struct uvm_vnode *le_next; struct uvm_vnode **le_prev; } u_wlist;


 struct { struct uvm_vnode *sqe_next; } u_syncq;
};
# 45 "openbsd3/sys/vnode.h" 2
# 55 "openbsd3/sys/vnode.h"
enum vtype { VNON, VREG, VDIR, VBLK, VCHR, VLNK, VSOCK, VFIFO, VBAD };
# 65 "openbsd3/sys/vnode.h"
enum vtagtype {
 VT_NON, VT_UFS, VT_NFS, VT_MFS, VT_MSDOSFS, VT_LFS, VT_LOFS, VT_FDESC,
 VT_PORTAL, VT_NULL, VT_UMAP, VT_KERNFS, VT_PROCFS, VT_AFS, VT_ISOFS,
 VT_UNION, VT_ADOSFS, VT_EXT2FS, VT_NCPFS, VT_VFS, VT_XFS, VT_NTFS
};





struct buflists { struct buf *lh_first; };
# 85 "openbsd3/sys/vnode.h"
struct vnode {
 struct uvm_vnode v_uvm;
 int (**v_op)(void *);
 enum vtype v_type;
 u_int v_flag;
 u_int v_usecount;

 u_int v_writecount;

 u_int v_bioflag;
 u_int v_holdcnt;
 u_int v_id;
 struct mount *v_mount;
 struct { struct vnode *tqe_next; struct vnode **tqe_prev; } v_freelist;
 struct { struct vnode *le_next; struct vnode **le_prev; } v_mntvnodes;
 struct buflists v_cleanblkhd;
 struct buflists v_dirtyblkhd;
 u_int v_numoutput;
 struct { struct vnode *le_next; struct vnode **le_prev; } v_synclist;
 union {
  struct mount *vu_mountedhere;
  struct socket *vu_socket;
  struct specinfo *vu_specinfo;
  struct fifoinfo *vu_fifoinfo;
 } v_un;

 struct simplelock v_interlock;
 struct lock v_lock;
 struct lock *v_vnlock;
 enum vtagtype v_tag;
 void *v_data;
 struct {
  struct simplelock vsi_lock;
  struct selinfo vsi_selinfo;
 } v_selectinfo;
};
# 150 "openbsd3/sys/vnode.h"
struct vattr {
 enum vtype va_type;
 u_short va_mode;
 short va_nlink;
 uid_t va_uid;
 gid_t va_gid;
 long va_fsid;
 long va_fileid;
 u_quad_t va_size;
 long va_blocksize;
 struct timespec va_atime;
 struct timespec va_mtime;
 struct timespec va_ctime;
 u_long va_gen;
 u_long va_flags;
 dev_t va_rdev;
 u_quad_t va_bytes;
 u_quad_t va_filerev;
 u_int va_vaflags;
 long va_spare;
};
# 204 "openbsd3/sys/vnode.h"
struct e_vnode {
 struct vnode *vptr;
 struct vnode vnode;
};






typedef  enum vtype   _GLOBAL_135_T; extern  _GLOBAL_135_T  _GLOBAL_0_iftovt_tab_I [ ] ; extern  _GLOBAL_135_T  _GLOBAL_1_iftovt_tab_I [ ] ; extern  _GLOBAL_135_T  _GLOBAL_2_iftovt_tab_I [ ] ; extern  _GLOBAL_135_T  _GLOBAL_3_iftovt_tab_I [ ] ; extern  _GLOBAL_135_T  _GLOBAL_4_iftovt_tab_I [ ] ; extern  _GLOBAL_135_T  _GLOBAL_5_iftovt_tab_I [ ] ; extern  _GLOBAL_135_T  _GLOBAL_6_iftovt_tab_I [ ] ; extern  _GLOBAL_135_T  _GLOBAL_7_iftovt_tab_I [ ] ; extern  _GLOBAL_135_T  _GLOBAL_8_iftovt_tab_I [ ] ; extern  _GLOBAL_135_T  _GLOBAL_9_iftovt_tab_I [ ] ; extern  _GLOBAL_135_T  _GLOBAL_10_iftovt_tab_I [ ] ; extern  _GLOBAL_135_T  _GLOBAL_11_iftovt_tab_I [ ] ; extern  _GLOBAL_135_T  _GLOBAL_12_iftovt_tab_I [ ] ; extern  _GLOBAL_135_T  _GLOBAL_13_iftovt_tab_I [ ] ; extern  _GLOBAL_135_T  _GLOBAL_14_iftovt_tab_I [ ] ; extern  _GLOBAL_135_T  _GLOBAL_15_iftovt_tab_I [ ] ; extern  _GLOBAL_135_T  _GLOBAL_16_iftovt_tab_I [ ] ; extern  _GLOBAL_135_T  _GLOBAL_17_iftovt_tab_I [ ] ; extern  _GLOBAL_135_T  _GLOBAL_18_iftovt_tab_I [ ] ; extern  _GLOBAL_135_T  _GLOBAL_19_iftovt_tab_I [ ] ; extern  _GLOBAL_135_T  _GLOBAL_20_iftovt_tab_I [ ] ; extern  _GLOBAL_135_T  _GLOBAL_21_iftovt_tab_I [ ] ; extern  _GLOBAL_135_T  _GLOBAL_22_iftovt_tab_I [ ] ; extern  _GLOBAL_135_T  _GLOBAL_23_iftovt_tab_I [ ] ; extern  _GLOBAL_135_T  _GLOBAL_24_iftovt_tab_I [ ] ; extern  _GLOBAL_135_T  _GLOBAL_25_iftovt_tab_I [ ] ; extern  _GLOBAL_135_T  _GLOBAL_26_iftovt_tab_I [ ] ; extern  _GLOBAL_135_T  _GLOBAL_27_iftovt_tab_I [ ] ; extern  _GLOBAL_135_T  _GLOBAL_28_iftovt_tab_I [ ] ; extern  _GLOBAL_135_T  _GLOBAL_29_iftovt_tab_I [ ] ; extern  _GLOBAL_135_T  _GLOBAL_30_iftovt_tab_I [ ] ; extern  _GLOBAL_135_T  _GLOBAL_31_iftovt_tab_I [ ] ; extern  _GLOBAL_135_T  _GLOBAL_32_iftovt_tab_I [ ] ; extern  _GLOBAL_135_T  _GLOBAL_33_iftovt_tab_I [ ] ; extern  _GLOBAL_135_T  _GLOBAL_34_iftovt_tab_I [ ] ; extern  _GLOBAL_135_T  _GLOBAL_35_iftovt_tab_I [ ] ; extern  _GLOBAL_135_T  _GLOBAL_36_iftovt_tab_I [ ] ; extern  _GLOBAL_135_T  _GLOBAL_37_iftovt_tab_I [ ] ; extern  _GLOBAL_135_T  _GLOBAL_38_iftovt_tab_I [ ] ; extern  _GLOBAL_135_T  _GLOBAL_39_iftovt_tab_I [ ] ; extern  _GLOBAL_135_T  _GLOBAL_40_iftovt_tab_I [ ] ; extern  _GLOBAL_135_T  _GLOBAL_41_iftovt_tab_I [ ] ; extern  _GLOBAL_135_T  _GLOBAL_42_iftovt_tab_I [ ] ; extern  _GLOBAL_135_T  _GLOBAL_43_iftovt_tab_I [ ] ; extern  _GLOBAL_135_T  _GLOBAL_44_iftovt_tab_I [ ] ; extern  _GLOBAL_135_T  _GLOBAL_45_iftovt_tab_I [ ] ; extern  _GLOBAL_135_T  _GLOBAL_46_iftovt_tab_I [ ] ; extern  _GLOBAL_135_T  _GLOBAL_47_iftovt_tab_I [ ] ; extern  _GLOBAL_135_T  _GLOBAL_48_iftovt_tab_I [ ] ; extern  _GLOBAL_135_T  _GLOBAL_49_iftovt_tab_I [ ] ; static __attribute__ ((unused)) __typeof__(_GLOBAL_0_iftovt_tab_I) *_GLOBAL_iftovt_tab_33_A[NUM_STACKS];   
typedef  int  _GLOBAL_136_T; extern  _GLOBAL_136_T  _GLOBAL_0_vttoif_tab_I [ ] ; extern  _GLOBAL_136_T  _GLOBAL_1_vttoif_tab_I [ ] ; extern  _GLOBAL_136_T  _GLOBAL_2_vttoif_tab_I [ ] ; extern  _GLOBAL_136_T  _GLOBAL_3_vttoif_tab_I [ ] ; extern  _GLOBAL_136_T  _GLOBAL_4_vttoif_tab_I [ ] ; extern  _GLOBAL_136_T  _GLOBAL_5_vttoif_tab_I [ ] ; extern  _GLOBAL_136_T  _GLOBAL_6_vttoif_tab_I [ ] ; extern  _GLOBAL_136_T  _GLOBAL_7_vttoif_tab_I [ ] ; extern  _GLOBAL_136_T  _GLOBAL_8_vttoif_tab_I [ ] ; extern  _GLOBAL_136_T  _GLOBAL_9_vttoif_tab_I [ ] ; extern  _GLOBAL_136_T  _GLOBAL_10_vttoif_tab_I [ ] ; extern  _GLOBAL_136_T  _GLOBAL_11_vttoif_tab_I [ ] ; extern  _GLOBAL_136_T  _GLOBAL_12_vttoif_tab_I [ ] ; extern  _GLOBAL_136_T  _GLOBAL_13_vttoif_tab_I [ ] ; extern  _GLOBAL_136_T  _GLOBAL_14_vttoif_tab_I [ ] ; extern  _GLOBAL_136_T  _GLOBAL_15_vttoif_tab_I [ ] ; extern  _GLOBAL_136_T  _GLOBAL_16_vttoif_tab_I [ ] ; extern  _GLOBAL_136_T  _GLOBAL_17_vttoif_tab_I [ ] ; extern  _GLOBAL_136_T  _GLOBAL_18_vttoif_tab_I [ ] ; extern  _GLOBAL_136_T  _GLOBAL_19_vttoif_tab_I [ ] ; extern  _GLOBAL_136_T  _GLOBAL_20_vttoif_tab_I [ ] ; extern  _GLOBAL_136_T  _GLOBAL_21_vttoif_tab_I [ ] ; extern  _GLOBAL_136_T  _GLOBAL_22_vttoif_tab_I [ ] ; extern  _GLOBAL_136_T  _GLOBAL_23_vttoif_tab_I [ ] ; extern  _GLOBAL_136_T  _GLOBAL_24_vttoif_tab_I [ ] ; extern  _GLOBAL_136_T  _GLOBAL_25_vttoif_tab_I [ ] ; extern  _GLOBAL_136_T  _GLOBAL_26_vttoif_tab_I [ ] ; extern  _GLOBAL_136_T  _GLOBAL_27_vttoif_tab_I [ ] ; extern  _GLOBAL_136_T  _GLOBAL_28_vttoif_tab_I [ ] ; extern  _GLOBAL_136_T  _GLOBAL_29_vttoif_tab_I [ ] ; extern  _GLOBAL_136_T  _GLOBAL_30_vttoif_tab_I [ ] ; extern  _GLOBAL_136_T  _GLOBAL_31_vttoif_tab_I [ ] ; extern  _GLOBAL_136_T  _GLOBAL_32_vttoif_tab_I [ ] ; extern  _GLOBAL_136_T  _GLOBAL_33_vttoif_tab_I [ ] ; extern  _GLOBAL_136_T  _GLOBAL_34_vttoif_tab_I [ ] ; extern  _GLOBAL_136_T  _GLOBAL_35_vttoif_tab_I [ ] ; extern  _GLOBAL_136_T  _GLOBAL_36_vttoif_tab_I [ ] ; extern  _GLOBAL_136_T  _GLOBAL_37_vttoif_tab_I [ ] ; extern  _GLOBAL_136_T  _GLOBAL_38_vttoif_tab_I [ ] ; extern  _GLOBAL_136_T  _GLOBAL_39_vttoif_tab_I [ ] ; extern  _GLOBAL_136_T  _GLOBAL_40_vttoif_tab_I [ ] ; extern  _GLOBAL_136_T  _GLOBAL_41_vttoif_tab_I [ ] ; extern  _GLOBAL_136_T  _GLOBAL_42_vttoif_tab_I [ ] ; extern  _GLOBAL_136_T  _GLOBAL_43_vttoif_tab_I [ ] ; extern  _GLOBAL_136_T  _GLOBAL_44_vttoif_tab_I [ ] ; extern  _GLOBAL_136_T  _GLOBAL_45_vttoif_tab_I [ ] ; extern  _GLOBAL_136_T  _GLOBAL_46_vttoif_tab_I [ ] ; extern  _GLOBAL_136_T  _GLOBAL_47_vttoif_tab_I [ ] ; extern  _GLOBAL_136_T  _GLOBAL_48_vttoif_tab_I [ ] ; extern  _GLOBAL_136_T  _GLOBAL_49_vttoif_tab_I [ ] ; static __attribute__ ((unused)) __typeof__(_GLOBAL_0_vttoif_tab_I) *_GLOBAL_vttoif_tab_34_A[NUM_STACKS];  
# 233 "openbsd3/sys/vnode.h"
struct freelst { struct vnode *tqh_first; struct vnode **tqh_last; };
typedef  struct freelst   _GLOBAL_137_T; extern  _GLOBAL_137_T  global_vnode_hold_list[NUM_STACKS];    
typedef  struct freelst   _GLOBAL_138_T; extern  _GLOBAL_138_T  global_vnode_free_list[NUM_STACKS];    
typedef  struct simplelock   _GLOBAL_139_T; extern  _GLOBAL_139_T  global_vnode_free_list_slock[NUM_STACKS];    





void vref(struct vnode *);
# 263 "openbsd3/sys/vnode.h"
typedef  struct vnode   _GLOBAL_140_T; extern  _GLOBAL_140_T  * global_rootvnode[NUM_STACKS];    
typedef  int  _GLOBAL_141_T; extern  _GLOBAL_141_T  global_desiredvnodes[NUM_STACKS];   
typedef  time_t  _GLOBAL_142_T; extern  _GLOBAL_142_T  global_syncdelay[NUM_STACKS];   
typedef  int  _GLOBAL_143_T; extern  _GLOBAL_143_T  global_rushjob[NUM_STACKS];   
typedef  struct vattr   _GLOBAL_144_T; extern  _GLOBAL_144_T  global_va_null[NUM_STACKS];    
# 311 "openbsd3/sys/vnode.h"
struct vnodeop_desc {
 int vdesc_offset;
 char *vdesc_name;
 int vdesc_flags;







 int *vdesc_vp_offsets;
 int vdesc_vpp_offset;
 int vdesc_cred_offset;
 int vdesc_proc_offset;
 int vdesc_componentname_offset;





 caddr_t *vdesc_transports;
};





typedef  struct vnodeop_desc   _GLOBAL_145_T; extern  _GLOBAL_145_T  * _GLOBAL_0_vnodeop_descs_I [ ]  ; extern  _GLOBAL_145_T  * _GLOBAL_1_vnodeop_descs_I [ ]  ; extern  _GLOBAL_145_T  * _GLOBAL_2_vnodeop_descs_I [ ]  ; extern  _GLOBAL_145_T  * _GLOBAL_3_vnodeop_descs_I [ ]  ; extern  _GLOBAL_145_T  * _GLOBAL_4_vnodeop_descs_I [ ]  ; extern  _GLOBAL_145_T  * _GLOBAL_5_vnodeop_descs_I [ ]  ; extern  _GLOBAL_145_T  * _GLOBAL_6_vnodeop_descs_I [ ]  ; extern  _GLOBAL_145_T  * _GLOBAL_7_vnodeop_descs_I [ ]  ; extern  _GLOBAL_145_T  * _GLOBAL_8_vnodeop_descs_I [ ]  ; extern  _GLOBAL_145_T  * _GLOBAL_9_vnodeop_descs_I [ ]  ; extern  _GLOBAL_145_T  * _GLOBAL_10_vnodeop_descs_I [ ]  ; extern  _GLOBAL_145_T  * _GLOBAL_11_vnodeop_descs_I [ ]  ; extern  _GLOBAL_145_T  * _GLOBAL_12_vnodeop_descs_I [ ]  ; extern  _GLOBAL_145_T  * _GLOBAL_13_vnodeop_descs_I [ ]  ; extern  _GLOBAL_145_T  * _GLOBAL_14_vnodeop_descs_I [ ]  ; extern  _GLOBAL_145_T  * _GLOBAL_15_vnodeop_descs_I [ ]  ; extern  _GLOBAL_145_T  * _GLOBAL_16_vnodeop_descs_I [ ]  ; extern  _GLOBAL_145_T  * _GLOBAL_17_vnodeop_descs_I [ ]  ; extern  _GLOBAL_145_T  * _GLOBAL_18_vnodeop_descs_I [ ]  ; extern  _GLOBAL_145_T  * _GLOBAL_19_vnodeop_descs_I [ ]  ; extern  _GLOBAL_145_T  * _GLOBAL_20_vnodeop_descs_I [ ]  ; extern  _GLOBAL_145_T  * _GLOBAL_21_vnodeop_descs_I [ ]  ; extern  _GLOBAL_145_T  * _GLOBAL_22_vnodeop_descs_I [ ]  ; extern  _GLOBAL_145_T  * _GLOBAL_23_vnodeop_descs_I [ ]  ; extern  _GLOBAL_145_T  * _GLOBAL_24_vnodeop_descs_I [ ]  ; extern  _GLOBAL_145_T  * _GLOBAL_25_vnodeop_descs_I [ ]  ; extern  _GLOBAL_145_T  * _GLOBAL_26_vnodeop_descs_I [ ]  ; extern  _GLOBAL_145_T  * _GLOBAL_27_vnodeop_descs_I [ ]  ; extern  _GLOBAL_145_T  * _GLOBAL_28_vnodeop_descs_I [ ]  ; extern  _GLOBAL_145_T  * _GLOBAL_29_vnodeop_descs_I [ ]  ; extern  _GLOBAL_145_T  * _GLOBAL_30_vnodeop_descs_I [ ]  ; extern  _GLOBAL_145_T  * _GLOBAL_31_vnodeop_descs_I [ ]  ; extern  _GLOBAL_145_T  * _GLOBAL_32_vnodeop_descs_I [ ]  ; extern  _GLOBAL_145_T  * _GLOBAL_33_vnodeop_descs_I [ ]  ; extern  _GLOBAL_145_T  * _GLOBAL_34_vnodeop_descs_I [ ]  ; extern  _GLOBAL_145_T  * _GLOBAL_35_vnodeop_descs_I [ ]  ; extern  _GLOBAL_145_T  * _GLOBAL_36_vnodeop_descs_I [ ]  ; extern  _GLOBAL_145_T  * _GLOBAL_37_vnodeop_descs_I [ ]  ; extern  _GLOBAL_145_T  * _GLOBAL_38_vnodeop_descs_I [ ]  ; extern  _GLOBAL_145_T  * _GLOBAL_39_vnodeop_descs_I [ ]  ; extern  _GLOBAL_145_T  * _GLOBAL_40_vnodeop_descs_I [ ]  ; extern  _GLOBAL_145_T  * _GLOBAL_41_vnodeop_descs_I [ ]  ; extern  _GLOBAL_145_T  * _GLOBAL_42_vnodeop_descs_I [ ]  ; extern  _GLOBAL_145_T  * _GLOBAL_43_vnodeop_descs_I [ ]  ; extern  _GLOBAL_145_T  * _GLOBAL_44_vnodeop_descs_I [ ]  ; extern  _GLOBAL_145_T  * _GLOBAL_45_vnodeop_descs_I [ ]  ; extern  _GLOBAL_145_T  * _GLOBAL_46_vnodeop_descs_I [ ]  ; extern  _GLOBAL_145_T  * _GLOBAL_47_vnodeop_descs_I [ ]  ; extern  _GLOBAL_145_T  * _GLOBAL_48_vnodeop_descs_I [ ]  ; extern  _GLOBAL_145_T  * _GLOBAL_49_vnodeop_descs_I [ ]  ; static __attribute__ ((unused)) __typeof__(_GLOBAL_0_vnodeop_descs_I) *_GLOBAL_vnodeop_descs_35_A[NUM_STACKS];   





typedef  struct simplelock   _GLOBAL_146_T; extern  _GLOBAL_146_T  global_mntvnode_slock[NUM_STACKS];    
# 365 "openbsd3/sys/vnode.h"
struct vnodeopv_entry_desc {
 struct vnodeop_desc *opve_op;
 int (*opve_impl)(void *);
};
struct vnodeopv_desc {

 int (***opv_desc_vector_p)(void *);
 struct vnodeopv_entry_desc *opv_desc_ops;
};




int vn_default_error(void *);





struct vop_generic_args {
 struct vnodeop_desc *a_desc;

};
# 406 "openbsd3/sys/vnode.h"
# 1 "openbsd3/sys/vnode_if.h" 1
# 40 "openbsd3/sys/vnode_if.h"
typedef  struct vnodeop_desc   _GLOBAL_147_T; extern  _GLOBAL_147_T  global_vop_default_desc[NUM_STACKS];    

# 1 "openbsd3/sys/systm.h" 1
# 43 "openbsd3/sys/vnode_if.h" 2

struct vop_islocked_args {
 struct vnodeop_desc *a_desc;
 struct vnode *a_vp;
};
typedef  struct vnodeop_desc   _GLOBAL_148_T; extern  _GLOBAL_148_T  global_vop_islocked_desc[NUM_STACKS];    
int VOP_ISLOCKED(struct vnode *);

struct vop_lookup_args {
 struct vnodeop_desc *a_desc;
 struct vnode *a_dvp;
 struct vnode **a_vpp;
 struct componentname *a_cnp;
};
typedef  struct vnodeop_desc   _GLOBAL_149_T; extern  _GLOBAL_149_T  global_vop_lookup_desc[NUM_STACKS];    
int VOP_LOOKUP(struct vnode *, struct vnode **, struct componentname *);

struct vop_create_args {
 struct vnodeop_desc *a_desc;
 struct vnode *a_dvp;
 struct vnode **a_vpp;
 struct componentname *a_cnp;
 struct vattr *a_vap;
};
typedef  struct vnodeop_desc   _GLOBAL_150_T; extern  _GLOBAL_150_T  global_vop_create_desc[NUM_STACKS];    
int VOP_CREATE(struct vnode *, struct vnode **, struct componentname *,
    struct vattr *);

struct vop_mknod_args {
 struct vnodeop_desc *a_desc;
 struct vnode *a_dvp;
 struct vnode **a_vpp;
 struct componentname *a_cnp;
 struct vattr *a_vap;
};
typedef  struct vnodeop_desc   _GLOBAL_151_T; extern  _GLOBAL_151_T  global_vop_mknod_desc[NUM_STACKS];    
int VOP_MKNOD(struct vnode *, struct vnode **, struct componentname *,
    struct vattr *);

struct vop_open_args {
 struct vnodeop_desc *a_desc;
 struct vnode *a_vp;
 int a_mode;
 struct ucred *a_cred;
 struct proc *a_p;
};
typedef  struct vnodeop_desc   _GLOBAL_152_T; extern  _GLOBAL_152_T  global_vop_open_desc[NUM_STACKS];    
int VOP_OPEN(struct vnode *, int, struct ucred *, struct proc *);

struct vop_close_args {
 struct vnodeop_desc *a_desc;
 struct vnode *a_vp;
 int a_fflag;
 struct ucred *a_cred;
 struct proc *a_p;
};
typedef  struct vnodeop_desc   _GLOBAL_153_T; extern  _GLOBAL_153_T  global_vop_close_desc[NUM_STACKS];    
int VOP_CLOSE(struct vnode *, int, struct ucred *, struct proc *);

struct vop_access_args {
 struct vnodeop_desc *a_desc;
 struct vnode *a_vp;
 int a_mode;
 struct ucred *a_cred;
 struct proc *a_p;
};
typedef  struct vnodeop_desc   _GLOBAL_154_T; extern  _GLOBAL_154_T  global_vop_access_desc[NUM_STACKS];    
int VOP_ACCESS(struct vnode *, int, struct ucred *, struct proc *);

struct vop_getattr_args {
 struct vnodeop_desc *a_desc;
 struct vnode *a_vp;
 struct vattr *a_vap;
 struct ucred *a_cred;
 struct proc *a_p;
};
typedef  struct vnodeop_desc   _GLOBAL_155_T; extern  _GLOBAL_155_T  global_vop_getattr_desc[NUM_STACKS];    
int VOP_GETATTR(struct vnode *, struct vattr *, struct ucred *, struct proc *);

struct vop_setattr_args {
 struct vnodeop_desc *a_desc;
 struct vnode *a_vp;
 struct vattr *a_vap;
 struct ucred *a_cred;
 struct proc *a_p;
};
typedef  struct vnodeop_desc   _GLOBAL_156_T; extern  _GLOBAL_156_T  global_vop_setattr_desc[NUM_STACKS];    
int VOP_SETATTR(struct vnode *, struct vattr *, struct ucred *, struct proc *);

struct vop_read_args {
 struct vnodeop_desc *a_desc;
 struct vnode *a_vp;
 struct uio *a_uio;
 int a_ioflag;
 struct ucred *a_cred;
};
typedef  struct vnodeop_desc   _GLOBAL_157_T; extern  _GLOBAL_157_T  global_vop_read_desc[NUM_STACKS];    
int VOP_READ(struct vnode *, struct uio *, int, struct ucred *);

struct vop_write_args {
 struct vnodeop_desc *a_desc;
 struct vnode *a_vp;
 struct uio *a_uio;
 int a_ioflag;
 struct ucred *a_cred;
};
typedef  struct vnodeop_desc   _GLOBAL_158_T; extern  _GLOBAL_158_T  global_vop_write_desc[NUM_STACKS];    
int VOP_WRITE(struct vnode *, struct uio *, int, struct ucred *);

struct vop_lease_args {
 struct vnodeop_desc *a_desc;
 struct vnode *a_vp;
 struct proc *a_p;
 struct ucred *a_cred;
 int a_flag;
};
typedef  struct vnodeop_desc   _GLOBAL_159_T; extern  _GLOBAL_159_T  global_vop_lease_desc[NUM_STACKS];    
int VOP_LEASE(struct vnode *, struct proc *, struct ucred *, int);

struct vop_ioctl_args {
 struct vnodeop_desc *a_desc;
 struct vnode *a_vp;
 u_long a_command;
 void *a_data;
 int a_fflag;
 struct ucred *a_cred;
 struct proc *a_p;
};
typedef  struct vnodeop_desc   _GLOBAL_160_T; extern  _GLOBAL_160_T  global_vop_ioctl_desc[NUM_STACKS];    
int VOP_IOCTL(struct vnode *, u_long, void *, int, struct ucred *,
    struct proc *);

struct vop_poll_args {
 struct vnodeop_desc *a_desc;
 struct vnode *a_vp;
 int a_events;
 struct proc *a_p;
};
typedef  struct vnodeop_desc   _GLOBAL_161_T; extern  _GLOBAL_161_T  global_vop_poll_desc[NUM_STACKS];    
int VOP_POLL(struct vnode *, int, struct proc *);

struct vop_kqfilter_args {
 struct vnodeop_desc *a_desc;
 struct vnode *a_vp;
 struct knote *a_kn;
};
typedef  struct vnodeop_desc   _GLOBAL_162_T; extern  _GLOBAL_162_T  global_vop_kqfilter_desc[NUM_STACKS];    
int VOP_KQFILTER(struct vnode *, struct knote *);

struct vop_revoke_args {
 struct vnodeop_desc *a_desc;
 struct vnode *a_vp;
 int a_flags;
};
typedef  struct vnodeop_desc   _GLOBAL_163_T; extern  _GLOBAL_163_T  global_vop_revoke_desc[NUM_STACKS];    
int VOP_REVOKE(struct vnode *, int);

struct vop_fsync_args {
 struct vnodeop_desc *a_desc;
 struct vnode *a_vp;
 struct ucred *a_cred;
 int a_waitfor;
 struct proc *a_p;
};
typedef  struct vnodeop_desc   _GLOBAL_164_T; extern  _GLOBAL_164_T  global_vop_fsync_desc[NUM_STACKS];    
int VOP_FSYNC(struct vnode *, struct ucred *, int, struct proc *);

struct vop_remove_args {
 struct vnodeop_desc *a_desc;
 struct vnode *a_dvp;
 struct vnode *a_vp;
 struct componentname *a_cnp;
};
typedef  struct vnodeop_desc   _GLOBAL_165_T; extern  _GLOBAL_165_T  global_vop_remove_desc[NUM_STACKS];    
int VOP_REMOVE(struct vnode *, struct vnode *, struct componentname *);

struct vop_link_args {
 struct vnodeop_desc *a_desc;
 struct vnode *a_dvp;
 struct vnode *a_vp;
 struct componentname *a_cnp;
};
typedef  struct vnodeop_desc   _GLOBAL_166_T; extern  _GLOBAL_166_T  global_vop_link_desc[NUM_STACKS];    
int VOP_LINK(struct vnode *, struct vnode *, struct componentname *);

struct vop_rename_args {
 struct vnodeop_desc *a_desc;
 struct vnode *a_fdvp;
 struct vnode *a_fvp;
 struct componentname *a_fcnp;
 struct vnode *a_tdvp;
 struct vnode *a_tvp;
 struct componentname *a_tcnp;
};
typedef  struct vnodeop_desc   _GLOBAL_167_T; extern  _GLOBAL_167_T  global_vop_rename_desc[NUM_STACKS];    
int VOP_RENAME(struct vnode *, struct vnode *, struct componentname *,
    struct vnode *, struct vnode *, struct componentname *);

struct vop_mkdir_args {
 struct vnodeop_desc *a_desc;
 struct vnode *a_dvp;
 struct vnode **a_vpp;
 struct componentname *a_cnp;
 struct vattr *a_vap;
};
typedef  struct vnodeop_desc   _GLOBAL_168_T; extern  _GLOBAL_168_T  global_vop_mkdir_desc[NUM_STACKS];    
int VOP_MKDIR(struct vnode *, struct vnode **, struct componentname *,
    struct vattr *);

struct vop_rmdir_args {
 struct vnodeop_desc *a_desc;
 struct vnode *a_dvp;
 struct vnode *a_vp;
 struct componentname *a_cnp;
};
typedef  struct vnodeop_desc   _GLOBAL_169_T; extern  _GLOBAL_169_T  global_vop_rmdir_desc[NUM_STACKS];    
int VOP_RMDIR(struct vnode *, struct vnode *, struct componentname *);

struct vop_symlink_args {
 struct vnodeop_desc *a_desc;
 struct vnode *a_dvp;
 struct vnode **a_vpp;
 struct componentname *a_cnp;
 struct vattr *a_vap;
 char *a_target;
};
typedef  struct vnodeop_desc   _GLOBAL_170_T; extern  _GLOBAL_170_T  global_vop_symlink_desc[NUM_STACKS];    
int VOP_SYMLINK(struct vnode *, struct vnode **, struct componentname *,
    struct vattr *, char *);

struct vop_readdir_args {
 struct vnodeop_desc *a_desc;
 struct vnode *a_vp;
 struct uio *a_uio;
 struct ucred *a_cred;
 int *a_eofflag;
 int *a_ncookies;
 u_long **a_cookies;
};
typedef  struct vnodeop_desc   _GLOBAL_171_T; extern  _GLOBAL_171_T  global_vop_readdir_desc[NUM_STACKS];    
int VOP_READDIR(struct vnode *, struct uio *, struct ucred *, int *, int *,
    u_long **);

struct vop_readlink_args {
 struct vnodeop_desc *a_desc;
 struct vnode *a_vp;
 struct uio *a_uio;
 struct ucred *a_cred;
};
typedef  struct vnodeop_desc   _GLOBAL_172_T; extern  _GLOBAL_172_T  global_vop_readlink_desc[NUM_STACKS];    
int VOP_READLINK(struct vnode *, struct uio *, struct ucred *);

struct vop_abortop_args {
 struct vnodeop_desc *a_desc;
 struct vnode *a_dvp;
 struct componentname *a_cnp;
};
typedef  struct vnodeop_desc   _GLOBAL_173_T; extern  _GLOBAL_173_T  global_vop_abortop_desc[NUM_STACKS];    
int VOP_ABORTOP(struct vnode *, struct componentname *);

struct vop_inactive_args {
 struct vnodeop_desc *a_desc;
 struct vnode *a_vp;
 struct proc *a_p;
};
typedef  struct vnodeop_desc   _GLOBAL_174_T; extern  _GLOBAL_174_T  global_vop_inactive_desc[NUM_STACKS];    
int VOP_INACTIVE(struct vnode *, struct proc *);

struct vop_reclaim_args {
 struct vnodeop_desc *a_desc;
 struct vnode *a_vp;
 struct proc *a_p;
};
typedef  struct vnodeop_desc   _GLOBAL_175_T; extern  _GLOBAL_175_T  global_vop_reclaim_desc[NUM_STACKS];    
int VOP_RECLAIM(struct vnode *, struct proc *);

struct vop_lock_args {
 struct vnodeop_desc *a_desc;
 struct vnode *a_vp;
 int a_flags;
 struct proc *a_p;
};
typedef  struct vnodeop_desc   _GLOBAL_176_T; extern  _GLOBAL_176_T  global_vop_lock_desc[NUM_STACKS];    
int VOP_LOCK(struct vnode *, int, struct proc *);

struct vop_unlock_args {
 struct vnodeop_desc *a_desc;
 struct vnode *a_vp;
 int a_flags;
 struct proc *a_p;
};
typedef  struct vnodeop_desc   _GLOBAL_177_T; extern  _GLOBAL_177_T  global_vop_unlock_desc[NUM_STACKS];    
int VOP_UNLOCK(struct vnode *, int, struct proc *);

struct vop_bmap_args {
 struct vnodeop_desc *a_desc;
 struct vnode *a_vp;
 daddr_t a_bn;
 struct vnode **a_vpp;
 daddr_t *a_bnp;
 int *a_runp;
};
typedef  struct vnodeop_desc   _GLOBAL_178_T; extern  _GLOBAL_178_T  global_vop_bmap_desc[NUM_STACKS];    
int VOP_BMAP(struct vnode *, daddr_t, struct vnode **, daddr_t *, int *);

struct vop_print_args {
 struct vnodeop_desc *a_desc;
 struct vnode *a_vp;
};
typedef  struct vnodeop_desc   _GLOBAL_179_T; extern  _GLOBAL_179_T  global_vop_print_desc[NUM_STACKS];    
int VOP_PRINT(struct vnode *);

struct vop_pathconf_args {
 struct vnodeop_desc *a_desc;
 struct vnode *a_vp;
 int a_name;
 register_t *a_retval;
};
typedef  struct vnodeop_desc   _GLOBAL_180_T; extern  _GLOBAL_180_T  global_vop_pathconf_desc[NUM_STACKS];    
int VOP_PATHCONF(struct vnode *, int, register_t *);

struct vop_advlock_args {
 struct vnodeop_desc *a_desc;
 struct vnode *a_vp;
 void *a_id;
 int a_op;
 struct flock *a_fl;
 int a_flags;
};
typedef  struct vnodeop_desc   _GLOBAL_181_T; extern  _GLOBAL_181_T  global_vop_advlock_desc[NUM_STACKS];    
int VOP_ADVLOCK(struct vnode *, void *, int, struct flock *, int);

struct vop_reallocblks_args {
 struct vnodeop_desc *a_desc;
 struct vnode *a_vp;
 struct cluster_save *a_buflist;
};
typedef  struct vnodeop_desc   _GLOBAL_182_T; extern  _GLOBAL_182_T  global_vop_reallocblks_desc[NUM_STACKS];    
int VOP_REALLOCBLKS(struct vnode *, struct cluster_save *);

struct vop_whiteout_args {
 struct vnodeop_desc *a_desc;
 struct vnode *a_dvp;
 struct componentname *a_cnp;
 int a_flags;
};
typedef  struct vnodeop_desc   _GLOBAL_183_T; extern  _GLOBAL_183_T  global_vop_whiteout_desc[NUM_STACKS];    
int VOP_WHITEOUT(struct vnode *, struct componentname *, int);

struct vop_getextattr_args {
 struct vnodeop_desc *a_desc;
 struct vnode *a_vp;
 int a_attrnamespace;
 const char *a_name;
 struct uio *a_uio;
 size_t *a_size;
 struct ucred *a_cred;
 struct proc *a_p;
};
typedef  struct vnodeop_desc   _GLOBAL_184_T; extern  _GLOBAL_184_T  global_vop_getextattr_desc[NUM_STACKS];    
int VOP_GETEXTATTR(struct vnode *, int, const char *, struct uio *,
    size_t *, struct ucred *, struct proc *);

struct vop_setextattr_args {
 struct vnodeop_desc *a_desc;
 struct vnode *a_vp;
 int a_attrnamespace;
 const char *a_name;
 struct uio *a_uio;
 struct ucred *a_cred;
 struct proc *a_p;
};
typedef  struct vnodeop_desc   _GLOBAL_185_T; extern  _GLOBAL_185_T  global_vop_setextattr_desc[NUM_STACKS];    
int VOP_SETEXTATTR(struct vnode *, int, const char *, struct uio *,
    struct ucred *, struct proc *);


# 1 "openbsd3/sys/buf.h" 1
# 46 "openbsd3/sys/buf.h"
struct buf;
struct vnode;





struct workhead { struct worklist *lh_first; };







typedef  struct bio_ops { void  ( * io_start  )  ( struct buf   *  )  ;  void  ( * io_complete  )  ( struct buf   *  )  ;   void  ( * io_deallocate  )  ( struct buf   *  )  ;   void  ( * io_movedeps  )  ( struct buf   *  , struct buf   *   )  ;   int  ( * io_countdeps  )  ( struct buf   *  , int   , int   )  ;   }   _GLOBAL_186_T; extern  _GLOBAL_186_T  global_bioops[NUM_STACKS];    
    
    
    
       
      
 




struct buf {
 struct { struct buf *le_next; struct buf **le_prev; } b_hash;
 struct { struct buf *le_next; struct buf **le_prev; } b_vnbufs;
 struct { struct buf *tqe_next; struct buf **tqe_prev; } b_freelist;
 struct { struct buf *tqe_next; struct buf **tqe_prev; } b_synclist;
 long b_synctime;
 struct buf *b_actf, **b_actb;
 struct proc *b_proc;
 volatile long b_flags;
 int b_error;
 long b_bufsize;
 long b_bcount;
 size_t b_resid;
 dev_t b_dev;
 struct {
  caddr_t b_addr;
 } b_un;
 void *b_saveaddr;
 daddr_t b_lblkno;
 daddr_t b_blkno;


 void (*b_iodone)(struct buf *);
 struct vnode *b_vp;
 int b_dirtyoff;
 int b_dirtyend;
 int b_validoff;
 int b_validend;
  struct workhead b_dep;
};





struct bufq {
 void (*bufq_free)(struct bufq *);
 void (*bufq_add)(struct bufq *, struct buf *);
 struct buf *(*bufq_get)(struct bufq *);
};

struct bufq_default {
 struct bufq bufq;
 struct buf bufq_head[3];
};






struct bufq *bufq_default_alloc(void);
void bufq_default_free(struct bufq *);
void bufq_default_add(struct bufq *, struct buf *);
struct buf *bufq_default_get(struct bufq *);
# 179 "openbsd3/sys/buf.h"
struct cluster_save {
 long bs_bcount;
 long bs_bufsize;
 void *bs_saveaddr;
 int bs_nchildren;
 struct buf **bs_children;
};
# 200 "openbsd3/sys/buf.h"
struct cluster_info {
 daddr_t ci_lastr;
 daddr_t ci_lastw;
 daddr_t ci_cstart;
 daddr_t ci_lasta;
 int ci_clen;
 int ci_ralen;
 daddr_t ci_maxra;
};



typedef  int  _GLOBAL_187_T; extern  _GLOBAL_187_T  global_nbuf[NUM_STACKS];   
typedef  struct buf   _GLOBAL_188_T; extern  _GLOBAL_188_T  * global_buf[NUM_STACKS];    
typedef  char  _GLOBAL_189_T; extern  _GLOBAL_189_T  * global_buffers[NUM_STACKS];   
typedef  int  _GLOBAL_190_T; extern  _GLOBAL_190_T  global_bufpages[NUM_STACKS];   

typedef  struct pool   _GLOBAL_191_T; extern  _GLOBAL_191_T  global_bufpool[NUM_STACKS];    

void allocbuf(struct buf *, int);
void bawrite(struct buf *);
void bdwrite(struct buf *);
void biodone(struct buf *);
int biowait(struct buf *);
int bread(struct vnode *, daddr_t, int,
     struct ucred *, struct buf **);
int breada(struct vnode *, daddr_t, int, daddr_t, int,
      struct ucred *, struct buf **);
int breadn(struct vnode *, daddr_t, int, daddr_t *, int *, int,
      struct ucred *, struct buf **);
void brelse(struct buf *);
void bremfree(struct buf *);
void bufinit(void);
void buf_dirty(struct buf *);
void buf_undirty(struct buf *);
int bwrite(struct buf *);
struct buf *getblk(struct vnode *, daddr_t, int, int, int);
struct buf *geteblk(int);
struct buf *incore(struct vnode *, daddr_t);

void minphys(struct buf *bp);
int physio(void (*strategy)(struct buf *), struct buf *bp, dev_t dev,
     int flags, void (*minphys)(struct buf *), struct uio *uio);
void brelvp(struct buf *);
void reassignbuf(struct buf *);
void bgetvp(struct vnode *, struct buf *);

void buf_replacevnode(struct buf *, struct vnode *);
void buf_daemon(struct proc *);





static __inline void
buf_start(struct buf *bp)
{
 if (global_bioops[get_stack_id()].io_start)
  (*global_bioops[get_stack_id()].io_start)(bp);
}

static __inline void
buf_complete(struct buf *bp)
{
 if (global_bioops[get_stack_id()].io_complete)
  (*global_bioops[get_stack_id()].io_complete)(bp);
}

static __inline void
buf_deallocate(struct buf *bp)
{
 if (global_bioops[get_stack_id()].io_deallocate)
  (*global_bioops[get_stack_id()].io_deallocate)(bp);
}

static __inline void
buf_movedeps(struct buf *bp, struct buf *bp2)
{
 if (global_bioops[get_stack_id()].io_movedeps)
  (*global_bioops[get_stack_id()].io_movedeps)(bp, bp2);
}

static __inline int
buf_countdeps(struct buf *bp, int i, int islocked)
{
 if (global_bioops[get_stack_id()].io_countdeps)
  return ((*global_bioops[get_stack_id()].io_countdeps)(bp, i, islocked));
 else
  return (0);
}

int cluster_read(struct vnode *, struct cluster_info *,
     u_quad_t, daddr_t, long, struct ucred *, struct buf **);
void cluster_write(struct buf *, struct cluster_info *, u_quad_t);


# 421 "openbsd3/sys/vnode_if.h" 2

struct vop_strategy_args {
 struct vnodeop_desc *a_desc;
 struct buf *a_bp;
};
typedef  struct vnodeop_desc   _GLOBAL_192_T; extern  _GLOBAL_192_T  global_vop_strategy_desc[NUM_STACKS];    
int VOP_STRATEGY(struct buf *);

struct vop_bwrite_args {
 struct vnodeop_desc *a_desc;
 struct buf *a_bp;
};
typedef  struct vnodeop_desc   _GLOBAL_193_T; extern  _GLOBAL_193_T  global_vop_bwrite_desc[NUM_STACKS];    
int VOP_BWRITE(struct buf *);
# 407 "openbsd3/sys/vnode.h" 2




struct file;
struct filedesc;
struct mount;
struct nameidata;
struct proc;
struct stat;
struct ucred;
struct uio;
struct vattr;
struct vnode;

int bdevvp(dev_t dev, struct vnode **vpp);
int cdevvp(dev_t dev, struct vnode **vpp);
int getnewvnode(enum vtagtype tag, struct mount *mp,
     int (**vops)(void *), struct vnode **vpp);
int getvnode(struct filedesc *fdp, int fd, struct file **fpp);
void getnewfsid(struct mount *, int);
void vattr_null(struct vattr *vap);
int vcount(struct vnode *vp);
int vfinddev(dev_t, enum vtype, struct vnode **);
void vflushbuf(struct vnode *vp, int sync);
int vflush(struct mount *mp, struct vnode *vp, int flags);
void vntblinit(void);
void vn_initialize_syncerd(void);
int vwaitforio(struct vnode *, int, char *, int);
void vwakeup(struct vnode *);
void vdevgone(int, int, int, enum vtype);
int vget(struct vnode *vp, int lockflag, struct proc *p);
void vgone(struct vnode *vp);
void vgonel(struct vnode *, struct proc *);
int vinvalbuf(struct vnode *vp, int save, struct ucred *cred,
     struct proc *p, int slpflag, int slptimeo);
void vprint(char *label, struct vnode *vp);
int vop_generic_bwrite(void *ap);
void vn_update(void);
int vn_close(struct vnode *vp,
     int flags, struct ucred *cred, struct proc *p);
int vn_open(struct nameidata *ndp, int fmode, int cmode);
int vrecycle(struct vnode *vp, struct simplelock *inter_lkp,
     struct proc *p);
int vn_rdwr(enum uio_rw rw, struct vnode *vp, caddr_t base,
     int len, off_t offset, enum uio_seg segflg, int ioflg,
     struct ucred *cred, size_t *aresid, struct proc *p);
int vn_lock(struct vnode *vp, int flags, struct proc *p);

int vop_generic_abortop(void *);
int vop_generic_islocked(void *);
int vop_generic_lock(void *);
int vop_generic_unlock(void *);
int vop_generic_revoke(void *);
int vop_generic_kqfilter(void *);

int vn_stat(struct vnode *vp, struct stat *sb, struct proc *p);
int vn_statfile(struct file *fp, struct stat *sb, struct proc *p);
int vn_writechk(struct vnode *vp);
void vn_marktext(struct vnode *vp);
void vn_syncer_add_to_worklist(struct vnode *vp, int delay);
void sched_sync(struct proc *);

struct vnode *
 checkalias(struct vnode *vp, dev_t nvp_rdev, struct mount *mp);
void vput(struct vnode *vp);
void vrele(struct vnode *vp);
int vaccess(mode_t file_mode, uid_t uid, gid_t gid,
     mode_t acc_mode, struct ucred *cred);

int vn_isdisk(struct vnode *vp, int *errp);

int softdep_fsync(struct vnode *vp);
# 49 "openbsd3/net/bpf.c" 2
# 1 "openbsd3/sys/file.h" 1
# 35 "openbsd3/sys/file.h"
# 1 "openbsd3/sys/fcntl.h" 1
# 171 "openbsd3/sys/fcntl.h"
struct flock {
 off_t l_start;
 off_t l_len;
 pid_t l_pid;
 short l_type;
 short l_whence;
};
# 36 "openbsd3/sys/file.h" 2
# 1 "openbsd3/sys/unistd.h" 1
# 37 "openbsd3/sys/file.h" 2




struct proc;
struct uio;
struct knote;
struct stat;
struct file;

struct fileops {
 int (*fo_read)(struct file *, off_t *, struct uio *,
      struct ucred *);
 int (*fo_write)(struct file *, off_t *, struct uio *,
      struct ucred *);
 int (*fo_ioctl)(struct file *, u_long, caddr_t,
      struct proc *);
 int (*fo_poll)(struct file *, int, struct proc *);
 int (*fo_kqfilter)(struct file *, struct knote *);
 int (*fo_stat)(struct file *, struct stat *, struct proc *);
 int (*fo_close)(struct file *, struct proc *);
};





struct file {
 struct { struct file *le_next; struct file **le_prev; } f_list;
 short f_flag;






 short f_type;
 long f_count;
 long f_msgcount;
 struct ucred *f_cred;
 struct fileops *f_ops;
 off_t f_offset;
 void *f_data;
 int f_iflags;
 int f_usecount;
};
# 102 "openbsd3/sys/file.h"
struct filelist { struct file *lh_first; };
typedef  struct filelist   _GLOBAL_194_T; extern  _GLOBAL_194_T  global_filehead[NUM_STACKS];    
typedef  int  _GLOBAL_195_T; extern  _GLOBAL_195_T  global_maxfiles[NUM_STACKS];   
typedef  int  _GLOBAL_196_T; extern  _GLOBAL_196_T  global_nfiles[NUM_STACKS];   
typedef  struct fileops   _GLOBAL_197_T; extern  _GLOBAL_197_T  global_vnops[NUM_STACKS];    

int dofileread(struct proc *, int, struct file *, void *, size_t,
            off_t *, register_t *);
int dofilewrite(struct proc *, int, struct file *, const void *,
            size_t, off_t *, register_t *);
# 50 "openbsd3/net/bpf.c" 2
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
# 51 "openbsd3/net/bpf.c" 2
# 1 "openbsd3/sys/poll.h" 1
# 31 "openbsd3/sys/poll.h"
typedef struct pollfd {
 int fd;
 short events;
 short revents;
} pollfd_t;

typedef unsigned int nfds_t;
# 52 "openbsd3/net/bpf.c" 2
# 1 "openbsd3/sys/kernel.h" 1
# 43 "openbsd3/sys/kernel.h"
typedef  long  _GLOBAL_198_T; extern  _GLOBAL_198_T  global_hostid[NUM_STACKS];   
typedef  char  _GLOBAL_199_T; extern  _GLOBAL_199_T  _GLOBAL_0_hostname_I [ 256 ] ; extern  _GLOBAL_199_T  _GLOBAL_1_hostname_I [ 256 ] ; extern  _GLOBAL_199_T  _GLOBAL_2_hostname_I [ 256 ] ; extern  _GLOBAL_199_T  _GLOBAL_3_hostname_I [ 256 ] ; extern  _GLOBAL_199_T  _GLOBAL_4_hostname_I [ 256 ] ; extern  _GLOBAL_199_T  _GLOBAL_5_hostname_I [ 256 ] ; extern  _GLOBAL_199_T  _GLOBAL_6_hostname_I [ 256 ] ; extern  _GLOBAL_199_T  _GLOBAL_7_hostname_I [ 256 ] ; extern  _GLOBAL_199_T  _GLOBAL_8_hostname_I [ 256 ] ; extern  _GLOBAL_199_T  _GLOBAL_9_hostname_I [ 256 ] ; extern  _GLOBAL_199_T  _GLOBAL_10_hostname_I [ 256 ] ; extern  _GLOBAL_199_T  _GLOBAL_11_hostname_I [ 256 ] ; extern  _GLOBAL_199_T  _GLOBAL_12_hostname_I [ 256 ] ; extern  _GLOBAL_199_T  _GLOBAL_13_hostname_I [ 256 ] ; extern  _GLOBAL_199_T  _GLOBAL_14_hostname_I [ 256 ] ; extern  _GLOBAL_199_T  _GLOBAL_15_hostname_I [ 256 ] ; extern  _GLOBAL_199_T  _GLOBAL_16_hostname_I [ 256 ] ; extern  _GLOBAL_199_T  _GLOBAL_17_hostname_I [ 256 ] ; extern  _GLOBAL_199_T  _GLOBAL_18_hostname_I [ 256 ] ; extern  _GLOBAL_199_T  _GLOBAL_19_hostname_I [ 256 ] ; extern  _GLOBAL_199_T  _GLOBAL_20_hostname_I [ 256 ] ; extern  _GLOBAL_199_T  _GLOBAL_21_hostname_I [ 256 ] ; extern  _GLOBAL_199_T  _GLOBAL_22_hostname_I [ 256 ] ; extern  _GLOBAL_199_T  _GLOBAL_23_hostname_I [ 256 ] ; extern  _GLOBAL_199_T  _GLOBAL_24_hostname_I [ 256 ] ; extern  _GLOBAL_199_T  _GLOBAL_25_hostname_I [ 256 ] ; extern  _GLOBAL_199_T  _GLOBAL_26_hostname_I [ 256 ] ; extern  _GLOBAL_199_T  _GLOBAL_27_hostname_I [ 256 ] ; extern  _GLOBAL_199_T  _GLOBAL_28_hostname_I [ 256 ] ; extern  _GLOBAL_199_T  _GLOBAL_29_hostname_I [ 256 ] ; extern  _GLOBAL_199_T  _GLOBAL_30_hostname_I [ 256 ] ; extern  _GLOBAL_199_T  _GLOBAL_31_hostname_I [ 256 ] ; extern  _GLOBAL_199_T  _GLOBAL_32_hostname_I [ 256 ] ; extern  _GLOBAL_199_T  _GLOBAL_33_hostname_I [ 256 ] ; extern  _GLOBAL_199_T  _GLOBAL_34_hostname_I [ 256 ] ; extern  _GLOBAL_199_T  _GLOBAL_35_hostname_I [ 256 ] ; extern  _GLOBAL_199_T  _GLOBAL_36_hostname_I [ 256 ] ; extern  _GLOBAL_199_T  _GLOBAL_37_hostname_I [ 256 ] ; extern  _GLOBAL_199_T  _GLOBAL_38_hostname_I [ 256 ] ; extern  _GLOBAL_199_T  _GLOBAL_39_hostname_I [ 256 ] ; extern  _GLOBAL_199_T  _GLOBAL_40_hostname_I [ 256 ] ; extern  _GLOBAL_199_T  _GLOBAL_41_hostname_I [ 256 ] ; extern  _GLOBAL_199_T  _GLOBAL_42_hostname_I [ 256 ] ; extern  _GLOBAL_199_T  _GLOBAL_43_hostname_I [ 256 ] ; extern  _GLOBAL_199_T  _GLOBAL_44_hostname_I [ 256 ] ; extern  _GLOBAL_199_T  _GLOBAL_45_hostname_I [ 256 ] ; extern  _GLOBAL_199_T  _GLOBAL_46_hostname_I [ 256 ] ; extern  _GLOBAL_199_T  _GLOBAL_47_hostname_I [ 256 ] ; extern  _GLOBAL_199_T  _GLOBAL_48_hostname_I [ 256 ] ; extern  _GLOBAL_199_T  _GLOBAL_49_hostname_I [ 256 ] ; static __attribute__ ((unused)) __typeof__(_GLOBAL_0_hostname_I) *_GLOBAL_hostname_36_A[NUM_STACKS];  
typedef  int  _GLOBAL_200_T; extern  _GLOBAL_200_T  global_hostnamelen[NUM_STACKS];   
typedef  char  _GLOBAL_201_T; extern  _GLOBAL_201_T  _GLOBAL_0_domainname_I [ 256 ] ; extern  _GLOBAL_201_T  _GLOBAL_1_domainname_I [ 256 ] ; extern  _GLOBAL_201_T  _GLOBAL_2_domainname_I [ 256 ] ; extern  _GLOBAL_201_T  _GLOBAL_3_domainname_I [ 256 ] ; extern  _GLOBAL_201_T  _GLOBAL_4_domainname_I [ 256 ] ; extern  _GLOBAL_201_T  _GLOBAL_5_domainname_I [ 256 ] ; extern  _GLOBAL_201_T  _GLOBAL_6_domainname_I [ 256 ] ; extern  _GLOBAL_201_T  _GLOBAL_7_domainname_I [ 256 ] ; extern  _GLOBAL_201_T  _GLOBAL_8_domainname_I [ 256 ] ; extern  _GLOBAL_201_T  _GLOBAL_9_domainname_I [ 256 ] ; extern  _GLOBAL_201_T  _GLOBAL_10_domainname_I [ 256 ] ; extern  _GLOBAL_201_T  _GLOBAL_11_domainname_I [ 256 ] ; extern  _GLOBAL_201_T  _GLOBAL_12_domainname_I [ 256 ] ; extern  _GLOBAL_201_T  _GLOBAL_13_domainname_I [ 256 ] ; extern  _GLOBAL_201_T  _GLOBAL_14_domainname_I [ 256 ] ; extern  _GLOBAL_201_T  _GLOBAL_15_domainname_I [ 256 ] ; extern  _GLOBAL_201_T  _GLOBAL_16_domainname_I [ 256 ] ; extern  _GLOBAL_201_T  _GLOBAL_17_domainname_I [ 256 ] ; extern  _GLOBAL_201_T  _GLOBAL_18_domainname_I [ 256 ] ; extern  _GLOBAL_201_T  _GLOBAL_19_domainname_I [ 256 ] ; extern  _GLOBAL_201_T  _GLOBAL_20_domainname_I [ 256 ] ; extern  _GLOBAL_201_T  _GLOBAL_21_domainname_I [ 256 ] ; extern  _GLOBAL_201_T  _GLOBAL_22_domainname_I [ 256 ] ; extern  _GLOBAL_201_T  _GLOBAL_23_domainname_I [ 256 ] ; extern  _GLOBAL_201_T  _GLOBAL_24_domainname_I [ 256 ] ; extern  _GLOBAL_201_T  _GLOBAL_25_domainname_I [ 256 ] ; extern  _GLOBAL_201_T  _GLOBAL_26_domainname_I [ 256 ] ; extern  _GLOBAL_201_T  _GLOBAL_27_domainname_I [ 256 ] ; extern  _GLOBAL_201_T  _GLOBAL_28_domainname_I [ 256 ] ; extern  _GLOBAL_201_T  _GLOBAL_29_domainname_I [ 256 ] ; extern  _GLOBAL_201_T  _GLOBAL_30_domainname_I [ 256 ] ; extern  _GLOBAL_201_T  _GLOBAL_31_domainname_I [ 256 ] ; extern  _GLOBAL_201_T  _GLOBAL_32_domainname_I [ 256 ] ; extern  _GLOBAL_201_T  _GLOBAL_33_domainname_I [ 256 ] ; extern  _GLOBAL_201_T  _GLOBAL_34_domainname_I [ 256 ] ; extern  _GLOBAL_201_T  _GLOBAL_35_domainname_I [ 256 ] ; extern  _GLOBAL_201_T  _GLOBAL_36_domainname_I [ 256 ] ; extern  _GLOBAL_201_T  _GLOBAL_37_domainname_I [ 256 ] ; extern  _GLOBAL_201_T  _GLOBAL_38_domainname_I [ 256 ] ; extern  _GLOBAL_201_T  _GLOBAL_39_domainname_I [ 256 ] ; extern  _GLOBAL_201_T  _GLOBAL_40_domainname_I [ 256 ] ; extern  _GLOBAL_201_T  _GLOBAL_41_domainname_I [ 256 ] ; extern  _GLOBAL_201_T  _GLOBAL_42_domainname_I [ 256 ] ; extern  _GLOBAL_201_T  _GLOBAL_43_domainname_I [ 256 ] ; extern  _GLOBAL_201_T  _GLOBAL_44_domainname_I [ 256 ] ; extern  _GLOBAL_201_T  _GLOBAL_45_domainname_I [ 256 ] ; extern  _GLOBAL_201_T  _GLOBAL_46_domainname_I [ 256 ] ; extern  _GLOBAL_201_T  _GLOBAL_47_domainname_I [ 256 ] ; extern  _GLOBAL_201_T  _GLOBAL_48_domainname_I [ 256 ] ; extern  _GLOBAL_201_T  _GLOBAL_49_domainname_I [ 256 ] ; static __attribute__ ((unused)) __typeof__(_GLOBAL_0_domainname_I) *_GLOBAL_domainname_37_A[NUM_STACKS];  
typedef  int  _GLOBAL_202_T; extern  _GLOBAL_202_T  global_domainnamelen[NUM_STACKS];   


typedef  struct timeval    _GLOBAL_203_T; extern volatile  _GLOBAL_203_T  global_mono_time[NUM_STACKS];     
typedef  struct timeval   _GLOBAL_204_T; extern  _GLOBAL_204_T  global_boottime[NUM_STACKS];    
typedef  struct timeval   _GLOBAL_205_T; extern  _GLOBAL_205_T  global_runtime[NUM_STACKS];    
extern volatile struct timeval time;
typedef  struct timezone   _GLOBAL_206_T; extern  _GLOBAL_206_T  global_tz[NUM_STACKS];    

typedef  int  _GLOBAL_207_T; extern  _GLOBAL_207_T  global_tick[NUM_STACKS];   
typedef  int  _GLOBAL_208_T; extern  _GLOBAL_208_T  global_tickfix[NUM_STACKS];   
typedef  int  _GLOBAL_209_T; extern  _GLOBAL_209_T  global_tickfixinterval[NUM_STACKS];   
typedef  int  _GLOBAL_210_T; extern  _GLOBAL_210_T  global_tickadj[NUM_STACKS];   
typedef  int  _GLOBAL_211_T; extern  _GLOBAL_211_T  global_hz[NUM_STACKS];   
typedef  int  _GLOBAL_212_T; extern  _GLOBAL_212_T  global_stathz[NUM_STACKS];   
typedef  int  _GLOBAL_213_T; extern  _GLOBAL_213_T  global_profhz[NUM_STACKS];   
typedef  int  _GLOBAL_214_T; extern  _GLOBAL_214_T  global_lbolt[NUM_STACKS];   
typedef  int  _GLOBAL_215_T; extern  _GLOBAL_215_T  global_tickdelta[NUM_STACKS];   
typedef  long  _GLOBAL_216_T; extern  _GLOBAL_216_T  global_timedelta[NUM_STACKS];   
# 53 "openbsd3/net/bpf.c" 2
# 1 "openbsd3/sys/sysctl.h" 1
# 51 "openbsd3/sys/sysctl.h"
# 1 "openbsd3/sys/resourcevar.h" 1
# 42 "openbsd3/sys/resourcevar.h"
struct pstats {

 struct rusage p_ru;
 struct rusage p_cru;



 struct itimerval p_timer[3];

 struct uprof {
  caddr_t pr_base;
  size_t pr_size;
  u_long pr_off;
  u_int pr_scale;
  u_long pr_addr;
 } p_prof;

 struct timeval p_start;
};
# 70 "openbsd3/sys/resourcevar.h"
struct plimit {
 struct rlimit pl_rlimit[9];

 int p_lflags;
 int p_refcnt;
};





void addupc_intr(struct proc *p, u_long pc);
void addupc_task(struct proc *p, u_long pc, u_int ticks);
void calcru(struct proc *p, struct timeval *up, struct timeval *sp,
     struct timeval *ip);
struct plimit *limcopy(struct plimit *lim);
void limfree(struct plimit *);

void ruadd(struct rusage *ru, struct rusage *ru2);
# 52 "openbsd3/sys/sysctl.h" 2
# 73 "openbsd3/sys/sysctl.h"
struct ctlname {
 char *ctl_name;
 int ctl_type;
};
# 293 "openbsd3/sys/sysctl.h"
struct kinfo_proc {
 struct proc kp_proc;
 struct eproc {
  struct proc *e_paddr;
  struct session *e_sess;
  struct pcred e_pcred;
  struct ucred e_ucred;
  struct vmspace e_vm;
  struct pstats e_pstats;
  int e_pstats_valid;
  pid_t e_ppid;
  pid_t e_pgid;
  short e_jobc;
  dev_t e_tdev;
  pid_t e_tpgid;
  struct session *e_tsess;

  char e_wmesg[7 +1];
  segsz_t e_xsize;
  short e_xrssize;
  short e_xccount;
  short e_xswrss;
  long e_flag;


  char e_login[32];

  char e_emul[7 +1];
         rlim_t e_maxrss;
 } kp_eproc;
};
# 337 "openbsd3/sys/sysctl.h"
struct kinfo_proc2 {
 u_int64_t p_forw;
 u_int64_t p_back;
 u_int64_t p_paddr;

 u_int64_t p_addr;
 u_int64_t p_fd;
 u_int64_t p_stats;
 u_int64_t p_limit;
 u_int64_t p_vmspace;
 u_int64_t p_sigacts;
 u_int64_t p_sess;
 u_int64_t p_tsess;
 u_int64_t p_ru;

 int32_t p_eflag;
 int32_t p_exitsig;
 int32_t p_flag;

 int32_t p_pid;
 int32_t p_ppid;
 int32_t p_sid;
 int32_t p__pgid;

 int32_t p_tpgid;

 u_int32_t p_uid;
 u_int32_t p_ruid;
 u_int32_t p_gid;
 u_int32_t p_rgid;

 u_int32_t p_groups[16];
 int16_t p_ngroups;

 int16_t p_jobc;
 u_int32_t p_tdev;

 u_int32_t p_estcpu;
 u_int32_t p_rtime_sec;
 u_int32_t p_rtime_usec;
 int32_t p_cpticks;
 u_int32_t p_pctcpu;
 u_int32_t p_swtime;
 u_int32_t p_slptime;
 int32_t p_schedflags;

 u_int64_t p_uticks;
 u_int64_t p_sticks;
 u_int64_t p_iticks;

 u_int64_t p_tracep;
 int32_t p_traceflag;

 int32_t p_holdcnt;

 int32_t p_siglist;
 u_int32_t p_sigmask;
 u_int32_t p_sigignore;
 u_int32_t p_sigcatch;

 int8_t p_stat;
 u_int8_t p_priority;
 u_int8_t p_usrpri;
 u_int8_t p_nice;

 u_int16_t p_xstat;
 u_int16_t p_acflag;

 char p_comm[24];

 char p_wmesg[8];
 u_int64_t p_wchan;

 char p_login[32];

 int32_t p_vm_rssize;
 int32_t p_vm_tsize;
 int32_t p_vm_dsize;
 int32_t p_vm_ssize;

 int64_t p_uvalid;

 u_int32_t p_ustart_sec;
 u_int32_t p_ustart_usec;

 u_int32_t p_uutime_sec;
 u_int32_t p_uutime_usec;
 u_int32_t p_ustime_sec;
 u_int32_t p_ustime_usec;

 u_int64_t p_uru_maxrss;
 u_int64_t p_uru_ixrss;
 u_int64_t p_uru_idrss;
 u_int64_t p_uru_isrss;
 u_int64_t p_uru_minflt;
 u_int64_t p_uru_majflt;
 u_int64_t p_uru_nswap;
 u_int64_t p_uru_inblock;
 u_int64_t p_uru_oublock;
 u_int64_t p_uru_msgsnd;
 u_int64_t p_uru_msgrcv;
 u_int64_t p_uru_nsignals;
 u_int64_t p_uru_nvcsw;
 u_int64_t p_uru_nivcsw;

 u_int32_t p_uctime_sec;
 u_int32_t p_uctime_usec;
 u_int64_t p_realflag;
 u_int32_t p_svuid;
 u_int32_t p_svgid;
 char p_emul[8];
 u_int64_t p_rlim_rss_cur;
};
# 628 "openbsd3/sys/sysctl.h"
typedef int (sysctlfn)(int *, u_int, void *, size_t *, void *, size_t, struct proc *);

int sysctl_int(void *, size_t *, void *, size_t, int *);
int sysctl_rdint(void *, size_t *, void *, int);
int sysctl_int_arr(int **, int *, u_int, void *, size_t *, void *, size_t);
int sysctl_quad(void *, size_t *, void *, size_t, int64_t *);
int sysctl_rdquad(void *, size_t *, void *, int64_t);
int sysctl_string(void *, size_t *, void *, size_t, char *, int);
int sysctl_tstring(void *, size_t *, void *, size_t, char *, int);
int sysctl__string(void *, size_t *, void *, size_t, char *, int, int);
int sysctl_rdstring(void *, size_t *, void *, const char *);
int sysctl_rdstruct(void *, size_t *, void *, const void *, int);
int sysctl_struct(void *, size_t *, void *, size_t, void *, int);
int sysctl_file(char *, size_t *);
int sysctl_doproc(int *, u_int, char *, size_t *);
struct radix_node;
struct walkarg;
int sysctl_dumpentry(struct radix_node *, void *);
int sysctl_iflist(int, struct walkarg *);
int sysctl_rtable(int *, u_int, void *, size_t *, void *, size_t);
int sysctl_clockrate(char *, size_t *);
int sysctl_vnode(char *, size_t *, struct proc *);



int sysctl_dopool(int *, u_int, char *, size_t *);

void fill_eproc(struct proc *, struct eproc *);
void fill_kproc2(struct proc *, struct kinfo_proc2 *);

int kern_sysctl(int *, u_int, void *, size_t *, void *, size_t,
       struct proc *);
int hw_sysctl(int *, u_int, void *, size_t *, void *, size_t,
     struct proc *);




int vm_sysctl(int *, u_int, void *, size_t *, void *, size_t,
     struct proc *);
int fs_sysctl(int *, u_int, void *, size_t *, void *, size_t,
     struct proc *);
int fs_posix_sysctl(int *, u_int, void *, size_t *, void *, size_t,
    struct proc *);
int net_sysctl(int *, u_int, void *, size_t *, void *, size_t,
      struct proc *);
int cpu_sysctl(int *, u_int, void *, size_t *, void *, size_t,
      struct proc *);
int vfs_sysctl(int *, u_int, void *, size_t *, void *, size_t,
      struct proc *);
int sysctl_sysvipc(int *, u_int, void *, size_t *);
int sysctl_wdog(int *, u_int, void *, size_t *, void *, size_t);

typedef  int   ( *_GLOBAL_218_T  )  ( int  *  ) ; extern  _GLOBAL_218_T global_cpu_cpuspeed[NUM_STACKS];    
typedef  int   ( *_GLOBAL_220_T  )  ( int  ) ; extern  _GLOBAL_220_T global_cpu_setperf[NUM_STACKS];   

int bpf_sysctl(int *, u_int, void *, size_t *, void *, size_t);

void sysctl_init(void);
# 54 "openbsd3/net/bpf.c" 2

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
typedef  int   ( *_GLOBAL_222_T  )  ( struct mbuf   *  , int   ) ; extern  _GLOBAL_222_T global_altq_input[NUM_STACKS];      
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
typedef  struct ifnet_head   _GLOBAL_223_T; extern  _GLOBAL_223_T  global_ifnet[NUM_STACKS];    
typedef  struct ifnet   _GLOBAL_224_T; extern  _GLOBAL_224_T  * *  global_ifindex2ifnet[NUM_STACKS];    
typedef  struct ifnet   _GLOBAL_225_T; extern  _GLOBAL_225_T  * global_lo0ifp[NUM_STACKS];    
typedef  int  _GLOBAL_226_T; extern  _GLOBAL_226_T  global_if_indexlim[NUM_STACKS];   

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
# 56 "openbsd3/net/bpf.c" 2
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







typedef  int  _GLOBAL_227_T; extern  _GLOBAL_227_T  global_ticks[NUM_STACKS];   
# 57 "openbsd3/net/bpf.c" 2
# 1 "openbsd3/net/bpfdesc.h" 1
# 48 "openbsd3/net/bpfdesc.h"
struct bpf_d {
 struct bpf_d *bd_next;
# 59 "openbsd3/net/bpfdesc.h"
 caddr_t bd_sbuf;
 caddr_t bd_hbuf;
 caddr_t bd_fbuf;
 int bd_slen;
 int bd_hlen;

 int bd_bufsize;

 struct bpf_if * bd_bif;
 u_long bd_rtout;
 u_long bd_rdStart;
 struct bpf_insn *bd_rfilter;
 struct bpf_insn *bd_wfilter;
 u_long bd_rcount;
 u_long bd_dcount;

 u_char bd_promisc;
 u_char bd_state;
 u_char bd_immediate;
 u_char bd_locked;
 int bd_hdrcmplt;
 int bd_async;
 int bd_sig;
 pid_t bd_pgid;
 uid_t bd_siguid;
 uid_t bd_sigeuid;
 u_char bd_pad;
 struct selinfo bd_sel;
};




struct bpf_if {
 struct bpf_if *bif_next;
 struct bpf_d *bif_dlist;
 struct bpf_if **bif_driverp;
 u_int bif_dlt;
 u_int bif_hdrlen;
 struct ifnet *bif_ifp;
};


int bpf_setf(struct bpf_d *, struct bpf_program *, int);
# 58 "openbsd3/net/bpf.c" 2

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
typedef  const struct sockaddr_in6    _GLOBAL_228_T; extern  _GLOBAL_228_T  global_sa6_any[NUM_STACKS];     

typedef  const struct in6_addr    _GLOBAL_229_T; extern  _GLOBAL_229_T  global_in6mask0[NUM_STACKS];     
typedef  const struct in6_addr    _GLOBAL_230_T; extern  _GLOBAL_230_T  global_in6mask32[NUM_STACKS];     
typedef  const struct in6_addr    _GLOBAL_231_T; extern  _GLOBAL_231_T  global_in6mask64[NUM_STACKS];     
typedef  const struct in6_addr    _GLOBAL_232_T; extern  _GLOBAL_232_T  global_in6mask96[NUM_STACKS];     
typedef  const struct in6_addr    _GLOBAL_233_T; extern  _GLOBAL_233_T  global_in6mask128[NUM_STACKS];     
# 217 "openbsd3/netinet6/in6.h"
typedef  const struct in6_addr    _GLOBAL_234_T; extern  _GLOBAL_234_T  global_in6addr_any[NUM_STACKS];     
typedef  const struct in6_addr    _GLOBAL_235_T; extern  _GLOBAL_235_T  global_in6addr_loopback[NUM_STACKS];     
typedef  const struct in6_addr    _GLOBAL_236_T; extern  _GLOBAL_236_T  global_in6addr_nodelocal_allnodes[NUM_STACKS];     
typedef  const struct in6_addr    _GLOBAL_237_T; extern  _GLOBAL_237_T  global_in6addr_linklocal_allnodes[NUM_STACKS];     
typedef  const struct in6_addr    _GLOBAL_238_T; extern  _GLOBAL_238_T  global_in6addr_linklocal_allrouters[NUM_STACKS];     
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
# 60 "openbsd3/net/bpf.c" 2
# 1 "openbsd3/netinet/if_arc.h" 1
# 43 "openbsd3/netinet/if_arc.h"
struct arc_addr {
 u_int8_t arc_addr_octet[1];
};





struct arc_header {
 u_int8_t arc_shost;
 u_int8_t arc_dhost;
 u_int8_t arc_type;




 u_int8_t arc_flag;
 u_int16_t arc_seqid;




 u_int8_t arc_type2;
 u_int8_t arc_flag2;
 u_int16_t arc_seqid2;
};
# 100 "openbsd3/netinet/if_arc.h"
struct arccom {
 struct ifnet ac_if;
 u_int8_t ac_anaddr;
 struct in_addr ac_ipaddr;

 u_int16_t ac_seqid;

 struct ac_frag {
  u_int8_t af_maxflag;
  u_int8_t af_lastseen;
  u_int16_t af_seqid;
  struct mbuf *af_packet;
 } ac_fragtab[256];

};


typedef  u_int8_t _GLOBAL_239_T;  _GLOBAL_239_T  global_arcbroadcastaddr[NUM_STACKS];  

void arc_ifattach(struct ifnet *);
char *arc_sprintf(u_int8_t *);
void arc_input(struct ifnet *, struct mbuf *);
int arc_output(struct ifnet *, struct mbuf *, struct sockaddr *,
     struct rtentry *);
int arc_isphds(int);
# 61 "openbsd3/net/bpf.c" 2
# 1 "openbsd3/netinet/if_ether.h" 1
# 51 "openbsd3/netinet/if_ether.h"
struct ether_addr {
 u_int8_t ether_addr_octet[6];
};





struct ether_header {
 u_int8_t ether_dhost[6];
 u_int8_t ether_shost[6];
 u_int16_t ether_type;
};

# 1 "openbsd3/net/ethertypes.h" 1
# 66 "openbsd3/netinet/if_ether.h" 2
# 121 "openbsd3/netinet/if_ether.h"
struct ether_arp {
 struct arphdr ea_hdr;
 u_int8_t arp_sha[6];
 u_int8_t arp_spa[4];
 u_int8_t arp_tha[6];
 u_int8_t arp_tpa[4];
};
# 139 "openbsd3/netinet/if_ether.h"
struct arpcom {
 struct ifnet ac_if;
 u_int8_t ac_enaddr[6];
 char ac__pad[2];
 struct { struct ether_multi *lh_first; } ac_multiaddrs;
 int ac_multicnt;
};

struct llinfo_arp {
 struct { struct llinfo_arp *le_next; struct llinfo_arp **le_prev; } la_list;
 struct rtentry *la_rt;
 struct mbuf *la_hold;
 long la_asked;

};

struct sockaddr_inarp {
 u_int8_t sin_len;
 u_int8_t sin_family;
 u_int16_t sin_port;
 struct in_addr sin_addr;
 struct in_addr sin_srcaddr;
 u_int16_t sin_tos;
 u_int16_t sin_other;

};
# 174 "openbsd3/netinet/if_ether.h"
typedef  u_int8_t  _GLOBAL_240_T; extern  _GLOBAL_240_T  _GLOBAL_0_etherbroadcastaddr_I [ 6 ] ; extern  _GLOBAL_240_T  _GLOBAL_1_etherbroadcastaddr_I [ 6 ] ; extern  _GLOBAL_240_T  _GLOBAL_2_etherbroadcastaddr_I [ 6 ] ; extern  _GLOBAL_240_T  _GLOBAL_3_etherbroadcastaddr_I [ 6 ] ; extern  _GLOBAL_240_T  _GLOBAL_4_etherbroadcastaddr_I [ 6 ] ; extern  _GLOBAL_240_T  _GLOBAL_5_etherbroadcastaddr_I [ 6 ] ; extern  _GLOBAL_240_T  _GLOBAL_6_etherbroadcastaddr_I [ 6 ] ; extern  _GLOBAL_240_T  _GLOBAL_7_etherbroadcastaddr_I [ 6 ] ; extern  _GLOBAL_240_T  _GLOBAL_8_etherbroadcastaddr_I [ 6 ] ; extern  _GLOBAL_240_T  _GLOBAL_9_etherbroadcastaddr_I [ 6 ] ; extern  _GLOBAL_240_T  _GLOBAL_10_etherbroadcastaddr_I [ 6 ] ; extern  _GLOBAL_240_T  _GLOBAL_11_etherbroadcastaddr_I [ 6 ] ; extern  _GLOBAL_240_T  _GLOBAL_12_etherbroadcastaddr_I [ 6 ] ; extern  _GLOBAL_240_T  _GLOBAL_13_etherbroadcastaddr_I [ 6 ] ; extern  _GLOBAL_240_T  _GLOBAL_14_etherbroadcastaddr_I [ 6 ] ; extern  _GLOBAL_240_T  _GLOBAL_15_etherbroadcastaddr_I [ 6 ] ; extern  _GLOBAL_240_T  _GLOBAL_16_etherbroadcastaddr_I [ 6 ] ; extern  _GLOBAL_240_T  _GLOBAL_17_etherbroadcastaddr_I [ 6 ] ; extern  _GLOBAL_240_T  _GLOBAL_18_etherbroadcastaddr_I [ 6 ] ; extern  _GLOBAL_240_T  _GLOBAL_19_etherbroadcastaddr_I [ 6 ] ; extern  _GLOBAL_240_T  _GLOBAL_20_etherbroadcastaddr_I [ 6 ] ; extern  _GLOBAL_240_T  _GLOBAL_21_etherbroadcastaddr_I [ 6 ] ; extern  _GLOBAL_240_T  _GLOBAL_22_etherbroadcastaddr_I [ 6 ] ; extern  _GLOBAL_240_T  _GLOBAL_23_etherbroadcastaddr_I [ 6 ] ; extern  _GLOBAL_240_T  _GLOBAL_24_etherbroadcastaddr_I [ 6 ] ; extern  _GLOBAL_240_T  _GLOBAL_25_etherbroadcastaddr_I [ 6 ] ; extern  _GLOBAL_240_T  _GLOBAL_26_etherbroadcastaddr_I [ 6 ] ; extern  _GLOBAL_240_T  _GLOBAL_27_etherbroadcastaddr_I [ 6 ] ; extern  _GLOBAL_240_T  _GLOBAL_28_etherbroadcastaddr_I [ 6 ] ; extern  _GLOBAL_240_T  _GLOBAL_29_etherbroadcastaddr_I [ 6 ] ; extern  _GLOBAL_240_T  _GLOBAL_30_etherbroadcastaddr_I [ 6 ] ; extern  _GLOBAL_240_T  _GLOBAL_31_etherbroadcastaddr_I [ 6 ] ; extern  _GLOBAL_240_T  _GLOBAL_32_etherbroadcastaddr_I [ 6 ] ; extern  _GLOBAL_240_T  _GLOBAL_33_etherbroadcastaddr_I [ 6 ] ; extern  _GLOBAL_240_T  _GLOBAL_34_etherbroadcastaddr_I [ 6 ] ; extern  _GLOBAL_240_T  _GLOBAL_35_etherbroadcastaddr_I [ 6 ] ; extern  _GLOBAL_240_T  _GLOBAL_36_etherbroadcastaddr_I [ 6 ] ; extern  _GLOBAL_240_T  _GLOBAL_37_etherbroadcastaddr_I [ 6 ] ; extern  _GLOBAL_240_T  _GLOBAL_38_etherbroadcastaddr_I [ 6 ] ; extern  _GLOBAL_240_T  _GLOBAL_39_etherbroadcastaddr_I [ 6 ] ; extern  _GLOBAL_240_T  _GLOBAL_40_etherbroadcastaddr_I [ 6 ] ; extern  _GLOBAL_240_T  _GLOBAL_41_etherbroadcastaddr_I [ 6 ] ; extern  _GLOBAL_240_T  _GLOBAL_42_etherbroadcastaddr_I [ 6 ] ; extern  _GLOBAL_240_T  _GLOBAL_43_etherbroadcastaddr_I [ 6 ] ; extern  _GLOBAL_240_T  _GLOBAL_44_etherbroadcastaddr_I [ 6 ] ; extern  _GLOBAL_240_T  _GLOBAL_45_etherbroadcastaddr_I [ 6 ] ; extern  _GLOBAL_240_T  _GLOBAL_46_etherbroadcastaddr_I [ 6 ] ; extern  _GLOBAL_240_T  _GLOBAL_47_etherbroadcastaddr_I [ 6 ] ; extern  _GLOBAL_240_T  _GLOBAL_48_etherbroadcastaddr_I [ 6 ] ; extern  _GLOBAL_240_T  _GLOBAL_49_etherbroadcastaddr_I [ 6 ] ; static __attribute__ ((unused)) __typeof__(_GLOBAL_0_etherbroadcastaddr_I) *_GLOBAL_etherbroadcastaddr_38_A[NUM_STACKS];  
typedef  u_int8_t  _GLOBAL_241_T; extern  _GLOBAL_241_T  _GLOBAL_0_ether_ipmulticast_min_I [ 6 ] ; extern  _GLOBAL_241_T  _GLOBAL_1_ether_ipmulticast_min_I [ 6 ] ; extern  _GLOBAL_241_T  _GLOBAL_2_ether_ipmulticast_min_I [ 6 ] ; extern  _GLOBAL_241_T  _GLOBAL_3_ether_ipmulticast_min_I [ 6 ] ; extern  _GLOBAL_241_T  _GLOBAL_4_ether_ipmulticast_min_I [ 6 ] ; extern  _GLOBAL_241_T  _GLOBAL_5_ether_ipmulticast_min_I [ 6 ] ; extern  _GLOBAL_241_T  _GLOBAL_6_ether_ipmulticast_min_I [ 6 ] ; extern  _GLOBAL_241_T  _GLOBAL_7_ether_ipmulticast_min_I [ 6 ] ; extern  _GLOBAL_241_T  _GLOBAL_8_ether_ipmulticast_min_I [ 6 ] ; extern  _GLOBAL_241_T  _GLOBAL_9_ether_ipmulticast_min_I [ 6 ] ; extern  _GLOBAL_241_T  _GLOBAL_10_ether_ipmulticast_min_I [ 6 ] ; extern  _GLOBAL_241_T  _GLOBAL_11_ether_ipmulticast_min_I [ 6 ] ; extern  _GLOBAL_241_T  _GLOBAL_12_ether_ipmulticast_min_I [ 6 ] ; extern  _GLOBAL_241_T  _GLOBAL_13_ether_ipmulticast_min_I [ 6 ] ; extern  _GLOBAL_241_T  _GLOBAL_14_ether_ipmulticast_min_I [ 6 ] ; extern  _GLOBAL_241_T  _GLOBAL_15_ether_ipmulticast_min_I [ 6 ] ; extern  _GLOBAL_241_T  _GLOBAL_16_ether_ipmulticast_min_I [ 6 ] ; extern  _GLOBAL_241_T  _GLOBAL_17_ether_ipmulticast_min_I [ 6 ] ; extern  _GLOBAL_241_T  _GLOBAL_18_ether_ipmulticast_min_I [ 6 ] ; extern  _GLOBAL_241_T  _GLOBAL_19_ether_ipmulticast_min_I [ 6 ] ; extern  _GLOBAL_241_T  _GLOBAL_20_ether_ipmulticast_min_I [ 6 ] ; extern  _GLOBAL_241_T  _GLOBAL_21_ether_ipmulticast_min_I [ 6 ] ; extern  _GLOBAL_241_T  _GLOBAL_22_ether_ipmulticast_min_I [ 6 ] ; extern  _GLOBAL_241_T  _GLOBAL_23_ether_ipmulticast_min_I [ 6 ] ; extern  _GLOBAL_241_T  _GLOBAL_24_ether_ipmulticast_min_I [ 6 ] ; extern  _GLOBAL_241_T  _GLOBAL_25_ether_ipmulticast_min_I [ 6 ] ; extern  _GLOBAL_241_T  _GLOBAL_26_ether_ipmulticast_min_I [ 6 ] ; extern  _GLOBAL_241_T  _GLOBAL_27_ether_ipmulticast_min_I [ 6 ] ; extern  _GLOBAL_241_T  _GLOBAL_28_ether_ipmulticast_min_I [ 6 ] ; extern  _GLOBAL_241_T  _GLOBAL_29_ether_ipmulticast_min_I [ 6 ] ; extern  _GLOBAL_241_T  _GLOBAL_30_ether_ipmulticast_min_I [ 6 ] ; extern  _GLOBAL_241_T  _GLOBAL_31_ether_ipmulticast_min_I [ 6 ] ; extern  _GLOBAL_241_T  _GLOBAL_32_ether_ipmulticast_min_I [ 6 ] ; extern  _GLOBAL_241_T  _GLOBAL_33_ether_ipmulticast_min_I [ 6 ] ; extern  _GLOBAL_241_T  _GLOBAL_34_ether_ipmulticast_min_I [ 6 ] ; extern  _GLOBAL_241_T  _GLOBAL_35_ether_ipmulticast_min_I [ 6 ] ; extern  _GLOBAL_241_T  _GLOBAL_36_ether_ipmulticast_min_I [ 6 ] ; extern  _GLOBAL_241_T  _GLOBAL_37_ether_ipmulticast_min_I [ 6 ] ; extern  _GLOBAL_241_T  _GLOBAL_38_ether_ipmulticast_min_I [ 6 ] ; extern  _GLOBAL_241_T  _GLOBAL_39_ether_ipmulticast_min_I [ 6 ] ; extern  _GLOBAL_241_T  _GLOBAL_40_ether_ipmulticast_min_I [ 6 ] ; extern  _GLOBAL_241_T  _GLOBAL_41_ether_ipmulticast_min_I [ 6 ] ; extern  _GLOBAL_241_T  _GLOBAL_42_ether_ipmulticast_min_I [ 6 ] ; extern  _GLOBAL_241_T  _GLOBAL_43_ether_ipmulticast_min_I [ 6 ] ; extern  _GLOBAL_241_T  _GLOBAL_44_ether_ipmulticast_min_I [ 6 ] ; extern  _GLOBAL_241_T  _GLOBAL_45_ether_ipmulticast_min_I [ 6 ] ; extern  _GLOBAL_241_T  _GLOBAL_46_ether_ipmulticast_min_I [ 6 ] ; extern  _GLOBAL_241_T  _GLOBAL_47_ether_ipmulticast_min_I [ 6 ] ; extern  _GLOBAL_241_T  _GLOBAL_48_ether_ipmulticast_min_I [ 6 ] ; extern  _GLOBAL_241_T  _GLOBAL_49_ether_ipmulticast_min_I [ 6 ] ; static __attribute__ ((unused)) __typeof__(_GLOBAL_0_ether_ipmulticast_min_I) *_GLOBAL_ether_ipmulticast_min_39_A[NUM_STACKS];  
typedef  u_int8_t  _GLOBAL_242_T; extern  _GLOBAL_242_T  _GLOBAL_0_ether_ipmulticast_max_I [ 6 ] ; extern  _GLOBAL_242_T  _GLOBAL_1_ether_ipmulticast_max_I [ 6 ] ; extern  _GLOBAL_242_T  _GLOBAL_2_ether_ipmulticast_max_I [ 6 ] ; extern  _GLOBAL_242_T  _GLOBAL_3_ether_ipmulticast_max_I [ 6 ] ; extern  _GLOBAL_242_T  _GLOBAL_4_ether_ipmulticast_max_I [ 6 ] ; extern  _GLOBAL_242_T  _GLOBAL_5_ether_ipmulticast_max_I [ 6 ] ; extern  _GLOBAL_242_T  _GLOBAL_6_ether_ipmulticast_max_I [ 6 ] ; extern  _GLOBAL_242_T  _GLOBAL_7_ether_ipmulticast_max_I [ 6 ] ; extern  _GLOBAL_242_T  _GLOBAL_8_ether_ipmulticast_max_I [ 6 ] ; extern  _GLOBAL_242_T  _GLOBAL_9_ether_ipmulticast_max_I [ 6 ] ; extern  _GLOBAL_242_T  _GLOBAL_10_ether_ipmulticast_max_I [ 6 ] ; extern  _GLOBAL_242_T  _GLOBAL_11_ether_ipmulticast_max_I [ 6 ] ; extern  _GLOBAL_242_T  _GLOBAL_12_ether_ipmulticast_max_I [ 6 ] ; extern  _GLOBAL_242_T  _GLOBAL_13_ether_ipmulticast_max_I [ 6 ] ; extern  _GLOBAL_242_T  _GLOBAL_14_ether_ipmulticast_max_I [ 6 ] ; extern  _GLOBAL_242_T  _GLOBAL_15_ether_ipmulticast_max_I [ 6 ] ; extern  _GLOBAL_242_T  _GLOBAL_16_ether_ipmulticast_max_I [ 6 ] ; extern  _GLOBAL_242_T  _GLOBAL_17_ether_ipmulticast_max_I [ 6 ] ; extern  _GLOBAL_242_T  _GLOBAL_18_ether_ipmulticast_max_I [ 6 ] ; extern  _GLOBAL_242_T  _GLOBAL_19_ether_ipmulticast_max_I [ 6 ] ; extern  _GLOBAL_242_T  _GLOBAL_20_ether_ipmulticast_max_I [ 6 ] ; extern  _GLOBAL_242_T  _GLOBAL_21_ether_ipmulticast_max_I [ 6 ] ; extern  _GLOBAL_242_T  _GLOBAL_22_ether_ipmulticast_max_I [ 6 ] ; extern  _GLOBAL_242_T  _GLOBAL_23_ether_ipmulticast_max_I [ 6 ] ; extern  _GLOBAL_242_T  _GLOBAL_24_ether_ipmulticast_max_I [ 6 ] ; extern  _GLOBAL_242_T  _GLOBAL_25_ether_ipmulticast_max_I [ 6 ] ; extern  _GLOBAL_242_T  _GLOBAL_26_ether_ipmulticast_max_I [ 6 ] ; extern  _GLOBAL_242_T  _GLOBAL_27_ether_ipmulticast_max_I [ 6 ] ; extern  _GLOBAL_242_T  _GLOBAL_28_ether_ipmulticast_max_I [ 6 ] ; extern  _GLOBAL_242_T  _GLOBAL_29_ether_ipmulticast_max_I [ 6 ] ; extern  _GLOBAL_242_T  _GLOBAL_30_ether_ipmulticast_max_I [ 6 ] ; extern  _GLOBAL_242_T  _GLOBAL_31_ether_ipmulticast_max_I [ 6 ] ; extern  _GLOBAL_242_T  _GLOBAL_32_ether_ipmulticast_max_I [ 6 ] ; extern  _GLOBAL_242_T  _GLOBAL_33_ether_ipmulticast_max_I [ 6 ] ; extern  _GLOBAL_242_T  _GLOBAL_34_ether_ipmulticast_max_I [ 6 ] ; extern  _GLOBAL_242_T  _GLOBAL_35_ether_ipmulticast_max_I [ 6 ] ; extern  _GLOBAL_242_T  _GLOBAL_36_ether_ipmulticast_max_I [ 6 ] ; extern  _GLOBAL_242_T  _GLOBAL_37_ether_ipmulticast_max_I [ 6 ] ; extern  _GLOBAL_242_T  _GLOBAL_38_ether_ipmulticast_max_I [ 6 ] ; extern  _GLOBAL_242_T  _GLOBAL_39_ether_ipmulticast_max_I [ 6 ] ; extern  _GLOBAL_242_T  _GLOBAL_40_ether_ipmulticast_max_I [ 6 ] ; extern  _GLOBAL_242_T  _GLOBAL_41_ether_ipmulticast_max_I [ 6 ] ; extern  _GLOBAL_242_T  _GLOBAL_42_ether_ipmulticast_max_I [ 6 ] ; extern  _GLOBAL_242_T  _GLOBAL_43_ether_ipmulticast_max_I [ 6 ] ; extern  _GLOBAL_242_T  _GLOBAL_44_ether_ipmulticast_max_I [ 6 ] ; extern  _GLOBAL_242_T  _GLOBAL_45_ether_ipmulticast_max_I [ 6 ] ; extern  _GLOBAL_242_T  _GLOBAL_46_ether_ipmulticast_max_I [ 6 ] ; extern  _GLOBAL_242_T  _GLOBAL_47_ether_ipmulticast_max_I [ 6 ] ; extern  _GLOBAL_242_T  _GLOBAL_48_ether_ipmulticast_max_I [ 6 ] ; extern  _GLOBAL_242_T  _GLOBAL_49_ether_ipmulticast_max_I [ 6 ] ; static __attribute__ ((unused)) __typeof__(_GLOBAL_0_ether_ipmulticast_max_I) *_GLOBAL_ether_ipmulticast_max_40_A[NUM_STACKS];  
typedef  struct ifqueue   _GLOBAL_243_T; extern  _GLOBAL_243_T  global_arpintrq[NUM_STACKS];    

void arpwhohas(struct arpcom *, struct in_addr *);
void arpintr(void);
int arpresolve(struct arpcom *,
     struct rtentry *, struct mbuf *, struct sockaddr *, u_char *);
void arp_ifinit(struct arpcom *, struct ifaddr *);
void arp_rtrequest(int, struct rtentry *, struct rt_addrinfo *);

int ether_addmulti(struct ifreq *, struct arpcom *);
int ether_delmulti(struct ifreq *, struct arpcom *);
int ether_multiaddr(struct sockaddr *, u_int8_t[], u_int8_t[]);
# 199 "openbsd3/netinet/if_ether.h"
struct ether_multi {
 u_int8_t enm_addrlo[6];
 u_int8_t enm_addrhi[6];
 struct arpcom *enm_ac;
 u_int enm_refcount;
 struct { struct ether_multi *le_next; struct ether_multi **le_prev; } enm_list;
};





struct ether_multistep {
 struct ether_multi *e_enm;
};
# 259 "openbsd3/netinet/if_ether.h"
typedef  struct ifnet   _GLOBAL_244_T; extern  _GLOBAL_244_T  * global_myip_ifp[NUM_STACKS];    

void arp_rtrequest(int, struct rtentry *, struct rt_addrinfo *);
int arpresolve(struct arpcom *, struct rtentry *, struct mbuf *,
      struct sockaddr *, u_char *);
void arpintr(void);
int arpioctl(u_long, caddr_t);
void arp_ifinit(struct arpcom *, struct ifaddr *);
void arprequest(struct ifnet *, u_int32_t *, u_int32_t *, u_int8_t *);
void revarpinput(struct mbuf *);
void in_revarpinput(struct mbuf *);
void revarprequest(struct ifnet *);
int revarpwhoarewe(struct ifnet *, struct in_addr *, struct in_addr *);
int revarpwhoami(struct in_addr *, struct ifnet *);
int db_show_arptab(void);

u_int32_t ether_crc32_le(const u_int8_t *, size_t);
u_int32_t ether_crc32_be(const u_int8_t *, size_t);
# 62 "openbsd3/net/bpf.c" 2
# 70 "openbsd3/net/bpf.c"
typedef  int _GLOBAL_245_T;  _GLOBAL_245_T  global_bpf_bufsize[NUM_STACKS] = {  32768,  32768,  32768,  32768,  32768,  32768,  32768,  32768,  32768,  32768,  32768,  32768,  32768,  32768,  32768,  32768,  32768,  32768,  32768,  32768,  32768,  32768,  32768,  32768,  32768,  32768,  32768,  32768,  32768,  32768,  32768,  32768,  32768,  32768,  32768,  32768,  32768,  32768,  32768,  32768,  32768,  32768,  32768,  32768,  32768,  32768,  32768,  32768,  32768,  32768,  };    
typedef  int _GLOBAL_246_T;  _GLOBAL_246_T  global_bpf_maxbufsize[NUM_STACKS] = {  ( 2 * 1024  * 1024  ) ,  ( 2 * 1024  * 1024  ) ,  ( 2 * 1024  * 1024  ) ,  ( 2 * 1024  * 1024  ) ,  ( 2 * 1024  * 1024  ) ,  ( 2 * 1024  * 1024  ) ,  ( 2 * 1024  * 1024  ) ,  ( 2 * 1024  * 1024  ) ,  ( 2 * 1024  * 1024  ) ,  ( 2 * 1024  * 1024  ) ,  ( 2 * 1024  * 1024  ) ,  ( 2 * 1024  * 1024  ) ,  ( 2 * 1024  * 1024  ) ,  ( 2 * 1024  * 1024  ) ,  ( 2 * 1024  * 1024  ) ,  ( 2 * 1024  * 1024  ) ,  ( 2 * 1024  * 1024  ) ,  ( 2 * 1024  * 1024  ) ,  ( 2 * 1024  * 1024  ) ,  ( 2 * 1024  * 1024  ) ,  ( 2 * 1024  * 1024  ) ,  ( 2 * 1024  * 1024  ) ,  ( 2 * 1024  * 1024  ) ,  ( 2 * 1024  * 1024  ) ,  ( 2 * 1024  * 1024  ) ,  ( 2 * 1024  * 1024  ) ,  ( 2 * 1024  * 1024  ) ,  ( 2 * 1024  * 1024  ) ,  ( 2 * 1024  * 1024  ) ,  ( 2 * 1024  * 1024  ) ,  ( 2 * 1024  * 1024  ) ,  ( 2 * 1024  * 1024  ) ,  ( 2 * 1024  * 1024  ) ,  ( 2 * 1024  * 1024  ) ,  ( 2 * 1024  * 1024  ) ,  ( 2 * 1024  * 1024  ) ,  ( 2 * 1024  * 1024  ) ,  ( 2 * 1024  * 1024  ) ,  ( 2 * 1024  * 1024  ) ,  ( 2 * 1024  * 1024  ) ,  ( 2 * 1024  * 1024  ) ,  ( 2 * 1024  * 1024  ) ,  ( 2 * 1024  * 1024  ) ,  ( 2 * 1024  * 1024  ) ,  ( 2 * 1024  * 1024  ) ,  ( 2 * 1024  * 1024  ) ,  ( 2 * 1024  * 1024  ) ,  ( 2 * 1024  * 1024  ) ,  ( 2 * 1024  * 1024  ) ,  ( 2 * 1024  * 1024  ) ,  };        





typedef  struct bpf_if  _GLOBAL_247_T;  _GLOBAL_247_T  * global_bpf_iflist[NUM_STACKS];   
typedef  struct bpf_d  _GLOBAL_248_T;  _GLOBAL_248_T  * global_bpf_dtab[NUM_STACKS];   
typedef  int _GLOBAL_249_T;  _GLOBAL_249_T  global_nbpfilter[NUM_STACKS];  

int bpf_allocbufs(struct bpf_d *);
void bpf_freed(struct bpf_d *);
void bpf_ifname(struct ifnet *, struct ifreq *);
void bpf_mcopy(const void *, void *, size_t);
int bpf_movein(struct uio *, int, struct mbuf **,
     struct sockaddr *, struct bpf_insn *);
void bpf_attachd(struct bpf_d *, struct bpf_if *);
void bpf_detachd(struct bpf_d *);
int bpf_setif(struct bpf_d *, struct ifreq *);
int bpfpoll(dev_t, int, struct proc *);
int bpfkqfilter(dev_t, struct knote *);
static __inline void bpf_wakeup(struct bpf_d *);
void bpf_catchpacket(struct bpf_d *, u_char *, size_t, size_t,
     void (*)(const void *, void *, size_t));
void bpf_reset_d(struct bpf_d *);

void filt_bpfrdetach(struct knote *);
int filt_bpfread(struct knote *, long);

int
bpf_movein(uio, linktype, mp, sockp, filter)
 struct uio *uio;
 int linktype;
 struct mbuf **mp;
 struct sockaddr *sockp;
 struct bpf_insn *filter;
{
 struct mbuf *m;
 int error;
 u_int hlen;
 u_int len;
 u_int slen;
# 123 "openbsd3/net/bpf.c"
 switch (linktype) {

 case 8:
  sockp->sa_family = 2;
  hlen = 0;
  break;

 case 9:
  sockp->sa_family = 0;
  hlen = 0;
  break;

 case 1:
  sockp->sa_family = 0;

  hlen = sizeof(struct ether_header);
  break;

 case 7:
  sockp->sa_family = 0;
  hlen = 3;
  break;

 case 10:
  sockp->sa_family = 0;

  hlen = 24;
  break;

 case 14:
 case 0:
  sockp->sa_family = 0;
  hlen = 0;
  break;

 case 11:





  sockp->sa_family = 0;
  hlen = 12;
  break;

 default:
  return (5);
 }

 len = uio->uio_resid;
 if (len > (1 << 11))
  return (5);

 do { { int ms = splraise((0x20 + ((6) << 4))); { (m) = pool_get(&global_mbpool[get_stack_id()], (0x0000) == 0x0000 ? 0x02|0x20 : 0); } splx(ms); }; if (m) { (m)->m_hdr.mh_type = (1); { int ms = splraise((0x20 + ((6) << 4))); { global_mbstat[get_stack_id()].m_mtypes[1]++; } splx(ms); } (m)->m_hdr.mh_next = (struct mbuf *)0L; (m)->m_hdr.mh_nextpkt = (struct mbuf *)0L; (m)->m_hdr.mh_data = (m)->M_dat.MH.MH_dat.MH_databuf; (m)->m_hdr.mh_flags = 0x0002; { ((&(m)->M_dat.MH.MH_pkthdr.tags)->slh_first) = 0L; }; (m)->M_dat.MH.MH_pkthdr.csum = 0; } } while ( 0);
 m->M_dat.MH.MH_pkthdr.rcvif = 0;
 m->M_dat.MH.MH_pkthdr.len = len - hlen;

 if (len > ((256 - sizeof(struct m_hdr)) - sizeof(struct pkthdr))) {
  do { { int ms = splraise((0x20 + ((6) << 4))); { (m)->M_dat.MH.MH_dat.MH_ext.ext_buf = pool_get(&global_mclpool[get_stack_id()], (0x0000) == 0x0000 ? (0x02|0x20) : 0); } splx(ms); }; if ((m)->M_dat.MH.MH_dat.MH_ext.ext_buf != 0L) { (m)->m_hdr.mh_data = (m)->M_dat.MH.MH_dat.MH_ext.ext_buf; (m)->m_hdr.mh_flags |= 0x0001|0x0008; (m)->M_dat.MH.MH_dat.MH_ext.ext_size = (1 << 11); (m)->M_dat.MH.MH_dat.MH_ext.ext_free = 0L; (m)->M_dat.MH.MH_dat.MH_ext.ext_arg = 0L; do { (m)->M_dat.MH.MH_dat.MH_ext.ext_prevref = (m); (m)->M_dat.MH.MH_dat.MH_ext.ext_nextref = (m); ; ; } while ( 0); } } while ( 0);
  if ((m->m_hdr.mh_flags & 0x0001) == 0) {
   error = 55;
   goto bad;
  }
 }
 m->m_hdr.mh_len = len;
 *mp = m;

 error = uiomove(((caddr_t)((m)->m_hdr.mh_data)), len, uio);
 if (error)
  goto bad;

 slen = bpf_filter(filter, ((u_char *)((m)->m_hdr.mh_data)), len, len);
 if (slen < len) {
  error = 1;
  goto bad;
 }

 if (m->m_hdr.mh_len < hlen) {
  error = 1;
  goto bad;
 }



 if (hlen != 0) {
  bcopy(m->m_hdr.mh_data, sockp->sa_data, hlen);
  m->m_hdr.mh_len -= hlen;
  m->m_hdr.mh_data += hlen;
 }

 return (0);
 bad:
 m_freem(m);
 return (error);
}





void
bpf_attachd(d, bp)
 struct bpf_d *d;
 struct bpf_if *bp;
{





 d->bd_bif = bp;
 d->bd_next = bp->bif_dlist;
 bp->bif_dlist = d;

 *bp->bif_driverp = bp;
}




void
bpf_detachd(d)
 struct bpf_d *d;
{
 struct bpf_d **p;
 struct bpf_if *bp;

 bp = d->bd_bif;




 if (d->bd_promisc) {
  int error;

  d->bd_promisc = 0;
  error = ifpromisc(bp->bif_ifp, 0);
  if (error && !(error == 22 || error == 19))





   panic("bpf: ifpromisc failed");
 }

 p = &bp->bif_dlist;
 while (*p != d) {
  p = &(*p)->bd_next;
  if (*p == 0)
   panic("bpf_detachd: descriptor not in list");
 }
 *p = (*p)->bd_next;
 if (bp->bif_dlist == 0)



  *d->bd_bif->bif_driverp = 0;
 d->bd_bif = 0;
}
# 299 "openbsd3/net/bpf.c"
void
bpfilterattach(n)
 int n;
{
 int i;

 global_bpf_dtab[get_stack_id()] = malloc(n * sizeof(*global_bpf_dtab[get_stack_id()]), 2, 0x0001);
 if (!global_bpf_dtab[get_stack_id()])
  return;
 global_nbpfilter[get_stack_id()] = n;
 bzero(global_bpf_dtab[get_stack_id()], n * sizeof(*global_bpf_dtab[get_stack_id()]));



 if (!((&global_bpf_dtab[get_stack_id()][0]) == (&global_bpf_dtab[get_stack_id()][0])->bd_next))
  for (i = 0; i < global_nbpfilter[get_stack_id()]; ++i)
   ((&global_bpf_dtab[get_stack_id()][i])->bd_next = (&global_bpf_dtab[get_stack_id()][i]));
}






int
bpfopen(dev, flag, mode, p)
 dev_t dev;
 int flag;
 int mode;
 struct proc *p;
{
 struct bpf_d *d;

 if (((int32_t)((dev) & 0xff) | (((dev) & 0xffff0000) >> 8)) >= global_nbpfilter[get_stack_id()])
  return (6);




 d = &global_bpf_dtab[get_stack_id()][((int32_t)((dev) & 0xff) | (((dev) & 0xffff0000) >> 8))];
 if (!((d) == (d)->bd_next))
  return (16);


 bzero((char *)d, sizeof(*d));
 d->bd_bufsize = global_bpf_bufsize[get_stack_id()];
 d->bd_sig = 23;

 return (0);
}






int
bpfclose(dev, flag, mode, p)
 dev_t dev;
 int flag;
 int mode;
 struct proc *p;
{
 struct bpf_d *d = &global_bpf_dtab[get_stack_id()][((int32_t)((dev) & 0xff) | (((dev) & 0xffff0000) >> 8))];
 int s;

 s = splraise((0x20 + ((6) << 4)));
 if (d->bd_bif)
  bpf_detachd(d);
 splx(s);
 bpf_freed(d);

 return (0);
}
# 388 "openbsd3/net/bpf.c"
int
bpfread(dev, uio, ioflag)
 dev_t dev;
 struct uio *uio;
 int ioflag;
{
 struct bpf_d *d = &global_bpf_dtab[get_stack_id()][((int32_t)((dev) & 0xff) | (((dev) & 0xffff0000) >> 8))];
 int error;
 int s;

 if (d->bd_bif == 0)
  return (6);





 if (uio->uio_resid != d->bd_bufsize)
  return (22);

 s = splraise((0x20 + ((6) << 4)));





 if (d->bd_rtout != -1 && d->bd_rdStart == 0)
  d->bd_rdStart = global_ticks[get_stack_id()];
 else
  d->bd_rdStart = 0;






 while (d->bd_hbuf == 0) {
  if (d->bd_immediate && d->bd_slen != 0) {





   (d)->bd_hbuf = (d)->bd_sbuf; (d)->bd_hlen = (d)->bd_slen; (d)->bd_sbuf = (d)->bd_fbuf; (d)->bd_slen = 0; (d)->bd_fbuf = 0;;
   break;
  }
  if ((d->bd_rtout != -1) || (d->bd_rdStart + d->bd_rtout) < global_ticks[get_stack_id()]) {
   error = ltsleep((caddr_t)d, 26|0x100, "bpf", d->bd_rtout, 0L)
                   ;
  } else {
   if (d->bd_rtout == -1) {

    error = 35;
   } else
    error = 0;
  }
  if (error == 4 || error == -1) {
   splx(s);
   return (error);
  }
  if (error == 35) {





   if (d->bd_hbuf)





    break;

   if (d->bd_slen == 0) {
    splx(s);
    return (0);
   }
   (d)->bd_hbuf = (d)->bd_sbuf; (d)->bd_hlen = (d)->bd_slen; (d)->bd_sbuf = (d)->bd_fbuf; (d)->bd_slen = 0; (d)->bd_fbuf = 0;;
   break;
  }
 }



 splx(s);






 error = uiomove(d->bd_hbuf, d->bd_hlen, uio);

 s = splraise((0x20 + ((6) << 4)));
 d->bd_fbuf = d->bd_hbuf;
 d->bd_hbuf = 0;
 d->bd_hlen = 0;
 splx(s);

 return (error);
}





static __inline void
bpf_wakeup(d)
 struct bpf_d *d;
{
 wakeup((caddr_t)d);
 if (d->bd_async && d->bd_sig)
  csignal(d->bd_pgid, d->bd_sig,
      d->bd_siguid, d->bd_sigeuid);

 selwakeup(&d->bd_sel);

 d->bd_sel.si_selpid = 0;
 if ((&d->bd_sel.si_note) != 0L) knote(&d->bd_sel.si_note, 0);
}

int
bpfwrite(dev, uio, ioflag)
 dev_t dev;
 struct uio *uio;
 int ioflag;
{
 struct bpf_d *d = &global_bpf_dtab[get_stack_id()][((int32_t)((dev) & 0xff) | (((dev) & 0xffff0000) >> 8))];
 struct ifnet *ifp;
 struct mbuf *m;
 int error, s;
 struct sockaddr_storage dst;

 if (d->bd_bif == 0)
  return (6);

 ifp = d->bd_bif->bif_ifp;

 if (uio->uio_resid == 0)
  return (0);

 error = bpf_movein(uio, (int)d->bd_bif->bif_dlt, &m,
     (struct sockaddr *)&dst, d->bd_wfilter);
 if (error)
  return (error);

 if (m->M_dat.MH.MH_pkthdr.len > ifp->if_data.ifi_mtu) {
  m_freem(m);
  return (40);
 }

 if (d->bd_hdrcmplt)
  dst.ss_family = 31;

 s = splraise((0x20 + ((1) << 4)));
 error = (*ifp->if_output)(ifp, m, (struct sockaddr *)&dst,
     (struct rtentry *)0);
 splx(s);



 return (error);
}





void
bpf_reset_d(d)
 struct bpf_d *d;
{
 if (d->bd_hbuf) {

  d->bd_fbuf = d->bd_hbuf;
  d->bd_hbuf = 0;
 }
 d->bd_slen = 0;
 d->bd_hlen = 0;
 d->bd_rcount = 0;
 d->bd_dcount = 0;
}
# 590 "openbsd3/net/bpf.c"
int
bpfioctl(dev, cmd, addr, flag, p)
 dev_t dev;
 u_long cmd;
 caddr_t addr;
 int flag;
 struct proc *p;
{
 struct bpf_d *d = &global_bpf_dtab[get_stack_id()][((int32_t)((dev) & 0xff) | (((dev) & 0xffff0000) >> 8))];
 int s, error = 0;

 if (d->bd_locked && suser(p, 0) != 0) {

  switch (cmd) {
  case ((unsigned long)0x40000000 | ((sizeof(u_int) & 0x1fff) << 16) | ((('B')) << 8) | ((102))):
  case ((unsigned long)0x20000000 | ((0 & 0x1fff) << 16) | ((('B')) << 8) | ((104))):
  case ((unsigned long)0x40000000 | ((sizeof(u_int) & 0x1fff) << 16) | ((('B')) << 8) | ((106))):
  case ((unsigned long)0x40000000 | ((sizeof(struct ifreq) & 0x1fff) << 16) | ((('B')) << 8) | ((107))):
  case ((unsigned long)0x40000000 | ((sizeof(struct timeval) & 0x1fff) << 16) | ((('B')) << 8) | ((110))):
  case ((unsigned long)0x40000000 | ((sizeof(struct bpf_stat) & 0x1fff) << 16) | ((('B')) << 8) | ((111))):
  case ((unsigned long)0x40000000 | ((sizeof(struct bpf_version) & 0x1fff) << 16) | ((('B')) << 8) | ((113))):
  case ((unsigned long)0x40000000 | ((sizeof(u_int) & 0x1fff) << 16) | ((('B')) << 8) | ((115))):
  case ((unsigned long)0x40000000 | ((sizeof(u_int) & 0x1fff) << 16) | ((('B')) << 8) | ((116))):
  case ((unsigned long)0x40000000 | ((sizeof(int) & 0x1fff) << 16) | ((('f')) << 8) | ((127))):
  case ((unsigned long)0x20000000 | ((0 & 0x1fff) << 16) | ((('B')) << 8) | ((118))):
  case ((unsigned long)0x80000000 | ((sizeof(struct timeval) & 0x1fff) << 16) | ((('B')) << 8) | ((109))):
  case ((unsigned long)0x80000000 | ((sizeof(u_int) & 0x1fff) << 16) | ((('B')) << 8) | ((112))):
  case ((unsigned long)0x40000000 | ((sizeof(int) & 0x1fff) << 16) | ((('t')) << 8) | ((119))):
   break;
  default:
   return (1);
  }
 }

 switch (cmd) {

 default:
  error = 22;
  break;




 case ((unsigned long)0x40000000 | ((sizeof(int) & 0x1fff) << 16) | ((('f')) << 8) | ((127))):
  {
   int n;

   s = splraise((0x20 + ((6) << 4)));
   n = d->bd_slen;
   if (d->bd_hbuf)
    n += d->bd_hlen;
   splx(s);

   *(int *)addr = n;
   break;
  }




 case ((unsigned long)0x40000000 | ((sizeof(u_int) & 0x1fff) << 16) | ((('B')) << 8) | ((102))):
  *(u_int *)addr = d->bd_bufsize;
  break;




 case (((unsigned long)0x80000000|(unsigned long)0x40000000) | ((sizeof(u_int) & 0x1fff) << 16) | ((('B')) << 8) | ((102))):
  if (d->bd_bif != 0)
   error = 22;
  else {
   u_int size = *(u_int *)addr;

   if (size > global_bpf_maxbufsize[get_stack_id()])
    *(u_int *)addr = size = global_bpf_maxbufsize[get_stack_id()];
   else if (size < 32)
    *(u_int *)addr = size = 32;
   d->bd_bufsize = size;
  }
  break;




 case ((unsigned long)0x80000000 | ((sizeof(struct bpf_program) & 0x1fff) << 16) | ((('B')) << 8) | ((103))):
  error = bpf_setf(d, (struct bpf_program *)addr, 0);
  break;




 case ((unsigned long)0x80000000 | ((sizeof(struct bpf_program) & 0x1fff) << 16) | ((('B')) << 8) | ((119))):
  error = bpf_setf(d, (struct bpf_program *)addr, 1);
  break;




 case ((unsigned long)0x20000000 | ((0 & 0x1fff) << 16) | ((('B')) << 8) | ((104))):
  s = splraise((0x20 + ((6) << 4)));
  bpf_reset_d(d);
  splx(s);
  break;




 case ((unsigned long)0x20000000 | ((0 & 0x1fff) << 16) | ((('B')) << 8) | ((105))):
  if (d->bd_bif == 0) {



   error = 22;
   break;
  }
  s = splraise((0x20 + ((6) << 4)));
  if (d->bd_promisc == 0) {
   error = ifpromisc(d->bd_bif->bif_ifp, 1);
   if (error == 0)
    d->bd_promisc = 1;
  }
  splx(s);
  break;




 case ((unsigned long)0x40000000 | ((sizeof(u_int) & 0x1fff) << 16) | ((('B')) << 8) | ((106))):
  if (d->bd_bif == 0)
   error = 22;
  else
   *(u_int *)addr = d->bd_bif->bif_dlt;
  break;




 case ((unsigned long)0x40000000 | ((sizeof(struct ifreq) & 0x1fff) << 16) | ((('B')) << 8) | ((107))):
  if (d->bd_bif == 0)
   error = 22;
  else
   bpf_ifname(d->bd_bif->bif_ifp, (struct ifreq *)addr);
  break;




 case ((unsigned long)0x80000000 | ((sizeof(struct ifreq) & 0x1fff) << 16) | ((('B')) << 8) | ((108))):
  error = bpf_setif(d, (struct ifreq *)addr);
  break;




 case ((unsigned long)0x80000000 | ((sizeof(struct timeval) & 0x1fff) << 16) | ((('B')) << 8) | ((109))):
  {
   struct timeval *tv = (struct timeval *)addr;


   d->bd_rtout = tv->tv_sec * global_hz[get_stack_id()] + tv->tv_usec / global_tick[get_stack_id()];
   if (d->bd_rtout == 0 && tv->tv_usec != 0)
    d->bd_rtout = 1;
   break;
  }




 case ((unsigned long)0x40000000 | ((sizeof(struct timeval) & 0x1fff) << 16) | ((('B')) << 8) | ((110))):
  {
   struct timeval *tv = (struct timeval *)addr;

   tv->tv_sec = d->bd_rtout / global_hz[get_stack_id()];
   tv->tv_usec = (d->bd_rtout % global_hz[get_stack_id()]) * global_tick[get_stack_id()];
   break;
  }




 case ((unsigned long)0x40000000 | ((sizeof(struct bpf_stat) & 0x1fff) << 16) | ((('B')) << 8) | ((111))):
  {
   struct bpf_stat *bs = (struct bpf_stat *)addr;

   bs->bs_recv = d->bd_rcount;
   bs->bs_drop = d->bd_dcount;
   break;
  }




 case ((unsigned long)0x80000000 | ((sizeof(u_int) & 0x1fff) << 16) | ((('B')) << 8) | ((112))):
  d->bd_immediate = *(u_int *)addr;
  break;

 case ((unsigned long)0x40000000 | ((sizeof(struct bpf_version) & 0x1fff) << 16) | ((('B')) << 8) | ((113))):
  {
   struct bpf_version *bv = (struct bpf_version *)addr;

   bv->bv_major = 1;
   bv->bv_minor = 1;
   break;
  }

 case ((unsigned long)0x40000000 | ((sizeof(u_int) & 0x1fff) << 16) | ((('B')) << 8) | ((116))):
  *(u_int *)addr = d->bd_hdrcmplt;
  break;

 case ((unsigned long)0x80000000 | ((sizeof(u_int) & 0x1fff) << 16) | ((('B')) << 8) | ((117))):
  d->bd_hdrcmplt = *(u_int *)addr ? 1 : 0;
  break;

 case ((unsigned long)0x20000000 | ((0 & 0x1fff) << 16) | ((('B')) << 8) | ((118))):
  d->bd_locked = 1;
  break;

 case ((unsigned long)0x80000000 | ((sizeof(int) & 0x1fff) << 16) | ((('f')) << 8) | ((126))):
  if (*(int *)addr)
   d->bd_rtout = -1;
  else
   d->bd_rtout = 0;
  break;

 case ((unsigned long)0x80000000 | ((sizeof(int) & 0x1fff) << 16) | ((('f')) << 8) | ((125))):
  d->bd_async = *(int *)addr;
  break;
# 826 "openbsd3/net/bpf.c"
 case ((unsigned long)0x80000000 | ((sizeof(int) & 0x1fff) << 16) | ((('t')) << 8) | ((118))):
  d->bd_pgid = *(int *)addr;
  d->bd_siguid = p->p_cred->p_ruid;
  d->bd_sigeuid = p->p_cred->pc_ucred->cr_uid;
  break;

 case ((unsigned long)0x40000000 | ((sizeof(int) & 0x1fff) << 16) | ((('t')) << 8) | ((119))):
  *(int *)addr = d->bd_pgid;
  break;

 case ((unsigned long)0x80000000 | ((sizeof(u_int) & 0x1fff) << 16) | ((('B')) << 8) | ((114))):
  {
    u_int sig;

   sig = *(u_int *)addr;

   if (sig >= 32)
    error = 22;
   else
    d->bd_sig = sig;
   break;
  }
 case ((unsigned long)0x40000000 | ((sizeof(u_int) & 0x1fff) << 16) | ((('B')) << 8) | ((115))):
  *(u_int *)addr = d->bd_sig;
  break;
 }
 return (error);
}





int
bpf_setf(d, fp, wf)
 struct bpf_d *d;
 struct bpf_program *fp;
 int wf;
{
 struct bpf_insn *fcode, *old;
 u_int flen, size;
 int s;

 old = wf ? d->bd_wfilter : d->bd_rfilter;
 if (fp->bf_insns == 0) {
  if (fp->bf_len != 0)
   return (22);
  s = splraise((0x20 + ((6) << 4)));
  if (wf)
   d->bd_wfilter = 0;
  else
   d->bd_rfilter = 0;
  bpf_reset_d(d);
  splx(s);
  if (old != 0)
   free((caddr_t)old, 2);
  return (0);
 }
 flen = fp->bf_len;
 if (flen > 512)
  return (22);

 size = flen * sizeof(*fp->bf_insns);
 fcode = (struct bpf_insn *)malloc(size, 2, 0x0000);
 if (copyin((caddr_t)fp->bf_insns, (caddr_t)fcode, size) == 0 &&
     bpf_validate(fcode, (int)flen)) {
  s = splraise((0x20 + ((6) << 4)));
  if (wf)
   d->bd_wfilter = fcode;
  else
   d->bd_rfilter = fcode;
  bpf_reset_d(d);
  splx(s);
  if (old != 0)
   free((caddr_t)old, 2);

  return (0);
 }
 free((caddr_t)fcode, 2);
 return (22);
}






int
bpf_setif(d, ifr)
 struct bpf_d *d;
 struct ifreq *ifr;
{
 struct bpf_if *bp;
 char *cp;
 int unit_seen, i, s, error;






 unit_seen = 0;
 cp = ifr->ifr_name;
 cp[sizeof(ifr->ifr_name) - 1] = '\0';
 while (*cp++)
  if (*cp >= '0' && *cp <= '9')
   unit_seen = 1;
 if (!unit_seen) {

  for (i = 0; i < (16 - 1); ++i) {
   if ((ifr->ifr_name[i] >= 'a' &&
        ifr->ifr_name[i] <= 'z') ||
       (ifr->ifr_name[i] >= 'A' &&
        ifr->ifr_name[i] <= 'Z'))
    continue;
   ifr->ifr_name[i] = '0';
  }
 }




 for (bp = global_bpf_iflist[get_stack_id()]; bp != 0; bp = bp->bif_next) {
  struct ifnet *ifp = bp->bif_ifp;

  if (ifp == 0 ||
      strcmp(ifp->if_xname, ifr->ifr_name) != 0)
   continue;







  if ((ifp->if_flags & 0x1) == 0)
   return (50);

  if (d->bd_sbuf == 0) {
   error = bpf_allocbufs(d);
   if (error != 0)
    return (error);
  }
  s = splraise((0x20 + ((6) << 4)));
  if (bp != d->bd_bif) {
   if (d->bd_bif)



    bpf_detachd(d);

   bpf_attachd(d, bp);
  }
  bpf_reset_d(d);
  splx(s);
  return (0);
 }

 return (6);
}




void
bpf_ifname(ifp, ifr)
 struct ifnet *ifp;
 struct ifreq *ifr;
{
 bcopy(ifp->if_xname, ifr->ifr_name, 16);
}




int
bpfpoll(dev, events, p)
 dev_t dev;
 int events;
 struct proc *p;
{
 struct bpf_d *d;
 int s, revents;

 revents = events & (0x0001 | 0x0040);
 if (revents == 0)
  return (0);




 d = &global_bpf_dtab[get_stack_id()][((int32_t)((dev) & 0xff) | (((dev) & 0xffff0000) >> 8))];
 s = splraise((0x20 + ((6) << 4)));
 if (d->bd_hlen == 0 && (!d->bd_immediate || d->bd_slen == 0)) {
  revents = 0;



  if (d->bd_rtout != -1 && d->bd_rdStart == 0)
   d->bd_rdStart = global_ticks[get_stack_id()];
  selrecord(p, &d->bd_sel);
 }
 splx(s);
 return (revents);
}

typedef  struct filterops  _GLOBAL_250_T;  _GLOBAL_250_T  global_bpfread_filtops[NUM_STACKS] = {  { 1 , 0L  , filt_bpfrdetach  , filt_bpfread  } ,  { 1 , 0L  , filt_bpfrdetach  , filt_bpfread  } ,  { 1 , 0L  , filt_bpfrdetach  , filt_bpfread  } ,  { 1 , 0L  , filt_bpfrdetach  , filt_bpfread  } ,  { 1 , 0L  , filt_bpfrdetach  , filt_bpfread  } ,  { 1 , 0L  , filt_bpfrdetach  , filt_bpfread  } ,  { 1 , 0L  , filt_bpfrdetach  , filt_bpfread  } ,  { 1 , 0L  , filt_bpfrdetach  , filt_bpfread  } ,  { 1 , 0L  , filt_bpfrdetach  , filt_bpfread  } ,  { 1 , 0L  , filt_bpfrdetach  , filt_bpfread  } ,  { 1 , 0L  , filt_bpfrdetach  , filt_bpfread  } ,  { 1 , 0L  , filt_bpfrdetach  , filt_bpfread  } ,  { 1 , 0L  , filt_bpfrdetach  , filt_bpfread  } ,  { 1 , 0L  , filt_bpfrdetach  , filt_bpfread  } ,  { 1 , 0L  , filt_bpfrdetach  , filt_bpfread  } ,  { 1 , 0L  , filt_bpfrdetach  , filt_bpfread  } ,  { 1 , 0L  , filt_bpfrdetach  , filt_bpfread  } ,  { 1 , 0L  , filt_bpfrdetach  , filt_bpfread  } ,  { 1 , 0L  , filt_bpfrdetach  , filt_bpfread  } ,  { 1 , 0L  , filt_bpfrdetach  , filt_bpfread  } ,  { 1 , 0L  , filt_bpfrdetach  , filt_bpfread  } ,  { 1 , 0L  , filt_bpfrdetach  , filt_bpfread  } ,  { 1 , 0L  , filt_bpfrdetach  , filt_bpfread  } ,  { 1 , 0L  , filt_bpfrdetach  , filt_bpfread  } ,  { 1 , 0L  , filt_bpfrdetach  , filt_bpfread  } ,  { 1 , 0L  , filt_bpfrdetach  , filt_bpfread  } ,  { 1 , 0L  , filt_bpfrdetach  , filt_bpfread  } ,  { 1 , 0L  , filt_bpfrdetach  , filt_bpfread  } ,  { 1 , 0L  , filt_bpfrdetach  , filt_bpfread  } ,  { 1 , 0L  , filt_bpfrdetach  , filt_bpfread  } ,  { 1 , 0L  , filt_bpfrdetach  , filt_bpfread  } ,  { 1 , 0L  , filt_bpfrdetach  , filt_bpfread  } ,  { 1 , 0L  , filt_bpfrdetach  , filt_bpfread  } ,  { 1 , 0L  , filt_bpfrdetach  , filt_bpfread  } ,  { 1 , 0L  , filt_bpfrdetach  , filt_bpfread  } ,  { 1 , 0L  , filt_bpfrdetach  , filt_bpfread  } ,  { 1 , 0L  , filt_bpfrdetach  , filt_bpfread  } ,  { 1 , 0L  , filt_bpfrdetach  , filt_bpfread  } ,  { 1 , 0L  , filt_bpfrdetach  , filt_bpfread  } ,  { 1 , 0L  , filt_bpfrdetach  , filt_bpfread  } ,  { 1 , 0L  , filt_bpfrdetach  , filt_bpfread  } ,  { 1 , 0L  , filt_bpfrdetach  , filt_bpfread  } ,  { 1 , 0L  , filt_bpfrdetach  , filt_bpfread  } ,  { 1 , 0L  , filt_bpfrdetach  , filt_bpfread  } ,  { 1 , 0L  , filt_bpfrdetach  , filt_bpfread  } ,  { 1 , 0L  , filt_bpfrdetach  , filt_bpfread  } ,  { 1 , 0L  , filt_bpfrdetach  , filt_bpfread  } ,  { 1 , 0L  , filt_bpfrdetach  , filt_bpfread  } ,  { 1 , 0L  , filt_bpfrdetach  , filt_bpfread  } ,  { 1 , 0L  , filt_bpfrdetach  , filt_bpfread  } ,  };    
      

int
bpfkqfilter(dev_t dev,struct knote *kn)
{
 struct bpf_d *d = &global_bpf_dtab[get_stack_id()][((int32_t)((dev) & 0xff) | (((dev) & 0xffff0000) >> 8))];
 struct klist *klist;
 int s;

 switch (kn->kn_kevent.filter) {
 case (-1):
  klist = &d->bd_sel.si_note;
  kn->kn_fop = &global_bpfread_filtops[get_stack_id()];
  break;
 case (-2):
 default:
  return (1);
 }

 kn->kn_hook = (caddr_t)((u_long)dev);

 s = splraise((0x20 + ((6) << 4)));
 do { (kn)->kn_selnext.sle_next = (klist)->slh_first; (klist)->slh_first = (kn); } while (0);
 splx(s);

 return (0);
}

void
filt_bpfrdetach(struct knote *kn)
{
 dev_t dev = (dev_t)((u_long)kn->kn_hook);
 struct bpf_d *d = &global_bpf_dtab[get_stack_id()][((int32_t)((dev) & 0xff) | (((dev) & 0xffff0000) >> 8))];
 int s = splraise((0x20 + ((6) << 4)));

 do { if ((&d->bd_sel.si_note)->slh_first == (kn)) { do { ((&d->bd_sel.si_note))->slh_first = ((&d->bd_sel.si_note))->slh_first->kn_selnext.sle_next; } while (0); } else { struct knote *curelm = (&d->bd_sel.si_note)->slh_first; while( curelm->kn_selnext.sle_next != (kn) ) curelm = curelm->kn_selnext.sle_next; curelm->kn_selnext.sle_next = curelm->kn_selnext.sle_next->kn_selnext.sle_next; } } while (0);
 splx(s);
}

int
filt_bpfread(struct knote *kn, long hint)
{
 dev_t dev = (dev_t)((u_long)kn->kn_hook);
 struct bpf_d *d = &global_bpf_dtab[get_stack_id()][((int32_t)((dev) & 0xff) | (((dev) & 0xffff0000) >> 8))];
 int res, s;

 kn->kn_kevent.data = 0;

 s = splraise((0x20 + ((6) << 4)));
 res = d->bd_hlen != 0 || (d->bd_immediate && d->bd_slen != 0);
 splx(s);
 return (res);
}







void
bpf_tap(arg, pkt, pktlen)
 caddr_t arg;
 u_char *pkt;
 u_int pktlen;
{
 struct bpf_if *bp;
 struct bpf_d *d;
 size_t slen;





 bp = (struct bpf_if *)arg;
 for (d = bp->bif_dlist; d != 0; d = d->bd_next) {
  ++d->bd_rcount;
  slen = bpf_filter(d->bd_rfilter, pkt, pktlen, pktlen);
  if (slen != 0)
   bpf_catchpacket(d, pkt, pktlen, slen, bcopy);
 }
}





void
bpf_mcopy(src_arg, dst_arg, len)
 const void *src_arg;
 void *dst_arg;
 size_t len;
{
 const struct mbuf *m;
 u_int count;
 u_char *dst;

 m = src_arg;
 dst = dst_arg;
 while (len > 0) {
  if (m == 0)
   panic("bpf_mcopy");
  count = min(m->m_hdr.mh_len, len);
  bcopy(((caddr_t)((m)->m_hdr.mh_data)), (caddr_t)dst, count);
  m = m->m_hdr.mh_next;
  dst += count;
  len -= count;
 }
}




void
bpf_mtap(arg, m)
 caddr_t arg;
 struct mbuf *m;
{
 struct bpf_if *bp = (struct bpf_if *)arg;
 struct bpf_d *d;
 size_t pktlen, slen;
 struct mbuf *m0;

 if (m == 0L)
  return;

 pktlen = 0;
 for (m0 = m; m0 != 0; m0 = m0->m_hdr.mh_next)
  pktlen += m0->m_hdr.mh_len;

 for (d = bp->bif_dlist; d != 0; d = d->bd_next) {
  ++d->bd_rcount;
  slen = bpf_filter(d->bd_rfilter, (u_char *)m, pktlen, 0);
  if (slen != 0)
   bpf_catchpacket(d, (u_char *)m, pktlen, slen, bpf_mcopy);
 }
}
# 1179 "openbsd3/net/bpf.c"
void
bpf_catchpacket(d, pkt, pktlen, snaplen, cpfn)
 struct bpf_d *d;
 u_char *pkt;
 size_t pktlen, snaplen;
 void (*cpfn)(const void *, void *, size_t);
{
 struct bpf_hdr *hp;
 int totlen, curlen;
 int hdrlen = d->bd_bif->bif_hdrlen;
 struct timeval tv;







 totlen = hdrlen + min(snaplen, pktlen);
 if (totlen > d->bd_bufsize)
  totlen = d->bd_bufsize;




 curlen = (((d->bd_slen) + (sizeof(long) - 1)) & ~(sizeof(long) - 1));
 if (curlen + totlen > d->bd_bufsize) {





  if (d->bd_fbuf == 0) {




   ++d->bd_dcount;
   return;
  }
  (d)->bd_hbuf = (d)->bd_sbuf; (d)->bd_hlen = (d)->bd_slen; (d)->bd_sbuf = (d)->bd_fbuf; (d)->bd_slen = 0; (d)->bd_fbuf = 0;;
  bpf_wakeup(d);
  curlen = 0;
 }




 hp = (struct bpf_hdr *)(d->bd_sbuf + curlen);
 microtime(&tv);
 hp->bh_tstamp.tv_sec = tv.tv_sec;
 hp->bh_tstamp.tv_usec = tv.tv_usec;
 hp->bh_datalen = pktlen;
 hp->bh_hdrlen = hdrlen;



 (*cpfn)(pkt, (u_char *)hp + hdrlen, (hp->bh_caplen = totlen - hdrlen));
 d->bd_slen = curlen + totlen;

 if (d->bd_immediate) {




  bpf_wakeup(d);
 }

 if (d->bd_rdStart && (d->bd_rtout + d->bd_rdStart < global_ticks[get_stack_id()])) {





  if (d->bd_fbuf) {
   d->bd_rdStart = 0;
   (d)->bd_hbuf = (d)->bd_sbuf; (d)->bd_hlen = (d)->bd_slen; (d)->bd_sbuf = (d)->bd_fbuf; (d)->bd_slen = 0; (d)->bd_fbuf = 0;;
   bpf_wakeup(d);
   curlen = 0;
  }
 }
}




int
bpf_allocbufs(d)
 struct bpf_d *d;
{
 d->bd_fbuf = (caddr_t)malloc(d->bd_bufsize, 2, 0x0001);
 if (d->bd_fbuf == 0L)
  return (55);
 d->bd_sbuf = (caddr_t)malloc(d->bd_bufsize, 2, 0x0001);
 if (d->bd_sbuf == 0L) {
  free(d->bd_fbuf, 2);
  return (55);
 }
 d->bd_slen = 0;
 d->bd_hlen = 0;
 return (0);
}





void
bpf_freed(d)
 struct bpf_d *d;
{





 if (d->bd_sbuf != 0) {
  free(d->bd_sbuf, 2);
  if (d->bd_hbuf != 0)
   free(d->bd_hbuf, 2);
  if (d->bd_fbuf != 0)
   free(d->bd_fbuf, 2);
 }
 if (d->bd_rfilter)
  free((caddr_t)d->bd_rfilter, 2);
 if (d->bd_wfilter)
  free((caddr_t)d->bd_wfilter, 2);

 ((d)->bd_next = (d));
}






void
bpfattach(driverp, ifp, dlt, hdrlen)
 caddr_t *driverp;
 struct ifnet *ifp;
 u_int dlt, hdrlen;
{
 struct bpf_if *bp;
 bp = (struct bpf_if *)malloc(sizeof(*bp), 2, 0x0001);

 if (bp == 0)
  panic("bpfattach");

 bp->bif_dlist = 0;
 bp->bif_driverp = (struct bpf_if **)driverp;
 bp->bif_ifp = ifp;
 bp->bif_dlt = dlt;

 bp->bif_next = global_bpf_iflist[get_stack_id()];
 global_bpf_iflist[get_stack_id()] = bp;

 *bp->bif_driverp = 0;







 bp->bif_hdrlen = (((hdrlen + 18) + (sizeof(long) - 1)) & ~(sizeof(long) - 1)) - hdrlen;
}


void
bpfdetach(ifp)
 struct ifnet *ifp;
{
 struct bpf_if *bp, *nbp, **pbp = &global_bpf_iflist[get_stack_id()];
 struct bpf_d *bd;
 int maj, mn;

 for (bp = global_bpf_iflist[get_stack_id()]; bp; bp = nbp) {
  nbp= bp->bif_next;
  if (bp->bif_ifp == ifp) {
   *pbp = nbp;


   for (maj = 0; maj < global_nchrdev[get_stack_id()]; maj++)
    if ((*_GLOBAL_cdevsw_13_A[get_stack_id()])[maj].d_open == bpfopen)
     break;

   for (bd = bp->bif_dlist; bd; bd = bp->bif_dlist)




    for (mn = 0; mn < global_nbpfilter[get_stack_id()]; mn++)
     if (&global_bpf_dtab[get_stack_id()][mn] == bd) {
      vdevgone(maj, mn, mn, VCHR);
      break;
     }

   free(bp, 2);
  } else
   pbp = &bp->bif_next;
 }
 ifp->if_bpf = 0L;
}

int
bpf_sysctl(int *name, u_int namelen, void *oldp, size_t *oldlenp, void *newp,
    size_t newlen)
{
 int newval;
 int error;

 if (namelen != 1)
  return (20);

 switch (name[0]) {
 case 1:
  newval = global_bpf_bufsize[get_stack_id()];
  error = sysctl_int(oldp, oldlenp, newp, newlen, &newval);
  if (error)
   return (error);
  if (newval < 32 || newval > global_bpf_maxbufsize[get_stack_id()])
   return (22);
  global_bpf_bufsize[get_stack_id()] = newval;
  break;
 case 2:
  newval = global_bpf_maxbufsize[get_stack_id()];
  error = sysctl_int(oldp, oldlenp, newp, newlen, &newval);
  if (error)
   return (error);
  if (newval < 32)
   return (22);
  global_bpf_maxbufsize[get_stack_id()] = newval;
  break;
 default:
  return (45);
 }
 return (0);
}

