# 1 "openbsd3/crypto/cryptodev.c"
# 1 "/home/cmcc/omnet_workspace/inet/3rdparty/nsc-0.5.2//"
# 1 "<built-in>"
# 1 "<command-line>"
# 1 "openbsd3/crypto/cryptodev.c"
# 33 "openbsd3/crypto/cryptodev.c"
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
# 34 "openbsd3/crypto/cryptodev.c" 2
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
# 35 "openbsd3/crypto/cryptodev.c" 2
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
# 36 "openbsd3/crypto/cryptodev.c" 2
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
# 37 "openbsd3/crypto/cryptodev.c" 2
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
typedef  struct uvm_pagerops   _GLOBAL_83_T; extern  _GLOBAL_83_T  _GLOBAL_0_uvm_vnodeops_I; extern  _GLOBAL_83_T  _GLOBAL_1_uvm_vnodeops_I; extern  _GLOBAL_83_T  _GLOBAL_2_uvm_vnodeops_I; extern  _GLOBAL_83_T  _GLOBAL_3_uvm_vnodeops_I; extern  _GLOBAL_83_T  _GLOBAL_4_uvm_vnodeops_I; extern  _GLOBAL_83_T  _GLOBAL_5_uvm_vnodeops_I; extern  _GLOBAL_83_T  _GLOBAL_6_uvm_vnodeops_I; extern  _GLOBAL_83_T  _GLOBAL_7_uvm_vnodeops_I; extern  _GLOBAL_83_T  _GLOBAL_8_uvm_vnodeops_I; extern  _GLOBAL_83_T  _GLOBAL_9_uvm_vnodeops_I; extern  _GLOBAL_83_T  _GLOBAL_10_uvm_vnodeops_I; extern  _GLOBAL_83_T  _GLOBAL_11_uvm_vnodeops_I; extern  _GLOBAL_83_T  _GLOBAL_12_uvm_vnodeops_I; extern  _GLOBAL_83_T  _GLOBAL_13_uvm_vnodeops_I; extern  _GLOBAL_83_T  _GLOBAL_14_uvm_vnodeops_I; extern  _GLOBAL_83_T  _GLOBAL_15_uvm_vnodeops_I; extern  _GLOBAL_83_T  _GLOBAL_16_uvm_vnodeops_I; extern  _GLOBAL_83_T  _GLOBAL_17_uvm_vnodeops_I; extern  _GLOBAL_83_T  _GLOBAL_18_uvm_vnodeops_I; extern  _GLOBAL_83_T  _GLOBAL_19_uvm_vnodeops_I; extern  _GLOBAL_83_T  _GLOBAL_20_uvm_vnodeops_I; extern  _GLOBAL_83_T  _GLOBAL_21_uvm_vnodeops_I; extern  _GLOBAL_83_T  _GLOBAL_22_uvm_vnodeops_I; extern  _GLOBAL_83_T  _GLOBAL_23_uvm_vnodeops_I; extern  _GLOBAL_83_T  _GLOBAL_24_uvm_vnodeops_I; extern  _GLOBAL_83_T  _GLOBAL_25_uvm_vnodeops_I; extern  _GLOBAL_83_T  _GLOBAL_26_uvm_vnodeops_I; extern  _GLOBAL_83_T  _GLOBAL_27_uvm_vnodeops_I; extern  _GLOBAL_83_T  _GLOBAL_28_uvm_vnodeops_I; extern  _GLOBAL_83_T  _GLOBAL_29_uvm_vnodeops_I; extern  _GLOBAL_83_T  _GLOBAL_30_uvm_vnodeops_I; extern  _GLOBAL_83_T  _GLOBAL_31_uvm_vnodeops_I; extern  _GLOBAL_83_T  _GLOBAL_32_uvm_vnodeops_I; extern  _GLOBAL_83_T  _GLOBAL_33_uvm_vnodeops_I; extern  _GLOBAL_83_T  _GLOBAL_34_uvm_vnodeops_I; extern  _GLOBAL_83_T  _GLOBAL_35_uvm_vnodeops_I; extern  _GLOBAL_83_T  _GLOBAL_36_uvm_vnodeops_I; extern  _GLOBAL_83_T  _GLOBAL_37_uvm_vnodeops_I; extern  _GLOBAL_83_T  _GLOBAL_38_uvm_vnodeops_I; extern  _GLOBAL_83_T  _GLOBAL_39_uvm_vnodeops_I; extern  _GLOBAL_83_T  _GLOBAL_40_uvm_vnodeops_I; extern  _GLOBAL_83_T  _GLOBAL_41_uvm_vnodeops_I; extern  _GLOBAL_83_T  _GLOBAL_42_uvm_vnodeops_I; extern  _GLOBAL_83_T  _GLOBAL_43_uvm_vnodeops_I; extern  _GLOBAL_83_T  _GLOBAL_44_uvm_vnodeops_I; extern  _GLOBAL_83_T  _GLOBAL_45_uvm_vnodeops_I; extern  _GLOBAL_83_T  _GLOBAL_46_uvm_vnodeops_I; extern  _GLOBAL_83_T  _GLOBAL_47_uvm_vnodeops_I; extern  _GLOBAL_83_T  _GLOBAL_48_uvm_vnodeops_I; extern  _GLOBAL_83_T  _GLOBAL_49_uvm_vnodeops_I; static __attribute__ ((unused)) __typeof__(_GLOBAL_0_uvm_vnodeops_I) *_GLOBAL_uvm_vnodeops_18_A[NUM_STACKS];   
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
# 390 "openbsd3/uvm/uvm_map.h"
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




typedef  struct emul   _GLOBAL_91_T; extern  _GLOBAL_91_T  * _GLOBAL_0_emulsw_I [ ]  ; extern  _GLOBAL_91_T  * _GLOBAL_1_emulsw_I [ ]  ; extern  _GLOBAL_91_T  * _GLOBAL_2_emulsw_I [ ]  ; extern  _GLOBAL_91_T  * _GLOBAL_3_emulsw_I [ ]  ; extern  _GLOBAL_91_T  * _GLOBAL_4_emulsw_I [ ]  ; extern  _GLOBAL_91_T  * _GLOBAL_5_emulsw_I [ ]  ; extern  _GLOBAL_91_T  * _GLOBAL_6_emulsw_I [ ]  ; extern  _GLOBAL_91_T  * _GLOBAL_7_emulsw_I [ ]  ; extern  _GLOBAL_91_T  * _GLOBAL_8_emulsw_I [ ]  ; extern  _GLOBAL_91_T  * _GLOBAL_9_emulsw_I [ ]  ; extern  _GLOBAL_91_T  * _GLOBAL_10_emulsw_I [ ]  ; extern  _GLOBAL_91_T  * _GLOBAL_11_emulsw_I [ ]  ; extern  _GLOBAL_91_T  * _GLOBAL_12_emulsw_I [ ]  ; extern  _GLOBAL_91_T  * _GLOBAL_13_emulsw_I [ ]  ; extern  _GLOBAL_91_T  * _GLOBAL_14_emulsw_I [ ]  ; extern  _GLOBAL_91_T  * _GLOBAL_15_emulsw_I [ ]  ; extern  _GLOBAL_91_T  * _GLOBAL_16_emulsw_I [ ]  ; extern  _GLOBAL_91_T  * _GLOBAL_17_emulsw_I [ ]  ; extern  _GLOBAL_91_T  * _GLOBAL_18_emulsw_I [ ]  ; extern  _GLOBAL_91_T  * _GLOBAL_19_emulsw_I [ ]  ; extern  _GLOBAL_91_T  * _GLOBAL_20_emulsw_I [ ]  ; extern  _GLOBAL_91_T  * _GLOBAL_21_emulsw_I [ ]  ; extern  _GLOBAL_91_T  * _GLOBAL_22_emulsw_I [ ]  ; extern  _GLOBAL_91_T  * _GLOBAL_23_emulsw_I [ ]  ; extern  _GLOBAL_91_T  * _GLOBAL_24_emulsw_I [ ]  ; extern  _GLOBAL_91_T  * _GLOBAL_25_emulsw_I [ ]  ; extern  _GLOBAL_91_T  * _GLOBAL_26_emulsw_I [ ]  ; extern  _GLOBAL_91_T  * _GLOBAL_27_emulsw_I [ ]  ; extern  _GLOBAL_91_T  * _GLOBAL_28_emulsw_I [ ]  ; extern  _GLOBAL_91_T  * _GLOBAL_29_emulsw_I [ ]  ; extern  _GLOBAL_91_T  * _GLOBAL_30_emulsw_I [ ]  ; extern  _GLOBAL_91_T  * _GLOBAL_31_emulsw_I [ ]  ; extern  _GLOBAL_91_T  * _GLOBAL_32_emulsw_I [ ]  ; extern  _GLOBAL_91_T  * _GLOBAL_33_emulsw_I [ ]  ; extern  _GLOBAL_91_T  * _GLOBAL_34_emulsw_I [ ]  ; extern  _GLOBAL_91_T  * _GLOBAL_35_emulsw_I [ ]  ; extern  _GLOBAL_91_T  * _GLOBAL_36_emulsw_I [ ]  ; extern  _GLOBAL_91_T  * _GLOBAL_37_emulsw_I [ ]  ; extern  _GLOBAL_91_T  * _GLOBAL_38_emulsw_I [ ]  ; extern  _GLOBAL_91_T  * _GLOBAL_39_emulsw_I [ ]  ; extern  _GLOBAL_91_T  * _GLOBAL_40_emulsw_I [ ]  ; extern  _GLOBAL_91_T  * _GLOBAL_41_emulsw_I [ ]  ; extern  _GLOBAL_91_T  * _GLOBAL_42_emulsw_I [ ]  ; extern  _GLOBAL_91_T  * _GLOBAL_43_emulsw_I [ ]  ; extern  _GLOBAL_91_T  * _GLOBAL_44_emulsw_I [ ]  ; extern  _GLOBAL_91_T  * _GLOBAL_45_emulsw_I [ ]  ; extern  _GLOBAL_91_T  * _GLOBAL_46_emulsw_I [ ]  ; extern  _GLOBAL_91_T  * _GLOBAL_47_emulsw_I [ ]  ; extern  _GLOBAL_91_T  * _GLOBAL_48_emulsw_I [ ]  ; extern  _GLOBAL_91_T  * _GLOBAL_49_emulsw_I [ ]  ; static __attribute__ ((unused)) __typeof__(_GLOBAL_0_emulsw_I) *_GLOBAL_emulsw_19_A[NUM_STACKS];   
typedef  int  _GLOBAL_92_T; extern  _GLOBAL_92_T  global_nemuls[NUM_STACKS];   
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
typedef  struct pidhashhead { struct proc   * lh_first  ;  }   _GLOBAL_93_T; extern  _GLOBAL_93_T  * global_pidhashtbl[NUM_STACKS];         
typedef  u_long  _GLOBAL_94_T; extern  _GLOBAL_94_T  global_pidhash[NUM_STACKS];   


typedef  struct pgrphashhead { struct pgrp   * lh_first  ;  }   _GLOBAL_95_T; extern  _GLOBAL_95_T  * global_pgrphashtbl[NUM_STACKS];         
typedef  u_long  _GLOBAL_96_T; extern  _GLOBAL_96_T  global_pgrphash[NUM_STACKS];   


typedef  struct proc   _GLOBAL_97_T; extern  _GLOBAL_97_T  * global_curproc[NUM_STACKS];    

typedef  struct proc   _GLOBAL_98_T; extern  _GLOBAL_98_T  global_proc0[NUM_STACKS];    
typedef  int  _GLOBAL_99_T; extern  _GLOBAL_99_T  global_nprocs[NUM_STACKS]; extern  _GLOBAL_99_T  global_maxproc[NUM_STACKS];    
typedef  int  _GLOBAL_100_T; extern  _GLOBAL_100_T  global_randompid[NUM_STACKS];   

struct proclist { struct proc *lh_first; };
typedef  struct proclist   _GLOBAL_101_T; extern  _GLOBAL_101_T  global_allproc[NUM_STACKS];    
typedef  struct proclist   _GLOBAL_102_T; extern  _GLOBAL_102_T  global_zombproc[NUM_STACKS];    

typedef  struct proclist   _GLOBAL_103_T; extern  _GLOBAL_103_T  global_deadproc[NUM_STACKS];    
typedef  struct simplelock   _GLOBAL_104_T; extern  _GLOBAL_104_T  global_deadproc_slock[NUM_STACKS];    

typedef  struct proc   _GLOBAL_105_T; extern  _GLOBAL_105_T  * global_initproc[NUM_STACKS];    
typedef  struct proc   _GLOBAL_106_T; extern  _GLOBAL_106_T  * global_syncerproc[NUM_STACKS];    

typedef  struct pool   _GLOBAL_107_T; extern  _GLOBAL_107_T  global_proc_pool[NUM_STACKS];    
typedef  struct pool   _GLOBAL_108_T; extern  _GLOBAL_108_T  global_rusage_pool[NUM_STACKS];    
typedef  struct pool   _GLOBAL_109_T; extern  _GLOBAL_109_T  global_ucred_pool[NUM_STACKS];    
typedef  struct pool   _GLOBAL_110_T; extern  _GLOBAL_110_T  global_session_pool[NUM_STACKS];    
typedef  struct pool   _GLOBAL_111_T; extern  _GLOBAL_111_T  global_pcred_pool[NUM_STACKS];    


typedef  int  _GLOBAL_112_T; extern  _GLOBAL_112_T  global_whichqs[NUM_STACKS];   
struct prochd {
 struct proc *ph_link;
 struct proc *ph_rlink;
};
typedef  struct prochd   _GLOBAL_113_T; extern  _GLOBAL_113_T  _GLOBAL_0_qs_I [ 32 ] ; extern  _GLOBAL_113_T  _GLOBAL_1_qs_I [ 32 ] ; extern  _GLOBAL_113_T  _GLOBAL_2_qs_I [ 32 ] ; extern  _GLOBAL_113_T  _GLOBAL_3_qs_I [ 32 ] ; extern  _GLOBAL_113_T  _GLOBAL_4_qs_I [ 32 ] ; extern  _GLOBAL_113_T  _GLOBAL_5_qs_I [ 32 ] ; extern  _GLOBAL_113_T  _GLOBAL_6_qs_I [ 32 ] ; extern  _GLOBAL_113_T  _GLOBAL_7_qs_I [ 32 ] ; extern  _GLOBAL_113_T  _GLOBAL_8_qs_I [ 32 ] ; extern  _GLOBAL_113_T  _GLOBAL_9_qs_I [ 32 ] ; extern  _GLOBAL_113_T  _GLOBAL_10_qs_I [ 32 ] ; extern  _GLOBAL_113_T  _GLOBAL_11_qs_I [ 32 ] ; extern  _GLOBAL_113_T  _GLOBAL_12_qs_I [ 32 ] ; extern  _GLOBAL_113_T  _GLOBAL_13_qs_I [ 32 ] ; extern  _GLOBAL_113_T  _GLOBAL_14_qs_I [ 32 ] ; extern  _GLOBAL_113_T  _GLOBAL_15_qs_I [ 32 ] ; extern  _GLOBAL_113_T  _GLOBAL_16_qs_I [ 32 ] ; extern  _GLOBAL_113_T  _GLOBAL_17_qs_I [ 32 ] ; extern  _GLOBAL_113_T  _GLOBAL_18_qs_I [ 32 ] ; extern  _GLOBAL_113_T  _GLOBAL_19_qs_I [ 32 ] ; extern  _GLOBAL_113_T  _GLOBAL_20_qs_I [ 32 ] ; extern  _GLOBAL_113_T  _GLOBAL_21_qs_I [ 32 ] ; extern  _GLOBAL_113_T  _GLOBAL_22_qs_I [ 32 ] ; extern  _GLOBAL_113_T  _GLOBAL_23_qs_I [ 32 ] ; extern  _GLOBAL_113_T  _GLOBAL_24_qs_I [ 32 ] ; extern  _GLOBAL_113_T  _GLOBAL_25_qs_I [ 32 ] ; extern  _GLOBAL_113_T  _GLOBAL_26_qs_I [ 32 ] ; extern  _GLOBAL_113_T  _GLOBAL_27_qs_I [ 32 ] ; extern  _GLOBAL_113_T  _GLOBAL_28_qs_I [ 32 ] ; extern  _GLOBAL_113_T  _GLOBAL_29_qs_I [ 32 ] ; extern  _GLOBAL_113_T  _GLOBAL_30_qs_I [ 32 ] ; extern  _GLOBAL_113_T  _GLOBAL_31_qs_I [ 32 ] ; extern  _GLOBAL_113_T  _GLOBAL_32_qs_I [ 32 ] ; extern  _GLOBAL_113_T  _GLOBAL_33_qs_I [ 32 ] ; extern  _GLOBAL_113_T  _GLOBAL_34_qs_I [ 32 ] ; extern  _GLOBAL_113_T  _GLOBAL_35_qs_I [ 32 ] ; extern  _GLOBAL_113_T  _GLOBAL_36_qs_I [ 32 ] ; extern  _GLOBAL_113_T  _GLOBAL_37_qs_I [ 32 ] ; extern  _GLOBAL_113_T  _GLOBAL_38_qs_I [ 32 ] ; extern  _GLOBAL_113_T  _GLOBAL_39_qs_I [ 32 ] ; extern  _GLOBAL_113_T  _GLOBAL_40_qs_I [ 32 ] ; extern  _GLOBAL_113_T  _GLOBAL_41_qs_I [ 32 ] ; extern  _GLOBAL_113_T  _GLOBAL_42_qs_I [ 32 ] ; extern  _GLOBAL_113_T  _GLOBAL_43_qs_I [ 32 ] ; extern  _GLOBAL_113_T  _GLOBAL_44_qs_I [ 32 ] ; extern  _GLOBAL_113_T  _GLOBAL_45_qs_I [ 32 ] ; extern  _GLOBAL_113_T  _GLOBAL_46_qs_I [ 32 ] ; extern  _GLOBAL_113_T  _GLOBAL_47_qs_I [ 32 ] ; extern  _GLOBAL_113_T  _GLOBAL_48_qs_I [ 32 ] ; extern  _GLOBAL_113_T  _GLOBAL_49_qs_I [ 32 ] ; static __attribute__ ((unused)) __typeof__(_GLOBAL_0_qs_I) *_GLOBAL_qs_20_A[NUM_STACKS];   

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
# 391 "openbsd3/uvm/uvm_map.h" 2


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






typedef  struct vm_map   _GLOBAL_114_T; extern  _GLOBAL_114_T  * global_exec_map[NUM_STACKS];    
typedef  struct vm_map   _GLOBAL_115_T; extern  _GLOBAL_115_T  * global_kernel_map[NUM_STACKS];    
typedef  struct vm_map   _GLOBAL_116_T; extern  _GLOBAL_116_T  * global_kmem_map[NUM_STACKS];    
typedef  struct vm_map   _GLOBAL_117_T; extern  _GLOBAL_117_T  * global_mb_map[NUM_STACKS];    
typedef  struct vm_map   _GLOBAL_118_T; extern  _GLOBAL_118_T  * global_phys_map[NUM_STACKS];    
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
typedef  int  _GLOBAL_119_T; extern  _GLOBAL_119_T  global_nkmempages[NUM_STACKS];   
# 54 "openbsd3/sys/sysctl.h" 2
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

typedef  int   ( *_GLOBAL_121_T  )  ( int  *  ) ; extern  _GLOBAL_121_T global_cpu_cpuspeed[NUM_STACKS];    
typedef  int   ( *_GLOBAL_123_T  )  ( int  ) ; extern  _GLOBAL_123_T global_cpu_setperf[NUM_STACKS];   

int bpf_sysctl(int *, u_int, void *, size_t *, void *, size_t);

void sysctl_init(void);
# 38 "openbsd3/crypto/cryptodev.c" 2
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
typedef  struct filelist   _GLOBAL_124_T; extern  _GLOBAL_124_T  global_filehead[NUM_STACKS];    
typedef  int  _GLOBAL_125_T; extern  _GLOBAL_125_T  global_maxfiles[NUM_STACKS];   
typedef  int  _GLOBAL_126_T; extern  _GLOBAL_126_T  global_nfiles[NUM_STACKS];   
typedef  struct fileops   _GLOBAL_127_T; extern  _GLOBAL_127_T  global_vnops[NUM_STACKS];    

int dofileread(struct proc *, int, struct file *, void *, size_t,
            off_t *, register_t *);
int dofilewrite(struct proc *, int, struct file *, const void *,
            size_t, off_t *, register_t *);
# 39 "openbsd3/crypto/cryptodev.c" 2
# 1 "openbsd3/sys/filedesc.h" 1
# 35 "openbsd3/sys/filedesc.h"
# 1 "openbsd3/sys/rwlock.h" 1
# 72 "openbsd3/sys/rwlock.h"
struct proc;

struct rwlock {
 volatile unsigned long rwl_owner;
};
# 90 "openbsd3/sys/rwlock.h"
void rw_init(struct rwlock *);

void rw_enter_read(struct rwlock *);
void rw_enter_write(struct rwlock *, struct proc *);
void rw_exit_read(struct rwlock *);
void rw_exit_write(struct rwlock *);






void rw_enter_wait(struct rwlock *, struct proc *, int);
void rw_exit_waiters(struct rwlock *, unsigned long);
# 36 "openbsd3/sys/filedesc.h" 2
# 59 "openbsd3/sys/filedesc.h"
struct filedesc {
 struct file **fd_ofiles;
 char *fd_ofileflags;
 struct vnode *fd_cdir;
 struct vnode *fd_rdir;
 int fd_nfiles;
 u_int *fd_himap;
 u_int *fd_lomap;
 int fd_lastfile;
 int fd_freefile;
 u_short fd_cmask;
 u_short fd_refcnt;
 struct rwlock fd_lock;

 int fd_knlistsize;
 struct klist *fd_knlist;
 u_long fd_knhashmask;
 struct klist *fd_knhash;
};





struct filedesc0 {
 struct filedesc fd_fd;




 struct file *fd_dfiles[20];
 char fd_dfileflags[20];




 u_int fd_dhimap[32 >> 5];
 u_int fd_dlomap[32];
};
# 113 "openbsd3/sys/filedesc.h"
void filedesc_init(void);
int dupfdopen(struct filedesc *fdp, int indx, int dfd, int mode,
     int error);
int fdalloc(struct proc *p, int want, int *result);
void fdexpand(struct proc *);
int falloc(struct proc *p, struct file **resultfp, int *resultfd);
struct filedesc *fdinit(struct proc *p);
struct filedesc *fdshare(struct proc *p);
struct filedesc *fdcopy(struct proc *p);
void fdfree(struct proc *p);
int fdrelease(struct proc *p, int);
void fdremove(struct filedesc *, int);
void fdcloseexec(struct proc *);
struct file *fd_getfile(struct filedesc *, int fd);

int closef(struct file *, struct proc *);
int getsock(struct filedesc *, int, struct file **);
# 40 "openbsd3/crypto/cryptodev.c" 2
# 1 "openbsd3/sys/errno.h" 1
# 41 "openbsd3/crypto/cryptodev.c" 2
# 1 "openbsd3/sys/md5k.h" 1
# 30 "openbsd3/sys/md5k.h"
typedef void *POINTER;


typedef u_int16_t UINT2;


typedef u_int32_t UINT4;


typedef struct {
 UINT4 state[4];
 UINT4 count[2];
 u_int8_t buffer[64];
} MD5_CTX;



void MD5Init(MD5_CTX *);
void MD5Update(MD5_CTX *, unsigned char *, unsigned int);
void MD5Final(unsigned char [16], MD5_CTX *);
# 42 "openbsd3/crypto/cryptodev.c" 2
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


