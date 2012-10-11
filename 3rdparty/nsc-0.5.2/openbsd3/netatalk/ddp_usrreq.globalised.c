# 1 "openbsd3/netatalk/ddp_usrreq.c"
# 1 "/home/cmcc/omnet_workspace/inet/3rdparty/nsc-0.5.2//"
# 1 "<built-in>"
# 1 "<command-line>"
# 1 "openbsd3/netatalk/ddp_usrreq.c"
# 54 "openbsd3/netatalk/ddp_usrreq.c"
# 1 "openbsd3/sys/errno.h" 1
# 55 "openbsd3/netatalk/ddp_usrreq.c" 2
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
# 56 "openbsd3/netatalk/ddp_usrreq.c" 2
# 1 "openbsd3/sys/param.h" 1
# 57 "openbsd3/sys/param.h"
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
# 57 "openbsd3/netatalk/ddp_usrreq.c" 2
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
# 58 "openbsd3/netatalk/ddp_usrreq.c" 2
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
# 59 "openbsd3/netatalk/ddp_usrreq.c" 2
# 1 "openbsd3/sys/user.h" 1
# 35 "openbsd3/sys/user.h"
# 1 "openbsd3/openbsd/usr/src/sys/arch/i386/compile/SAMSKERNEL/machine/pcb.h" 1
# 49 "openbsd3/openbsd/usr/src/sys/arch/i386/compile/SAMSKERNEL/machine/pcb.h"
# 1 "openbsd3/openbsd/usr/src/sys/arch/i386/compile/SAMSKERNEL/machine/tss.h" 1
# 45 "openbsd3/openbsd/usr/src/sys/arch/i386/compile/SAMSKERNEL/machine/tss.h"
struct i386tss {
 int __tss_link;
 int tss_esp0;
 int tss_ss0;
 int __tss_esp1;
 int __tss_ss1;
 int __tss_esp2;
 int __tss_ss2;
 int tss_cr3;
 int __tss_eip;
 int __tss_eflags;
 int __tss_eax;
 int __tss_ecx;
 int __tss_edx;
 int __tss_ebx;
 int tss_esp;
 int tss_ebp;
 int __tss_esi;
 int __tss_edi;
 int __tss_es;
 int tss_cs;
 int __tss_ss;
 int __tss_ds;
 int tss_fs;
 int tss_gs;
 int tss_ldt;
 int tss_ioopt;
};
# 50 "openbsd3/openbsd/usr/src/sys/arch/i386/compile/SAMSKERNEL/machine/pcb.h" 2
# 1 "openbsd3/openbsd/usr/src/sys/arch/i386/compile/SAMSKERNEL/machine/npx.h" 1
# 47 "openbsd3/openbsd/usr/src/sys/arch/i386/compile/SAMSKERNEL/machine/npx.h"
struct env87 {
 long en_cw;
 long en_sw;
 long en_tw;
 long en_fip;
 u_short en_fcs;
 u_short en_opcode;
 long en_foo;
 long en_fos;
};
# 66 "openbsd3/openbsd/usr/src/sys/arch/i386/compile/SAMSKERNEL/machine/npx.h"
struct fpacc87 {






 u_char fp_bytes[10];

};






struct save87 {
 struct env87 sv_env;
 struct fpacc87 sv_ac[8];
 u_long sv_ex_sw;
 u_long sv_ex_tw;
};


struct envxmm {
      uint16_t en_cw;
 uint16_t en_sw;
 uint8_t en_rsvd0;
 uint8_t en_tw;
 uint16_t en_opcode;
 uint32_t en_fip;
 uint16_t en_fcs;
 uint16_t en_rsvd1;
       uint32_t en_foo;
 uint16_t en_fos;
 uint16_t en_rsvd2;
 uint32_t en_mxcsr;
 uint32_t en_rsvd3;
};


struct fpaccxmm {
 uint8_t fp_bytes[10];
 uint8_t fp_rsvd[6];
};


struct xmmreg {
 uint8_t sse_bytes[16];
};


struct savexmm {
 struct envxmm sv_env;
 struct fpaccxmm sv_ac[8];
 struct xmmreg sv_xmmregs[8];
 uint8_t sv_rsvd[16 * 14];

 uint32_t sv_ex_sw;
 uint32_t sv_ex_tw;
};

union savefpu {
 struct save87 sv_87;
 struct savexmm sv_xmm;



 u_char emupad[176];

};


struct emcsts {
 long em_msw;
 long em_tar;
 long em_dl;
};
# 181 "openbsd3/openbsd/usr/src/sys/arch/i386/compile/SAMSKERNEL/machine/npx.h"
void process_xmm_to_s87(const struct savexmm *, struct save87 *);
void process_s87_to_xmm(const struct save87 *, struct savexmm *);
# 51 "openbsd3/openbsd/usr/src/sys/arch/i386/compile/SAMSKERNEL/machine/pcb.h" 2
# 1 "openbsd3/openbsd/usr/src/sys/arch/i386/compile/SAMSKERNEL/machine/sysarch.h" 1
# 17 "openbsd3/openbsd/usr/src/sys/arch/i386/compile/SAMSKERNEL/machine/sysarch.h"
struct i386_get_ldt_args {
 int start;
 union descriptor *desc;
 int num;
};

struct i386_set_ldt_args {
 int start;
 union descriptor *desc;
 int num;
};

struct i386_iopl_args {
 int iopl;
};

struct i386_get_ioperm_args {
 u_long *iomap;
};

struct i386_set_ioperm_args {
 u_long *iomap;
};
# 52 "openbsd3/openbsd/usr/src/sys/arch/i386/compile/SAMSKERNEL/machine/pcb.h" 2



struct pcb {
 struct i386tss pcb_tss;







 int pcb_tss_sel;
 union descriptor *pcb_ldt;
 int pcb_ldt_len;
 int pcb_cr0;
 int pcb_pad[2];
 union savefpu pcb_savefpu;
 struct emcsts pcb_saveemc;



 caddr_t pcb_onfault;
 int vm86_eflags;
 int vm86_flagmask;
 void *vm86_userp;
 struct pmap *pcb_pmap;
 u_long pcb_iomap[1024/32];
 u_char pcb_iomap_pad;
};





struct md_coredump {
 long md_pad[8];
};


typedef  struct pcb  _GLOBAL_81_T;  _GLOBAL_81_T  * global_curpcb[NUM_STACKS];   
# 36 "openbsd3/sys/user.h" 2
# 44 "openbsd3/sys/user.h"
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
# 45 "openbsd3/sys/user.h" 2
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

typedef  struct pool   _GLOBAL_82_T; extern  _GLOBAL_82_T  * global_uvm_aiobuf_pool[NUM_STACKS];    






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


typedef  struct uvmexp   _GLOBAL_83_T; extern  _GLOBAL_83_T  global_uvmexp[NUM_STACKS];    





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

# 1 "openbsd3/sys/tree.h" 1
# 373 "openbsd3/uvm/uvm_extern.h" 2
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
typedef  psize_t  _GLOBAL_84_T; extern  _GLOBAL_84_T  global_mem_size[NUM_STACKS];   
# 374 "openbsd3/uvm/uvm_extern.h" 2
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
# 375 "openbsd3/uvm/uvm_extern.h" 2
# 1 "openbsd3/uvm/uvm_page.h" 1
# 118 "openbsd3/uvm/uvm_page.h"
# 1 "openbsd3/uvm/uvm_extern.h" 1
# 119 "openbsd3/uvm/uvm_page.h" 2
# 1 "openbsd3/uvm/uvm_pglist.h" 1
# 47 "openbsd3/uvm/uvm_pglist.h"
struct pglist { struct vm_page *tqh_first; struct vm_page **tqh_last; };
# 57 "openbsd3/uvm/uvm_pglist.h"
struct pgfreelist {
 struct pglist pgfl_queues[2];
};
# 120 "openbsd3/uvm/uvm_page.h" 2

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







typedef  boolean_t  _GLOBAL_85_T; extern  _GLOBAL_85_T  global_vm_page_zero_enable[NUM_STACKS];   
# 246 "openbsd3/uvm/uvm_page.h"
typedef  struct pglist   _GLOBAL_86_T; extern  _GLOBAL_86_T  global_vm_page_queue_free[NUM_STACKS];    
typedef  struct pglist   _GLOBAL_87_T; extern  _GLOBAL_87_T  global_vm_page_queue_active[NUM_STACKS];    
typedef  struct pglist   _GLOBAL_88_T; extern  _GLOBAL_88_T  global_vm_page_queue_inactive[NUM_STACKS];    





extern struct vm_physseg vm_physmem[4];
typedef  int  _GLOBAL_89_T; extern  _GLOBAL_89_T  global_vm_nphysseg[NUM_STACKS];   
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
typedef  struct uvm_pagerops   _GLOBAL_90_T; extern  _GLOBAL_90_T  _GLOBAL_0_uvm_vnodeops_I; extern  _GLOBAL_90_T  _GLOBAL_1_uvm_vnodeops_I; extern  _GLOBAL_90_T  _GLOBAL_2_uvm_vnodeops_I; extern  _GLOBAL_90_T  _GLOBAL_3_uvm_vnodeops_I; extern  _GLOBAL_90_T  _GLOBAL_4_uvm_vnodeops_I; extern  _GLOBAL_90_T  _GLOBAL_5_uvm_vnodeops_I; extern  _GLOBAL_90_T  _GLOBAL_6_uvm_vnodeops_I; extern  _GLOBAL_90_T  _GLOBAL_7_uvm_vnodeops_I; extern  _GLOBAL_90_T  _GLOBAL_8_uvm_vnodeops_I; extern  _GLOBAL_90_T  _GLOBAL_9_uvm_vnodeops_I; extern  _GLOBAL_90_T  _GLOBAL_10_uvm_vnodeops_I; extern  _GLOBAL_90_T  _GLOBAL_11_uvm_vnodeops_I; extern  _GLOBAL_90_T  _GLOBAL_12_uvm_vnodeops_I; extern  _GLOBAL_90_T  _GLOBAL_13_uvm_vnodeops_I; extern  _GLOBAL_90_T  _GLOBAL_14_uvm_vnodeops_I; extern  _GLOBAL_90_T  _GLOBAL_15_uvm_vnodeops_I; extern  _GLOBAL_90_T  _GLOBAL_16_uvm_vnodeops_I; extern  _GLOBAL_90_T  _GLOBAL_17_uvm_vnodeops_I; extern  _GLOBAL_90_T  _GLOBAL_18_uvm_vnodeops_I; extern  _GLOBAL_90_T  _GLOBAL_19_uvm_vnodeops_I; extern  _GLOBAL_90_T  _GLOBAL_20_uvm_vnodeops_I; extern  _GLOBAL_90_T  _GLOBAL_21_uvm_vnodeops_I; extern  _GLOBAL_90_T  _GLOBAL_22_uvm_vnodeops_I; extern  _GLOBAL_90_T  _GLOBAL_23_uvm_vnodeops_I; extern  _GLOBAL_90_T  _GLOBAL_24_uvm_vnodeops_I; extern  _GLOBAL_90_T  _GLOBAL_25_uvm_vnodeops_I; extern  _GLOBAL_90_T  _GLOBAL_26_uvm_vnodeops_I; extern  _GLOBAL_90_T  _GLOBAL_27_uvm_vnodeops_I; extern  _GLOBAL_90_T  _GLOBAL_28_uvm_vnodeops_I; extern  _GLOBAL_90_T  _GLOBAL_29_uvm_vnodeops_I; extern  _GLOBAL_90_T  _GLOBAL_30_uvm_vnodeops_I; extern  _GLOBAL_90_T  _GLOBAL_31_uvm_vnodeops_I; extern  _GLOBAL_90_T  _GLOBAL_32_uvm_vnodeops_I; extern  _GLOBAL_90_T  _GLOBAL_33_uvm_vnodeops_I; extern  _GLOBAL_90_T  _GLOBAL_34_uvm_vnodeops_I; extern  _GLOBAL_90_T  _GLOBAL_35_uvm_vnodeops_I; extern  _GLOBAL_90_T  _GLOBAL_36_uvm_vnodeops_I; extern  _GLOBAL_90_T  _GLOBAL_37_uvm_vnodeops_I; extern  _GLOBAL_90_T  _GLOBAL_38_uvm_vnodeops_I; extern  _GLOBAL_90_T  _GLOBAL_39_uvm_vnodeops_I; extern  _GLOBAL_90_T  _GLOBAL_40_uvm_vnodeops_I; extern  _GLOBAL_90_T  _GLOBAL_41_uvm_vnodeops_I; extern  _GLOBAL_90_T  _GLOBAL_42_uvm_vnodeops_I; extern  _GLOBAL_90_T  _GLOBAL_43_uvm_vnodeops_I; extern  _GLOBAL_90_T  _GLOBAL_44_uvm_vnodeops_I; extern  _GLOBAL_90_T  _GLOBAL_45_uvm_vnodeops_I; extern  _GLOBAL_90_T  _GLOBAL_46_uvm_vnodeops_I; extern  _GLOBAL_90_T  _GLOBAL_47_uvm_vnodeops_I; extern  _GLOBAL_90_T  _GLOBAL_48_uvm_vnodeops_I; extern  _GLOBAL_90_T  _GLOBAL_49_uvm_vnodeops_I; static __attribute__ ((unused)) __typeof__(_GLOBAL_0_uvm_vnodeops_I) *_GLOBAL_uvm_vnodeops_22_A[NUM_STACKS];   
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


