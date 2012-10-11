# 1 "openbsd3/netipx/spx_usrreq.c"
# 1 "/home/cmcc/omnet_workspace/inet/3rdparty/nsc-0.5.2//"
# 1 "<built-in>"
# 1 "<command-line>"
# 1 "openbsd3/netipx/spx_usrreq.c"
# 39 "openbsd3/netipx/spx_usrreq.c"
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
# 40 "openbsd3/netipx/spx_usrreq.c" 2
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
# 41 "openbsd3/netipx/spx_usrreq.c" 2
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
# 42 "openbsd3/netipx/spx_usrreq.c" 2
# 1 "openbsd3/sys/mbuf.h" 1
# 38 "openbsd3/sys/mbuf.h"
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
# 43 "openbsd3/netipx/spx_usrreq.c" 2
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
# 44 "openbsd3/netipx/spx_usrreq.c" 2
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
# 45 "openbsd3/netipx/spx_usrreq.c" 2
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
# 46 "openbsd3/netipx/spx_usrreq.c" 2

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
typedef  struct radix_mask { short  rm_b ;  char  rm_unused ;   u_char  rm_flags ;   struct radix_mask   * rm_mklist  ;   union { caddr_t  rmu_mask ;  struct radix_node   * rmu_leaf  ;   }   rm_rmu ;   int  rm_refs ;   }   _GLOBAL_78_T; extern  _GLOBAL_78_T  * global_rn_mkfreelist[NUM_STACKS];    
  
  
  
   
  
   
    
  
  
 
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
typedef  struct route_cb   _GLOBAL_79_T; extern  _GLOBAL_79_T  global_route_cb[NUM_STACKS];    
typedef  struct rtstat   _GLOBAL_80_T; extern  _GLOBAL_80_T  global_rtstat[NUM_STACKS];    
typedef  struct radix_node_head   _GLOBAL_81_T; extern  _GLOBAL_81_T  * _GLOBAL_0_rt_tables_I [ ]  ; extern  _GLOBAL_81_T  * _GLOBAL_1_rt_tables_I [ ]  ; extern  _GLOBAL_81_T  * _GLOBAL_2_rt_tables_I [ ]  ; extern  _GLOBAL_81_T  * _GLOBAL_3_rt_tables_I [ ]  ; extern  _GLOBAL_81_T  * _GLOBAL_4_rt_tables_I [ ]  ; extern  _GLOBAL_81_T  * _GLOBAL_5_rt_tables_I [ ]  ; extern  _GLOBAL_81_T  * _GLOBAL_6_rt_tables_I [ ]  ; extern  _GLOBAL_81_T  * _GLOBAL_7_rt_tables_I [ ]  ; extern  _GLOBAL_81_T  * _GLOBAL_8_rt_tables_I [ ]  ; extern  _GLOBAL_81_T  * _GLOBAL_9_rt_tables_I [ ]  ; extern  _GLOBAL_81_T  * _GLOBAL_10_rt_tables_I [ ]  ; extern  _GLOBAL_81_T  * _GLOBAL_11_rt_tables_I [ ]  ; extern  _GLOBAL_81_T  * _GLOBAL_12_rt_tables_I [ ]  ; extern  _GLOBAL_81_T  * _GLOBAL_13_rt_tables_I [ ]  ; extern  _GLOBAL_81_T  * _GLOBAL_14_rt_tables_I [ ]  ; extern  _GLOBAL_81_T  * _GLOBAL_15_rt_tables_I [ ]  ; extern  _GLOBAL_81_T  * _GLOBAL_16_rt_tables_I [ ]  ; extern  _GLOBAL_81_T  * _GLOBAL_17_rt_tables_I [ ]  ; extern  _GLOBAL_81_T  * _GLOBAL_18_rt_tables_I [ ]  ; extern  _GLOBAL_81_T  * _GLOBAL_19_rt_tables_I [ ]  ; extern  _GLOBAL_81_T  * _GLOBAL_20_rt_tables_I [ ]  ; extern  _GLOBAL_81_T  * _GLOBAL_21_rt_tables_I [ ]  ; extern  _GLOBAL_81_T  * _GLOBAL_22_rt_tables_I [ ]  ; extern  _GLOBAL_81_T  * _GLOBAL_23_rt_tables_I [ ]  ; extern  _GLOBAL_81_T  * _GLOBAL_24_rt_tables_I [ ]  ; extern  _GLOBAL_81_T  * _GLOBAL_25_rt_tables_I [ ]  ; extern  _GLOBAL_81_T  * _GLOBAL_26_rt_tables_I [ ]  ; extern  _GLOBAL_81_T  * _GLOBAL_27_rt_tables_I [ ]  ; extern  _GLOBAL_81_T  * _GLOBAL_28_rt_tables_I [ ]  ; extern  _GLOBAL_81_T  * _GLOBAL_29_rt_tables_I [ ]  ; extern  _GLOBAL_81_T  * _GLOBAL_30_rt_tables_I [ ]  ; extern  _GLOBAL_81_T  * _GLOBAL_31_rt_tables_I [ ]  ; extern  _GLOBAL_81_T  * _GLOBAL_32_rt_tables_I [ ]  ; extern  _GLOBAL_81_T  * _GLOBAL_33_rt_tables_I [ ]  ; extern  _GLOBAL_81_T  * _GLOBAL_34_rt_tables_I [ ]  ; extern  _GLOBAL_81_T  * _GLOBAL_35_rt_tables_I [ ]  ; extern  _GLOBAL_81_T  * _GLOBAL_36_rt_tables_I [ ]  ; extern  _GLOBAL_81_T  * _GLOBAL_37_rt_tables_I [ ]  ; extern  _GLOBAL_81_T  * _GLOBAL_38_rt_tables_I [ ]  ; extern  _GLOBAL_81_T  * _GLOBAL_39_rt_tables_I [ ]  ; extern  _GLOBAL_81_T  * _GLOBAL_40_rt_tables_I [ ]  ; extern  _GLOBAL_81_T  * _GLOBAL_41_rt_tables_I [ ]  ; extern  _GLOBAL_81_T  * _GLOBAL_42_rt_tables_I [ ]  ; extern  _GLOBAL_81_T  * _GLOBAL_43_rt_tables_I [ ]  ; extern  _GLOBAL_81_T  * _GLOBAL_44_rt_tables_I [ ]  ; extern  _GLOBAL_81_T  * _GLOBAL_45_rt_tables_I [ ]  ; extern  _GLOBAL_81_T  * _GLOBAL_46_rt_tables_I [ ]  ; extern  _GLOBAL_81_T  * _GLOBAL_47_rt_tables_I [ ]  ; extern  _GLOBAL_81_T  * _GLOBAL_48_rt_tables_I [ ]  ; extern  _GLOBAL_81_T  * _GLOBAL_49_rt_tables_I [ ]  ; static __attribute__ ((unused)) __typeof__(_GLOBAL_0_rt_tables_I) *_GLOBAL_rt_tables_21_A[NUM_STACKS];   

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
# 48 "openbsd3/netipx/spx_usrreq.c" 2
# 1 "openbsd3/netinet/tcp_fsm.h" 1
# 49 "openbsd3/netipx/spx_usrreq.c" 2

# 1 "openbsd3/netipx/ipx.h" 1
# 111 "openbsd3/netipx/ipx.h"
typedef
union ipx_host {
 u_int8_t c_host[6] __attribute__((__packed__)) ;
 u_int16_t s_host[6/2] __attribute__((__packed__)) ;
} ipx_host_t;

typedef
union ipx_net {
 u_int8_t c_net[4] __attribute__((__packed__)) ;
 u_int16_t s_net[4/2] __attribute__((__packed__)) ;
 u_int32_t l_net __attribute__((__packed__)) ;
} ipx_net_t;

typedef u_int16_t ipx_port_t;

typedef
struct ipx_addr {
 ipx_net_t ipx_net __attribute__((__packed__)) ;
 ipx_host_t ipx_host __attribute__((__packed__)) ;
 ipx_port_t ipx_port __attribute__((__packed__)) ;
} ipx_addr_t;




struct sockaddr_ipx {
 u_int8_t sipx_len;
 u_int8_t sipx_family;
 u_int16_t sipx_type;
 struct ipx_addr sipx_addr;
};
# 150 "openbsd3/netipx/ipx.h"
struct ipx {
 u_int16_t ipx_sum __attribute__((__packed__)) ;
 u_int16_t ipx_len __attribute__((__packed__)) ;
 u_int8_t ipx_tc __attribute__((__packed__)) ;
 u_int8_t ipx_pt __attribute__((__packed__)) ;
 ipx_addr_t ipx_dna __attribute__((__packed__)) ;
 ipx_addr_t ipx_sna __attribute__((__packed__)) ;
};
# 197 "openbsd3/netipx/ipx.h"
typedef  int  _GLOBAL_82_T; extern  _GLOBAL_82_T  global_ipxcksum[NUM_STACKS];   
typedef  int  _GLOBAL_83_T; extern  _GLOBAL_83_T  global_ipxforwarding[NUM_STACKS];   
typedef  int  _GLOBAL_84_T; extern  _GLOBAL_84_T  global_ipxnetbios[NUM_STACKS];   
typedef  struct domain   _GLOBAL_85_T; extern  _GLOBAL_85_T  _GLOBAL_0_ipxdomain_I; extern  _GLOBAL_85_T  _GLOBAL_1_ipxdomain_I; extern  _GLOBAL_85_T  _GLOBAL_2_ipxdomain_I; extern  _GLOBAL_85_T  _GLOBAL_3_ipxdomain_I; extern  _GLOBAL_85_T  _GLOBAL_4_ipxdomain_I; extern  _GLOBAL_85_T  _GLOBAL_5_ipxdomain_I; extern  _GLOBAL_85_T  _GLOBAL_6_ipxdomain_I; extern  _GLOBAL_85_T  _GLOBAL_7_ipxdomain_I; extern  _GLOBAL_85_T  _GLOBAL_8_ipxdomain_I; extern  _GLOBAL_85_T  _GLOBAL_9_ipxdomain_I; extern  _GLOBAL_85_T  _GLOBAL_10_ipxdomain_I; extern  _GLOBAL_85_T  _GLOBAL_11_ipxdomain_I; extern  _GLOBAL_85_T  _GLOBAL_12_ipxdomain_I; extern  _GLOBAL_85_T  _GLOBAL_13_ipxdomain_I; extern  _GLOBAL_85_T  _GLOBAL_14_ipxdomain_I; extern  _GLOBAL_85_T  _GLOBAL_15_ipxdomain_I; extern  _GLOBAL_85_T  _GLOBAL_16_ipxdomain_I; extern  _GLOBAL_85_T  _GLOBAL_17_ipxdomain_I; extern  _GLOBAL_85_T  _GLOBAL_18_ipxdomain_I; extern  _GLOBAL_85_T  _GLOBAL_19_ipxdomain_I; extern  _GLOBAL_85_T  _GLOBAL_20_ipxdomain_I; extern  _GLOBAL_85_T  _GLOBAL_21_ipxdomain_I; extern  _GLOBAL_85_T  _GLOBAL_22_ipxdomain_I; extern  _GLOBAL_85_T  _GLOBAL_23_ipxdomain_I; extern  _GLOBAL_85_T  _GLOBAL_24_ipxdomain_I; extern  _GLOBAL_85_T  _GLOBAL_25_ipxdomain_I; extern  _GLOBAL_85_T  _GLOBAL_26_ipxdomain_I; extern  _GLOBAL_85_T  _GLOBAL_27_ipxdomain_I; extern  _GLOBAL_85_T  _GLOBAL_28_ipxdomain_I; extern  _GLOBAL_85_T  _GLOBAL_29_ipxdomain_I; extern  _GLOBAL_85_T  _GLOBAL_30_ipxdomain_I; extern  _GLOBAL_85_T  _GLOBAL_31_ipxdomain_I; extern  _GLOBAL_85_T  _GLOBAL_32_ipxdomain_I; extern  _GLOBAL_85_T  _GLOBAL_33_ipxdomain_I; extern  _GLOBAL_85_T  _GLOBAL_34_ipxdomain_I; extern  _GLOBAL_85_T  _GLOBAL_35_ipxdomain_I; extern  _GLOBAL_85_T  _GLOBAL_36_ipxdomain_I; extern  _GLOBAL_85_T  _GLOBAL_37_ipxdomain_I; extern  _GLOBAL_85_T  _GLOBAL_38_ipxdomain_I; extern  _GLOBAL_85_T  _GLOBAL_39_ipxdomain_I; extern  _GLOBAL_85_T  _GLOBAL_40_ipxdomain_I; extern  _GLOBAL_85_T  _GLOBAL_41_ipxdomain_I; extern  _GLOBAL_85_T  _GLOBAL_42_ipxdomain_I; extern  _GLOBAL_85_T  _GLOBAL_43_ipxdomain_I; extern  _GLOBAL_85_T  _GLOBAL_44_ipxdomain_I; extern  _GLOBAL_85_T  _GLOBAL_45_ipxdomain_I; extern  _GLOBAL_85_T  _GLOBAL_46_ipxdomain_I; extern  _GLOBAL_85_T  _GLOBAL_47_ipxdomain_I; extern  _GLOBAL_85_T  _GLOBAL_48_ipxdomain_I; extern  _GLOBAL_85_T  _GLOBAL_49_ipxdomain_I; static __attribute__ ((unused)) __typeof__(_GLOBAL_0_ipxdomain_I) *_GLOBAL_ipxdomain_22_A[NUM_STACKS];   
typedef  struct sockaddr_ipx   _GLOBAL_86_T; extern  _GLOBAL_86_T  global_ipx_netmask[NUM_STACKS];    
typedef  struct sockaddr_ipx   _GLOBAL_87_T; extern  _GLOBAL_87_T  global_ipx_hostmask[NUM_STACKS];    

typedef  union ipx_net   _GLOBAL_88_T; extern  _GLOBAL_88_T  global_ipx_zeronet[NUM_STACKS];    
typedef  union ipx_host   _GLOBAL_89_T; extern  _GLOBAL_89_T  global_ipx_zerohost[NUM_STACKS];    
typedef  union ipx_net   _GLOBAL_90_T; extern  _GLOBAL_90_T  global_ipx_broadnet[NUM_STACKS];    
typedef  union ipx_host   _GLOBAL_91_T; extern  _GLOBAL_91_T  global_ipx_broadhost[NUM_STACKS];    

typedef  u_long  _GLOBAL_92_T; extern  _GLOBAL_92_T  global_ipx_pexseq[NUM_STACKS];   
typedef  u_char  _GLOBAL_93_T; extern  _GLOBAL_93_T  _GLOBAL_0_ipxctlerrmap_I [ ] ; extern  _GLOBAL_93_T  _GLOBAL_1_ipxctlerrmap_I [ ] ; extern  _GLOBAL_93_T  _GLOBAL_2_ipxctlerrmap_I [ ] ; extern  _GLOBAL_93_T  _GLOBAL_3_ipxctlerrmap_I [ ] ; extern  _GLOBAL_93_T  _GLOBAL_4_ipxctlerrmap_I [ ] ; extern  _GLOBAL_93_T  _GLOBAL_5_ipxctlerrmap_I [ ] ; extern  _GLOBAL_93_T  _GLOBAL_6_ipxctlerrmap_I [ ] ; extern  _GLOBAL_93_T  _GLOBAL_7_ipxctlerrmap_I [ ] ; extern  _GLOBAL_93_T  _GLOBAL_8_ipxctlerrmap_I [ ] ; extern  _GLOBAL_93_T  _GLOBAL_9_ipxctlerrmap_I [ ] ; extern  _GLOBAL_93_T  _GLOBAL_10_ipxctlerrmap_I [ ] ; extern  _GLOBAL_93_T  _GLOBAL_11_ipxctlerrmap_I [ ] ; extern  _GLOBAL_93_T  _GLOBAL_12_ipxctlerrmap_I [ ] ; extern  _GLOBAL_93_T  _GLOBAL_13_ipxctlerrmap_I [ ] ; extern  _GLOBAL_93_T  _GLOBAL_14_ipxctlerrmap_I [ ] ; extern  _GLOBAL_93_T  _GLOBAL_15_ipxctlerrmap_I [ ] ; extern  _GLOBAL_93_T  _GLOBAL_16_ipxctlerrmap_I [ ] ; extern  _GLOBAL_93_T  _GLOBAL_17_ipxctlerrmap_I [ ] ; extern  _GLOBAL_93_T  _GLOBAL_18_ipxctlerrmap_I [ ] ; extern  _GLOBAL_93_T  _GLOBAL_19_ipxctlerrmap_I [ ] ; extern  _GLOBAL_93_T  _GLOBAL_20_ipxctlerrmap_I [ ] ; extern  _GLOBAL_93_T  _GLOBAL_21_ipxctlerrmap_I [ ] ; extern  _GLOBAL_93_T  _GLOBAL_22_ipxctlerrmap_I [ ] ; extern  _GLOBAL_93_T  _GLOBAL_23_ipxctlerrmap_I [ ] ; extern  _GLOBAL_93_T  _GLOBAL_24_ipxctlerrmap_I [ ] ; extern  _GLOBAL_93_T  _GLOBAL_25_ipxctlerrmap_I [ ] ; extern  _GLOBAL_93_T  _GLOBAL_26_ipxctlerrmap_I [ ] ; extern  _GLOBAL_93_T  _GLOBAL_27_ipxctlerrmap_I [ ] ; extern  _GLOBAL_93_T  _GLOBAL_28_ipxctlerrmap_I [ ] ; extern  _GLOBAL_93_T  _GLOBAL_29_ipxctlerrmap_I [ ] ; extern  _GLOBAL_93_T  _GLOBAL_30_ipxctlerrmap_I [ ] ; extern  _GLOBAL_93_T  _GLOBAL_31_ipxctlerrmap_I [ ] ; extern  _GLOBAL_93_T  _GLOBAL_32_ipxctlerrmap_I [ ] ; extern  _GLOBAL_93_T  _GLOBAL_33_ipxctlerrmap_I [ ] ; extern  _GLOBAL_93_T  _GLOBAL_34_ipxctlerrmap_I [ ] ; extern  _GLOBAL_93_T  _GLOBAL_35_ipxctlerrmap_I [ ] ; extern  _GLOBAL_93_T  _GLOBAL_36_ipxctlerrmap_I [ ] ; extern  _GLOBAL_93_T  _GLOBAL_37_ipxctlerrmap_I [ ] ; extern  _GLOBAL_93_T  _GLOBAL_38_ipxctlerrmap_I [ ] ; extern  _GLOBAL_93_T  _GLOBAL_39_ipxctlerrmap_I [ ] ; extern  _GLOBAL_93_T  _GLOBAL_40_ipxctlerrmap_I [ ] ; extern  _GLOBAL_93_T  _GLOBAL_41_ipxctlerrmap_I [ ] ; extern  _GLOBAL_93_T  _GLOBAL_42_ipxctlerrmap_I [ ] ; extern  _GLOBAL_93_T  _GLOBAL_43_ipxctlerrmap_I [ ] ; extern  _GLOBAL_93_T  _GLOBAL_44_ipxctlerrmap_I [ ] ; extern  _GLOBAL_93_T  _GLOBAL_45_ipxctlerrmap_I [ ] ; extern  _GLOBAL_93_T  _GLOBAL_46_ipxctlerrmap_I [ ] ; extern  _GLOBAL_93_T  _GLOBAL_47_ipxctlerrmap_I [ ] ; extern  _GLOBAL_93_T  _GLOBAL_48_ipxctlerrmap_I [ ] ; extern  _GLOBAL_93_T  _GLOBAL_49_ipxctlerrmap_I [ ] ; static __attribute__ ((unused)) __typeof__(_GLOBAL_0_ipxctlerrmap_I) *_GLOBAL_ipxctlerrmap_23_A[NUM_STACKS];  