typedef  struct rndstats   _GLOBAL_128_T; extern  _GLOBAL_128_T  global_rndstats[NUM_STACKS];    
# 86 "openbsd3/dev/rndvar.h"
void enqueue_randomness(int, int);
void get_random_bytes(void *, size_t);
void arc4random_bytes(void *, size_t);
u_int32_t arc4random(void);
# 43 "openbsd3/crypto/cryptodev.c" 2
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



typedef  struct bdevsw   _GLOBAL_129_T; extern  _GLOBAL_129_T  _GLOBAL_0_bdevsw_I [ ] ; extern  _GLOBAL_129_T  _GLOBAL_1_bdevsw_I [ ] ; extern  _GLOBAL_129_T  _GLOBAL_2_bdevsw_I [ ] ; extern  _GLOBAL_129_T  _GLOBAL_3_bdevsw_I [ ] ; extern  _GLOBAL_129_T  _GLOBAL_4_bdevsw_I [ ] ; extern  _GLOBAL_129_T  _GLOBAL_5_bdevsw_I [ ] ; extern  _GLOBAL_129_T  _GLOBAL_6_bdevsw_I [ ] ; extern  _GLOBAL_129_T  _GLOBAL_7_bdevsw_I [ ] ; extern  _GLOBAL_129_T  _GLOBAL_8_bdevsw_I [ ] ; extern  _GLOBAL_129_T  _GLOBAL_9_bdevsw_I [ ] ; extern  _GLOBAL_129_T  _GLOBAL_10_bdevsw_I [ ] ; extern  _GLOBAL_129_T  _GLOBAL_11_bdevsw_I [ ] ; extern  _GLOBAL_129_T  _GLOBAL_12_bdevsw_I [ ] ; extern  _GLOBAL_129_T  _GLOBAL_13_bdevsw_I [ ] ; extern  _GLOBAL_129_T  _GLOBAL_14_bdevsw_I [ ] ; extern  _GLOBAL_129_T  _GLOBAL_15_bdevsw_I [ ] ; extern  _GLOBAL_129_T  _GLOBAL_16_bdevsw_I [ ] ; extern  _GLOBAL_129_T  _GLOBAL_17_bdevsw_I [ ] ; extern  _GLOBAL_129_T  _GLOBAL_18_bdevsw_I [ ] ; extern  _GLOBAL_129_T  _GLOBAL_19_bdevsw_I [ ] ; extern  _GLOBAL_129_T  _GLOBAL_20_bdevsw_I [ ] ; extern  _GLOBAL_129_T  _GLOBAL_21_bdevsw_I [ ] ; extern  _GLOBAL_129_T  _GLOBAL_22_bdevsw_I [ ] ; extern  _GLOBAL_129_T  _GLOBAL_23_bdevsw_I [ ] ; extern  _GLOBAL_129_T  _GLOBAL_24_bdevsw_I [ ] ; extern  _GLOBAL_129_T  _GLOBAL_25_bdevsw_I [ ] ; extern  _GLOBAL_129_T  _GLOBAL_26_bdevsw_I [ ] ; extern  _GLOBAL_129_T  _GLOBAL_27_bdevsw_I [ ] ; extern  _GLOBAL_129_T  _GLOBAL_28_bdevsw_I [ ] ; extern  _GLOBAL_129_T  _GLOBAL_29_bdevsw_I [ ] ; extern  _GLOBAL_129_T  _GLOBAL_30_bdevsw_I [ ] ; extern  _GLOBAL_129_T  _GLOBAL_31_bdevsw_I [ ] ; extern  _GLOBAL_129_T  _GLOBAL_32_bdevsw_I [ ] ; extern  _GLOBAL_129_T  _GLOBAL_33_bdevsw_I [ ] ; extern  _GLOBAL_129_T  _GLOBAL_34_bdevsw_I [ ] ; extern  _GLOBAL_129_T  _GLOBAL_35_bdevsw_I [ ] ; extern  _GLOBAL_129_T  _GLOBAL_36_bdevsw_I [ ] ; extern  _GLOBAL_129_T  _GLOBAL_37_bdevsw_I [ ] ; extern  _GLOBAL_129_T  _GLOBAL_38_bdevsw_I [ ] ; extern  _GLOBAL_129_T  _GLOBAL_39_bdevsw_I [ ] ; extern  _GLOBAL_129_T  _GLOBAL_40_bdevsw_I [ ] ; extern  _GLOBAL_129_T  _GLOBAL_41_bdevsw_I [ ] ; extern  _GLOBAL_129_T  _GLOBAL_42_bdevsw_I [ ] ; extern  _GLOBAL_129_T  _GLOBAL_43_bdevsw_I [ ] ; extern  _GLOBAL_129_T  _GLOBAL_44_bdevsw_I [ ] ; extern  _GLOBAL_129_T  _GLOBAL_45_bdevsw_I [ ] ; extern  _GLOBAL_129_T  _GLOBAL_46_bdevsw_I [ ] ; extern  _GLOBAL_129_T  _GLOBAL_47_bdevsw_I [ ] ; extern  _GLOBAL_129_T  _GLOBAL_48_bdevsw_I [ ] ; extern  _GLOBAL_129_T  _GLOBAL_49_bdevsw_I [ ] ; static __attribute__ ((unused)) __typeof__(_GLOBAL_0_bdevsw_I) *_GLOBAL_bdevsw_21_A[NUM_STACKS];   
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



typedef  struct cdevsw   _GLOBAL_130_T; extern  _GLOBAL_130_T  _GLOBAL_0_cdevsw_I [ ] ; extern  _GLOBAL_130_T  _GLOBAL_1_cdevsw_I [ ] ; extern  _GLOBAL_130_T  _GLOBAL_2_cdevsw_I [ ] ; extern  _GLOBAL_130_T  _GLOBAL_3_cdevsw_I [ ] ; extern  _GLOBAL_130_T  _GLOBAL_4_cdevsw_I [ ] ; extern  _GLOBAL_130_T  _GLOBAL_5_cdevsw_I [ ] ; extern  _GLOBAL_130_T  _GLOBAL_6_cdevsw_I [ ] ; extern  _GLOBAL_130_T  _GLOBAL_7_cdevsw_I [ ] ; extern  _GLOBAL_130_T  _GLOBAL_8_cdevsw_I [ ] ; extern  _GLOBAL_130_T  _GLOBAL_9_cdevsw_I [ ] ; extern  _GLOBAL_130_T  _GLOBAL_10_cdevsw_I [ ] ; extern  _GLOBAL_130_T  _GLOBAL_11_cdevsw_I [ ] ; extern  _GLOBAL_130_T  _GLOBAL_12_cdevsw_I [ ] ; extern  _GLOBAL_130_T  _GLOBAL_13_cdevsw_I [ ] ; extern  _GLOBAL_130_T  _GLOBAL_14_cdevsw_I [ ] ; extern  _GLOBAL_130_T  _GLOBAL_15_cdevsw_I [ ] ; extern  _GLOBAL_130_T  _GLOBAL_16_cdevsw_I [ ] ; extern  _GLOBAL_130_T  _GLOBAL_17_cdevsw_I [ ] ; extern  _GLOBAL_130_T  _GLOBAL_18_cdevsw_I [ ] ; extern  _GLOBAL_130_T  _GLOBAL_19_cdevsw_I [ ] ; extern  _GLOBAL_130_T  _GLOBAL_20_cdevsw_I [ ] ; extern  _GLOBAL_130_T  _GLOBAL_21_cdevsw_I [ ] ; extern  _GLOBAL_130_T  _GLOBAL_22_cdevsw_I [ ] ; extern  _GLOBAL_130_T  _GLOBAL_23_cdevsw_I [ ] ; extern  _GLOBAL_130_T  _GLOBAL_24_cdevsw_I [ ] ; extern  _GLOBAL_130_T  _GLOBAL_25_cdevsw_I [ ] ; extern  _GLOBAL_130_T  _GLOBAL_26_cdevsw_I [ ] ; extern  _GLOBAL_130_T  _GLOBAL_27_cdevsw_I [ ] ; extern  _GLOBAL_130_T  _GLOBAL_28_cdevsw_I [ ] ; extern  _GLOBAL_130_T  _GLOBAL_29_cdevsw_I [ ] ; extern  _GLOBAL_130_T  _GLOBAL_30_cdevsw_I [ ] ; extern  _GLOBAL_130_T  _GLOBAL_31_cdevsw_I [ ] ; extern  _GLOBAL_130_T  _GLOBAL_32_cdevsw_I [ ] ; extern  _GLOBAL_130_T  _GLOBAL_33_cdevsw_I [ ] ; extern  _GLOBAL_130_T  _GLOBAL_34_cdevsw_I [ ] ; extern  _GLOBAL_130_T  _GLOBAL_35_cdevsw_I [ ] ; extern  _GLOBAL_130_T  _GLOBAL_36_cdevsw_I [ ] ; extern  _GLOBAL_130_T  _GLOBAL_37_cdevsw_I [ ] ; extern  _GLOBAL_130_T  _GLOBAL_38_cdevsw_I [ ] ; extern  _GLOBAL_130_T  _GLOBAL_39_cdevsw_I [ ] ; extern  _GLOBAL_130_T  _GLOBAL_40_cdevsw_I [ ] ; extern  _GLOBAL_130_T  _GLOBAL_41_cdevsw_I [ ] ; extern  _GLOBAL_130_T  _GLOBAL_42_cdevsw_I [ ] ; extern  _GLOBAL_130_T  _GLOBAL_43_cdevsw_I [ ] ; extern  _GLOBAL_130_T  _GLOBAL_44_cdevsw_I [ ] ; extern  _GLOBAL_130_T  _GLOBAL_45_cdevsw_I [ ] ; extern  _GLOBAL_130_T  _GLOBAL_46_cdevsw_I [ ] ; extern  _GLOBAL_130_T  _GLOBAL_47_cdevsw_I [ ] ; extern  _GLOBAL_130_T  _GLOBAL_48_cdevsw_I [ ] ; extern  _GLOBAL_130_T  _GLOBAL_49_cdevsw_I [ ] ; static __attribute__ ((unused)) __typeof__(_GLOBAL_0_cdevsw_I) *_GLOBAL_cdevsw_22_A[NUM_STACKS];   
# 394 "openbsd3/sys/conf.h"
void randomattach(void);
# 470 "openbsd3/sys/conf.h"
typedef  char  _GLOBAL_131_T; extern  _GLOBAL_131_T  _GLOBAL_0_devopn_I [ ] ; extern  _GLOBAL_131_T  _GLOBAL_1_devopn_I [ ] ; extern  _GLOBAL_131_T  _GLOBAL_2_devopn_I [ ] ; extern  _GLOBAL_131_T  _GLOBAL_3_devopn_I [ ] ; extern  _GLOBAL_131_T  _GLOBAL_4_devopn_I [ ] ; extern  _GLOBAL_131_T  _GLOBAL_5_devopn_I [ ] ; extern  _GLOBAL_131_T  _GLOBAL_6_devopn_I [ ] ; extern  _GLOBAL_131_T  _GLOBAL_7_devopn_I [ ] ; extern  _GLOBAL_131_T  _GLOBAL_8_devopn_I [ ] ; extern  _GLOBAL_131_T  _GLOBAL_9_devopn_I [ ] ; extern  _GLOBAL_131_T  _GLOBAL_10_devopn_I [ ] ; extern  _GLOBAL_131_T  _GLOBAL_11_devopn_I [ ] ; extern  _GLOBAL_131_T  _GLOBAL_12_devopn_I [ ] ; extern  _GLOBAL_131_T  _GLOBAL_13_devopn_I [ ] ; extern  _GLOBAL_131_T  _GLOBAL_14_devopn_I [ ] ; extern  _GLOBAL_131_T  _GLOBAL_15_devopn_I [ ] ; extern  _GLOBAL_131_T  _GLOBAL_16_devopn_I [ ] ; extern  _GLOBAL_131_T  _GLOBAL_17_devopn_I [ ] ; extern  _GLOBAL_131_T  _GLOBAL_18_devopn_I [ ] ; extern  _GLOBAL_131_T  _GLOBAL_19_devopn_I [ ] ; extern  _GLOBAL_131_T  _GLOBAL_20_devopn_I [ ] ; extern  _GLOBAL_131_T  _GLOBAL_21_devopn_I [ ] ; extern  _GLOBAL_131_T  _GLOBAL_22_devopn_I [ ] ; extern  _GLOBAL_131_T  _GLOBAL_23_devopn_I [ ] ; extern  _GLOBAL_131_T  _GLOBAL_24_devopn_I [ ] ; extern  _GLOBAL_131_T  _GLOBAL_25_devopn_I [ ] ; extern  _GLOBAL_131_T  _GLOBAL_26_devopn_I [ ] ; extern  _GLOBAL_131_T  _GLOBAL_27_devopn_I [ ] ; extern  _GLOBAL_131_T  _GLOBAL_28_devopn_I [ ] ; extern  _GLOBAL_131_T  _GLOBAL_29_devopn_I [ ] ; extern  _GLOBAL_131_T  _GLOBAL_30_devopn_I [ ] ; extern  _GLOBAL_131_T  _GLOBAL_31_devopn_I [ ] ; extern  _GLOBAL_131_T  _GLOBAL_32_devopn_I [ ] ; extern  _GLOBAL_131_T  _GLOBAL_33_devopn_I [ ] ; extern  _GLOBAL_131_T  _GLOBAL_34_devopn_I [ ] ; extern  _GLOBAL_131_T  _GLOBAL_35_devopn_I [ ] ; extern  _GLOBAL_131_T  _GLOBAL_36_devopn_I [ ] ; extern  _GLOBAL_131_T  _GLOBAL_37_devopn_I [ ] ; extern  _GLOBAL_131_T  _GLOBAL_38_devopn_I [ ] ; extern  _GLOBAL_131_T  _GLOBAL_39_devopn_I [ ] ; extern  _GLOBAL_131_T  _GLOBAL_40_devopn_I [ ] ; extern  _GLOBAL_131_T  _GLOBAL_41_devopn_I [ ] ; extern  _GLOBAL_131_T  _GLOBAL_42_devopn_I [ ] ; extern  _GLOBAL_131_T  _GLOBAL_43_devopn_I [ ] ; extern  _GLOBAL_131_T  _GLOBAL_44_devopn_I [ ] ; extern  _GLOBAL_131_T  _GLOBAL_45_devopn_I [ ] ; extern  _GLOBAL_131_T  _GLOBAL_46_devopn_I [ ] ; extern  _GLOBAL_131_T  _GLOBAL_47_devopn_I [ ] ; extern  _GLOBAL_131_T  _GLOBAL_48_devopn_I [ ] ; extern  _GLOBAL_131_T  _GLOBAL_49_devopn_I [ ] ; static __attribute__ ((unused)) __typeof__(_GLOBAL_0_devopn_I) *_GLOBAL_devopn_23_A[NUM_STACKS];extern  _GLOBAL_131_T  _GLOBAL_0_devio_I [ ] ; extern  _GLOBAL_131_T  _GLOBAL_1_devio_I [ ] ; extern  _GLOBAL_131_T  _GLOBAL_2_devio_I [ ] ; extern  _GLOBAL_131_T  _GLOBAL_3_devio_I [ ] ; extern  _GLOBAL_131_T  _GLOBAL_4_devio_I [ ] ; extern  _GLOBAL_131_T  _GLOBAL_5_devio_I [ ] ; extern  _GLOBAL_131_T  _GLOBAL_6_devio_I [ ] ; extern  _GLOBAL_131_T  _GLOBAL_7_devio_I [ ] ; extern  _GLOBAL_131_T  _GLOBAL_8_devio_I [ ] ; extern  _GLOBAL_131_T  _GLOBAL_9_devio_I [ ] ; extern  _GLOBAL_131_T  _GLOBAL_10_devio_I [ ] ; extern  _GLOBAL_131_T  _GLOBAL_11_devio_I [ ] ; extern  _GLOBAL_131_T  _GLOBAL_12_devio_I [ ] ; extern  _GLOBAL_131_T  _GLOBAL_13_devio_I [ ] ; extern  _GLOBAL_131_T  _GLOBAL_14_devio_I [ ] ; extern  _GLOBAL_131_T  _GLOBAL_15_devio_I [ ] ; extern  _GLOBAL_131_T  _GLOBAL_16_devio_I [ ] ; extern  _GLOBAL_131_T  _GLOBAL_17_devio_I [ ] ; extern  _GLOBAL_131_T  _GLOBAL_18_devio_I [ ] ; extern  _GLOBAL_131_T  _GLOBAL_19_devio_I [ ] ; extern  _GLOBAL_131_T  _GLOBAL_20_devio_I [ ] ; extern  _GLOBAL_131_T  _GLOBAL_21_devio_I [ ] ; extern  _GLOBAL_131_T  _GLOBAL_22_devio_I [ ] ; extern  _GLOBAL_131_T  _GLOBAL_23_devio_I [ ] ; extern  _GLOBAL_131_T  _GLOBAL_24_devio_I [ ] ; extern  _GLOBAL_131_T  _GLOBAL_25_devio_I [ ] ; extern  _GLOBAL_131_T  _GLOBAL_26_devio_I [ ] ; extern  _GLOBAL_131_T  _GLOBAL_27_devio_I [ ] ; extern  _GLOBAL_131_T  _GLOBAL_28_devio_I [ ] ; extern  _GLOBAL_131_T  _GLOBAL_29_devio_I [ ] ; extern  _GLOBAL_131_T  _GLOBAL_30_devio_I [ ] ; extern  _GLOBAL_131_T  _GLOBAL_31_devio_I [ ] ; extern  _GLOBAL_131_T  _GLOBAL_32_devio_I [ ] ; extern  _GLOBAL_131_T  _GLOBAL_33_devio_I [ ] ; extern  _GLOBAL_131_T  _GLOBAL_34_devio_I [ ] ; extern  _GLOBAL_131_T  _GLOBAL_35_devio_I [ ] ; extern  _GLOBAL_131_T  _GLOBAL_36_devio_I [ ] ; extern  _GLOBAL_131_T  _GLOBAL_37_devio_I [ ] ; extern  _GLOBAL_131_T  _GLOBAL_38_devio_I [ ] ; extern  _GLOBAL_131_T  _GLOBAL_39_devio_I [ ] ; extern  _GLOBAL_131_T  _GLOBAL_40_devio_I [ ] ; extern  _GLOBAL_131_T  _GLOBAL_41_devio_I [ ] ; extern  _GLOBAL_131_T  _GLOBAL_42_devio_I [ ] ; extern  _GLOBAL_131_T  _GLOBAL_43_devio_I [ ] ; extern  _GLOBAL_131_T  _GLOBAL_44_devio_I [ ] ; extern  _GLOBAL_131_T  _GLOBAL_45_devio_I [ ] ; extern  _GLOBAL_131_T  _GLOBAL_46_devio_I [ ] ; extern  _GLOBAL_131_T  _GLOBAL_47_devio_I [ ] ; extern  _GLOBAL_131_T  _GLOBAL_48_devio_I [ ] ; extern  _GLOBAL_131_T  _GLOBAL_49_devio_I [ ] ; static __attribute__ ((unused)) __typeof__(_GLOBAL_0_devio_I) *_GLOBAL_devio_24_A[NUM_STACKS];extern  _GLOBAL_131_T  _GLOBAL_0_devwait_I [ ] ; extern  _GLOBAL_131_T  _GLOBAL_1_devwait_I [ ] ; extern  _GLOBAL_131_T  _GLOBAL_2_devwait_I [ ] ; extern  _GLOBAL_131_T  _GLOBAL_3_devwait_I [ ] ; extern  _GLOBAL_131_T  _GLOBAL_4_devwait_I [ ] ; extern  _GLOBAL_131_T  _GLOBAL_5_devwait_I [ ] ; extern  _GLOBAL_131_T  _GLOBAL_6_devwait_I [ ] ; extern  _GLOBAL_131_T  _GLOBAL_7_devwait_I [ ] ; extern  _GLOBAL_131_T  _GLOBAL_8_devwait_I [ ] ; extern  _GLOBAL_131_T  _GLOBAL_9_devwait_I [ ] ; extern  _GLOBAL_131_T  _GLOBAL_10_devwait_I [ ] ; extern  _GLOBAL_131_T  _GLOBAL_11_devwait_I [ ] ; extern  _GLOBAL_131_T  _GLOBAL_12_devwait_I [ ] ; extern  _GLOBAL_131_T  _GLOBAL_13_devwait_I [ ] ; extern  _GLOBAL_131_T  _GLOBAL_14_devwait_I [ ] ; extern  _GLOBAL_131_T  _GLOBAL_15_devwait_I [ ] ; extern  _GLOBAL_131_T  _GLOBAL_16_devwait_I [ ] ; extern  _GLOBAL_131_T  _GLOBAL_17_devwait_I [ ] ; extern  _GLOBAL_131_T  _GLOBAL_18_devwait_I [ ] ; extern  _GLOBAL_131_T  _GLOBAL_19_devwait_I [ ] ; extern  _GLOBAL_131_T  _GLOBAL_20_devwait_I [ ] ; extern  _GLOBAL_131_T  _GLOBAL_21_devwait_I [ ] ; extern  _GLOBAL_131_T  _GLOBAL_22_devwait_I [ ] ; extern  _GLOBAL_131_T  _GLOBAL_23_devwait_I [ ] ; extern  _GLOBAL_131_T  _GLOBAL_24_devwait_I [ ] ; extern  _GLOBAL_131_T  _GLOBAL_25_devwait_I [ ] ; extern  _GLOBAL_131_T  _GLOBAL_26_devwait_I [ ] ; extern  _GLOBAL_131_T  _GLOBAL_27_devwait_I [ ] ; extern  _GLOBAL_131_T  _GLOBAL_28_devwait_I [ ] ; extern  _GLOBAL_131_T  _GLOBAL_29_devwait_I [ ] ; extern  _GLOBAL_131_T  _GLOBAL_30_devwait_I [ ] ; extern  _GLOBAL_131_T  _GLOBAL_31_devwait_I [ ] ; extern  _GLOBAL_131_T  _GLOBAL_32_devwait_I [ ] ; extern  _GLOBAL_131_T  _GLOBAL_33_devwait_I [ ] ; extern  _GLOBAL_131_T  _GLOBAL_34_devwait_I [ ] ; extern  _GLOBAL_131_T  _GLOBAL_35_devwait_I [ ] ; extern  _GLOBAL_131_T  _GLOBAL_36_devwait_I [ ] ; extern  _GLOBAL_131_T  _GLOBAL_37_devwait_I [ ] ; extern  _GLOBAL_131_T  _GLOBAL_38_devwait_I [ ] ; extern  _GLOBAL_131_T  _GLOBAL_39_devwait_I [ ] ; extern  _GLOBAL_131_T  _GLOBAL_40_devwait_I [ ] ; extern  _GLOBAL_131_T  _GLOBAL_41_devwait_I [ ] ; extern  _GLOBAL_131_T  _GLOBAL_42_devwait_I [ ] ; extern  _GLOBAL_131_T  _GLOBAL_43_devwait_I [ ] ; extern  _GLOBAL_131_T  _GLOBAL_44_devwait_I [ ] ; extern  _GLOBAL_131_T  _GLOBAL_45_devwait_I [ ] ; extern  _GLOBAL_131_T  _GLOBAL_46_devwait_I [ ] ; extern  _GLOBAL_131_T  _GLOBAL_47_devwait_I [ ] ; extern  _GLOBAL_131_T  _GLOBAL_48_devwait_I [ ] ; extern  _GLOBAL_131_T  _GLOBAL_49_devwait_I [ ] ; static __attribute__ ((unused)) __typeof__(_GLOBAL_0_devwait_I) *_GLOBAL_devwait_25_A[NUM_STACKS];extern  _GLOBAL_131_T  _GLOBAL_0_devin_I [ ] ; extern  _GLOBAL_131_T  _GLOBAL_1_devin_I [ ] ; extern  _GLOBAL_131_T  _GLOBAL_2_devin_I [ ] ; extern  _GLOBAL_131_T  _GLOBAL_3_devin_I [ ] ; extern  _GLOBAL_131_T  _GLOBAL_4_devin_I [ ] ; extern  _GLOBAL_131_T  _GLOBAL_5_devin_I [ ] ; extern  _GLOBAL_131_T  _GLOBAL_6_devin_I [ ] ; extern  _GLOBAL_131_T  _GLOBAL_7_devin_I [ ] ; extern  _GLOBAL_131_T  _GLOBAL_8_devin_I [ ] ; extern  _GLOBAL_131_T  _GLOBAL_9_devin_I [ ] ; extern  _GLOBAL_131_T  _GLOBAL_10_devin_I [ ] ; extern  _GLOBAL_131_T  _GLOBAL_11_devin_I [ ] ; extern  _GLOBAL_131_T  _GLOBAL_12_devin_I [ ] ; extern  _GLOBAL_131_T  _GLOBAL_13_devin_I [ ] ; extern  _GLOBAL_131_T  _GLOBAL_14_devin_I [ ] ; extern  _GLOBAL_131_T  _GLOBAL_15_devin_I [ ] ; extern  _GLOBAL_131_T  _GLOBAL_16_devin_I [ ] ; extern  _GLOBAL_131_T  _GLOBAL_17_devin_I [ ] ; extern  _GLOBAL_131_T  _GLOBAL_18_devin_I [ ] ; extern  _GLOBAL_131_T  _GLOBAL_19_devin_I [ ] ; extern  _GLOBAL_131_T  _GLOBAL_20_devin_I [ ] ; extern  _GLOBAL_131_T  _GLOBAL_21_devin_I [ ] ; extern  _GLOBAL_131_T  _GLOBAL_22_devin_I [ ] ; extern  _GLOBAL_131_T  _GLOBAL_23_devin_I [ ] ; extern  _GLOBAL_131_T  _GLOBAL_24_devin_I [ ] ; extern  _GLOBAL_131_T  _GLOBAL_25_devin_I [ ] ; extern  _GLOBAL_131_T  _GLOBAL_26_devin_I [ ] ; extern  _GLOBAL_131_T  _GLOBAL_27_devin_I [ ] ; extern  _GLOBAL_131_T  _GLOBAL_28_devin_I [ ] ; extern  _GLOBAL_131_T  _GLOBAL_29_devin_I [ ] ; extern  _GLOBAL_131_T  _GLOBAL_30_devin_I [ ] ; extern  _GLOBAL_131_T  _GLOBAL_31_devin_I [ ] ; extern  _GLOBAL_131_T  _GLOBAL_32_devin_I [ ] ; extern  _GLOBAL_131_T  _GLOBAL_33_devin_I [ ] ; extern  _GLOBAL_131_T  _GLOBAL_34_devin_I [ ] ; extern  _GLOBAL_131_T  _GLOBAL_35_devin_I [ ] ; extern  _GLOBAL_131_T  _GLOBAL_36_devin_I [ ] ; extern  _GLOBAL_131_T  _GLOBAL_37_devin_I [ ] ; extern  _GLOBAL_131_T  _GLOBAL_38_devin_I [ ] ; extern  _GLOBAL_131_T  _GLOBAL_39_devin_I [ ] ; extern  _GLOBAL_131_T  _GLOBAL_40_devin_I [ ] ; extern  _GLOBAL_131_T  _GLOBAL_41_devin_I [ ] ; extern  _GLOBAL_131_T  _GLOBAL_42_devin_I [ ] ; extern  _GLOBAL_131_T  _GLOBAL_43_devin_I [ ] ; extern  _GLOBAL_131_T  _GLOBAL_44_devin_I [ ] ; extern  _GLOBAL_131_T  _GLOBAL_45_devin_I [ ] ; extern  _GLOBAL_131_T  _GLOBAL_46_devin_I [ ] ; extern  _GLOBAL_131_T  _GLOBAL_47_devin_I [ ] ; extern  _GLOBAL_131_T  _GLOBAL_48_devin_I [ ] ; extern  _GLOBAL_131_T  _GLOBAL_49_devin_I [ ] ; static __attribute__ ((unused)) __typeof__(_GLOBAL_0_devin_I) *_GLOBAL_devin_26_A[NUM_STACKS];extern  _GLOBAL_131_T  _GLOBAL_0_devout_I [ ] ; extern  _GLOBAL_131_T  _GLOBAL_1_devout_I [ ] ; extern  _GLOBAL_131_T  _GLOBAL_2_devout_I [ ] ; extern  _GLOBAL_131_T  _GLOBAL_3_devout_I [ ] ; extern  _GLOBAL_131_T  _GLOBAL_4_devout_I [ ] ; extern  _GLOBAL_131_T  _GLOBAL_5_devout_I [ ] ; extern  _GLOBAL_131_T  _GLOBAL_6_devout_I [ ] ; extern  _GLOBAL_131_T  _GLOBAL_7_devout_I [ ] ; extern  _GLOBAL_131_T  _GLOBAL_8_devout_I [ ] ; extern  _GLOBAL_131_T  _GLOBAL_9_devout_I [ ] ; extern  _GLOBAL_131_T  _GLOBAL_10_devout_I [ ] ; extern  _GLOBAL_131_T  _GLOBAL_11_devout_I [ ] ; extern  _GLOBAL_131_T  _GLOBAL_12_devout_I [ ] ; extern  _GLOBAL_131_T  _GLOBAL_13_devout_I [ ] ; extern  _GLOBAL_131_T  _GLOBAL_14_devout_I [ ] ; extern  _GLOBAL_131_T  _GLOBAL_15_devout_I [ ] ; extern  _GLOBAL_131_T  _GLOBAL_16_devout_I [ ] ; extern  _GLOBAL_131_T  _GLOBAL_17_devout_I [ ] ; extern  _GLOBAL_131_T  _GLOBAL_18_devout_I [ ] ; extern  _GLOBAL_131_T  _GLOBAL_19_devout_I [ ] ; extern  _GLOBAL_131_T  _GLOBAL_20_devout_I [ ] ; extern  _GLOBAL_131_T  _GLOBAL_21_devout_I [ ] ; extern  _GLOBAL_131_T  _GLOBAL_22_devout_I [ ] ; extern  _GLOBAL_131_T  _GLOBAL_23_devout_I [ ] ; extern  _GLOBAL_131_T  _GLOBAL_24_devout_I [ ] ; extern  _GLOBAL_131_T  _GLOBAL_25_devout_I [ ] ; extern  _GLOBAL_131_T  _GLOBAL_26_devout_I [ ] ; extern  _GLOBAL_131_T  _GLOBAL_27_devout_I [ ] ; extern  _GLOBAL_131_T  _GLOBAL_28_devout_I [ ] ; extern  _GLOBAL_131_T  _GLOBAL_29_devout_I [ ] ; extern  _GLOBAL_131_T  _GLOBAL_30_devout_I [ ] ; extern  _GLOBAL_131_T  _GLOBAL_31_devout_I [ ] ; extern  _GLOBAL_131_T  _GLOBAL_32_devout_I [ ] ; extern  _GLOBAL_131_T  _GLOBAL_33_devout_I [ ] ; extern  _GLOBAL_131_T  _GLOBAL_34_devout_I [ ] ; extern  _GLOBAL_131_T  _GLOBAL_35_devout_I [ ] ; extern  _GLOBAL_131_T  _GLOBAL_36_devout_I [ ] ; extern  _GLOBAL_131_T  _GLOBAL_37_devout_I [ ] ; extern  _GLOBAL_131_T  _GLOBAL_38_devout_I [ ] ; extern  _GLOBAL_131_T  _GLOBAL_39_devout_I [ ] ; extern  _GLOBAL_131_T  _GLOBAL_40_devout_I [ ] ; extern  _GLOBAL_131_T  _GLOBAL_41_devout_I [ ] ; extern  _GLOBAL_131_T  _GLOBAL_42_devout_I [ ] ; extern  _GLOBAL_131_T  _GLOBAL_43_devout_I [ ] ; extern  _GLOBAL_131_T  _GLOBAL_44_devout_I [ ] ; extern  _GLOBAL_131_T  _GLOBAL_45_devout_I [ ] ; extern  _GLOBAL_131_T  _GLOBAL_46_devout_I [ ] ; extern  _GLOBAL_131_T  _GLOBAL_47_devout_I [ ] ; extern  _GLOBAL_131_T  _GLOBAL_48_devout_I [ ] ; extern  _GLOBAL_131_T  _GLOBAL_49_devout_I [ ] ; static __attribute__ ((unused)) __typeof__(_GLOBAL_0_devout_I) *_GLOBAL_devout_27_A[NUM_STACKS];      
typedef  char  _GLOBAL_132_T; extern  _GLOBAL_132_T  _GLOBAL_0_devioc_I [ ] ; extern  _GLOBAL_132_T  _GLOBAL_1_devioc_I [ ] ; extern  _GLOBAL_132_T  _GLOBAL_2_devioc_I [ ] ; extern  _GLOBAL_132_T  _GLOBAL_3_devioc_I [ ] ; extern  _GLOBAL_132_T  _GLOBAL_4_devioc_I [ ] ; extern  _GLOBAL_132_T  _GLOBAL_5_devioc_I [ ] ; extern  _GLOBAL_132_T  _GLOBAL_6_devioc_I [ ] ; extern  _GLOBAL_132_T  _GLOBAL_7_devioc_I [ ] ; extern  _GLOBAL_132_T  _GLOBAL_8_devioc_I [ ] ; extern  _GLOBAL_132_T  _GLOBAL_9_devioc_I [ ] ; extern  _GLOBAL_132_T  _GLOBAL_10_devioc_I [ ] ; extern  _GLOBAL_132_T  _GLOBAL_11_devioc_I [ ] ; extern  _GLOBAL_132_T  _GLOBAL_12_devioc_I [ ] ; extern  _GLOBAL_132_T  _GLOBAL_13_devioc_I [ ] ; extern  _GLOBAL_132_T  _GLOBAL_14_devioc_I [ ] ; extern  _GLOBAL_132_T  _GLOBAL_15_devioc_I [ ] ; extern  _GLOBAL_132_T  _GLOBAL_16_devioc_I [ ] ; extern  _GLOBAL_132_T  _GLOBAL_17_devioc_I [ ] ; extern  _GLOBAL_132_T  _GLOBAL_18_devioc_I [ ] ; extern  _GLOBAL_132_T  _GLOBAL_19_devioc_I [ ] ; extern  _GLOBAL_132_T  _GLOBAL_20_devioc_I [ ] ; extern  _GLOBAL_132_T  _GLOBAL_21_devioc_I [ ] ; extern  _GLOBAL_132_T  _GLOBAL_22_devioc_I [ ] ; extern  _GLOBAL_132_T  _GLOBAL_23_devioc_I [ ] ; extern  _GLOBAL_132_T  _GLOBAL_24_devioc_I [ ] ; extern  _GLOBAL_132_T  _GLOBAL_25_devioc_I [ ] ; extern  _GLOBAL_132_T  _GLOBAL_26_devioc_I [ ] ; extern  _GLOBAL_132_T  _GLOBAL_27_devioc_I [ ] ; extern  _GLOBAL_132_T  _GLOBAL_28_devioc_I [ ] ; extern  _GLOBAL_132_T  _GLOBAL_29_devioc_I [ ] ; extern  _GLOBAL_132_T  _GLOBAL_30_devioc_I [ ] ; extern  _GLOBAL_132_T  _GLOBAL_31_devioc_I [ ] ; extern  _GLOBAL_132_T  _GLOBAL_32_devioc_I [ ] ; extern  _GLOBAL_132_T  _GLOBAL_33_devioc_I [ ] ; extern  _GLOBAL_132_T  _GLOBAL_34_devioc_I [ ] ; extern  _GLOBAL_132_T  _GLOBAL_35_devioc_I [ ] ; extern  _GLOBAL_132_T  _GLOBAL_36_devioc_I [ ] ; extern  _GLOBAL_132_T  _GLOBAL_37_devioc_I [ ] ; extern  _GLOBAL_132_T  _GLOBAL_38_devioc_I [ ] ; extern  _GLOBAL_132_T  _GLOBAL_39_devioc_I [ ] ; extern  _GLOBAL_132_T  _GLOBAL_40_devioc_I [ ] ; extern  _GLOBAL_132_T  _GLOBAL_41_devioc_I [ ] ; extern  _GLOBAL_132_T  _GLOBAL_42_devioc_I [ ] ; extern  _GLOBAL_132_T  _GLOBAL_43_devioc_I [ ] ; extern  _GLOBAL_132_T  _GLOBAL_44_devioc_I [ ] ; extern  _GLOBAL_132_T  _GLOBAL_45_devioc_I [ ] ; extern  _GLOBAL_132_T  _GLOBAL_46_devioc_I [ ] ; extern  _GLOBAL_132_T  _GLOBAL_47_devioc_I [ ] ; extern  _GLOBAL_132_T  _GLOBAL_48_devioc_I [ ] ; extern  _GLOBAL_132_T  _GLOBAL_49_devioc_I [ ] ; static __attribute__ ((unused)) __typeof__(_GLOBAL_0_devioc_I) *_GLOBAL_devioc_28_A[NUM_STACKS];extern  _GLOBAL_132_T  _GLOBAL_0_devcls_I [ ] ; extern  _GLOBAL_132_T  _GLOBAL_1_devcls_I [ ] ; extern  _GLOBAL_132_T  _GLOBAL_2_devcls_I [ ] ; extern  _GLOBAL_132_T  _GLOBAL_3_devcls_I [ ] ; extern  _GLOBAL_132_T  _GLOBAL_4_devcls_I [ ] ; extern  _GLOBAL_132_T  _GLOBAL_5_devcls_I [ ] ; extern  _GLOBAL_132_T  _GLOBAL_6_devcls_I [ ] ; extern  _GLOBAL_132_T  _GLOBAL_7_devcls_I [ ] ; extern  _GLOBAL_132_T  _GLOBAL_8_devcls_I [ ] ; extern  _GLOBAL_132_T  _GLOBAL_9_devcls_I [ ] ; extern  _GLOBAL_132_T  _GLOBAL_10_devcls_I [ ] ; extern  _GLOBAL_132_T  _GLOBAL_11_devcls_I [ ] ; extern  _GLOBAL_132_T  _GLOBAL_12_devcls_I [ ] ; extern  _GLOBAL_132_T  _GLOBAL_13_devcls_I [ ] ; extern  _GLOBAL_132_T  _GLOBAL_14_devcls_I [ ] ; extern  _GLOBAL_132_T  _GLOBAL_15_devcls_I [ ] ; extern  _GLOBAL_132_T  _GLOBAL_16_devcls_I [ ] ; extern  _GLOBAL_132_T  _GLOBAL_17_devcls_I [ ] ; extern  _GLOBAL_132_T  _GLOBAL_18_devcls_I [ ] ; extern  _GLOBAL_132_T  _GLOBAL_19_devcls_I [ ] ; extern  _GLOBAL_132_T  _GLOBAL_20_devcls_I [ ] ; extern  _GLOBAL_132_T  _GLOBAL_21_devcls_I [ ] ; extern  _GLOBAL_132_T  _GLOBAL_22_devcls_I [ ] ; extern  _GLOBAL_132_T  _GLOBAL_23_devcls_I [ ] ; extern  _GLOBAL_132_T  _GLOBAL_24_devcls_I [ ] ; extern  _GLOBAL_132_T  _GLOBAL_25_devcls_I [ ] ; extern  _GLOBAL_132_T  _GLOBAL_26_devcls_I [ ] ; extern  _GLOBAL_132_T  _GLOBAL_27_devcls_I [ ] ; extern  _GLOBAL_132_T  _GLOBAL_28_devcls_I [ ] ; extern  _GLOBAL_132_T  _GLOBAL_29_devcls_I [ ] ; extern  _GLOBAL_132_T  _GLOBAL_30_devcls_I [ ] ; extern  _GLOBAL_132_T  _GLOBAL_31_devcls_I [ ] ; extern  _GLOBAL_132_T  _GLOBAL_32_devcls_I [ ] ; extern  _GLOBAL_132_T  _GLOBAL_33_devcls_I [ ] ; extern  _GLOBAL_132_T  _GLOBAL_34_devcls_I [ ] ; extern  _GLOBAL_132_T  _GLOBAL_35_devcls_I [ ] ; extern  _GLOBAL_132_T  _GLOBAL_36_devcls_I [ ] ; extern  _GLOBAL_132_T  _GLOBAL_37_devcls_I [ ] ; extern  _GLOBAL_132_T  _GLOBAL_38_devcls_I [ ] ; extern  _GLOBAL_132_T  _GLOBAL_39_devcls_I [ ] ; extern  _GLOBAL_132_T  _GLOBAL_40_devcls_I [ ] ; extern  _GLOBAL_132_T  _GLOBAL_41_devcls_I [ ] ; extern  _GLOBAL_132_T  _GLOBAL_42_devcls_I [ ] ; extern  _GLOBAL_132_T  _GLOBAL_43_devcls_I [ ] ; extern  _GLOBAL_132_T  _GLOBAL_44_devcls_I [ ] ; extern  _GLOBAL_132_T  _GLOBAL_45_devcls_I [ ] ; extern  _GLOBAL_132_T  _GLOBAL_46_devcls_I [ ] ; extern  _GLOBAL_132_T  _GLOBAL_47_devcls_I [ ] ; extern  _GLOBAL_132_T  _GLOBAL_48_devcls_I [ ] ; extern  _GLOBAL_132_T  _GLOBAL_49_devcls_I [ ] ; static __attribute__ ((unused)) __typeof__(_GLOBAL_0_devcls_I) *_GLOBAL_devcls_29_A[NUM_STACKS];   






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