typedef  u_long  _GLOBAL_91_T; extern  _GLOBAL_91_T  global_PTDpaddr[NUM_STACKS];   

typedef  struct pmap   _GLOBAL_92_T; extern  _GLOBAL_92_T  global_kernel_pmap_store[NUM_STACKS];    
typedef  int  _GLOBAL_93_T; extern  _GLOBAL_93_T  global_nkpde[NUM_STACKS];   
typedef  int  _GLOBAL_94_T; extern  _GLOBAL_94_T  global_pmap_pg_g[NUM_STACKS];   
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

typedef  simple_lock_data_t  _GLOBAL_95_T; extern  _GLOBAL_95_T  global_vmi_list_slock[NUM_STACKS];   
typedef  struct vmi_list   _GLOBAL_96_T; extern  _GLOBAL_96_T  global_vmi_list[NUM_STACKS];    

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
typedef  vaddr_t  _GLOBAL_97_T; extern  _GLOBAL_97_T  global_uvm_maxkaddr[NUM_STACKS];   







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
# 393 "openbsd3/uvm/uvm_map.h"
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






typedef  struct vm_map   _GLOBAL_98_T; extern  _GLOBAL_98_T  * global_exec_map[NUM_STACKS];    
typedef  struct vm_map   _GLOBAL_99_T; extern  _GLOBAL_99_T  * global_kernel_map[NUM_STACKS];    
typedef  struct vm_map   _GLOBAL_100_T; extern  _GLOBAL_100_T  * global_kmem_map[NUM_STACKS];    
typedef  struct vm_map   _GLOBAL_101_T; extern  _GLOBAL_101_T  * global_mb_map[NUM_STACKS];    
typedef  struct vm_map   _GLOBAL_102_T; extern  _GLOBAL_102_T  * global_phys_map[NUM_STACKS];    
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
typedef  int  _GLOBAL_103_T; extern  _GLOBAL_103_T  global_nkmempages[NUM_STACKS];   
# 46 "openbsd3/sys/user.h" 2
# 1 "openbsd3/sys/sysctl.h" 1
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

typedef  int   ( *_GLOBAL_105_T  )  ( int  *  ) ; extern  _GLOBAL_105_T global_cpu_cpuspeed[NUM_STACKS];    
typedef  int   ( *_GLOBAL_107_T  )  ( int  ) ; extern  _GLOBAL_107_T global_cpu_setperf[NUM_STACKS];   

int bpf_sysctl(int *, u_int, void *, size_t *, void *, size_t);

void sysctl_init(void);
# 47 "openbsd3/sys/user.h" 2
# 56 "openbsd3/sys/user.h"
struct user {
 struct pcb u_pcb;

 struct pstats u_stats;





 struct kinfo_proc u_kproc;
 struct md_coredump u_md;
};
# 60 "openbsd3/netatalk/ddp_usrreq.c" 2
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
typedef  struct kmemstats   _GLOBAL_108_T; extern  _GLOBAL_108_T  _GLOBAL_0_kmemstats_I [ ] ; extern  _GLOBAL_108_T  _GLOBAL_1_kmemstats_I [ ] ; extern  _GLOBAL_108_T  _GLOBAL_2_kmemstats_I [ ] ; extern  _GLOBAL_108_T  _GLOBAL_3_kmemstats_I [ ] ; extern  _GLOBAL_108_T  _GLOBAL_4_kmemstats_I [ ] ; extern  _GLOBAL_108_T  _GLOBAL_5_kmemstats_I [ ] ; extern  _GLOBAL_108_T  _GLOBAL_6_kmemstats_I [ ] ; extern  _GLOBAL_108_T  _GLOBAL_7_kmemstats_I [ ] ; extern  _GLOBAL_108_T  _GLOBAL_8_kmemstats_I [ ] ; extern  _GLOBAL_108_T  _GLOBAL_9_kmemstats_I [ ] ; extern  _GLOBAL_108_T  _GLOBAL_10_kmemstats_I [ ] ; extern  _GLOBAL_108_T  _GLOBAL_11_kmemstats_I [ ] ; extern  _GLOBAL_108_T  _GLOBAL_12_kmemstats_I [ ] ; extern  _GLOBAL_108_T  _GLOBAL_13_kmemstats_I [ ] ; extern  _GLOBAL_108_T  _GLOBAL_14_kmemstats_I [ ] ; extern  _GLOBAL_108_T  _GLOBAL_15_kmemstats_I [ ] ; extern  _GLOBAL_108_T  _GLOBAL_16_kmemstats_I [ ] ; extern  _GLOBAL_108_T  _GLOBAL_17_kmemstats_I [ ] ; extern  _GLOBAL_108_T  _GLOBAL_18_kmemstats_I [ ] ; extern  _GLOBAL_108_T  _GLOBAL_19_kmemstats_I [ ] ; extern  _GLOBAL_108_T  _GLOBAL_20_kmemstats_I [ ] ; extern  _GLOBAL_108_T  _GLOBAL_21_kmemstats_I [ ] ; extern  _GLOBAL_108_T  _GLOBAL_22_kmemstats_I [ ] ; extern  _GLOBAL_108_T  _GLOBAL_23_kmemstats_I [ ] ; extern  _GLOBAL_108_T  _GLOBAL_24_kmemstats_I [ ] ; extern  _GLOBAL_108_T  _GLOBAL_25_kmemstats_I [ ] ; extern  _GLOBAL_108_T  _GLOBAL_26_kmemstats_I [ ] ; extern  _GLOBAL_108_T  _GLOBAL_27_kmemstats_I [ ] ; extern  _GLOBAL_108_T  _GLOBAL_28_kmemstats_I [ ] ; extern  _GLOBAL_108_T  _GLOBAL_29_kmemstats_I [ ] ; extern  _GLOBAL_108_T  _GLOBAL_30_kmemstats_I [ ] ; extern  _GLOBAL_108_T  _GLOBAL_31_kmemstats_I [ ] ; extern  _GLOBAL_108_T  _GLOBAL_32_kmemstats_I [ ] ; extern  _GLOBAL_108_T  _GLOBAL_33_kmemstats_I [ ] ; extern  _GLOBAL_108_T  _GLOBAL_34_kmemstats_I [ ] ; extern  _GLOBAL_108_T  _GLOBAL_35_kmemstats_I [ ] ; extern  _GLOBAL_108_T  _GLOBAL_36_kmemstats_I [ ] ; extern  _GLOBAL_108_T  _GLOBAL_37_kmemstats_I [ ] ; extern  _GLOBAL_108_T  _GLOBAL_38_kmemstats_I [ ] ; extern  _GLOBAL_108_T  _GLOBAL_39_kmemstats_I [ ] ; extern  _GLOBAL_108_T  _GLOBAL_40_kmemstats_I [ ] ; extern  _GLOBAL_108_T  _GLOBAL_41_kmemstats_I [ ] ; extern  _GLOBAL_108_T  _GLOBAL_42_kmemstats_I [ ] ; extern  _GLOBAL_108_T  _GLOBAL_43_kmemstats_I [ ] ; extern  _GLOBAL_108_T  _GLOBAL_44_kmemstats_I [ ] ; extern  _GLOBAL_108_T  _GLOBAL_45_kmemstats_I [ ] ; extern  _GLOBAL_108_T  _GLOBAL_46_kmemstats_I [ ] ; extern  _GLOBAL_108_T  _GLOBAL_47_kmemstats_I [ ] ; extern  _GLOBAL_108_T  _GLOBAL_48_kmemstats_I [ ] ; extern  _GLOBAL_108_T  _GLOBAL_49_kmemstats_I [ ] ; static __attribute__ ((unused)) __typeof__(_GLOBAL_0_kmemstats_I) *_GLOBAL_kmemstats_23_A[NUM_STACKS];   
typedef  struct kmemusage   _GLOBAL_109_T; extern  _GLOBAL_109_T  * global_kmemusage[NUM_STACKS];    
typedef  char  _GLOBAL_110_T; extern  _GLOBAL_110_T  * global_kmembase[NUM_STACKS];   
typedef  struct kmembuckets   _GLOBAL_111_T; extern  _GLOBAL_111_T  _GLOBAL_0_bucket_I [ ] ; extern  _GLOBAL_111_T  _GLOBAL_1_bucket_I [ ] ; extern  _GLOBAL_111_T  _GLOBAL_2_bucket_I [ ] ; extern  _GLOBAL_111_T  _GLOBAL_3_bucket_I [ ] ; extern  _GLOBAL_111_T  _GLOBAL_4_bucket_I [ ] ; extern  _GLOBAL_111_T  _GLOBAL_5_bucket_I [ ] ; extern  _GLOBAL_111_T  _GLOBAL_6_bucket_I [ ] ; extern  _GLOBAL_111_T  _GLOBAL_7_bucket_I [ ] ; extern  _GLOBAL_111_T  _GLOBAL_8_bucket_I [ ] ; extern  _GLOBAL_111_T  _GLOBAL_9_bucket_I [ ] ; extern  _GLOBAL_111_T  _GLOBAL_10_bucket_I [ ] ; extern  _GLOBAL_111_T  _GLOBAL_11_bucket_I [ ] ; extern  _GLOBAL_111_T  _GLOBAL_12_bucket_I [ ] ; extern  _GLOBAL_111_T  _GLOBAL_13_bucket_I [ ] ; extern  _GLOBAL_111_T  _GLOBAL_14_bucket_I [ ] ; extern  _GLOBAL_111_T  _GLOBAL_15_bucket_I [ ] ; extern  _GLOBAL_111_T  _GLOBAL_16_bucket_I [ ] ; extern  _GLOBAL_111_T  _GLOBAL_17_bucket_I [ ] ; extern  _GLOBAL_111_T  _GLOBAL_18_bucket_I [ ] ; extern  _GLOBAL_111_T  _GLOBAL_19_bucket_I [ ] ; extern  _GLOBAL_111_T  _GLOBAL_20_bucket_I [ ] ; extern  _GLOBAL_111_T  _GLOBAL_21_bucket_I [ ] ; extern  _GLOBAL_111_T  _GLOBAL_22_bucket_I [ ] ; extern  _GLOBAL_111_T  _GLOBAL_23_bucket_I [ ] ; extern  _GLOBAL_111_T  _GLOBAL_24_bucket_I [ ] ; extern  _GLOBAL_111_T  _GLOBAL_25_bucket_I [ ] ; extern  _GLOBAL_111_T  _GLOBAL_26_bucket_I [ ] ; extern  _GLOBAL_111_T  _GLOBAL_27_bucket_I [ ] ; extern  _GLOBAL_111_T  _GLOBAL_28_bucket_I [ ] ; extern  _GLOBAL_111_T  _GLOBAL_29_bucket_I [ ] ; extern  _GLOBAL_111_T  _GLOBAL_30_bucket_I [ ] ; extern  _GLOBAL_111_T  _GLOBAL_31_bucket_I [ ] ; extern  _GLOBAL_111_T  _GLOBAL_32_bucket_I [ ] ; extern  _GLOBAL_111_T  _GLOBAL_33_bucket_I [ ] ; extern  _GLOBAL_111_T  _GLOBAL_34_bucket_I [ ] ; extern  _GLOBAL_111_T  _GLOBAL_35_bucket_I [ ] ; extern  _GLOBAL_111_T  _GLOBAL_36_bucket_I [ ] ; extern  _GLOBAL_111_T  _GLOBAL_37_bucket_I [ ] ; extern  _GLOBAL_111_T  _GLOBAL_38_bucket_I [ ] ; extern  _GLOBAL_111_T  _GLOBAL_39_bucket_I [ ] ; extern  _GLOBAL_111_T  _GLOBAL_40_bucket_I [ ] ; extern  _GLOBAL_111_T  _GLOBAL_41_bucket_I [ ] ; extern  _GLOBAL_111_T  _GLOBAL_42_bucket_I [ ] ; extern  _GLOBAL_111_T  _GLOBAL_43_bucket_I [ ] ; extern  _GLOBAL_111_T  _GLOBAL_44_bucket_I [ ] ; extern  _GLOBAL_111_T  _GLOBAL_45_bucket_I [ ] ; extern  _GLOBAL_111_T  _GLOBAL_46_bucket_I [ ] ; extern  _GLOBAL_111_T  _GLOBAL_47_bucket_I [ ] ; extern  _GLOBAL_111_T  _GLOBAL_48_bucket_I [ ] ; extern  _GLOBAL_111_T  _GLOBAL_49_bucket_I [ ] ; static __attribute__ ((unused)) __typeof__(_GLOBAL_0_bucket_I) *_GLOBAL_bucket_24_A[NUM_STACKS];   