struct route;
struct sockaddr;
struct socket;
struct ipxpcb;
void ipx_abort(struct ipxpcb *ipxp);
u_short ipx_cksum(struct mbuf *m, int len);
int ipx_control(struct socket *so, u_long cmd, caddr_t data,
    struct ifnet *ifp);
void *ipx_ctlinput(int cmd, struct sockaddr *arg_as_sa, void *dummy);
int ipx_ctloutput(int req, struct socket *so, int level, int name,
      struct mbuf **value);
int ipx_do_route(struct ipx_addr *src, struct route *ro);
void ipx_drop(struct ipxpcb *ipxp, int errno);
void ipx_forward(struct mbuf *m);
void ipx_init(void);
void ipx_input(struct mbuf *, ...);
void ipxintr(void);
int ipx_output(struct mbuf *m0, ...);
int ipx_outputfl(struct mbuf *m0, struct route *ro, int flags);
int ipx_output_type20(struct mbuf *m);
int ipx_raw_usrreq(struct socket *so, int req, struct mbuf *m,
       struct mbuf *nam, struct mbuf *control);
void ipx_undo_route(struct route *ro);
int ipx_usrreq(struct socket *so, int req, struct mbuf *m,
   struct mbuf *nam, struct mbuf *control);
void ipx_watch_output(struct mbuf *m, struct ifnet *ifp);
int ipx_sysctl(int *, u_int, void *, size_t *, void *, size_t);
void ipx_printhost(struct ipx_addr *addr);






struct ipx_addr ipx_addr(const char *);
char *ipx_ntoa(struct ipx_addr);

# 51 "openbsd3/netipx/spx_usrreq.c" 2
# 1 "openbsd3/netipx/ipx_pcb.h" 1
# 45 "openbsd3/netipx/ipx_pcb.h"
struct ipxpcb {
 struct { struct ipxpcb *le_next; struct ipxpcb **le_prev; } ipxp_hash;
 struct { struct ipxpcb *cqe_next; struct ipxpcb *cqe_prev; } ipxp_queue;
 struct ipxpcbtable *ipxp_table;
 struct socket *ipxp_socket;
 struct ipx_addr ipxp_faddr;
 struct ipx_addr ipxp_laddr;


 caddr_t ipxp_ppcb;
 struct route ipxp_route;
 struct ipx_addr ipxp_lastdst;
 u_long ipxp_notify_param;
 u_short ipxp_flags;
 u_char ipxp_dpt;
 u_char ipxp_rpt;
};

struct ipxpcbtable {
 struct { struct ipxpcb *cqh_first; struct ipxpcb *cqh_last; } ipxpt_queue;
 struct ipxppcbhead { struct ipxpcb *lh_first; } *ipxpt_hashtbl;
 u_long ipxpt_hash;
 u_int16_t ipxpt_lport;
};
# 88 "openbsd3/netipx/ipx_pcb.h"
typedef  struct ipxpcbtable   _GLOBAL_94_T; extern  _GLOBAL_94_T  global_ipxcbtable[NUM_STACKS]; extern  _GLOBAL_94_T  global_ipxrawcbtable[NUM_STACKS];     

void ipx_pcbinit(struct ipxpcbtable *, int);
int ipx_pcballoc(struct socket *so, struct ipxpcbtable *head);
int ipx_pcbbind(struct ipxpcb *ipxp, struct mbuf *nam);
int ipx_pcbconnect(struct ipxpcb *ipxp, struct mbuf *nam);
void ipx_pcbdetach(struct ipxpcb *ipxp);
void ipx_pcbdisconnect(struct ipxpcb *ipxp);
struct ipxpcb *ipx_pcblookup(struct ipx_addr *faddr, int lport, int wildp);
void ipx_pcbnotify(struct ipx_addr *dst, int errno,
     void (*notify)(struct ipxpcb *), long param);
void ipx_setpeeraddr(struct ipxpcb *ipxp, struct mbuf *nam);
void ipx_setsockaddr(struct ipxpcb *ipxp, struct mbuf *nam);
# 52 "openbsd3/netipx/spx_usrreq.c" 2
# 1 "openbsd3/netipx/ipx_var.h" 1
# 45 "openbsd3/netipx/ipx_var.h"
struct ipxstat {
 u_long ipxs_total;
 u_long ipxs_badsum;
 u_long ipxs_tooshort;
 u_long ipxs_toosmall;
 u_long ipxs_forward;
 u_long ipxs_cantforward;
 u_long ipxs_delivered;
 u_long ipxs_localout;
 u_long ipxs_odropped;
 u_long ipxs_noroute;
 u_long ipxs_mtutoosmall;
};
# 80 "openbsd3/netipx/ipx_var.h"
typedef  struct ipxstat   _GLOBAL_95_T; extern  _GLOBAL_95_T  global_ipxstat[NUM_STACKS];    
# 53 "openbsd3/netipx/spx_usrreq.c" 2
# 1 "openbsd3/netipx/spx.h" 1
# 48 "openbsd3/netipx/spx.h"
struct spxhdr {
 u_int8_t spx_cc __attribute__((__packed__)) ;
 u_int8_t spx_dt __attribute__((__packed__)) ;




 u_int16_t spx_sid __attribute__((__packed__)) ;
 u_int16_t spx_did __attribute__((__packed__)) ;
 u_int16_t spx_seq __attribute__((__packed__)) ;
 u_int16_t spx_ack __attribute__((__packed__)) ;
 u_int16_t spx_alo __attribute__((__packed__)) ;
};





struct spx {
 struct ipx si_i __attribute__((__packed__)) ;
 struct spxhdr si_s __attribute__((__packed__)) ;
};
# 87 "openbsd3/netipx/spx.h"
struct spx_q {
 struct { struct spx_q *tqe_next; struct spx_q **tqe_prev; } list;
 struct mbuf *m;
};




struct spxpcb {
 struct { struct spx_q *tqh_first; struct spx_q **tqh_last; } spxp_queue;
 struct ipxpcb *s_ipxpcb;
 u_char s_state;
 u_char s_flags;
# 108 "openbsd3/netipx/spx.h"
 u_short s_mtu;


 struct ipx *s_ipx;
 struct spxhdr s_shdr;
# 121 "openbsd3/netipx/spx.h"
 struct spxhdr s_rhdr;
 u_short s_rack;
 u_short s_ralo;
 u_short s_smax;
 u_short s_snxt;



 int s_cwnd;

 short s_swnd;
 short s_smxw;


 u_short s_swl1;
 u_short s_swl2;
 int s_cwmx;
 int s_ssthresh;






 short s_idle;

 short s_timer[4];
 short s_rxtshift;
 short s_rxtcur;
 u_short s_rtseq;
 short s_rtt;
 short s_srtt;
 short s_rttvar;
 char s_force;
 char s_dupacks;


 char s_oobflags;


 char s_iobc;

 u_short s_want;
 char s_outx;
 char s_inx;
 u_short s_flags2;


};






void spx_abort(struct ipxpcb *ipxp);
struct spxpcb *spx_close(struct spxpcb *cb);
void *spx_ctlinput(int cmd, struct sockaddr *arg_as_sa, void *dummy);
int spx_ctloutput(int req, struct socket *so, int level, int name,
      struct mbuf **value);
struct spxpcb *spx_disconnect(struct spxpcb *cb);
struct spxpcb *spx_drop(struct spxpcb *cb, int errno);
void spx_fasttimo(void);
void spx_init(void);
void spx_input(struct mbuf *m, ...);
int spx_output(struct spxpcb *cb, struct mbuf *m0);
void spx_quench(struct ipxpcb *ipxp);
int spx_reass(struct spxpcb *cb, struct mbuf *m0);
void spx_setpersist(struct spxpcb *cb);
void spx_slowtimo(void);
void spx_template(struct spxpcb *cb);
struct spxpcb *spx_timers(struct spxpcb *cb, int timer);
struct spxpcb *spx_usrclosed(struct spxpcb *cb);
int spx_usrreq(struct socket *so, int req, struct mbuf *m,
   struct mbuf *nam, struct mbuf *controlp);
int spx_usrreq_sp(struct socket *so, int req, struct mbuf *m,
      struct mbuf *nam, struct mbuf *controlp);
int spx_sysctl(int *, u_int, void *, size_t *, void *, size_t);
# 54 "openbsd3/netipx/spx_usrreq.c" 2
# 1 "openbsd3/netipx/spx_timer.h" 1
# 125 "openbsd3/netipx/spx_timer.h"
typedef  int  _GLOBAL_96_T; extern  _GLOBAL_96_T  _GLOBAL_0_spx_backoff_I [ ] ; extern  _GLOBAL_96_T  _GLOBAL_1_spx_backoff_I [ ] ; extern  _GLOBAL_96_T  _GLOBAL_2_spx_backoff_I [ ] ; extern  _GLOBAL_96_T  _GLOBAL_3_spx_backoff_I [ ] ; extern  _GLOBAL_96_T  _GLOBAL_4_spx_backoff_I [ ] ; extern  _GLOBAL_96_T  _GLOBAL_5_spx_backoff_I [ ] ; extern  _GLOBAL_96_T  _GLOBAL_6_spx_backoff_I [ ] ; extern  _GLOBAL_96_T  _GLOBAL_7_spx_backoff_I [ ] ; extern  _GLOBAL_96_T  _GLOBAL_8_spx_backoff_I [ ] ; extern  _GLOBAL_96_T  _GLOBAL_9_spx_backoff_I [ ] ; extern  _GLOBAL_96_T  _GLOBAL_10_spx_backoff_I [ ] ; extern  _GLOBAL_96_T  _GLOBAL_11_spx_backoff_I [ ] ; extern  _GLOBAL_96_T  _GLOBAL_12_spx_backoff_I [ ] ; extern  _GLOBAL_96_T  _GLOBAL_13_spx_backoff_I [ ] ; extern  _GLOBAL_96_T  _GLOBAL_14_spx_backoff_I [ ] ; extern  _GLOBAL_96_T  _GLOBAL_15_spx_backoff_I [ ] ; extern  _GLOBAL_96_T  _GLOBAL_16_spx_backoff_I [ ] ; extern  _GLOBAL_96_T  _GLOBAL_17_spx_backoff_I [ ] ; extern  _GLOBAL_96_T  _GLOBAL_18_spx_backoff_I [ ] ; extern  _GLOBAL_96_T  _GLOBAL_19_spx_backoff_I [ ] ; extern  _GLOBAL_96_T  _GLOBAL_20_spx_backoff_I [ ] ; extern  _GLOBAL_96_T  _GLOBAL_21_spx_backoff_I [ ] ; extern  _GLOBAL_96_T  _GLOBAL_22_spx_backoff_I [ ] ; extern  _GLOBAL_96_T  _GLOBAL_23_spx_backoff_I [ ] ; extern  _GLOBAL_96_T  _GLOBAL_24_spx_backoff_I [ ] ; extern  _GLOBAL_96_T  _GLOBAL_25_spx_backoff_I [ ] ; extern  _GLOBAL_96_T  _GLOBAL_26_spx_backoff_I [ ] ; extern  _GLOBAL_96_T  _GLOBAL_27_spx_backoff_I [ ] ; extern  _GLOBAL_96_T  _GLOBAL_28_spx_backoff_I [ ] ; extern  _GLOBAL_96_T  _GLOBAL_29_spx_backoff_I [ ] ; extern  _GLOBAL_96_T  _GLOBAL_30_spx_backoff_I [ ] ; extern  _GLOBAL_96_T  _GLOBAL_31_spx_backoff_I [ ] ; extern  _GLOBAL_96_T  _GLOBAL_32_spx_backoff_I [ ] ; extern  _GLOBAL_96_T  _GLOBAL_33_spx_backoff_I [ ] ; extern  _GLOBAL_96_T  _GLOBAL_34_spx_backoff_I [ ] ; extern  _GLOBAL_96_T  _GLOBAL_35_spx_backoff_I [ ] ; extern  _GLOBAL_96_T  _GLOBAL_36_spx_backoff_I [ ] ; extern  _GLOBAL_96_T  _GLOBAL_37_spx_backoff_I [ ] ; extern  _GLOBAL_96_T  _GLOBAL_38_spx_backoff_I [ ] ; extern  _GLOBAL_96_T  _GLOBAL_39_spx_backoff_I [ ] ; extern  _GLOBAL_96_T  _GLOBAL_40_spx_backoff_I [ ] ; extern  _GLOBAL_96_T  _GLOBAL_41_spx_backoff_I [ ] ; extern  _GLOBAL_96_T  _GLOBAL_42_spx_backoff_I [ ] ; extern  _GLOBAL_96_T  _GLOBAL_43_spx_backoff_I [ ] ; extern  _GLOBAL_96_T  _GLOBAL_44_spx_backoff_I [ ] ; extern  _GLOBAL_96_T  _GLOBAL_45_spx_backoff_I [ ] ; extern  _GLOBAL_96_T  _GLOBAL_46_spx_backoff_I [ ] ; extern  _GLOBAL_96_T  _GLOBAL_47_spx_backoff_I [ ] ; extern  _GLOBAL_96_T  _GLOBAL_48_spx_backoff_I [ ] ; extern  _GLOBAL_96_T  _GLOBAL_49_spx_backoff_I [ ] ; static __attribute__ ((unused)) __typeof__(_GLOBAL_0_spx_backoff_I) *_GLOBAL_spx_backoff_24_A[NUM_STACKS] = { &_GLOBAL_0_spx_backoff_I, &_GLOBAL_1_spx_backoff_I, &_GLOBAL_2_spx_backoff_I, &_GLOBAL_3_spx_backoff_I, &_GLOBAL_4_spx_backoff_I, &_GLOBAL_5_spx_backoff_I, &_GLOBAL_6_spx_backoff_I, &_GLOBAL_7_spx_backoff_I, &_GLOBAL_8_spx_backoff_I, &_GLOBAL_9_spx_backoff_I, &_GLOBAL_10_spx_backoff_I, &_GLOBAL_11_spx_backoff_I, &_GLOBAL_12_spx_backoff_I, &_GLOBAL_13_spx_backoff_I, &_GLOBAL_14_spx_backoff_I, &_GLOBAL_15_spx_backoff_I, &_GLOBAL_16_spx_backoff_I, &_GLOBAL_17_spx_backoff_I, &_GLOBAL_18_spx_backoff_I, &_GLOBAL_19_spx_backoff_I, &_GLOBAL_20_spx_backoff_I, &_GLOBAL_21_spx_backoff_I, &_GLOBAL_22_spx_backoff_I, &_GLOBAL_23_spx_backoff_I, &_GLOBAL_24_spx_backoff_I, &_GLOBAL_25_spx_backoff_I, &_GLOBAL_26_spx_backoff_I, &_GLOBAL_27_spx_backoff_I, &_GLOBAL_28_spx_backoff_I, &_GLOBAL_29_spx_backoff_I, &_GLOBAL_30_spx_backoff_I, &_GLOBAL_31_spx_backoff_I, &_GLOBAL_32_spx_backoff_I, &_GLOBAL_33_spx_backoff_I, &_GLOBAL_34_spx_backoff_I, &_GLOBAL_35_spx_backoff_I, &_GLOBAL_36_spx_backoff_I, &_GLOBAL_37_spx_backoff_I, &_GLOBAL_38_spx_backoff_I, &_GLOBAL_39_spx_backoff_I, &_GLOBAL_40_spx_backoff_I, &_GLOBAL_41_spx_backoff_I, &_GLOBAL_42_spx_backoff_I, &_GLOBAL_43_spx_backoff_I, &_GLOBAL_44_spx_backoff_I, &_GLOBAL_45_spx_backoff_I, &_GLOBAL_46_spx_backoff_I, &_GLOBAL_47_spx_backoff_I, &_GLOBAL_48_spx_backoff_I, &_GLOBAL_49_spx_backoff_I, };  
# 55 "openbsd3/netipx/spx_usrreq.c" 2
# 1 "openbsd3/netipx/spx_var.h" 1
# 42 "openbsd3/netipx/spx_var.h"
struct spxstat {
 long spxs_connattempt;
 long spxs_accepts;
 long spxs_connects;
 long spxs_drops;
 long spxs_conndrops;
 long spxs_closed;
 long spxs_segstimed;
 long spxs_rttupdated;
 long spxs_delack;
 long spxs_timeoutdrop;
 long spxs_rexmttimeo;
 long spxs_persisttimeo;
 long spxs_keeptimeo;
 long spxs_keepprobe;
 long spxs_keepdrops;