typedef  struct linesw   _GLOBAL_133_T; extern  _GLOBAL_133_T  _GLOBAL_0_linesw_I [ ] ; extern  _GLOBAL_133_T  _GLOBAL_1_linesw_I [ ] ; extern  _GLOBAL_133_T  _GLOBAL_2_linesw_I [ ] ; extern  _GLOBAL_133_T  _GLOBAL_3_linesw_I [ ] ; extern  _GLOBAL_133_T  _GLOBAL_4_linesw_I [ ] ; extern  _GLOBAL_133_T  _GLOBAL_5_linesw_I [ ] ; extern  _GLOBAL_133_T  _GLOBAL_6_linesw_I [ ] ; extern  _GLOBAL_133_T  _GLOBAL_7_linesw_I [ ] ; extern  _GLOBAL_133_T  _GLOBAL_8_linesw_I [ ] ; extern  _GLOBAL_133_T  _GLOBAL_9_linesw_I [ ] ; extern  _GLOBAL_133_T  _GLOBAL_10_linesw_I [ ] ; extern  _GLOBAL_133_T  _GLOBAL_11_linesw_I [ ] ; extern  _GLOBAL_133_T  _GLOBAL_12_linesw_I [ ] ; extern  _GLOBAL_133_T  _GLOBAL_13_linesw_I [ ] ; extern  _GLOBAL_133_T  _GLOBAL_14_linesw_I [ ] ; extern  _GLOBAL_133_T  _GLOBAL_15_linesw_I [ ] ; extern  _GLOBAL_133_T  _GLOBAL_16_linesw_I [ ] ; extern  _GLOBAL_133_T  _GLOBAL_17_linesw_I [ ] ; extern  _GLOBAL_133_T  _GLOBAL_18_linesw_I [ ] ; extern  _GLOBAL_133_T  _GLOBAL_19_linesw_I [ ] ; extern  _GLOBAL_133_T  _GLOBAL_20_linesw_I [ ] ; extern  _GLOBAL_133_T  _GLOBAL_21_linesw_I [ ] ; extern  _GLOBAL_133_T  _GLOBAL_22_linesw_I [ ] ; extern  _GLOBAL_133_T  _GLOBAL_23_linesw_I [ ] ; extern  _GLOBAL_133_T  _GLOBAL_24_linesw_I [ ] ; extern  _GLOBAL_133_T  _GLOBAL_25_linesw_I [ ] ; extern  _GLOBAL_133_T  _GLOBAL_26_linesw_I [ ] ; extern  _GLOBAL_133_T  _GLOBAL_27_linesw_I [ ] ; extern  _GLOBAL_133_T  _GLOBAL_28_linesw_I [ ] ; extern  _GLOBAL_133_T  _GLOBAL_29_linesw_I [ ] ; extern  _GLOBAL_133_T  _GLOBAL_30_linesw_I [ ] ; extern  _GLOBAL_133_T  _GLOBAL_31_linesw_I [ ] ; extern  _GLOBAL_133_T  _GLOBAL_32_linesw_I [ ] ; extern  _GLOBAL_133_T  _GLOBAL_33_linesw_I [ ] ; extern  _GLOBAL_133_T  _GLOBAL_34_linesw_I [ ] ; extern  _GLOBAL_133_T  _GLOBAL_35_linesw_I [ ] ; extern  _GLOBAL_133_T  _GLOBAL_36_linesw_I [ ] ; extern  _GLOBAL_133_T  _GLOBAL_37_linesw_I [ ] ; extern  _GLOBAL_133_T  _GLOBAL_38_linesw_I [ ] ; extern  _GLOBAL_133_T  _GLOBAL_39_linesw_I [ ] ; extern  _GLOBAL_133_T  _GLOBAL_40_linesw_I [ ] ; extern  _GLOBAL_133_T  _GLOBAL_41_linesw_I [ ] ; extern  _GLOBAL_133_T  _GLOBAL_42_linesw_I [ ] ; extern  _GLOBAL_133_T  _GLOBAL_43_linesw_I [ ] ; extern  _GLOBAL_133_T  _GLOBAL_44_linesw_I [ ] ; extern  _GLOBAL_133_T  _GLOBAL_45_linesw_I [ ] ; extern  _GLOBAL_133_T  _GLOBAL_46_linesw_I [ ] ; extern  _GLOBAL_133_T  _GLOBAL_47_linesw_I [ ] ; extern  _GLOBAL_133_T  _GLOBAL_48_linesw_I [ ] ; extern  _GLOBAL_133_T  _GLOBAL_49_linesw_I [ ] ; static __attribute__ ((unused)) __typeof__(_GLOBAL_0_linesw_I) *_GLOBAL_linesw_30_A[NUM_STACKS];   





struct swdevt {
 dev_t sw_dev;
 int sw_flags;
 int sw_nblks;
 struct vnode *sw_vp;
};