extern void *malloc(unsigned long size, int type, int flags);
extern void free(void *addr, int type);
extern int sysctl_malloc(int *, u_int, void *, size_t *, void *, size_t,
         struct proc *);

size_t malloc_roundup(size_t);
# 37 "openbsd3/sys/mbuf.h" 2

# 1 "openbsd3/sys/pool.h" 1
# 59 "openbsd3/sys/pool.h"
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






typedef  struct pool_allocator   _GLOBAL_112_T; extern  _GLOBAL_112_T  global_pool_allocator_nointr[NUM_STACKS];    

typedef  struct pool_allocator   _GLOBAL_113_T; extern  _GLOBAL_113_T  global_pool_allocator_kmem[NUM_STACKS];    

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


typedef  struct mbstat   _GLOBAL_114_T; extern  _GLOBAL_114_T  global_mbstat[NUM_STACKS];    
typedef  int  _GLOBAL_115_T; extern  _GLOBAL_115_T  global_nmbclust[NUM_STACKS];   
typedef  int  _GLOBAL_116_T; extern  _GLOBAL_116_T  global_mblowat[NUM_STACKS];   
typedef  int  _GLOBAL_117_T; extern  _GLOBAL_117_T  global_mcllowat[NUM_STACKS];   
typedef  int  _GLOBAL_118_T; extern  _GLOBAL_118_T  global_max_linkhdr[NUM_STACKS];   
typedef  int  _GLOBAL_119_T; extern  _GLOBAL_119_T  global_max_protohdr[NUM_STACKS];   
typedef  int  _GLOBAL_120_T; extern  _GLOBAL_120_T  global_max_hdr[NUM_STACKS];   
typedef  int  _GLOBAL_121_T; extern  _GLOBAL_121_T  global_max_datalen[NUM_STACKS];   
typedef  int  _GLOBAL_122_T; extern  _GLOBAL_122_T  _GLOBAL_0_mbtypes_I [ ] ; extern  _GLOBAL_122_T  _GLOBAL_1_mbtypes_I [ ] ; extern  _GLOBAL_122_T  _GLOBAL_2_mbtypes_I [ ] ; extern  _GLOBAL_122_T  _GLOBAL_3_mbtypes_I [ ] ; extern  _GLOBAL_122_T  _GLOBAL_4_mbtypes_I [ ] ; extern  _GLOBAL_122_T  _GLOBAL_5_mbtypes_I [ ] ; extern  _GLOBAL_122_T  _GLOBAL_6_mbtypes_I [ ] ; extern  _GLOBAL_122_T  _GLOBAL_7_mbtypes_I [ ] ; extern  _GLOBAL_122_T  _GLOBAL_8_mbtypes_I [ ] ; extern  _GLOBAL_122_T  _GLOBAL_9_mbtypes_I [ ] ; extern  _GLOBAL_122_T  _GLOBAL_10_mbtypes_I [ ] ; extern  _GLOBAL_122_T  _GLOBAL_11_mbtypes_I [ ] ; extern  _GLOBAL_122_T  _GLOBAL_12_mbtypes_I [ ] ; extern  _GLOBAL_122_T  _GLOBAL_13_mbtypes_I [ ] ; extern  _GLOBAL_122_T  _GLOBAL_14_mbtypes_I [ ] ; extern  _GLOBAL_122_T  _GLOBAL_15_mbtypes_I [ ] ; extern  _GLOBAL_122_T  _GLOBAL_16_mbtypes_I [ ] ; extern  _GLOBAL_122_T  _GLOBAL_17_mbtypes_I [ ] ; extern  _GLOBAL_122_T  _GLOBAL_18_mbtypes_I [ ] ; extern  _GLOBAL_122_T  _GLOBAL_19_mbtypes_I [ ] ; extern  _GLOBAL_122_T  _GLOBAL_20_mbtypes_I [ ] ; extern  _GLOBAL_122_T  _GLOBAL_21_mbtypes_I [ ] ; extern  _GLOBAL_122_T  _GLOBAL_22_mbtypes_I [ ] ; extern  _GLOBAL_122_T  _GLOBAL_23_mbtypes_I [ ] ; extern  _GLOBAL_122_T  _GLOBAL_24_mbtypes_I [ ] ; extern  _GLOBAL_122_T  _GLOBAL_25_mbtypes_I [ ] ; extern  _GLOBAL_122_T  _GLOBAL_26_mbtypes_I [ ] ; extern  _GLOBAL_122_T  _GLOBAL_27_mbtypes_I [ ] ; extern  _GLOBAL_122_T  _GLOBAL_28_mbtypes_I [ ] ; extern  _GLOBAL_122_T  _GLOBAL_29_mbtypes_I [ ] ; extern  _GLOBAL_122_T  _GLOBAL_30_mbtypes_I [ ] ; extern  _GLOBAL_122_T  _GLOBAL_31_mbtypes_I [ ] ; extern  _GLOBAL_122_T  _GLOBAL_32_mbtypes_I [ ] ; extern  _GLOBAL_122_T  _GLOBAL_33_mbtypes_I [ ] ; extern  _GLOBAL_122_T  _GLOBAL_34_mbtypes_I [ ] ; extern  _GLOBAL_122_T  _GLOBAL_35_mbtypes_I [ ] ; extern  _GLOBAL_122_T  _GLOBAL_36_mbtypes_I [ ] ; extern  _GLOBAL_122_T  _GLOBAL_37_mbtypes_I [ ] ; extern  _GLOBAL_122_T  _GLOBAL_38_mbtypes_I [ ] ; extern  _GLOBAL_122_T  _GLOBAL_39_mbtypes_I [ ] ; extern  _GLOBAL_122_T  _GLOBAL_40_mbtypes_I [ ] ; extern  _GLOBAL_122_T  _GLOBAL_41_mbtypes_I [ ] ; extern  _GLOBAL_122_T  _GLOBAL_42_mbtypes_I [ ] ; extern  _GLOBAL_122_T  _GLOBAL_43_mbtypes_I [ ] ; extern  _GLOBAL_122_T  _GLOBAL_44_mbtypes_I [ ] ; extern  _GLOBAL_122_T  _GLOBAL_45_mbtypes_I [ ] ; extern  _GLOBAL_122_T  _GLOBAL_46_mbtypes_I [ ] ; extern  _GLOBAL_122_T  _GLOBAL_47_mbtypes_I [ ] ; extern  _GLOBAL_122_T  _GLOBAL_48_mbtypes_I [ ] ; extern  _GLOBAL_122_T  _GLOBAL_49_mbtypes_I [ ] ; static __attribute__ ((unused)) __typeof__(_GLOBAL_0_mbtypes_I) *_GLOBAL_mbtypes_25_A[NUM_STACKS];  
typedef  struct pool   _GLOBAL_123_T; extern  _GLOBAL_123_T  global_mbpool[NUM_STACKS];    
typedef  struct pool   _GLOBAL_124_T; extern  _GLOBAL_124_T  global_mclpool[NUM_STACKS];    

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
# 61 "openbsd3/netatalk/ddp_usrreq.c" 2
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
# 62 "openbsd3/netatalk/ddp_usrreq.c" 2
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
# 63 "openbsd3/netatalk/ddp_usrreq.c" 2
# 1 "openbsd3/sys/socketvar.h" 1
# 38 "openbsd3/sys/socketvar.h"
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
typedef  u_long  _GLOBAL_125_T; extern  _GLOBAL_125_T  global_sb_max[NUM_STACKS];   
struct socket *sonewconn(struct socket *head, int connstatus);