 long spxs_sndtotal;
 long spxs_sndpack;
 long spxs_sndbyte;
 long spxs_sndrexmitpack;
 long spxs_sndrexmitbyte;
 long spxs_sndacks;
 long spxs_sndprobe;
 long spxs_sndurg;
 long spxs_sndwinup;
 long spxs_sndctrl;
 long spxs_sndvoid;

 long spxs_rcvtotal;
 long spxs_rcvpack;
 long spxs_rcvbyte;
 long spxs_rcvbadsum;
 long spxs_rcvbadoff;
 long spxs_rcvshort;
 long spxs_rcvduppack;
 long spxs_rcvdupbyte;
 long spxs_rcvpartduppack;
 long spxs_rcvpartdupbyte;
 long spxs_rcvoopack;
 long spxs_rcvoobyte;
 long spxs_rcvpackafterwin;
 long spxs_rcvbyteafterwin;
 long spxs_rcvafterclose;
 long spxs_rcvwinprobe;
 long spxs_rcvdupack;
 long spxs_rcvacktoomuch;
 long spxs_rcvackpack;
 long spxs_rcvackbyte;
 long spxs_rcvwinupd;
};

struct spx_istat {
 short hdrops;
 short badsum;
 short badlen;
 short slotim;
 short fastim;
 short nonucn;
 short noconn;
 short notme;
 short wrncon;
 short bdreas;
 short gonawy;
 short notyet;
 short lstdup;
 struct spxstat newstats;
};


typedef  struct spx_istat   _GLOBAL_97_T; extern  _GLOBAL_97_T  global_spx_istat[NUM_STACKS];    
typedef  u_short  _GLOBAL_98_T; extern  _GLOBAL_98_T  global_spx_iss[NUM_STACKS];   
# 56 "openbsd3/netipx/spx_usrreq.c" 2
# 1 "openbsd3/netipx/spx_debug.h" 1
# 42 "openbsd3/netipx/spx_debug.h"
struct spx_debug {
 u_long sd_time;
 short sd_act;
 short sd_ostate;
 caddr_t sd_cb;
 short sd_req;
 struct spx sd_si;
 struct spxpcb sd_sp;
};
# 64 "openbsd3/netipx/spx_debug.h"
typedef  struct spx_debug  _GLOBAL_99_T;  _GLOBAL_99_T  _GLOBAL_0_spx_debug_I [ 100 ] ;  _GLOBAL_99_T  _GLOBAL_1_spx_debug_I [ 100 ] ;  _GLOBAL_99_T  _GLOBAL_2_spx_debug_I [ 100 ] ;  _GLOBAL_99_T  _GLOBAL_3_spx_debug_I [ 100 ] ;  _GLOBAL_99_T  _GLOBAL_4_spx_debug_I [ 100 ] ;  _GLOBAL_99_T  _GLOBAL_5_spx_debug_I [ 100 ] ;  _GLOBAL_99_T  _GLOBAL_6_spx_debug_I [ 100 ] ;  _GLOBAL_99_T  _GLOBAL_7_spx_debug_I [ 100 ] ;  _GLOBAL_99_T  _GLOBAL_8_spx_debug_I [ 100 ] ;  _GLOBAL_99_T  _GLOBAL_9_spx_debug_I [ 100 ] ;  _GLOBAL_99_T  _GLOBAL_10_spx_debug_I [ 100 ] ;  _GLOBAL_99_T  _GLOBAL_11_spx_debug_I [ 100 ] ;  _GLOBAL_99_T  _GLOBAL_12_spx_debug_I [ 100 ] ;  _GLOBAL_99_T  _GLOBAL_13_spx_debug_I [ 100 ] ;  _GLOBAL_99_T  _GLOBAL_14_spx_debug_I [ 100 ] ;  _GLOBAL_99_T  _GLOBAL_15_spx_debug_I [ 100 ] ;  _GLOBAL_99_T  _GLOBAL_16_spx_debug_I [ 100 ] ;  _GLOBAL_99_T  _GLOBAL_17_spx_debug_I [ 100 ] ;  _GLOBAL_99_T  _GLOBAL_18_spx_debug_I [ 100 ] ;  _GLOBAL_99_T  _GLOBAL_19_spx_debug_I [ 100 ] ;  _GLOBAL_99_T  _GLOBAL_20_spx_debug_I [ 100 ] ;  _GLOBAL_99_T  _GLOBAL_21_spx_debug_I [ 100 ] ;  _GLOBAL_99_T  _GLOBAL_22_spx_debug_I [ 100 ] ;  _GLOBAL_99_T  _GLOBAL_23_spx_debug_I [ 100 ] ;  _GLOBAL_99_T  _GLOBAL_24_spx_debug_I [ 100 ] ;  _GLOBAL_99_T  _GLOBAL_25_spx_debug_I [ 100 ] ;  _GLOBAL_99_T  _GLOBAL_26_spx_debug_I [ 100 ] ;  _GLOBAL_99_T  _GLOBAL_27_spx_debug_I [ 100 ] ;  _GLOBAL_99_T  _GLOBAL_28_spx_debug_I [ 100 ] ;  _GLOBAL_99_T  _GLOBAL_29_spx_debug_I [ 100 ] ;  _GLOBAL_99_T  _GLOBAL_30_spx_debug_I [ 100 ] ;  _GLOBAL_99_T  _GLOBAL_31_spx_debug_I [ 100 ] ;  _GLOBAL_99_T  _GLOBAL_32_spx_debug_I [ 100 ] ;  _GLOBAL_99_T  _GLOBAL_33_spx_debug_I [ 100 ] ;  _GLOBAL_99_T  _GLOBAL_34_spx_debug_I [ 100 ] ;  _GLOBAL_99_T  _GLOBAL_35_spx_debug_I [ 100 ] ;  _GLOBAL_99_T  _GLOBAL_36_spx_debug_I [ 100 ] ;  _GLOBAL_99_T  _GLOBAL_37_spx_debug_I [ 100 ] ;  _GLOBAL_99_T  _GLOBAL_38_spx_debug_I [ 100 ] ;  _GLOBAL_99_T  _GLOBAL_39_spx_debug_I [ 100 ] ;  _GLOBAL_99_T  _GLOBAL_40_spx_debug_I [ 100 ] ;  _GLOBAL_99_T  _GLOBAL_41_spx_debug_I [ 100 ] ;  _GLOBAL_99_T  _GLOBAL_42_spx_debug_I [ 100 ] ;  _GLOBAL_99_T  _GLOBAL_43_spx_debug_I [ 100 ] ;  _GLOBAL_99_T  _GLOBAL_44_spx_debug_I [ 100 ] ;  _GLOBAL_99_T  _GLOBAL_45_spx_debug_I [ 100 ] ;  _GLOBAL_99_T  _GLOBAL_46_spx_debug_I [ 100 ] ;  _GLOBAL_99_T  _GLOBAL_47_spx_debug_I [ 100 ] ;  _GLOBAL_99_T  _GLOBAL_48_spx_debug_I [ 100 ] ;  _GLOBAL_99_T  _GLOBAL_49_spx_debug_I [ 100 ] ; static __attribute__ ((unused)) __typeof__(_GLOBAL_0_spx_debug_I) *_GLOBAL_spx_debug_25_A[NUM_STACKS] = { &_GLOBAL_0_spx_debug_I, &_GLOBAL_1_spx_debug_I, &_GLOBAL_2_spx_debug_I, &_GLOBAL_3_spx_debug_I, &_GLOBAL_4_spx_debug_I, &_GLOBAL_5_spx_debug_I, &_GLOBAL_6_spx_debug_I, &_GLOBAL_7_spx_debug_I, &_GLOBAL_8_spx_debug_I, &_GLOBAL_9_spx_debug_I, &_GLOBAL_10_spx_debug_I, &_GLOBAL_11_spx_debug_I, &_GLOBAL_12_spx_debug_I, &_GLOBAL_13_spx_debug_I, &_GLOBAL_14_spx_debug_I, &_GLOBAL_15_spx_debug_I, &_GLOBAL_16_spx_debug_I, &_GLOBAL_17_spx_debug_I, &_GLOBAL_18_spx_debug_I, &_GLOBAL_19_spx_debug_I, &_GLOBAL_20_spx_debug_I, &_GLOBAL_21_spx_debug_I, &_GLOBAL_22_spx_debug_I, &_GLOBAL_23_spx_debug_I, &_GLOBAL_24_spx_debug_I, &_GLOBAL_25_spx_debug_I, &_GLOBAL_26_spx_debug_I, &_GLOBAL_27_spx_debug_I, &_GLOBAL_28_spx_debug_I, &_GLOBAL_29_spx_debug_I, &_GLOBAL_30_spx_debug_I, &_GLOBAL_31_spx_debug_I, &_GLOBAL_32_spx_debug_I, &_GLOBAL_33_spx_debug_I, &_GLOBAL_34_spx_debug_I, &_GLOBAL_35_spx_debug_I, &_GLOBAL_36_spx_debug_I, &_GLOBAL_37_spx_debug_I, &_GLOBAL_38_spx_debug_I, &_GLOBAL_39_spx_debug_I, &_GLOBAL_40_spx_debug_I, &_GLOBAL_41_spx_debug_I, &_GLOBAL_42_spx_debug_I, &_GLOBAL_43_spx_debug_I, &_GLOBAL_44_spx_debug_I, &_GLOBAL_45_spx_debug_I, &_GLOBAL_46_spx_debug_I, &_GLOBAL_47_spx_debug_I, &_GLOBAL_48_spx_debug_I, &_GLOBAL_49_spx_debug_I, };  
typedef  int _GLOBAL_100_T;  _GLOBAL_100_T  global_spx_debx[NUM_STACKS];  


typedef  char  _GLOBAL_101_T; extern  _GLOBAL_101_T  * _GLOBAL_0_prurequests_I [ ]  ; extern  _GLOBAL_101_T  * _GLOBAL_1_prurequests_I [ ]  ; extern  _GLOBAL_101_T  * _GLOBAL_2_prurequests_I [ ]  ; extern  _GLOBAL_101_T  * _GLOBAL_3_prurequests_I [ ]  ; extern  _GLOBAL_101_T  * _GLOBAL_4_prurequests_I [ ]  ; extern  _GLOBAL_101_T  * _GLOBAL_5_prurequests_I [ ]  ; extern  _GLOBAL_101_T  * _GLOBAL_6_prurequests_I [ ]  ; extern  _GLOBAL_101_T  * _GLOBAL_7_prurequests_I [ ]  ; extern  _GLOBAL_101_T  * _GLOBAL_8_prurequests_I [ ]  ; extern  _GLOBAL_101_T  * _GLOBAL_9_prurequests_I [ ]  ; extern  _GLOBAL_101_T  * _GLOBAL_10_prurequests_I [ ]  ; extern  _GLOBAL_101_T  * _GLOBAL_11_prurequests_I [ ]  ; extern  _GLOBAL_101_T  * _GLOBAL_12_prurequests_I [ ]  ; extern  _GLOBAL_101_T  * _GLOBAL_13_prurequests_I [ ]  ; extern  _GLOBAL_101_T  * _GLOBAL_14_prurequests_I [ ]  ; extern  _GLOBAL_101_T  * _GLOBAL_15_prurequests_I [ ]  ; extern  _GLOBAL_101_T  * _GLOBAL_16_prurequests_I [ ]  ; extern  _GLOBAL_101_T  * _GLOBAL_17_prurequests_I [ ]  ; extern  _GLOBAL_101_T  * _GLOBAL_18_prurequests_I [ ]  ; extern  _GLOBAL_101_T  * _GLOBAL_19_prurequests_I [ ]  ; extern  _GLOBAL_101_T  * _GLOBAL_20_prurequests_I [ ]  ; extern  _GLOBAL_101_T  * _GLOBAL_21_prurequests_I [ ]  ; extern  _GLOBAL_101_T  * _GLOBAL_22_prurequests_I [ ]  ; extern  _GLOBAL_101_T  * _GLOBAL_23_prurequests_I [ ]  ; extern  _GLOBAL_101_T  * _GLOBAL_24_prurequests_I [ ]  ; extern  _GLOBAL_101_T  * _GLOBAL_25_prurequests_I [ ]  ; extern  _GLOBAL_101_T  * _GLOBAL_26_prurequests_I [ ]  ; extern  _GLOBAL_101_T  * _GLOBAL_27_prurequests_I [ ]  ; extern  _GLOBAL_101_T  * _GLOBAL_28_prurequests_I [ ]  ; extern  _GLOBAL_101_T  * _GLOBAL_29_prurequests_I [ ]  ; extern  _GLOBAL_101_T  * _GLOBAL_30_prurequests_I [ ]  ; extern  _GLOBAL_101_T  * _GLOBAL_31_prurequests_I [ ]  ; extern  _GLOBAL_101_T  * _GLOBAL_32_prurequests_I [ ]  ; extern  _GLOBAL_101_T  * _GLOBAL_33_prurequests_I [ ]  ; extern  _GLOBAL_101_T  * _GLOBAL_34_prurequests_I [ ]  ; extern  _GLOBAL_101_T  * _GLOBAL_35_prurequests_I [ ]  ; extern  _GLOBAL_101_T  * _GLOBAL_36_prurequests_I [ ]  ; extern  _GLOBAL_101_T  * _GLOBAL_37_prurequests_I [ ]  ; extern  _GLOBAL_101_T  * _GLOBAL_38_prurequests_I [ ]  ; extern  _GLOBAL_101_T  * _GLOBAL_39_prurequests_I [ ]  ; extern  _GLOBAL_101_T  * _GLOBAL_40_prurequests_I [ ]  ; extern  _GLOBAL_101_T  * _GLOBAL_41_prurequests_I [ ]  ; extern  _GLOBAL_101_T  * _GLOBAL_42_prurequests_I [ ]  ; extern  _GLOBAL_101_T  * _GLOBAL_43_prurequests_I [ ]  ; extern  _GLOBAL_101_T  * _GLOBAL_44_prurequests_I [ ]  ; extern  _GLOBAL_101_T  * _GLOBAL_45_prurequests_I [ ]  ; extern  _GLOBAL_101_T  * _GLOBAL_46_prurequests_I [ ]  ; extern  _GLOBAL_101_T  * _GLOBAL_47_prurequests_I [ ]  ; extern  _GLOBAL_101_T  * _GLOBAL_48_prurequests_I [ ]  ; extern  _GLOBAL_101_T  * _GLOBAL_49_prurequests_I [ ]  ; static __attribute__ ((unused)) __typeof__(_GLOBAL_0_prurequests_I) *_GLOBAL_prurequests_26_A[NUM_STACKS];  
typedef  char  _GLOBAL_102_T; extern  _GLOBAL_102_T  * _GLOBAL_0_sanames_I [ ]  ; extern  _GLOBAL_102_T  * _GLOBAL_1_sanames_I [ ]  ; extern  _GLOBAL_102_T  * _GLOBAL_2_sanames_I [ ]  ; extern  _GLOBAL_102_T  * _GLOBAL_3_sanames_I [ ]  ; extern  _GLOBAL_102_T  * _GLOBAL_4_sanames_I [ ]  ; extern  _GLOBAL_102_T  * _GLOBAL_5_sanames_I [ ]  ; extern  _GLOBAL_102_T  * _GLOBAL_6_sanames_I [ ]  ; extern  _GLOBAL_102_T  * _GLOBAL_7_sanames_I [ ]  ; extern  _GLOBAL_102_T  * _GLOBAL_8_sanames_I [ ]  ; extern  _GLOBAL_102_T  * _GLOBAL_9_sanames_I [ ]  ; extern  _GLOBAL_102_T  * _GLOBAL_10_sanames_I [ ]  ; extern  _GLOBAL_102_T  * _GLOBAL_11_sanames_I [ ]  ; extern  _GLOBAL_102_T  * _GLOBAL_12_sanames_I [ ]  ; extern  _GLOBAL_102_T  * _GLOBAL_13_sanames_I [ ]  ; extern  _GLOBAL_102_T  * _GLOBAL_14_sanames_I [ ]  ; extern  _GLOBAL_102_T  * _GLOBAL_15_sanames_I [ ]  ; extern  _GLOBAL_102_T  * _GLOBAL_16_sanames_I [ ]  ; extern  _GLOBAL_102_T  * _GLOBAL_17_sanames_I [ ]  ; extern  _GLOBAL_102_T  * _GLOBAL_18_sanames_I [ ]  ; extern  _GLOBAL_102_T  * _GLOBAL_19_sanames_I [ ]  ; extern  _GLOBAL_102_T  * _GLOBAL_20_sanames_I [ ]  ; extern  _GLOBAL_102_T  * _GLOBAL_21_sanames_I [ ]  ; extern  _GLOBAL_102_T  * _GLOBAL_22_sanames_I [ ]  ; extern  _GLOBAL_102_T  * _GLOBAL_23_sanames_I [ ]  ; extern  _GLOBAL_102_T  * _GLOBAL_24_sanames_I [ ]  ; extern  _GLOBAL_102_T  * _GLOBAL_25_sanames_I [ ]  ; extern  _GLOBAL_102_T  * _GLOBAL_26_sanames_I [ ]  ; extern  _GLOBAL_102_T  * _GLOBAL_27_sanames_I [ ]  ; extern  _GLOBAL_102_T  * _GLOBAL_28_sanames_I [ ]  ; extern  _GLOBAL_102_T  * _GLOBAL_29_sanames_I [ ]  ; extern  _GLOBAL_102_T  * _GLOBAL_30_sanames_I [ ]  ; extern  _GLOBAL_102_T  * _GLOBAL_31_sanames_I [ ]  ; extern  _GLOBAL_102_T  * _GLOBAL_32_sanames_I [ ]  ; extern  _GLOBAL_102_T  * _GLOBAL_33_sanames_I [ ]  ; extern  _GLOBAL_102_T  * _GLOBAL_34_sanames_I [ ]  ; extern  _GLOBAL_102_T  * _GLOBAL_35_sanames_I [ ]  ; extern  _GLOBAL_102_T  * _GLOBAL_36_sanames_I [ ]  ; extern  _GLOBAL_102_T  * _GLOBAL_37_sanames_I [ ]  ; extern  _GLOBAL_102_T  * _GLOBAL_38_sanames_I [ ]  ; extern  _GLOBAL_102_T  * _GLOBAL_39_sanames_I [ ]  ; extern  _GLOBAL_102_T  * _GLOBAL_40_sanames_I [ ]  ; extern  _GLOBAL_102_T  * _GLOBAL_41_sanames_I [ ]  ; extern  _GLOBAL_102_T  * _GLOBAL_42_sanames_I [ ]  ; extern  _GLOBAL_102_T  * _GLOBAL_43_sanames_I [ ]  ; extern  _GLOBAL_102_T  * _GLOBAL_44_sanames_I [ ]  ; extern  _GLOBAL_102_T  * _GLOBAL_45_sanames_I [ ]  ; extern  _GLOBAL_102_T  * _GLOBAL_46_sanames_I [ ]  ; extern  _GLOBAL_102_T  * _GLOBAL_47_sanames_I [ ]  ; extern  _GLOBAL_102_T  * _GLOBAL_48_sanames_I [ ]  ; extern  _GLOBAL_102_T  * _GLOBAL_49_sanames_I [ ]  ; static __attribute__ ((unused)) __typeof__(_GLOBAL_0_sanames_I) *_GLOBAL_sanames_27_A[NUM_STACKS];  

