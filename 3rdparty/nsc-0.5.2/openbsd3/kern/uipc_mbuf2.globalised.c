# 1 "openbsd3/kern/uipc_mbuf2.c"
# 1 "/home/cmcc/omnet_workspace/inet/3rdparty/nsc-0.5.2//"
# 1 "<built-in>"
# 1 "<command-line>"
# 1 "openbsd3/kern/uipc_mbuf2.c"
# 65 "openbsd3/kern/uipc_mbuf2.c"
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
# 66 "openbsd3/kern/uipc_mbuf2.c" 2
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
# 67 "openbsd3/kern/uipc_mbuf2.c" 2
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




typedef  struct emul   _GLOBAL_58_T; extern  _GLOBAL_58_T  * _GLOBAL_0_emulsw_I [ ]  ; extern  _GLOBAL_58_T  * _GLOBAL_1_emulsw_I [ ]  ; extern  _GLOBAL_58_T  * _GLOBAL_2_emulsw_I [ ]  ; extern  _GLOBAL_58_T  * _GLOBAL_3_emulsw_I [ ]  ; extern  _GLOBAL_58_T  * _GLOBAL_4_emulsw_I [ ]  ; extern  _GLOBAL_58_T  * _GLOBAL_5_emulsw_I [ ]  ; extern  _GLOBAL_58_T  * _GLOBAL_6_emulsw_I [ ]  ; extern  _GLOBAL_58_T  * _GLOBAL_7_emulsw_I [ ]  ; extern  _GLOBAL_58_T  * _GLOBAL_8_emulsw_I [ ]  ; extern  _GLOBAL_58_T  * _GLOBAL_9_emulsw_I [ ]  ; extern  _GLOBAL_58_T  * _GLOBAL_10_emulsw_I [ ]  ; extern  _GLOBAL_58_T  * _GLOBAL_11_emulsw_I [ ]  ; extern  _GLOBAL_58_T  * _GLOBAL_12_emulsw_I [ ]  ; extern  _GLOBAL_58_T  * _GLOBAL_13_emulsw_I [ ]  ; extern  _GLOBAL_58_T  * _GLOBAL_14_emulsw_I [ ]  ; extern  _GLOBAL_58_T  * _GLOBAL_15_emulsw_I [ ]  ; extern  _GLOBAL_58_T  * _GLOBAL_16_emulsw_I [ ]  ; extern  _GLOBAL_58_T  * _GLOBAL_17_emulsw_I [ ]  ; extern  _GLOBAL_58_T  * _GLOBAL_18_emulsw_I [ ]  ; extern  _GLOBAL_58_T  * _GLOBAL_19_emulsw_I [ ]  ; extern  _GLOBAL_58_T  * _GLOBAL_20_emulsw_I [ ]  ; extern  _GLOBAL_58_T  * _GLOBAL_21_emulsw_I [ ]  ; extern  _GLOBAL_58_T  * _GLOBAL_22_emulsw_I [ ]  ; extern  _GLOBAL_58_T  * _GLOBAL_23_emulsw_I [ ]  ; extern  _GLOBAL_58_T  * _GLOBAL_24_emulsw_I [ ]  ; extern  _GLOBAL_58_T  * _GLOBAL_25_emulsw_I [ ]  ; extern  _GLOBAL_58_T  * _GLOBAL_26_emulsw_I [ ]  ; extern  _GLOBAL_58_T  * _GLOBAL_27_emulsw_I [ ]  ; extern  _GLOBAL_58_T  * _GLOBAL_28_emulsw_I [ ]  ; extern  _GLOBAL_58_T  * _GLOBAL_29_emulsw_I [ ]  ; extern  _GLOBAL_58_T  * _GLOBAL_30_emulsw_I [ ]  ; extern  _GLOBAL_58_T  * _GLOBAL_31_emulsw_I [ ]  ; extern  _GLOBAL_58_T  * _GLOBAL_32_emulsw_I [ ]  ; extern  _GLOBAL_58_T  * _GLOBAL_33_emulsw_I [ ]  ; extern  _GLOBAL_58_T  * _GLOBAL_34_emulsw_I [ ]  ; extern  _GLOBAL_58_T  * _GLOBAL_35_emulsw_I [ ]  ; extern  _GLOBAL_58_T  * _GLOBAL_36_emulsw_I [ ]  ; extern  _GLOBAL_58_T  * _GLOBAL_37_emulsw_I [ ]  ; extern  _GLOBAL_58_T  * _GLOBAL_38_emulsw_I [ ]  ; extern  _GLOBAL_58_T  * _GLOBAL_39_emulsw_I [ ]  ; extern  _GLOBAL_58_T  * _GLOBAL_40_emulsw_I [ ]  ; extern  _GLOBAL_58_T  * _GLOBAL_41_emulsw_I [ ]  ; extern  _GLOBAL_58_T  * _GLOBAL_42_emulsw_I [ ]  ; extern  _GLOBAL_58_T  * _GLOBAL_43_emulsw_I [ ]  ; extern  _GLOBAL_58_T  * _GLOBAL_44_emulsw_I [ ]  ; extern  _GLOBAL_58_T  * _GLOBAL_45_emulsw_I [ ]  ; extern  _GLOBAL_58_T  * _GLOBAL_46_emulsw_I [ ]  ; extern  _GLOBAL_58_T  * _GLOBAL_47_emulsw_I [ ]  ; extern  _GLOBAL_58_T  * _GLOBAL_48_emulsw_I [ ]  ; extern  _GLOBAL_58_T  * _GLOBAL_49_emulsw_I [ ]  ; static __attribute__ ((unused)) __typeof__(_GLOBAL_0_emulsw_I) *_GLOBAL_emulsw_15_A[NUM_STACKS];   
typedef  int  _GLOBAL_59_T; extern  _GLOBAL_59_T  global_nemuls[NUM_STACKS];   
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
typedef  struct pidhashhead { struct proc   * lh_first  ;  }   _GLOBAL_60_T; extern  _GLOBAL_60_T  * global_pidhashtbl[NUM_STACKS];         
typedef  u_long  _GLOBAL_61_T; extern  _GLOBAL_61_T  global_pidhash[NUM_STACKS];   


typedef  struct pgrphashhead { struct pgrp   * lh_first  ;  }   _GLOBAL_62_T; extern  _GLOBAL_62_T  * global_pgrphashtbl[NUM_STACKS];         
typedef  u_long  _GLOBAL_63_T; extern  _GLOBAL_63_T  global_pgrphash[NUM_STACKS];   


typedef  struct proc   _GLOBAL_64_T; extern  _GLOBAL_64_T  * global_curproc[NUM_STACKS];    

typedef  struct proc   _GLOBAL_65_T; extern  _GLOBAL_65_T  global_proc0[NUM_STACKS];    
typedef  int  _GLOBAL_66_T; extern  _GLOBAL_66_T  global_nprocs[NUM_STACKS]; extern  _GLOBAL_66_T  global_maxproc[NUM_STACKS];    
typedef  int  _GLOBAL_67_T; extern  _GLOBAL_67_T  global_randompid[NUM_STACKS];   

struct proclist { struct proc *lh_first; };
typedef  struct proclist   _GLOBAL_68_T; extern  _GLOBAL_68_T  global_allproc[NUM_STACKS];    
typedef  struct proclist   _GLOBAL_69_T; extern  _GLOBAL_69_T  global_zombproc[NUM_STACKS];    

typedef  struct proclist   _GLOBAL_70_T; extern  _GLOBAL_70_T  global_deadproc[NUM_STACKS];    
typedef  struct simplelock   _GLOBAL_71_T; extern  _GLOBAL_71_T  global_deadproc_slock[NUM_STACKS];    

typedef  struct proc   _GLOBAL_72_T; extern  _GLOBAL_72_T  * global_initproc[NUM_STACKS];    
typedef  struct proc   _GLOBAL_73_T; extern  _GLOBAL_73_T  * global_syncerproc[NUM_STACKS];    