typedef  struct swdevt   _GLOBAL_134_T; extern  _GLOBAL_134_T  _GLOBAL_0_swdevt_I [ ] ; extern  _GLOBAL_134_T  _GLOBAL_1_swdevt_I [ ] ; extern  _GLOBAL_134_T  _GLOBAL_2_swdevt_I [ ] ; extern  _GLOBAL_134_T  _GLOBAL_3_swdevt_I [ ] ; extern  _GLOBAL_134_T  _GLOBAL_4_swdevt_I [ ] ; extern  _GLOBAL_134_T  _GLOBAL_5_swdevt_I [ ] ; extern  _GLOBAL_134_T  _GLOBAL_6_swdevt_I [ ] ; extern  _GLOBAL_134_T  _GLOBAL_7_swdevt_I [ ] ; extern  _GLOBAL_134_T  _GLOBAL_8_swdevt_I [ ] ; extern  _GLOBAL_134_T  _GLOBAL_9_swdevt_I [ ] ; extern  _GLOBAL_134_T  _GLOBAL_10_swdevt_I [ ] ; extern  _GLOBAL_134_T  _GLOBAL_11_swdevt_I [ ] ; extern  _GLOBAL_134_T  _GLOBAL_12_swdevt_I [ ] ; extern  _GLOBAL_134_T  _GLOBAL_13_swdevt_I [ ] ; extern  _GLOBAL_134_T  _GLOBAL_14_swdevt_I [ ] ; extern  _GLOBAL_134_T  _GLOBAL_15_swdevt_I [ ] ; extern  _GLOBAL_134_T  _GLOBAL_16_swdevt_I [ ] ; extern  _GLOBAL_134_T  _GLOBAL_17_swdevt_I [ ] ; extern  _GLOBAL_134_T  _GLOBAL_18_swdevt_I [ ] ; extern  _GLOBAL_134_T  _GLOBAL_19_swdevt_I [ ] ; extern  _GLOBAL_134_T  _GLOBAL_20_swdevt_I [ ] ; extern  _GLOBAL_134_T  _GLOBAL_21_swdevt_I [ ] ; extern  _GLOBAL_134_T  _GLOBAL_22_swdevt_I [ ] ; extern  _GLOBAL_134_T  _GLOBAL_23_swdevt_I [ ] ; extern  _GLOBAL_134_T  _GLOBAL_24_swdevt_I [ ] ; extern  _GLOBAL_134_T  _GLOBAL_25_swdevt_I [ ] ; extern  _GLOBAL_134_T  _GLOBAL_26_swdevt_I [ ] ; extern  _GLOBAL_134_T  _GLOBAL_27_swdevt_I [ ] ; extern  _GLOBAL_134_T  _GLOBAL_28_swdevt_I [ ] ; extern  _GLOBAL_134_T  _GLOBAL_29_swdevt_I [ ] ; extern  _GLOBAL_134_T  _GLOBAL_30_swdevt_I [ ] ; extern  _GLOBAL_134_T  _GLOBAL_31_swdevt_I [ ] ; extern  _GLOBAL_134_T  _GLOBAL_32_swdevt_I [ ] ; extern  _GLOBAL_134_T  _GLOBAL_33_swdevt_I [ ] ; extern  _GLOBAL_134_T  _GLOBAL_34_swdevt_I [ ] ; extern  _GLOBAL_134_T  _GLOBAL_35_swdevt_I [ ] ; extern  _GLOBAL_134_T  _GLOBAL_36_swdevt_I [ ] ; extern  _GLOBAL_134_T  _GLOBAL_37_swdevt_I [ ] ; extern  _GLOBAL_134_T  _GLOBAL_38_swdevt_I [ ] ; extern  _GLOBAL_134_T  _GLOBAL_39_swdevt_I [ ] ; extern  _GLOBAL_134_T  _GLOBAL_40_swdevt_I [ ] ; extern  _GLOBAL_134_T  _GLOBAL_41_swdevt_I [ ] ; extern  _GLOBAL_134_T  _GLOBAL_42_swdevt_I [ ] ; extern  _GLOBAL_134_T  _GLOBAL_43_swdevt_I [ ] ; extern  _GLOBAL_134_T  _GLOBAL_44_swdevt_I [ ] ; extern  _GLOBAL_134_T  _GLOBAL_45_swdevt_I [ ] ; extern  _GLOBAL_134_T  _GLOBAL_46_swdevt_I [ ] ; extern  _GLOBAL_134_T  _GLOBAL_47_swdevt_I [ ] ; extern  _GLOBAL_134_T  _GLOBAL_48_swdevt_I [ ] ; extern  _GLOBAL_134_T  _GLOBAL_49_swdevt_I [ ] ; static __attribute__ ((unused)) __typeof__(_GLOBAL_0_swdevt_I) *_GLOBAL_swdevt_31_A[NUM_STACKS];   
typedef  int  _GLOBAL_135_T; extern  _GLOBAL_135_T  _GLOBAL_0_chrtoblktbl_I [ ] ; extern  _GLOBAL_135_T  _GLOBAL_1_chrtoblktbl_I [ ] ; extern  _GLOBAL_135_T  _GLOBAL_2_chrtoblktbl_I [ ] ; extern  _GLOBAL_135_T  _GLOBAL_3_chrtoblktbl_I [ ] ; extern  _GLOBAL_135_T  _GLOBAL_4_chrtoblktbl_I [ ] ; extern  _GLOBAL_135_T  _GLOBAL_5_chrtoblktbl_I [ ] ; extern  _GLOBAL_135_T  _GLOBAL_6_chrtoblktbl_I [ ] ; extern  _GLOBAL_135_T  _GLOBAL_7_chrtoblktbl_I [ ] ; extern  _GLOBAL_135_T  _GLOBAL_8_chrtoblktbl_I [ ] ; extern  _GLOBAL_135_T  _GLOBAL_9_chrtoblktbl_I [ ] ; extern  _GLOBAL_135_T  _GLOBAL_10_chrtoblktbl_I [ ] ; extern  _GLOBAL_135_T  _GLOBAL_11_chrtoblktbl_I [ ] ; extern  _GLOBAL_135_T  _GLOBAL_12_chrtoblktbl_I [ ] ; extern  _GLOBAL_135_T  _GLOBAL_13_chrtoblktbl_I [ ] ; extern  _GLOBAL_135_T  _GLOBAL_14_chrtoblktbl_I [ ] ; extern  _GLOBAL_135_T  _GLOBAL_15_chrtoblktbl_I [ ] ; extern  _GLOBAL_135_T  _GLOBAL_16_chrtoblktbl_I [ ] ; extern  _GLOBAL_135_T  _GLOBAL_17_chrtoblktbl_I [ ] ; extern  _GLOBAL_135_T  _GLOBAL_18_chrtoblktbl_I [ ] ; extern  _GLOBAL_135_T  _GLOBAL_19_chrtoblktbl_I [ ] ; extern  _GLOBAL_135_T  _GLOBAL_20_chrtoblktbl_I [ ] ; extern  _GLOBAL_135_T  _GLOBAL_21_chrtoblktbl_I [ ] ; extern  _GLOBAL_135_T  _GLOBAL_22_chrtoblktbl_I [ ] ; extern  _GLOBAL_135_T  _GLOBAL_23_chrtoblktbl_I [ ] ; extern  _GLOBAL_135_T  _GLOBAL_24_chrtoblktbl_I [ ] ; extern  _GLOBAL_135_T  _GLOBAL_25_chrtoblktbl_I [ ] ; extern  _GLOBAL_135_T  _GLOBAL_26_chrtoblktbl_I [ ] ; extern  _GLOBAL_135_T  _GLOBAL_27_chrtoblktbl_I [ ] ; extern  _GLOBAL_135_T  _GLOBAL_28_chrtoblktbl_I [ ] ; extern  _GLOBAL_135_T  _GLOBAL_29_chrtoblktbl_I [ ] ; extern  _GLOBAL_135_T  _GLOBAL_30_chrtoblktbl_I [ ] ; extern  _GLOBAL_135_T  _GLOBAL_31_chrtoblktbl_I [ ] ; extern  _GLOBAL_135_T  _GLOBAL_32_chrtoblktbl_I [ ] ; extern  _GLOBAL_135_T  _GLOBAL_33_chrtoblktbl_I [ ] ; extern  _GLOBAL_135_T  _GLOBAL_34_chrtoblktbl_I [ ] ; extern  _GLOBAL_135_T  _GLOBAL_35_chrtoblktbl_I [ ] ; extern  _GLOBAL_135_T  _GLOBAL_36_chrtoblktbl_I [ ] ; extern  _GLOBAL_135_T  _GLOBAL_37_chrtoblktbl_I [ ] ; extern  _GLOBAL_135_T  _GLOBAL_38_chrtoblktbl_I [ ] ; extern  _GLOBAL_135_T  _GLOBAL_39_chrtoblktbl_I [ ] ; extern  _GLOBAL_135_T  _GLOBAL_40_chrtoblktbl_I [ ] ; extern  _GLOBAL_135_T  _GLOBAL_41_chrtoblktbl_I [ ] ; extern  _GLOBAL_135_T  _GLOBAL_42_chrtoblktbl_I [ ] ; extern  _GLOBAL_135_T  _GLOBAL_43_chrtoblktbl_I [ ] ; extern  _GLOBAL_135_T  _GLOBAL_44_chrtoblktbl_I [ ] ; extern  _GLOBAL_135_T  _GLOBAL_45_chrtoblktbl_I [ ] ; extern  _GLOBAL_135_T  _GLOBAL_46_chrtoblktbl_I [ ] ; extern  _GLOBAL_135_T  _GLOBAL_47_chrtoblktbl_I [ ] ; extern  _GLOBAL_135_T  _GLOBAL_48_chrtoblktbl_I [ ] ; extern  _GLOBAL_135_T  _GLOBAL_49_chrtoblktbl_I [ ] ; static __attribute__ ((unused)) __typeof__(_GLOBAL_0_chrtoblktbl_I) *_GLOBAL_chrtoblktbl_32_A[NUM_STACKS];  
typedef  int  _GLOBAL_136_T; extern  _GLOBAL_136_T  global_nchrtoblktbl[NUM_STACKS];   

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
# 44 "openbsd3/crypto/cryptodev.c" 2
# 1 "openbsd3/sys/device.h" 1
# 53 "openbsd3/sys/device.h"
enum devclass {
 DV_DULL,
 DV_CPU,
 DV_DISK,
 DV_IFNET,
 DV_TAPE,
 DV_TTY
};




enum devact {
 DVACT_ACTIVATE,
 DVACT_DEACTIVATE
};



struct device {
 enum devclass dv_class;
 struct { struct device *tqe_next; struct device **tqe_prev; } dv_list;
 struct cfdata *dv_cfdata;
 int dv_unit;
 char dv_xname[16];
 struct device *dv_parent;
 int dv_flags;
 int dv_ref;
};




struct devicelist { struct device *tqh_first; struct device **tqh_last; };


struct evcnt {
 struct { struct evcnt *tqe_next; struct evcnt **tqe_prev; } ev_list;
 struct device *ev_dev;
 int ev_count;
 char ev_name[8];
};
struct evcntlist { struct evcnt *tqh_first; struct evcnt **tqh_last; };




struct cfdata {
 struct cfattach *cf_attach;
 struct cfdriver *cf_driver;
 short cf_unit;
 short cf_fstate;
 int *cf_loc;
 int cf_flags;
 short *cf_parents;
 int cf_locnames;
 void (**cf_ivstubs)(void);
 short cf_starunit1;
};
typedef  struct cfdata   _GLOBAL_137_T; extern  _GLOBAL_137_T  _GLOBAL_0_cfdata_I [ ] ; extern  _GLOBAL_137_T  _GLOBAL_1_cfdata_I [ ] ; extern  _GLOBAL_137_T  _GLOBAL_2_cfdata_I [ ] ; extern  _GLOBAL_137_T  _GLOBAL_3_cfdata_I [ ] ; extern  _GLOBAL_137_T  _GLOBAL_4_cfdata_I [ ] ; extern  _GLOBAL_137_T  _GLOBAL_5_cfdata_I [ ] ; extern  _GLOBAL_137_T  _GLOBAL_6_cfdata_I [ ] ; extern  _GLOBAL_137_T  _GLOBAL_7_cfdata_I [ ] ; extern  _GLOBAL_137_T  _GLOBAL_8_cfdata_I [ ] ; extern  _GLOBAL_137_T  _GLOBAL_9_cfdata_I [ ] ; extern  _GLOBAL_137_T  _GLOBAL_10_cfdata_I [ ] ; extern  _GLOBAL_137_T  _GLOBAL_11_cfdata_I [ ] ; extern  _GLOBAL_137_T  _GLOBAL_12_cfdata_I [ ] ; extern  _GLOBAL_137_T  _GLOBAL_13_cfdata_I [ ] ; extern  _GLOBAL_137_T  _GLOBAL_14_cfdata_I [ ] ; extern  _GLOBAL_137_T  _GLOBAL_15_cfdata_I [ ] ; extern  _GLOBAL_137_T  _GLOBAL_16_cfdata_I [ ] ; extern  _GLOBAL_137_T  _GLOBAL_17_cfdata_I [ ] ; extern  _GLOBAL_137_T  _GLOBAL_18_cfdata_I [ ] ; extern  _GLOBAL_137_T  _GLOBAL_19_cfdata_I [ ] ; extern  _GLOBAL_137_T  _GLOBAL_20_cfdata_I [ ] ; extern  _GLOBAL_137_T  _GLOBAL_21_cfdata_I [ ] ; extern  _GLOBAL_137_T  _GLOBAL_22_cfdata_I [ ] ; extern  _GLOBAL_137_T  _GLOBAL_23_cfdata_I [ ] ; extern  _GLOBAL_137_T  _GLOBAL_24_cfdata_I [ ] ; extern  _GLOBAL_137_T  _GLOBAL_25_cfdata_I [ ] ; extern  _GLOBAL_137_T  _GLOBAL_26_cfdata_I [ ] ; extern  _GLOBAL_137_T  _GLOBAL_27_cfdata_I [ ] ; extern  _GLOBAL_137_T  _GLOBAL_28_cfdata_I [ ] ; extern  _GLOBAL_137_T  _GLOBAL_29_cfdata_I [ ] ; extern  _GLOBAL_137_T  _GLOBAL_30_cfdata_I [ ] ; extern  _GLOBAL_137_T  _GLOBAL_31_cfdata_I [ ] ; extern  _GLOBAL_137_T  _GLOBAL_32_cfdata_I [ ] ; extern  _GLOBAL_137_T  _GLOBAL_33_cfdata_I [ ] ; extern  _GLOBAL_137_T  _GLOBAL_34_cfdata_I [ ] ; extern  _GLOBAL_137_T  _GLOBAL_35_cfdata_I [ ] ; extern  _GLOBAL_137_T  _GLOBAL_36_cfdata_I [ ] ; extern  _GLOBAL_137_T  _GLOBAL_37_cfdata_I [ ] ; extern  _GLOBAL_137_T  _GLOBAL_38_cfdata_I [ ] ; extern  _GLOBAL_137_T  _GLOBAL_39_cfdata_I [ ] ; extern  _GLOBAL_137_T  _GLOBAL_40_cfdata_I [ ] ; extern  _GLOBAL_137_T  _GLOBAL_41_cfdata_I [ ] ; extern  _GLOBAL_137_T  _GLOBAL_42_cfdata_I [ ] ; extern  _GLOBAL_137_T  _GLOBAL_43_cfdata_I [ ] ; extern  _GLOBAL_137_T  _GLOBAL_44_cfdata_I [ ] ; extern  _GLOBAL_137_T  _GLOBAL_45_cfdata_I [ ] ; extern  _GLOBAL_137_T  _GLOBAL_46_cfdata_I [ ] ; extern  _GLOBAL_137_T  _GLOBAL_47_cfdata_I [ ] ; extern  _GLOBAL_137_T  _GLOBAL_48_cfdata_I [ ] ; extern  _GLOBAL_137_T  _GLOBAL_49_cfdata_I [ ] ; static __attribute__ ((unused)) __typeof__(_GLOBAL_0_cfdata_I) *_GLOBAL_cfdata_33_A[NUM_STACKS];   






typedef int (*cfmatch_t)(struct device *, void *, void *);
typedef void (*cfscan_t)(struct device *, void *);
# 137 "openbsd3/sys/device.h"
struct cfattach {
 size_t ca_devsize;
 cfmatch_t ca_match;
 void (*ca_attach)(struct device *, struct device *, void *);
 int (*ca_detach)(struct device *, int);
 int (*ca_activate)(struct device *, enum devact);
 void (*ca_zeroref)(struct device *);
};





struct cfdriver {
 void **cd_devs;
 char *cd_name;
 enum devclass cd_class;
 int cd_indirect;
 int cd_ndevs;
};







typedef int (*cfprint_t)(void *, const char *);







struct pdevinit {
 void (*pdev_attach)(int);
 int pdev_count;
};


struct cftable {
 struct cfdata *tab;
 struct { struct cftable *tqe_next; struct cftable **tqe_prev; } list;
};
struct cftable_head { struct cftable *tqh_first; struct cftable **tqh_last; };

typedef  struct devicelist   _GLOBAL_138_T; extern  _GLOBAL_138_T  global_alldevs[NUM_STACKS];    
typedef  struct evcntlist   _GLOBAL_139_T; extern  _GLOBAL_139_T  global_allevents[NUM_STACKS];    

typedef  int  _GLOBAL_140_T; extern  _GLOBAL_140_T  global_autoconf_verbose[NUM_STACKS];   

void config_init(void);
void *config_search(cfmatch_t, struct device *, void *);
void *config_rootsearch(cfmatch_t, char *, void *);
struct device *config_found_sm(struct device *, void *, cfprint_t,
    cfmatch_t);
struct device *config_rootfound(char *, void *);
void config_scan(cfscan_t, struct device *);
struct device *config_attach(struct device *, void *, void *, cfprint_t);
int config_detach(struct device *, int);
int config_detach_children(struct device *, int);
int config_activate(struct device *);
int config_deactivate(struct device *);
int config_activate_children(struct device *, enum devact);
struct device *config_make_softc(struct device *parent,
    struct cfdata *cf);
void config_defer(struct device *, void (*)(struct device *));
void evcnt_attach(struct device *, const char *, struct evcnt *);

struct device *device_lookup(struct cfdriver *, int unit);
void device_ref(struct device *);
void device_unref(struct device *);
# 45 "openbsd3/crypto/cryptodev.c" 2
# 1 "openbsd3/crypto/sha1.h" 1
# 12 "openbsd3/crypto/sha1.h"
typedef struct {
 u_int32_t state[5];
 u_int32_t count[2];
 unsigned char buffer[64];
} SHA1_CTX;

void SHA1Transform(u_int32_t state[5], unsigned char buffer[64]);
void SHA1Init(SHA1_CTX * context);
void SHA1Update(SHA1_CTX * context, unsigned char * data, unsigned int len);
void SHA1Final(unsigned char digest[20], SHA1_CTX * context);
# 46 "openbsd3/crypto/cryptodev.c" 2
# 1 "openbsd3/crypto/rmd160.h" 1
# 29 "openbsd3/crypto/rmd160.h"
typedef struct RMD160Context {
 u_int32_t state[5];
 u_int64_t count;
 u_char buffer[64];
} RMD160_CTX;

void RMD160Init(RMD160_CTX *);
void RMD160Transform(u_int32_t [5], const u_char [64]);
void RMD160Update(RMD160_CTX *, const u_char *, u_int32_t);
void RMD160Final(u_char [20], RMD160_CTX *);
# 47 "openbsd3/crypto/cryptodev.c" 2
# 1 "openbsd3/crypto/cast.h" 1
# 13 "openbsd3/crypto/cast.h"
typedef struct {
 u_int32_t xkey[32];
 int rounds;
} cast_key;

void cast_setkey(cast_key * key, u_int8_t * rawkey, int keybytes);
void cast_encrypt(cast_key * key, u_int8_t * inblock, u_int8_t * outblock);
void cast_decrypt(cast_key * key, u_int8_t * inblock, u_int8_t * outblock);
# 48 "openbsd3/crypto/cryptodev.c" 2
# 1 "openbsd3/crypto/skipjack.h" 1
# 16 "openbsd3/crypto/skipjack.h"
extern void skipjack_forwards(u_int8_t *plain, u_int8_t *cipher, u_int8_t **key);
extern void skipjack_backwards(u_int8_t *cipher, u_int8_t *plain, u_int8_t **key);
extern void subkey_table_gen(u_int8_t *key, u_int8_t **key_tables);
# 49 "openbsd3/crypto/cryptodev.c" 2
# 1 "openbsd3/crypto/blf.h" 1
# 49 "openbsd3/crypto/blf.h"
typedef struct BlowfishContext {
 u_int32_t S[4][256];
 u_int32_t P[16 + 2];
} blf_ctx;







void Blowfish_encipher(blf_ctx *, u_int32_t *);
void Blowfish_decipher(blf_ctx *, u_int32_t *);
void Blowfish_initstate(blf_ctx *);
void Blowfish_expand0state(blf_ctx *, const u_int8_t *, u_int16_t);
void Blowfish_expandstate(blf_ctx *, const u_int8_t *, u_int16_t, const u_int8_t *, u_int16_t);



void blf_key(blf_ctx *, const u_int8_t *, u_int16_t);
void blf_enc(blf_ctx *, u_int32_t *, u_int16_t);
void blf_dec(blf_ctx *, u_int32_t *, u_int16_t);


u_int32_t Blowfish_stream2word(const u_int8_t *, u_int16_t ,
        u_int16_t *);

void blf_ecb_encrypt(blf_ctx *, u_int8_t *, u_int32_t);
void blf_ecb_decrypt(blf_ctx *, u_int8_t *, u_int32_t);

void blf_cbc_encrypt(blf_ctx *, u_int8_t *, u_int8_t *, u_int32_t);
void blf_cbc_decrypt(blf_ctx *, u_int8_t *, u_int8_t *, u_int32_t);
# 50 "openbsd3/crypto/cryptodev.c" 2
# 1 "openbsd3/crypto/cryptodev.h" 1
# 55 "openbsd3/crypto/cryptodev.h"
# 1 "openbsd3/sys/ioccom.h" 1
# 56 "openbsd3/crypto/cryptodev.h" 2
# 109 "openbsd3/crypto/cryptodev.h"
struct cryptoini {
 int cri_alg;
 int cri_klen;
 int cri_rnd;
 caddr_t cri_key;
 u_int8_t cri_iv[16];
 struct cryptoini *cri_next;
};


struct cryptodesc {
 int crd_skip;
 int crd_len;
 int crd_inject;
 int crd_flags;
# 132 "openbsd3/crypto/cryptodev.h"
 struct cryptoini CRD_INI;






 struct cryptodesc *crd_next;
};


struct cryptop {
 u_int64_t crp_sid;
 int crp_ilen;
 int crp_olen;
 int crp_alloctype;

 int crp_etype;
# 159 "openbsd3/crypto/cryptodev.h"
 int crp_flags;







 caddr_t crp_buf;
 caddr_t crp_opaque;
 struct cryptodesc *crp_desc;

 int (*crp_callback)(struct cryptop *);

 struct cryptop *crp_next;
 caddr_t crp_mac;
};
# 184 "openbsd3/crypto/cryptodev.h"
struct crparam {
 caddr_t crp_p;
 u_int crp_nbits;
};



struct crypt_kop {
 u_int crk_op;
 u_int crk_status;
 u_short crk_iparams;
 u_short crk_oparams;
 u_int crk_pad1;
 struct crparam crk_param[8];
};
# 212 "openbsd3/crypto/cryptodev.h"
struct cryptkop {
 u_int krp_op;
 u_int krp_status;
 u_short krp_iparams;
 u_short krp_oparams;
 u_int32_t krp_hid;
 struct crparam krp_param[8];
 int (*krp_callback)(struct cryptkop *);
 struct cryptkop *krp_next;
};


struct cryptocap {
 u_int64_t cc_operations;
 u_int64_t cc_bytes;
 u_int64_t cc_koperations;

 u_int32_t cc_sessions;


 int cc_alg[20 + 1];


 int cc_kalg[4 + 1];

 int cc_queued;

 u_int8_t cc_flags;





 int (*cc_newsession) (u_int32_t *, struct cryptoini *);
 int (*cc_process) (struct cryptop *);
 int (*cc_freesession) (u_int64_t);
 int (*cc_kprocess) (struct cryptkop *);
};




struct session_op {
 u_int32_t cipher;
 u_int32_t mac;

 u_int32_t keylen;
 caddr_t key;
 int mackeylen;
 caddr_t mackey;

 u_int32_t ses;
};




struct crypt_op {
 u_int32_t ses;
 u_int16_t op;


 u_int16_t flags;