void spx_trace(int act, int ostate, struct spxpcb *sp, struct spx *si,
         int req);
# 57 "openbsd3/netipx/spx_usrreq.c" 2







typedef  struct spx  _GLOBAL_103_T;  _GLOBAL_103_T  global_spx_savesi[NUM_STACKS];   
typedef  int _GLOBAL_104_T;  _GLOBAL_104_T  global_traceallspxs[NUM_STACKS] = {  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  };    
typedef  int  _GLOBAL_105_T; extern  _GLOBAL_105_T  global_spxconsdebug[NUM_STACKS];   
typedef  int _GLOBAL_106_T;  _GLOBAL_106_T  global_spx_hardnosed[NUM_STACKS];  
typedef  int _GLOBAL_107_T;  _GLOBAL_107_T  global_spx_use_delack[NUM_STACKS] = {  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  };    
typedef  u_short _GLOBAL_108_T;  _GLOBAL_108_T  _GLOBAL_0_spx_newchecks_I [ 50 ] ;  _GLOBAL_108_T  _GLOBAL_1_spx_newchecks_I [ 50 ] ;  _GLOBAL_108_T  _GLOBAL_2_spx_newchecks_I [ 50 ] ;  _GLOBAL_108_T  _GLOBAL_3_spx_newchecks_I [ 50 ] ;  _GLOBAL_108_T  _GLOBAL_4_spx_newchecks_I [ 50 ] ;  _GLOBAL_108_T  _GLOBAL_5_spx_newchecks_I [ 50 ] ;  _GLOBAL_108_T  _GLOBAL_6_spx_newchecks_I [ 50 ] ;  _GLOBAL_108_T  _GLOBAL_7_spx_newchecks_I [ 50 ] ;  _GLOBAL_108_T  _GLOBAL_8_spx_newchecks_I [ 50 ] ;  _GLOBAL_108_T  _GLOBAL_9_spx_newchecks_I [ 50 ] ;  _GLOBAL_108_T  _GLOBAL_10_spx_newchecks_I [ 50 ] ;  _GLOBAL_108_T  _GLOBAL_11_spx_newchecks_I [ 50 ] ;  _GLOBAL_108_T  _GLOBAL_12_spx_newchecks_I [ 50 ] ;  _GLOBAL_108_T  _GLOBAL_13_spx_newchecks_I [ 50 ] ;  _GLOBAL_108_T  _GLOBAL_14_spx_newchecks_I [ 50 ] ;  _GLOBAL_108_T  _GLOBAL_15_spx_newchecks_I [ 50 ] ;  _GLOBAL_108_T  _GLOBAL_16_spx_newchecks_I [ 50 ] ;  _GLOBAL_108_T  _GLOBAL_17_spx_newchecks_I [ 50 ] ;  _GLOBAL_108_T  _GLOBAL_18_spx_newchecks_I [ 50 ] ;  _GLOBAL_108_T  _GLOBAL_19_spx_newchecks_I [ 50 ] ;  _GLOBAL_108_T  _GLOBAL_20_spx_newchecks_I [ 50 ] ;  _GLOBAL_108_T  _GLOBAL_21_spx_newchecks_I [ 50 ] ;  _GLOBAL_108_T  _GLOBAL_22_spx_newchecks_I [ 50 ] ;  _GLOBAL_108_T  _GLOBAL_23_spx_newchecks_I [ 50 ] ;  _GLOBAL_108_T  _GLOBAL_24_spx_newchecks_I [ 50 ] ;  _GLOBAL_108_T  _GLOBAL_25_spx_newchecks_I [ 50 ] ;  _GLOBAL_108_T  _GLOBAL_26_spx_newchecks_I [ 50 ] ;  _GLOBAL_108_T  _GLOBAL_27_spx_newchecks_I [ 50 ] ;  _GLOBAL_108_T  _GLOBAL_28_spx_newchecks_I [ 50 ] ;  _GLOBAL_108_T  _GLOBAL_29_spx_newchecks_I [ 50 ] ;  _GLOBAL_108_T  _GLOBAL_30_spx_newchecks_I [ 50 ] ;  _GLOBAL_108_T  _GLOBAL_31_spx_newchecks_I [ 50 ] ;  _GLOBAL_108_T  _GLOBAL_32_spx_newchecks_I [ 50 ] ;  _GLOBAL_108_T  _GLOBAL_33_spx_newchecks_I [ 50 ] ;  _GLOBAL_108_T  _GLOBAL_34_spx_newchecks_I [ 50 ] ;  _GLOBAL_108_T  _GLOBAL_35_spx_newchecks_I [ 50 ] ;  _GLOBAL_108_T  _GLOBAL_36_spx_newchecks_I [ 50 ] ;  _GLOBAL_108_T  _GLOBAL_37_spx_newchecks_I [ 50 ] ;  _GLOBAL_108_T  _GLOBAL_38_spx_newchecks_I [ 50 ] ;  _GLOBAL_108_T  _GLOBAL_39_spx_newchecks_I [ 50 ] ;  _GLOBAL_108_T  _GLOBAL_40_spx_newchecks_I [ 50 ] ;  _GLOBAL_108_T  _GLOBAL_41_spx_newchecks_I [ 50 ] ;  _GLOBAL_108_T  _GLOBAL_42_spx_newchecks_I [ 50 ] ;  _GLOBAL_108_T  _GLOBAL_43_spx_newchecks_I [ 50 ] ;  _GLOBAL_108_T  _GLOBAL_44_spx_newchecks_I [ 50 ] ;  _GLOBAL_108_T  _GLOBAL_45_spx_newchecks_I [ 50 ] ;  _GLOBAL_108_T  _GLOBAL_46_spx_newchecks_I [ 50 ] ;  _GLOBAL_108_T  _GLOBAL_47_spx_newchecks_I [ 50 ] ;  _GLOBAL_108_T  _GLOBAL_48_spx_newchecks_I [ 50 ] ;  _GLOBAL_108_T  _GLOBAL_49_spx_newchecks_I [ 50 ] ; static __attribute__ ((unused)) __typeof__(_GLOBAL_0_spx_newchecks_I) *_GLOBAL_spx_newchecks_28_A[NUM_STACKS] = { &_GLOBAL_0_spx_newchecks_I, &_GLOBAL_1_spx_newchecks_I, &_GLOBAL_2_spx_newchecks_I, &_GLOBAL_3_spx_newchecks_I, &_GLOBAL_4_spx_newchecks_I, &_GLOBAL_5_spx_newchecks_I, &_GLOBAL_6_spx_newchecks_I, &_GLOBAL_7_spx_newchecks_I, &_GLOBAL_8_spx_newchecks_I, &_GLOBAL_9_spx_newchecks_I, &_GLOBAL_10_spx_newchecks_I, &_GLOBAL_11_spx_newchecks_I, &_GLOBAL_12_spx_newchecks_I, &_GLOBAL_13_spx_newchecks_I, &_GLOBAL_14_spx_newchecks_I, &_GLOBAL_15_spx_newchecks_I, &_GLOBAL_16_spx_newchecks_I, &_GLOBAL_17_spx_newchecks_I, &_GLOBAL_18_spx_newchecks_I, &_GLOBAL_19_spx_newchecks_I, &_GLOBAL_20_spx_newchecks_I, &_GLOBAL_21_spx_newchecks_I, &_GLOBAL_22_spx_newchecks_I, &_GLOBAL_23_spx_newchecks_I, &_GLOBAL_24_spx_newchecks_I, &_GLOBAL_25_spx_newchecks_I, &_GLOBAL_26_spx_newchecks_I, &_GLOBAL_27_spx_newchecks_I, &_GLOBAL_28_spx_newchecks_I, &_GLOBAL_29_spx_newchecks_I, &_GLOBAL_30_spx_newchecks_I, &_GLOBAL_31_spx_newchecks_I, &_GLOBAL_32_spx_newchecks_I, &_GLOBAL_33_spx_newchecks_I, &_GLOBAL_34_spx_newchecks_I, &_GLOBAL_35_spx_newchecks_I, &_GLOBAL_36_spx_newchecks_I, &_GLOBAL_37_spx_newchecks_I, &_GLOBAL_38_spx_newchecks_I, &_GLOBAL_39_spx_newchecks_I, &_GLOBAL_40_spx_newchecks_I, &_GLOBAL_41_spx_newchecks_I, &_GLOBAL_42_spx_newchecks_I, &_GLOBAL_43_spx_newchecks_I, &_GLOBAL_44_spx_newchecks_I, &_GLOBAL_45_spx_newchecks_I, &_GLOBAL_46_spx_newchecks_I, &_GLOBAL_47_spx_newchecks_I, &_GLOBAL_48_spx_newchecks_I, &_GLOBAL_49_spx_newchecks_I, }; 

typedef  struct spx_istat  _GLOBAL_109_T;  _GLOBAL_109_T  global_spx_istat[NUM_STACKS];   
typedef  u_short _GLOBAL_110_T;  _GLOBAL_110_T  global_spx_iss[NUM_STACKS];  




typedef  struct ipxpcbtable  _GLOBAL_111_T;  _GLOBAL_111_T  global_ipxcbtable[NUM_STACKS];   
typedef  int _GLOBAL_112_T;  _GLOBAL_112_T  global_ipxcbhashsize[NUM_STACKS] = {  32,  32,  32,  32,  32,  32,  32,  32,  32,  32,  32,  32,  32,  32,  32,  32,  32,  32,  32,  32,  32,  32,  32,  32,  32,  32,  32,  32,  32,  32,  32,  32,  32,  32,  32,  32,  32,  32,  32,  32,  32,  32,  32,  32,  32,  32,  32,  32,  32,  32,  };    

void
spx_init()
{
 ipx_pcbinit(&global_ipxcbtable[get_stack_id()], global_ipxcbhashsize[get_stack_id()]);
 global_spx_iss[get_stack_id()] = 1;
}