typedef  struct pool   _GLOBAL_74_T; extern  _GLOBAL_74_T  _GLOBAL_0_proc_pool_I; extern  _GLOBAL_74_T  _GLOBAL_1_proc_pool_I; extern  _GLOBAL_74_T  _GLOBAL_2_proc_pool_I; extern  _GLOBAL_74_T  _GLOBAL_3_proc_pool_I; extern  _GLOBAL_74_T  _GLOBAL_4_proc_pool_I; extern  _GLOBAL_74_T  _GLOBAL_5_proc_pool_I; extern  _GLOBAL_74_T  _GLOBAL_6_proc_pool_I; extern  _GLOBAL_74_T  _GLOBAL_7_proc_pool_I; extern  _GLOBAL_74_T  _GLOBAL_8_proc_pool_I; extern  _GLOBAL_74_T  _GLOBAL_9_proc_pool_I; extern  _GLOBAL_74_T  _GLOBAL_10_proc_pool_I; extern  _GLOBAL_74_T  _GLOBAL_11_proc_pool_I; extern  _GLOBAL_74_T  _GLOBAL_12_proc_pool_I; extern  _GLOBAL_74_T  _GLOBAL_13_proc_pool_I; extern  _GLOBAL_74_T  _GLOBAL_14_proc_pool_I; extern  _GLOBAL_74_T  _GLOBAL_15_proc_pool_I; extern  _GLOBAL_74_T  _GLOBAL_16_proc_pool_I; extern  _GLOBAL_74_T  _GLOBAL_17_proc_pool_I; extern  _GLOBAL_74_T  _GLOBAL_18_proc_pool_I; extern  _GLOBAL_74_T  _GLOBAL_19_proc_pool_I; extern  _GLOBAL_74_T  _GLOBAL_20_proc_pool_I; extern  _GLOBAL_74_T  _GLOBAL_21_proc_pool_I; extern  _GLOBAL_74_T  _GLOBAL_22_proc_pool_I; extern  _GLOBAL_74_T  _GLOBAL_23_proc_pool_I; extern  _GLOBAL_74_T  _GLOBAL_24_proc_pool_I; extern  _GLOBAL_74_T  _GLOBAL_25_proc_pool_I; extern  _GLOBAL_74_T  _GLOBAL_26_proc_pool_I; extern  _GLOBAL_74_T  _GLOBAL_27_proc_pool_I; extern  _GLOBAL_74_T  _GLOBAL_28_proc_pool_I; extern  _GLOBAL_74_T  _GLOBAL_29_proc_pool_I; extern  _GLOBAL_74_T  _GLOBAL_30_proc_pool_I; extern  _GLOBAL_74_T  _GLOBAL_31_proc_pool_I; extern  _GLOBAL_74_T  _GLOBAL_32_proc_pool_I; extern  _GLOBAL_74_T  _GLOBAL_33_proc_pool_I; extern  _GLOBAL_74_T  _GLOBAL_34_proc_pool_I; extern  _GLOBAL_74_T  _GLOBAL_35_proc_pool_I; extern  _GLOBAL_74_T  _GLOBAL_36_proc_pool_I; extern  _GLOBAL_74_T  _GLOBAL_37_proc_pool_I; extern  _GLOBAL_74_T  _GLOBAL_38_proc_pool_I; extern  _GLOBAL_74_T  _GLOBAL_39_proc_pool_I; extern  _GLOBAL_74_T  _GLOBAL_40_proc_pool_I; extern  _GLOBAL_74_T  _GLOBAL_41_proc_pool_I; extern  _GLOBAL_74_T  _GLOBAL_42_proc_pool_I; extern  _GLOBAL_74_T  _GLOBAL_43_proc_pool_I; extern  _GLOBAL_74_T  _GLOBAL_44_proc_pool_I; extern  _GLOBAL_74_T  _GLOBAL_45_proc_pool_I; extern  _GLOBAL_74_T  _GLOBAL_46_proc_pool_I; extern  _GLOBAL_74_T  _GLOBAL_47_proc_pool_I; extern  _GLOBAL_74_T  _GLOBAL_48_proc_pool_I; extern  _GLOBAL_74_T  _GLOBAL_49_proc_pool_I; static __attribute__ ((unused)) __typeof__(_GLOBAL_0_proc_pool_I) *_GLOBAL_proc_pool_16_A[NUM_STACKS];   
typedef  struct pool   _GLOBAL_75_T; extern  _GLOBAL_75_T  _GLOBAL_0_rusage_pool_I; extern  _GLOBAL_75_T  _GLOBAL_1_rusage_pool_I; extern  _GLOBAL_75_T  _GLOBAL_2_rusage_pool_I; extern  _GLOBAL_75_T  _GLOBAL_3_rusage_pool_I; extern  _GLOBAL_75_T  _GLOBAL_4_rusage_pool_I; extern  _GLOBAL_75_T  _GLOBAL_5_rusage_pool_I; extern  _GLOBAL_75_T  _GLOBAL_6_rusage_pool_I; extern  _GLOBAL_75_T  _GLOBAL_7_rusage_pool_I; extern  _GLOBAL_75_T  _GLOBAL_8_rusage_pool_I; extern  _GLOBAL_75_T  _GLOBAL_9_rusage_pool_I; extern  _GLOBAL_75_T  _GLOBAL_10_rusage_pool_I; extern  _GLOBAL_75_T  _GLOBAL_11_rusage_pool_I; extern  _GLOBAL_75_T  _GLOBAL_12_rusage_pool_I; extern  _GLOBAL_75_T  _GLOBAL_13_rusage_pool_I; extern  _GLOBAL_75_T  _GLOBAL_14_rusage_pool_I; extern  _GLOBAL_75_T  _GLOBAL_15_rusage_pool_I; extern  _GLOBAL_75_T  _GLOBAL_16_rusage_pool_I; extern  _GLOBAL_75_T  _GLOBAL_17_rusage_pool_I; extern  _GLOBAL_75_T  _GLOBAL_18_rusage_pool_I; extern  _GLOBAL_75_T  _GLOBAL_19_rusage_pool_I; extern  _GLOBAL_75_T  _GLOBAL_20_rusage_pool_I; extern  _GLOBAL_75_T  _GLOBAL_21_rusage_pool_I; extern  _GLOBAL_75_T  _GLOBAL_22_rusage_pool_I; extern  _GLOBAL_75_T  _GLOBAL_23_rusage_pool_I; extern  _GLOBAL_75_T  _GLOBAL_24_rusage_pool_I; extern  _GLOBAL_75_T  _GLOBAL_25_rusage_pool_I; extern  _GLOBAL_75_T  _GLOBAL_26_rusage_pool_I; extern  _GLOBAL_75_T  _GLOBAL_27_rusage_pool_I; extern  _GLOBAL_75_T  _GLOBAL_28_rusage_pool_I; extern  _GLOBAL_75_T  _GLOBAL_29_rusage_pool_I; extern  _GLOBAL_75_T  _GLOBAL_30_rusage_pool_I; extern  _GLOBAL_75_T  _GLOBAL_31_rusage_pool_I; extern  _GLOBAL_75_T  _GLOBAL_32_rusage_pool_I; extern  _GLOBAL_75_T  _GLOBAL_33_rusage_pool_I; extern  _GLOBAL_75_T  _GLOBAL_34_rusage_pool_I; extern  _GLOBAL_75_T  _GLOBAL_35_rusage_pool_I; extern  _GLOBAL_75_T  _GLOBAL_36_rusage_pool_I; extern  _GLOBAL_75_T  _GLOBAL_37_rusage_pool_I; extern  _GLOBAL_75_T  _GLOBAL_38_rusage_pool_I; extern  _GLOBAL_75_T  _GLOBAL_39_rusage_pool_I; extern  _GLOBAL_75_T  _GLOBAL_40_rusage_pool_I; extern  _GLOBAL_75_T  _GLOBAL_41_rusage_pool_I; extern  _GLOBAL_75_T  _GLOBAL_42_rusage_pool_I; extern  _GLOBAL_75_T  _GLOBAL_43_rusage_pool_I; extern  _GLOBAL_75_T  _GLOBAL_44_rusage_pool_I; extern  _GLOBAL_75_T  _GLOBAL_45_rusage_pool_I; extern  _GLOBAL_75_T  _GLOBAL_46_rusage_pool_I; extern  _GLOBAL_75_T  _GLOBAL_47_rusage_pool_I; extern  _GLOBAL_75_T  _GLOBAL_48_rusage_pool_I; extern  _GLOBAL_75_T  _GLOBAL_49_rusage_pool_I; static __attribute__ ((unused)) __typeof__(_GLOBAL_0_rusage_pool_I) *_GLOBAL_rusage_pool_17_A[NUM_STACKS];   
typedef  struct pool   _GLOBAL_76_T; extern  _GLOBAL_76_T  _GLOBAL_0_ucred_pool_I; extern  _GLOBAL_76_T  _GLOBAL_1_ucred_pool_I; extern  _GLOBAL_76_T  _GLOBAL_2_ucred_pool_I; extern  _GLOBAL_76_T  _GLOBAL_3_ucred_pool_I; extern  _GLOBAL_76_T  _GLOBAL_4_ucred_pool_I; extern  _GLOBAL_76_T  _GLOBAL_5_ucred_pool_I; extern  _GLOBAL_76_T  _GLOBAL_6_ucred_pool_I; extern  _GLOBAL_76_T  _GLOBAL_7_ucred_pool_I; extern  _GLOBAL_76_T  _GLOBAL_8_ucred_pool_I; extern  _GLOBAL_76_T  _GLOBAL_9_ucred_pool_I; extern  _GLOBAL_76_T  _GLOBAL_10_ucred_pool_I; extern  _GLOBAL_76_T  _GLOBAL_11_ucred_pool_I; extern  _GLOBAL_76_T  _GLOBAL_12_ucred_pool_I; extern  _GLOBAL_76_T  _GLOBAL_13_ucred_pool_I; extern  _GLOBAL_76_T  _GLOBAL_14_ucred_pool_I; extern  _GLOBAL_76_T  _GLOBAL_15_ucred_pool_I; extern  _GLOBAL_76_T  _GLOBAL_16_ucred_pool_I; extern  _GLOBAL_76_T  _GLOBAL_17_ucred_pool_I; extern  _GLOBAL_76_T  _GLOBAL_18_ucred_pool_I; extern  _GLOBAL_76_T  _GLOBAL_19_ucred_pool_I; extern  _GLOBAL_76_T  _GLOBAL_20_ucred_pool_I; extern  _GLOBAL_76_T  _GLOBAL_21_ucred_pool_I; extern  _GLOBAL_76_T  _GLOBAL_22_ucred_pool_I; extern  _GLOBAL_76_T  _GLOBAL_23_ucred_pool_I; extern  _GLOBAL_76_T  _GLOBAL_24_ucred_pool_I; extern  _GLOBAL_76_T  _GLOBAL_25_ucred_pool_I; extern  _GLOBAL_76_T  _GLOBAL_26_ucred_pool_I; extern  _GLOBAL_76_T  _GLOBAL_27_ucred_pool_I; extern  _GLOBAL_76_T  _GLOBAL_28_ucred_pool_I; extern  _GLOBAL_76_T  _GLOBAL_29_ucred_pool_I; extern  _GLOBAL_76_T  _GLOBAL_30_ucred_pool_I; extern  _GLOBAL_76_T  _GLOBAL_31_ucred_pool_I; extern  _GLOBAL_76_T  _GLOBAL_32_ucred_pool_I; extern  _GLOBAL_76_T  _GLOBAL_33_ucred_pool_I; extern  _GLOBAL_76_T  _GLOBAL_34_ucred_pool_I; extern  _GLOBAL_76_T  _GLOBAL_35_ucred_pool_I; extern  _GLOBAL_76_T  _GLOBAL_36_ucred_pool_I; extern  _GLOBAL_76_T  _GLOBAL_37_ucred_pool_I; extern  _GLOBAL_76_T  _GLOBAL_38_ucred_pool_I; extern  _GLOBAL_76_T  _GLOBAL_39_ucred_pool_I; extern  _GLOBAL_76_T  _GLOBAL_40_ucred_pool_I; extern  _GLOBAL_76_T  _GLOBAL_41_ucred_pool_I; extern  _GLOBAL_76_T  _GLOBAL_42_ucred_pool_I; extern  _GLOBAL_76_T  _GLOBAL_43_ucred_pool_I; extern  _GLOBAL_76_T  _GLOBAL_44_ucred_pool_I; extern  _GLOBAL_76_T  _GLOBAL_45_ucred_pool_I; extern  _GLOBAL_76_T  _GLOBAL_46_ucred_pool_I; extern  _GLOBAL_76_T  _GLOBAL_47_ucred_pool_I; extern  _GLOBAL_76_T  _GLOBAL_48_ucred_pool_I; extern  _GLOBAL_76_T  _GLOBAL_49_ucred_pool_I; static __attribute__ ((unused)) __typeof__(_GLOBAL_0_ucred_pool_I) *_GLOBAL_ucred_pool_18_A[NUM_STACKS];   
typedef  struct pool   _GLOBAL_77_T; extern  _GLOBAL_77_T  _GLOBAL_0_session_pool_I; extern  _GLOBAL_77_T  _GLOBAL_1_session_pool_I; extern  _GLOBAL_77_T  _GLOBAL_2_session_pool_I; extern  _GLOBAL_77_T  _GLOBAL_3_session_pool_I; extern  _GLOBAL_77_T  _GLOBAL_4_session_pool_I; extern  _GLOBAL_77_T  _GLOBAL_5_session_pool_I; extern  _GLOBAL_77_T  _GLOBAL_6_session_pool_I; extern  _GLOBAL_77_T  _GLOBAL_7_session_pool_I; extern  _GLOBAL_77_T  _GLOBAL_8_session_pool_I; extern  _GLOBAL_77_T  _GLOBAL_9_session_pool_I; extern  _GLOBAL_77_T  _GLOBAL_10_session_pool_I; extern  _GLOBAL_77_T  _GLOBAL_11_session_pool_I; extern  _GLOBAL_77_T  _GLOBAL_12_session_pool_I; extern  _GLOBAL_77_T  _GLOBAL_13_session_pool_I; extern  _GLOBAL_77_T  _GLOBAL_14_session_pool_I; extern  _GLOBAL_77_T  _GLOBAL_15_session_pool_I; extern  _GLOBAL_77_T  _GLOBAL_16_session_pool_I; extern  _GLOBAL_77_T  _GLOBAL_17_session_pool_I; extern  _GLOBAL_77_T  _GLOBAL_18_session_pool_I; extern  _GLOBAL_77_T  _GLOBAL_19_session_pool_I; extern  _GLOBAL_77_T  _GLOBAL_20_session_pool_I; extern  _GLOBAL_77_T  _GLOBAL_21_session_pool_I; extern  _GLOBAL_77_T  _GLOBAL_22_session_pool_I; extern  _GLOBAL_77_T  _GLOBAL_23_session_pool_I; extern  _GLOBAL_77_T  _GLOBAL_24_session_pool_I; extern  _GLOBAL_77_T  _GLOBAL_25_session_pool_I; extern  _GLOBAL_77_T  _GLOBAL_26_session_pool_I; extern  _GLOBAL_77_T  _GLOBAL_27_session_pool_I; extern  _GLOBAL_77_T  _GLOBAL_28_session_pool_I; extern  _GLOBAL_77_T  _GLOBAL_29_session_pool_I; extern  _GLOBAL_77_T  _GLOBAL_30_session_pool_I; extern  _GLOBAL_77_T  _GLOBAL_31_session_pool_I; extern  _GLOBAL_77_T  _GLOBAL_32_session_pool_I; extern  _GLOBAL_77_T  _GLOBAL_33_session_pool_I; extern  _GLOBAL_77_T  _GLOBAL_34_session_pool_I; extern  _GLOBAL_77_T  _GLOBAL_35_session_pool_I; extern  _GLOBAL_77_T  _GLOBAL_36_session_pool_I; extern  _GLOBAL_77_T  _GLOBAL_37_session_pool_I; extern  _GLOBAL_77_T  _GLOBAL_38_session_pool_I; extern  _GLOBAL_77_T  _GLOBAL_39_session_pool_I; extern  _GLOBAL_77_T  _GLOBAL_40_session_pool_I; extern  _GLOBAL_77_T  _GLOBAL_41_session_pool_I; extern  _GLOBAL_77_T  _GLOBAL_42_session_pool_I; extern  _GLOBAL_77_T  _GLOBAL_43_session_pool_I; extern  _GLOBAL_77_T  _GLOBAL_44_session_pool_I; extern  _GLOBAL_77_T  _GLOBAL_45_session_pool_I; extern  _GLOBAL_77_T  _GLOBAL_46_session_pool_I; extern  _GLOBAL_77_T  _GLOBAL_47_session_pool_I; extern  _GLOBAL_77_T  _GLOBAL_48_session_pool_I; extern  _GLOBAL_77_T  _GLOBAL_49_session_pool_I; static __attribute__ ((unused)) __typeof__(_GLOBAL_0_session_pool_I) *_GLOBAL_session_pool_19_A[NUM_STACKS];   
typedef  struct pool   _GLOBAL_78_T; extern  _GLOBAL_78_T  _GLOBAL_0_pcred_pool_I; extern  _GLOBAL_78_T  _GLOBAL_1_pcred_pool_I; extern  _GLOBAL_78_T  _GLOBAL_2_pcred_pool_I; extern  _GLOBAL_78_T  _GLOBAL_3_pcred_pool_I; extern  _GLOBAL_78_T  _GLOBAL_4_pcred_pool_I; extern  _GLOBAL_78_T  _GLOBAL_5_pcred_pool_I; extern  _GLOBAL_78_T  _GLOBAL_6_pcred_pool_I; extern  _GLOBAL_78_T  _GLOBAL_7_pcred_pool_I; extern  _GLOBAL_78_T  _GLOBAL_8_pcred_pool_I; extern  _GLOBAL_78_T  _GLOBAL_9_pcred_pool_I; extern  _GLOBAL_78_T  _GLOBAL_10_pcred_pool_I; extern  _GLOBAL_78_T  _GLOBAL_11_pcred_pool_I; extern  _GLOBAL_78_T  _GLOBAL_12_pcred_pool_I; extern  _GLOBAL_78_T  _GLOBAL_13_pcred_pool_I; extern  _GLOBAL_78_T  _GLOBAL_14_pcred_pool_I; extern  _GLOBAL_78_T  _GLOBAL_15_pcred_pool_I; extern  _GLOBAL_78_T  _GLOBAL_16_pcred_pool_I; extern  _GLOBAL_78_T  _GLOBAL_17_pcred_pool_I; extern  _GLOBAL_78_T  _GLOBAL_18_pcred_pool_I; extern  _GLOBAL_78_T  _GLOBAL_19_pcred_pool_I; extern  _GLOBAL_78_T  _GLOBAL_20_pcred_pool_I; extern  _GLOBAL_78_T  _GLOBAL_21_pcred_pool_I; extern  _GLOBAL_78_T  _GLOBAL_22_pcred_pool_I; extern  _GLOBAL_78_T  _GLOBAL_23_pcred_pool_I; extern  _GLOBAL_78_T  _GLOBAL_24_pcred_pool_I; extern  _GLOBAL_78_T  _GLOBAL_25_pcred_pool_I; extern  _GLOBAL_78_T  _GLOBAL_26_pcred_pool_I; extern  _GLOBAL_78_T  _GLOBAL_27_pcred_pool_I; extern  _GLOBAL_78_T  _GLOBAL_28_pcred_pool_I; extern  _GLOBAL_78_T  _GLOBAL_29_pcred_pool_I; extern  _GLOBAL_78_T  _GLOBAL_30_pcred_pool_I; extern  _GLOBAL_78_T  _GLOBAL_31_pcred_pool_I; extern  _GLOBAL_78_T  _GLOBAL_32_pcred_pool_I; extern  _GLOBAL_78_T  _GLOBAL_33_pcred_pool_I; extern  _GLOBAL_78_T  _GLOBAL_34_pcred_pool_I; extern  _GLOBAL_78_T  _GLOBAL_35_pcred_pool_I; extern  _GLOBAL_78_T  _GLOBAL_36_pcred_pool_I; extern  _GLOBAL_78_T  _GLOBAL_37_pcred_pool_I; extern  _GLOBAL_78_T  _GLOBAL_38_pcred_pool_I; extern  _GLOBAL_78_T  _GLOBAL_39_pcred_pool_I; extern  _GLOBAL_78_T  _GLOBAL_40_pcred_pool_I; extern  _GLOBAL_78_T  _GLOBAL_41_pcred_pool_I; extern  _GLOBAL_78_T  _GLOBAL_42_pcred_pool_I; extern  _GLOBAL_78_T  _GLOBAL_43_pcred_pool_I; extern  _GLOBAL_78_T  _GLOBAL_44_pcred_pool_I; extern  _GLOBAL_78_T  _GLOBAL_45_pcred_pool_I; extern  _GLOBAL_78_T  _GLOBAL_46_pcred_pool_I; extern  _GLOBAL_78_T  _GLOBAL_47_pcred_pool_I; extern  _GLOBAL_78_T  _GLOBAL_48_pcred_pool_I; extern  _GLOBAL_78_T  _GLOBAL_49_pcred_pool_I; static __attribute__ ((unused)) __typeof__(_GLOBAL_0_pcred_pool_I) *_GLOBAL_pcred_pool_20_A[NUM_STACKS];   