 u_int len;
 caddr_t src, dst;
 caddr_t mac;
 caddr_t iv;
};
# 299 "openbsd3/crypto/cryptodev.h"
int crypto_newsession(u_int64_t *, struct cryptoini *, int);
int crypto_freesession(u_int64_t);
int crypto_dispatch(struct cryptop *);
int crypto_kdispatch(struct cryptkop *);
int crypto_register(u_int32_t, int *,
     int (*)(u_int32_t *, struct cryptoini *), int (*)(u_int64_t),
     int (*)(struct cryptop *));
int crypto_kregister(u_int32_t, int *, int (*)(struct cryptkop *));
int crypto_unregister(u_int32_t, int);
int32_t crypto_get_driverid(u_int8_t);
void crypto_thread(void);
int crypto_invoke(struct cryptop *);
int crypto_kinvoke(struct cryptkop *);
void crypto_done(struct cryptop *);
void crypto_kdone(struct cryptkop *);
int crypto_getfeat(int *);

void cuio_copydata(struct uio *, int, int, caddr_t);
void cuio_copyback(struct uio *, int, int, const void *);
int cuio_getptr(struct uio *, int, int *);
int cuio_apply(struct uio *, int, int,
     int (*f)(caddr_t, caddr_t, unsigned int), caddr_t);

struct cryptop *crypto_getreq(int);
void crypto_freereq(struct cryptop *);
# 51 "openbsd3/crypto/cryptodev.c" 2
# 1 "openbsd3/crypto/xform.h" 1
# 30 "openbsd3/crypto/xform.h"
# 1 "openbsd3/crypto/sha2.h" 1
# 100 "openbsd3/crypto/sha2.h"
typedef struct _SHA256_CTX {
 u_int32_t state[8];
 u_int64_t bitcount;
 u_int8_t buffer[64];
} SHA256_CTX;
typedef struct _SHA512_CTX {
 u_int64_t state[8];
 u_int64_t bitcount[2];
 u_int8_t buffer[128];
} SHA512_CTX;



typedef SHA512_CTX SHA384_CTX;




void SHA256_Init (SHA256_CTX *);
void SHA256_Update (SHA256_CTX*, const u_int8_t*, size_t);
void SHA256_Final (u_int8_t[32], SHA256_CTX*);
char* SHA256_End (SHA256_CTX*, char[(32 * 2 + 1)]);
char* SHA256_Data (const u_int8_t*, size_t, char[(32 * 2 + 1)]);

void SHA384_Init (SHA384_CTX*);
void SHA384_Update (SHA384_CTX*, const u_int8_t*, size_t);
void SHA384_Final (u_int8_t[48], SHA384_CTX*);
char* SHA384_End (SHA384_CTX*, char[(48 * 2 + 1)]);
char* SHA384_Data (const u_int8_t*, size_t, char[(48 * 2 + 1)]);

void SHA512_Init (SHA512_CTX*);
void SHA512_Update (SHA512_CTX*, const u_int8_t*, size_t);
void SHA512_Final (u_int8_t[64], SHA512_CTX*);
char* SHA512_End (SHA512_CTX*, char[(64 * 2 + 1)]);
char* SHA512_Data (const u_int8_t*, size_t, char[(64 * 2 + 1)]);
# 31 "openbsd3/crypto/xform.h" 2


struct auth_hash {
 int type;
 char *name;
 u_int16_t keysize;
 u_int16_t hashsize;
 u_int16_t authsize;
 u_int16_t ctxsize;
 void (*Init) (void *);
 int (*Update) (void *, u_int8_t *, u_int16_t);
 void (*Final) (u_int8_t *, void *);
};

struct enc_xform {
 int type;
 char *name;
 u_int16_t blocksize;
 u_int16_t minkey, maxkey;
 void (*encrypt) (caddr_t, u_int8_t *);
 void (*decrypt) (caddr_t, u_int8_t *);
 void (*setkey) (u_int8_t **, u_int8_t *, int len);
 void (*zerokey) (u_int8_t **);
};

struct comp_algo {
 int type;
 char *name;
 size_t minlen;
 u_int32_t (*compress) (u_int8_t *, u_int32_t, u_int8_t **);
 u_int32_t (*decompress) (u_int8_t *, u_int32_t, u_int8_t **);
};

union authctx {
 MD5_CTX md5ctx;
 SHA1_CTX sha1ctx;
 RMD160_CTX rmd160ctx;
 SHA256_CTX sha2_256ctx;
 SHA384_CTX sha2_384ctx;
 SHA512_CTX sha2_512ctx;
};

typedef  struct enc_xform   _GLOBAL_141_T; extern  _GLOBAL_141_T  _GLOBAL_0_enc_xform_des_I; extern  _GLOBAL_141_T  _GLOBAL_1_enc_xform_des_I; extern  _GLOBAL_141_T  _GLOBAL_2_enc_xform_des_I; extern  _GLOBAL_141_T  _GLOBAL_3_enc_xform_des_I; extern  _GLOBAL_141_T  _GLOBAL_4_enc_xform_des_I; extern  _GLOBAL_141_T  _GLOBAL_5_enc_xform_des_I; extern  _GLOBAL_141_T  _GLOBAL_6_enc_xform_des_I; extern  _GLOBAL_141_T  _GLOBAL_7_enc_xform_des_I; extern  _GLOBAL_141_T  _GLOBAL_8_enc_xform_des_I; extern  _GLOBAL_141_T  _GLOBAL_9_enc_xform_des_I; extern  _GLOBAL_141_T  _GLOBAL_10_enc_xform_des_I; extern  _GLOBAL_141_T  _GLOBAL_11_enc_xform_des_I; extern  _GLOBAL_141_T  _GLOBAL_12_enc_xform_des_I; extern  _GLOBAL_141_T  _GLOBAL_13_enc_xform_des_I; extern  _GLOBAL_141_T  _GLOBAL_14_enc_xform_des_I; extern  _GLOBAL_141_T  _GLOBAL_15_enc_xform_des_I; extern  _GLOBAL_141_T  _GLOBAL_16_enc_xform_des_I; extern  _GLOBAL_141_T  _GLOBAL_17_enc_xform_des_I; extern  _GLOBAL_141_T  _GLOBAL_18_enc_xform_des_I; extern  _GLOBAL_141_T  _GLOBAL_19_enc_xform_des_I; extern  _GLOBAL_141_T  _GLOBAL_20_enc_xform_des_I; extern  _GLOBAL_141_T  _GLOBAL_21_enc_xform_des_I; extern  _GLOBAL_141_T  _GLOBAL_22_enc_xform_des_I; extern  _GLOBAL_141_T  _GLOBAL_23_enc_xform_des_I; extern  _GLOBAL_141_T  _GLOBAL_24_enc_xform_des_I; extern  _GLOBAL_141_T  _GLOBAL_25_enc_xform_des_I; extern  _GLOBAL_141_T  _GLOBAL_26_enc_xform_des_I; extern  _GLOBAL_141_T  _GLOBAL_27_enc_xform_des_I; extern  _GLOBAL_141_T  _GLOBAL_28_enc_xform_des_I; extern  _GLOBAL_141_T  _GLOBAL_29_enc_xform_des_I; extern  _GLOBAL_141_T  _GLOBAL_30_enc_xform_des_I; extern  _GLOBAL_141_T  _GLOBAL_31_enc_xform_des_I; extern  _GLOBAL_141_T  _GLOBAL_32_enc_xform_des_I; extern  _GLOBAL_141_T  _GLOBAL_33_enc_xform_des_I; extern  _GLOBAL_141_T  _GLOBAL_34_enc_xform_des_I; extern  _GLOBAL_141_T  _GLOBAL_35_enc_xform_des_I; extern  _GLOBAL_141_T  _GLOBAL_36_enc_xform_des_I; extern  _GLOBAL_141_T  _GLOBAL_37_enc_xform_des_I; extern  _GLOBAL_141_T  _GLOBAL_38_enc_xform_des_I; extern  _GLOBAL_141_T  _GLOBAL_39_enc_xform_des_I; extern  _GLOBAL_141_T  _GLOBAL_40_enc_xform_des_I; extern  _GLOBAL_141_T  _GLOBAL_41_enc_xform_des_I; extern  _GLOBAL_141_T  _GLOBAL_42_enc_xform_des_I; extern  _GLOBAL_141_T  _GLOBAL_43_enc_xform_des_I; extern  _GLOBAL_141_T  _GLOBAL_44_enc_xform_des_I; extern  _GLOBAL_141_T  _GLOBAL_45_enc_xform_des_I; extern  _GLOBAL_141_T  _GLOBAL_46_enc_xform_des_I; extern  _GLOBAL_141_T  _GLOBAL_47_enc_xform_des_I; extern  _GLOBAL_141_T  _GLOBAL_48_enc_xform_des_I; extern  _GLOBAL_141_T  _GLOBAL_49_enc_xform_des_I; static __attribute__ ((unused)) __typeof__(_GLOBAL_0_enc_xform_des_I) *_GLOBAL_enc_xform_des_34_A[NUM_STACKS] = { &_GLOBAL_0_enc_xform_des_I, &_GLOBAL_1_enc_xform_des_I, &_GLOBAL_2_enc_xform_des_I, &_GLOBAL_3_enc_xform_des_I, &_GLOBAL_4_enc_xform_des_I, &_GLOBAL_5_enc_xform_des_I, &_GLOBAL_6_enc_xform_des_I, &_GLOBAL_7_enc_xform_des_I, &_GLOBAL_8_enc_xform_des_I, &_GLOBAL_9_enc_xform_des_I, &_GLOBAL_10_enc_xform_des_I, &_GLOBAL_11_enc_xform_des_I, &_GLOBAL_12_enc_xform_des_I, &_GLOBAL_13_enc_xform_des_I, &_GLOBAL_14_enc_xform_des_I, &_GLOBAL_15_enc_xform_des_I, &_GLOBAL_16_enc_xform_des_I, &_GLOBAL_17_enc_xform_des_I, &_GLOBAL_18_enc_xform_des_I, &_GLOBAL_19_enc_xform_des_I, &_GLOBAL_20_enc_xform_des_I, &_GLOBAL_21_enc_xform_des_I, &_GLOBAL_22_enc_xform_des_I, &_GLOBAL_23_enc_xform_des_I, &_GLOBAL_24_enc_xform_des_I, &_GLOBAL_25_enc_xform_des_I, &_GLOBAL_26_enc_xform_des_I, &_GLOBAL_27_enc_xform_des_I, &_GLOBAL_28_enc_xform_des_I, &_GLOBAL_29_enc_xform_des_I, &_GLOBAL_30_enc_xform_des_I, &_GLOBAL_31_enc_xform_des_I, &_GLOBAL_32_enc_xform_des_I, &_GLOBAL_33_enc_xform_des_I, &_GLOBAL_34_enc_xform_des_I, &_GLOBAL_35_enc_xform_des_I, &_GLOBAL_36_enc_xform_des_I, &_GLOBAL_37_enc_xform_des_I, &_GLOBAL_38_enc_xform_des_I, &_GLOBAL_39_enc_xform_des_I, &_GLOBAL_40_enc_xform_des_I, &_GLOBAL_41_enc_xform_des_I, &_GLOBAL_42_enc_xform_des_I, &_GLOBAL_43_enc_xform_des_I, &_GLOBAL_44_enc_xform_des_I, &_GLOBAL_45_enc_xform_des_I, &_GLOBAL_46_enc_xform_des_I, &_GLOBAL_47_enc_xform_des_I, &_GLOBAL_48_enc_xform_des_I, &_GLOBAL_49_enc_xform_des_I, };   
typedef  struct enc_xform   _GLOBAL_142_T; extern  _GLOBAL_142_T  _GLOBAL_0_enc_xform_3des_I; extern  _GLOBAL_142_T  _GLOBAL_1_enc_xform_3des_I; extern  _GLOBAL_142_T  _GLOBAL_2_enc_xform_3des_I; extern  _GLOBAL_142_T  _GLOBAL_3_enc_xform_3des_I; extern  _GLOBAL_142_T  _GLOBAL_4_enc_xform_3des_I; extern  _GLOBAL_142_T  _GLOBAL_5_enc_xform_3des_I; extern  _GLOBAL_142_T  _GLOBAL_6_enc_xform_3des_I; extern  _GLOBAL_142_T  _GLOBAL_7_enc_xform_3des_I; extern  _GLOBAL_142_T  _GLOBAL_8_enc_xform_3des_I; extern  _GLOBAL_142_T  _GLOBAL_9_enc_xform_3des_I; extern  _GLOBAL_142_T  _GLOBAL_10_enc_xform_3des_I; extern  _GLOBAL_142_T  _GLOBAL_11_enc_xform_3des_I; extern  _GLOBAL_142_T  _GLOBAL_12_enc_xform_3des_I; extern  _GLOBAL_142_T  _GLOBAL_13_enc_xform_3des_I; extern  _GLOBAL_142_T  _GLOBAL_14_enc_xform_3des_I; extern  _GLOBAL_142_T  _GLOBAL_15_enc_xform_3des_I; extern  _GLOBAL_142_T  _GLOBAL_16_enc_xform_3des_I; extern  _GLOBAL_142_T  _GLOBAL_17_enc_xform_3des_I; extern  _GLOBAL_142_T  _GLOBAL_18_enc_xform_3des_I; extern  _GLOBAL_142_T  _GLOBAL_19_enc_xform_3des_I; extern  _GLOBAL_142_T  _GLOBAL_20_enc_xform_3des_I; extern  _GLOBAL_142_T  _GLOBAL_21_enc_xform_3des_I; extern  _GLOBAL_142_T  _GLOBAL_22_enc_xform_3des_I; extern  _GLOBAL_142_T  _GLOBAL_23_enc_xform_3des_I; extern  _GLOBAL_142_T  _GLOBAL_24_enc_xform_3des_I; extern  _GLOBAL_142_T  _GLOBAL_25_enc_xform_3des_I; extern  _GLOBAL_142_T  _GLOBAL_26_enc_xform_3des_I; extern  _GLOBAL_142_T  _GLOBAL_27_enc_xform_3des_I; extern  _GLOBAL_142_T  _GLOBAL_28_enc_xform_3des_I; extern  _GLOBAL_142_T  _GLOBAL_29_enc_xform_3des_I; extern  _GLOBAL_142_T  _GLOBAL_30_enc_xform_3des_I; extern  _GLOBAL_142_T  _GLOBAL_31_enc_xform_3des_I; extern  _GLOBAL_142_T  _GLOBAL_32_enc_xform_3des_I; extern  _GLOBAL_142_T  _GLOBAL_33_enc_xform_3des_I; extern  _GLOBAL_142_T  _GLOBAL_34_enc_xform_3des_I; extern  _GLOBAL_142_T  _GLOBAL_35_enc_xform_3des_I; extern  _GLOBAL_142_T  _GLOBAL_36_enc_xform_3des_I; extern  _GLOBAL_142_T  _GLOBAL_37_enc_xform_3des_I; extern  _GLOBAL_142_T  _GLOBAL_38_enc_xform_3des_I; extern  _GLOBAL_142_T  _GLOBAL_39_enc_xform_3des_I; extern  _GLOBAL_142_T  _GLOBAL_40_enc_xform_3des_I; extern  _GLOBAL_142_T  _GLOBAL_41_enc_xform_3des_I; extern  _GLOBAL_142_T  _GLOBAL_42_enc_xform_3des_I; extern  _GLOBAL_142_T  _GLOBAL_43_enc_xform_3des_I; extern  _GLOBAL_142_T  _GLOBAL_44_enc_xform_3des_I; extern  _GLOBAL_142_T  _GLOBAL_45_enc_xform_3des_I; extern  _GLOBAL_142_T  _GLOBAL_46_enc_xform_3des_I; extern  _GLOBAL_142_T  _GLOBAL_47_enc_xform_3des_I; extern  _GLOBAL_142_T  _GLOBAL_48_enc_xform_3des_I; extern  _GLOBAL_142_T  _GLOBAL_49_enc_xform_3des_I; static __attribute__ ((unused)) __typeof__(_GLOBAL_0_enc_xform_3des_I) *_GLOBAL_enc_xform_3des_35_A[NUM_STACKS] = { &_GLOBAL_0_enc_xform_3des_I, &_GLOBAL_1_enc_xform_3des_I, &_GLOBAL_2_enc_xform_3des_I, &_GLOBAL_3_enc_xform_3des_I, &_GLOBAL_4_enc_xform_3des_I, &_GLOBAL_5_enc_xform_3des_I, &_GLOBAL_6_enc_xform_3des_I, &_GLOBAL_7_enc_xform_3des_I, &_GLOBAL_8_enc_xform_3des_I, &_GLOBAL_9_enc_xform_3des_I, &_GLOBAL_10_enc_xform_3des_I, &_GLOBAL_11_enc_xform_3des_I, &_GLOBAL_12_enc_xform_3des_I, &_GLOBAL_13_enc_xform_3des_I, &_GLOBAL_14_enc_xform_3des_I, &_GLOBAL_15_enc_xform_3des_I, &_GLOBAL_16_enc_xform_3des_I, &_GLOBAL_17_enc_xform_3des_I, &_GLOBAL_18_enc_xform_3des_I, &_GLOBAL_19_enc_xform_3des_I, &_GLOBAL_20_enc_xform_3des_I, &_GLOBAL_21_enc_xform_3des_I, &_GLOBAL_22_enc_xform_3des_I, &_GLOBAL_23_enc_xform_3des_I, &_GLOBAL_24_enc_xform_3des_I, &_GLOBAL_25_enc_xform_3des_I, &_GLOBAL_26_enc_xform_3des_I, &_GLOBAL_27_enc_xform_3des_I, &_GLOBAL_28_enc_xform_3des_I, &_GLOBAL_29_enc_xform_3des_I, &_GLOBAL_30_enc_xform_3des_I, &_GLOBAL_31_enc_xform_3des_I, &_GLOBAL_32_enc_xform_3des_I, &_GLOBAL_33_enc_xform_3des_I, &_GLOBAL_34_enc_xform_3des_I, &_GLOBAL_35_enc_xform_3des_I, &_GLOBAL_36_enc_xform_3des_I, &_GLOBAL_37_enc_xform_3des_I, &_GLOBAL_38_enc_xform_3des_I, &_GLOBAL_39_enc_xform_3des_I, &_GLOBAL_40_enc_xform_3des_I, &_GLOBAL_41_enc_xform_3des_I, &_GLOBAL_42_enc_xform_3des_I, &_GLOBAL_43_enc_xform_3des_I, &_GLOBAL_44_enc_xform_3des_I, &_GLOBAL_45_enc_xform_3des_I, &_GLOBAL_46_enc_xform_3des_I, &_GLOBAL_47_enc_xform_3des_I, &_GLOBAL_48_enc_xform_3des_I, &_GLOBAL_49_enc_xform_3des_I, };   
typedef  struct enc_xform   _GLOBAL_143_T; extern  _GLOBAL_143_T  _GLOBAL_0_enc_xform_blf_I; extern  _GLOBAL_143_T  _GLOBAL_1_enc_xform_blf_I; extern  _GLOBAL_143_T  _GLOBAL_2_enc_xform_blf_I; extern  _GLOBAL_143_T  _GLOBAL_3_enc_xform_blf_I; extern  _GLOBAL_143_T  _GLOBAL_4_enc_xform_blf_I; extern  _GLOBAL_143_T  _GLOBAL_5_enc_xform_blf_I; extern  _GLOBAL_143_T  _GLOBAL_6_enc_xform_blf_I; extern  _GLOBAL_143_T  _GLOBAL_7_enc_xform_blf_I; extern  _GLOBAL_143_T  _GLOBAL_8_enc_xform_blf_I; extern  _GLOBAL_143_T  _GLOBAL_9_enc_xform_blf_I; extern  _GLOBAL_143_T  _GLOBAL_10_enc_xform_blf_I; extern  _GLOBAL_143_T  _GLOBAL_11_enc_xform_blf_I; extern  _GLOBAL_143_T  _GLOBAL_12_enc_xform_blf_I; extern  _GLOBAL_143_T  _GLOBAL_13_enc_xform_blf_I; extern  _GLOBAL_143_T  _GLOBAL_14_enc_xform_blf_I; extern  _GLOBAL_143_T  _GLOBAL_15_enc_xform_blf_I; extern  _GLOBAL_143_T  _GLOBAL_16_enc_xform_blf_I; extern  _GLOBAL_143_T  _GLOBAL_17_enc_xform_blf_I; extern  _GLOBAL_143_T  _GLOBAL_18_enc_xform_blf_I; extern  _GLOBAL_143_T  _GLOBAL_19_enc_xform_blf_I; extern  _GLOBAL_143_T  _GLOBAL_20_enc_xform_blf_I; extern  _GLOBAL_143_T  _GLOBAL_21_enc_xform_blf_I; extern  _GLOBAL_143_T  _GLOBAL_22_enc_xform_blf_I; extern  _GLOBAL_143_T  _GLOBAL_23_enc_xform_blf_I; extern  _GLOBAL_143_T  _GLOBAL_24_enc_xform_blf_I; extern  _GLOBAL_143_T  _GLOBAL_25_enc_xform_blf_I; extern  _GLOBAL_143_T  _GLOBAL_26_enc_xform_blf_I; extern  _GLOBAL_143_T  _GLOBAL_27_enc_xform_blf_I; extern  _GLOBAL_143_T  _GLOBAL_28_enc_xform_blf_I; extern  _GLOBAL_143_T  _GLOBAL_29_enc_xform_blf_I; extern  _GLOBAL_143_T  _GLOBAL_30_enc_xform_blf_I; extern  _GLOBAL_143_T  _GLOBAL_31_enc_xform_blf_I; extern  _GLOBAL_143_T  _GLOBAL_32_enc_xform_blf_I; extern  _GLOBAL_143_T  _GLOBAL_33_enc_xform_blf_I; extern  _GLOBAL_143_T  _GLOBAL_34_enc_xform_blf_I; extern  _GLOBAL_143_T  _GLOBAL_35_enc_xform_blf_I; extern  _GLOBAL_143_T  _GLOBAL_36_enc_xform_blf_I; extern  _GLOBAL_143_T  _GLOBAL_37_enc_xform_blf_I; extern  _GLOBAL_143_T  _GLOBAL_38_enc_xform_blf_I; extern  _GLOBAL_143_T  _GLOBAL_39_enc_xform_blf_I; extern  _GLOBAL_143_T  _GLOBAL_40_enc_xform_blf_I; extern  _GLOBAL_143_T  _GLOBAL_41_enc_xform_blf_I; extern  _GLOBAL_143_T  _GLOBAL_42_enc_xform_blf_I; extern  _GLOBAL_143_T  _GLOBAL_43_enc_xform_blf_I; extern  _GLOBAL_143_T  _GLOBAL_44_enc_xform_blf_I; extern  _GLOBAL_143_T  _GLOBAL_45_enc_xform_blf_I; extern  _GLOBAL_143_T  _GLOBAL_46_enc_xform_blf_I; extern  _GLOBAL_143_T  _GLOBAL_47_enc_xform_blf_I; extern  _GLOBAL_143_T  _GLOBAL_48_enc_xform_blf_I; extern  _GLOBAL_143_T  _GLOBAL_49_enc_xform_blf_I; static __attribute__ ((unused)) __typeof__(_GLOBAL_0_enc_xform_blf_I) *_GLOBAL_enc_xform_blf_36_A[NUM_STACKS] = { &_GLOBAL_0_enc_xform_blf_I, &_GLOBAL_1_enc_xform_blf_I, &_GLOBAL_2_enc_xform_blf_I, &_GLOBAL_3_enc_xform_blf_I, &_GLOBAL_4_enc_xform_blf_I, &_GLOBAL_5_enc_xform_blf_I, &_GLOBAL_6_enc_xform_blf_I, &_GLOBAL_7_enc_xform_blf_I, &_GLOBAL_8_enc_xform_blf_I, &_GLOBAL_9_enc_xform_blf_I, &_GLOBAL_10_enc_xform_blf_I, &_GLOBAL_11_enc_xform_blf_I, &_GLOBAL_12_enc_xform_blf_I, &_GLOBAL_13_enc_xform_blf_I, &_GLOBAL_14_enc_xform_blf_I, &_GLOBAL_15_enc_xform_blf_I, &_GLOBAL_16_enc_xform_blf_I, &_GLOBAL_17_enc_xform_blf_I, &_GLOBAL_18_enc_xform_blf_I, &_GLOBAL_19_enc_xform_blf_I, &_GLOBAL_20_enc_xform_blf_I, &_GLOBAL_21_enc_xform_blf_I, &_GLOBAL_22_enc_xform_blf_I, &_GLOBAL_23_enc_xform_blf_I, &_GLOBAL_24_enc_xform_blf_I, &_GLOBAL_25_enc_xform_blf_I, &_GLOBAL_26_enc_xform_blf_I, &_GLOBAL_27_enc_xform_blf_I, &_GLOBAL_28_enc_xform_blf_I, &_GLOBAL_29_enc_xform_blf_I, &_GLOBAL_30_enc_xform_blf_I, &_GLOBAL_31_enc_xform_blf_I, &_GLOBAL_32_enc_xform_blf_I, &_GLOBAL_33_enc_xform_blf_I, &_GLOBAL_34_enc_xform_blf_I, &_GLOBAL_35_enc_xform_blf_I, &_GLOBAL_36_enc_xform_blf_I, &_GLOBAL_37_enc_xform_blf_I, &_GLOBAL_38_enc_xform_blf_I, &_GLOBAL_39_enc_xform_blf_I, &_GLOBAL_40_enc_xform_blf_I, &_GLOBAL_41_enc_xform_blf_I, &_GLOBAL_42_enc_xform_blf_I, &_GLOBAL_43_enc_xform_blf_I, &_GLOBAL_44_enc_xform_blf_I, &_GLOBAL_45_enc_xform_blf_I, &_GLOBAL_46_enc_xform_blf_I, &_GLOBAL_47_enc_xform_blf_I, &_GLOBAL_48_enc_xform_blf_I, &_GLOBAL_49_enc_xform_blf_I, };   
typedef  struct enc_xform   _GLOBAL_144_T; extern  _GLOBAL_144_T  _GLOBAL_0_enc_xform_cast5_I; extern  _GLOBAL_144_T  _GLOBAL_1_enc_xform_cast5_I; extern  _GLOBAL_144_T  _GLOBAL_2_enc_xform_cast5_I; extern  _GLOBAL_144_T  _GLOBAL_3_enc_xform_cast5_I; extern  _GLOBAL_144_T  _GLOBAL_4_enc_xform_cast5_I; extern  _GLOBAL_144_T  _GLOBAL_5_enc_xform_cast5_I; extern  _GLOBAL_144_T  _GLOBAL_6_enc_xform_cast5_I; extern  _GLOBAL_144_T  _GLOBAL_7_enc_xform_cast5_I; extern  _GLOBAL_144_T  _GLOBAL_8_enc_xform_cast5_I; extern  _GLOBAL_144_T  _GLOBAL_9_enc_xform_cast5_I; extern  _GLOBAL_144_T  _GLOBAL_10_enc_xform_cast5_I; extern  _GLOBAL_144_T  _GLOBAL_11_enc_xform_cast5_I; extern  _GLOBAL_144_T  _GLOBAL_12_enc_xform_cast5_I; extern  _GLOBAL_144_T  _GLOBAL_13_enc_xform_cast5_I; extern  _GLOBAL_144_T  _GLOBAL_14_enc_xform_cast5_I; extern  _GLOBAL_144_T  _GLOBAL_15_enc_xform_cast5_I; extern  _GLOBAL_144_T  _GLOBAL_16_enc_xform_cast5_I; extern  _GLOBAL_144_T  _GLOBAL_17_enc_xform_cast5_I; extern  _GLOBAL_144_T  _GLOBAL_18_enc_xform_cast5_I; extern  _GLOBAL_144_T  _GLOBAL_19_enc_xform_cast5_I; extern  _GLOBAL_144_T  _GLOBAL_20_enc_xform_cast5_I; extern  _GLOBAL_144_T  _GLOBAL_21_enc_xform_cast5_I; extern  _GLOBAL_144_T  _GLOBAL_22_enc_xform_cast5_I; extern  _GLOBAL_144_T  _GLOBAL_23_enc_xform_cast5_I; extern  _GLOBAL_144_T  _GLOBAL_24_enc_xform_cast5_I; extern  _GLOBAL_144_T  _GLOBAL_25_enc_xform_cast5_I; extern  _GLOBAL_144_T  _GLOBAL_26_enc_xform_cast5_I; extern  _GLOBAL_144_T  _GLOBAL_27_enc_xform_cast5_I; extern  _GLOBAL_144_T  _GLOBAL_28_enc_xform_cast5_I; extern  _GLOBAL_144_T  _GLOBAL_29_enc_xform_cast5_I; extern  _GLOBAL_144_T  _GLOBAL_30_enc_xform_cast5_I; extern  _GLOBAL_144_T  _GLOBAL_31_enc_xform_cast5_I; extern  _GLOBAL_144_T  _GLOBAL_32_enc_xform_cast5_I; extern  _GLOBAL_144_T  _GLOBAL_33_enc_xform_cast5_I; extern  _GLOBAL_144_T  _GLOBAL_34_enc_xform_cast5_I; extern  _GLOBAL_144_T  _GLOBAL_35_enc_xform_cast5_I; extern  _GLOBAL_144_T  _GLOBAL_36_enc_xform_cast5_I; extern  _GLOBAL_144_T  _GLOBAL_37_enc_xform_cast5_I; extern  _GLOBAL_144_T  _GLOBAL_38_enc_xform_cast5_I; extern  _GLOBAL_144_T  _GLOBAL_39_enc_xform_cast5_I; extern  _GLOBAL_144_T  _GLOBAL_40_enc_xform_cast5_I; extern  _GLOBAL_144_T  _GLOBAL_41_enc_xform_cast5_I; extern  _GLOBAL_144_T  _GLOBAL_42_enc_xform_cast5_I; extern  _GLOBAL_144_T  _GLOBAL_43_enc_xform_cast5_I; extern  _GLOBAL_144_T  _GLOBAL_44_enc_xform_cast5_I; extern  _GLOBAL_144_T  _GLOBAL_45_enc_xform_cast5_I; extern  _GLOBAL_144_T  _GLOBAL_46_enc_xform_cast5_I; extern  _GLOBAL_144_T  _GLOBAL_47_enc_xform_cast5_I; extern  _GLOBAL_144_T  _GLOBAL_48_enc_xform_cast5_I; extern  _GLOBAL_144_T  _GLOBAL_49_enc_xform_cast5_I; static __attribute__ ((unused)) __typeof__(_GLOBAL_0_enc_xform_cast5_I) *_GLOBAL_enc_xform_cast5_37_A[NUM_STACKS] = { &_GLOBAL_0_enc_xform_cast5_I, &_GLOBAL_1_enc_xform_cast5_I, &_GLOBAL_2_enc_xform_cast5_I, &_GLOBAL_3_enc_xform_cast5_I, &_GLOBAL_4_enc_xform_cast5_I, &_GLOBAL_5_enc_xform_cast5_I, &_GLOBAL_6_enc_xform_cast5_I, &_GLOBAL_7_enc_xform_cast5_I, &_GLOBAL_8_enc_xform_cast5_I, &_GLOBAL_9_enc_xform_cast5_I, &_GLOBAL_10_enc_xform_cast5_I, &_GLOBAL_11_enc_xform_cast5_I, &_GLOBAL_12_enc_xform_cast5_I, &_GLOBAL_13_enc_xform_cast5_I, &_GLOBAL_14_enc_xform_cast5_I, &_GLOBAL_15_enc_xform_cast5_I, &_GLOBAL_16_enc_xform_cast5_I, &_GLOBAL_17_enc_xform_cast5_I, &_GLOBAL_18_enc_xform_cast5_I, &_GLOBAL_19_enc_xform_cast5_I, &_GLOBAL_20_enc_xform_cast5_I, &_GLOBAL_21_enc_xform_cast5_I, &_GLOBAL_22_enc_xform_cast5_I, &_GLOBAL_23_enc_xform_cast5_I, &_GLOBAL_24_enc_xform_cast5_I, &_GLOBAL_25_enc_xform_cast5_I, &_GLOBAL_26_enc_xform_cast5_I, &_GLOBAL_27_enc_xform_cast5_I, &_GLOBAL_28_enc_xform_cast5_I, &_GLOBAL_29_enc_xform_cast5_I, &_GLOBAL_30_enc_xform_cast5_I, &_GLOBAL_31_enc_xform_cast5_I, &_GLOBAL_32_enc_xform_cast5_I, &_GLOBAL_33_enc_xform_cast5_I, &_GLOBAL_34_enc_xform_cast5_I, &_GLOBAL_35_enc_xform_cast5_I, &_GLOBAL_36_enc_xform_cast5_I, &_GLOBAL_37_enc_xform_cast5_I, &_GLOBAL_38_enc_xform_cast5_I, &_GLOBAL_39_enc_xform_cast5_I, &_GLOBAL_40_enc_xform_cast5_I, &_GLOBAL_41_enc_xform_cast5_I, &_GLOBAL_42_enc_xform_cast5_I, &_GLOBAL_43_enc_xform_cast5_I, &_GLOBAL_44_enc_xform_cast5_I, &_GLOBAL_45_enc_xform_cast5_I, &_GLOBAL_46_enc_xform_cast5_I, &_GLOBAL_47_enc_xform_cast5_I, &_GLOBAL_48_enc_xform_cast5_I, &_GLOBAL_49_enc_xform_cast5_I, };   
typedef  struct enc_xform   _GLOBAL_145_T; extern  _GLOBAL_145_T  _GLOBAL_0_enc_xform_skipjack_I; extern  _GLOBAL_145_T  _GLOBAL_1_enc_xform_skipjack_I; extern  _GLOBAL_145_T  _GLOBAL_2_enc_xform_skipjack_I; extern  _GLOBAL_145_T  _GLOBAL_3_enc_xform_skipjack_I; extern  _GLOBAL_145_T  _GLOBAL_4_enc_xform_skipjack_I; extern  _GLOBAL_145_T  _GLOBAL_5_enc_xform_skipjack_I; extern  _GLOBAL_145_T  _GLOBAL_6_enc_xform_skipjack_I; extern  _GLOBAL_145_T  _GLOBAL_7_enc_xform_skipjack_I; extern  _GLOBAL_145_T  _GLOBAL_8_enc_xform_skipjack_I; extern  _GLOBAL_145_T  _GLOBAL_9_enc_xform_skipjack_I; extern  _GLOBAL_145_T  _GLOBAL_10_enc_xform_skipjack_I; extern  _GLOBAL_145_T  _GLOBAL_11_enc_xform_skipjack_I; extern  _GLOBAL_145_T  _GLOBAL_12_enc_xform_skipjack_I; extern  _GLOBAL_145_T  _GLOBAL_13_enc_xform_skipjack_I; extern  _GLOBAL_145_T  _GLOBAL_14_enc_xform_skipjack_I; extern  _GLOBAL_145_T  _GLOBAL_15_enc_xform_skipjack_I; extern  _GLOBAL_145_T  _GLOBAL_16_enc_xform_skipjack_I; extern  _GLOBAL_145_T  _GLOBAL_17_enc_xform_skipjack_I; extern  _GLOBAL_145_T  _GLOBAL_18_enc_xform_skipjack_I; extern  _GLOBAL_145_T  _GLOBAL_19_enc_xform_skipjack_I; extern  _GLOBAL_145_T  _GLOBAL_20_enc_xform_skipjack_I; extern  _GLOBAL_145_T  _GLOBAL_21_enc_xform_skipjack_I; extern  _GLOBAL_145_T  _GLOBAL_22_enc_xform_skipjack_I; extern  _GLOBAL_145_T  _GLOBAL_23_enc_xform_skipjack_I; extern  _GLOBAL_145_T  _GLOBAL_24_enc_xform_skipjack_I; extern  _GLOBAL_145_T  _GLOBAL_25_enc_xform_skipjack_I; extern  _GLOBAL_145_T  _GLOBAL_26_enc_xform_skipjack_I; extern  _GLOBAL_145_T  _GLOBAL_27_enc_xform_skipjack_I; extern  _GLOBAL_145_T  _GLOBAL_28_enc_xform_skipjack_I; extern  _GLOBAL_145_T  _GLOBAL_29_enc_xform_skipjack_I; extern  _GLOBAL_145_T  _GLOBAL_30_enc_xform_skipjack_I; extern  _GLOBAL_145_T  _GLOBAL_31_enc_xform_skipjack_I; extern  _GLOBAL_145_T  _GLOBAL_32_enc_xform_skipjack_I; extern  _GLOBAL_145_T  _GLOBAL_33_enc_xform_skipjack_I; extern  _GLOBAL_145_T  _GLOBAL_34_enc_xform_skipjack_I; extern  _GLOBAL_145_T  _GLOBAL_35_enc_xform_skipjack_I; extern  _GLOBAL_145_T  _GLOBAL_36_enc_xform_skipjack_I; extern  _GLOBAL_145_T  _GLOBAL_37_enc_xform_skipjack_I; extern  _GLOBAL_145_T  _GLOBAL_38_enc_xform_skipjack_I; extern  _GLOBAL_145_T  _GLOBAL_39_enc_xform_skipjack_I; extern  _GLOBAL_145_T  _GLOBAL_40_enc_xform_skipjack_I; extern  _GLOBAL_145_T  _GLOBAL_41_enc_xform_skipjack_I; extern  _GLOBAL_145_T  _GLOBAL_42_enc_xform_skipjack_I; extern  _GLOBAL_145_T  _GLOBAL_43_enc_xform_skipjack_I; extern  _GLOBAL_145_T  _GLOBAL_44_enc_xform_skipjack_I; extern  _GLOBAL_145_T  _GLOBAL_45_enc_xform_skipjack_I; extern  _GLOBAL_145_T  _GLOBAL_46_enc_xform_skipjack_I; extern  _GLOBAL_145_T  _GLOBAL_47_enc_xform_skipjack_I; extern  _GLOBAL_145_T  _GLOBAL_48_enc_xform_skipjack_I; extern  _GLOBAL_145_T  _GLOBAL_49_enc_xform_skipjack_I; static __attribute__ ((unused)) __typeof__(_GLOBAL_0_enc_xform_skipjack_I) *_GLOBAL_enc_xform_skipjack_38_A[NUM_STACKS] = { &_GLOBAL_0_enc_xform_skipjack_I, &_GLOBAL_1_enc_xform_skipjack_I, &_GLOBAL_2_enc_xform_skipjack_I, &_GLOBAL_3_enc_xform_skipjack_I, &_GLOBAL_4_enc_xform_skipjack_I, &_GLOBAL_5_enc_xform_skipjack_I, &_GLOBAL_6_enc_xform_skipjack_I, &_GLOBAL_7_enc_xform_skipjack_I, &_GLOBAL_8_enc_xform_skipjack_I, &_GLOBAL_9_enc_xform_skipjack_I, &_GLOBAL_10_enc_xform_skipjack_I, &_GLOBAL_11_enc_xform_skipjack_I, &_GLOBAL_12_enc_xform_skipjack_I, &_GLOBAL_13_enc_xform_skipjack_I, &_GLOBAL_14_enc_xform_skipjack_I, &_GLOBAL_15_enc_xform_skipjack_I, &_GLOBAL_16_enc_xform_skipjack_I, &_GLOBAL_17_enc_xform_skipjack_I, &_GLOBAL_18_enc_xform_skipjack_I, &_GLOBAL_19_enc_xform_skipjack_I, &_GLOBAL_20_enc_xform_skipjack_I, &_GLOBAL_21_enc_xform_skipjack_I, &_GLOBAL_22_enc_xform_skipjack_I, &_GLOBAL_23_enc_xform_skipjack_I, &_GLOBAL_24_enc_xform_skipjack_I, &_GLOBAL_25_enc_xform_skipjack_I, &_GLOBAL_26_enc_xform_skipjack_I, &_GLOBAL_27_enc_xform_skipjack_I, &_GLOBAL_28_enc_xform_skipjack_I, &_GLOBAL_29_enc_xform_skipjack_I, &_GLOBAL_30_enc_xform_skipjack_I, &_GLOBAL_31_enc_xform_skipjack_I, &_GLOBAL_32_enc_xform_skipjack_I, &_GLOBAL_33_enc_xform_skipjack_I, &_GLOBAL_34_enc_xform_skipjack_I, &_GLOBAL_35_enc_xform_skipjack_I, &_GLOBAL_36_enc_xform_skipjack_I, &_GLOBAL_37_enc_xform_skipjack_I, &_GLOBAL_38_enc_xform_skipjack_I, &_GLOBAL_39_enc_xform_skipjack_I, &_GLOBAL_40_enc_xform_skipjack_I, &_GLOBAL_41_enc_xform_skipjack_I, &_GLOBAL_42_enc_xform_skipjack_I, &_GLOBAL_43_enc_xform_skipjack_I, &_GLOBAL_44_enc_xform_skipjack_I, &_GLOBAL_45_enc_xform_skipjack_I, &_GLOBAL_46_enc_xform_skipjack_I, &_GLOBAL_47_enc_xform_skipjack_I, &_GLOBAL_48_enc_xform_skipjack_I, &_GLOBAL_49_enc_xform_skipjack_I, };   
typedef  struct enc_xform   _GLOBAL_146_T; extern  _GLOBAL_146_T  global_enc_xform_rijndael128[NUM_STACKS];    
typedef  struct enc_xform   _GLOBAL_147_T; extern  _GLOBAL_147_T  global_enc_xform_arc4[NUM_STACKS];    
typedef  struct enc_xform   _GLOBAL_148_T; extern  _GLOBAL_148_T  global_enc_xform_null[NUM_STACKS];    