void
spx_input(struct mbuf *m, ...)
{
 struct ipxpcb *ipxpcbp;
 struct spxpcb *cb;
 struct spx *si = ((struct spx *)((m)->m_hdr.mh_data));
 struct socket *so;
 int dropsocket = 0;
 short ostate = 0;
 va_list ap;

 __builtin_va_start((ap),m);
 ipxpcbp = __builtin_va_arg(ap, struct ipxpcb *);
 __builtin_va_end(ap);

 global_spx_istat[get_stack_id()].newstats.spxs_rcvtotal++;
 if (ipxpcbp == 0L)
  panic("spx_input: no ipxpcb");

 cb = ((struct spxpcb *)(ipxpcbp)->ipxp_ppcb);
 if (cb == 0) goto bad;

 if (m->m_hdr.mh_len < sizeof(*si)) {
  if ((m = m_pullup(m, sizeof(*si))) == 0) {
   global_spx_istat[get_stack_id()].newstats.spxs_rcvshort++;
   return;
  }
  si = ((struct spx *)((m)->m_hdr.mh_data));
 }
 si->si_s.spx_seq = __extension__({ u_int16_t __swap16_x = (si->si_s.spx_seq); __builtin_constant_p(si->si_s.spx_seq) ? __extension__({ u_int16_t __swap16gen_x = (__swap16_x); (u_int16_t)((__swap16gen_x & 0xff) << 8 | (__swap16gen_x & 0xff00) >> 8); }) : ({ u_int16_t __swap16md_x = (__swap16_x); __asm ("rorw $8, %w1" : "+r" (__swap16md_x)); __swap16md_x; }); });
 si->si_s.spx_ack = __extension__({ u_int16_t __swap16_x = (si->si_s.spx_ack); __builtin_constant_p(si->si_s.spx_ack) ? __extension__({ u_int16_t __swap16gen_x = (__swap16_x); (u_int16_t)((__swap16gen_x & 0xff) << 8 | (__swap16gen_x & 0xff00) >> 8); }) : ({ u_int16_t __swap16md_x = (__swap16_x); __asm ("rorw $8, %w1" : "+r" (__swap16md_x)); __swap16md_x; }); });
 si->si_s.spx_alo = __extension__({ u_int16_t __swap16_x = (si->si_s.spx_alo); __builtin_constant_p(si->si_s.spx_alo) ? __extension__({ u_int16_t __swap16gen_x = (__swap16_x); (u_int16_t)((__swap16gen_x & 0xff) << 8 | (__swap16gen_x & 0xff00) >> 8); }) : ({ u_int16_t __swap16md_x = (__swap16_x); __asm ("rorw $8, %w1" : "+r" (__swap16md_x)); __swap16md_x; }); });

 so = ipxpcbp->ipxp_socket;

 if (so->so_options & 0x0001 || global_traceallspxs[get_stack_id()]) {
  ostate = cb->s_state;
  global_spx_savesi[get_stack_id()] = *si;
 }
 if (so->so_options & 0x0002) {
  struct spxpcb *ocb = cb;

  so = sonewconn(so, 0);
  if (so == 0) {
   goto drop;
  }
# 145 "openbsd3/netipx/spx_usrreq.c"
  dropsocket++;
  ipxpcbp = (struct ipxpcb *)so->so_pcb;
  ipxpcbp->ipxp_laddr = si->si_i.ipx_dna;
  cb = ((struct spxpcb *)(ipxpcbp)->ipxp_ppcb);
  cb->s_mtu = ocb->s_mtu;
  cb->s_flags = ocb->s_flags;
  cb->s_flags2 = ocb->s_flags2;
  cb->s_state = 1;
 }





 cb->s_idle = 0;
 cb->s_timer[2] = ( 75*2);

 switch (cb->s_state) {

 case 1:{
  struct mbuf *am;
  struct sockaddr_ipx *sipx;
  struct ipx_addr laddr;






  if (global_spx_hardnosed[get_stack_id()] && (si->si_s.spx_did != 0 || si->si_s.spx_seq != 0)) {
   global_spx_istat[get_stack_id()].gonawy++;
   goto dropwithreset;
  }
  am = m_get(0x0001, 3);
  if (am == 0L)
   goto drop;
  am->m_hdr.mh_len = sizeof(struct sockaddr_ipx);
  sipx = ((struct sockaddr_ipx *)((am)->m_hdr.mh_data));
  sipx->sipx_len = sizeof(*sipx);
  sipx->sipx_family = 23;
  sipx->sipx_addr = si->si_i.ipx_sna;
  laddr = ipxpcbp->ipxp_laddr;
  if ((((laddr).ipx_host.s_host[0]==0) && ((laddr).ipx_host.s_host[1]==0) && ((laddr).ipx_host.s_host[2]==0)))
   ipxpcbp->ipxp_laddr = si->si_i.ipx_dna;
  if (ipx_pcbconnect(ipxpcbp, am)) {
   ipxpcbp->ipxp_laddr = laddr;
   (void) m_free(am);
   global_spx_istat[get_stack_id()].noconn++;
   goto drop;
  }
  (void) m_free(am);
  spx_template(cb);
  dropsocket = 0;
  cb->s_shdr.spx_did = si->si_s.spx_sid;
  cb->s_rack = si->si_s.spx_ack;
  cb->s_ralo = si->si_s.spx_alo;


  cb->s_state = 3;
  cb->s_force = 1 + 2;
  global_spx_istat[get_stack_id()].newstats.spxs_accepts++;
  cb->s_timer[2] = ( 75*2);
  }
  break;






  case 3: {
  if (si->si_s.spx_did!=cb->s_shdr.spx_sid) {
   global_spx_istat[get_stack_id()].wrncon++;
   goto drop;
  }

  ipxpcbp->ipxp_faddr.ipx_port = si->si_i.ipx_sna.ipx_port;
  cb->s_timer[0] = 0;
  cb->s_timer[2] = ( 75*2);
  soisconnected(so);
  cb->s_state = 4;
  global_spx_istat[get_stack_id()].newstats.spxs_accepts++;
  }
  break;
# 239 "openbsd3/netipx/spx_usrreq.c"
 case 2:
  if (si->si_s.spx_did!=cb->s_shdr.spx_sid) {
   global_spx_istat[get_stack_id()].notme++;
   goto drop;
  }
  global_spx_istat[get_stack_id()].newstats.spxs_connects++;
  cb->s_shdr.spx_did = si->si_s.spx_sid;
  cb->s_rack = si->si_s.spx_ack;
  cb->s_ralo = si->si_s.spx_alo;
  cb->s_ipx->ipx_dna.ipx_port = ipxpcbp->ipxp_faddr.ipx_port = si->si_i.ipx_sna.ipx_port;
  cb->s_timer[0] = 0;
  cb->s_flags |= 0x01;
  soisconnected(so);
  cb->s_state = 4;

  if (cb->s_rtt) {
   cb->s_srtt = cb->s_rtt << 3;
   cb->s_rttvar = cb->s_rtt << 1;
   { (cb->s_rxtcur) = (((cb->s_srtt >> 2) + cb->s_rttvar) >> 1); if ((cb->s_rxtcur) < (( 1*2))) (cb->s_rxtcur) = (( 1*2)); else if ((cb->s_rxtcur) > (( 64*2))) (cb->s_rxtcur) = (( 64*2)); }

                                 ;
       cb->s_rtt = 0;
  }
 }
 if (so->so_options & 0x0001 || global_traceallspxs[get_stack_id()])
  spx_trace(0, (u_char)ostate, cb, &global_spx_savesi[get_stack_id()], 0);

 m->m_hdr.mh_len -= sizeof(struct ipx);
 m->M_dat.MH.MH_pkthdr.len -= sizeof(struct ipx);
 m->m_hdr.mh_data += sizeof(struct ipx);

 if (spx_reass(cb, m))
  m_freem(m);

 if (cb->s_force || (cb->s_flags & (0x01|0x20|0x40)))
  (void) spx_output(cb, (struct mbuf *)0);
 cb->s_flags &= ~(0x20|0x40);
 return;

dropwithreset:
 if (dropsocket)
  (void) soabort(so);
 si->si_s.spx_seq = __extension__({ u_int16_t __swap16_x = (si->si_s.spx_seq); __builtin_constant_p(si->si_s.spx_seq) ? __extension__({ u_int16_t __swap16gen_x = (__swap16_x); (u_int16_t)((__swap16gen_x & 0xff) << 8 | (__swap16gen_x & 0xff00) >> 8); }) : ({ u_int16_t __swap16md_x = (__swap16_x); __asm ("rorw $8, %w1" : "+r" (__swap16md_x)); __swap16md_x; }); });
 si->si_s.spx_ack = __extension__({ u_int16_t __swap16_x = (si->si_s.spx_ack); __builtin_constant_p(si->si_s.spx_ack) ? __extension__({ u_int16_t __swap16gen_x = (__swap16_x); (u_int16_t)((__swap16gen_x & 0xff) << 8 | (__swap16gen_x & 0xff00) >> 8); }) : ({ u_int16_t __swap16md_x = (__swap16_x); __asm ("rorw $8, %w1" : "+r" (__swap16md_x)); __swap16md_x; }); });
 si->si_s.spx_alo = __extension__({ u_int16_t __swap16_x = (si->si_s.spx_alo); __builtin_constant_p(si->si_s.spx_alo) ? __extension__({ u_int16_t __swap16gen_x = (__swap16_x); (u_int16_t)((__swap16gen_x & 0xff) << 8 | (__swap16gen_x & 0xff00) >> 8); }) : ({ u_int16_t __swap16md_x = (__swap16_x); __asm ("rorw $8, %w1" : "+r" (__swap16md_x)); __swap16md_x; }); });
 m_freem(m);
 if (cb->s_ipxpcb->ipxp_socket->so_options & 0x0001 || global_traceallspxs[get_stack_id()])
  spx_trace(4, (u_char)ostate, cb, &global_spx_savesi[get_stack_id()], 0);
 return;

drop:
bad:
 if (cb == 0 || cb->s_ipxpcb->ipxp_socket->so_options & 0x0001 ||
            global_traceallspxs[get_stack_id()])
  spx_trace(4, (u_char)ostate, cb, &global_spx_savesi[get_stack_id()], 0);
 m_freem(m);
}

typedef  int _GLOBAL_113_T;  _GLOBAL_113_T  global_spxrexmtthresh[NUM_STACKS] = {  3,  3,  3,  3,  3,  3,  3,  3,  3,  3,  3,  3,  3,  3,  3,  3,  3,  3,  3,  3,  3,  3,  3,  3,  3,  3,  3,  3,  3,  3,  3,  3,  3,  3,  3,  3,  3,  3,  3,  3,  3,  3,  3,  3,  3,  3,  3,  3,  3,  3,  };    






int
spx_reass(cb, m0)
 struct spxpcb *cb;
 struct mbuf *m0;
{
 struct spx_q *q;
 struct mbuf *m;
 struct spx *si = ((struct spx *)((m0)->m_hdr.mh_data));
 struct socket *so = cb->s_ipxpcb->ipxp_socket;
 char packetp = cb->s_flags & 0x04;
 int incr;
 char wakeup = 0;

 if (si == 0L)
  goto present;



 if (si->si_s.spx_cc & 0x40)
  cb->s_flags |= (global_spx_use_delack[get_stack_id()] ? 0x02 : 0x01);
 if ((((short)((si->si_s.spx_alo)-(cb->s_ralo))) > 0))
  cb->s_flags |= 0x20;
 if ((((short)((si->si_s.spx_ack)-(cb->s_rack))) <= 0)) {
  if ((si->si_s.spx_cc & 0x80) && cb->s_rack != (cb->s_smax + 1)) {
   global_spx_istat[get_stack_id()].newstats.spxs_rcvdupack++;






   if (si->si_s.spx_ack != cb->s_rack ||
       si->si_s.spx_alo != cb->s_ralo)
    cb->s_dupacks = 0;
   else if (++cb->s_dupacks == global_spxrexmtthresh[get_stack_id()]) {
    u_short onxt = cb->s_snxt;
    int cwnd = cb->s_cwnd;

    cb->s_snxt = si->si_s.spx_ack;
    cb->s_cwnd = 1024;
    cb->s_force = 1 + 0;
    (void) spx_output(cb, (struct mbuf *)0);
    cb->s_timer[0] = cb->s_rxtcur;
    cb->s_rtt = 0;
    if (cwnd >= 4 * 1024)
     cb->s_cwnd = cwnd / 2;
    if ((((short)((onxt)-(cb->s_snxt))) > 0))
     cb->s_snxt = onxt;
    return (1);
   }
  } else
   cb->s_dupacks = 0;
  goto update_window;
 }
 cb->s_dupacks = 0;





 if ((((short)((si->si_s.spx_ack)-((cb->s_smax + 1)))) > 0)) {
  global_spx_istat[get_stack_id()].newstats.spxs_rcvacktoomuch++;
  si->si_s.spx_ack = cb->s_smax + 1;
 }
 global_spx_istat[get_stack_id()].newstats.spxs_rcvackpack++;





 if (cb->s_rtt && (((short)((si->si_s.spx_ack)-(cb->s_rtseq))) > 0)) {
  global_spx_istat[get_stack_id()].newstats.spxs_rttupdated++;
  if (cb->s_srtt != 0) {
   short delta;
   delta = cb->s_rtt - (cb->s_srtt >> 3);
   if ((cb->s_srtt += delta) <= 0)
    cb->s_srtt = 1;
   if (delta < 0)
    delta = -delta;
   delta -= (cb->s_rttvar >> 2);
   if ((cb->s_rttvar += delta) <= 0)
    cb->s_rttvar = 1;
  } else {



   cb->s_srtt = cb->s_rtt << 3;
   cb->s_rttvar = cb->s_rtt << 1;
  }
  cb->s_rtt = 0;
  cb->s_rxtshift = 0;
  { (cb->s_rxtcur) = (((cb->s_srtt >> 2) + cb->s_rttvar) >> 1); if ((cb->s_rxtcur) < (( 1*2))) (cb->s_rxtcur) = (( 1*2)); else if ((cb->s_rxtcur) > (( 64*2))) (cb->s_rxtcur) = (( 64*2)); }

                             ;
 }






 if (si->si_s.spx_ack == cb->s_smax + 1) {
  cb->s_timer[0] = 0;
  cb->s_flags |= 0x40;
 } else if (cb->s_timer[1] == 0)
  cb->s_timer[0] = cb->s_rxtcur;






 incr = 1024;
 if (cb->s_cwnd > cb->s_ssthresh)
  incr = max(incr * incr / cb->s_cwnd, 1);
 cb->s_cwnd = min(cb->s_cwnd + incr, cb->s_cwmx);



 while ((m = so->so_snd.sb_mb) != 0L) {
  if ((((short)(((((struct spx *)((m)->m_hdr.mh_data)))->si_s.spx_seq)-(si->si_s.spx_ack))) < 0))
   sbdroprecord(&so->so_snd);
  else
   break;
 }
 sowakeup((so), &(so)->so_snd);
 cb->s_rack = si->si_s.spx_ack;
update_window:
 if ((((short)((cb->s_snxt)-(cb->s_rack))) < 0))
  cb->s_snxt = cb->s_rack;
 if (((((short)((cb->s_swl1)-(si->si_s.spx_seq))) < 0) || cb->s_swl1 == si->si_s.spx_seq) &&
      ((((short)((cb->s_swl2)-(si->si_s.spx_ack))) < 0) || cb->s_swl2 == si->si_s.spx_ack) &&
      (((short)((cb->s_ralo)-(si->si_s.spx_alo))) < 0)) {

  if ((si->si_s.spx_cc & 0x80) && cb->s_swl2 == si->si_s.spx_ack
      && (((short)((cb->s_ralo)-(si->si_s.spx_alo))) < 0)) {
   global_spx_istat[get_stack_id()].newstats.spxs_rcvwinupd++;
   global_spx_istat[get_stack_id()].newstats.spxs_rcvdupack--;
  }
  cb->s_ralo = si->si_s.spx_alo;
  cb->s_swl1 = si->si_s.spx_seq;
  cb->s_swl2 = si->si_s.spx_ack;
  cb->s_swnd = (1 + si->si_s.spx_alo - si->si_s.spx_ack);
  if (cb->s_swnd > cb->s_smxw)
   cb->s_smxw = cb->s_swnd;
  cb->s_flags |= 0x20;
 }




 if ((((short)((si->si_s.spx_seq)-(cb->s_shdr.spx_alo))) > 0)) {
  if (si->si_s.spx_cc & 0x80) {
   global_spx_istat[get_stack_id()].newstats.spxs_rcvwinprobe++;
   return (1);
  } else
   global_spx_istat[get_stack_id()].newstats.spxs_rcvpackafterwin++;
  if (si->si_s.spx_cc & 0x20) {
   if ((((short)((si->si_s.spx_seq)-(cb->s_shdr.spx_alo + 60))) > 0)) {
    m_freem(m0);
    return (0);
   }
  } else {






   global_spx_istat[get_stack_id()].notyet++;
   m_freem(m0);
   return (0);
  }
 }




 if (si->si_s.spx_cc & 0x80) {
  return (1);
 }



 if ((((short)((si->si_s.spx_seq)-(cb->s_shdr.spx_ack))) < 0)) {
  global_spx_istat[get_stack_id()].bdreas++;
  global_spx_istat[get_stack_id()].newstats.spxs_rcvduppack++;
  if (si->si_s.spx_seq == cb->s_shdr.spx_ack - 1)
   global_spx_istat[get_stack_id()].lstdup++;
  return (1);
 }




 for((q) = ((&cb->spxp_queue)->tqh_first); (q) != 0L; (q) = ((q)->list.tqe_next)) {
  if (si->si_s.spx_seq == ((struct spx *)q)->si_s.spx_seq) {
   global_spx_istat[get_stack_id()].newstats.spxs_rcvduppack++;
   return (1);
  }
  if ((((short)((si->si_s.spx_seq)-(((struct spx *)q)->si_s.spx_seq))) < 0)) {
   global_spx_istat[get_stack_id()].newstats.spxs_rcvoopack++;
   break;
  }
 }


 {
  struct spx_q *p;
  if ((p = malloc(sizeof(*p),2,0x0001)) != 0L)
  {
   p->m = m0;
   do { if (((p)->list.tqe_next = (q)->list.tqe_next) != 0L) (p)->list.tqe_next->list.tqe_prev = &(p)->list.tqe_next; else (&cb->spxp_queue)->tqh_last = &(p)->list.tqe_next; (q)->list.tqe_next = (p); (p)->list.tqe_prev = &(q)->list.tqe_next; } while (0);
  } else
   return 1;
 }




 if (si->si_s.spx_cc & 0x20) {
  cb->s_iobc = ((char *)si)[1 + sizeof(*si)];
  sohasoutofband(so);
  cb->s_oobflags |= 0x10;
 }
present:






 for((q) = ((&cb->spxp_queue)->tqh_first); (q) != 0L; (q) = ((q)->list.tqe_next)) {
    if (((struct spx *)q)->si_s.spx_seq == cb->s_shdr.spx_ack) {
   cb->s_shdr.spx_ack++;
   m = q->m;
   if (((struct spx *)q)->si_s.spx_cc & 0x20) {
    cb->s_oobflags &= ~0x10;
    if (so->so_rcv.sb_cc)
     so->so_oobmark = so->so_rcv.sb_cc;
    else
     so->so_state |= 0x040;
   }
   do { if (((q)->list.tqe_next) != 0L) (q)->list.tqe_next->list.tqe_prev = (q)->list.tqe_prev; else (&cb->spxp_queue)->tqh_last = (q)->list.tqe_prev; *(q)->list.tqe_prev = (q)->list.tqe_next; } while (0);
   free(q, 2);
   wakeup = 1;
   global_spx_istat[get_stack_id()].newstats.spxs_rcvpack++;

   if (cb->s_flags2 & 0x100) {
    struct spxhdr *sp = ((struct spxhdr *)((m)->m_hdr.mh_data));
    u_char dt = sp->spx_dt;
    (*_GLOBAL_spx_newchecks_28_A[get_stack_id()])[4]++;
    if (dt != cb->s_rhdr.spx_dt) {
     struct mbuf *mm =
        m_getclr(0x0001, 6);
     (*_GLOBAL_spx_newchecks_28_A[get_stack_id()])[0]++;
     if (mm != 0L) {
      u_short *s =
       ((u_short *)((mm)->m_hdr.mh_data));
      cb->s_rhdr.spx_dt = dt;
      mm->m_hdr.mh_len = 5;
      s[0] = 5;
      s[1] = 1;
      *(u_char *)(&s[2]) = dt;
      sbappend(&so->so_rcv, mm);
     }
    }
    if (sp->spx_cc & 0x20) {
     { { int ms = splraise((0x20 + ((6) << 4))); { global_mbstat[get_stack_id()].m_mtypes[(m)->m_hdr.mh_type]--; global_mbstat[get_stack_id()].m_mtypes[7]++; } splx(ms); } (m)->m_hdr.mh_type = 7;};
     (*_GLOBAL_spx_newchecks_28_A[get_stack_id()])[1]++;
     so->so_oobmark = 0;
     so->so_state &= ~0x040;
    }
    if (packetp == 0) {
     m->m_hdr.mh_data += sizeof(struct spxhdr);
     m->m_hdr.mh_len -= sizeof(struct spxhdr);
     m->M_dat.MH.MH_pkthdr.len -= sizeof(struct spxhdr);
    }
    if ((sp->spx_cc & 0x10) || packetp) {
     sbappendrecord(&so->so_rcv, m);
     (*_GLOBAL_spx_newchecks_28_A[get_stack_id()])[9]++;
    } else
     sbappend(&so->so_rcv, m);
   } else

   if (packetp) {
    sbappendrecord(&so->so_rcv, m);
   } else {
    cb->s_rhdr = *((struct spxhdr *)((m)->m_hdr.mh_data));
    m->m_hdr.mh_data += sizeof(struct spxhdr);
    m->m_hdr.mh_len -= sizeof(struct spxhdr);
    m->M_dat.MH.MH_pkthdr.len -= sizeof(struct spxhdr);
    sbappend(&so->so_rcv, m);
   }
    } else
   break;
 }
 if (wakeup) { sowakeup((so), &(so)->so_rcv); if ((so)->so_upcall) (*((so)->so_upcall))((so), (so)->so_upcallarg, 0x0001); };
 return (0);
}