typedef  int  _GLOBAL_79_T; extern  _GLOBAL_79_T  global_whichqs[NUM_STACKS];   
struct prochd {
 struct proc *ph_link;
 struct proc *ph_rlink;
};
typedef  struct prochd   _GLOBAL_80_T; extern  _GLOBAL_80_T  _GLOBAL_0_qs_I [ 32 ] ; extern  _GLOBAL_80_T  _GLOBAL_1_qs_I [ 32 ] ; extern  _GLOBAL_80_T  _GLOBAL_2_qs_I [ 32 ] ; extern  _GLOBAL_80_T  _GLOBAL_3_qs_I [ 32 ] ; extern  _GLOBAL_80_T  _GLOBAL_4_qs_I [ 32 ] ; extern  _GLOBAL_80_T  _GLOBAL_5_qs_I [ 32 ] ; extern  _GLOBAL_80_T  _GLOBAL_6_qs_I [ 32 ] ; extern  _GLOBAL_80_T  _GLOBAL_7_qs_I [ 32 ] ; extern  _GLOBAL_80_T  _GLOBAL_8_qs_I [ 32 ] ; extern  _GLOBAL_80_T  _GLOBAL_9_qs_I [ 32 ] ; extern  _GLOBAL_80_T  _GLOBAL_10_qs_I [ 32 ] ; extern  _GLOBAL_80_T  _GLOBAL_11_qs_I [ 32 ] ; extern  _GLOBAL_80_T  _GLOBAL_12_qs_I [ 32 ] ; extern  _GLOBAL_80_T  _GLOBAL_13_qs_I [ 32 ] ; extern  _GLOBAL_80_T  _GLOBAL_14_qs_I [ 32 ] ; extern  _GLOBAL_80_T  _GLOBAL_15_qs_I [ 32 ] ; extern  _GLOBAL_80_T  _GLOBAL_16_qs_I [ 32 ] ; extern  _GLOBAL_80_T  _GLOBAL_17_qs_I [ 32 ] ; extern  _GLOBAL_80_T  _GLOBAL_18_qs_I [ 32 ] ; extern  _GLOBAL_80_T  _GLOBAL_19_qs_I [ 32 ] ; extern  _GLOBAL_80_T  _GLOBAL_20_qs_I [ 32 ] ; extern  _GLOBAL_80_T  _GLOBAL_21_qs_I [ 32 ] ; extern  _GLOBAL_80_T  _GLOBAL_22_qs_I [ 32 ] ; extern  _GLOBAL_80_T  _GLOBAL_23_qs_I [ 32 ] ; extern  _GLOBAL_80_T  _GLOBAL_24_qs_I [ 32 ] ; extern  _GLOBAL_80_T  _GLOBAL_25_qs_I [ 32 ] ; extern  _GLOBAL_80_T  _GLOBAL_26_qs_I [ 32 ] ; extern  _GLOBAL_80_T  _GLOBAL_27_qs_I [ 32 ] ; extern  _GLOBAL_80_T  _GLOBAL_28_qs_I [ 32 ] ; extern  _GLOBAL_80_T  _GLOBAL_29_qs_I [ 32 ] ; extern  _GLOBAL_80_T  _GLOBAL_30_qs_I [ 32 ] ; extern  _GLOBAL_80_T  _GLOBAL_31_qs_I [ 32 ] ; extern  _GLOBAL_80_T  _GLOBAL_32_qs_I [ 32 ] ; extern  _GLOBAL_80_T  _GLOBAL_33_qs_I [ 32 ] ; extern  _GLOBAL_80_T  _GLOBAL_34_qs_I [ 32 ] ; extern  _GLOBAL_80_T  _GLOBAL_35_qs_I [ 32 ] ; extern  _GLOBAL_80_T  _GLOBAL_36_qs_I [ 32 ] ; extern  _GLOBAL_80_T  _GLOBAL_37_qs_I [ 32 ] ; extern  _GLOBAL_80_T  _GLOBAL_38_qs_I [ 32 ] ; extern  _GLOBAL_80_T  _GLOBAL_39_qs_I [ 32 ] ; extern  _GLOBAL_80_T  _GLOBAL_40_qs_I [ 32 ] ; extern  _GLOBAL_80_T  _GLOBAL_41_qs_I [ 32 ] ; extern  _GLOBAL_80_T  _GLOBAL_42_qs_I [ 32 ] ; extern  _GLOBAL_80_T  _GLOBAL_43_qs_I [ 32 ] ; extern  _GLOBAL_80_T  _GLOBAL_44_qs_I [ 32 ] ; extern  _GLOBAL_80_T  _GLOBAL_45_qs_I [ 32 ] ; extern  _GLOBAL_80_T  _GLOBAL_46_qs_I [ 32 ] ; extern  _GLOBAL_80_T  _GLOBAL_47_qs_I [ 32 ] ; extern  _GLOBAL_80_T  _GLOBAL_48_qs_I [ 32 ] ; extern  _GLOBAL_80_T  _GLOBAL_49_qs_I [ 32 ] ; static __attribute__ ((unused)) __typeof__(_GLOBAL_0_qs_I) *_GLOBAL_qs_21_A[NUM_STACKS];   

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
# 68 "openbsd3/kern/uipc_mbuf2.c" 2
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
typedef  struct kmemstats   _GLOBAL_81_T; extern  _GLOBAL_81_T  _GLOBAL_0_kmemstats_I [ ] ; extern  _GLOBAL_81_T  _GLOBAL_1_kmemstats_I [ ] ; extern  _GLOBAL_81_T  _GLOBAL_2_kmemstats_I [ ] ; extern  _GLOBAL_81_T  _GLOBAL_3_kmemstats_I [ ] ; extern  _GLOBAL_81_T  _GLOBAL_4_kmemstats_I [ ] ; extern  _GLOBAL_81_T  _GLOBAL_5_kmemstats_I [ ] ; extern  _GLOBAL_81_T  _GLOBAL_6_kmemstats_I [ ] ; extern  _GLOBAL_81_T  _GLOBAL_7_kmemstats_I [ ] ; extern  _GLOBAL_81_T  _GLOBAL_8_kmemstats_I [ ] ; extern  _GLOBAL_81_T  _GLOBAL_9_kmemstats_I [ ] ; extern  _GLOBAL_81_T  _GLOBAL_10_kmemstats_I [ ] ; extern  _GLOBAL_81_T  _GLOBAL_11_kmemstats_I [ ] ; extern  _GLOBAL_81_T  _GLOBAL_12_kmemstats_I [ ] ; extern  _GLOBAL_81_T  _GLOBAL_13_kmemstats_I [ ] ; extern  _GLOBAL_81_T  _GLOBAL_14_kmemstats_I [ ] ; extern  _GLOBAL_81_T  _GLOBAL_15_kmemstats_I [ ] ; extern  _GLOBAL_81_T  _GLOBAL_16_kmemstats_I [ ] ; extern  _GLOBAL_81_T  _GLOBAL_17_kmemstats_I [ ] ; extern  _GLOBAL_81_T  _GLOBAL_18_kmemstats_I [ ] ; extern  _GLOBAL_81_T  _GLOBAL_19_kmemstats_I [ ] ; extern  _GLOBAL_81_T  _GLOBAL_20_kmemstats_I [ ] ; extern  _GLOBAL_81_T  _GLOBAL_21_kmemstats_I [ ] ; extern  _GLOBAL_81_T  _GLOBAL_22_kmemstats_I [ ] ; extern  _GLOBAL_81_T  _GLOBAL_23_kmemstats_I [ ] ; extern  _GLOBAL_81_T  _GLOBAL_24_kmemstats_I [ ] ; extern  _GLOBAL_81_T  _GLOBAL_25_kmemstats_I [ ] ; extern  _GLOBAL_81_T  _GLOBAL_26_kmemstats_I [ ] ; extern  _GLOBAL_81_T  _GLOBAL_27_kmemstats_I [ ] ; extern  _GLOBAL_81_T  _GLOBAL_28_kmemstats_I [ ] ; extern  _GLOBAL_81_T  _GLOBAL_29_kmemstats_I [ ] ; extern  _GLOBAL_81_T  _GLOBAL_30_kmemstats_I [ ] ; extern  _GLOBAL_81_T  _GLOBAL_31_kmemstats_I [ ] ; extern  _GLOBAL_81_T  _GLOBAL_32_kmemstats_I [ ] ; extern  _GLOBAL_81_T  _GLOBAL_33_kmemstats_I [ ] ; extern  _GLOBAL_81_T  _GLOBAL_34_kmemstats_I [ ] ; extern  _GLOBAL_81_T  _GLOBAL_35_kmemstats_I [ ] ; extern  _GLOBAL_81_T  _GLOBAL_36_kmemstats_I [ ] ; extern  _GLOBAL_81_T  _GLOBAL_37_kmemstats_I [ ] ; extern  _GLOBAL_81_T  _GLOBAL_38_kmemstats_I [ ] ; extern  _GLOBAL_81_T  _GLOBAL_39_kmemstats_I [ ] ; extern  _GLOBAL_81_T  _GLOBAL_40_kmemstats_I [ ] ; extern  _GLOBAL_81_T  _GLOBAL_41_kmemstats_I [ ] ; extern  _GLOBAL_81_T  _GLOBAL_42_kmemstats_I [ ] ; extern  _GLOBAL_81_T  _GLOBAL_43_kmemstats_I [ ] ; extern  _GLOBAL_81_T  _GLOBAL_44_kmemstats_I [ ] ; extern  _GLOBAL_81_T  _GLOBAL_45_kmemstats_I [ ] ; extern  _GLOBAL_81_T  _GLOBAL_46_kmemstats_I [ ] ; extern  _GLOBAL_81_T  _GLOBAL_47_kmemstats_I [ ] ; extern  _GLOBAL_81_T  _GLOBAL_48_kmemstats_I [ ] ; extern  _GLOBAL_81_T  _GLOBAL_49_kmemstats_I [ ] ; static __attribute__ ((unused)) __typeof__(_GLOBAL_0_kmemstats_I) *_GLOBAL_kmemstats_22_A[NUM_STACKS];   
typedef  struct kmemusage   _GLOBAL_82_T; extern  _GLOBAL_82_T  * global_kmemusage[NUM_STACKS];    
typedef  char  _GLOBAL_83_T; extern  _GLOBAL_83_T  * global_kmembase[NUM_STACKS];   
typedef  struct kmembuckets   _GLOBAL_84_T; extern  _GLOBAL_84_T  _GLOBAL_0_bucket_I [ ] ; extern  _GLOBAL_84_T  _GLOBAL_1_bucket_I [ ] ; extern  _GLOBAL_84_T  _GLOBAL_2_bucket_I [ ] ; extern  _GLOBAL_84_T  _GLOBAL_3_bucket_I [ ] ; extern  _GLOBAL_84_T  _GLOBAL_4_bucket_I [ ] ; extern  _GLOBAL_84_T  _GLOBAL_5_bucket_I [ ] ; extern  _GLOBAL_84_T  _GLOBAL_6_bucket_I [ ] ; extern  _GLOBAL_84_T  _GLOBAL_7_bucket_I [ ] ; extern  _GLOBAL_84_T  _GLOBAL_8_bucket_I [ ] ; extern  _GLOBAL_84_T  _GLOBAL_9_bucket_I [ ] ; extern  _GLOBAL_84_T  _GLOBAL_10_bucket_I [ ] ; extern  _GLOBAL_84_T  _GLOBAL_11_bucket_I [ ] ; extern  _GLOBAL_84_T  _GLOBAL_12_bucket_I [ ] ; extern  _GLOBAL_84_T  _GLOBAL_13_bucket_I [ ] ; extern  _GLOBAL_84_T  _GLOBAL_14_bucket_I [ ] ; extern  _GLOBAL_84_T  _GLOBAL_15_bucket_I [ ] ; extern  _GLOBAL_84_T  _GLOBAL_16_bucket_I [ ] ; extern  _GLOBAL_84_T  _GLOBAL_17_bucket_I [ ] ; extern  _GLOBAL_84_T  _GLOBAL_18_bucket_I [ ] ; extern  _GLOBAL_84_T  _GLOBAL_19_bucket_I [ ] ; extern  _GLOBAL_84_T  _GLOBAL_20_bucket_I [ ] ; extern  _GLOBAL_84_T  _GLOBAL_21_bucket_I [ ] ; extern  _GLOBAL_84_T  _GLOBAL_22_bucket_I [ ] ; extern  _GLOBAL_84_T  _GLOBAL_23_bucket_I [ ] ; extern  _GLOBAL_84_T  _GLOBAL_24_bucket_I [ ] ; extern  _GLOBAL_84_T  _GLOBAL_25_bucket_I [ ] ; extern  _GLOBAL_84_T  _GLOBAL_26_bucket_I [ ] ; extern  _GLOBAL_84_T  _GLOBAL_27_bucket_I [ ] ; extern  _GLOBAL_84_T  _GLOBAL_28_bucket_I [ ] ; extern  _GLOBAL_84_T  _GLOBAL_29_bucket_I [ ] ; extern  _GLOBAL_84_T  _GLOBAL_30_bucket_I [ ] ; extern  _GLOBAL_84_T  _GLOBAL_31_bucket_I [ ] ; extern  _GLOBAL_84_T  _GLOBAL_32_bucket_I [ ] ; extern  _GLOBAL_84_T  _GLOBAL_33_bucket_I [ ] ; extern  _GLOBAL_84_T  _GLOBAL_34_bucket_I [ ] ; extern  _GLOBAL_84_T  _GLOBAL_35_bucket_I [ ] ; extern  _GLOBAL_84_T  _GLOBAL_36_bucket_I [ ] ; extern  _GLOBAL_84_T  _GLOBAL_37_bucket_I [ ] ; extern  _GLOBAL_84_T  _GLOBAL_38_bucket_I [ ] ; extern  _GLOBAL_84_T  _GLOBAL_39_bucket_I [ ] ; extern  _GLOBAL_84_T  _GLOBAL_40_bucket_I [ ] ; extern  _GLOBAL_84_T  _GLOBAL_41_bucket_I [ ] ; extern  _GLOBAL_84_T  _GLOBAL_42_bucket_I [ ] ; extern  _GLOBAL_84_T  _GLOBAL_43_bucket_I [ ] ; extern  _GLOBAL_84_T  _GLOBAL_44_bucket_I [ ] ; extern  _GLOBAL_84_T  _GLOBAL_45_bucket_I [ ] ; extern  _GLOBAL_84_T  _GLOBAL_46_bucket_I [ ] ; extern  _GLOBAL_84_T  _GLOBAL_47_bucket_I [ ] ; extern  _GLOBAL_84_T  _GLOBAL_48_bucket_I [ ] ; extern  _GLOBAL_84_T  _GLOBAL_49_bucket_I [ ] ; static __attribute__ ((unused)) __typeof__(_GLOBAL_0_bucket_I) *_GLOBAL_bucket_23_A[NUM_STACKS];   