typedef  const char   _GLOBAL_126_T; extern  _GLOBAL_126_T  _GLOBAL_0_netio_I [ ] ; extern  _GLOBAL_126_T  _GLOBAL_1_netio_I [ ] ; extern  _GLOBAL_126_T  _GLOBAL_2_netio_I [ ] ; extern  _GLOBAL_126_T  _GLOBAL_3_netio_I [ ] ; extern  _GLOBAL_126_T  _GLOBAL_4_netio_I [ ] ; extern  _GLOBAL_126_T  _GLOBAL_5_netio_I [ ] ; extern  _GLOBAL_126_T  _GLOBAL_6_netio_I [ ] ; extern  _GLOBAL_126_T  _GLOBAL_7_netio_I [ ] ; extern  _GLOBAL_126_T  _GLOBAL_8_netio_I [ ] ; extern  _GLOBAL_126_T  _GLOBAL_9_netio_I [ ] ; extern  _GLOBAL_126_T  _GLOBAL_10_netio_I [ ] ; extern  _GLOBAL_126_T  _GLOBAL_11_netio_I [ ] ; extern  _GLOBAL_126_T  _GLOBAL_12_netio_I [ ] ; extern  _GLOBAL_126_T  _GLOBAL_13_netio_I [ ] ; extern  _GLOBAL_126_T  _GLOBAL_14_netio_I [ ] ; extern  _GLOBAL_126_T  _GLOBAL_15_netio_I [ ] ; extern  _GLOBAL_126_T  _GLOBAL_16_netio_I [ ] ; extern  _GLOBAL_126_T  _GLOBAL_17_netio_I [ ] ; extern  _GLOBAL_126_T  _GLOBAL_18_netio_I [ ] ; extern  _GLOBAL_126_T  _GLOBAL_19_netio_I [ ] ; extern  _GLOBAL_126_T  _GLOBAL_20_netio_I [ ] ; extern  _GLOBAL_126_T  _GLOBAL_21_netio_I [ ] ; extern  _GLOBAL_126_T  _GLOBAL_22_netio_I [ ] ; extern  _GLOBAL_126_T  _GLOBAL_23_netio_I [ ] ; extern  _GLOBAL_126_T  _GLOBAL_24_netio_I [ ] ; extern  _GLOBAL_126_T  _GLOBAL_25_netio_I [ ] ; extern  _GLOBAL_126_T  _GLOBAL_26_netio_I [ ] ; extern  _GLOBAL_126_T  _GLOBAL_27_netio_I [ ] ; extern  _GLOBAL_126_T  _GLOBAL_28_netio_I [ ] ; extern  _GLOBAL_126_T  _GLOBAL_29_netio_I [ ] ; extern  _GLOBAL_126_T  _GLOBAL_30_netio_I [ ] ; extern  _GLOBAL_126_T  _GLOBAL_31_netio_I [ ] ; extern  _GLOBAL_126_T  _GLOBAL_32_netio_I [ ] ; extern  _GLOBAL_126_T  _GLOBAL_33_netio_I [ ] ; extern  _GLOBAL_126_T  _GLOBAL_34_netio_I [ ] ; extern  _GLOBAL_126_T  _GLOBAL_35_netio_I [ ] ; extern  _GLOBAL_126_T  _GLOBAL_36_netio_I [ ] ; extern  _GLOBAL_126_T  _GLOBAL_37_netio_I [ ] ; extern  _GLOBAL_126_T  _GLOBAL_38_netio_I [ ] ; extern  _GLOBAL_126_T  _GLOBAL_39_netio_I [ ] ; extern  _GLOBAL_126_T  _GLOBAL_40_netio_I [ ] ; extern  _GLOBAL_126_T  _GLOBAL_41_netio_I [ ] ; extern  _GLOBAL_126_T  _GLOBAL_42_netio_I [ ] ; extern  _GLOBAL_126_T  _GLOBAL_43_netio_I [ ] ; extern  _GLOBAL_126_T  _GLOBAL_44_netio_I [ ] ; extern  _GLOBAL_126_T  _GLOBAL_45_netio_I [ ] ; extern  _GLOBAL_126_T  _GLOBAL_46_netio_I [ ] ; extern  _GLOBAL_126_T  _GLOBAL_47_netio_I [ ] ; extern  _GLOBAL_126_T  _GLOBAL_48_netio_I [ ] ; extern  _GLOBAL_126_T  _GLOBAL_49_netio_I [ ] ; static __attribute__ ((unused)) __typeof__(_GLOBAL_0_netio_I) *_GLOBAL_netio_26_A[NUM_STACKS];extern  _GLOBAL_126_T  _GLOBAL_0_netcon_I [ ] ; extern  _GLOBAL_126_T  _GLOBAL_1_netcon_I [ ] ; extern  _GLOBAL_126_T  _GLOBAL_2_netcon_I [ ] ; extern  _GLOBAL_126_T  _GLOBAL_3_netcon_I [ ] ; extern  _GLOBAL_126_T  _GLOBAL_4_netcon_I [ ] ; extern  _GLOBAL_126_T  _GLOBAL_5_netcon_I [ ] ; extern  _GLOBAL_126_T  _GLOBAL_6_netcon_I [ ] ; extern  _GLOBAL_126_T  _GLOBAL_7_netcon_I [ ] ; extern  _GLOBAL_126_T  _GLOBAL_8_netcon_I [ ] ; extern  _GLOBAL_126_T  _GLOBAL_9_netcon_I [ ] ; extern  _GLOBAL_126_T  _GLOBAL_10_netcon_I [ ] ; extern  _GLOBAL_126_T  _GLOBAL_11_netcon_I [ ] ; extern  _GLOBAL_126_T  _GLOBAL_12_netcon_I [ ] ; extern  _GLOBAL_126_T  _GLOBAL_13_netcon_I [ ] ; extern  _GLOBAL_126_T  _GLOBAL_14_netcon_I [ ] ; extern  _GLOBAL_126_T  _GLOBAL_15_netcon_I [ ] ; extern  _GLOBAL_126_T  _GLOBAL_16_netcon_I [ ] ; extern  _GLOBAL_126_T  _GLOBAL_17_netcon_I [ ] ; extern  _GLOBAL_126_T  _GLOBAL_18_netcon_I [ ] ; extern  _GLOBAL_126_T  _GLOBAL_19_netcon_I [ ] ; extern  _GLOBAL_126_T  _GLOBAL_20_netcon_I [ ] ; extern  _GLOBAL_126_T  _GLOBAL_21_netcon_I [ ] ; extern  _GLOBAL_126_T  _GLOBAL_22_netcon_I [ ] ; extern  _GLOBAL_126_T  _GLOBAL_23_netcon_I [ ] ; extern  _GLOBAL_126_T  _GLOBAL_24_netcon_I [ ] ; extern  _GLOBAL_126_T  _GLOBAL_25_netcon_I [ ] ; extern  _GLOBAL_126_T  _GLOBAL_26_netcon_I [ ] ; extern  _GLOBAL_126_T  _GLOBAL_27_netcon_I [ ] ; extern  _GLOBAL_126_T  _GLOBAL_28_netcon_I [ ] ; extern  _GLOBAL_126_T  _GLOBAL_29_netcon_I [ ] ; extern  _GLOBAL_126_T  _GLOBAL_30_netcon_I [ ] ; extern  _GLOBAL_126_T  _GLOBAL_31_netcon_I [ ] ; extern  _GLOBAL_126_T  _GLOBAL_32_netcon_I [ ] ; extern  _GLOBAL_126_T  _GLOBAL_33_netcon_I [ ] ; extern  _GLOBAL_126_T  _GLOBAL_34_netcon_I [ ] ; extern  _GLOBAL_126_T  _GLOBAL_35_netcon_I [ ] ; extern  _GLOBAL_126_T  _GLOBAL_36_netcon_I [ ] ; extern  _GLOBAL_126_T  _GLOBAL_37_netcon_I [ ] ; extern  _GLOBAL_126_T  _GLOBAL_38_netcon_I [ ] ; extern  _GLOBAL_126_T  _GLOBAL_39_netcon_I [ ] ; extern  _GLOBAL_126_T  _GLOBAL_40_netcon_I [ ] ; extern  _GLOBAL_126_T  _GLOBAL_41_netcon_I [ ] ; extern  _GLOBAL_126_T  _GLOBAL_42_netcon_I [ ] ; extern  _GLOBAL_126_T  _GLOBAL_43_netcon_I [ ] ; extern  _GLOBAL_126_T  _GLOBAL_44_netcon_I [ ] ; extern  _GLOBAL_126_T  _GLOBAL_45_netcon_I [ ] ; extern  _GLOBAL_126_T  _GLOBAL_46_netcon_I [ ] ; extern  _GLOBAL_126_T  _GLOBAL_47_netcon_I [ ] ; extern  _GLOBAL_126_T  _GLOBAL_48_netcon_I [ ] ; extern  _GLOBAL_126_T  _GLOBAL_49_netcon_I [ ] ; static __attribute__ ((unused)) __typeof__(_GLOBAL_0_netcon_I) *_GLOBAL_netcon_27_A[NUM_STACKS];extern  _GLOBAL_126_T  _GLOBAL_0_netcls_I [ ] ; extern  _GLOBAL_126_T  _GLOBAL_1_netcls_I [ ] ; extern  _GLOBAL_126_T  _GLOBAL_2_netcls_I [ ] ; extern  _GLOBAL_126_T  _GLOBAL_3_netcls_I [ ] ; extern  _GLOBAL_126_T  _GLOBAL_4_netcls_I [ ] ; extern  _GLOBAL_126_T  _GLOBAL_5_netcls_I [ ] ; extern  _GLOBAL_126_T  _GLOBAL_6_netcls_I [ ] ; extern  _GLOBAL_126_T  _GLOBAL_7_netcls_I [ ] ; extern  _GLOBAL_126_T  _GLOBAL_8_netcls_I [ ] ; extern  _GLOBAL_126_T  _GLOBAL_9_netcls_I [ ] ; extern  _GLOBAL_126_T  _GLOBAL_10_netcls_I [ ] ; extern  _GLOBAL_126_T  _GLOBAL_11_netcls_I [ ] ; extern  _GLOBAL_126_T  _GLOBAL_12_netcls_I [ ] ; extern  _GLOBAL_126_T  _GLOBAL_13_netcls_I [ ] ; extern  _GLOBAL_126_T  _GLOBAL_14_netcls_I [ ] ; extern  _GLOBAL_126_T  _GLOBAL_15_netcls_I [ ] ; extern  _GLOBAL_126_T  _GLOBAL_16_netcls_I [ ] ; extern  _GLOBAL_126_T  _GLOBAL_17_netcls_I [ ] ; extern  _GLOBAL_126_T  _GLOBAL_18_netcls_I [ ] ; extern  _GLOBAL_126_T  _GLOBAL_19_netcls_I [ ] ; extern  _GLOBAL_126_T  _GLOBAL_20_netcls_I [ ] ; extern  _GLOBAL_126_T  _GLOBAL_21_netcls_I [ ] ; extern  _GLOBAL_126_T  _GLOBAL_22_netcls_I [ ] ; extern  _GLOBAL_126_T  _GLOBAL_23_netcls_I [ ] ; extern  _GLOBAL_126_T  _GLOBAL_24_netcls_I [ ] ; extern  _GLOBAL_126_T  _GLOBAL_25_netcls_I [ ] ; extern  _GLOBAL_126_T  _GLOBAL_26_netcls_I [ ] ; extern  _GLOBAL_126_T  _GLOBAL_27_netcls_I [ ] ; extern  _GLOBAL_126_T  _GLOBAL_28_netcls_I [ ] ; extern  _GLOBAL_126_T  _GLOBAL_29_netcls_I [ ] ; extern  _GLOBAL_126_T  _GLOBAL_30_netcls_I [ ] ; extern  _GLOBAL_126_T  _GLOBAL_31_netcls_I [ ] ; extern  _GLOBAL_126_T  _GLOBAL_32_netcls_I [ ] ; extern  _GLOBAL_126_T  _GLOBAL_33_netcls_I [ ] ; extern  _GLOBAL_126_T  _GLOBAL_34_netcls_I [ ] ; extern  _GLOBAL_126_T  _GLOBAL_35_netcls_I [ ] ; extern  _GLOBAL_126_T  _GLOBAL_36_netcls_I [ ] ; extern  _GLOBAL_126_T  _GLOBAL_37_netcls_I [ ] ; extern  _GLOBAL_126_T  _GLOBAL_38_netcls_I [ ] ; extern  _GLOBAL_126_T  _GLOBAL_39_netcls_I [ ] ; extern  _GLOBAL_126_T  _GLOBAL_40_netcls_I [ ] ; extern  _GLOBAL_126_T  _GLOBAL_41_netcls_I [ ] ; extern  _GLOBAL_126_T  _GLOBAL_42_netcls_I [ ] ; extern  _GLOBAL_126_T  _GLOBAL_43_netcls_I [ ] ; extern  _GLOBAL_126_T  _GLOBAL_44_netcls_I [ ] ; extern  _GLOBAL_126_T  _GLOBAL_45_netcls_I [ ] ; extern  _GLOBAL_126_T  _GLOBAL_46_netcls_I [ ] ; extern  _GLOBAL_126_T  _GLOBAL_47_netcls_I [ ] ; extern  _GLOBAL_126_T  _GLOBAL_48_netcls_I [ ] ; extern  _GLOBAL_126_T  _GLOBAL_49_netcls_I [ ] ; static __attribute__ ((unused)) __typeof__(_GLOBAL_0_netcls_I) *_GLOBAL_netcls_28_A[NUM_STACKS];     