void *
spx_ctlinput(cmd, arg_as_sa, dummy)
 int cmd;
 struct sockaddr *arg_as_sa;
 void *dummy;
{
 caddr_t arg = ( caddr_t)arg_as_sa;
 struct ipx_addr *na;
 struct sockaddr_ipx *sipx;

 if (cmd < 0 || cmd >= 21)
  return 0L;

 switch (cmd) {

 case 1:
  return 0L;

 case 0:
 case 6:
 case 7:
  sipx = (struct sockaddr_ipx *)arg;
  if (sipx == 0L || sipx->sipx_family != 23)
   return 0L;
  na = &sipx->sipx_addr;
  break;

 default:
  break;
 }
 return 0L;
}





void
spx_quench(ipxp)
 struct ipxpcb *ipxp;
{
 struct spxpcb *cb = ((struct spxpcb *)(ipxp)->ipxp_ppcb);

 if (cb)
  cb->s_cwnd = 1024;
}
# 701 "openbsd3/netipx/spx_usrreq.c"
int
spx_output(cb, m0)
 struct spxpcb *cb;
 struct mbuf *m0;
{
 struct socket *so = cb->s_ipxpcb->ipxp_socket;
 struct mbuf *m;
 struct spx *si = 0L;
 struct sockbuf *sb = &so->so_snd;
 int len = 0, win, rcv_win;
 short span, off, recordp = 0;
 u_short alo;
 int error = 0, sendalot;



 struct mbuf *mprev;

 if (m0) {
  int mtu = cb->s_mtu;
  int datalen;



  for (m = m0; m ; m = m->m_hdr.mh_next) {
   mprev = m;
   len += m->m_hdr.mh_len;
   if (m->m_hdr.mh_flags & 0x0004)
    recordp = 1;
  }
  datalen = (cb->s_flags & 0x08) ?
    len - sizeof(struct spxhdr) : len;
  if (datalen > mtu) {
   if (cb->s_flags & 0x10) {
    m_freem(m0);
    return (40);
   } else {
    int oldEM = cb->s_shdr.spx_cc & 0x10;

    cb->s_shdr.spx_cc &= ~0x10;
    while (len > mtu) {





     m = m_copym(m0, 0, mtu, 0x0000);
     if (cb->s_flags & 0x100) {
         struct mbuf *mm = m;
         (*_GLOBAL_spx_newchecks_28_A[get_stack_id()])[7]++;
         while (mm) {
      mm->m_hdr.mh_flags &= ~0x0004;
      mm = mm->m_hdr.mh_next;
         }
     }
     error = spx_output(cb, m);
     if (error) {
      cb->s_shdr.spx_cc |= oldEM;
      m_freem(m0);
      return(error);
     }
     m_adj(m0, mtu);
     len -= mtu;
    }
    cb->s_shdr.spx_cc |= oldEM;
   }
  }




  if (len & 1) {
   m = mprev;
   if ((((((m))->m_hdr.mh_flags & 0x0001) != 0 && ((((m))->m_hdr.mh_flags & 0x0008) == 0 || (((m))->M_dat.MH.MH_dat.MH_ext.ext_nextref != ((m))))) ? 0 : (((m))->m_hdr.mh_flags & 0x0001 ? ((m))->M_dat.MH.MH_dat.MH_ext.ext_buf + ((m))->M_dat.MH.MH_dat.MH_ext.ext_size - (((m))->m_hdr.mh_data + ((m))->m_hdr.mh_len) : &((m))->M_dat.M_databuf[(256 - sizeof(struct m_hdr))] - (((m))->m_hdr.mh_data + ((m))->m_hdr.mh_len))) >= 1)
    m->m_hdr.mh_len++;
   else {
    struct mbuf *m1 = m_get(0x0001, 1);

    if (m1 == 0) {
     m_freem(m0);
     return (55);
    }
    m1->m_hdr.mh_len = 1;
    *(((u_char *)((m1)->m_hdr.mh_data))) = 0;
    m->m_hdr.mh_next = m1;
   }
  }
  m = m_gethdr(0x0001, 2);
  if (m == 0) {
   m_freem(m0);
   return (55);
  }




  { (m)->M_dat.MH.MH_pkthdr = (m0)->M_dat.MH.MH_pkthdr; (m0)->m_hdr.mh_flags &= ~0x0002; { ((&(m0)->M_dat.MH.MH_pkthdr.tags)->slh_first) = 0L; }; };
  { (m)->m_hdr.mh_data += (((256 - sizeof(struct m_hdr)) - sizeof(struct pkthdr)) - (sizeof(struct spx))) &~ (sizeof(long) - 1); };
  m->m_hdr.mh_len = sizeof(struct spx);
  m->m_hdr.mh_next = m0;
  si = ((struct spx *)((m)->m_hdr.mh_data));
  si->si_i = *cb->s_ipx;
  si->si_s = cb->s_shdr;
  if ((cb->s_flags & 0x10) && (cb->s_flags & 0x08)) {
   struct spxhdr *sh;
   if (m0->m_hdr.mh_len < sizeof(*sh)) {
    if((m0 = m_pullup(m0, sizeof(*sh))) == 0L) {
     (void) m_free(m);
     return (22);
    }
    m->m_hdr.mh_next = m0;
   }
   sh = ((struct spxhdr *)((m0)->m_hdr.mh_data));
   si->si_s.spx_dt = sh->spx_dt;
   si->si_s.spx_cc |= sh->spx_cc & 0x10;
   m0->m_hdr.mh_len -= sizeof(*sh);
   m0->m_hdr.mh_data += sizeof(*sh);
   len -= sizeof(*sh);
  }
  len += sizeof(*si);
  if ((cb->s_flags2 & 0x100) && recordp) {
   si->si_s.spx_cc |= 0x10;
   (*_GLOBAL_spx_newchecks_28_A[get_stack_id()])[8]++;
  }
  if (cb->s_oobflags & 0x08) {
# 834 "openbsd3/netipx/spx_usrreq.c"
   if (len > sizeof(*si)) {
    si->si_s.spx_cc |= 0x20;
    len = (1 + sizeof(*si));
   }
  }
  si->si_i.ipx_len = __extension__({ u_int16_t __swap16_x = ((u_short)len); __builtin_constant_p((u_short)len) ? __extension__({ u_int16_t __swap16gen_x = (__swap16_x); (u_int16_t)((__swap16gen_x & 0xff) << 8 | (__swap16gen_x & 0xff00) >> 8); }) : ({ u_int16_t __swap16md_x = (__swap16_x); __asm ("rorw $8, %w1" : "+r" (__swap16md_x)); __swap16md_x; }); });
  m->M_dat.MH.MH_pkthdr.len = ((len - 1) | 1) + 1;



  sbappendrecord(sb, m);
  cb->s_shdr.spx_seq++;
 }



again:
 sendalot = 0;
 off = cb->s_snxt - cb->s_rack;
 win = min(cb->s_swnd, (cb->s_cwnd/1024));







 if (cb->s_force == 1 + 1) {
  if (win != 0) {
   cb->s_timer[1] = 0;
   cb->s_rxtshift = 0;
  }
 }
 span = cb->s_shdr.spx_seq - cb->s_rack;
 len = min(span, win) - off;

 if (len < 0) {
# 879 "openbsd3/netipx/spx_usrreq.c"
  len = 0;
  if (win == 0) {
   cb->s_timer[0] = 0;
   cb->s_snxt = cb->s_rack;
  }
 }
 if (len > 1)
  sendalot = 1;
 rcv_win = ((long) imin((int)((&so->so_rcv)->sb_hiwat - (&so->so_rcv)->sb_cc), (int)((&so->so_rcv)->sb_mbmax - (&so->so_rcv)->sb_mbcnt)));




 if (cb->s_oobflags & 0x08) {



  cb->s_oobflags &= ~ 0x08;
  sendalot = 1;
  global_spx_istat[get_stack_id()].newstats.spxs_sndurg++;
  goto found;
 }
 if (cb->s_flags & 0x01)
  goto send;
 if (cb->s_state < 4)
  goto send;




 if (len)
  goto send;







 if (rcv_win > 0) {
  u_short delta = 1 + cb->s_shdr.spx_alo - cb->s_shdr.spx_ack;
  int adv = rcv_win - (delta * cb->s_mtu);

  if ((so->so_rcv.sb_cc == 0 && adv >= (2 * cb->s_mtu)) ||
      (100 * adv / so->so_rcv.sb_hiwat >= 35)) {
   global_spx_istat[get_stack_id()].newstats.spxs_sndwinup++;
   cb->s_flags |= 0x01;
   goto send;
  }

 }
# 939 "openbsd3/netipx/spx_usrreq.c"
 if (so->so_snd.sb_cc && cb->s_timer[0] == 0 &&
  cb->s_timer[1] == 0) {
   cb->s_rxtshift = 0;
   spx_setpersist(cb);
 }



 cb->s_outx = 1;
 return (0);

send:



 si = 0L;
 if (len > 0) {
  cb->s_want = cb->s_snxt;
  for (m = sb->sb_mb; m; m = m->m_hdr.mh_nextpkt) {
   si = ((struct spx *)((m)->m_hdr.mh_data));
   if ((((short)((cb->s_snxt)-(si->si_s.spx_seq))) <= 0))
    break;
  }
 found:
  if (si) {
   if (si->si_s.spx_seq == cb->s_snxt)
     cb->s_snxt++;
    else
     global_spx_istat[get_stack_id()].newstats.spxs_sndvoid++, si = 0L;
  }
 }



 if (rcv_win < 0)
  rcv_win = 0;
 alo = cb->s_shdr.spx_ack - 1 + (rcv_win / ((short)cb->s_mtu));
 if ((((short)((alo)-(cb->s_shdr.spx_alo))) < 0))
  alo = cb->s_shdr.spx_alo;

 if (si) {




  m = m_copym((m), (0), (1000000000), 0x0001);
  if (m == 0L)
   return (55);
  si = ((struct spx *)((m)->m_hdr.mh_data));
  if ((((short)((si->si_s.spx_seq)-(cb->s_smax))) < 0))
   global_spx_istat[get_stack_id()].newstats.spxs_sndrexmitpack++;
  else
   global_spx_istat[get_stack_id()].newstats.spxs_sndpack++;
 } else if (cb->s_force || cb->s_flags & 0x01) {



  if (cb->s_force)
   global_spx_istat[get_stack_id()].newstats.spxs_sndprobe++;
  if (cb->s_flags & 0x01)
   global_spx_istat[get_stack_id()].newstats.spxs_sndacks++;
  m = m_gethdr(0x0001, 2);
  if (m == 0)
   return (55);




  { (m)->m_hdr.mh_data += (((256 - sizeof(struct m_hdr)) - sizeof(struct pkthdr)) - (sizeof(struct spx))) &~ (sizeof(long) - 1); };
  m->m_hdr.mh_len = sizeof(*si);
  m->M_dat.MH.MH_pkthdr.len = sizeof(*si);
  si = ((struct spx *)((m)->m_hdr.mh_data));
  si->si_i = *cb->s_ipx;
  si->si_s = cb->s_shdr;
  si->si_s.spx_seq = cb->s_smax + 1;
  si->si_i.ipx_len = __extension__({ u_int16_t __swap16_x = (sizeof(*si)); __builtin_constant_p(sizeof(*si)) ? __extension__({ u_int16_t __swap16gen_x = (__swap16_x); (u_int16_t)((__swap16gen_x & 0xff) << 8 | (__swap16gen_x & 0xff00) >> 8); }) : ({ u_int16_t __swap16md_x = (__swap16_x); __asm ("rorw $8, %w1" : "+r" (__swap16md_x)); __swap16md_x; }); });
  si->si_s.spx_cc |= 0x80;
 } else {
  cb->s_outx = 3;
  if (so->so_options & 0x0001 || global_traceallspxs[get_stack_id()])
   spx_trace(1, cb->s_state, cb, si, 0);
  return (0);
 }



 if ((si->si_s.spx_cc & 0x80) == 0) {
  if (cb->s_force != (1 + 1) ||
      cb->s_timer[1] == 0) {




   if ((((short)((cb->s_smax)-(si->si_s.spx_seq))) < 0)) {
    cb->s_smax = si->si_s.spx_seq;
    if (cb->s_rtt == 0) {
     global_spx_istat[get_stack_id()].newstats.spxs_segstimed++;
     cb->s_rtseq = si->si_s.spx_seq;
     cb->s_rtt = 1;
    }
   }







   if (cb->s_timer[0] == 0 &&
       cb->s_snxt != cb->s_rack) {
    cb->s_timer[0] = cb->s_rxtcur;
    if (cb->s_timer[1]) {
     cb->s_timer[1] = 0;
     cb->s_rxtshift = 0;
    }
   }
  } else if ((((short)((cb->s_smax)-(si->si_s.spx_seq))) < 0)) {
   cb->s_smax = si->si_s.spx_seq;
  }
 } else if (cb->s_state < 4) {
  if (cb->s_rtt == 0)
   cb->s_rtt = 1;
  if (cb->s_timer[0] == 0)
   cb->s_timer[0] = cb->s_rxtcur;
 }
 {




  if (((si->si_s.spx_cc & 0x80) == 0) || cb->s_force)
    si->si_s.spx_cc |= 0x40;
  si->si_s.spx_seq = __extension__({ u_int16_t __swap16_x = (si->si_s.spx_seq); __builtin_constant_p(si->si_s.spx_seq) ? __extension__({ u_int16_t __swap16gen_x = (__swap16_x); (u_int16_t)((__swap16gen_x & 0xff) << 8 | (__swap16gen_x & 0xff00) >> 8); }) : ({ u_int16_t __swap16md_x = (__swap16_x); __asm ("rorw $8, %w1" : "+r" (__swap16md_x)); __swap16md_x; }); });
  si->si_s.spx_alo = __extension__({ u_int16_t __swap16_x = (alo); __builtin_constant_p(alo) ? __extension__({ u_int16_t __swap16gen_x = (__swap16_x); (u_int16_t)((__swap16gen_x & 0xff) << 8 | (__swap16gen_x & 0xff00) >> 8); }) : ({ u_int16_t __swap16md_x = (__swap16_x); __asm ("rorw $8, %w1" : "+r" (__swap16md_x)); __swap16md_x; }); });
  si->si_s.spx_ack = __extension__({ u_int16_t __swap16_x = (cb->s_shdr.spx_ack); __builtin_constant_p(cb->s_shdr.spx_ack) ? __extension__({ u_int16_t __swap16gen_x = (__swap16_x); (u_int16_t)((__swap16gen_x & 0xff) << 8 | (__swap16gen_x & 0xff00) >> 8); }) : ({ u_int16_t __swap16md_x = (__swap16_x); __asm ("rorw $8, %w1" : "+r" (__swap16md_x)); __swap16md_x; }); });

  if (global_ipxcksum[get_stack_id()]) {
   si->si_i.ipx_sum = 0;
   len = __extension__({ u_int16_t __swap16_x = (si->si_i.ipx_len); __builtin_constant_p(si->si_i.ipx_len) ? __extension__({ u_int16_t __swap16gen_x = (__swap16_x); (u_int16_t)((__swap16gen_x & 0xff) << 8 | (__swap16gen_x & 0xff00) >> 8); }) : ({ u_int16_t __swap16md_x = (__swap16_x); __asm ("rorw $8, %w1" : "+r" (__swap16md_x)); __swap16md_x; }); });
   if (len & 1)
    len++;
   si->si_i.ipx_sum = ipx_cksum(m, len);
  } else
   si->si_i.ipx_sum = 0xffff;

  cb->s_outx = 4;
  if (so->so_options & 0x0001 || global_traceallspxs[get_stack_id()])
   spx_trace(1, cb->s_state, cb, si, 0);

  if (so->so_options & 0x0010)
   error = ipx_outputfl(m, (struct route *)0,
       0x10);
  else
   error = ipx_outputfl(m, &cb->s_ipxpcb->ipxp_route, 0);
 }
 if (error) {
  return (error);
 }
 global_spx_istat[get_stack_id()].newstats.spxs_sndtotal++;






 cb->s_force = 0;
 cb->s_flags &= ~(0x01|0x02);
 if ((((short)((alo)-(cb->s_shdr.spx_alo))) > 0))
  cb->s_shdr.spx_alo = alo;
 if (sendalot)
  goto again;
 cb->s_outx = 5;
 return (0);
}