extern void *malloc(unsigned long size, int type, int flags);
extern void free(void *addr, int type);
extern int sysctl_malloc(int *, u_int, void *, size_t *, void *, size_t,
         struct proc *);

size_t malloc_roundup(size_t);
# 69 "openbsd3/kern/uipc_mbuf2.c" 2
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






typedef  struct pool_allocator   _GLOBAL_85_T; extern  _GLOBAL_85_T  global_pool_allocator_nointr[NUM_STACKS];    

typedef  struct pool_allocator   _GLOBAL_86_T; extern  _GLOBAL_86_T  global_pool_allocator_kmem[NUM_STACKS];    

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


typedef  struct mbstat   _GLOBAL_87_T; extern  _GLOBAL_87_T  global_mbstat[NUM_STACKS];    
typedef  int  _GLOBAL_88_T; extern  _GLOBAL_88_T  global_nmbclust[NUM_STACKS];   
typedef  int  _GLOBAL_89_T; extern  _GLOBAL_89_T  global_mblowat[NUM_STACKS];   
typedef  int  _GLOBAL_90_T; extern  _GLOBAL_90_T  global_mcllowat[NUM_STACKS];   
typedef  int  _GLOBAL_91_T; extern  _GLOBAL_91_T  global_max_linkhdr[NUM_STACKS];   
typedef  int  _GLOBAL_92_T; extern  _GLOBAL_92_T  global_max_protohdr[NUM_STACKS];   
typedef  int  _GLOBAL_93_T; extern  _GLOBAL_93_T  global_max_hdr[NUM_STACKS];   
typedef  int  _GLOBAL_94_T; extern  _GLOBAL_94_T  global_max_datalen[NUM_STACKS];   
typedef  int  _GLOBAL_95_T; extern  _GLOBAL_95_T  _GLOBAL_0_mbtypes_I [ ] ; extern  _GLOBAL_95_T  _GLOBAL_1_mbtypes_I [ ] ; extern  _GLOBAL_95_T  _GLOBAL_2_mbtypes_I [ ] ; extern  _GLOBAL_95_T  _GLOBAL_3_mbtypes_I [ ] ; extern  _GLOBAL_95_T  _GLOBAL_4_mbtypes_I [ ] ; extern  _GLOBAL_95_T  _GLOBAL_5_mbtypes_I [ ] ; extern  _GLOBAL_95_T  _GLOBAL_6_mbtypes_I [ ] ; extern  _GLOBAL_95_T  _GLOBAL_7_mbtypes_I [ ] ; extern  _GLOBAL_95_T  _GLOBAL_8_mbtypes_I [ ] ; extern  _GLOBAL_95_T  _GLOBAL_9_mbtypes_I [ ] ; extern  _GLOBAL_95_T  _GLOBAL_10_mbtypes_I [ ] ; extern  _GLOBAL_95_T  _GLOBAL_11_mbtypes_I [ ] ; extern  _GLOBAL_95_T  _GLOBAL_12_mbtypes_I [ ] ; extern  _GLOBAL_95_T  _GLOBAL_13_mbtypes_I [ ] ; extern  _GLOBAL_95_T  _GLOBAL_14_mbtypes_I [ ] ; extern  _GLOBAL_95_T  _GLOBAL_15_mbtypes_I [ ] ; extern  _GLOBAL_95_T  _GLOBAL_16_mbtypes_I [ ] ; extern  _GLOBAL_95_T  _GLOBAL_17_mbtypes_I [ ] ; extern  _GLOBAL_95_T  _GLOBAL_18_mbtypes_I [ ] ; extern  _GLOBAL_95_T  _GLOBAL_19_mbtypes_I [ ] ; extern  _GLOBAL_95_T  _GLOBAL_20_mbtypes_I [ ] ; extern  _GLOBAL_95_T  _GLOBAL_21_mbtypes_I [ ] ; extern  _GLOBAL_95_T  _GLOBAL_22_mbtypes_I [ ] ; extern  _GLOBAL_95_T  _GLOBAL_23_mbtypes_I [ ] ; extern  _GLOBAL_95_T  _GLOBAL_24_mbtypes_I [ ] ; extern  _GLOBAL_95_T  _GLOBAL_25_mbtypes_I [ ] ; extern  _GLOBAL_95_T  _GLOBAL_26_mbtypes_I [ ] ; extern  _GLOBAL_95_T  _GLOBAL_27_mbtypes_I [ ] ; extern  _GLOBAL_95_T  _GLOBAL_28_mbtypes_I [ ] ; extern  _GLOBAL_95_T  _GLOBAL_29_mbtypes_I [ ] ; extern  _GLOBAL_95_T  _GLOBAL_30_mbtypes_I [ ] ; extern  _GLOBAL_95_T  _GLOBAL_31_mbtypes_I [ ] ; extern  _GLOBAL_95_T  _GLOBAL_32_mbtypes_I [ ] ; extern  _GLOBAL_95_T  _GLOBAL_33_mbtypes_I [ ] ; extern  _GLOBAL_95_T  _GLOBAL_34_mbtypes_I [ ] ; extern  _GLOBAL_95_T  _GLOBAL_35_mbtypes_I [ ] ; extern  _GLOBAL_95_T  _GLOBAL_36_mbtypes_I [ ] ; extern  _GLOBAL_95_T  _GLOBAL_37_mbtypes_I [ ] ; extern  _GLOBAL_95_T  _GLOBAL_38_mbtypes_I [ ] ; extern  _GLOBAL_95_T  _GLOBAL_39_mbtypes_I [ ] ; extern  _GLOBAL_95_T  _GLOBAL_40_mbtypes_I [ ] ; extern  _GLOBAL_95_T  _GLOBAL_41_mbtypes_I [ ] ; extern  _GLOBAL_95_T  _GLOBAL_42_mbtypes_I [ ] ; extern  _GLOBAL_95_T  _GLOBAL_43_mbtypes_I [ ] ; extern  _GLOBAL_95_T  _GLOBAL_44_mbtypes_I [ ] ; extern  _GLOBAL_95_T  _GLOBAL_45_mbtypes_I [ ] ; extern  _GLOBAL_95_T  _GLOBAL_46_mbtypes_I [ ] ; extern  _GLOBAL_95_T  _GLOBAL_47_mbtypes_I [ ] ; extern  _GLOBAL_95_T  _GLOBAL_48_mbtypes_I [ ] ; extern  _GLOBAL_95_T  _GLOBAL_49_mbtypes_I [ ] ; static __attribute__ ((unused)) __typeof__(_GLOBAL_0_mbtypes_I) *_GLOBAL_mbtypes_24_A[NUM_STACKS];  
typedef  struct pool   _GLOBAL_96_T; extern  _GLOBAL_96_T  global_mbpool[NUM_STACKS];    
typedef  struct pool   _GLOBAL_97_T; extern  _GLOBAL_97_T  global_mclpool[NUM_STACKS];    

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
# 70 "openbsd3/kern/uipc_mbuf2.c" 2