typedef  struct pool   _GLOBAL_127_T; extern  _GLOBAL_127_T  global_socket_pool[NUM_STACKS];    

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
# 64 "openbsd3/netatalk/ddp_usrreq.c" 2
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
# 65 "openbsd3/netatalk/ddp_usrreq.c" 2
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
typedef  int   ( *_GLOBAL_129_T  )  ( struct mbuf   *  , int   ) ; extern  _GLOBAL_129_T global_altq_input[NUM_STACKS];      
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
typedef  struct ifnet_head   _GLOBAL_130_T; extern  _GLOBAL_130_T  global_ifnet[NUM_STACKS];    
typedef  struct ifnet   _GLOBAL_131_T; extern  _GLOBAL_131_T  * *  global_ifindex2ifnet[NUM_STACKS];    
typedef  struct ifnet   _GLOBAL_132_T; extern  _GLOBAL_132_T  * global_lo0ifp[NUM_STACKS];    
typedef  int  _GLOBAL_133_T; extern  _GLOBAL_133_T  global_if_indexlim[NUM_STACKS];   

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
# 66 "openbsd3/netatalk/ddp_usrreq.c" 2
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
typedef  struct radix_mask { short  rm_b ;  char  rm_unused ;   u_char  rm_flags ;   struct radix_mask   * rm_mklist  ;   union { caddr_t  rmu_mask ;  struct radix_node   * rmu_leaf  ;   }   rm_rmu ;   int  rm_refs ;   }   _GLOBAL_134_T; extern  _GLOBAL_134_T  * global_rn_mkfreelist[NUM_STACKS];    
  
  
  
   
  
   
    
  
  
 
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
typedef  struct route_cb   _GLOBAL_135_T; extern  _GLOBAL_135_T  global_route_cb[NUM_STACKS];    
typedef  struct rtstat   _GLOBAL_136_T; extern  _GLOBAL_136_T  global_rtstat[NUM_STACKS];    
typedef  struct radix_node_head   _GLOBAL_137_T; extern  _GLOBAL_137_T  * _GLOBAL_0_rt_tables_I [ ]  ; extern  _GLOBAL_137_T  * _GLOBAL_1_rt_tables_I [ ]  ; extern  _GLOBAL_137_T  * _GLOBAL_2_rt_tables_I [ ]  ; extern  _GLOBAL_137_T  * _GLOBAL_3_rt_tables_I [ ]  ; extern  _GLOBAL_137_T  * _GLOBAL_4_rt_tables_I [ ]  ; extern  _GLOBAL_137_T  * _GLOBAL_5_rt_tables_I [ ]  ; extern  _GLOBAL_137_T  * _GLOBAL_6_rt_tables_I [ ]  ; extern  _GLOBAL_137_T  * _GLOBAL_7_rt_tables_I [ ]  ; extern  _GLOBAL_137_T  * _GLOBAL_8_rt_tables_I [ ]  ; extern  _GLOBAL_137_T  * _GLOBAL_9_rt_tables_I [ ]  ; extern  _GLOBAL_137_T  * _GLOBAL_10_rt_tables_I [ ]  ; extern  _GLOBAL_137_T  * _GLOBAL_11_rt_tables_I [ ]  ; extern  _GLOBAL_137_T  * _GLOBAL_12_rt_tables_I [ ]  ; extern  _GLOBAL_137_T  * _GLOBAL_13_rt_tables_I [ ]  ; extern  _GLOBAL_137_T  * _GLOBAL_14_rt_tables_I [ ]  ; extern  _GLOBAL_137_T  * _GLOBAL_15_rt_tables_I [ ]  ; extern  _GLOBAL_137_T  * _GLOBAL_16_rt_tables_I [ ]  ; extern  _GLOBAL_137_T  * _GLOBAL_17_rt_tables_I [ ]  ; extern  _GLOBAL_137_T  * _GLOBAL_18_rt_tables_I [ ]  ; extern  _GLOBAL_137_T  * _GLOBAL_19_rt_tables_I [ ]  ; extern  _GLOBAL_137_T  * _GLOBAL_20_rt_tables_I [ ]  ; extern  _GLOBAL_137_T  * _GLOBAL_21_rt_tables_I [ ]  ; extern  _GLOBAL_137_T  * _GLOBAL_22_rt_tables_I [ ]  ; extern  _GLOBAL_137_T  * _GLOBAL_23_rt_tables_I [ ]  ; extern  _GLOBAL_137_T  * _GLOBAL_24_rt_tables_I [ ]  ; extern  _GLOBAL_137_T  * _GLOBAL_25_rt_tables_I [ ]  ; extern  _GLOBAL_137_T  * _GLOBAL_26_rt_tables_I [ ]  ; extern  _GLOBAL_137_T  * _GLOBAL_27_rt_tables_I [ ]  ; extern  _GLOBAL_137_T  * _GLOBAL_28_rt_tables_I [ ]  ; extern  _GLOBAL_137_T  * _GLOBAL_29_rt_tables_I [ ]  ; extern  _GLOBAL_137_T  * _GLOBAL_30_rt_tables_I [ ]  ; extern  _GLOBAL_137_T  * _GLOBAL_31_rt_tables_I [ ]  ; extern  _GLOBAL_137_T  * _GLOBAL_32_rt_tables_I [ ]  ; extern  _GLOBAL_137_T  * _GLOBAL_33_rt_tables_I [ ]  ; extern  _GLOBAL_137_T  * _GLOBAL_34_rt_tables_I [ ]  ; extern  _GLOBAL_137_T  * _GLOBAL_35_rt_tables_I [ ]  ; extern  _GLOBAL_137_T  * _GLOBAL_36_rt_tables_I [ ]  ; extern  _GLOBAL_137_T  * _GLOBAL_37_rt_tables_I [ ]  ; extern  _GLOBAL_137_T  * _GLOBAL_38_rt_tables_I [ ]  ; extern  _GLOBAL_137_T  * _GLOBAL_39_rt_tables_I [ ]  ; extern  _GLOBAL_137_T  * _GLOBAL_40_rt_tables_I [ ]  ; extern  _GLOBAL_137_T  * _GLOBAL_41_rt_tables_I [ ]  ; extern  _GLOBAL_137_T  * _GLOBAL_42_rt_tables_I [ ]  ; extern  _GLOBAL_137_T  * _GLOBAL_43_rt_tables_I [ ]  ; extern  _GLOBAL_137_T  * _GLOBAL_44_rt_tables_I [ ]  ; extern  _GLOBAL_137_T  * _GLOBAL_45_rt_tables_I [ ]  ; extern  _GLOBAL_137_T  * _GLOBAL_46_rt_tables_I [ ]  ; extern  _GLOBAL_137_T  * _GLOBAL_47_rt_tables_I [ ]  ; extern  _GLOBAL_137_T  * _GLOBAL_48_rt_tables_I [ ]  ; extern  _GLOBAL_137_T  * _GLOBAL_49_rt_tables_I [ ]  ; static __attribute__ ((unused)) __typeof__(_GLOBAL_0_rt_tables_I) *_GLOBAL_rt_tables_29_A[NUM_STACKS];   

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
# 67 "openbsd3/netatalk/ddp_usrreq.c" 2



# 1 "openbsd3/netatalk/at.h" 1
# 80 "openbsd3/netatalk/at.h"
# 1 "openbsd3/net/ethertypes.h" 1
# 81 "openbsd3/netatalk/at.h" 2
# 100 "openbsd3/netatalk/at.h"
struct at_addr {
    u_int16_t s_net;
    u_int8_t s_node;
};






struct netrange {
 u_int8_t nr_phase;
 u_int16_t nr_firstnet;
 u_int16_t nr_lastnet;
};
# 123 "openbsd3/netatalk/at.h"
struct sockaddr_at {
    u_int8_t sat_len;
    u_int8_t sat_family;
    u_int8_t sat_port;
    struct at_addr sat_addr;
    union {
 struct netrange r_netrange;
 int8_t r_zero[ 8 ];
    } sat_range;
};




typedef  struct domain   _GLOBAL_138_T; extern  _GLOBAL_138_T  _GLOBAL_0_atalkdomain_I; extern  _GLOBAL_138_T  _GLOBAL_1_atalkdomain_I; extern  _GLOBAL_138_T  _GLOBAL_2_atalkdomain_I; extern  _GLOBAL_138_T  _GLOBAL_3_atalkdomain_I; extern  _GLOBAL_138_T  _GLOBAL_4_atalkdomain_I; extern  _GLOBAL_138_T  _GLOBAL_5_atalkdomain_I; extern  _GLOBAL_138_T  _GLOBAL_6_atalkdomain_I; extern  _GLOBAL_138_T  _GLOBAL_7_atalkdomain_I; extern  _GLOBAL_138_T  _GLOBAL_8_atalkdomain_I; extern  _GLOBAL_138_T  _GLOBAL_9_atalkdomain_I; extern  _GLOBAL_138_T  _GLOBAL_10_atalkdomain_I; extern  _GLOBAL_138_T  _GLOBAL_11_atalkdomain_I; extern  _GLOBAL_138_T  _GLOBAL_12_atalkdomain_I; extern  _GLOBAL_138_T  _GLOBAL_13_atalkdomain_I; extern  _GLOBAL_138_T  _GLOBAL_14_atalkdomain_I; extern  _GLOBAL_138_T  _GLOBAL_15_atalkdomain_I; extern  _GLOBAL_138_T  _GLOBAL_16_atalkdomain_I; extern  _GLOBAL_138_T  _GLOBAL_17_atalkdomain_I; extern  _GLOBAL_138_T  _GLOBAL_18_atalkdomain_I; extern  _GLOBAL_138_T  _GLOBAL_19_atalkdomain_I; extern  _GLOBAL_138_T  _GLOBAL_20_atalkdomain_I; extern  _GLOBAL_138_T  _GLOBAL_21_atalkdomain_I; extern  _GLOBAL_138_T  _GLOBAL_22_atalkdomain_I; extern  _GLOBAL_138_T  _GLOBAL_23_atalkdomain_I; extern  _GLOBAL_138_T  _GLOBAL_24_atalkdomain_I; extern  _GLOBAL_138_T  _GLOBAL_25_atalkdomain_I; extern  _GLOBAL_138_T  _GLOBAL_26_atalkdomain_I; extern  _GLOBAL_138_T  _GLOBAL_27_atalkdomain_I; extern  _GLOBAL_138_T  _GLOBAL_28_atalkdomain_I; extern  _GLOBAL_138_T  _GLOBAL_29_atalkdomain_I; extern  _GLOBAL_138_T  _GLOBAL_30_atalkdomain_I; extern  _GLOBAL_138_T  _GLOBAL_31_atalkdomain_I; extern  _GLOBAL_138_T  _GLOBAL_32_atalkdomain_I; extern  _GLOBAL_138_T  _GLOBAL_33_atalkdomain_I; extern  _GLOBAL_138_T  _GLOBAL_34_atalkdomain_I; extern  _GLOBAL_138_T  _GLOBAL_35_atalkdomain_I; extern  _GLOBAL_138_T  _GLOBAL_36_atalkdomain_I; extern  _GLOBAL_138_T  _GLOBAL_37_atalkdomain_I; extern  _GLOBAL_138_T  _GLOBAL_38_atalkdomain_I; extern  _GLOBAL_138_T  _GLOBAL_39_atalkdomain_I; extern  _GLOBAL_138_T  _GLOBAL_40_atalkdomain_I; extern  _GLOBAL_138_T  _GLOBAL_41_atalkdomain_I; extern  _GLOBAL_138_T  _GLOBAL_42_atalkdomain_I; extern  _GLOBAL_138_T  _GLOBAL_43_atalkdomain_I; extern  _GLOBAL_138_T  _GLOBAL_44_atalkdomain_I; extern  _GLOBAL_138_T  _GLOBAL_45_atalkdomain_I; extern  _GLOBAL_138_T  _GLOBAL_46_atalkdomain_I; extern  _GLOBAL_138_T  _GLOBAL_47_atalkdomain_I; extern  _GLOBAL_138_T  _GLOBAL_48_atalkdomain_I; extern  _GLOBAL_138_T  _GLOBAL_49_atalkdomain_I; static __attribute__ ((unused)) __typeof__(_GLOBAL_0_atalkdomain_I) *_GLOBAL_atalkdomain_30_A[NUM_STACKS];   
# 71 "openbsd3/netatalk/ddp_usrreq.c" 2
# 1 "openbsd3/netatalk/at_var.h" 1
# 79 "openbsd3/netatalk/at_var.h"
struct at_ifaddr {
    struct ifaddr aa_ifa;