typedef  struct auth_hash   _GLOBAL_149_T; extern  _GLOBAL_149_T  global_auth_hash_md5[NUM_STACKS];    
typedef  struct auth_hash   _GLOBAL_150_T; extern  _GLOBAL_150_T  global_auth_hash_sha1[NUM_STACKS];    
typedef  struct auth_hash   _GLOBAL_151_T; extern  _GLOBAL_151_T  global_auth_hash_key_md5[NUM_STACKS];    
typedef  struct auth_hash   _GLOBAL_152_T; extern  _GLOBAL_152_T  global_auth_hash_key_sha1[NUM_STACKS];    
typedef  struct auth_hash   _GLOBAL_153_T; extern  _GLOBAL_153_T  _GLOBAL_0_auth_hash_hmac_md5_96_I; extern  _GLOBAL_153_T  _GLOBAL_1_auth_hash_hmac_md5_96_I; extern  _GLOBAL_153_T  _GLOBAL_2_auth_hash_hmac_md5_96_I; extern  _GLOBAL_153_T  _GLOBAL_3_auth_hash_hmac_md5_96_I; extern  _GLOBAL_153_T  _GLOBAL_4_auth_hash_hmac_md5_96_I; extern  _GLOBAL_153_T  _GLOBAL_5_auth_hash_hmac_md5_96_I; extern  _GLOBAL_153_T  _GLOBAL_6_auth_hash_hmac_md5_96_I; extern  _GLOBAL_153_T  _GLOBAL_7_auth_hash_hmac_md5_96_I; extern  _GLOBAL_153_T  _GLOBAL_8_auth_hash_hmac_md5_96_I; extern  _GLOBAL_153_T  _GLOBAL_9_auth_hash_hmac_md5_96_I; extern  _GLOBAL_153_T  _GLOBAL_10_auth_hash_hmac_md5_96_I; extern  _GLOBAL_153_T  _GLOBAL_11_auth_hash_hmac_md5_96_I; extern  _GLOBAL_153_T  _GLOBAL_12_auth_hash_hmac_md5_96_I; extern  _GLOBAL_153_T  _GLOBAL_13_auth_hash_hmac_md5_96_I; extern  _GLOBAL_153_T  _GLOBAL_14_auth_hash_hmac_md5_96_I; extern  _GLOBAL_153_T  _GLOBAL_15_auth_hash_hmac_md5_96_I; extern  _GLOBAL_153_T  _GLOBAL_16_auth_hash_hmac_md5_96_I; extern  _GLOBAL_153_T  _GLOBAL_17_auth_hash_hmac_md5_96_I; extern  _GLOBAL_153_T  _GLOBAL_18_auth_hash_hmac_md5_96_I; extern  _GLOBAL_153_T  _GLOBAL_19_auth_hash_hmac_md5_96_I; extern  _GLOBAL_153_T  _GLOBAL_20_auth_hash_hmac_md5_96_I; extern  _GLOBAL_153_T  _GLOBAL_21_auth_hash_hmac_md5_96_I; extern  _GLOBAL_153_T  _GLOBAL_22_auth_hash_hmac_md5_96_I; extern  _GLOBAL_153_T  _GLOBAL_23_auth_hash_hmac_md5_96_I; extern  _GLOBAL_153_T  _GLOBAL_24_auth_hash_hmac_md5_96_I; extern  _GLOBAL_153_T  _GLOBAL_25_auth_hash_hmac_md5_96_I; extern  _GLOBAL_153_T  _GLOBAL_26_auth_hash_hmac_md5_96_I; extern  _GLOBAL_153_T  _GLOBAL_27_auth_hash_hmac_md5_96_I; extern  _GLOBAL_153_T  _GLOBAL_28_auth_hash_hmac_md5_96_I; extern  _GLOBAL_153_T  _GLOBAL_29_auth_hash_hmac_md5_96_I; extern  _GLOBAL_153_T  _GLOBAL_30_auth_hash_hmac_md5_96_I; extern  _GLOBAL_153_T  _GLOBAL_31_auth_hash_hmac_md5_96_I; extern  _GLOBAL_153_T  _GLOBAL_32_auth_hash_hmac_md5_96_I; extern  _GLOBAL_153_T  _GLOBAL_33_auth_hash_hmac_md5_96_I; extern  _GLOBAL_153_T  _GLOBAL_34_auth_hash_hmac_md5_96_I; extern  _GLOBAL_153_T  _GLOBAL_35_auth_hash_hmac_md5_96_I; extern  _GLOBAL_153_T  _GLOBAL_36_auth_hash_hmac_md5_96_I; extern  _GLOBAL_153_T  _GLOBAL_37_auth_hash_hmac_md5_96_I; extern  _GLOBAL_153_T  _GLOBAL_38_auth_hash_hmac_md5_96_I; extern  _GLOBAL_153_T  _GLOBAL_39_auth_hash_hmac_md5_96_I; extern  _GLOBAL_153_T  _GLOBAL_40_auth_hash_hmac_md5_96_I; extern  _GLOBAL_153_T  _GLOBAL_41_auth_hash_hmac_md5_96_I; extern  _GLOBAL_153_T  _GLOBAL_42_auth_hash_hmac_md5_96_I; extern  _GLOBAL_153_T  _GLOBAL_43_auth_hash_hmac_md5_96_I; extern  _GLOBAL_153_T  _GLOBAL_44_auth_hash_hmac_md5_96_I; extern  _GLOBAL_153_T  _GLOBAL_45_auth_hash_hmac_md5_96_I; extern  _GLOBAL_153_T  _GLOBAL_46_auth_hash_hmac_md5_96_I; extern  _GLOBAL_153_T  _GLOBAL_47_auth_hash_hmac_md5_96_I; extern  _GLOBAL_153_T  _GLOBAL_48_auth_hash_hmac_md5_96_I; extern  _GLOBAL_153_T  _GLOBAL_49_auth_hash_hmac_md5_96_I; static __attribute__ ((unused)) __typeof__(_GLOBAL_0_auth_hash_hmac_md5_96_I) *_GLOBAL_auth_hash_hmac_md5_96_39_A[NUM_STACKS];   
typedef  struct auth_hash   _GLOBAL_154_T; extern  _GLOBAL_154_T  _GLOBAL_0_auth_hash_hmac_sha1_96_I; extern  _GLOBAL_154_T  _GLOBAL_1_auth_hash_hmac_sha1_96_I; extern  _GLOBAL_154_T  _GLOBAL_2_auth_hash_hmac_sha1_96_I; extern  _GLOBAL_154_T  _GLOBAL_3_auth_hash_hmac_sha1_96_I; extern  _GLOBAL_154_T  _GLOBAL_4_auth_hash_hmac_sha1_96_I; extern  _GLOBAL_154_T  _GLOBAL_5_auth_hash_hmac_sha1_96_I; extern  _GLOBAL_154_T  _GLOBAL_6_auth_hash_hmac_sha1_96_I; extern  _GLOBAL_154_T  _GLOBAL_7_auth_hash_hmac_sha1_96_I; extern  _GLOBAL_154_T  _GLOBAL_8_auth_hash_hmac_sha1_96_I; extern  _GLOBAL_154_T  _GLOBAL_9_auth_hash_hmac_sha1_96_I; extern  _GLOBAL_154_T  _GLOBAL_10_auth_hash_hmac_sha1_96_I; extern  _GLOBAL_154_T  _GLOBAL_11_auth_hash_hmac_sha1_96_I; extern  _GLOBAL_154_T  _GLOBAL_12_auth_hash_hmac_sha1_96_I; extern  _GLOBAL_154_T  _GLOBAL_13_auth_hash_hmac_sha1_96_I; extern  _GLOBAL_154_T  _GLOBAL_14_auth_hash_hmac_sha1_96_I; extern  _GLOBAL_154_T  _GLOBAL_15_auth_hash_hmac_sha1_96_I; extern  _GLOBAL_154_T  _GLOBAL_16_auth_hash_hmac_sha1_96_I; extern  _GLOBAL_154_T  _GLOBAL_17_auth_hash_hmac_sha1_96_I; extern  _GLOBAL_154_T  _GLOBAL_18_auth_hash_hmac_sha1_96_I; extern  _GLOBAL_154_T  _GLOBAL_19_auth_hash_hmac_sha1_96_I; extern  _GLOBAL_154_T  _GLOBAL_20_auth_hash_hmac_sha1_96_I; extern  _GLOBAL_154_T  _GLOBAL_21_auth_hash_hmac_sha1_96_I; extern  _GLOBAL_154_T  _GLOBAL_22_auth_hash_hmac_sha1_96_I; extern  _GLOBAL_154_T  _GLOBAL_23_auth_hash_hmac_sha1_96_I; extern  _GLOBAL_154_T  _GLOBAL_24_auth_hash_hmac_sha1_96_I; extern  _GLOBAL_154_T  _GLOBAL_25_auth_hash_hmac_sha1_96_I; extern  _GLOBAL_154_T  _GLOBAL_26_auth_hash_hmac_sha1_96_I; extern  _GLOBAL_154_T  _GLOBAL_27_auth_hash_hmac_sha1_96_I; extern  _GLOBAL_154_T  _GLOBAL_28_auth_hash_hmac_sha1_96_I; extern  _GLOBAL_154_T  _GLOBAL_29_auth_hash_hmac_sha1_96_I; extern  _GLOBAL_154_T  _GLOBAL_30_auth_hash_hmac_sha1_96_I; extern  _GLOBAL_154_T  _GLOBAL_31_auth_hash_hmac_sha1_96_I; extern  _GLOBAL_154_T  _GLOBAL_32_auth_hash_hmac_sha1_96_I; extern  _GLOBAL_154_T  _GLOBAL_33_auth_hash_hmac_sha1_96_I; extern  _GLOBAL_154_T  _GLOBAL_34_auth_hash_hmac_sha1_96_I; extern  _GLOBAL_154_T  _GLOBAL_35_auth_hash_hmac_sha1_96_I; extern  _GLOBAL_154_T  _GLOBAL_36_auth_hash_hmac_sha1_96_I; extern  _GLOBAL_154_T  _GLOBAL_37_auth_hash_hmac_sha1_96_I; extern  _GLOBAL_154_T  _GLOBAL_38_auth_hash_hmac_sha1_96_I; extern  _GLOBAL_154_T  _GLOBAL_39_auth_hash_hmac_sha1_96_I; extern  _GLOBAL_154_T  _GLOBAL_40_auth_hash_hmac_sha1_96_I; extern  _GLOBAL_154_T  _GLOBAL_41_auth_hash_hmac_sha1_96_I; extern  _GLOBAL_154_T  _GLOBAL_42_auth_hash_hmac_sha1_96_I; extern  _GLOBAL_154_T  _GLOBAL_43_auth_hash_hmac_sha1_96_I; extern  _GLOBAL_154_T  _GLOBAL_44_auth_hash_hmac_sha1_96_I; extern  _GLOBAL_154_T  _GLOBAL_45_auth_hash_hmac_sha1_96_I; extern  _GLOBAL_154_T  _GLOBAL_46_auth_hash_hmac_sha1_96_I; extern  _GLOBAL_154_T  _GLOBAL_47_auth_hash_hmac_sha1_96_I; extern  _GLOBAL_154_T  _GLOBAL_48_auth_hash_hmac_sha1_96_I; extern  _GLOBAL_154_T  _GLOBAL_49_auth_hash_hmac_sha1_96_I; static __attribute__ ((unused)) __typeof__(_GLOBAL_0_auth_hash_hmac_sha1_96_I) *_GLOBAL_auth_hash_hmac_sha1_96_40_A[NUM_STACKS];   
typedef  struct auth_hash   _GLOBAL_155_T; extern  _GLOBAL_155_T  _GLOBAL_0_auth_hash_hmac_ripemd_160_96_I; extern  _GLOBAL_155_T  _GLOBAL_1_auth_hash_hmac_ripemd_160_96_I; extern  _GLOBAL_155_T  _GLOBAL_2_auth_hash_hmac_ripemd_160_96_I; extern  _GLOBAL_155_T  _GLOBAL_3_auth_hash_hmac_ripemd_160_96_I; extern  _GLOBAL_155_T  _GLOBAL_4_auth_hash_hmac_ripemd_160_96_I; extern  _GLOBAL_155_T  _GLOBAL_5_auth_hash_hmac_ripemd_160_96_I; extern  _GLOBAL_155_T  _GLOBAL_6_auth_hash_hmac_ripemd_160_96_I; extern  _GLOBAL_155_T  _GLOBAL_7_auth_hash_hmac_ripemd_160_96_I; extern  _GLOBAL_155_T  _GLOBAL_8_auth_hash_hmac_ripemd_160_96_I; extern  _GLOBAL_155_T  _GLOBAL_9_auth_hash_hmac_ripemd_160_96_I; extern  _GLOBAL_155_T  _GLOBAL_10_auth_hash_hmac_ripemd_160_96_I; extern  _GLOBAL_155_T  _GLOBAL_11_auth_hash_hmac_ripemd_160_96_I; extern  _GLOBAL_155_T  _GLOBAL_12_auth_hash_hmac_ripemd_160_96_I; extern  _GLOBAL_155_T  _GLOBAL_13_auth_hash_hmac_ripemd_160_96_I; extern  _GLOBAL_155_T  _GLOBAL_14_auth_hash_hmac_ripemd_160_96_I; extern  _GLOBAL_155_T  _GLOBAL_15_auth_hash_hmac_ripemd_160_96_I; extern  _GLOBAL_155_T  _GLOBAL_16_auth_hash_hmac_ripemd_160_96_I; extern  _GLOBAL_155_T  _GLOBAL_17_auth_hash_hmac_ripemd_160_96_I; extern  _GLOBAL_155_T  _GLOBAL_18_auth_hash_hmac_ripemd_160_96_I; extern  _GLOBAL_155_T  _GLOBAL_19_auth_hash_hmac_ripemd_160_96_I; extern  _GLOBAL_155_T  _GLOBAL_20_auth_hash_hmac_ripemd_160_96_I; extern  _GLOBAL_155_T  _GLOBAL_21_auth_hash_hmac_ripemd_160_96_I; extern  _GLOBAL_155_T  _GLOBAL_22_auth_hash_hmac_ripemd_160_96_I; extern  _GLOBAL_155_T  _GLOBAL_23_auth_hash_hmac_ripemd_160_96_I; extern  _GLOBAL_155_T  _GLOBAL_24_auth_hash_hmac_ripemd_160_96_I; extern  _GLOBAL_155_T  _GLOBAL_25_auth_hash_hmac_ripemd_160_96_I; extern  _GLOBAL_155_T  _GLOBAL_26_auth_hash_hmac_ripemd_160_96_I; extern  _GLOBAL_155_T  _GLOBAL_27_auth_hash_hmac_ripemd_160_96_I; extern  _GLOBAL_155_T  _GLOBAL_28_auth_hash_hmac_ripemd_160_96_I; extern  _GLOBAL_155_T  _GLOBAL_29_auth_hash_hmac_ripemd_160_96_I; extern  _GLOBAL_155_T  _GLOBAL_30_auth_hash_hmac_ripemd_160_96_I; extern  _GLOBAL_155_T  _GLOBAL_31_auth_hash_hmac_ripemd_160_96_I; extern  _GLOBAL_155_T  _GLOBAL_32_auth_hash_hmac_ripemd_160_96_I; extern  _GLOBAL_155_T  _GLOBAL_33_auth_hash_hmac_ripemd_160_96_I; extern  _GLOBAL_155_T  _GLOBAL_34_auth_hash_hmac_ripemd_160_96_I; extern  _GLOBAL_155_T  _GLOBAL_35_auth_hash_hmac_ripemd_160_96_I; extern  _GLOBAL_155_T  _GLOBAL_36_auth_hash_hmac_ripemd_160_96_I; extern  _GLOBAL_155_T  _GLOBAL_37_auth_hash_hmac_ripemd_160_96_I; extern  _GLOBAL_155_T  _GLOBAL_38_auth_hash_hmac_ripemd_160_96_I; extern  _GLOBAL_155_T  _GLOBAL_39_auth_hash_hmac_ripemd_160_96_I; extern  _GLOBAL_155_T  _GLOBAL_40_auth_hash_hmac_ripemd_160_96_I; extern  _GLOBAL_155_T  _GLOBAL_41_auth_hash_hmac_ripemd_160_96_I; extern  _GLOBAL_155_T  _GLOBAL_42_auth_hash_hmac_ripemd_160_96_I; extern  _GLOBAL_155_T  _GLOBAL_43_auth_hash_hmac_ripemd_160_96_I; extern  _GLOBAL_155_T  _GLOBAL_44_auth_hash_hmac_ripemd_160_96_I; extern  _GLOBAL_155_T  _GLOBAL_45_auth_hash_hmac_ripemd_160_96_I; extern  _GLOBAL_155_T  _GLOBAL_46_auth_hash_hmac_ripemd_160_96_I; extern  _GLOBAL_155_T  _GLOBAL_47_auth_hash_hmac_ripemd_160_96_I; extern  _GLOBAL_155_T  _GLOBAL_48_auth_hash_hmac_ripemd_160_96_I; extern  _GLOBAL_155_T  _GLOBAL_49_auth_hash_hmac_ripemd_160_96_I; static __attribute__ ((unused)) __typeof__(_GLOBAL_0_auth_hash_hmac_ripemd_160_96_I) *_GLOBAL_auth_hash_hmac_ripemd_160_96_41_A[NUM_STACKS];   
typedef  struct auth_hash   _GLOBAL_156_T; extern  _GLOBAL_156_T  global_auth_hash_hmac_sha2_256_96[NUM_STACKS];    
typedef  struct auth_hash   _GLOBAL_157_T; extern  _GLOBAL_157_T  global_auth_hash_hmac_sha2_384_96[NUM_STACKS];    
typedef  struct auth_hash   _GLOBAL_158_T; extern  _GLOBAL_158_T  global_auth_hash_hmac_sha2_512_96[NUM_STACKS];    