static struct mbuf *m_dup1(struct mbuf *, int, int, int);
# 84 "openbsd3/kern/uipc_mbuf2.c"
struct mbuf *
m_pulldown(m, off, len, offp)
 struct mbuf *m;
 int off, len;
 int *offp;
{
 struct mbuf *n, *o;
 int hlen, tlen, olen;
 int sharedcluster;


 if (m == 0L)
  panic("m == NULL in m_pulldown()");
 if (len > (1 << 11)) {
  m_freem(m);
  return (0L);
 }

 n = m;
 while (n != 0L && off > 0) {
  if (n->m_hdr.mh_len > off)
   break;
  off -= n->m_hdr.mh_len;
  n = n->m_hdr.mh_next;
 }

 while (n != 0L && n->m_hdr.mh_len == 0)
  n = n->m_hdr.mh_next;
 if (!n) {
  m_freem(m);
  return (0L);
 }

 sharedcluster = (((n)->m_hdr.mh_flags & 0x0001) != 0 && (((n)->m_hdr.mh_flags & 0x0008) == 0 || ((n)->M_dat.MH.MH_dat.MH_ext.ext_nextref != (n))));





 if ((off == 0 || offp) && len <= n->m_hdr.mh_len - off && !sharedcluster)
  goto ok;







 if (len <= n->m_hdr.mh_len - off) {
  o = m_dup1(n, off, n->m_hdr.mh_len - off, 0x0001);
  if (o == 0L) {
   m_freem(m);
   return (0L);
  }
  n->m_hdr.mh_len = off;
  o->m_hdr.mh_next = n->m_hdr.mh_next;
  n->m_hdr.mh_next = o;
  n = n->m_hdr.mh_next;
  off = 0;
  goto ok;
 }






 hlen = n->m_hdr.mh_len - off;
 tlen = len - hlen;





 olen = 0;
 for (o = n->m_hdr.mh_next; o != 0L; o = o->m_hdr.mh_next)
  olen += o->m_hdr.mh_len;
 if (hlen + olen < len) {
  m_freem(m);
  return (0L);
 }





 if ((off == 0 || offp) && (((((n))->m_hdr.mh_flags & 0x0001) != 0 && ((((n))->m_hdr.mh_flags & 0x0008) == 0 || (((n))->M_dat.MH.MH_dat.MH_ext.ext_nextref != ((n))))) ? 0 : (((n))->m_hdr.mh_flags & 0x0001 ? ((n))->M_dat.MH.MH_dat.MH_ext.ext_buf + ((n))->M_dat.MH.MH_dat.MH_ext.ext_size - (((n))->m_hdr.mh_data + ((n))->m_hdr.mh_len) : &((n))->M_dat.M_databuf[(256 - sizeof(struct m_hdr))] - (((n))->m_hdr.mh_data + ((n))->m_hdr.mh_len))) >= tlen &&
     !sharedcluster) {
  m_copydata(n->m_hdr.mh_next, 0, tlen, ((caddr_t)((n)->m_hdr.mh_data)) + n->m_hdr.mh_len);
  n->m_hdr.mh_len += tlen;
  m_adj(n->m_hdr.mh_next, tlen);
  goto ok;
 }
 if ((off == 0 || offp) && (((((n->m_hdr.mh_next))->m_hdr.mh_flags & 0x0001) != 0 && ((((n->m_hdr.mh_next))->m_hdr.mh_flags & 0x0008) == 0 || (((n->m_hdr.mh_next))->M_dat.MH.MH_dat.MH_ext.ext_nextref != ((n->m_hdr.mh_next))))) ? 0 : (((n->m_hdr.mh_next))->m_hdr.mh_flags & 0x0001 ? ((n->m_hdr.mh_next))->m_hdr.mh_data - ((n->m_hdr.mh_next))->M_dat.MH.MH_dat.MH_ext.ext_buf : ((n->m_hdr.mh_next))->m_hdr.mh_flags & 0x0002 ? ((n->m_hdr.mh_next))->m_hdr.mh_data - ((n->m_hdr.mh_next))->M_dat.MH.MH_dat.MH_databuf : ((n->m_hdr.mh_next))->m_hdr.mh_data - ((n->m_hdr.mh_next))->M_dat.M_databuf)) >= hlen &&
     !sharedcluster) {
  n->m_hdr.mh_next->m_hdr.mh_data -= hlen;
  n->m_hdr.mh_next->m_hdr.mh_len += hlen;
  bcopy(((caddr_t)((n)->m_hdr.mh_data)) + off, ((caddr_t)((n->m_hdr.mh_next)->m_hdr.mh_data)), hlen);
  n->m_hdr.mh_len -= hlen;
  n = n->m_hdr.mh_next;
  off = 0;
  goto ok;
 }





 do { { int ms = splraise((0x20 + ((6) << 4))); { (o) = pool_get(&global_mbpool[get_stack_id()], (0x0001) == 0x0000 ? 0x02|0x20 : 0); } splx(ms); }; if (o) { (o)->m_hdr.mh_type = (m->m_hdr.mh_type); { int ms = splraise((0x20 + ((6) << 4))); { global_mbstat[get_stack_id()].m_mtypes[m->m_hdr.mh_type]++; } splx(ms); } (o)->m_hdr.mh_next = (struct mbuf *)0L; (o)->m_hdr.mh_nextpkt = (struct mbuf *)0L; (o)->m_hdr.mh_data = (o)->M_dat.M_databuf; (o)->m_hdr.mh_flags = 0; } } while( 0);
 if (o && len > (256 - sizeof(struct m_hdr))) {
  do { { int ms = splraise((0x20 + ((6) << 4))); { (o)->M_dat.MH.MH_dat.MH_ext.ext_buf = pool_get(&global_mclpool[get_stack_id()], (0x0001) == 0x0000 ? (0x02|0x20) : 0); } splx(ms); }; if ((o)->M_dat.MH.MH_dat.MH_ext.ext_buf != 0L) { (o)->m_hdr.mh_data = (o)->M_dat.MH.MH_dat.MH_ext.ext_buf; (o)->m_hdr.mh_flags |= 0x0001|0x0008; (o)->M_dat.MH.MH_dat.MH_ext.ext_size = (1 << 11); (o)->M_dat.MH.MH_dat.MH_ext.ext_free = 0L; (o)->M_dat.MH.MH_dat.MH_ext.ext_arg = 0L; do { (o)->M_dat.MH.MH_dat.MH_ext.ext_prevref = (o); (o)->M_dat.MH.MH_dat.MH_ext.ext_nextref = (o); ; ; } while ( 0); } } while ( 0);
  if ((o->m_hdr.mh_flags & 0x0001) == 0) {
   m_free(o);
   o = 0L;
  }
 }
 if (!o) {
  m_freem(m);
  return (0L);
 }

 o->m_hdr.mh_len = hlen;
 bcopy(((caddr_t)((n)->m_hdr.mh_data)) + off, ((caddr_t)((o)->m_hdr.mh_data)), hlen);
 n->m_hdr.mh_len -= hlen;

 m_copydata(n->m_hdr.mh_next, 0, tlen, ((caddr_t)((o)->m_hdr.mh_data)) + o->m_hdr.mh_len);
 o->m_hdr.mh_len += tlen;
 m_adj(n->m_hdr.mh_next, tlen);
 o->m_hdr.mh_next = n->m_hdr.mh_next;
 n->m_hdr.mh_next = o;
 n = o;
 off = 0;

ok:
 if (offp)
  *offp = off;
 return (n);
}