    struct sockaddr_at aa_addr;
    struct sockaddr_at aa_broadaddr;
    struct sockaddr_at aa_netmask;
    int aa_flags;
    u_short aa_firstnet, aa_lastnet;
    int aa_probcnt;
    struct at_ifaddr *aa_next;
};

struct at_aliasreq {
 char ifra_name[16];
 struct sockaddr_at ifra_addr;
 struct sockaddr_at ifra_dstaddr;

 struct sockaddr_at ifra_mask;
};
# 108 "openbsd3/netatalk/at_var.h"
typedef  struct at_ifaddr  _GLOBAL_139_T;  _GLOBAL_139_T  * global_at_ifaddr[NUM_STACKS];   
typedef  struct ifqueue  _GLOBAL_140_T;  _GLOBAL_140_T  global_atintrq1[NUM_STACKS];  _GLOBAL_140_T  global_atintrq2[NUM_STACKS];    
typedef  int _GLOBAL_141_T;  _GLOBAL_141_T  global_atdebug[NUM_STACKS];  
# 72 "openbsd3/netatalk/ddp_usrreq.c" 2
# 1 "openbsd3/netatalk/ddp_var.h" 1
# 56 "openbsd3/netatalk/ddp_var.h"
struct ddpcb {
    struct sockaddr_at ddp_fsat, ddp_lsat;
    struct route ddp_route;
    struct socket *ddp_socket;
    struct ddpcb *ddp_prev, *ddp_next;
    struct ddpcb *ddp_pprev, *ddp_pnext;
};



struct ddpstat {
    u_long ddps_short;
    u_long ddps_long;
    u_long ddps_nosum;
    u_long ddps_badsum;
    u_long ddps_tooshort;
    u_long ddps_toosmall;
    u_long ddps_forward;
    u_long ddps_cantforward;
    u_long ddps_nosockspace;
};


typedef  struct ddpcb  _GLOBAL_142_T;  _GLOBAL_142_T  * _GLOBAL_0_ddp_ports_I [ 255 ]  ;  _GLOBAL_142_T  * _GLOBAL_1_ddp_ports_I [ 255 ]  ;  _GLOBAL_142_T  * _GLOBAL_2_ddp_ports_I [ 255 ]  ;  _GLOBAL_142_T  * _GLOBAL_3_ddp_ports_I [ 255 ]  ;  _GLOBAL_142_T  * _GLOBAL_4_ddp_ports_I [ 255 ]  ;  _GLOBAL_142_T  * _GLOBAL_5_ddp_ports_I [ 255 ]  ;  _GLOBAL_142_T  * _GLOBAL_6_ddp_ports_I [ 255 ]  ;  _GLOBAL_142_T  * _GLOBAL_7_ddp_ports_I [ 255 ]  ;  _GLOBAL_142_T  * _GLOBAL_8_ddp_ports_I [ 255 ]  ;  _GLOBAL_142_T  * _GLOBAL_9_ddp_ports_I [ 255 ]  ;  _GLOBAL_142_T  * _GLOBAL_10_ddp_ports_I [ 255 ]  ;  _GLOBAL_142_T  * _GLOBAL_11_ddp_ports_I [ 255 ]  ;  _GLOBAL_142_T  * _GLOBAL_12_ddp_ports_I [ 255 ]  ;  _GLOBAL_142_T  * _GLOBAL_13_ddp_ports_I [ 255 ]  ;  _GLOBAL_142_T  * _GLOBAL_14_ddp_ports_I [ 255 ]  ;  _GLOBAL_142_T  * _GLOBAL_15_ddp_ports_I [ 255 ]  ;  _GLOBAL_142_T  * _GLOBAL_16_ddp_ports_I [ 255 ]  ;  _GLOBAL_142_T  * _GLOBAL_17_ddp_ports_I [ 255 ]  ;  _GLOBAL_142_T  * _GLOBAL_18_ddp_ports_I [ 255 ]  ;  _GLOBAL_142_T  * _GLOBAL_19_ddp_ports_I [ 255 ]  ;  _GLOBAL_142_T  * _GLOBAL_20_ddp_ports_I [ 255 ]  ;  _GLOBAL_142_T  * _GLOBAL_21_ddp_ports_I [ 255 ]  ;  _GLOBAL_142_T  * _GLOBAL_22_ddp_ports_I [ 255 ]  ;  _GLOBAL_142_T  * _GLOBAL_23_ddp_ports_I [ 255 ]  ;  _GLOBAL_142_T  * _GLOBAL_24_ddp_ports_I [ 255 ]  ;  _GLOBAL_142_T  * _GLOBAL_25_ddp_ports_I [ 255 ]  ;  _GLOBAL_142_T  * _GLOBAL_26_ddp_ports_I [ 255 ]  ;  _GLOBAL_142_T  * _GLOBAL_27_ddp_ports_I [ 255 ]  ;  _GLOBAL_142_T  * _GLOBAL_28_ddp_ports_I [ 255 ]  ;  _GLOBAL_142_T  * _GLOBAL_29_ddp_ports_I [ 255 ]  ;  _GLOBAL_142_T  * _GLOBAL_30_ddp_ports_I [ 255 ]  ;  _GLOBAL_142_T  * _GLOBAL_31_ddp_ports_I [ 255 ]  ;  _GLOBAL_142_T  * _GLOBAL_32_ddp_ports_I [ 255 ]  ;  _GLOBAL_142_T  * _GLOBAL_33_ddp_ports_I [ 255 ]  ;  _GLOBAL_142_T  * _GLOBAL_34_ddp_ports_I [ 255 ]  ;  _GLOBAL_142_T  * _GLOBAL_35_ddp_ports_I [ 255 ]  ;  _GLOBAL_142_T  * _GLOBAL_36_ddp_ports_I [ 255 ]  ;  _GLOBAL_142_T  * _GLOBAL_37_ddp_ports_I [ 255 ]  ;  _GLOBAL_142_T  * _GLOBAL_38_ddp_ports_I [ 255 ]  ;  _GLOBAL_142_T  * _GLOBAL_39_ddp_ports_I [ 255 ]  ;  _GLOBAL_142_T  * _GLOBAL_40_ddp_ports_I [ 255 ]  ;  _GLOBAL_142_T  * _GLOBAL_41_ddp_ports_I [ 255 ]  ;  _GLOBAL_142_T  * _GLOBAL_42_ddp_ports_I [ 255 ]  ;  _GLOBAL_142_T  * _GLOBAL_43_ddp_ports_I [ 255 ]  ;  _GLOBAL_142_T  * _GLOBAL_44_ddp_ports_I [ 255 ]  ;  _GLOBAL_142_T  * _GLOBAL_45_ddp_ports_I [ 255 ]  ;  _GLOBAL_142_T  * _GLOBAL_46_ddp_ports_I [ 255 ]  ;  _GLOBAL_142_T  * _GLOBAL_47_ddp_ports_I [ 255 ]  ;  _GLOBAL_142_T  * _GLOBAL_48_ddp_ports_I [ 255 ]  ;  _GLOBAL_142_T  * _GLOBAL_49_ddp_ports_I [ 255 ]  ; static __attribute__ ((unused)) __typeof__(_GLOBAL_0_ddp_ports_I) *_GLOBAL_ddp_ports_31_A[NUM_STACKS] = { &_GLOBAL_0_ddp_ports_I, &_GLOBAL_1_ddp_ports_I, &_GLOBAL_2_ddp_ports_I, &_GLOBAL_3_ddp_ports_I, &_GLOBAL_4_ddp_ports_I, &_GLOBAL_5_ddp_ports_I, &_GLOBAL_6_ddp_ports_I, &_GLOBAL_7_ddp_ports_I, &_GLOBAL_8_ddp_ports_I, &_GLOBAL_9_ddp_ports_I, &_GLOBAL_10_ddp_ports_I, &_GLOBAL_11_ddp_ports_I, &_GLOBAL_12_ddp_ports_I, &_GLOBAL_13_ddp_ports_I, &_GLOBAL_14_ddp_ports_I, &_GLOBAL_15_ddp_ports_I, &_GLOBAL_16_ddp_ports_I, &_GLOBAL_17_ddp_ports_I, &_GLOBAL_18_ddp_ports_I, &_GLOBAL_19_ddp_ports_I, &_GLOBAL_20_ddp_ports_I, &_GLOBAL_21_ddp_ports_I, &_GLOBAL_22_ddp_ports_I, &_GLOBAL_23_ddp_ports_I, &_GLOBAL_24_ddp_ports_I, &_GLOBAL_25_ddp_ports_I, &_GLOBAL_26_ddp_ports_I, &_GLOBAL_27_ddp_ports_I, &_GLOBAL_28_ddp_ports_I, &_GLOBAL_29_ddp_ports_I, &_GLOBAL_30_ddp_ports_I, &_GLOBAL_31_ddp_ports_I, &_GLOBAL_32_ddp_ports_I, &_GLOBAL_33_ddp_ports_I, &_GLOBAL_34_ddp_ports_I, &_GLOBAL_35_ddp_ports_I, &_GLOBAL_36_ddp_ports_I, &_GLOBAL_37_ddp_ports_I, &_GLOBAL_38_ddp_ports_I, &_GLOBAL_39_ddp_ports_I, &_GLOBAL_40_ddp_ports_I, &_GLOBAL_41_ddp_ports_I, &_GLOBAL_42_ddp_ports_I, &_GLOBAL_43_ddp_ports_I, &_GLOBAL_44_ddp_ports_I, &_GLOBAL_45_ddp_ports_I, &_GLOBAL_46_ddp_ports_I, &_GLOBAL_47_ddp_ports_I, &_GLOBAL_48_ddp_ports_I, &_GLOBAL_49_ddp_ports_I, };    
typedef  struct ddpcb  _GLOBAL_143_T;  _GLOBAL_143_T  * global_ddpcb[NUM_STACKS];   
typedef  struct ddpstat  _GLOBAL_144_T;  _GLOBAL_144_T  global_ddpstat[NUM_STACKS];   
# 73 "openbsd3/netatalk/ddp_usrreq.c" 2
# 1 "openbsd3/netatalk/at_extern.h" 1
# 80 "openbsd3/netatalk/at_extern.h"
struct ifnet;
struct mbuf;
struct sockaddr_at;
struct proc;
struct at_ifaddr;
struct route;
struct socket;

void atintr(void);
void aarpprobe(void *);
int aarpresolve(struct arpcom *, struct mbuf *,
    struct sockaddr_at *, u_int8_t *);
void aarpinput(struct arpcom *, struct mbuf *);
int at_broadcast(struct sockaddr_at *);
void aarp_clean(void);
int at_control(u_long, caddr_t, struct ifnet *,
    struct proc *);
u_int16_t at_cksum(struct mbuf *, int);
int ddp_usrreq(struct socket *, int,
    struct mbuf *, struct mbuf *,
    struct mbuf *);
void ddp_init(void );
struct ifaddr *at_ifawithnet(struct sockaddr_at *, struct ifaddr *);
int ddp_output(struct mbuf *, ...);
struct ddpcb *ddp_search(struct sockaddr_at *,
    struct sockaddr_at *, struct at_ifaddr *);
int ddp_route(struct mbuf *, struct route *);
# 74 "openbsd3/netatalk/ddp_usrreq.c" 2

int ddp_usrreq(struct socket *, int, struct mbuf *,
   struct mbuf *, struct mbuf * );
static void at_sockaddr( struct ddpcb *, struct mbuf * );
static int at_pcbsetaddr( struct ddpcb *, struct mbuf *,
   struct proc * );
static int at_pcbconnect( struct ddpcb *, struct mbuf *,
   struct proc *);
static void at_pcbdisconnect( struct ddpcb * );
static int at_pcballoc( struct socket * );
static void at_pcbdetach( struct socket *, struct ddpcb * );
struct ddpcb *ddp_search( struct sockaddr_at *,
   struct sockaddr_at *, struct at_ifaddr * );