typedef  struct comp_algo   _GLOBAL_159_T; extern  _GLOBAL_159_T  _GLOBAL_0_comp_algo_deflate_I; extern  _GLOBAL_159_T  _GLOBAL_1_comp_algo_deflate_I; extern  _GLOBAL_159_T  _GLOBAL_2_comp_algo_deflate_I; extern  _GLOBAL_159_T  _GLOBAL_3_comp_algo_deflate_I; extern  _GLOBAL_159_T  _GLOBAL_4_comp_algo_deflate_I; extern  _GLOBAL_159_T  _GLOBAL_5_comp_algo_deflate_I; extern  _GLOBAL_159_T  _GLOBAL_6_comp_algo_deflate_I; extern  _GLOBAL_159_T  _GLOBAL_7_comp_algo_deflate_I; extern  _GLOBAL_159_T  _GLOBAL_8_comp_algo_deflate_I; extern  _GLOBAL_159_T  _GLOBAL_9_comp_algo_deflate_I; extern  _GLOBAL_159_T  _GLOBAL_10_comp_algo_deflate_I; extern  _GLOBAL_159_T  _GLOBAL_11_comp_algo_deflate_I; extern  _GLOBAL_159_T  _GLOBAL_12_comp_algo_deflate_I; extern  _GLOBAL_159_T  _GLOBAL_13_comp_algo_deflate_I; extern  _GLOBAL_159_T  _GLOBAL_14_comp_algo_deflate_I; extern  _GLOBAL_159_T  _GLOBAL_15_comp_algo_deflate_I; extern  _GLOBAL_159_T  _GLOBAL_16_comp_algo_deflate_I; extern  _GLOBAL_159_T  _GLOBAL_17_comp_algo_deflate_I; extern  _GLOBAL_159_T  _GLOBAL_18_comp_algo_deflate_I; extern  _GLOBAL_159_T  _GLOBAL_19_comp_algo_deflate_I; extern  _GLOBAL_159_T  _GLOBAL_20_comp_algo_deflate_I; extern  _GLOBAL_159_T  _GLOBAL_21_comp_algo_deflate_I; extern  _GLOBAL_159_T  _GLOBAL_22_comp_algo_deflate_I; extern  _GLOBAL_159_T  _GLOBAL_23_comp_algo_deflate_I; extern  _GLOBAL_159_T  _GLOBAL_24_comp_algo_deflate_I; extern  _GLOBAL_159_T  _GLOBAL_25_comp_algo_deflate_I; extern  _GLOBAL_159_T  _GLOBAL_26_comp_algo_deflate_I; extern  _GLOBAL_159_T  _GLOBAL_27_comp_algo_deflate_I; extern  _GLOBAL_159_T  _GLOBAL_28_comp_algo_deflate_I; extern  _GLOBAL_159_T  _GLOBAL_29_comp_algo_deflate_I; extern  _GLOBAL_159_T  _GLOBAL_30_comp_algo_deflate_I; extern  _GLOBAL_159_T  _GLOBAL_31_comp_algo_deflate_I; extern  _GLOBAL_159_T  _GLOBAL_32_comp_algo_deflate_I; extern  _GLOBAL_159_T  _GLOBAL_33_comp_algo_deflate_I; extern  _GLOBAL_159_T  _GLOBAL_34_comp_algo_deflate_I; extern  _GLOBAL_159_T  _GLOBAL_35_comp_algo_deflate_I; extern  _GLOBAL_159_T  _GLOBAL_36_comp_algo_deflate_I; extern  _GLOBAL_159_T  _GLOBAL_37_comp_algo_deflate_I; extern  _GLOBAL_159_T  _GLOBAL_38_comp_algo_deflate_I; extern  _GLOBAL_159_T  _GLOBAL_39_comp_algo_deflate_I; extern  _GLOBAL_159_T  _GLOBAL_40_comp_algo_deflate_I; extern  _GLOBAL_159_T  _GLOBAL_41_comp_algo_deflate_I; extern  _GLOBAL_159_T  _GLOBAL_42_comp_algo_deflate_I; extern  _GLOBAL_159_T  _GLOBAL_43_comp_algo_deflate_I; extern  _GLOBAL_159_T  _GLOBAL_44_comp_algo_deflate_I; extern  _GLOBAL_159_T  _GLOBAL_45_comp_algo_deflate_I; extern  _GLOBAL_159_T  _GLOBAL_46_comp_algo_deflate_I; extern  _GLOBAL_159_T  _GLOBAL_47_comp_algo_deflate_I; extern  _GLOBAL_159_T  _GLOBAL_48_comp_algo_deflate_I; extern  _GLOBAL_159_T  _GLOBAL_49_comp_algo_deflate_I; static __attribute__ ((unused)) __typeof__(_GLOBAL_0_comp_algo_deflate_I) *_GLOBAL_comp_algo_deflate_42_A[NUM_STACKS];   
typedef  struct comp_algo   _GLOBAL_160_T; extern  _GLOBAL_160_T  global_comp_algo_lzs[NUM_STACKS];    
# 52 "openbsd3/crypto/cryptodev.c" 2

typedef  struct cryptocap   _GLOBAL_161_T; extern  _GLOBAL_161_T  * global_crypto_drivers[NUM_STACKS];    
typedef  int  _GLOBAL_162_T; extern  _GLOBAL_162_T  global_crypto_drivers_num[NUM_STACKS];   

struct csession {
 struct { struct csession *tqe_next; struct csession **tqe_prev; } next;
 u_int64_t sid;
 u_int32_t ses;

 u_int32_t cipher;
 struct enc_xform *txform;
 u_int32_t mac;
 struct auth_hash *thash;

 caddr_t key;
 int keylen;
 u_char tmp_iv[16];

 caddr_t mackey;
 int mackeylen;
 u_char tmp_mac[20];

 struct iovec iovec[1024];
 struct uio uio;
 int error;
};

struct fcrypt {
 struct csessionlist { struct csession *tqh_first; struct csession **tqh_last; } csessions;
 int sesn;
};

void cryptoattach(int);

int cryptof_read(struct file *, off_t *, struct uio *, struct ucred *);
int cryptof_write(struct file *, off_t *, struct uio *, struct ucred *);
int cryptof_ioctl(struct file *, u_long, caddr_t, struct proc *p);
int cryptof_poll(struct file *, int, struct proc *);
int cryptof_kqfilter(struct file *, struct knote *);
int cryptof_stat(struct file *, struct stat *, struct proc *);
int cryptof_close(struct file *, struct proc *);

typedef  struct fileops   _GLOBAL_163_T; static  _GLOBAL_163_T  global_cryptofops[NUM_STACKS] = {  { cryptof_read , cryptof_write  , cryptof_ioctl  , cryptof_poll  , cryptof_kqfilter  , cryptof_stat  , cryptof_close  } ,  { cryptof_read , cryptof_write  , cryptof_ioctl  , cryptof_poll  , cryptof_kqfilter  , cryptof_stat  , cryptof_close  } ,  { cryptof_read , cryptof_write  , cryptof_ioctl  , cryptof_poll  , cryptof_kqfilter  , cryptof_stat  , cryptof_close  } ,  { cryptof_read , cryptof_write  , cryptof_ioctl  , cryptof_poll  , cryptof_kqfilter  , cryptof_stat  , cryptof_close  } ,  { cryptof_read , cryptof_write  , cryptof_ioctl  , cryptof_poll  , cryptof_kqfilter  , cryptof_stat  , cryptof_close  } ,  { cryptof_read , cryptof_write  , cryptof_ioctl  , cryptof_poll  , cryptof_kqfilter  , cryptof_stat  , cryptof_close  } ,  { cryptof_read , cryptof_write  , cryptof_ioctl  , cryptof_poll  , cryptof_kqfilter  , cryptof_stat  , cryptof_close  } ,  { cryptof_read , cryptof_write  , cryptof_ioctl  , cryptof_poll  , cryptof_kqfilter  , cryptof_stat  , cryptof_close  } ,  { cryptof_read , cryptof_write  , cryptof_ioctl  , cryptof_poll  , cryptof_kqfilter  , cryptof_stat  , cryptof_close  } ,  { cryptof_read , cryptof_write  , cryptof_ioctl  , cryptof_poll  , cryptof_kqfilter  , cryptof_stat  , cryptof_close  } ,  { cryptof_read , cryptof_write  , cryptof_ioctl  , cryptof_poll  , cryptof_kqfilter  , cryptof_stat  , cryptof_close  } ,  { cryptof_read , cryptof_write  , cryptof_ioctl  , cryptof_poll  , cryptof_kqfilter  , cryptof_stat  , cryptof_close  } ,  { cryptof_read , cryptof_write  , cryptof_ioctl  , cryptof_poll  , cryptof_kqfilter  , cryptof_stat  , cryptof_close  } ,  { cryptof_read , cryptof_write  , cryptof_ioctl  , cryptof_poll  , cryptof_kqfilter  , cryptof_stat  , cryptof_close  } ,  { cryptof_read , cryptof_write  , cryptof_ioctl  , cryptof_poll  , cryptof_kqfilter  , cryptof_stat  , cryptof_close  } ,  { cryptof_read , cryptof_write  , cryptof_ioctl  , cryptof_poll  , cryptof_kqfilter  , cryptof_stat  , cryptof_close  } ,  { cryptof_read , cryptof_write  , cryptof_ioctl  , cryptof_poll  , cryptof_kqfilter  , cryptof_stat  , cryptof_close  } ,  { cryptof_read , cryptof_write  , cryptof_ioctl  , cryptof_poll  , cryptof_kqfilter  , cryptof_stat  , cryptof_close  } ,  { cryptof_read , cryptof_write  , cryptof_ioctl  , cryptof_poll  , cryptof_kqfilter  , cryptof_stat  , cryptof_close  } ,  { cryptof_read , cryptof_write  , cryptof_ioctl  , cryptof_poll  , cryptof_kqfilter  , cryptof_stat  , cryptof_close  } ,  { cryptof_read , cryptof_write  , cryptof_ioctl  , cryptof_poll  , cryptof_kqfilter  , cryptof_stat  , cryptof_close  } ,  { cryptof_read , cryptof_write  , cryptof_ioctl  , cryptof_poll  , cryptof_kqfilter  , cryptof_stat  , cryptof_close  } ,  { cryptof_read , cryptof_write  , cryptof_ioctl  , cryptof_poll  , cryptof_kqfilter  , cryptof_stat  , cryptof_close  } ,  { cryptof_read , cryptof_write  , cryptof_ioctl  , cryptof_poll  , cryptof_kqfilter  , cryptof_stat  , cryptof_close  } ,  { cryptof_read , cryptof_write  , cryptof_ioctl  , cryptof_poll  , cryptof_kqfilter  , cryptof_stat  , cryptof_close  } ,  { cryptof_read , cryptof_write  , cryptof_ioctl  , cryptof_poll  , cryptof_kqfilter  , cryptof_stat  , cryptof_close  } ,  { cryptof_read , cryptof_write  , cryptof_ioctl  , cryptof_poll  , cryptof_kqfilter  , cryptof_stat  , cryptof_close  } ,  { cryptof_read , cryptof_write  , cryptof_ioctl  , cryptof_poll  , cryptof_kqfilter  , cryptof_stat  , cryptof_close  } ,  { cryptof_read , cryptof_write  , cryptof_ioctl  , cryptof_poll  , cryptof_kqfilter  , cryptof_stat  , cryptof_close  } ,  { cryptof_read , cryptof_write  , cryptof_ioctl  , cryptof_poll  , cryptof_kqfilter  , cryptof_stat  , cryptof_close  } ,  { cryptof_read , cryptof_write  , cryptof_ioctl  , cryptof_poll  , cryptof_kqfilter  , cryptof_stat  , cryptof_close  } ,  { cryptof_read , cryptof_write  , cryptof_ioctl  , cryptof_poll  , cryptof_kqfilter  , cryptof_stat  , cryptof_close  } ,  { cryptof_read , cryptof_write  , cryptof_ioctl  , cryptof_poll  , cryptof_kqfilter  , cryptof_stat  , cryptof_close  } ,  { cryptof_read , cryptof_write  , cryptof_ioctl  , cryptof_poll  , cryptof_kqfilter  , cryptof_stat  , cryptof_close  } ,  { cryptof_read , cryptof_write  , cryptof_ioctl  , cryptof_poll  , cryptof_kqfilter  , cryptof_stat  , cryptof_close  } ,  { cryptof_read , cryptof_write  , cryptof_ioctl  , cryptof_poll  , cryptof_kqfilter  , cryptof_stat  , cryptof_close  } ,  { cryptof_read , cryptof_write  , cryptof_ioctl  , cryptof_poll  , cryptof_kqfilter  , cryptof_stat  , cryptof_close  } ,  { cryptof_read , cryptof_write  , cryptof_ioctl  , cryptof_poll  , cryptof_kqfilter  , cryptof_stat  , cryptof_close  } ,  { cryptof_read , cryptof_write  , cryptof_ioctl  , cryptof_poll  , cryptof_kqfilter  , cryptof_stat  , cryptof_close  } ,  { cryptof_read , cryptof_write  , cryptof_ioctl  , cryptof_poll  , cryptof_kqfilter  , cryptof_stat  , cryptof_close  } ,  { cryptof_read , cryptof_write  , cryptof_ioctl  , cryptof_poll  , cryptof_kqfilter  , cryptof_stat  , cryptof_close  } ,  { cryptof_read , cryptof_write  , cryptof_ioctl  , cryptof_poll  , cryptof_kqfilter  , cryptof_stat  , cryptof_close  } ,  { cryptof_read , cryptof_write  , cryptof_ioctl  , cryptof_poll  , cryptof_kqfilter  , cryptof_stat  , cryptof_close  } ,  { cryptof_read , cryptof_write  , cryptof_ioctl  , cryptof_poll  , cryptof_kqfilter  , cryptof_stat  , cryptof_close  } ,  { cryptof_read , cryptof_write  , cryptof_ioctl  , cryptof_poll  , cryptof_kqfilter  , cryptof_stat  , cryptof_close  } ,  { cryptof_read , cryptof_write  , cryptof_ioctl  , cryptof_poll  , cryptof_kqfilter  , cryptof_stat  , cryptof_close  } ,  { cryptof_read , cryptof_write  , cryptof_ioctl  , cryptof_poll  , cryptof_kqfilter  , cryptof_stat  , cryptof_close  } ,  { cryptof_read , cryptof_write  , cryptof_ioctl  , cryptof_poll  , cryptof_kqfilter  , cryptof_stat  , cryptof_close  } ,  { cryptof_read , cryptof_write  , cryptof_ioctl  , cryptof_poll  , cryptof_kqfilter  , cryptof_stat  , cryptof_close  } ,  { cryptof_read , cryptof_write  , cryptof_ioctl  , cryptof_poll  , cryptof_kqfilter  , cryptof_stat  , cryptof_close  } ,  };      
    
    
    
    
    
    
    