static struct mbuf *
m_dup1(m, off, len, wait)
 struct mbuf *m;
 int off;
 int len;
 int wait;
{
 struct mbuf *n;
 int l;
 int copyhdr;

 if (len > (1 << 11))
  return (0L);
 if (off == 0 && (m->m_hdr.mh_flags & 0x0002) != 0) {
  copyhdr = 1;
  do { { int ms = splraise((0x20 + ((6) << 4))); { (n) = pool_get(&global_mbpool[get_stack_id()], (wait) == 0x0000 ? 0x02|0x20 : 0); } splx(ms); }; if (n) { (n)->m_hdr.mh_type = (m->m_hdr.mh_type); { int ms = splraise((0x20 + ((6) << 4))); { global_mbstat[get_stack_id()].m_mtypes[m->m_hdr.mh_type]++; } splx(ms); } (n)->m_hdr.mh_next = (struct mbuf *)0L; (n)->m_hdr.mh_nextpkt = (struct mbuf *)0L; (n)->m_hdr.mh_data = (n)->M_dat.MH.MH_dat.MH_databuf; (n)->m_hdr.mh_flags = 0x0002; { ((&(n)->M_dat.MH.MH_pkthdr.tags)->slh_first) = 0L; }; (n)->M_dat.MH.MH_pkthdr.csum = 0; } } while ( 0);
  l = ((256 - sizeof(struct m_hdr)) - sizeof(struct pkthdr));
 } else {
  copyhdr = 0;
  do { { int ms = splraise((0x20 + ((6) << 4))); { (n) = pool_get(&global_mbpool[get_stack_id()], (wait) == 0x0000 ? 0x02|0x20 : 0); } splx(ms); }; if (n) { (n)->m_hdr.mh_type = (m->m_hdr.mh_type); { int ms = splraise((0x20 + ((6) << 4))); { global_mbstat[get_stack_id()].m_mtypes[m->m_hdr.mh_type]++; } splx(ms); } (n)->m_hdr.mh_next = (struct mbuf *)0L; (n)->m_hdr.mh_nextpkt = (struct mbuf *)0L; (n)->m_hdr.mh_data = (n)->M_dat.M_databuf; (n)->m_hdr.mh_flags = 0; } } while( 0);
  l = (256 - sizeof(struct m_hdr));
 }
 if (n && len > l) {
  do { { int ms = splraise((0x20 + ((6) << 4))); { (n)->M_dat.MH.MH_dat.MH_ext.ext_buf = pool_get(&global_mclpool[get_stack_id()], (wait) == 0x0000 ? (0x02|0x20) : 0); } splx(ms); }; if ((n)->M_dat.MH.MH_dat.MH_ext.ext_buf != 0L) { (n)->m_hdr.mh_data = (n)->M_dat.MH.MH_dat.MH_ext.ext_buf; (n)->m_hdr.mh_flags |= 0x0001|0x0008; (n)->M_dat.MH.MH_dat.MH_ext.ext_size = (1 << 11); (n)->M_dat.MH.MH_dat.MH_ext.ext_free = 0L; (n)->M_dat.MH.MH_dat.MH_ext.ext_arg = 0L; do { (n)->M_dat.MH.MH_dat.MH_ext.ext_prevref = (n); (n)->M_dat.MH.MH_dat.MH_ext.ext_nextref = (n); ; ; } while ( 0); } } while ( 0);
  if ((n->m_hdr.mh_flags & 0x0001) == 0) {
   m_free(n);
   n = 0L;
  }
 }
 if (!n)
  return (0L);

 if (copyhdr)
  { (n)->m_hdr.mh_flags = (m)->m_hdr.mh_flags & (0x0002|0x0004|0x0010|0x0100|0x0200|0x0400| 0x0800|0x1000|0x4000|0x0040|0x4000); { ((n))->M_dat.MH.MH_pkthdr = ((m))->M_dat.MH.MH_pkthdr; { ((&((n))->M_dat.MH.MH_pkthdr.tags)->slh_first) = 0L; }; m_tag_copy_chain(((n)), ((m))); }; (n)->m_hdr.mh_data = (n)->M_dat.MH.MH_dat.MH_databuf; };
 m_copydata(m, off, len, ((caddr_t)((n)->m_hdr.mh_data)));
 n->m_hdr.mh_len = len;

 return (n);
}