typedef  int _GLOBAL_114_T;  _GLOBAL_114_T  global_spx_do_persist_panics[NUM_STACKS] = {  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  };    

void
spx_setpersist(cb)
 struct spxpcb *cb;
{
 int t = ((cb->s_srtt >> 2) + cb->s_rttvar) >> 1;

 if (cb->s_timer[0] && global_spx_do_persist_panics[get_stack_id()])
  panic("spx_output REXMT");



 { (cb->s_timer[1]) = (t*(*_GLOBAL_spx_backoff_24_A[get_stack_id()])[cb->s_rxtshift]); if ((cb->s_timer[1]) < (( 5*2))) (cb->s_timer[1]) = (( 5*2)); else if ((cb->s_timer[1]) > (( 60*2))) (cb->s_timer[1]) = (( 60*2)); }

                                  ;
 if (cb->s_rxtshift < 12)
  cb->s_rxtshift++;
}


int
spx_ctloutput(req, so, level, name, value)
 int req;
 struct socket *so;
 int level, name;
 struct mbuf **value;
{
 struct mbuf *m;
 struct ipxpcb *ipxp = ((struct ipxpcb *)((so)->so_pcb));
 struct spxpcb *cb;
 int mask, error = 0;

 if (level != 5) {


  return (ipx_ctloutput(req, so, level, name, value));
 }
 if (ipxp == 0L) {
  error = 22;
  goto release;
 } else
  cb = ((struct spxpcb *)(ipxp)->ipxp_ppcb);

 switch (req) {

 case 0:
  if (value == 0L)
   return (22);
  m = m_get(0x0001, 1);
  if (m == 0L)
   return (55);
  switch (name) {

  case 1:
   mask = 0x04;
   goto get_flags;

  case 2:
   mask = 0x08;
  get_flags:
   m->m_hdr.mh_len = sizeof(short);
   *((short *)((m)->m_hdr.mh_data)) = cb->s_flags & mask;
   break;

  case 8:
   m->m_hdr.mh_len = sizeof(u_short);
   *((short *)((m)->m_hdr.mh_data)) = cb->s_mtu;
   break;

  case 4:
   m->m_hdr.mh_len = sizeof(struct spxhdr);
   *((struct spxhdr *)((m)->m_hdr.mh_data)) = cb->s_rhdr;
   break;

  case 3:
   m->m_hdr.mh_len = sizeof(struct spx);
   *((struct spxhdr *)((m)->m_hdr.mh_data)) = cb->s_shdr;
   break;

  default:
   error = 22;
  }
  *value = m;
  break;

 case 1:
  if (value == 0 || *value == 0) {
   error = 22;
   break;
  }
  switch (name) {
   int *ok;

  case 1:
   mask = 0x04;
   goto set_head;

  case 2:
   mask = 0x08;
  set_head:
   if (cb->s_flags & 0x10) {
    ok = ((int *)((*value)->m_hdr.mh_data));
    if (*ok)
     cb->s_flags |= mask;
    else
     cb->s_flags &= ~mask;
   } else error = 22;
   break;

  case 8:
   cb->s_mtu = *(((u_short *)((*value)->m_hdr.mh_data)));
   break;


  case 10:
   ok = ((int *)((*value)->m_hdr.mh_data));
   if (*ok) {
    cb->s_flags2 |= 0x100;
    (*_GLOBAL_spx_newchecks_28_A[get_stack_id()])[5]++;
   } else {
    cb->s_flags2 &= ~0x100;
    (*_GLOBAL_spx_newchecks_28_A[get_stack_id()])[6]++;
   }
   break;


  case 3:
   {
    struct spxhdr *sp =
        ((struct spxhdr *)((*value)->m_hdr.mh_data));
    cb->s_shdr.spx_dt = sp->spx_dt;
    cb->s_shdr.spx_cc = sp->spx_cc & 0x10;
   }
   break;

  default:
   error = 22;
  }
  m_freem(*value);
  break;
 }
 release:
  return (error);
}


int
spx_usrreq(so, req, m, nam, controlp)
 struct socket *so;
 int req;
 struct mbuf *m, *nam, *controlp;
{
 struct ipxpcb *ipxp = ((struct ipxpcb *)((so)->so_pcb));
 struct spxpcb *cb = 0L;
 int s = splraise((0x20 + ((3) << 4)));
 int error = 0, ostate;
 struct sockbuf *sb;

 if (req == 11)
                return (ipx_control(so, (long)m, (caddr_t)nam,
   (struct ifnet *)controlp));
 if (ipxp == 0L) {
  if (req != 0) {
   error = 22;
   goto release;
  }
 } else
  cb = ((struct spxpcb *)(ipxp)->ipxp_ppcb);

 ostate = cb ? cb->s_state : 0;

 switch (req) {

 case 0:
  if (ipxp != 0L) {
   error = 56;
   break;
  }
  error = ipx_pcballoc(so, &global_ipxcbtable[get_stack_id()]);
  if (error)
   break;
  if (so->so_snd.sb_hiwat == 0 || so->so_rcv.sb_hiwat == 0) {
   error = soreserve(so, (u_long) 3072, (u_long) 3072);
   if (error)
    break;
  }
  ipxp = ((struct ipxpcb *)((so)->so_pcb));
  sb = &so->so_snd;

  cb = malloc(sizeof(*cb), 4, 0x0001);
  if (cb == 0L) {
   error = 55;
   break;
  }
  bzero((caddr_t)cb, sizeof(*cb));
  cb->s_ipx = malloc(sizeof(*cb->s_ipx), 4, 0x0001);
  if (cb->s_ipx == 0L) {
   (void) free(cb, 4);
   error = 55;
   break;
  }
  bzero((caddr_t)cb->s_ipx, sizeof(*cb->s_ipx));
  cb->s_state = 1;
  cb->s_smax = -1;
  cb->s_swl1 = -1;
  do { (&cb->spxp_queue)->tqh_first = 0L; (&cb->spxp_queue)->tqh_last = &(&cb->spxp_queue)->tqh_first; } while (0);
  cb->s_ipxpcb = ipxp;
  cb->s_mtu = 576 - sizeof(struct spx);
  cb->s_cwnd = ((long) imin((int)((sb)->sb_hiwat - (sb)->sb_cc), (int)((sb)->sb_mbmax - (sb)->sb_mbcnt))) * 1024 / cb->s_mtu;
  cb->s_ssthresh = cb->s_cwnd;
  cb->s_cwmx = ((long) imin((int)((sb)->sb_hiwat - (sb)->sb_cc), (int)((sb)->sb_mbmax - (sb)->sb_mbcnt))) * 1024 /
    (2 * sizeof(struct spx));


  cb->s_rtt = 0;
  cb->s_rttvar = ( 3*2) << 2;
  { (cb->s_rxtcur) = (((0 >> 2) + (( 3*2) << 2)) >> 1); if ((cb->s_rxtcur) < (( 1*2))) (cb->s_rxtcur) = (( 1*2)); else if ((cb->s_rxtcur) > (( 64*2))) (cb->s_rxtcur) = (( 64*2)); }

                                ;
  ipxp->ipxp_ppcb = (caddr_t) cb;
  break;

 case 1:
  if (cb->s_state > 1)
   cb = spx_disconnect(cb);
  else
   cb = spx_close(cb);
  break;

 case 2:
  error = ipx_pcbbind(ipxp, nam);
  break;

 case 3:
  if (ipxp->ipxp_laddr.ipx_port == 0)
   error = ipx_pcbbind(ipxp, (struct mbuf *)0);
  if (error == 0)
   cb->s_state = 1;
  break;







 case 4:
  if (ipxp->ipxp_laddr.ipx_port == 0) {
   error = ipx_pcbbind(ipxp, (struct mbuf *)0);
   if (error)
    break;
  }
  error = ipx_pcbconnect(ipxp, nam);
  if (error)
   break;
  soisconnecting(so);
  global_spx_istat[get_stack_id()].newstats.spxs_connattempt++;
  cb->s_state = 2;
  cb->s_shdr.spx_did = 0;
  spx_template(cb);
  cb->s_timer[2] = ( 75*2);
  cb->s_force = 1 + ( 75*2);
# 1385 "openbsd3/netipx/spx_usrreq.c"
  ipxp->ipxp_faddr.ipx_port = 0;
  error = spx_output(cb, (struct mbuf *) 0);
  break;

 case 17:
  error = 45;
  break;






 case 6:
  cb = spx_disconnect(cb);
  break;

 case 7:
  socantsendmore(so);
  cb = spx_usrclosed(cb);
  if (cb)
   error = spx_output(cb, (struct mbuf *) 0);
  break;





 case 8:
  cb->s_flags |= 0x80;
  (void) spx_output(cb, (struct mbuf *) 0);
  cb->s_flags &= ~0x80;
  break;

 case 10:
  (void) spx_drop(cb, 53);
  break;

 case 12:
 case 11:
  m = 0L;
  error = 45;
  break;

 case 13:
  if ((cb->s_oobflags & 0x10) || so->so_oobmark ||
      (so->so_state & 0x040)) {
   m->m_hdr.mh_len = 1;
   *((caddr_t)((m)->m_hdr.mh_data)) = cb->s_iobc;
   break;
  }
  error = 22;
  break;

 case 14:
  if (((long) imin((int)((&so->so_snd)->sb_hiwat - (&so->so_snd)->sb_cc), (int)((&so->so_snd)->sb_mbmax - (&so->so_snd)->sb_mbcnt))) < -512) {
   error = 55;
   break;
  }
  cb->s_oobflags |= 0x08;


 case 9:
  if (controlp) {
   u_short *p = ((u_short *)((controlp)->m_hdr.mh_data));
   (*_GLOBAL_spx_newchecks_28_A[get_stack_id()])[2]++;
   if ((p[0] == 5) && p[1] == 1) {
    cb->s_shdr.spx_dt = *(u_char *)(&p[2]);
    (*_GLOBAL_spx_newchecks_28_A[get_stack_id()])[3]++;
   }
   m_freem(controlp);
  }
  controlp = 0L;
  error = spx_output(cb, m);
  m = 0L;
  break;

 case 15:
  ipx_setsockaddr(ipxp, nam);
  break;






 case 5:


 case 16:
  ipx_setpeeraddr(ipxp, nam);
  break;

 case 19:
  cb = spx_timers(cb, (long)nam);
  req |= ((long)nam) << 8;
  break;

 case 18:
 case 20:
 case 21:
  error = 45;
  break;

 default:
  panic("spx_usrreq");
 }
 if (cb && (so->so_options & 0x0001 || global_traceallspxs[get_stack_id()]))
  spx_trace(2, (u_char)ostate, cb, (struct spx *)0, req);
release:
 if (controlp != 0L)
  m_freem(controlp);
 if (m != 0L)
  m_freem(m);
 splx(s);
 return (error);
}

int
spx_usrreq_sp(so, req, m, nam, controlp)
 struct socket *so;
 int req;
 struct mbuf *m, *nam, *controlp;
{
 int error = spx_usrreq(so, req, m, nam, controlp);

 if (req == 0 && error == 0) {
  struct ipxpcb *ipxp = ((struct ipxpcb *)((so)->so_pcb));
  ((struct spxpcb *)ipxp->ipxp_ppcb)->s_flags |=
     (0x04 | 0x08 | 0x10);
 }
 return (error);
}







void
spx_template(cb)
 struct spxpcb *cb;
{
 struct ipxpcb *ipxp = cb->s_ipxpcb;
 struct ipx *ipx = cb->s_ipx;
 struct sockbuf *sb = &(ipxp->ipxp_socket->so_snd);

 ipx->ipx_pt = 5;
 ipx->ipx_sna = ipxp->ipxp_laddr;
 ipx->ipx_dna = ipxp->ipxp_faddr;
 cb->s_shdr.spx_sid = __extension__({ u_int16_t __swap16_x = (global_spx_iss[get_stack_id()]); __builtin_constant_p(global_spx_iss[get_stack_id()]) ? __extension__({ u_int16_t __swap16gen_x = (__swap16_x); (u_int16_t)((__swap16gen_x & 0xff) << 8 | (__swap16gen_x & 0xff00) >> 8); }) : ({ u_int16_t __swap16md_x = (__swap16_x); __asm ("rorw $8, %w1" : "+r" (__swap16md_x)); __swap16md_x; }); });
 global_spx_iss[get_stack_id()] += 128/2;
 cb->s_shdr.spx_alo = 1;
 cb->s_cwnd = (((long) imin((int)((sb)->sb_hiwat - (sb)->sb_cc), (int)((sb)->sb_mbmax - (sb)->sb_mbcnt))) * 1024) / cb->s_mtu;
 cb->s_ssthresh = cb->s_cwnd;

 cb->s_cwmx = (((long) imin((int)((sb)->sb_hiwat - (sb)->sb_cc), (int)((sb)->sb_mbmax - (sb)->sb_mbcnt))) * 1024) / (2 * sizeof(struct spx));
 cb->s_cwmx = max(cb->s_cwmx, cb->s_cwnd);

}







struct spxpcb *
spx_close(cb)
 struct spxpcb *cb;
{
 struct spx_q *s;
 struct ipxpcb *ipxp = cb->s_ipxpcb;
 struct socket *so = ipxp->ipxp_socket;

 for (s = ((&cb->spxp_queue)->tqh_first); s != 0L;
      s = ((&cb->spxp_queue)->tqh_first)) {
  do { if (((s)->list.tqe_next) != 0L) (s)->list.tqe_next->list.tqe_prev = (s)->list.tqe_prev; else (&cb->spxp_queue)->tqh_last = (s)->list.tqe_prev; *(s)->list.tqe_prev = (s)->list.tqe_next; } while (0);
  m_freem(s->m);
  free(s, 2);
 }
 free(cb->s_ipx, 4);
 free(cb, 4);
 ipxp->ipxp_ppcb = 0;
 soisdisconnected(so);
 ipx_pcbdetach(ipxp);
 global_spx_istat[get_stack_id()].newstats.spxs_closed++;
 return (0L);
}





struct spxpcb *
spx_usrclosed(cb)
 struct spxpcb *cb;
{
 return (spx_close(cb));
}
struct spxpcb *
spx_disconnect(cb)
 struct spxpcb *cb;
{
 return (spx_close(cb));
}




struct spxpcb *
spx_drop(cb, errno)
 struct spxpcb *cb;
 int errno;
{
 struct socket *so = cb->s_ipxpcb->ipxp_socket;






 if (((cb->s_state) >= 3)) {
  global_spx_istat[get_stack_id()].newstats.spxs_drops++;
  cb->s_state = 0;

 } else
  global_spx_istat[get_stack_id()].newstats.spxs_conndrops++;
 so->so_error = errno;
 return (spx_close(cb));
}

void
spx_abort(ipxp)
 struct ipxpcb *ipxp;
{

 (void) spx_close((struct spxpcb *)ipxp->ipxp_ppcb);
}