void ddp_init(void);

typedef  struct ddpcb  _GLOBAL_145_T;  _GLOBAL_145_T  * global_ddpcb[NUM_STACKS] = {  0L,  0L,  0L,  0L,  0L,  0L,  0L,  0L,  0L,  0L,  0L,  0L,  0L,  0L,  0L,  0L,  0L,  0L,  0L,  0L,  0L,  0L,  0L,  0L,  0L,  0L,  0L,  0L,  0L,  0L,  0L,  0L,  0L,  0L,  0L,  0L,  0L,  0L,  0L,  0L,  0L,  0L,  0L,  0L,  0L,  0L,  0L,  0L,  0L,  0L,  };     
typedef  u_long _GLOBAL_146_T;  _GLOBAL_146_T  global_ddp_sendspace[NUM_STACKS] = {  587,  587,  587,  587,  587,  587,  587,  587,  587,  587,  587,  587,  587,  587,  587,  587,  587,  587,  587,  587,  587,  587,  587,  587,  587,  587,  587,  587,  587,  587,  587,  587,  587,  587,  587,  587,  587,  587,  587,  587,  587,  587,  587,  587,  587,  587,  587,  587,  587,  587,  };    
typedef  u_long _GLOBAL_147_T;  _GLOBAL_147_T  global_ddp_recvspace[NUM_STACKS] = {  10 * ( 587 + sizeof ( struct sockaddr_at  )   )  ,  10 * ( 587 + sizeof ( struct sockaddr_at  )   )  ,  10 * ( 587 + sizeof ( struct sockaddr_at  )   )  ,  10 * ( 587 + sizeof ( struct sockaddr_at  )   )  ,  10 * ( 587 + sizeof ( struct sockaddr_at  )   )  ,  10 * ( 587 + sizeof ( struct sockaddr_at  )   )  ,  10 * ( 587 + sizeof ( struct sockaddr_at  )   )  ,  10 * ( 587 + sizeof ( struct sockaddr_at  )   )  ,  10 * ( 587 + sizeof ( struct sockaddr_at  )   )  ,  10 * ( 587 + sizeof ( struct sockaddr_at  )   )  ,  10 * ( 587 + sizeof ( struct sockaddr_at  )   )  ,  10 * ( 587 + sizeof ( struct sockaddr_at  )   )  ,  10 * ( 587 + sizeof ( struct sockaddr_at  )   )  ,  10 * ( 587 + sizeof ( struct sockaddr_at  )   )  ,  10 * ( 587 + sizeof ( struct sockaddr_at  )   )  ,  10 * ( 587 + sizeof ( struct sockaddr_at  )   )  ,  10 * ( 587 + sizeof ( struct sockaddr_at  )   )  ,  10 * ( 587 + sizeof ( struct sockaddr_at  )   )  ,  10 * ( 587 + sizeof ( struct sockaddr_at  )   )  ,  10 * ( 587 + sizeof ( struct sockaddr_at  )   )  ,  10 * ( 587 + sizeof ( struct sockaddr_at  )   )  ,  10 * ( 587 + sizeof ( struct sockaddr_at  )   )  ,  10 * ( 587 + sizeof ( struct sockaddr_at  )   )  ,  10 * ( 587 + sizeof ( struct sockaddr_at  )   )  ,  10 * ( 587 + sizeof ( struct sockaddr_at  )   )  ,  10 * ( 587 + sizeof ( struct sockaddr_at  )   )  ,  10 * ( 587 + sizeof ( struct sockaddr_at  )   )  ,  10 * ( 587 + sizeof ( struct sockaddr_at  )   )  ,  10 * ( 587 + sizeof ( struct sockaddr_at  )   )  ,  10 * ( 587 + sizeof ( struct sockaddr_at  )   )  ,  10 * ( 587 + sizeof ( struct sockaddr_at  )   )  ,  10 * ( 587 + sizeof ( struct sockaddr_at  )   )  ,  10 * ( 587 + sizeof ( struct sockaddr_at  )   )  ,  10 * ( 587 + sizeof ( struct sockaddr_at  )   )  ,  10 * ( 587 + sizeof ( struct sockaddr_at  )   )  ,  10 * ( 587 + sizeof ( struct sockaddr_at  )   )  ,  10 * ( 587 + sizeof ( struct sockaddr_at  )   )  ,  10 * ( 587 + sizeof ( struct sockaddr_at  )   )  ,  10 * ( 587 + sizeof ( struct sockaddr_at  )   )  ,  10 * ( 587 + sizeof ( struct sockaddr_at  )   )  ,  10 * ( 587 + sizeof ( struct sockaddr_at  )   )  ,  10 * ( 587 + sizeof ( struct sockaddr_at  )   )  ,  10 * ( 587 + sizeof ( struct sockaddr_at  )   )  ,  10 * ( 587 + sizeof ( struct sockaddr_at  )   )  ,  10 * ( 587 + sizeof ( struct sockaddr_at  )   )  ,  10 * ( 587 + sizeof ( struct sockaddr_at  )   )  ,  10 * ( 587 + sizeof ( struct sockaddr_at  )   )  ,  10 * ( 587 + sizeof ( struct sockaddr_at  )   )  ,  10 * ( 587 + sizeof ( struct sockaddr_at  )   )  ,  10 * ( 587 + sizeof ( struct sockaddr_at  )   )  ,  };            


int
ddp_usrreq( so, req, m, addr, rights )
    struct socket *so;
    int req;
    struct mbuf *m, *addr, *rights;
{

    struct proc *p = global_curproc[get_stack_id()];
    struct ddpcb *ddp;
    int error = 0;

    ddp = ((struct ddpcb *)(so)->so_pcb);

    if ( req == 11 ) {
 return( at_control( (u_long) m, (caddr_t) addr,
  (struct ifnet *) rights, p ));
    }

    if ( rights && rights->m_hdr.mh_len ) {
 error = 22;
 goto release;
    }

    if ( ddp == 0L && req != 0 ) {
 error = 22;
 goto release;
    }

    switch ( req ) {
    case 0 :
 if ( ddp != 0L ) {
     error = 22;
     break;
 }
 if (( error = at_pcballoc( so )) != 0 ) {
     break;
 }
 error = soreserve( so, global_ddp_sendspace[get_stack_id()], global_ddp_recvspace[get_stack_id()] );
 break;

    case 1 :
 at_pcbdetach( so, ddp );
 break;

    case 2 :
 error = at_pcbsetaddr( ddp, addr, p );
 break;

    case 15 :
 at_sockaddr( ddp, addr );
 break;

    case 4:
 if ( ddp->ddp_fsat.sat_port != (u_int8_t)0x00 ) {
     error = 56;
     break;
 }

 error = at_pcbconnect( ddp, addr, p );
 if ( error == 0 )
     soisconnected( so );
 break;

    case 6:
 if ( ddp->ddp_fsat.sat_addr.s_node == (u_int8_t)0x00 ) {
     error = 57;
     break;
 }
 at_pcbdisconnect( ddp );
 soisdisconnected( so );
 break;

    case 7:
 socantsendmore( so );
 break;

    case 9: {
 int s;

 if ( addr ) {
     if ( ddp->ddp_fsat.sat_port != (u_int8_t)0x00 ) {
  error = 56;
  break;
     }

     s = splraise((0x20 + ((3) << 4)));
     error = at_pcbconnect( ddp, addr, p );
     if ( error ) {
  splx( s );
  break;
     }
 } else {
     if ( ddp->ddp_fsat.sat_port == (u_int8_t)0x00 ) {
  error = 57;
  break;
     }
 }

 error = ddp_output( m, ddp );
 m = 0L;
 if ( addr ) {
     at_pcbdisconnect( ddp );
     splx( s );
 }
 }
 break;

    case 10:
 soisdisconnected( so );
 at_pcbdetach( so, ddp );
 break;

    case 3:
    case 17:
    case 5:
    case 14:
    case 18:
    case 19:
    case 20:
    case 21:
 error = 45;
 break;

    case 8:
    case 13:



 return( 45 );

    case 12:




 return( 0 );

    default:
 error = 45;
    }

release:
    if ( m != 0L ) {
 m_freem( m );
    }
    return( error );
}

static void
at_sockaddr( ddp, addr )
    struct ddpcb *ddp;
    struct mbuf *addr;
{
    struct sockaddr_at *sat;

    addr->m_hdr.mh_len = sizeof( struct sockaddr_at );
    sat = ((struct sockaddr_at *)((addr)->m_hdr.mh_data));
    *sat = ddp->ddp_lsat;
}

static int
at_pcbsetaddr( ddp, addr, p )
    struct ddpcb *ddp;
    struct mbuf *addr;
    struct proc *p;
{
    struct sockaddr_at lsat, *sat;
    struct at_ifaddr *aa;
    struct ddpcb *ddpp;

    if ( ddp->ddp_lsat.sat_port != (u_int8_t)0x00 ) {
 return( 22 );
    }

    if ( addr != 0 ) {
 sat = ((struct sockaddr_at *)((addr)->m_hdr.mh_data));
 if ( addr->m_hdr.mh_len != sizeof( *sat )) {
     return( 22 );
 }
 if ( sat->sat_family != 16 ) {
     return( 47 );
 }

 if ( sat->sat_addr.s_node != (u_int8_t)0x00 ||
  sat->sat_addr.s_net != (u_int16_t)0x0000 ) {
     for ( aa = global_at_ifaddr[get_stack_id()]; aa; aa = aa->aa_next ) {
  if (( sat->sat_addr.s_net == ((struct sockaddr_at *)&((struct at_ifaddr *)(aa))->aa_addr)->sat_addr.s_net ) &&
   ( sat->sat_addr.s_node == ((struct sockaddr_at *)&((struct at_ifaddr *)(aa))->aa_addr)->sat_addr.s_node )) {
      break;
  }
     }
     if ( !aa ) {
  return( 49 );
     }
 }

 if ( sat->sat_port != (u_int8_t)0x00 ) {
     if ( sat->sat_port < 1 ||
      sat->sat_port >= 255 ) {
  return( 22 );
     }
     if ( sat->sat_port < 128 &&
      suser( p, 0 )) {
  return( 13 );
     }
 }
    } else {
 bzero( (caddr_t)&lsat, sizeof( struct sockaddr_at ));
 lsat.sat_family = 16;
 sat = &lsat;
    }

    if ( sat->sat_addr.s_node == (u_int8_t)0x00 &&
     sat->sat_addr.s_net == (u_int16_t)0x0000 ) {
 if ( global_at_ifaddr[get_stack_id()] == 0L ) {
     return( 49 );
 }
 sat->sat_addr = ((struct sockaddr_at *)&((struct at_ifaddr *)(global_at_ifaddr[get_stack_id()]))->aa_addr)->sat_addr;
    }
    ddp->ddp_lsat = *sat;




    if ( sat->sat_port == (u_int8_t)0x00 ) {
 for ( sat->sat_port = 128;
  sat->sat_port < 255; sat->sat_port++ ) {
     if ( (*_GLOBAL_ddp_ports_31_A[get_stack_id()])[ sat->sat_port - 1 ] == 0 ) {
  break;
     }
 }
 if ( sat->sat_port == 255 ) {
     return( 49 );
 }
 ddp->ddp_lsat.sat_port = sat->sat_port;
 (*_GLOBAL_ddp_ports_31_A[get_stack_id()])[ sat->sat_port - 1 ] = ddp;
    } else {
 for ( ddpp = (*_GLOBAL_ddp_ports_31_A[get_stack_id()])[ sat->sat_port - 1 ]; ddpp;
  ddpp = ddpp->ddp_pnext ) {
     if ( ddpp->ddp_lsat.sat_addr.s_net == sat->sat_addr.s_net &&
      ddpp->ddp_lsat.sat_addr.s_node == sat->sat_addr.s_node ) {
  break;
     }
 }
 if ( ddpp != 0L ) {
     return( 48 );
 }
 ddp->ddp_pnext = (*_GLOBAL_ddp_ports_31_A[get_stack_id()])[ sat->sat_port - 1 ];
 (*_GLOBAL_ddp_ports_31_A[get_stack_id()])[ sat->sat_port - 1 ] = ddp;
 if ( ddp->ddp_pnext ) {
     ddp->ddp_pnext->ddp_pprev = ddp;
 }
    }