struct m_tag *
m_tag_get(type, len, wait)
 int type;
 int len;
 int wait;
{
 struct m_tag *t;

 if (len < 0)
  return (0L);
 t = malloc(len + sizeof(struct m_tag), 111, wait);
 if (t == 0L)
  return (0L);
 t->m_tag_id = type;
 t->m_tag_len = len;
 return (t);
}


void
m_tag_free(t)
 struct m_tag *t;
{
 free(t, 111);
}


void
m_tag_prepend(m, t)
 struct mbuf *m;
 struct m_tag *t;
{
 do { (t)->m_tag_link.sle_next = (&m->M_dat.MH.MH_pkthdr.tags)->slh_first; (&m->M_dat.MH.MH_pkthdr.tags)->slh_first = (t); } while (0);
}


void
m_tag_unlink(m, t)
 struct mbuf *m;
 struct m_tag *t;
{
 do { if ((&m->M_dat.MH.MH_pkthdr.tags)->slh_first == (t)) { do { ((&m->M_dat.MH.MH_pkthdr.tags))->slh_first = ((&m->M_dat.MH.MH_pkthdr.tags))->slh_first->m_tag_link.sle_next; } while (0); } else { struct m_tag *curelm = (&m->M_dat.MH.MH_pkthdr.tags)->slh_first; while( curelm->m_tag_link.sle_next != (t) ) curelm = curelm->m_tag_link.sle_next; curelm->m_tag_link.sle_next = curelm->m_tag_link.sle_next->m_tag_link.sle_next; } } while (0);
}