struct csession *csefind(struct fcrypt *, u_int);
int csedelete(struct fcrypt *, struct csession *);
struct csession *cseadd(struct fcrypt *, struct csession *);
struct csession *csecreate(struct fcrypt *, u_int64_t, caddr_t, u_int64_t,
    caddr_t, u_int64_t, u_int32_t, u_int32_t, struct enc_xform *,
    struct auth_hash *);
int csefree(struct csession *);

int cryptodev_op(struct csession *, struct crypt_op *, struct proc *);
int cryptodev_key(struct crypt_kop *);
int cryptodev_dokey(struct crypt_kop *kop, struct crparam kvp[]);

int cryptodev_cb(void *);
int cryptodevkey_cb(void *);

typedef  int _GLOBAL_164_T;  _GLOBAL_164_T  global_usercrypto[NUM_STACKS] = {  1,  1,  1,  1,  1,  1,  1,  1,  1,  1,  1,  1,  1,  1,  1,  1,  1,  1,  1,  1,  1,  1,  1,  1,  1,  1,  1,  1,  1,  1,  1,  1,  1,  1,  1,  1,  1,  1,  1,  1,  1,  1,  1,  1,  1,  1,  1,  1,  1,  1,  };    
typedef  int _GLOBAL_165_T;  _GLOBAL_165_T  global_userasymcrypto[NUM_STACKS] = {  1,  1,  1,  1,  1,  1,  1,  1,  1,  1,  1,  1,  1,  1,  1,  1,  1,  1,  1,  1,  1,  1,  1,  1,  1,  1,  1,  1,  1,  1,  1,  1,  1,  1,  1,  1,  1,  1,  1,  1,  1,  1,  1,  1,  1,  1,  1,  1,  1,  1,  };    
typedef  int _GLOBAL_166_T;  _GLOBAL_166_T  global_cryptodevallowsoft[NUM_STACKS] = {  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  };    


int
cryptof_read(struct file *fp, off_t *poff, struct uio *uio, struct ucred *cred)
{
 return (5);
}


int
cryptof_write(struct file *fp, off_t *poff, struct uio *uio, struct ucred *cred)
{
 return (5);
}


int
cryptof_ioctl(struct file *fp, u_long cmd, caddr_t data, struct proc *p)
{
 struct cryptoini cria, crie;
 struct fcrypt *fcr = (struct fcrypt *)fp->f_data;
 struct csession *cse;
 struct session_op *sop;
 struct crypt_op *cop;
 struct enc_xform *txform = 0L;
 struct auth_hash *thash = 0L;
 u_int64_t sid;
 u_int32_t ses;
 int error = 0;

 switch (cmd) {
 case (((unsigned long)0x80000000|(unsigned long)0x40000000) | ((sizeof(struct session_op) & 0x1fff) << 16) | ((('c')) << 8) | ((101))):
  sop = (struct session_op *)data;
  switch (sop->cipher) {
  case 0:
   break;
  case 1:
   txform = &(*_GLOBAL_enc_xform_des_34_A[get_stack_id()]);
   break;
  case 2:
   txform = &(*_GLOBAL_enc_xform_3des_35_A[get_stack_id()]);
   break;
  case 3:
   txform = &(*_GLOBAL_enc_xform_blf_36_A[get_stack_id()]);
   break;
  case 4:
   txform = &(*_GLOBAL_enc_xform_cast5_37_A[get_stack_id()]);
   break;
  case 5:
   txform = &(*_GLOBAL_enc_xform_skipjack_38_A[get_stack_id()]);
   break;
  case 11:
   txform = &global_enc_xform_rijndael128[get_stack_id()];
   break;
  case 12:
   txform = &global_enc_xform_arc4[get_stack_id()];
   break;
  case 16:
   txform = &global_enc_xform_null[get_stack_id()];
   break;
  default:
   return (22);
  }

  switch (sop->mac) {
  case 0:
   break;
# 206 "openbsd3/crypto/cryptodev.c"
  default:
   return (22);
  }

  bzero(&crie, sizeof(crie));
  bzero(&cria, sizeof(cria));

  if (txform) {
   crie.cri_alg = txform->type;
   crie.cri_klen = sop->keylen * 8;
   if (sop->keylen > txform->maxkey ||
       sop->keylen < txform->minkey) {
    error = 22;
    goto bail;
   }

   (crie.cri_key) = (u_int8_t *)malloc((u_long)(crie.cri_klen / 8), 76, 0x0000)
                                            ;
   if ((error = copyin(sop->key, crie.cri_key,
       crie.cri_klen / 8)))
    goto bail;
   if (thash)
    crie.cri_next = &cria;
  }

  if (thash) {
   cria.cri_alg = thash->type;
   cria.cri_klen = sop->mackeylen * 8;
   if (sop->mackeylen != thash->keysize) {
    error = 22;
    goto bail;
   }

   if (cria.cri_klen) {
    (cria.cri_key) = (u_int8_t *)malloc((u_long)(cria.cri_klen / 8), 76, 0x0000)
                                             ;
    if ((error = copyin(sop->mackey, cria.cri_key,
        cria.cri_klen / 8)))
     goto bail;
   }
  }

  error = crypto_newsession(&sid, (txform ? &crie : &cria),
      !global_cryptodevallowsoft[get_stack_id()]);

  if (error)
   goto bail;

  cse = csecreate(fcr, sid, crie.cri_key, crie.cri_klen,
      cria.cri_key, cria.cri_klen, sop->cipher, sop->mac, txform,
      thash);

  if (cse == 0L) {
   crypto_freesession(sid);
   error = 22;
   goto bail;
  }
  sop->ses = cse->ses;

bail:
  if (error) {
   if (crie.cri_key)
    free((caddr_t)(crie.cri_key), 76);
   if (cria.cri_key)
    free((caddr_t)(cria.cri_key), 76);
  }
  break;
 case ((unsigned long)0x80000000 | ((sizeof(u_int32_t) & 0x1fff) << 16) | ((('c')) << 8) | ((102))):
  ses = *(u_int32_t *)data;
  cse = csefind(fcr, ses);
  if (cse == 0L)
   return (22);
  csedelete(fcr, cse);
  error = csefree(cse);
  break;
 case (((unsigned long)0x80000000|(unsigned long)0x40000000) | ((sizeof(struct crypt_op) & 0x1fff) << 16) | ((('c')) << 8) | ((103))):
  cop = (struct crypt_op *)data;
  cse = csefind(fcr, cop->ses);
  if (cse == 0L)
   return (22);
  error = cryptodev_op(cse, cop, p);
  break;
 case (((unsigned long)0x80000000|(unsigned long)0x40000000) | ((sizeof(struct crypt_kop) & 0x1fff) << 16) | ((('c')) << 8) | ((104))):
  error = cryptodev_key((struct crypt_kop *)data);
  break;
 case ((unsigned long)0x40000000 | ((sizeof(u_int32_t) & 0x1fff) << 16) | ((('c')) << 8) | ((105))):
  error = crypto_getfeat((int *)data);
  break;
 default:
  error = 22;
 }
 return (error);
}

int
cryptodev_op(struct csession *cse, struct crypt_op *cop, struct proc *p)
{
 struct cryptop *crp= 0L;
 struct cryptodesc *crde = 0L, *crda = 0L;
 int i, s, error;
 u_int32_t hid;

 if (cop->len > 64*1024-4)
  return (7);

 if (cse->txform && (cop->len % cse->txform->blocksize) != 0) {
  return (22);
 }

 bzero(&cse->uio, sizeof(cse->uio));
 cse->uio.uio_iovcnt = 1;
 cse->uio.uio_resid = 0;
 cse->uio.uio_segflg = UIO_SYSSPACE;
 cse->uio.uio_rw = UIO_WRITE;
 cse->uio.uio_procp = p;
 cse->uio.uio_iov = cse->iovec;
 bzero(&cse->iovec, sizeof(cse->iovec));
 cse->uio.uio_iov[0].iov_len = cop->len;
 cse->uio.uio_iov[0].iov_base = malloc(cop->len, 76, 0x0000);
 for (i = 0; i < cse->uio.uio_iovcnt; i++)
  cse->uio.uio_resid += cse->uio.uio_iov[0].iov_len;

 crp = crypto_getreq((cse->txform != 0L) + (cse->thash != 0L));
 if (crp == 0L) {
  error = 12;
  goto bail;
 }

 if (cse->thash) {
  crda = crp->crp_desc;
  if (cse->txform)
   crde = crda->crd_next;
 } else {
  if (cse->txform)
   crde = crp->crp_desc;
  else {
   error = 22;
   goto bail;
  }
 }

 if ((error = copyin(cop->src, cse->uio.uio_iov[0].iov_base, cop->len)))
  goto bail;

 if (crda) {
  crda->crd_skip = 0;
  crda->crd_len = cop->len;
  crda->crd_inject = 0;

  crda->CRD_INI.cri_alg = cse->mac;
  crda->CRD_INI.cri_key = cse->mackey;
  crda->CRD_INI.cri_klen = cse->mackeylen * 8;
 }

 if (crde) {
  if (cop->op == 1)
   crde->crd_flags |= 0x01;
  else
   crde->crd_flags &= ~0x01;
  crde->crd_len = cop->len;
  crde->crd_inject = 0;

  crde->CRD_INI.cri_alg = cse->cipher;
  crde->CRD_INI.cri_key = cse->key;
  crde->CRD_INI.cri_klen = cse->keylen * 8;
 }

 crp->crp_ilen = cop->len;
 crp->crp_buf = (caddr_t)&cse->uio;
 crp->crp_callback = (int (*) (struct cryptop *)) cryptodev_cb;
 crp->crp_sid = cse->sid;
 crp->crp_opaque = (void *)cse;

 if (cop->iv) {
  if (crde == 0L) {
   error = 22;
   goto bail;
  }
  if (cse->cipher == 12) {
   error = 22;
   goto bail;
  }
  if ((error = copyin(cop->iv, cse->tmp_iv, cse->txform->blocksize)))
   goto bail;
  bcopy(cse->tmp_iv, crde->CRD_INI.cri_iv, cse->txform->blocksize);
  crde->crd_flags |= 0x04 | 0x02;
  crde->crd_skip = 0;
 } else if (cse->cipher == 12) {
  crde->crd_skip = 0;
 } else if (crde) {
  crde->crd_flags |= 0x02;
  crde->crd_skip = cse->txform->blocksize;
  crde->crd_len -= cse->txform->blocksize;
 }

 if (cop->mac) {
  if (crda == 0L) {
   error = 22;
   goto bail;
  }
  crp->crp_mac=cse->tmp_mac;
 }


 crp->crp_flags = 0x0002 | 0x0008;
 hid = (crp->crp_sid >> 32) & 0xffffffff;
 if (hid >= global_crypto_drivers_num[get_stack_id()])
  goto dispatch;
 if (global_crypto_drivers[get_stack_id()][hid].cc_flags & 0x02)
  goto dispatch;
 if (global_crypto_drivers[get_stack_id()][hid].cc_process == 0L)
  goto dispatch;
 error = global_crypto_drivers[get_stack_id()][hid].cc_process(crp);
 if (error) {

  crp->crp_etype = 0;
  goto dispatch;
 }
 goto processed;
 dispatch:
 crp->crp_flags = 0x0002;
 crypto_dispatch(crp);
 processed:
 s = splraise((0x20 + ((3) << 4)));
 while (!(crp->crp_flags & 0x0010)) {
  error = ltsleep(cse, 24, "crydev", 0, 0L);
 }
 splx(s);
 if (error) {

  goto bail;
 }

 if (cse->error) {
  error = cse->error;
  goto bail;
 }
 if (crp->crp_etype != 0) {
  error = crp->crp_etype;
  goto bail;
 }


 if (cop->dst &&
     (error = copyout(cse->uio.uio_iov[0].iov_base, cop->dst, cop->len)))
  goto bail;

 if (cop->mac &&
     (error = copyout(crp->crp_mac, cop->mac, cse->thash->authsize)))
  goto bail;

bail:
 if (crp)
  crypto_freereq(crp);
 if (cse->uio.uio_iov[0].iov_base)
  free(cse->uio.uio_iov[0].iov_base, 76);

 return (error);
}

int
cryptodev_cb(void *op)
{
 struct cryptop *crp = (struct cryptop *) op;
 struct csession *cse = (struct csession *)crp->crp_opaque;

 cse->error = crp->crp_etype;
 if (crp->crp_etype == 35) {
  crp->crp_flags = 0x0002;
  return crypto_dispatch(crp);
 }
 wakeup(cse);
 return (0);
}

int
cryptodevkey_cb(void *op)
{
 struct cryptkop *krp = (struct cryptkop *) op;

 wakeup(krp);
 return (0);
}

int
cryptodev_key(struct crypt_kop *kop)
{
 struct cryptkop *krp = 0L;
 int error = 22;
 int in, out, size, i;

 if (kop->crk_iparams + kop->crk_oparams > 8) {
  return (27);
 }

 in = kop->crk_iparams;
 out = kop->crk_oparams;
 switch (kop->crk_op) {
 case 0:
  if (in == 3 && out == 1)
   break;
  return (22);
 case 1:
  if (in == 6 && out == 1)
   break;
  return (22);
 case 2:
  if (in == 5 && out == 2)
   break;
  return (22);
 case 3:
  if (in == 7 && out == 0)
   break;
  return (22);
 case 4:
  if (in == 3 && out == 1)
   break;
  return (22);
 default:
  return (22);
 }

 krp = (struct cryptkop *)malloc(sizeof *krp, 76, 0x0000);
 if (!krp)
  return (12);
 bzero(krp, sizeof *krp);
 krp->krp_op = kop->crk_op;
 krp->krp_status = kop->crk_status;
 krp->krp_iparams = kop->crk_iparams;
 krp->krp_oparams = kop->crk_oparams;
 krp->krp_status = 0;
 krp->krp_callback = (int (*) (struct cryptkop *)) cryptodevkey_cb;

 for (i = 0; i < 8; i++)
  krp->krp_param[i].crp_nbits = kop->crk_param[i].crp_nbits;
 for (i = 0; i < krp->krp_iparams + krp->krp_oparams; i++) {
  size = (krp->krp_param[i].crp_nbits + 7) / 8;
  if (size == 0)
   continue;
  (krp->krp_param[i].crp_p) = (caddr_t)malloc((u_long)(size), 76, 0x0000);
  if (i >= krp->krp_iparams)
   continue;
  error = copyin(kop->crk_param[i].crp_p, krp->krp_param[i].crp_p, size);
  if (error)
   goto fail;
 }

 error = crypto_kdispatch(krp);
 if (error)
  goto fail;
 error = ltsleep(krp, 24, "crydev", 0, 0L);
 if (error) {

  goto fail;
 }

 if (krp->krp_status != 0) {
  error = krp->krp_status;
  goto fail;
 }

 for (i = krp->krp_iparams; i < krp->krp_iparams + krp->krp_oparams; i++) {
  size = (krp->krp_param[i].crp_nbits + 7) / 8;
  if (size == 0)
   continue;
  error = copyout(krp->krp_param[i].crp_p, kop->crk_param[i].crp_p, size);
  if (error)
   goto fail;
 }

fail:
 if (krp) {
  kop->crk_status = krp->krp_status;
  for (i = 0; i < 8; i++) {
   if (krp->krp_param[i].crp_p)
    free((caddr_t)(krp->krp_param[i].crp_p), 76);
  }
  free(krp, 76);
 }
 return (error);
}


int
cryptof_poll(struct file *fp, int events, struct proc *p)
{
 return (0);
}


int
cryptof_kqfilter(struct file *fp, struct knote *kn)
{
 return (0);
}


int
cryptof_stat(struct file *fp, struct stat *sb, struct proc *p)
{
 return (45);
}


int
cryptof_close(struct file *fp, struct proc *p)
{
 struct fcrypt *fcr = (struct fcrypt *)fp->f_data;
 struct csession *cse;

 while ((cse = ((&fcr->csessions)->tqh_first))) {
  do { if (((cse)->next.tqe_next) != 0L) (cse)->next.tqe_next->next.tqe_prev = (cse)->next.tqe_prev; else (&fcr->csessions)->tqh_last = (cse)->next.tqe_prev; *(cse)->next.tqe_prev = (cse)->next.tqe_next; } while (0);
  (void)csefree(cse);
 }
 free((caddr_t)(fcr), 76);
 fp->f_data = 0L;
 return 0;
}

void
cryptoattach(int n)
{
}

int
cryptoopen(dev_t dev, int flag, int mode, struct proc *p)
{
 if (global_usercrypto[get_stack_id()] == 0)
  return (6);

 return (0);



}

int
cryptoclose(dev_t dev, int flag, int mode, struct proc *p)
{
 return (0);
}

int
cryptoread(dev_t dev, struct uio *uio, int ioflag)
{
 return (5);
}

int
cryptowrite(dev_t dev, struct uio *uio, int ioflag)
{
 return (5);
}

int
cryptoioctl(dev_t dev, u_long cmd, caddr_t data, int flag, struct proc *p)
{
 struct file *f;
 struct fcrypt *fcr;
 int fd, error;

 switch (cmd) {
 case (((unsigned long)0x80000000|(unsigned long)0x40000000) | ((sizeof(u_int32_t) & 0x1fff) << 16) | ((('c')) << 8) | ((100))):
  (fcr) = (struct fcrypt *)malloc((u_long)(sizeof(struct fcrypt)), 76, 0x0000)
                                               ;
  do { (&fcr->csessions)->tqh_first = 0L; (&fcr->csessions)->tqh_last = &(&fcr->csessions)->tqh_first; } while (0);
  fcr->sesn = 0;

  error = falloc(p, &f, &fd);
  if (error) {
   free((caddr_t)(fcr), 76);
   return (error);
  }
  f->f_flag = 0x0001 | 0x0002;
  f->f_type = 5;
  f->f_ops = &global_cryptofops[get_stack_id()];
  f->f_data = (caddr_t)fcr;
  *(u_int32_t *)data = fd;
  do { (f)->f_iflags &= ~0x02; do { --(f)->f_usecount; if (((f)->f_iflags & 0x01) != 0) wakeup(&(f)->f_usecount); } while (0); } while (0);
  break;
 default:
  error = 22;
  break;
 }
 return (error);
}

int
cryptopoll(dev_t dev, int events, struct proc *p)
{
 return (seltrue(dev, events, p));
}

struct csession *
csefind(struct fcrypt *fcr, u_int ses)
{
 struct csession *cse;

 for((cse) = ((&fcr->csessions)->tqh_first); (cse) != 0L; (cse) = ((cse)->next.tqe_next))
  if (cse->ses == ses)
   return (cse);
 return (0L);
}

int
csedelete(struct fcrypt *fcr, struct csession *cse_del)
{
 struct csession *cse;

 for((cse) = ((&fcr->csessions)->tqh_first); (cse) != 0L; (cse) = ((cse)->next.tqe_next)) {
  if (cse == cse_del) {
   do { if (((cse)->next.tqe_next) != 0L) (cse)->next.tqe_next->next.tqe_prev = (cse)->next.tqe_prev; else (&fcr->csessions)->tqh_last = (cse)->next.tqe_prev; *(cse)->next.tqe_prev = (cse)->next.tqe_next; } while (0);
   return (1);
  }
 }
 return (0);
}

struct csession *
cseadd(struct fcrypt *fcr, struct csession *cse)
{
 do { (cse)->next.tqe_next = 0L; (cse)->next.tqe_prev = (&fcr->csessions)->tqh_last; *(&fcr->csessions)->tqh_last = (cse); (&fcr->csessions)->tqh_last = &(cse)->next.tqe_next; } while (0);
 cse->ses = fcr->sesn++;
 return (cse);
}

struct csession *
csecreate(struct fcrypt *fcr, u_int64_t sid, caddr_t key, u_int64_t keylen,
    caddr_t mackey, u_int64_t mackeylen, u_int32_t cipher, u_int32_t mac,
    struct enc_xform *txform, struct auth_hash *thash)
{
 struct csession *cse;

 (cse) = (struct csession *)malloc((u_long)(sizeof(struct csession)), 76, 0x0001)
                       ;
 if (cse == 0L)
  return 0L;
 cse->key = key;
 cse->keylen = keylen/8;
 cse->mackey = mackey;
 cse->mackeylen = mackeylen/8;
 cse->sid = sid;
 cse->cipher = cipher;
 cse->mac = mac;
 cse->txform = txform;
 cse->thash = thash;
 cseadd(fcr, cse);
 return (cse);
}

int
csefree(struct csession *cse)
{
 int error;

 error = crypto_freesession(cse->sid);
 if (cse->key)
  free((caddr_t)(cse->key), 76);
 if (cse->mackey)
  free((caddr_t)(cse->mackey), 76);
 free((caddr_t)(cse), 76);
 return (error);
}