typedef  int _GLOBAL_115_T;  _GLOBAL_115_T  _GLOBAL_0_spx_backoff_I [ 12 + 1  ]  = { 1 , 2  , 4  , 8  , 16  , 32  , 64  , 64  , 64  , 64  , 64  , 64  , 64  }  ;  _GLOBAL_115_T  _GLOBAL_1_spx_backoff_I [ 12 + 1  ]  = { 1 , 2  , 4  , 8  , 16  , 32  , 64  , 64  , 64  , 64  , 64  , 64  , 64  }  ;  _GLOBAL_115_T  _GLOBAL_2_spx_backoff_I [ 12 + 1  ]  = { 1 , 2  , 4  , 8  , 16  , 32  , 64  , 64  , 64  , 64  , 64  , 64  , 64  }  ;  _GLOBAL_115_T  _GLOBAL_3_spx_backoff_I [ 12 + 1  ]  = { 1 , 2  , 4  , 8  , 16  , 32  , 64  , 64  , 64  , 64  , 64  , 64  , 64  }  ;  _GLOBAL_115_T  _GLOBAL_4_spx_backoff_I [ 12 + 1  ]  = { 1 , 2  , 4  , 8  , 16  , 32  , 64  , 64  , 64  , 64  , 64  , 64  , 64  }  ;  _GLOBAL_115_T  _GLOBAL_5_spx_backoff_I [ 12 + 1  ]  = { 1 , 2  , 4  , 8  , 16  , 32  , 64  , 64  , 64  , 64  , 64  , 64  , 64  }  ;  _GLOBAL_115_T  _GLOBAL_6_spx_backoff_I [ 12 + 1  ]  = { 1 , 2  , 4  , 8  , 16  , 32  , 64  , 64  , 64  , 64  , 64  , 64  , 64  }  ;  _GLOBAL_115_T  _GLOBAL_7_spx_backoff_I [ 12 + 1  ]  = { 1 , 2  , 4  , 8  , 16  , 32  , 64  , 64  , 64  , 64  , 64  , 64  , 64  }  ;  _GLOBAL_115_T  _GLOBAL_8_spx_backoff_I [ 12 + 1  ]  = { 1 , 2  , 4  , 8  , 16  , 32  , 64  , 64  , 64  , 64  , 64  , 64  , 64  }  ;  _GLOBAL_115_T  _GLOBAL_9_spx_backoff_I [ 12 + 1  ]  = { 1 , 2  , 4  , 8  , 16  , 32  , 64  , 64  , 64  , 64  , 64  , 64  , 64  }  ;  _GLOBAL_115_T  _GLOBAL_10_spx_backoff_I [ 12 + 1  ]  = { 1 , 2  , 4  , 8  , 16  , 32  , 64  , 64  , 64  , 64  , 64  , 64  , 64  }  ;  _GLOBAL_115_T  _GLOBAL_11_spx_backoff_I [ 12 + 1  ]  = { 1 , 2  , 4  , 8  , 16  , 32  , 64  , 64  , 64  , 64  , 64  , 64  , 64  }  ;  _GLOBAL_115_T  _GLOBAL_12_spx_backoff_I [ 12 + 1  ]  = { 1 , 2  , 4  , 8  , 16  , 32  , 64  , 64  , 64  , 64  , 64  , 64  , 64  }  ;  _GLOBAL_115_T  _GLOBAL_13_spx_backoff_I [ 12 + 1  ]  = { 1 , 2  , 4  , 8  , 16  , 32  , 64  , 64  , 64  , 64  , 64  , 64  , 64  }  ;  _GLOBAL_115_T  _GLOBAL_14_spx_backoff_I [ 12 + 1  ]  = { 1 , 2  , 4  , 8  , 16  , 32  , 64  , 64  , 64  , 64  , 64  , 64  , 64  }  ;  _GLOBAL_115_T  _GLOBAL_15_spx_backoff_I [ 12 + 1  ]  = { 1 , 2  , 4  , 8  , 16  , 32  , 64  , 64  , 64  , 64  , 64  , 64  , 64  }  ;  _GLOBAL_115_T  _GLOBAL_16_spx_backoff_I [ 12 + 1  ]  = { 1 , 2  , 4  , 8  , 16  , 32  , 64  , 64  , 64  , 64  , 64  , 64  , 64  }  ;  _GLOBAL_115_T  _GLOBAL_17_spx_backoff_I [ 12 + 1  ]  = { 1 , 2  , 4  , 8  , 16  , 32  , 64  , 64  , 64  , 64  , 64  , 64  , 64  }  ;  _GLOBAL_115_T  _GLOBAL_18_spx_backoff_I [ 12 + 1  ]  = { 1 , 2  , 4  , 8  , 16  , 32  , 64  , 64  , 64  , 64  , 64  , 64  , 64  }  ;  _GLOBAL_115_T  _GLOBAL_19_spx_backoff_I [ 12 + 1  ]  = { 1 , 2  , 4  , 8  , 16  , 32  , 64  , 64  , 64  , 64  , 64  , 64  , 64  }  ;  _GLOBAL_115_T  _GLOBAL_20_spx_backoff_I [ 12 + 1  ]  = { 1 , 2  , 4  , 8  , 16  , 32  , 64  , 64  , 64  , 64  , 64  , 64  , 64  }  ;  _GLOBAL_115_T  _GLOBAL_21_spx_backoff_I [ 12 + 1  ]  = { 1 , 2  , 4  , 8  , 16  , 32  , 64  , 64  , 64  , 64  , 64  , 64  , 64  }  ;  _GLOBAL_115_T  _GLOBAL_22_spx_backoff_I [ 12 + 1  ]  = { 1 , 2  , 4  , 8  , 16  , 32  , 64  , 64  , 64  , 64  , 64  , 64  , 64  }  ;  _GLOBAL_115_T  _GLOBAL_23_spx_backoff_I [ 12 + 1  ]  = { 1 , 2  , 4  , 8  , 16  , 32  , 64  , 64  , 64  , 64  , 64  , 64  , 64  }  ;  _GLOBAL_115_T  _GLOBAL_24_spx_backoff_I [ 12 + 1  ]  = { 1 , 2  , 4  , 8  , 16  , 32  , 64  , 64  , 64  , 64  , 64  , 64  , 64  }  ;  _GLOBAL_115_T  _GLOBAL_25_spx_backoff_I [ 12 + 1  ]  = { 1 , 2  , 4  , 8  , 16  , 32  , 64  , 64  , 64  , 64  , 64  , 64  , 64  }  ;  _GLOBAL_115_T  _GLOBAL_26_spx_backoff_I [ 12 + 1  ]  = { 1 , 2  , 4  , 8  , 16  , 32  , 64  , 64  , 64  , 64  , 64  , 64  , 64  }  ;  _GLOBAL_115_T  _GLOBAL_27_spx_backoff_I [ 12 + 1  ]  = { 1 , 2  , 4  , 8  , 16  , 32  , 64  , 64  , 64  , 64  , 64  , 64  , 64  }  ;  _GLOBAL_115_T  _GLOBAL_28_spx_backoff_I [ 12 + 1  ]  = { 1 , 2  , 4  , 8  , 16  , 32  , 64  , 64  , 64  , 64  , 64  , 64  , 64  }  ;  _GLOBAL_115_T  _GLOBAL_29_spx_backoff_I [ 12 + 1  ]  = { 1 , 2  , 4  , 8  , 16  , 32  , 64  , 64  , 64  , 64  , 64  , 64  , 64  }  ;  _GLOBAL_115_T  _GLOBAL_30_spx_backoff_I [ 12 + 1  ]  = { 1 , 2  , 4  , 8  , 16  , 32  , 64  , 64  , 64  , 64  , 64  , 64  , 64  }  ;  _GLOBAL_115_T  _GLOBAL_31_spx_backoff_I [ 12 + 1  ]  = { 1 , 2  , 4  , 8  , 16  , 32  , 64  , 64  , 64  , 64  , 64  , 64  , 64  }  ;  _GLOBAL_115_T  _GLOBAL_32_spx_backoff_I [ 12 + 1  ]  = { 1 , 2  , 4  , 8  , 16  , 32  , 64  , 64  , 64  , 64  , 64  , 64  , 64  }  ;  _GLOBAL_115_T  _GLOBAL_33_spx_backoff_I [ 12 + 1  ]  = { 1 , 2  , 4  , 8  , 16  , 32  , 64  , 64  , 64  , 64  , 64  , 64  , 64  }  ;  _GLOBAL_115_T  _GLOBAL_34_spx_backoff_I [ 12 + 1  ]  = { 1 , 2  , 4  , 8  , 16  , 32  , 64  , 64  , 64  , 64  , 64  , 64  , 64  }  ;  _GLOBAL_115_T  _GLOBAL_35_spx_backoff_I [ 12 + 1  ]  = { 1 , 2  , 4  , 8  , 16  , 32  , 64  , 64  , 64  , 64  , 64  , 64  , 64  }  ;  _GLOBAL_115_T  _GLOBAL_36_spx_backoff_I [ 12 + 1  ]  = { 1 , 2  , 4  , 8  , 16  , 32  , 64  , 64  , 64  , 64  , 64  , 64  , 64  }  ;  _GLOBAL_115_T  _GLOBAL_37_spx_backoff_I [ 12 + 1  ]  = { 1 , 2  , 4  , 8  , 16  , 32  , 64  , 64  , 64  , 64  , 64  , 64  , 64  }  ;  _GLOBAL_115_T  _GLOBAL_38_spx_backoff_I [ 12 + 1  ]  = { 1 , 2  , 4  , 8  , 16  , 32  , 64  , 64  , 64  , 64  , 64  , 64  , 64  }  ;  _GLOBAL_115_T  _GLOBAL_39_spx_backoff_I [ 12 + 1  ]  = { 1 , 2  , 4  , 8  , 16  , 32  , 64  , 64  , 64  , 64  , 64  , 64  , 64  }  ;  _GLOBAL_115_T  _GLOBAL_40_spx_backoff_I [ 12 + 1  ]  = { 1 , 2  , 4  , 8  , 16  , 32  , 64  , 64  , 64  , 64  , 64  , 64  , 64  }  ;  _GLOBAL_115_T  _GLOBAL_41_spx_backoff_I [ 12 + 1  ]  = { 1 , 2  , 4  , 8  , 16  , 32  , 64  , 64  , 64  , 64  , 64  , 64  , 64  }  ;  _GLOBAL_115_T  _GLOBAL_42_spx_backoff_I [ 12 + 1  ]  = { 1 , 2  , 4  , 8  , 16  , 32  , 64  , 64  , 64  , 64  , 64  , 64  , 64  }  ;  _GLOBAL_115_T  _GLOBAL_43_spx_backoff_I [ 12 + 1  ]  = { 1 , 2  , 4  , 8  , 16  , 32  , 64  , 64  , 64  , 64  , 64  , 64  , 64  }  ;  _GLOBAL_115_T  _GLOBAL_44_spx_backoff_I [ 12 + 1  ]  = { 1 , 2  , 4  , 8  , 16  , 32  , 64  , 64  , 64  , 64  , 64  , 64  , 64  }  ;  _GLOBAL_115_T  _GLOBAL_45_spx_backoff_I [ 12 + 1  ]  = { 1 , 2  , 4  , 8  , 16  , 32  , 64  , 64  , 64  , 64  , 64  , 64  , 64  }  ;  _GLOBAL_115_T  _GLOBAL_46_spx_backoff_I [ 12 + 1  ]  = { 1 , 2  , 4  , 8  , 16  , 32  , 64  , 64  , 64  , 64  , 64  , 64  , 64  }  ;  _GLOBAL_115_T  _GLOBAL_47_spx_backoff_I [ 12 + 1  ]  = { 1 , 2  , 4  , 8  , 16  , 32  , 64  , 64  , 64  , 64  , 64  , 64  , 64  }  ;  _GLOBAL_115_T  _GLOBAL_48_spx_backoff_I [ 12 + 1  ]  = { 1 , 2  , 4  , 8  , 16  , 32  , 64  , 64  , 64  , 64  , 64  , 64  , 64  }  ;  _GLOBAL_115_T  _GLOBAL_49_spx_backoff_I [ 12 + 1  ]  = { 1 , 2  , 4  , 8  , 16  , 32  , 64  , 64  , 64  , 64  , 64  , 64  , 64  }  ; static __attribute__ ((unused)) __typeof__(_GLOBAL_0_spx_backoff_I) *_GLOBAL_spx_backoff_29_A[NUM_STACKS] = { &_GLOBAL_0_spx_backoff_I, &_GLOBAL_1_spx_backoff_I, &_GLOBAL_2_spx_backoff_I, &_GLOBAL_3_spx_backoff_I, &_GLOBAL_4_spx_backoff_I, &_GLOBAL_5_spx_backoff_I, &_GLOBAL_6_spx_backoff_I, &_GLOBAL_7_spx_backoff_I, &_GLOBAL_8_spx_backoff_I, &_GLOBAL_9_spx_backoff_I, &_GLOBAL_10_spx_backoff_I, &_GLOBAL_11_spx_backoff_I, &_GLOBAL_12_spx_backoff_I, &_GLOBAL_13_spx_backoff_I, &_GLOBAL_14_spx_backoff_I, &_GLOBAL_15_spx_backoff_I, &_GLOBAL_16_spx_backoff_I, &_GLOBAL_17_spx_backoff_I, &_GLOBAL_18_spx_backoff_I, &_GLOBAL_19_spx_backoff_I, &_GLOBAL_20_spx_backoff_I, &_GLOBAL_21_spx_backoff_I, &_GLOBAL_22_spx_backoff_I, &_GLOBAL_23_spx_backoff_I, &_GLOBAL_24_spx_backoff_I, &_GLOBAL_25_spx_backoff_I, &_GLOBAL_26_spx_backoff_I, &_GLOBAL_27_spx_backoff_I, &_GLOBAL_28_spx_backoff_I, &_GLOBAL_29_spx_backoff_I, &_GLOBAL_30_spx_backoff_I, &_GLOBAL_31_spx_backoff_I, &_GLOBAL_32_spx_backoff_I, &_GLOBAL_33_spx_backoff_I, &_GLOBAL_34_spx_backoff_I, &_GLOBAL_35_spx_backoff_I, &_GLOBAL_36_spx_backoff_I, &_GLOBAL_37_spx_backoff_I, &_GLOBAL_38_spx_backoff_I, &_GLOBAL_39_spx_backoff_I, &_GLOBAL_40_spx_backoff_I, &_GLOBAL_41_spx_backoff_I, &_GLOBAL_42_spx_backoff_I, &_GLOBAL_43_spx_backoff_I, &_GLOBAL_44_spx_backoff_I, &_GLOBAL_45_spx_backoff_I, &_GLOBAL_46_spx_backoff_I, &_GLOBAL_47_spx_backoff_I, &_GLOBAL_48_spx_backoff_I, &_GLOBAL_49_spx_backoff_I, };   
                  



void
spx_fasttimo()
{
 struct ipxpcb *ipxp;
 struct spxpcb *cb;
 int s = splraise((0x20 + ((3) << 4)));

 ipxp = global_ipxcbtable[get_stack_id()].ipxpt_queue.cqh_first;
 if (ipxp)
  for (; ipxp != (struct ipxpcb *)&global_ipxcbtable[get_stack_id()].ipxpt_queue;
       ipxp = ipxp->ipxp_queue.cqe_next)
   if ((cb = (struct spxpcb *)ipxp->ipxp_ppcb) &&
       (cb->s_flags & 0x02)) {
    cb->s_flags &= ~0x02;
    cb->s_flags |= 0x01;
    global_spx_istat[get_stack_id()].newstats.spxs_delack++;
    (void) spx_output(cb, (struct mbuf *) 0);
   }
 splx(s);
}






void
spx_slowtimo()
{
 struct ipxpcb *ipx, *ipxnxt;
 struct spxpcb *cb;
 int s = splraise((0x20 + ((3) << 4)));
 int i;




 ipx = global_ipxcbtable[get_stack_id()].ipxpt_queue.cqh_first;
 if (ipx == 0) {
  splx(s);
  return;
 }
 while (ipx != (struct ipxpcb *)&global_ipxcbtable[get_stack_id()].ipxpt_queue) {
  cb = ((struct spxpcb *)(ipx)->ipxp_ppcb);
  ipxnxt = ipx->ipxp_queue.cqe_next;
  if (cb == 0)
   goto tpgone;
  for (i = 0; i < 4; i++) {
   if (cb->s_timer[i] && --cb->s_timer[i] == 0) {
    (void) spx_usrreq(cb->s_ipxpcb->ipxp_socket,
        19, 0L,
        (struct mbuf *)(long)i, 0L);
    if (ipxnxt->ipxp_queue.cqe_prev != ipx)
     goto tpgone;
   }
  }
  cb->s_idle++;
  if (cb->s_rtt)
   cb->s_rtt++;
tpgone:
  ipx = ipxnxt;
 }
 global_spx_iss[get_stack_id()] += 128/2;
 splx(s);
}



struct spxpcb *
spx_timers(cb, timer)
 struct spxpcb *cb;
 int timer;
{
 long rexmt;
 int win;

 cb->s_force = 1 + timer;
 switch (timer) {





 case 3:
  printf("spx: SPXT_2MSL went off for no reason\n");
  cb->s_timer[timer] = 0;
  break;






 case 0:
  if (++cb->s_rxtshift > 12) {
   cb->s_rxtshift = 12;
   global_spx_istat[get_stack_id()].newstats.spxs_timeoutdrop++;
   cb = spx_drop(cb, 60);
   break;
  }
  global_spx_istat[get_stack_id()].newstats.spxs_rexmttimeo++;
  rexmt = ((cb->s_srtt >> 2) + cb->s_rttvar) >> 1;
  rexmt *= (*_GLOBAL_spx_backoff_29_A[get_stack_id()])[cb->s_rxtshift];
  { (cb->s_rxtcur) = (rexmt); if ((cb->s_rxtcur) < (( 1*2))) (cb->s_rxtcur) = (( 1*2)); else if ((cb->s_rxtcur) > (( 64*2))) (cb->s_rxtcur) = (( 64*2)); };
  cb->s_timer[0] = cb->s_rxtcur;







  if (cb->s_rxtshift > 12 / 4 ) {
   cb->s_rttvar += (cb->s_srtt >> 2);
   cb->s_srtt = 0;
  }
  cb->s_snxt = cb->s_rack;



  cb->s_rtt = 0;




  win = min(cb->s_swnd, (cb->s_cwnd/1024)) / 2;
  if (win < 2)
   win = 2;
  cb->s_cwnd = 1024;
  cb->s_ssthresh = win * 1024;
  (void) spx_output(cb, (struct mbuf *) 0);
  break;





 case 1:
  global_spx_istat[get_stack_id()].newstats.spxs_persisttimeo++;
  spx_setpersist(cb);
  (void) spx_output(cb, (struct mbuf *) 0);
  break;





 case 2:
  global_spx_istat[get_stack_id()].newstats.spxs_keeptimeo++;
  if (cb->s_state < 4)
   goto dropit;
  if (cb->s_ipxpcb->ipxp_socket->so_options & 0x0008) {
       if (cb->s_idle >= ( 8*( 75*2)))
    goto dropit;
   global_spx_istat[get_stack_id()].newstats.spxs_keepprobe++;
   (void) spx_output(cb, (struct mbuf *) 0);
  } else
   cb->s_idle = 0;
  cb->s_timer[2] = ( 75*2);
  break;
 dropit:
  global_spx_istat[get_stack_id()].newstats.spxs_keepdrops++;
  cb = spx_drop(cb, 60);
  break;
 }
 return (cb);
}

int
spx_sysctl(name, namelen, oldp, oldlenp, newp, newlen)
 int *name;
 u_int namelen;
 void *oldp;
 size_t *oldlenp;
 void *newp;
 size_t newlen;
{

 if (namelen != 1)
  return (20);

 switch (name[0]) {
 default:
  return (42);
 }

}