void
m_tag_delete(m, t)
 struct mbuf *m;
 struct m_tag *t;
{
 m_tag_unlink(m, t);
 m_tag_free(t);
}


void
m_tag_delete_chain(m, t)
 struct mbuf *m;
 struct m_tag *t;
{
 struct m_tag *p, *q;

 if (t != 0L)
  p = t;
 else
  p = ((&m->M_dat.MH.MH_pkthdr.tags)->slh_first);
 if (p == 0L)
  return;
 while ((q = ((p)->m_tag_link.sle_next)) != 0L)
  m_tag_delete(m, q);
 m_tag_delete(m, p);
}


struct m_tag *
m_tag_find(m, type, t)
 struct mbuf *m;
 int type;
 struct m_tag *t;
{
 struct m_tag *p;

 if (t == 0L)
  p = ((&m->M_dat.MH.MH_pkthdr.tags)->slh_first);
 else
  p = ((t)->m_tag_link.sle_next);
 while (p != 0L) {
  if (p->m_tag_id == type)
   return (p);
  p = ((p)->m_tag_link.sle_next);
 }
 return (0L);
}


struct m_tag *
m_tag_copy(t)
 struct m_tag *t;
{
 struct m_tag *p;

 p = m_tag_get(t->m_tag_id, t->m_tag_len, 0x0001);
 if (p == 0L)
  return (0L);
 bcopy(t + 1, p + 1, t->m_tag_len);
 return (p);
}







int
m_tag_copy_chain(to, from)
 struct mbuf *to;
 struct mbuf *from;
{
 struct m_tag *p, *t, *tprev = 0L;

 m_tag_delete_chain(to, 0L);
 for((p) = ((&from->M_dat.MH.MH_pkthdr.tags)->slh_first); (p) != 0L; (p) = ((p)->m_tag_link.sle_next)) {
  t = m_tag_copy(p);
  if (t == 0L) {
   m_tag_delete_chain(to, 0L);
   return (0);
  }
  if (tprev == 0L)
   do { (t)->m_tag_link.sle_next = (&to->M_dat.MH.MH_pkthdr.tags)->slh_first; (&to->M_dat.MH.MH_pkthdr.tags)->slh_first = (t); } while (0);
  else
   do { (t)->m_tag_link.sle_next = (tprev)->m_tag_link.sle_next; (tprev)->m_tag_link.sle_next = (t); } while (0);
  tprev = t;
 }
 return (1);
}


void
m_tag_init(m)
 struct mbuf *m;
{
 { ((&m->M_dat.MH.MH_pkthdr.tags)->slh_first) = 0L; };
}


struct m_tag *
m_tag_first(m)
 struct mbuf *m;
{
 return (((&m->M_dat.MH.MH_pkthdr.tags)->slh_first));
}


struct m_tag *
m_tag_next(m, t)
 struct mbuf *m;
 struct m_tag *t;
{
 return (((t)->m_tag_link.sle_next));
}