    return( 0 );
}

static int
at_pcbconnect( ddp, addr, p )
    struct ddpcb *ddp;
    struct mbuf *addr;
    struct proc *p;
{
    struct sockaddr_at *sat = ((struct sockaddr_at *)((addr)->m_hdr.mh_data));
    struct route *ro;
    struct at_ifaddr *aa = 0;
    struct ifnet *ifp;
    u_int16_t hintnet = 0, net;

    if ( addr->m_hdr.mh_len != sizeof( *sat ))
 return( 22 );
    if ( sat->sat_family != 16 ) {
 return( 47 );
    }






    if ( sat->sat_addr.s_net == 0 && sat->sat_addr.s_node != (u_int8_t)0x00 ) {
 if ( ddp->ddp_lsat.sat_port == (u_int8_t)0x00 ) {
     return( 49 );
 }
 hintnet = ddp->ddp_lsat.sat_addr.s_net;
    }

    ro = &ddp->ddp_route;





    if ( ro->ro_rt ) {
 if ( hintnet ) {
     net = hintnet;
 } else {
     net = sat->sat_addr.s_net;
 }
 aa = 0;
 if ( (ifp = ro->ro_rt->rt_ifp) != 0L ) {
     for ( aa = global_at_ifaddr[get_stack_id()]; aa; aa = aa->aa_next ) {
  if ( aa->aa_ifa.ifa_ifp == ifp &&
   __extension__({ u_int16_t __swap16_x = (net); __builtin_constant_p(net) ? __extension__({ u_int16_t __swap16gen_x = (__swap16_x); (u_int16_t)((__swap16gen_x & 0xff) << 8 | (__swap16gen_x & 0xff00) >> 8); }) : ({ u_int16_t __swap16md_x = (__swap16_x); __asm ("rorw $8, %w1" : "+r" (__swap16md_x)); __swap16md_x; }); }) >= __extension__({ u_int16_t __swap16_x = (aa->aa_firstnet); __builtin_constant_p(aa->aa_firstnet) ? __extension__({ u_int16_t __swap16gen_x = (__swap16_x); (u_int16_t)((__swap16gen_x & 0xff) << 8 | (__swap16gen_x & 0xff00) >> 8); }) : ({ u_int16_t __swap16md_x = (__swap16_x); __asm ("rorw $8, %w1" : "+r" (__swap16md_x)); __swap16md_x; }); }) &&
   __extension__({ u_int16_t __swap16_x = (net); __builtin_constant_p(net) ? __extension__({ u_int16_t __swap16gen_x = (__swap16_x); (u_int16_t)((__swap16gen_x & 0xff) << 8 | (__swap16gen_x & 0xff00) >> 8); }) : ({ u_int16_t __swap16md_x = (__swap16_x); __asm ("rorw $8, %w1" : "+r" (__swap16md_x)); __swap16md_x; }); }) <= __extension__({ u_int16_t __swap16_x = (aa->aa_lastnet); __builtin_constant_p(aa->aa_lastnet) ? __extension__({ u_int16_t __swap16gen_x = (__swap16_x); (u_int16_t)((__swap16gen_x & 0xff) << 8 | (__swap16gen_x & 0xff00) >> 8); }) : ({ u_int16_t __swap16md_x = (__swap16_x); __asm ("rorw $8, %w1" : "+r" (__swap16md_x)); __swap16md_x; }); })) {
      break;
  }
     }
 }
 if ( aa == 0L || ( ((struct sockaddr_at *)(&ro->ro_dst))->sat_addr.s_net !=
  ( hintnet ? hintnet : sat->sat_addr.s_net ) ||
  ((struct sockaddr_at *)(&ro->ro_dst))->sat_addr.s_node !=
  sat->sat_addr.s_node )) {
     do { if ((ro->ro_rt)->rt_refcnt <= 1) rtfree(ro->ro_rt); else (ro->ro_rt)->rt_refcnt--; } while (0);
     ro->ro_rt = (struct rtentry *)0;
 }
    }




    if ( ro->ro_rt == (struct rtentry *)0 ||
  ro->ro_rt->rt_ifp == (struct ifnet *)0 ) {
 ro->ro_dst.sa_len = sizeof( struct sockaddr_at );
 ro->ro_dst.sa_family = 16;
 if ( hintnet != 0 ) {
     ((struct sockaddr_at *)(&ro->ro_dst))->sat_addr.s_net = hintnet;
 } else {
     ((struct sockaddr_at *)(&ro->ro_dst))->sat_addr.s_net = sat->sat_addr.s_net;
 }
 ((struct sockaddr_at *)(&ro->ro_dst))->sat_addr.s_node = sat->sat_addr.s_node;
 rtalloc( ro );
    }




    aa = 0;
    if ( ro->ro_rt && ( ifp = ro->ro_rt->rt_ifp )) {
 for ( aa = global_at_ifaddr[get_stack_id()]; aa; aa = aa->aa_next ) {
     if ( aa->aa_ifa.ifa_ifp == ifp ) {
  break;
     }
 }
    }
    if ( aa == 0 ) {
 return( 51 );
    }

    ddp->ddp_fsat = *sat;
    if ( ddp->ddp_lsat.sat_port == (u_int8_t)0x00 ) {
 return( at_pcbsetaddr( ddp, (struct mbuf *)0, p ));
    }
    return( 0 );
}

static void
at_pcbdisconnect( ddp )
    struct ddpcb *ddp;
{
    ddp->ddp_fsat.sat_addr.s_net = (u_int16_t)0x0000;
    ddp->ddp_fsat.sat_addr.s_node = (u_int8_t)0x00;
    ddp->ddp_fsat.sat_port = (u_int8_t)0x00;
}

static int
at_pcballoc( so )
    struct socket *so;
{
    struct ddpcb *ddp;

    (ddp) = (struct ddpcb *)malloc((u_long)(sizeof( *ddp )), 4, 0x0001);
    if ( ddp == 0L ) {
 return (55);
    }
    bzero( ddp, sizeof( *ddp ));

    ddp->ddp_lsat.sat_port = (u_int8_t)0x00;

    ddp->ddp_next = global_ddpcb[get_stack_id()];
    ddp->ddp_prev = 0L;
    ddp->ddp_pprev = 0L;
    ddp->ddp_pnext = 0L;
    if ( global_ddpcb[get_stack_id()] ) {
 global_ddpcb[get_stack_id()]->ddp_prev = ddp;
    }
    global_ddpcb[get_stack_id()] = ddp;

    ddp->ddp_socket = so;
    so->so_pcb = (caddr_t)ddp;
    return( 0 );
}

static void
at_pcbdetach( so, ddp )
    struct socket *so;
    struct ddpcb *ddp;
{
    soisdisconnected( so );
    so->so_pcb = 0;
    sofree( so );


    if ( ddp->ddp_lsat.sat_port != (u_int8_t)0x00 &&
     (*_GLOBAL_ddp_ports_31_A[get_stack_id()])[ ddp->ddp_lsat.sat_port - 1 ] != 0L ) {
 if ( ddp->ddp_pprev != 0L ) {
     ddp->ddp_pprev->ddp_pnext = ddp->ddp_pnext;
 } else {
     (*_GLOBAL_ddp_ports_31_A[get_stack_id()])[ ddp->ddp_lsat.sat_port - 1 ] = ddp->ddp_pnext;
 }
 if ( ddp->ddp_pnext != 0L ) {
     ddp->ddp_pnext->ddp_pprev = ddp->ddp_pprev;
 }
    }

    if ( ddp->ddp_route.ro_rt ) {
 rtfree( ddp->ddp_route.ro_rt );
    }

    if ( ddp->ddp_prev ) {
 ddp->ddp_prev->ddp_next = ddp->ddp_next;
    } else {
 global_ddpcb[get_stack_id()] = ddp->ddp_next;
    }
    if ( ddp->ddp_next ) {
 ddp->ddp_next->ddp_prev = ddp->ddp_prev;
    }

    free((caddr_t)(ddp), 4);
}







struct ddpcb *
ddp_search( from, to, aa )
    struct sockaddr_at *from, *to;
    struct at_ifaddr *aa;
{
    struct ddpcb *ddp;




    if ( to->sat_port < 1 || to->sat_port >= 255 ) {
 return( 0L );
    }





    for ( ddp = (*_GLOBAL_ddp_ports_31_A[get_stack_id()])[ to->sat_port - 1 ]; ddp; ddp = ddp->ddp_pnext ) {



 if ( to->sat_addr.s_net == ddp->ddp_lsat.sat_addr.s_net &&
  to->sat_addr.s_node == ddp->ddp_lsat.sat_addr.s_node ) {
     break;
 }


 if ( to->sat_addr.s_node == (u_int8_t)0xff && ( to->sat_addr.s_net == 0 ||
  to->sat_addr.s_net == ddp->ddp_lsat.sat_addr.s_net ) &&
  ddp->ddp_lsat.sat_addr.s_net == ((struct sockaddr_at *)&((struct at_ifaddr *)(aa))->aa_addr)->sat_addr.s_net ) {
     break;
 }


 if ( to->sat_addr.s_net == aa->aa_firstnet &&
  to->sat_addr.s_node == 0 &&
  __extension__({ u_int16_t __swap16_x = (ddp->ddp_lsat.sat_addr.s_net); __builtin_constant_p(ddp->ddp_lsat.sat_addr.s_net) ? __extension__({ u_int16_t __swap16gen_x = (__swap16_x); (u_int16_t)((__swap16gen_x & 0xff) << 8 | (__swap16gen_x & 0xff00) >> 8); }) : ({ u_int16_t __swap16md_x = (__swap16_x); __asm ("rorw $8, %w1" : "+r" (__swap16md_x)); __swap16md_x; }); }) >=
  __extension__({ u_int16_t __swap16_x = (aa->aa_firstnet); __builtin_constant_p(aa->aa_firstnet) ? __extension__({ u_int16_t __swap16gen_x = (__swap16_x); (u_int16_t)((__swap16gen_x & 0xff) << 8 | (__swap16gen_x & 0xff00) >> 8); }) : ({ u_int16_t __swap16md_x = (__swap16_x); __asm ("rorw $8, %w1" : "+r" (__swap16md_x)); __swap16md_x; }); }) &&
  __extension__({ u_int16_t __swap16_x = (ddp->ddp_lsat.sat_addr.s_net); __builtin_constant_p(ddp->ddp_lsat.sat_addr.s_net) ? __extension__({ u_int16_t __swap16gen_x = (__swap16_x); (u_int16_t)((__swap16gen_x & 0xff) << 8 | (__swap16gen_x & 0xff00) >> 8); }) : ({ u_int16_t __swap16md_x = (__swap16_x); __asm ("rorw $8, %w1" : "+r" (__swap16md_x)); __swap16md_x; }); }) <=
  __extension__({ u_int16_t __swap16_x = (aa->aa_lastnet); __builtin_constant_p(aa->aa_lastnet) ? __extension__({ u_int16_t __swap16gen_x = (__swap16_x); (u_int16_t)((__swap16gen_x & 0xff) << 8 | (__swap16gen_x & 0xff00) >> 8); }) : ({ u_int16_t __swap16md_x = (__swap16_x); __asm ("rorw $8, %w1" : "+r" (__swap16md_x)); __swap16md_x; }); })) {
     break;
 }
    }
    return( ddp );
}

void
ddp_init()
{
    global_atintrq1[get_stack_id()].ifq_maxlen = 50;
    global_atintrq2[get_stack_id()].ifq_maxlen = 50;
}

