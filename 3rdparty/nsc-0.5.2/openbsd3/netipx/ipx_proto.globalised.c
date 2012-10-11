# 1 "openbsd3/netipx/ipx_proto.c"
# 1 "/home/cmcc/omnet_workspace/inet/3rdparty/nsc-0.5.2//"
# 1 "<built-in>"
# 1 "<command-line>"
# 1 "openbsd3/netipx/ipx_proto.c"
# 39 "openbsd3/netipx/ipx_proto.c"
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
# 40 "openbsd3/netipx/ipx_proto.c" 2
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
# 41 "openbsd3/netipx/ipx_proto.c" 2
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
# 42 "openbsd3/netipx/ipx_proto.c" 2
# 1 "openbsd3/sys/domain.h" 1
# 42 "openbsd3/sys/domain.h"
struct mbuf;
struct ifnet;

struct domain {
 int dom_family;
 char *dom_name;
 void (*dom_init)(void);

 int (*dom_externalize)(struct mbuf *);

 void (*dom_dispose)(struct mbuf *);
 struct protosw *dom_protosw, *dom_protoswNPROTOSW;
 struct domain *dom_next;

 int (*dom_rtattach)(void **, int);
 int dom_rtoffset;
 int dom_maxrtkey;
 void *(*dom_ifattach)(struct ifnet *);
 void (*dom_ifdetach)(struct ifnet *, void *);

};


typedef  struct domain   _GLOBAL_27_T; extern  _GLOBAL_27_T  * global_domains[NUM_STACKS];    
void domaininit(void);
# 43 "openbsd3/netipx/ipx_proto.c" 2
# 1 "openbsd3/sys/kernel.h" 1
# 43 "openbsd3/sys/kernel.h"
typedef  long  _GLOBAL_28_T; extern  _GLOBAL_28_T  global_hostid[NUM_STACKS];   
typedef  char  _GLOBAL_29_T; extern  _GLOBAL_29_T  _GLOBAL_0_hostname_I [ 256 ] ; extern  _GLOBAL_29_T  _GLOBAL_1_hostname_I [ 256 ] ; extern  _GLOBAL_29_T  _GLOBAL_2_hostname_I [ 256 ] ; extern  _GLOBAL_29_T  _GLOBAL_3_hostname_I [ 256 ] ; extern  _GLOBAL_29_T  _GLOBAL_4_hostname_I [ 256 ] ; extern  _GLOBAL_29_T  _GLOBAL_5_hostname_I [ 256 ] ; extern  _GLOBAL_29_T  _GLOBAL_6_hostname_I [ 256 ] ; extern  _GLOBAL_29_T  _GLOBAL_7_hostname_I [ 256 ] ; extern  _GLOBAL_29_T  _GLOBAL_8_hostname_I [ 256 ] ; extern  _GLOBAL_29_T  _GLOBAL_9_hostname_I [ 256 ] ; extern  _GLOBAL_29_T  _GLOBAL_10_hostname_I [ 256 ] ; extern  _GLOBAL_29_T  _GLOBAL_11_hostname_I [ 256 ] ; extern  _GLOBAL_29_T  _GLOBAL_12_hostname_I [ 256 ] ; extern  _GLOBAL_29_T  _GLOBAL_13_hostname_I [ 256 ] ; extern  _GLOBAL_29_T  _GLOBAL_14_hostname_I [ 256 ] ; extern  _GLOBAL_29_T  _GLOBAL_15_hostname_I [ 256 ] ; extern  _GLOBAL_29_T  _GLOBAL_16_hostname_I [ 256 ] ; extern  _GLOBAL_29_T  _GLOBAL_17_hostname_I [ 256 ] ; extern  _GLOBAL_29_T  _GLOBAL_18_hostname_I [ 256 ] ; extern  _GLOBAL_29_T  _GLOBAL_19_hostname_I [ 256 ] ; extern  _GLOBAL_29_T  _GLOBAL_20_hostname_I [ 256 ] ; extern  _GLOBAL_29_T  _GLOBAL_21_hostname_I [ 256 ] ; extern  _GLOBAL_29_T  _GLOBAL_22_hostname_I [ 256 ] ; extern  _GLOBAL_29_T  _GLOBAL_23_hostname_I [ 256 ] ; extern  _GLOBAL_29_T  _GLOBAL_24_hostname_I [ 256 ] ; extern  _GLOBAL_29_T  _GLOBAL_25_hostname_I [ 256 ] ; extern  _GLOBAL_29_T  _GLOBAL_26_hostname_I [ 256 ] ; extern  _GLOBAL_29_T  _GLOBAL_27_hostname_I [ 256 ] ; extern  _GLOBAL_29_T  _GLOBAL_28_hostname_I [ 256 ] ; extern  _GLOBAL_29_T  _GLOBAL_29_hostname_I [ 256 ] ; extern  _GLOBAL_29_T  _GLOBAL_30_hostname_I [ 256 ] ; extern  _GLOBAL_29_T  _GLOBAL_31_hostname_I [ 256 ] ; extern  _GLOBAL_29_T  _GLOBAL_32_hostname_I [ 256 ] ; extern  _GLOBAL_29_T  _GLOBAL_33_hostname_I [ 256 ] ; extern  _GLOBAL_29_T  _GLOBAL_34_hostname_I [ 256 ] ; extern  _GLOBAL_29_T  _GLOBAL_35_hostname_I [ 256 ] ; extern  _GLOBAL_29_T  _GLOBAL_36_hostname_I [ 256 ] ; extern  _GLOBAL_29_T  _GLOBAL_37_hostname_I [ 256 ] ; extern  _GLOBAL_29_T  _GLOBAL_38_hostname_I [ 256 ] ; extern  _GLOBAL_29_T  _GLOBAL_39_hostname_I [ 256 ] ; extern  _GLOBAL_29_T  _GLOBAL_40_hostname_I [ 256 ] ; extern  _GLOBAL_29_T  _GLOBAL_41_hostname_I [ 256 ] ; extern  _GLOBAL_29_T  _GLOBAL_42_hostname_I [ 256 ] ; extern  _GLOBAL_29_T  _GLOBAL_43_hostname_I [ 256 ] ; extern  _GLOBAL_29_T  _GLOBAL_44_hostname_I [ 256 ] ; extern  _GLOBAL_29_T  _GLOBAL_45_hostname_I [ 256 ] ; extern  _GLOBAL_29_T  _GLOBAL_46_hostname_I [ 256 ] ; extern  _GLOBAL_29_T  _GLOBAL_47_hostname_I [ 256 ] ; extern  _GLOBAL_29_T  _GLOBAL_48_hostname_I [ 256 ] ; extern  _GLOBAL_29_T  _GLOBAL_49_hostname_I [ 256 ] ; static __attribute__ ((unused)) __typeof__(_GLOBAL_0_hostname_I) *_GLOBAL_hostname_7_A[NUM_STACKS];  
typedef  int  _GLOBAL_30_T; extern  _GLOBAL_30_T  global_hostnamelen[NUM_STACKS];   
typedef  char  _GLOBAL_31_T; extern  _GLOBAL_31_T  _GLOBAL_0_domainname_I [ 256 ] ; extern  _GLOBAL_31_T  _GLOBAL_1_domainname_I [ 256 ] ; extern  _GLOBAL_31_T  _GLOBAL_2_domainname_I [ 256 ] ; extern  _GLOBAL_31_T  _GLOBAL_3_domainname_I [ 256 ] ; extern  _GLOBAL_31_T  _GLOBAL_4_domainname_I [ 256 ] ; extern  _GLOBAL_31_T  _GLOBAL_5_domainname_I [ 256 ] ; extern  _GLOBAL_31_T  _GLOBAL_6_domainname_I [ 256 ] ; extern  _GLOBAL_31_T  _GLOBAL_7_domainname_I [ 256 ] ; extern  _GLOBAL_31_T  _GLOBAL_8_domainname_I [ 256 ] ; extern  _GLOBAL_31_T  _GLOBAL_9_domainname_I [ 256 ] ; extern  _GLOBAL_31_T  _GLOBAL_10_domainname_I [ 256 ] ; extern  _GLOBAL_31_T  _GLOBAL_11_domainname_I [ 256 ] ; extern  _GLOBAL_31_T  _GLOBAL_12_domainname_I [ 256 ] ; extern  _GLOBAL_31_T  _GLOBAL_13_domainname_I [ 256 ] ; extern  _GLOBAL_31_T  _GLOBAL_14_domainname_I [ 256 ] ; extern  _GLOBAL_31_T  _GLOBAL_15_domainname_I [ 256 ] ; extern  _GLOBAL_31_T  _GLOBAL_16_domainname_I [ 256 ] ; extern  _GLOBAL_31_T  _GLOBAL_17_domainname_I [ 256 ] ; extern  _GLOBAL_31_T  _GLOBAL_18_domainname_I [ 256 ] ; extern  _GLOBAL_31_T  _GLOBAL_19_domainname_I [ 256 ] ; extern  _GLOBAL_31_T  _GLOBAL_20_domainname_I [ 256 ] ; extern  _GLOBAL_31_T  _GLOBAL_21_domainname_I [ 256 ] ; extern  _GLOBAL_31_T  _GLOBAL_22_domainname_I [ 256 ] ; extern  _GLOBAL_31_T  _GLOBAL_23_domainname_I [ 256 ] ; extern  _GLOBAL_31_T  _GLOBAL_24_domainname_I [ 256 ] ; extern  _GLOBAL_31_T  _GLOBAL_25_domainname_I [ 256 ] ; extern  _GLOBAL_31_T  _GLOBAL_26_domainname_I [ 256 ] ; extern  _GLOBAL_31_T  _GLOBAL_27_domainname_I [ 256 ] ; extern  _GLOBAL_31_T  _GLOBAL_28_domainname_I [ 256 ] ; extern  _GLOBAL_31_T  _GLOBAL_29_domainname_I [ 256 ] ; extern  _GLOBAL_31_T  _GLOBAL_30_domainname_I [ 256 ] ; extern  _GLOBAL_31_T  _GLOBAL_31_domainname_I [ 256 ] ; extern  _GLOBAL_31_T  _GLOBAL_32_domainname_I [ 256 ] ; extern  _GLOBAL_31_T  _GLOBAL_33_domainname_I [ 256 ] ; extern  _GLOBAL_31_T  _GLOBAL_34_domainname_I [ 256 ] ; extern  _GLOBAL_31_T  _GLOBAL_35_domainname_I [ 256 ] ; extern  _GLOBAL_31_T  _GLOBAL_36_domainname_I [ 256 ] ; extern  _GLOBAL_31_T  _GLOBAL_37_domainname_I [ 256 ] ; extern  _GLOBAL_31_T  _GLOBAL_38_domainname_I [ 256 ] ; extern  _GLOBAL_31_T  _GLOBAL_39_domainname_I [ 256 ] ; extern  _GLOBAL_31_T  _GLOBAL_40_domainname_I [ 256 ] ; extern  _GLOBAL_31_T  _GLOBAL_41_domainname_I [ 256 ] ; extern  _GLOBAL_31_T  _GLOBAL_42_domainname_I [ 256 ] ; extern  _GLOBAL_31_T  _GLOBAL_43_domainname_I [ 256 ] ; extern  _GLOBAL_31_T  _GLOBAL_44_domainname_I [ 256 ] ; extern  _GLOBAL_31_T  _GLOBAL_45_domainname_I [ 256 ] ; extern  _GLOBAL_31_T  _GLOBAL_46_domainname_I [ 256 ] ; extern  _GLOBAL_31_T  _GLOBAL_47_domainname_I [ 256 ] ; extern  _GLOBAL_31_T  _GLOBAL_48_domainname_I [ 256 ] ; extern  _GLOBAL_31_T  _GLOBAL_49_domainname_I [ 256 ] ; static __attribute__ ((unused)) __typeof__(_GLOBAL_0_domainname_I) *_GLOBAL_domainname_8_A[NUM_STACKS];  
typedef  int  _GLOBAL_32_T; extern  _GLOBAL_32_T  global_domainnamelen[NUM_STACKS];   


typedef  struct timeval    _GLOBAL_33_T; extern volatile  _GLOBAL_33_T  global_mono_time[NUM_STACKS];     
typedef  struct timeval   _GLOBAL_34_T; extern  _GLOBAL_34_T  global_boottime[NUM_STACKS];    
typedef  struct timeval   _GLOBAL_35_T; extern  _GLOBAL_35_T  global_runtime[NUM_STACKS];    
extern volatile struct timeval time;
typedef  struct timezone   _GLOBAL_36_T; extern  _GLOBAL_36_T  global_tz[NUM_STACKS];    

typedef  int  _GLOBAL_37_T; extern  _GLOBAL_37_T  global_tick[NUM_STACKS];   
typedef  int  _GLOBAL_38_T; extern  _GLOBAL_38_T  global_tickfix[NUM_STACKS];   
typedef  int  _GLOBAL_39_T; extern  _GLOBAL_39_T  global_tickfixinterval[NUM_STACKS];   
typedef  int  _GLOBAL_40_T; extern  _GLOBAL_40_T  global_tickadj[NUM_STACKS];   
typedef  int  _GLOBAL_41_T; extern  _GLOBAL_41_T  global_hz[NUM_STACKS];   
typedef  int  _GLOBAL_42_T; extern  _GLOBAL_42_T  global_stathz[NUM_STACKS];   
typedef  int  _GLOBAL_43_T; extern  _GLOBAL_43_T  global_profhz[NUM_STACKS];   
typedef  int  _GLOBAL_44_T; extern  _GLOBAL_44_T  global_lbolt[NUM_STACKS];   
typedef  int  _GLOBAL_45_T; extern  _GLOBAL_45_T  global_tickdelta[NUM_STACKS];   
typedef  long  _GLOBAL_46_T; extern  _GLOBAL_46_T  global_timedelta[NUM_STACKS];   
# 44 "openbsd3/netipx/ipx_proto.c" 2
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
typedef  struct kmemstats   _GLOBAL_47_T; extern  _GLOBAL_47_T  _GLOBAL_0_kmemstats_I [ ] ; extern  _GLOBAL_47_T  _GLOBAL_1_kmemstats_I [ ] ; extern  _GLOBAL_47_T  _GLOBAL_2_kmemstats_I [ ] ; extern  _GLOBAL_47_T  _GLOBAL_3_kmemstats_I [ ] ; extern  _GLOBAL_47_T  _GLOBAL_4_kmemstats_I [ ] ; extern  _GLOBAL_47_T  _GLOBAL_5_kmemstats_I [ ] ; extern  _GLOBAL_47_T  _GLOBAL_6_kmemstats_I [ ] ; extern  _GLOBAL_47_T  _GLOBAL_7_kmemstats_I [ ] ; extern  _GLOBAL_47_T  _GLOBAL_8_kmemstats_I [ ] ; extern  _GLOBAL_47_T  _GLOBAL_9_kmemstats_I [ ] ; extern  _GLOBAL_47_T  _GLOBAL_10_kmemstats_I [ ] ; extern  _GLOBAL_47_T  _GLOBAL_11_kmemstats_I [ ] ; extern  _GLOBAL_47_T  _GLOBAL_12_kmemstats_I [ ] ; extern  _GLOBAL_47_T  _GLOBAL_13_kmemstats_I [ ] ; extern  _GLOBAL_47_T  _GLOBAL_14_kmemstats_I [ ] ; extern  _GLOBAL_47_T  _GLOBAL_15_kmemstats_I [ ] ; extern  _GLOBAL_47_T  _GLOBAL_16_kmemstats_I [ ] ; extern  _GLOBAL_47_T  _GLOBAL_17_kmemstats_I [ ] ; extern  _GLOBAL_47_T  _GLOBAL_18_kmemstats_I [ ] ; extern  _GLOBAL_47_T  _GLOBAL_19_kmemstats_I [ ] ; extern  _GLOBAL_47_T  _GLOBAL_20_kmemstats_I [ ] ; extern  _GLOBAL_47_T  _GLOBAL_21_kmemstats_I [ ] ; extern  _GLOBAL_47_T  _GLOBAL_22_kmemstats_I [ ] ; extern  _GLOBAL_47_T  _GLOBAL_23_kmemstats_I [ ] ; extern  _GLOBAL_47_T  _GLOBAL_24_kmemstats_I [ ] ; extern  _GLOBAL_47_T  _GLOBAL_25_kmemstats_I [ ] ; extern  _GLOBAL_47_T  _GLOBAL_26_kmemstats_I [ ] ; extern  _GLOBAL_47_T  _GLOBAL_27_kmemstats_I [ ] ; extern  _GLOBAL_47_T  _GLOBAL_28_kmemstats_I [ ] ; extern  _GLOBAL_47_T  _GLOBAL_29_kmemstats_I [ ] ; extern  _GLOBAL_47_T  _GLOBAL_30_kmemstats_I [ ] ; extern  _GLOBAL_47_T  _GLOBAL_31_kmemstats_I [ ] ; extern  _GLOBAL_47_T  _GLOBAL_32_kmemstats_I [ ] ; extern  _GLOBAL_47_T  _GLOBAL_33_kmemstats_I [ ] ; extern  _GLOBAL_47_T  _GLOBAL_34_kmemstats_I [ ] ; extern  _GLOBAL_47_T  _GLOBAL_35_kmemstats_I [ ] ; extern  _GLOBAL_47_T  _GLOBAL_36_kmemstats_I [ ] ; extern  _GLOBAL_47_T  _GLOBAL_37_kmemstats_I [ ] ; extern  _GLOBAL_47_T  _GLOBAL_38_kmemstats_I [ ] ; extern  _GLOBAL_47_T  _GLOBAL_39_kmemstats_I [ ] ; extern  _GLOBAL_47_T  _GLOBAL_40_kmemstats_I [ ] ; extern  _GLOBAL_47_T  _GLOBAL_41_kmemstats_I [ ] ; extern  _GLOBAL_47_T  _GLOBAL_42_kmemstats_I [ ] ; extern  _GLOBAL_47_T  _GLOBAL_43_kmemstats_I [ ] ; extern  _GLOBAL_47_T  _GLOBAL_44_kmemstats_I [ ] ; extern  _GLOBAL_47_T  _GLOBAL_45_kmemstats_I [ ] ; extern  _GLOBAL_47_T  _GLOBAL_46_kmemstats_I [ ] ; extern  _GLOBAL_47_T  _GLOBAL_47_kmemstats_I [ ] ; extern  _GLOBAL_47_T  _GLOBAL_48_kmemstats_I [ ] ; extern  _GLOBAL_47_T  _GLOBAL_49_kmemstats_I [ ] ; static __attribute__ ((unused)) __typeof__(_GLOBAL_0_kmemstats_I) *_GLOBAL_kmemstats_9_A[NUM_STACKS];   
typedef  struct kmemusage   _GLOBAL_48_T; extern  _GLOBAL_48_T  * global_kmemusage[NUM_STACKS];    
typedef  char  _GLOBAL_49_T; extern  _GLOBAL_49_T  * global_kmembase[NUM_STACKS];   
typedef  struct kmembuckets   _GLOBAL_50_T; extern  _GLOBAL_50_T  _GLOBAL_0_bucket_I [ ] ; extern  _GLOBAL_50_T  _GLOBAL_1_bucket_I [ ] ; extern  _GLOBAL_50_T  _GLOBAL_2_bucket_I [ ] ; extern  _GLOBAL_50_T  _GLOBAL_3_bucket_I [ ] ; extern  _GLOBAL_50_T  _GLOBAL_4_bucket_I [ ] ; extern  _GLOBAL_50_T  _GLOBAL_5_bucket_I [ ] ; extern  _GLOBAL_50_T  _GLOBAL_6_bucket_I [ ] ; extern  _GLOBAL_50_T  _GLOBAL_7_bucket_I [ ] ; extern  _GLOBAL_50_T  _GLOBAL_8_bucket_I [ ] ; extern  _GLOBAL_50_T  _GLOBAL_9_bucket_I [ ] ; extern  _GLOBAL_50_T  _GLOBAL_10_bucket_I [ ] ; extern  _GLOBAL_50_T  _GLOBAL_11_bucket_I [ ] ; extern  _GLOBAL_50_T  _GLOBAL_12_bucket_I [ ] ; extern  _GLOBAL_50_T  _GLOBAL_13_bucket_I [ ] ; extern  _GLOBAL_50_T  _GLOBAL_14_bucket_I [ ] ; extern  _GLOBAL_50_T  _GLOBAL_15_bucket_I [ ] ; extern  _GLOBAL_50_T  _GLOBAL_16_bucket_I [ ] ; extern  _GLOBAL_50_T  _GLOBAL_17_bucket_I [ ] ; extern  _GLOBAL_50_T  _GLOBAL_18_bucket_I [ ] ; extern  _GLOBAL_50_T  _GLOBAL_19_bucket_I [ ] ; extern  _GLOBAL_50_T  _GLOBAL_20_bucket_I [ ] ; extern  _GLOBAL_50_T  _GLOBAL_21_bucket_I [ ] ; extern  _GLOBAL_50_T  _GLOBAL_22_bucket_I [ ] ; extern  _GLOBAL_50_T  _GLOBAL_23_bucket_I [ ] ; extern  _GLOBAL_50_T  _GLOBAL_24_bucket_I [ ] ; extern  _GLOBAL_50_T  _GLOBAL_25_bucket_I [ ] ; extern  _GLOBAL_50_T  _GLOBAL_26_bucket_I [ ] ; extern  _GLOBAL_50_T  _GLOBAL_27_bucket_I [ ] ; extern  _GLOBAL_50_T  _GLOBAL_28_bucket_I [ ] ; extern  _GLOBAL_50_T  _GLOBAL_29_bucket_I [ ] ; extern  _GLOBAL_50_T  _GLOBAL_30_bucket_I [ ] ; extern  _GLOBAL_50_T  _GLOBAL_31_bucket_I [ ] ; extern  _GLOBAL_50_T  _GLOBAL_32_bucket_I [ ] ; extern  _GLOBAL_50_T  _GLOBAL_33_bucket_I [ ] ; extern  _GLOBAL_50_T  _GLOBAL_34_bucket_I [ ] ; extern  _GLOBAL_50_T  _GLOBAL_35_bucket_I [ ] ; extern  _GLOBAL_50_T  _GLOBAL_36_bucket_I [ ] ; extern  _GLOBAL_50_T  _GLOBAL_37_bucket_I [ ] ; extern  _GLOBAL_50_T  _GLOBAL_38_bucket_I [ ] ; extern  _GLOBAL_50_T  _GLOBAL_39_bucket_I [ ] ; extern  _GLOBAL_50_T  _GLOBAL_40_bucket_I [ ] ; extern  _GLOBAL_50_T  _GLOBAL_41_bucket_I [ ] ; extern  _GLOBAL_50_T  _GLOBAL_42_bucket_I [ ] ; extern  _GLOBAL_50_T  _GLOBAL_43_bucket_I [ ] ; extern  _GLOBAL_50_T  _GLOBAL_44_bucket_I [ ] ; extern  _GLOBAL_50_T  _GLOBAL_45_bucket_I [ ] ; extern  _GLOBAL_50_T  _GLOBAL_46_bucket_I [ ] ; extern  _GLOBAL_50_T  _GLOBAL_47_bucket_I [ ] ; extern  _GLOBAL_50_T  _GLOBAL_48_bucket_I [ ] ; extern  _GLOBAL_50_T  _GLOBAL_49_bucket_I [ ] ; static __attribute__ ((unused)) __typeof__(_GLOBAL_0_bucket_I) *_GLOBAL_bucket_10_A[NUM_STACKS];   

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






typedef  struct pool_allocator   _GLOBAL_51_T; extern  _GLOBAL_51_T  global_pool_allocator_nointr[NUM_STACKS];    

typedef  struct pool_allocator   _GLOBAL_52_T; extern  _GLOBAL_52_T  global_pool_allocator_kmem[NUM_STACKS];    

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


typedef  struct mbstat   _GLOBAL_53_T; extern  _GLOBAL_53_T  global_mbstat[NUM_STACKS];    
typedef  int  _GLOBAL_54_T; extern  _GLOBAL_54_T  global_nmbclust[NUM_STACKS];   
typedef  int  _GLOBAL_55_T; extern  _GLOBAL_55_T  global_mblowat[NUM_STACKS];   
typedef  int  _GLOBAL_56_T; extern  _GLOBAL_56_T  global_mcllowat[NUM_STACKS];   
typedef  int  _GLOBAL_57_T; extern  _GLOBAL_57_T  global_max_linkhdr[NUM_STACKS];   
typedef  int  _GLOBAL_58_T; extern  _GLOBAL_58_T  global_max_protohdr[NUM_STACKS];   
typedef  int  _GLOBAL_59_T; extern  _GLOBAL_59_T  global_max_hdr[NUM_STACKS];   
typedef  int  _GLOBAL_60_T; extern  _GLOBAL_60_T  global_max_datalen[NUM_STACKS];   
typedef  int  _GLOBAL_61_T; extern  _GLOBAL_61_T  _GLOBAL_0_mbtypes_I [ ] ; extern  _GLOBAL_61_T  _GLOBAL_1_mbtypes_I [ ] ; extern  _GLOBAL_61_T  _GLOBAL_2_mbtypes_I [ ] ; extern  _GLOBAL_61_T  _GLOBAL_3_mbtypes_I [ ] ; extern  _GLOBAL_61_T  _GLOBAL_4_mbtypes_I [ ] ; extern  _GLOBAL_61_T  _GLOBAL_5_mbtypes_I [ ] ; extern  _GLOBAL_61_T  _GLOBAL_6_mbtypes_I [ ] ; extern  _GLOBAL_61_T  _GLOBAL_7_mbtypes_I [ ] ; extern  _GLOBAL_61_T  _GLOBAL_8_mbtypes_I [ ] ; extern  _GLOBAL_61_T  _GLOBAL_9_mbtypes_I [ ] ; extern  _GLOBAL_61_T  _GLOBAL_10_mbtypes_I [ ] ; extern  _GLOBAL_61_T  _GLOBAL_11_mbtypes_I [ ] ; extern  _GLOBAL_61_T  _GLOBAL_12_mbtypes_I [ ] ; extern  _GLOBAL_61_T  _GLOBAL_13_mbtypes_I [ ] ; extern  _GLOBAL_61_T  _GLOBAL_14_mbtypes_I [ ] ; extern  _GLOBAL_61_T  _GLOBAL_15_mbtypes_I [ ] ; extern  _GLOBAL_61_T  _GLOBAL_16_mbtypes_I [ ] ; extern  _GLOBAL_61_T  _GLOBAL_17_mbtypes_I [ ] ; extern  _GLOBAL_61_T  _GLOBAL_18_mbtypes_I [ ] ; extern  _GLOBAL_61_T  _GLOBAL_19_mbtypes_I [ ] ; extern  _GLOBAL_61_T  _GLOBAL_20_mbtypes_I [ ] ; extern  _GLOBAL_61_T  _GLOBAL_21_mbtypes_I [ ] ; extern  _GLOBAL_61_T  _GLOBAL_22_mbtypes_I [ ] ; extern  _GLOBAL_61_T  _GLOBAL_23_mbtypes_I [ ] ; extern  _GLOBAL_61_T  _GLOBAL_24_mbtypes_I [ ] ; extern  _GLOBAL_61_T  _GLOBAL_25_mbtypes_I [ ] ; extern  _GLOBAL_61_T  _GLOBAL_26_mbtypes_I [ ] ; extern  _GLOBAL_61_T  _GLOBAL_27_mbtypes_I [ ] ; extern  _GLOBAL_61_T  _GLOBAL_28_mbtypes_I [ ] ; extern  _GLOBAL_61_T  _GLOBAL_29_mbtypes_I [ ] ; extern  _GLOBAL_61_T  _GLOBAL_30_mbtypes_I [ ] ; extern  _GLOBAL_61_T  _GLOBAL_31_mbtypes_I [ ] ; extern  _GLOBAL_61_T  _GLOBAL_32_mbtypes_I [ ] ; extern  _GLOBAL_61_T  _GLOBAL_33_mbtypes_I [ ] ; extern  _GLOBAL_61_T  _GLOBAL_34_mbtypes_I [ ] ; extern  _GLOBAL_61_T  _GLOBAL_35_mbtypes_I [ ] ; extern  _GLOBAL_61_T  _GLOBAL_36_mbtypes_I [ ] ; extern  _GLOBAL_61_T  _GLOBAL_37_mbtypes_I [ ] ; extern  _GLOBAL_61_T  _GLOBAL_38_mbtypes_I [ ] ; extern  _GLOBAL_61_T  _GLOBAL_39_mbtypes_I [ ] ; extern  _GLOBAL_61_T  _GLOBAL_40_mbtypes_I [ ] ; extern  _GLOBAL_61_T  _GLOBAL_41_mbtypes_I [ ] ; extern  _GLOBAL_61_T  _GLOBAL_42_mbtypes_I [ ] ; extern  _GLOBAL_61_T  _GLOBAL_43_mbtypes_I [ ] ; extern  _GLOBAL_61_T  _GLOBAL_44_mbtypes_I [ ] ; extern  _GLOBAL_61_T  _GLOBAL_45_mbtypes_I [ ] ; extern  _GLOBAL_61_T  _GLOBAL_46_mbtypes_I [ ] ; extern  _GLOBAL_61_T  _GLOBAL_47_mbtypes_I [ ] ; extern  _GLOBAL_61_T  _GLOBAL_48_mbtypes_I [ ] ; extern  _GLOBAL_61_T  _GLOBAL_49_mbtypes_I [ ] ; static __attribute__ ((unused)) __typeof__(_GLOBAL_0_mbtypes_I) *_GLOBAL_mbtypes_11_A[NUM_STACKS];  
typedef  struct pool   _GLOBAL_62_T; extern  _GLOBAL_62_T  global_mbpool[NUM_STACKS];    
typedef  struct pool   _GLOBAL_63_T; extern  _GLOBAL_63_T  global_mclpool[NUM_STACKS];    

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
# 45 "openbsd3/netipx/ipx_proto.c" 2

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
typedef  struct radix_mask { short  rm_b ;  char  rm_unused ;   u_char  rm_flags ;   struct radix_mask   * rm_mklist  ;   union { caddr_t  rmu_mask ;  struct radix_node   * rmu_leaf  ;   }   rm_rmu ;   int  rm_refs ;   }   _GLOBAL_64_T; extern  _GLOBAL_64_T  * global_rn_mkfreelist[NUM_STACKS];    
  
  
  
   
  
   
    
  
  
 
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
# 47 "openbsd3/netipx/ipx_proto.c" 2

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
typedef  int  _GLOBAL_65_T; extern  _GLOBAL_65_T  global_ipxcksum[NUM_STACKS];   
typedef  int  _GLOBAL_66_T; extern  _GLOBAL_66_T  global_ipxforwarding[NUM_STACKS];   
typedef  int  _GLOBAL_67_T; extern  _GLOBAL_67_T  global_ipxnetbios[NUM_STACKS];   
typedef  struct domain   _GLOBAL_68_T; extern  _GLOBAL_68_T  global_ipxdomain[NUM_STACKS];    
typedef  struct sockaddr_ipx   _GLOBAL_69_T; extern  _GLOBAL_69_T  global_ipx_netmask[NUM_STACKS];    
typedef  struct sockaddr_ipx   _GLOBAL_70_T; extern  _GLOBAL_70_T  global_ipx_hostmask[NUM_STACKS];    

typedef  union ipx_net   _GLOBAL_71_T; extern  _GLOBAL_71_T  global_ipx_zeronet[NUM_STACKS];    
typedef  union ipx_host   _GLOBAL_72_T; extern  _GLOBAL_72_T  global_ipx_zerohost[NUM_STACKS];    
typedef  union ipx_net   _GLOBAL_73_T; extern  _GLOBAL_73_T  global_ipx_broadnet[NUM_STACKS];    
typedef  union ipx_host   _GLOBAL_74_T; extern  _GLOBAL_74_T  global_ipx_broadhost[NUM_STACKS];    

typedef  u_long  _GLOBAL_75_T; extern  _GLOBAL_75_T  global_ipx_pexseq[NUM_STACKS];   
typedef  u_char  _GLOBAL_76_T; extern  _GLOBAL_76_T  _GLOBAL_0_ipxctlerrmap_I [ ] ; extern  _GLOBAL_76_T  _GLOBAL_1_ipxctlerrmap_I [ ] ; extern  _GLOBAL_76_T  _GLOBAL_2_ipxctlerrmap_I [ ] ; extern  _GLOBAL_76_T  _GLOBAL_3_ipxctlerrmap_I [ ] ; extern  _GLOBAL_76_T  _GLOBAL_4_ipxctlerrmap_I [ ] ; extern  _GLOBAL_76_T  _GLOBAL_5_ipxctlerrmap_I [ ] ; extern  _GLOBAL_76_T  _GLOBAL_6_ipxctlerrmap_I [ ] ; extern  _GLOBAL_76_T  _GLOBAL_7_ipxctlerrmap_I [ ] ; extern  _GLOBAL_76_T  _GLOBAL_8_ipxctlerrmap_I [ ] ; extern  _GLOBAL_76_T  _GLOBAL_9_ipxctlerrmap_I [ ] ; extern  _GLOBAL_76_T  _GLOBAL_10_ipxctlerrmap_I [ ] ; extern  _GLOBAL_76_T  _GLOBAL_11_ipxctlerrmap_I [ ] ; extern  _GLOBAL_76_T  _GLOBAL_12_ipxctlerrmap_I [ ] ; extern  _GLOBAL_76_T  _GLOBAL_13_ipxctlerrmap_I [ ] ; extern  _GLOBAL_76_T  _GLOBAL_14_ipxctlerrmap_I [ ] ; extern  _GLOBAL_76_T  _GLOBAL_15_ipxctlerrmap_I [ ] ; extern  _GLOBAL_76_T  _GLOBAL_16_ipxctlerrmap_I [ ] ; extern  _GLOBAL_76_T  _GLOBAL_17_ipxctlerrmap_I [ ] ; extern  _GLOBAL_76_T  _GLOBAL_18_ipxctlerrmap_I [ ] ; extern  _GLOBAL_76_T  _GLOBAL_19_ipxctlerrmap_I [ ] ; extern  _GLOBAL_76_T  _GLOBAL_20_ipxctlerrmap_I [ ] ; extern  _GLOBAL_76_T  _GLOBAL_21_ipxctlerrmap_I [ ] ; extern  _GLOBAL_76_T  _GLOBAL_22_ipxctlerrmap_I [ ] ; extern  _GLOBAL_76_T  _GLOBAL_23_ipxctlerrmap_I [ ] ; extern  _GLOBAL_76_T  _GLOBAL_24_ipxctlerrmap_I [ ] ; extern  _GLOBAL_76_T  _GLOBAL_25_ipxctlerrmap_I [ ] ; extern  _GLOBAL_76_T  _GLOBAL_26_ipxctlerrmap_I [ ] ; extern  _GLOBAL_76_T  _GLOBAL_27_ipxctlerrmap_I [ ] ; extern  _GLOBAL_76_T  _GLOBAL_28_ipxctlerrmap_I [ ] ; extern  _GLOBAL_76_T  _GLOBAL_29_ipxctlerrmap_I [ ] ; extern  _GLOBAL_76_T  _GLOBAL_30_ipxctlerrmap_I [ ] ; extern  _GLOBAL_76_T  _GLOBAL_31_ipxctlerrmap_I [ ] ; extern  _GLOBAL_76_T  _GLOBAL_32_ipxctlerrmap_I [ ] ; extern  _GLOBAL_76_T  _GLOBAL_33_ipxctlerrmap_I [ ] ; extern  _GLOBAL_76_T  _GLOBAL_34_ipxctlerrmap_I [ ] ; extern  _GLOBAL_76_T  _GLOBAL_35_ipxctlerrmap_I [ ] ; extern  _GLOBAL_76_T  _GLOBAL_36_ipxctlerrmap_I [ ] ; extern  _GLOBAL_76_T  _GLOBAL_37_ipxctlerrmap_I [ ] ; extern  _GLOBAL_76_T  _GLOBAL_38_ipxctlerrmap_I [ ] ; extern  _GLOBAL_76_T  _GLOBAL_39_ipxctlerrmap_I [ ] ; extern  _GLOBAL_76_T  _GLOBAL_40_ipxctlerrmap_I [ ] ; extern  _GLOBAL_76_T  _GLOBAL_41_ipxctlerrmap_I [ ] ; extern  _GLOBAL_76_T  _GLOBAL_42_ipxctlerrmap_I [ ] ; extern  _GLOBAL_76_T  _GLOBAL_43_ipxctlerrmap_I [ ] ; extern  _GLOBAL_76_T  _GLOBAL_44_ipxctlerrmap_I [ ] ; extern  _GLOBAL_76_T  _GLOBAL_45_ipxctlerrmap_I [ ] ; extern  _GLOBAL_76_T  _GLOBAL_46_ipxctlerrmap_I [ ] ; extern  _GLOBAL_76_T  _GLOBAL_47_ipxctlerrmap_I [ ] ; extern  _GLOBAL_76_T  _GLOBAL_48_ipxctlerrmap_I [ ] ; extern  _GLOBAL_76_T  _GLOBAL_49_ipxctlerrmap_I [ ] ; static __attribute__ ((unused)) __typeof__(_GLOBAL_0_ipxctlerrmap_I) *_GLOBAL_ipxctlerrmap_12_A[NUM_STACKS];  

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

# 49 "openbsd3/netipx/ipx_proto.c" 2
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
# 50 "openbsd3/netipx/ipx_proto.c" 2





typedef  struct protosw  _GLOBAL_77_T;  _GLOBAL_77_T  _GLOBAL_0_ipxsw_I [ ]  = { { 0 , & global_ipxdomain[0]   , 0  , 0  , 0  , ipx_output  , 0  , 0  , 0  , ipx_init  , 0  , 0  , 0  , ipx_sysctl  }  , { 2 , & global_ipxdomain[0]   , 0  , 0x01 | 0x02   , 0  , 0  , ipx_ctlinput  , ipx_ctloutput  , ipx_usrreq  , 0  , 0  , 0  , 0  , ipx_sysctl  }   , { 1 , & global_ipxdomain[0]   , 5  , 0x04 | 0x08  | 0x20   , spx_input  , 0  , spx_ctlinput  , spx_ctloutput  , spx_usrreq  , spx_init  , spx_fasttimo  , spx_slowtimo  , 0  , spx_sysctl  }   , { 5 , & global_ipxdomain[0]   , 5  , 0x04 | 0x08  | 0x01  | 0x20   , spx_input  , 0  , spx_ctlinput  , spx_ctloutput  , spx_usrreq_sp  , 0  , 0  , 0  , 0  , spx_sysctl  }   , { 3 , & global_ipxdomain[0]   , 255  , 0x01 | 0x02   , ipx_input  , ipx_output  , 0  , ipx_ctloutput  , ipx_raw_usrreq  , 0  , 0  , 0  , 0  , ipx_sysctl  }   , }  ;  _GLOBAL_77_T  _GLOBAL_1_ipxsw_I [ ]  = { { 0 , & global_ipxdomain[1]   , 0  , 0  , 0  , ipx_output  , 0  , 0  , 0  , ipx_init  , 0  , 0  , 0  , ipx_sysctl  }  , { 2 , & global_ipxdomain[1]   , 0  , 0x01 | 0x02   , 0  , 0  , ipx_ctlinput  , ipx_ctloutput  , ipx_usrreq  , 0  , 0  , 0  , 0  , ipx_sysctl  }   , { 1 , & global_ipxdomain[1]   , 5  , 0x04 | 0x08  | 0x20   , spx_input  , 0  , spx_ctlinput  , spx_ctloutput  , spx_usrreq  , spx_init  , spx_fasttimo  , spx_slowtimo  , 0  , spx_sysctl  }   , { 5 , & global_ipxdomain[1]   , 5  , 0x04 | 0x08  | 0x01  | 0x20   , spx_input  , 0  , spx_ctlinput  , spx_ctloutput  , spx_usrreq_sp  , 0  , 0  , 0  , 0  , spx_sysctl  }   , { 3 , & global_ipxdomain[1]   , 255  , 0x01 | 0x02   , ipx_input  , ipx_output  , 0  , ipx_ctloutput  , ipx_raw_usrreq  , 0  , 0  , 0  , 0  , ipx_sysctl  }   , }  ;  _GLOBAL_77_T  _GLOBAL_2_ipxsw_I [ ]  = { { 0 , & global_ipxdomain[2]   , 0  , 0  , 0  , ipx_output  , 0  , 0  , 0  , ipx_init  , 0  , 0  , 0  , ipx_sysctl  }  , { 2 , & global_ipxdomain[2]   , 0  , 0x01 | 0x02   , 0  , 0  , ipx_ctlinput  , ipx_ctloutput  , ipx_usrreq  , 0  , 0  , 0  , 0  , ipx_sysctl  }   , { 1 , & global_ipxdomain[2]   , 5  , 0x04 | 0x08  | 0x20   , spx_input  , 0  , spx_ctlinput  , spx_ctloutput  , spx_usrreq  , spx_init  , spx_fasttimo  , spx_slowtimo  , 0  , spx_sysctl  }   , { 5 , & global_ipxdomain[2]   , 5  , 0x04 | 0x08  | 0x01  | 0x20   , spx_input  , 0  , spx_ctlinput  , spx_ctloutput  , spx_usrreq_sp  , 0  , 0  , 0  , 0  , spx_sysctl  }   , { 3 , & global_ipxdomain[2]   , 255  , 0x01 | 0x02   , ipx_input  , ipx_output  , 0  , ipx_ctloutput  , ipx_raw_usrreq  , 0  , 0  , 0  , 0  , ipx_sysctl  }   , }  ;  _GLOBAL_77_T  _GLOBAL_3_ipxsw_I [ ]  = { { 0 , & global_ipxdomain[3]   , 0  , 0  , 0  , ipx_output  , 0  , 0  , 0  , ipx_init  , 0  , 0  , 0  , ipx_sysctl  }  , { 2 , & global_ipxdomain[3]   , 0  , 0x01 | 0x02   , 0  , 0  , ipx_ctlinput  , ipx_ctloutput  , ipx_usrreq  , 0  , 0  , 0  , 0  , ipx_sysctl  }   , { 1 , & global_ipxdomain[3]   , 5  , 0x04 | 0x08  | 0x20   , spx_input  , 0  , spx_ctlinput  , spx_ctloutput  , spx_usrreq  , spx_init  , spx_fasttimo  , spx_slowtimo  , 0  , spx_sysctl  }   , { 5 , & global_ipxdomain[3]   , 5  , 0x04 | 0x08  | 0x01  | 0x20   , spx_input  , 0  , spx_ctlinput  , spx_ctloutput  , spx_usrreq_sp  , 0  , 0  , 0  , 0  , spx_sysctl  }   , { 3 , & global_ipxdomain[3]   , 255  , 0x01 | 0x02   , ipx_input  , ipx_output  , 0  , ipx_ctloutput  , ipx_raw_usrreq  , 0  , 0  , 0  , 0  , ipx_sysctl  }   , }  ;  _GLOBAL_77_T  _GLOBAL_4_ipxsw_I [ ]  = { { 0 , & global_ipxdomain[4]   , 0  , 0  , 0  , ipx_output  , 0  , 0  , 0  , ipx_init  , 0  , 0  , 0  , ipx_sysctl  }  , { 2 , & global_ipxdomain[4]   , 0  , 0x01 | 0x02   , 0  , 0  , ipx_ctlinput  , ipx_ctloutput  , ipx_usrreq  , 0  , 0  , 0  , 0  , ipx_sysctl  }   , { 1 , & global_ipxdomain[4]   , 5  , 0x04 | 0x08  | 0x20   , spx_input  , 0  , spx_ctlinput  , spx_ctloutput  , spx_usrreq  , spx_init  , spx_fasttimo  , spx_slowtimo  , 0  , spx_sysctl  }   , { 5 , & global_ipxdomain[4]   , 5  , 0x04 | 0x08  | 0x01  | 0x20   , spx_input  , 0  , spx_ctlinput  , spx_ctloutput  , spx_usrreq_sp  , 0  , 0  , 0  , 0  , spx_sysctl  }   , { 3 , & global_ipxdomain[4]   , 255  , 0x01 | 0x02   , ipx_input  , ipx_output  , 0  , ipx_ctloutput  , ipx_raw_usrreq  , 0  , 0  , 0  , 0  , ipx_sysctl  }   , }  ;  _GLOBAL_77_T  _GLOBAL_5_ipxsw_I [ ]  = { { 0 , & global_ipxdomain[5]   , 0  , 0  , 0  , ipx_output  , 0  , 0  , 0  , ipx_init  , 0  , 0  , 0  , ipx_sysctl  }  , { 2 , & global_ipxdomain[5]   , 0  , 0x01 | 0x02   , 0  , 0  , ipx_ctlinput  , ipx_ctloutput  , ipx_usrreq  , 0  , 0  , 0  , 0  , ipx_sysctl  }   , { 1 , & global_ipxdomain[5]   , 5  , 0x04 | 0x08  | 0x20   , spx_input  , 0  , spx_ctlinput  , spx_ctloutput  , spx_usrreq  , spx_init  , spx_fasttimo  , spx_slowtimo  , 0  , spx_sysctl  }   , { 5 , & global_ipxdomain[5]   , 5  , 0x04 | 0x08  | 0x01  | 0x20   , spx_input  , 0  , spx_ctlinput  , spx_ctloutput  , spx_usrreq_sp  , 0  , 0  , 0  , 0  , spx_sysctl  }   , { 3 , & global_ipxdomain[5]   , 255  , 0x01 | 0x02   , ipx_input  , ipx_output  , 0  , ipx_ctloutput  , ipx_raw_usrreq  , 0  , 0  , 0  , 0  , ipx_sysctl  }   , }  ;  _GLOBAL_77_T  _GLOBAL_6_ipxsw_I [ ]  = { { 0 , & global_ipxdomain[6]   , 0  , 0  , 0  , ipx_output  , 0  , 0  , 0  , ipx_init  , 0  , 0  , 0  , ipx_sysctl  }  , { 2 , & global_ipxdomain[6]   , 0  , 0x01 | 0x02   , 0  , 0  , ipx_ctlinput  , ipx_ctloutput  , ipx_usrreq  , 0  , 0  , 0  , 0  , ipx_sysctl  }   , { 1 , & global_ipxdomain[6]   , 5  , 0x04 | 0x08  | 0x20   , spx_input  , 0  , spx_ctlinput  , spx_ctloutput  , spx_usrreq  , spx_init  , spx_fasttimo  , spx_slowtimo  , 0  , spx_sysctl  }   , { 5 , & global_ipxdomain[6]   , 5  , 0x04 | 0x08  | 0x01  | 0x20   , spx_input  , 0  , spx_ctlinput  , spx_ctloutput  , spx_usrreq_sp  , 0  , 0  , 0  , 0  , spx_sysctl  }   , { 3 , & global_ipxdomain[6]   , 255  , 0x01 | 0x02   , ipx_input  , ipx_output  , 0  , ipx_ctloutput  , ipx_raw_usrreq  , 0  , 0  , 0  , 0  , ipx_sysctl  }   , }  ;  _GLOBAL_77_T  _GLOBAL_7_ipxsw_I [ ]  = { { 0 , & global_ipxdomain[7]   , 0  , 0  , 0  , ipx_output  , 0  , 0  , 0  , ipx_init  , 0  , 0  , 0  , ipx_sysctl  }  , { 2 , & global_ipxdomain[7]   , 0  , 0x01 | 0x02   , 0  , 0  , ipx_ctlinput  , ipx_ctloutput  , ipx_usrreq  , 0  , 0  , 0  , 0  , ipx_sysctl  }   , { 1 , & global_ipxdomain[7]   , 5  , 0x04 | 0x08  | 0x20   , spx_input  , 0  , spx_ctlinput  , spx_ctloutput  , spx_usrreq  , spx_init  , spx_fasttimo  , spx_slowtimo  , 0  , spx_sysctl  }   , { 5 , & global_ipxdomain[7]   , 5  , 0x04 | 0x08  | 0x01  | 0x20   , spx_input  , 0  , spx_ctlinput  , spx_ctloutput  , spx_usrreq_sp  , 0  , 0  , 0  , 0  , spx_sysctl  }   , { 3 , & global_ipxdomain[7]   , 255  , 0x01 | 0x02   , ipx_input  , ipx_output  , 0  , ipx_ctloutput  , ipx_raw_usrreq  , 0  , 0  , 0  , 0  , ipx_sysctl  }   , }  ;  _GLOBAL_77_T  _GLOBAL_8_ipxsw_I [ ]  = { { 0 , & global_ipxdomain[8]   , 0  , 0  , 0  , ipx_output  , 0  , 0  , 0  , ipx_init  , 0  , 0  , 0  , ipx_sysctl  }  , { 2 , & global_ipxdomain[8]   , 0  , 0x01 | 0x02   , 0  , 0  , ipx_ctlinput  , ipx_ctloutput  , ipx_usrreq  , 0  , 0  , 0  , 0  , ipx_sysctl  }   , { 1 , & global_ipxdomain[8]   , 5  , 0x04 | 0x08  | 0x20   , spx_input  , 0  , spx_ctlinput  , spx_ctloutput  , spx_usrreq  , spx_init  , spx_fasttimo  , spx_slowtimo  , 0  , spx_sysctl  }   , { 5 , & global_ipxdomain[8]   , 5  , 0x04 | 0x08  | 0x01  | 0x20   , spx_input  , 0  , spx_ctlinput  , spx_ctloutput  , spx_usrreq_sp  , 0  , 0  , 0  , 0  , spx_sysctl  }   , { 3 , & global_ipxdomain[8]   , 255  , 0x01 | 0x02   , ipx_input  , ipx_output  , 0  , ipx_ctloutput  , ipx_raw_usrreq  , 0  , 0  , 0  , 0  , ipx_sysctl  }   , }  ;  _GLOBAL_77_T  _GLOBAL_9_ipxsw_I [ ]  = { { 0 , & global_ipxdomain[9]   , 0  , 0  , 0  , ipx_output  , 0  , 0  , 0  , ipx_init  , 0  , 0  , 0  , ipx_sysctl  }  , { 2 , & global_ipxdomain[9]   , 0  , 0x01 | 0x02   , 0  , 0  , ipx_ctlinput  , ipx_ctloutput  , ipx_usrreq  , 0  , 0  , 0  , 0  , ipx_sysctl  }   , { 1 , & global_ipxdomain[9]   , 5  , 0x04 | 0x08  | 0x20   , spx_input  , 0  , spx_ctlinput  , spx_ctloutput  , spx_usrreq  , spx_init  , spx_fasttimo  , spx_slowtimo  , 0  , spx_sysctl  }   , { 5 , & global_ipxdomain[9]   , 5  , 0x04 | 0x08  | 0x01  | 0x20   , spx_input  , 0  , spx_ctlinput  , spx_ctloutput  , spx_usrreq_sp  , 0  , 0  , 0  , 0  , spx_sysctl  }   , { 3 , & global_ipxdomain[9]   , 255  , 0x01 | 0x02   , ipx_input  , ipx_output  , 0  , ipx_ctloutput  , ipx_raw_usrreq  , 0  , 0  , 0  , 0  , ipx_sysctl  }   , }  ;  _GLOBAL_77_T  _GLOBAL_10_ipxsw_I [ ]  = { { 0 , & global_ipxdomain[10]   , 0  , 0  , 0  , ipx_output  , 0  , 0  , 0  , ipx_init  , 0  , 0  , 0  , ipx_sysctl  }  , { 2 , & global_ipxdomain[10]   , 0  , 0x01 | 0x02   , 0  , 0  , ipx_ctlinput  , ipx_ctloutput  , ipx_usrreq  , 0  , 0  , 0  , 0  , ipx_sysctl  }   , { 1 , & global_ipxdomain[10]   , 5  , 0x04 | 0x08  | 0x20   , spx_input  , 0  , spx_ctlinput  , spx_ctloutput  , spx_usrreq  , spx_init  , spx_fasttimo  , spx_slowtimo  , 0  , spx_sysctl  }   , { 5 , & global_ipxdomain[10]   , 5  , 0x04 | 0x08  | 0x01  | 0x20   , spx_input  , 0  , spx_ctlinput  , spx_ctloutput  , spx_usrreq_sp  , 0  , 0  , 0  , 0  , spx_sysctl  }   , { 3 , & global_ipxdomain[10]   , 255  , 0x01 | 0x02   , ipx_input  , ipx_output  , 0  , ipx_ctloutput  , ipx_raw_usrreq  , 0  , 0  , 0  , 0  , ipx_sysctl  }   , }  ;  _GLOBAL_77_T  _GLOBAL_11_ipxsw_I [ ]  = { { 0 , & global_ipxdomain[11]   , 0  , 0  , 0  , ipx_output  , 0  , 0  , 0  , ipx_init  , 0  , 0  , 0  , ipx_sysctl  }  , { 2 , & global_ipxdomain[11]   , 0  , 0x01 | 0x02   , 0  , 0  , ipx_ctlinput  , ipx_ctloutput  , ipx_usrreq  , 0  , 0  , 0  , 0  , ipx_sysctl  }   , { 1 , & global_ipxdomain[11]   , 5  , 0x04 | 0x08  | 0x20   , spx_input  , 0  , spx_ctlinput  , spx_ctloutput  , spx_usrreq  , spx_init  , spx_fasttimo  , spx_slowtimo  , 0  , spx_sysctl  }   , { 5 , & global_ipxdomain[11]   , 5  , 0x04 | 0x08  | 0x01  | 0x20   , spx_input  , 0  , spx_ctlinput  , spx_ctloutput  , spx_usrreq_sp  , 0  , 0  , 0  , 0  , spx_sysctl  }   , { 3 , & global_ipxdomain[11]   , 255  , 0x01 | 0x02   , ipx_input  , ipx_output  , 0  , ipx_ctloutput  , ipx_raw_usrreq  , 0  , 0  , 0  , 0  , ipx_sysctl  }   , }  ;  _GLOBAL_77_T  _GLOBAL_12_ipxsw_I [ ]  = { { 0 , & global_ipxdomain[12]   , 0  , 0  , 0  , ipx_output  , 0  , 0  , 0  , ipx_init  , 0  , 0  , 0  , ipx_sysctl  }  , { 2 , & global_ipxdomain[12]   , 0  , 0x01 | 0x02   , 0  , 0  , ipx_ctlinput  , ipx_ctloutput  , ipx_usrreq  , 0  , 0  , 0  , 0  , ipx_sysctl  }   , { 1 , & global_ipxdomain[12]   , 5  , 0x04 | 0x08  | 0x20   , spx_input  , 0  , spx_ctlinput  , spx_ctloutput  , spx_usrreq  , spx_init  , spx_fasttimo  , spx_slowtimo  , 0  , spx_sysctl  }   , { 5 , & global_ipxdomain[12]   , 5  , 0x04 | 0x08  | 0x01  | 0x20   , spx_input  , 0  , spx_ctlinput  , spx_ctloutput  , spx_usrreq_sp  , 0  , 0  , 0  , 0  , spx_sysctl  }   , { 3 , & global_ipxdomain[12]   , 255  , 0x01 | 0x02   , ipx_input  , ipx_output  , 0  , ipx_ctloutput  , ipx_raw_usrreq  , 0  , 0  , 0  , 0  , ipx_sysctl  }   , }  ;  _GLOBAL_77_T  _GLOBAL_13_ipxsw_I [ ]  = { { 0 , & global_ipxdomain[13]   , 0  , 0  , 0  , ipx_output  , 0  , 0  , 0  , ipx_init  , 0  , 0  , 0  , ipx_sysctl  }  , { 2 , & global_ipxdomain[13]   , 0  , 0x01 | 0x02   , 0  , 0  , ipx_ctlinput  , ipx_ctloutput  , ipx_usrreq  , 0  , 0  , 0  , 0  , ipx_sysctl  }   , { 1 , & global_ipxdomain[13]   , 5  , 0x04 | 0x08  | 0x20   , spx_input  , 0  , spx_ctlinput  , spx_ctloutput  , spx_usrreq  , spx_init  , spx_fasttimo  , spx_slowtimo  , 0  , spx_sysctl  }   , { 5 , & global_ipxdomain[13]   , 5  , 0x04 | 0x08  | 0x01  | 0x20   , spx_input  , 0  , spx_ctlinput  , spx_ctloutput  , spx_usrreq_sp  , 0  , 0  , 0  , 0  , spx_sysctl  }   , { 3 , & global_ipxdomain[13]   , 255  , 0x01 | 0x02   , ipx_input  , ipx_output  , 0  , ipx_ctloutput  , ipx_raw_usrreq  , 0  , 0  , 0  , 0  , ipx_sysctl  }   , }  ;  _GLOBAL_77_T  _GLOBAL_14_ipxsw_I [ ]  = { { 0 , & global_ipxdomain[14]   , 0  , 0  , 0  , ipx_output  , 0  , 0  , 0  , ipx_init  , 0  , 0  , 0  , ipx_sysctl  }  , { 2 , & global_ipxdomain[14]   , 0  , 0x01 | 0x02   , 0  , 0  , ipx_ctlinput  , ipx_ctloutput  , ipx_usrreq  , 0  , 0  , 0  , 0  , ipx_sysctl  }   , { 1 , & global_ipxdomain[14]   , 5  , 0x04 | 0x08  | 0x20   , spx_input  , 0  , spx_ctlinput  , spx_ctloutput  , spx_usrreq  , spx_init  , spx_fasttimo  , spx_slowtimo  , 0  , spx_sysctl  }   , { 5 , & global_ipxdomain[14]   , 5  , 0x04 | 0x08  | 0x01  | 0x20   , spx_input  , 0  , spx_ctlinput  , spx_ctloutput  , spx_usrreq_sp  , 0  , 0  , 0  , 0  , spx_sysctl  }   , { 3 , & global_ipxdomain[14]   , 255  , 0x01 | 0x02   , ipx_input  , ipx_output  , 0  , ipx_ctloutput  , ipx_raw_usrreq  , 0  , 0  , 0  , 0  , ipx_sysctl  }   , }  ;  _GLOBAL_77_T  _GLOBAL_15_ipxsw_I [ ]  = { { 0 , & global_ipxdomain[15]   , 0  , 0  , 0  , ipx_output  , 0  , 0  , 0  , ipx_init  , 0  , 0  , 0  , ipx_sysctl  }  , { 2 , & global_ipxdomain[15]   , 0  , 0x01 | 0x02   , 0  , 0  , ipx_ctlinput  , ipx_ctloutput  , ipx_usrreq  , 0  , 0  , 0  , 0  , ipx_sysctl  }   , { 1 , & global_ipxdomain[15]   , 5  , 0x04 | 0x08  | 0x20   , spx_input  , 0  , spx_ctlinput  , spx_ctloutput  , spx_usrreq  , spx_init  , spx_fasttimo  , spx_slowtimo  , 0  , spx_sysctl  }   , { 5 , & global_ipxdomain[15]   , 5  , 0x04 | 0x08  | 0x01  | 0x20   , spx_input  , 0  , spx_ctlinput  , spx_ctloutput  , spx_usrreq_sp  , 0  , 0  , 0  , 0  , spx_sysctl  }   , { 3 , & global_ipxdomain[15]   , 255  , 0x01 | 0x02   , ipx_input  , ipx_output  , 0  , ipx_ctloutput  , ipx_raw_usrreq  , 0  , 0  , 0  , 0  , ipx_sysctl  }   , }  ;  _GLOBAL_77_T  _GLOBAL_16_ipxsw_I [ ]  = { { 0 , & global_ipxdomain[16]   , 0  , 0  , 0  , ipx_output  , 0  , 0  , 0  , ipx_init  , 0  , 0  , 0  , ipx_sysctl  }  , { 2 , & global_ipxdomain[16]   , 0  , 0x01 | 0x02   , 0  , 0  , ipx_ctlinput  , ipx_ctloutput  , ipx_usrreq  , 0  , 0  , 0  , 0  , ipx_sysctl  }   , { 1 , & global_ipxdomain[16]   , 5  , 0x04 | 0x08  | 0x20   , spx_input  , 0  , spx_ctlinput  , spx_ctloutput  , spx_usrreq  , spx_init  , spx_fasttimo  , spx_slowtimo  , 0  , spx_sysctl  }   , { 5 , & global_ipxdomain[16]   , 5  , 0x04 | 0x08  | 0x01  | 0x20   , spx_input  , 0  , spx_ctlinput  , spx_ctloutput  , spx_usrreq_sp  , 0  , 0  , 0  , 0  , spx_sysctl  }   , { 3 , & global_ipxdomain[16]   , 255  , 0x01 | 0x02   , ipx_input  , ipx_output  , 0  , ipx_ctloutput  , ipx_raw_usrreq  , 0  , 0  , 0  , 0  , ipx_sysctl  }   , }  ;  _GLOBAL_77_T  _GLOBAL_17_ipxsw_I [ ]  = { { 0 , & global_ipxdomain[17]   , 0  , 0  , 0  , ipx_output  , 0  , 0  , 0  , ipx_init  , 0  , 0  , 0  , ipx_sysctl  }  , { 2 , & global_ipxdomain[17]   , 0  , 0x01 | 0x02   , 0  , 0  , ipx_ctlinput  , ipx_ctloutput  , ipx_usrreq  , 0  , 0  , 0  , 0  , ipx_sysctl  }   , { 1 , & global_ipxdomain[17]   , 5  , 0x04 | 0x08  | 0x20   , spx_input  , 0  , spx_ctlinput  , spx_ctloutput  , spx_usrreq  , spx_init  , spx_fasttimo  , spx_slowtimo  , 0  , spx_sysctl  }   , { 5 , & global_ipxdomain[17]   , 5  , 0x04 | 0x08  | 0x01  | 0x20   , spx_input  , 0  , spx_ctlinput  , spx_ctloutput  , spx_usrreq_sp  , 0  , 0  , 0  , 0  , spx_sysctl  }   , { 3 , & global_ipxdomain[17]   , 255  , 0x01 | 0x02   , ipx_input  , ipx_output  , 0  , ipx_ctloutput  , ipx_raw_usrreq  , 0  , 0  , 0  , 0  , ipx_sysctl  }   , }  ;  _GLOBAL_77_T  _GLOBAL_18_ipxsw_I [ ]  = { { 0 , & global_ipxdomain[18]   , 0  , 0  , 0  , ipx_output  , 0  , 0  , 0  , ipx_init  , 0  , 0  , 0  , ipx_sysctl  }  , { 2 , & global_ipxdomain[18]   , 0  , 0x01 | 0x02   , 0  , 0  , ipx_ctlinput  , ipx_ctloutput  , ipx_usrreq  , 0  , 0  , 0  , 0  , ipx_sysctl  }   , { 1 , & global_ipxdomain[18]   , 5  , 0x04 | 0x08  | 0x20   , spx_input  , 0  , spx_ctlinput  , spx_ctloutput  , spx_usrreq  , spx_init  , spx_fasttimo  , spx_slowtimo  , 0  , spx_sysctl  }   , { 5 , & global_ipxdomain[18]   , 5  , 0x04 | 0x08  | 0x01  | 0x20   , spx_input  , 0  , spx_ctlinput  , spx_ctloutput  , spx_usrreq_sp  , 0  , 0  , 0  , 0  , spx_sysctl  }   , { 3 , & global_ipxdomain[18]   , 255  , 0x01 | 0x02   , ipx_input  , ipx_output  , 0  , ipx_ctloutput  , ipx_raw_usrreq  , 0  , 0  , 0  , 0  , ipx_sysctl  }   , }  ;  _GLOBAL_77_T  _GLOBAL_19_ipxsw_I [ ]  = { { 0 , & global_ipxdomain[19]   , 0  , 0  , 0  , ipx_output  , 0  , 0  , 0  , ipx_init  , 0  , 0  , 0  , ipx_sysctl  }  , { 2 , & global_ipxdomain[19]   , 0  , 0x01 | 0x02   , 0  , 0  , ipx_ctlinput  , ipx_ctloutput  , ipx_usrreq  , 0  , 0  , 0  , 0  , ipx_sysctl  }   , { 1 , & global_ipxdomain[19]   , 5  , 0x04 | 0x08  | 0x20   , spx_input  , 0  , spx_ctlinput  , spx_ctloutput  , spx_usrreq  , spx_init  , spx_fasttimo  , spx_slowtimo  , 0  , spx_sysctl  }   , { 5 , & global_ipxdomain[19]   , 5  , 0x04 | 0x08  | 0x01  | 0x20   , spx_input  , 0  , spx_ctlinput  , spx_ctloutput  , spx_usrreq_sp  , 0  , 0  , 0  , 0  , spx_sysctl  }   , { 3 , & global_ipxdomain[19]   , 255  , 0x01 | 0x02   , ipx_input  , ipx_output  , 0  , ipx_ctloutput  , ipx_raw_usrreq  , 0  , 0  , 0  , 0  , ipx_sysctl  }   , }  ;  _GLOBAL_77_T  _GLOBAL_20_ipxsw_I [ ]  = { { 0 , & global_ipxdomain[20]   , 0  , 0  , 0  , ipx_output  , 0  , 0  , 0  , ipx_init  , 0  , 0  , 0  , ipx_sysctl  }  , { 2 , & global_ipxdomain[20]   , 0  , 0x01 | 0x02   , 0  , 0  , ipx_ctlinput  , ipx_ctloutput  , ipx_usrreq  , 0  , 0  , 0  , 0  , ipx_sysctl  }   , { 1 , & global_ipxdomain[20]   , 5  , 0x04 | 0x08  | 0x20   , spx_input  , 0  , spx_ctlinput  , spx_ctloutput  , spx_usrreq  , spx_init  , spx_fasttimo  , spx_slowtimo  , 0  , spx_sysctl  }   , { 5 , & global_ipxdomain[20]   , 5  , 0x04 | 0x08  | 0x01  | 0x20   , spx_input  , 0  , spx_ctlinput  , spx_ctloutput  , spx_usrreq_sp  , 0  , 0  , 0  , 0  , spx_sysctl  }   , { 3 , & global_ipxdomain[20]   , 255  , 0x01 | 0x02   , ipx_input  , ipx_output  , 0  , ipx_ctloutput  , ipx_raw_usrreq  , 0  , 0  , 0  , 0  , ipx_sysctl  }   , }  ;  _GLOBAL_77_T  _GLOBAL_21_ipxsw_I [ ]  = { { 0 , & global_ipxdomain[21]   , 0  , 0  , 0  , ipx_output  , 0  , 0  , 0  , ipx_init  , 0  , 0  , 0  , ipx_sysctl  }  , { 2 , & global_ipxdomain[21]   , 0  , 0x01 | 0x02   , 0  , 0  , ipx_ctlinput  , ipx_ctloutput  , ipx_usrreq  , 0  , 0  , 0  , 0  , ipx_sysctl  }   , { 1 , & global_ipxdomain[21]   , 5  , 0x04 | 0x08  | 0x20   , spx_input  , 0  , spx_ctlinput  , spx_ctloutput  , spx_usrreq  , spx_init  , spx_fasttimo  , spx_slowtimo  , 0  , spx_sysctl  }   , { 5 , & global_ipxdomain[21]   , 5  , 0x04 | 0x08  | 0x01  | 0x20   , spx_input  , 0  , spx_ctlinput  , spx_ctloutput  , spx_usrreq_sp  , 0  , 0  , 0  , 0  , spx_sysctl  }   , { 3 , & global_ipxdomain[21]   , 255  , 0x01 | 0x02   , ipx_input  , ipx_output  , 0  , ipx_ctloutput  , ipx_raw_usrreq  , 0  , 0  , 0  , 0  , ipx_sysctl  }   , }  ;  _GLOBAL_77_T  _GLOBAL_22_ipxsw_I [ ]  = { { 0 , & global_ipxdomain[22]   , 0  , 0  , 0  , ipx_output  , 0  , 0  , 0  , ipx_init  , 0  , 0  , 0  , ipx_sysctl  }  , { 2 , & global_ipxdomain[22]   , 0  , 0x01 | 0x02   , 0  , 0  , ipx_ctlinput  , ipx_ctloutput  , ipx_usrreq  , 0  , 0  , 0  , 0  , ipx_sysctl  }   , { 1 , & global_ipxdomain[22]   , 5  , 0x04 | 0x08  | 0x20   , spx_input  , 0  , spx_ctlinput  , spx_ctloutput  , spx_usrreq  , spx_init  , spx_fasttimo  , spx_slowtimo  , 0  , spx_sysctl  }   , { 5 , & global_ipxdomain[22]   , 5  , 0x04 | 0x08  | 0x01  | 0x20   , spx_input  , 0  , spx_ctlinput  , spx_ctloutput  , spx_usrreq_sp  , 0  , 0  , 0  , 0  , spx_sysctl  }   , { 3 , & global_ipxdomain[22]   , 255  , 0x01 | 0x02   , ipx_input  , ipx_output  , 0  , ipx_ctloutput  , ipx_raw_usrreq  , 0  , 0  , 0  , 0  , ipx_sysctl  }   , }  ;  _GLOBAL_77_T  _GLOBAL_23_ipxsw_I [ ]  = { { 0 , & global_ipxdomain[23]   , 0  , 0  , 0  , ipx_output  , 0  , 0  , 0  , ipx_init  , 0  , 0  , 0  , ipx_sysctl  }  , { 2 , & global_ipxdomain[23]   , 0  , 0x01 | 0x02   , 0  , 0  , ipx_ctlinput  , ipx_ctloutput  , ipx_usrreq  , 0  , 0  , 0  , 0  , ipx_sysctl  }   , { 1 , & global_ipxdomain[23]   , 5  , 0x04 | 0x08  | 0x20   , spx_input  , 0  , spx_ctlinput  , spx_ctloutput  , spx_usrreq  , spx_init  , spx_fasttimo  , spx_slowtimo  , 0  , spx_sysctl  }   , { 5 , & global_ipxdomain[23]   , 5  , 0x04 | 0x08  | 0x01  | 0x20   , spx_input  , 0  , spx_ctlinput  , spx_ctloutput  , spx_usrreq_sp  , 0  , 0  , 0  , 0  , spx_sysctl  }   , { 3 , & global_ipxdomain[23]   , 255  , 0x01 | 0x02   , ipx_input  , ipx_output  , 0  , ipx_ctloutput  , ipx_raw_usrreq  , 0  , 0  , 0  , 0  , ipx_sysctl  }   , }  ;  _GLOBAL_77_T  _GLOBAL_24_ipxsw_I [ ]  = { { 0 , & global_ipxdomain[24]   , 0  , 0  , 0  , ipx_output  , 0  , 0  , 0  , ipx_init  , 0  , 0  , 0  , ipx_sysctl  }  , { 2 , & global_ipxdomain[24]   , 0  , 0x01 | 0x02   , 0  , 0  , ipx_ctlinput  , ipx_ctloutput  , ipx_usrreq  , 0  , 0  , 0  , 0  , ipx_sysctl  }   , { 1 , & global_ipxdomain[24]   , 5  , 0x04 | 0x08  | 0x20   , spx_input  , 0  , spx_ctlinput  , spx_ctloutput  , spx_usrreq  , spx_init  , spx_fasttimo  , spx_slowtimo  , 0  , spx_sysctl  }   , { 5 , & global_ipxdomain[24]   , 5  , 0x04 | 0x08  | 0x01  | 0x20   , spx_input  , 0  , spx_ctlinput  , spx_ctloutput  , spx_usrreq_sp  , 0  , 0  , 0  , 0  , spx_sysctl  }   , { 3 , & global_ipxdomain[24]   , 255  , 0x01 | 0x02   , ipx_input  , ipx_output  , 0  , ipx_ctloutput  , ipx_raw_usrreq  , 0  , 0  , 0  , 0  , ipx_sysctl  }   , }  ;  _GLOBAL_77_T  _GLOBAL_25_ipxsw_I [ ]  = { { 0 , & global_ipxdomain[25]   , 0  , 0  , 0  , ipx_output  , 0  , 0  , 0  , ipx_init  , 0  , 0  , 0  , ipx_sysctl  }  , { 2 , & global_ipxdomain[25]   , 0  , 0x01 | 0x02   , 0  , 0  , ipx_ctlinput  , ipx_ctloutput  , ipx_usrreq  , 0  , 0  , 0  , 0  , ipx_sysctl  }   , { 1 , & global_ipxdomain[25]   , 5  , 0x04 | 0x08  | 0x20   , spx_input  , 0  , spx_ctlinput  , spx_ctloutput  , spx_usrreq  , spx_init  , spx_fasttimo  , spx_slowtimo  , 0  , spx_sysctl  }   , { 5 , & global_ipxdomain[25]   , 5  , 0x04 | 0x08  | 0x01  | 0x20   , spx_input  , 0  , spx_ctlinput  , spx_ctloutput  , spx_usrreq_sp  , 0  , 0  , 0  , 0  , spx_sysctl  }   , { 3 , & global_ipxdomain[25]   , 255  , 0x01 | 0x02   , ipx_input  , ipx_output  , 0  , ipx_ctloutput  , ipx_raw_usrreq  , 0  , 0  , 0  , 0  , ipx_sysctl  }   , }  ;  _GLOBAL_77_T  _GLOBAL_26_ipxsw_I [ ]  = { { 0 , & global_ipxdomain[26]   , 0  , 0  , 0  , ipx_output  , 0  , 0  , 0  , ipx_init  , 0  , 0  , 0  , ipx_sysctl  }  , { 2 , & global_ipxdomain[26]   , 0  , 0x01 | 0x02   , 0  , 0  , ipx_ctlinput  , ipx_ctloutput  , ipx_usrreq  , 0  , 0  , 0  , 0  , ipx_sysctl  }   , { 1 , & global_ipxdomain[26]   , 5  , 0x04 | 0x08  | 0x20   , spx_input  , 0  , spx_ctlinput  , spx_ctloutput  , spx_usrreq  , spx_init  , spx_fasttimo  , spx_slowtimo  , 0  , spx_sysctl  }   , { 5 , & global_ipxdomain[26]   , 5  , 0x04 | 0x08  | 0x01  | 0x20   , spx_input  , 0  , spx_ctlinput  , spx_ctloutput  , spx_usrreq_sp  , 0  , 0  , 0  , 0  , spx_sysctl  }   , { 3 , & global_ipxdomain[26]   , 255  , 0x01 | 0x02   , ipx_input  , ipx_output  , 0  , ipx_ctloutput  , ipx_raw_usrreq  , 0  , 0  , 0  , 0  , ipx_sysctl  }   , }  ;  _GLOBAL_77_T  _GLOBAL_27_ipxsw_I [ ]  = { { 0 , & global_ipxdomain[27]   , 0  , 0  , 0  , ipx_output  , 0  , 0  , 0  , ipx_init  , 0  , 0  , 0  , ipx_sysctl  }  , { 2 , & global_ipxdomain[27]   , 0  , 0x01 | 0x02   , 0  , 0  , ipx_ctlinput  , ipx_ctloutput  , ipx_usrreq  , 0  , 0  , 0  , 0  , ipx_sysctl  }   , { 1 , & global_ipxdomain[27]   , 5  , 0x04 | 0x08  | 0x20   , spx_input  , 0  , spx_ctlinput  , spx_ctloutput  , spx_usrreq  , spx_init  , spx_fasttimo  , spx_slowtimo  , 0  , spx_sysctl  }   , { 5 , & global_ipxdomain[27]   , 5  , 0x04 | 0x08  | 0x01  | 0x20   , spx_input  , 0  , spx_ctlinput  , spx_ctloutput  , spx_usrreq_sp  , 0  , 0  , 0  , 0  , spx_sysctl  }   , { 3 , & global_ipxdomain[27]   , 255  , 0x01 | 0x02   , ipx_input  , ipx_output  , 0  , ipx_ctloutput  , ipx_raw_usrreq  , 0  , 0  , 0  , 0  , ipx_sysctl  }   , }  ;  _GLOBAL_77_T  _GLOBAL_28_ipxsw_I [ ]  = { { 0 , & global_ipxdomain[28]   , 0  , 0  , 0  , ipx_output  , 0  , 0  , 0  , ipx_init  , 0  , 0  , 0  , ipx_sysctl  }  , { 2 , & global_ipxdomain[28]   , 0  , 0x01 | 0x02   , 0  , 0  , ipx_ctlinput  , ipx_ctloutput  , ipx_usrreq  , 0  , 0  , 0  , 0  , ipx_sysctl  }   , { 1 , & global_ipxdomain[28]   , 5  , 0x04 | 0x08  | 0x20   , spx_input  , 0  , spx_ctlinput  , spx_ctloutput  , spx_usrreq  , spx_init  , spx_fasttimo  , spx_slowtimo  , 0  , spx_sysctl  }   , { 5 , & global_ipxdomain[28]   , 5  , 0x04 | 0x08  | 0x01  | 0x20   , spx_input  , 0  , spx_ctlinput  , spx_ctloutput  , spx_usrreq_sp  , 0  , 0  , 0  , 0  , spx_sysctl  }   , { 3 , & global_ipxdomain[28]   , 255  , 0x01 | 0x02   , ipx_input  , ipx_output  , 0  , ipx_ctloutput  , ipx_raw_usrreq  , 0  , 0  , 0  , 0  , ipx_sysctl  }   , }  ;  _GLOBAL_77_T  _GLOBAL_29_ipxsw_I [ ]  = { { 0 , & global_ipxdomain[29]   , 0  , 0  , 0  , ipx_output  , 0  , 0  , 0  , ipx_init  , 0  , 0  , 0  , ipx_sysctl  }  , { 2 , & global_ipxdomain[29]   , 0  , 0x01 | 0x02   , 0  , 0  , ipx_ctlinput  , ipx_ctloutput  , ipx_usrreq  , 0  , 0  , 0  , 0  , ipx_sysctl  }   , { 1 , & global_ipxdomain[29]   , 5  , 0x04 | 0x08  | 0x20   , spx_input  , 0  , spx_ctlinput  , spx_ctloutput  , spx_usrreq  , spx_init  , spx_fasttimo  , spx_slowtimo  , 0  , spx_sysctl  }   , { 5 , & global_ipxdomain[29]   , 5  , 0x04 | 0x08  | 0x01  | 0x20   , spx_input  , 0  , spx_ctlinput  , spx_ctloutput  , spx_usrreq_sp  , 0  , 0  , 0  , 0  , spx_sysctl  }   , { 3 , & global_ipxdomain[29]   , 255  , 0x01 | 0x02   , ipx_input  , ipx_output  , 0  , ipx_ctloutput  , ipx_raw_usrreq  , 0  , 0  , 0  , 0  , ipx_sysctl  }   , }  ;  _GLOBAL_77_T  _GLOBAL_30_ipxsw_I [ ]  = { { 0 , & global_ipxdomain[30]   , 0  , 0  , 0  , ipx_output  , 0  , 0  , 0  , ipx_init  , 0  , 0  , 0  , ipx_sysctl  }  , { 2 , & global_ipxdomain[30]   , 0  , 0x01 | 0x02   , 0  , 0  , ipx_ctlinput  , ipx_ctloutput  , ipx_usrreq  , 0  , 0  , 0  , 0  , ipx_sysctl  }   , { 1 , & global_ipxdomain[30]   , 5  , 0x04 | 0x08  | 0x20   , spx_input  , 0  , spx_ctlinput  , spx_ctloutput  , spx_usrreq  , spx_init  , spx_fasttimo  , spx_slowtimo  , 0  , spx_sysctl  }   , { 5 , & global_ipxdomain[30]   , 5  , 0x04 | 0x08  | 0x01  | 0x20   , spx_input  , 0  , spx_ctlinput  , spx_ctloutput  , spx_usrreq_sp  , 0  , 0  , 0  , 0  , spx_sysctl  }   , { 3 , & global_ipxdomain[30]   , 255  , 0x01 | 0x02   , ipx_input  , ipx_output  , 0  , ipx_ctloutput  , ipx_raw_usrreq  , 0  , 0  , 0  , 0  , ipx_sysctl  }   , }  ;  _GLOBAL_77_T  _GLOBAL_31_ipxsw_I [ ]  = { { 0 , & global_ipxdomain[31]   , 0  , 0  , 0  , ipx_output  , 0  , 0  , 0  , ipx_init  , 0  , 0  , 0  , ipx_sysctl  }  , { 2 , & global_ipxdomain[31]   , 0  , 0x01 | 0x02   , 0  , 0  , ipx_ctlinput  , ipx_ctloutput  , ipx_usrreq  , 0  , 0  , 0  , 0  , ipx_sysctl  }   , { 1 , & global_ipxdomain[31]   , 5  , 0x04 | 0x08  | 0x20   , spx_input  , 0  , spx_ctlinput  , spx_ctloutput  , spx_usrreq  , spx_init  , spx_fasttimo  , spx_slowtimo  , 0  , spx_sysctl  }   , { 5 , & global_ipxdomain[31]   , 5  , 0x04 | 0x08  | 0x01  | 0x20   , spx_input  , 0  , spx_ctlinput  , spx_ctloutput  , spx_usrreq_sp  , 0  , 0  , 0  , 0  , spx_sysctl  }   , { 3 , & global_ipxdomain[31]   , 255  , 0x01 | 0x02   , ipx_input  , ipx_output  , 0  , ipx_ctloutput  , ipx_raw_usrreq  , 0  , 0  , 0  , 0  , ipx_sysctl  }   , }  ;  _GLOBAL_77_T  _GLOBAL_32_ipxsw_I [ ]  = { { 0 , & global_ipxdomain[32]   , 0  , 0  , 0  , ipx_output  , 0  , 0  , 0  , ipx_init  , 0  , 0  , 0  , ipx_sysctl  }  , { 2 , & global_ipxdomain[32]   , 0  , 0x01 | 0x02   , 0  , 0  , ipx_ctlinput  , ipx_ctloutput  , ipx_usrreq  , 0  , 0  , 0  , 0  , ipx_sysctl  }   , { 1 , & global_ipxdomain[32]   , 5  , 0x04 | 0x08  | 0x20   , spx_input  , 0  , spx_ctlinput  , spx_ctloutput  , spx_usrreq  , spx_init  , spx_fasttimo  , spx_slowtimo  , 0  , spx_sysctl  }   , { 5 , & global_ipxdomain[32]   , 5  , 0x04 | 0x08  | 0x01  | 0x20   , spx_input  , 0  , spx_ctlinput  , spx_ctloutput  , spx_usrreq_sp  , 0  , 0  , 0  , 0  , spx_sysctl  }   , { 3 , & global_ipxdomain[32]   , 255  , 0x01 | 0x02   , ipx_input  , ipx_output  , 0  , ipx_ctloutput  , ipx_raw_usrreq  , 0  , 0  , 0  , 0  , ipx_sysctl  }   , }  ;  _GLOBAL_77_T  _GLOBAL_33_ipxsw_I [ ]  = { { 0 , & global_ipxdomain[33]   , 0  , 0  , 0  , ipx_output  , 0  , 0  , 0  , ipx_init  , 0  , 0  , 0  , ipx_sysctl  }  , { 2 , & global_ipxdomain[33]   , 0  , 0x01 | 0x02   , 0  , 0  , ipx_ctlinput  , ipx_ctloutput  , ipx_usrreq  , 0  , 0  , 0  , 0  , ipx_sysctl  }   , { 1 , & global_ipxdomain[33]   , 5  , 0x04 | 0x08  | 0x20   , spx_input  , 0  , spx_ctlinput  , spx_ctloutput  , spx_usrreq  , spx_init  , spx_fasttimo  , spx_slowtimo  , 0  , spx_sysctl  }   , { 5 , & global_ipxdomain[33]   , 5  , 0x04 | 0x08  | 0x01  | 0x20   , spx_input  , 0  , spx_ctlinput  , spx_ctloutput  , spx_usrreq_sp  , 0  , 0  , 0  , 0  , spx_sysctl  }   , { 3 , & global_ipxdomain[33]   , 255  , 0x01 | 0x02   , ipx_input  , ipx_output  , 0  , ipx_ctloutput  , ipx_raw_usrreq  , 0  , 0  , 0  , 0  , ipx_sysctl  }   , }  ;  _GLOBAL_77_T  _GLOBAL_34_ipxsw_I [ ]  = { { 0 , & global_ipxdomain[34]   , 0  , 0  , 0  , ipx_output  , 0  , 0  , 0  , ipx_init  , 0  , 0  , 0  , ipx_sysctl  }  , { 2 , & global_ipxdomain[34]   , 0  , 0x01 | 0x02   , 0  , 0  , ipx_ctlinput  , ipx_ctloutput  , ipx_usrreq  , 0  , 0  , 0  , 0  , ipx_sysctl  }   , { 1 , & global_ipxdomain[34]   , 5  , 0x04 | 0x08  | 0x20   , spx_input  , 0  , spx_ctlinput  , spx_ctloutput  , spx_usrreq  , spx_init  , spx_fasttimo  , spx_slowtimo  , 0  , spx_sysctl  }   , { 5 , & global_ipxdomain[34]   , 5  , 0x04 | 0x08  | 0x01  | 0x20   , spx_input  , 0  , spx_ctlinput  , spx_ctloutput  , spx_usrreq_sp  , 0  , 0  , 0  , 0  , spx_sysctl  }   , { 3 , & global_ipxdomain[34]   , 255  , 0x01 | 0x02   , ipx_input  , ipx_output  , 0  , ipx_ctloutput  , ipx_raw_usrreq  , 0  , 0  , 0  , 0  , ipx_sysctl  }   , }  ;  _GLOBAL_77_T  _GLOBAL_35_ipxsw_I [ ]  = { { 0 , & global_ipxdomain[35]   , 0  , 0  , 0  , ipx_output  , 0  , 0  , 0  , ipx_init  , 0  , 0  , 0  , ipx_sysctl  }  , { 2 , & global_ipxdomain[35]   , 0  , 0x01 | 0x02   , 0  , 0  , ipx_ctlinput  , ipx_ctloutput  , ipx_usrreq  , 0  , 0  , 0  , 0  , ipx_sysctl  }   , { 1 , & global_ipxdomain[35]   , 5  , 0x04 | 0x08  | 0x20   , spx_input  , 0  , spx_ctlinput  , spx_ctloutput  , spx_usrreq  , spx_init  , spx_fasttimo  , spx_slowtimo  , 0  , spx_sysctl  }   , { 5 , & global_ipxdomain[35]   , 5  , 0x04 | 0x08  | 0x01  | 0x20   , spx_input  , 0  , spx_ctlinput  , spx_ctloutput  , spx_usrreq_sp  , 0  , 0  , 0  , 0  , spx_sysctl  }   , { 3 , & global_ipxdomain[35]   , 255  , 0x01 | 0x02   , ipx_input  , ipx_output  , 0  , ipx_ctloutput  , ipx_raw_usrreq  , 0  , 0  , 0  , 0  , ipx_sysctl  }   , }  ;  _GLOBAL_77_T  _GLOBAL_36_ipxsw_I [ ]  = { { 0 , & global_ipxdomain[36]   , 0  , 0  , 0  , ipx_output  , 0  , 0  , 0  , ipx_init  , 0  , 0  , 0  , ipx_sysctl  }  , { 2 , & global_ipxdomain[36]   , 0  , 0x01 | 0x02   , 0  , 0  , ipx_ctlinput  , ipx_ctloutput  , ipx_usrreq  , 0  , 0  , 0  , 0  , ipx_sysctl  }   , { 1 , & global_ipxdomain[36]   , 5  , 0x04 | 0x08  | 0x20   , spx_input  , 0  , spx_ctlinput  , spx_ctloutput  , spx_usrreq  , spx_init  , spx_fasttimo  , spx_slowtimo  , 0  , spx_sysctl  }   , { 5 , & global_ipxdomain[36]   , 5  , 0x04 | 0x08  | 0x01  | 0x20   , spx_input  , 0  , spx_ctlinput  , spx_ctloutput  , spx_usrreq_sp  , 0  , 0  , 0  , 0  , spx_sysctl  }   , { 3 , & global_ipxdomain[36]   , 255  , 0x01 | 0x02   , ipx_input  , ipx_output  , 0  , ipx_ctloutput  , ipx_raw_usrreq  , 0  , 0  , 0  , 0  , ipx_sysctl  }   , }  ;  _GLOBAL_77_T  _GLOBAL_37_ipxsw_I [ ]  = { { 0 , & global_ipxdomain[37]   , 0  , 0  , 0  , ipx_output  , 0  , 0  , 0  , ipx_init  , 0  , 0  , 0  , ipx_sysctl  }  , { 2 , & global_ipxdomain[37]   , 0  , 0x01 | 0x02   , 0  , 0  , ipx_ctlinput  , ipx_ctloutput  , ipx_usrreq  , 0  , 0  , 0  , 0  , ipx_sysctl  }   , { 1 , & global_ipxdomain[37]   , 5  , 0x04 | 0x08  | 0x20   , spx_input  , 0  , spx_ctlinput  , spx_ctloutput  , spx_usrreq  , spx_init  , spx_fasttimo  , spx_slowtimo  , 0  , spx_sysctl  }   , { 5 , & global_ipxdomain[37]   , 5  , 0x04 | 0x08  | 0x01  | 0x20   , spx_input  , 0  , spx_ctlinput  , spx_ctloutput  , spx_usrreq_sp  , 0  , 0  , 0  , 0  , spx_sysctl  }   , { 3 , & global_ipxdomain[37]   , 255  , 0x01 | 0x02   , ipx_input  , ipx_output  , 0  , ipx_ctloutput  , ipx_raw_usrreq  , 0  , 0  , 0  , 0  , ipx_sysctl  }   , }  ;  _GLOBAL_77_T  _GLOBAL_38_ipxsw_I [ ]  = { { 0 , & global_ipxdomain[38]   , 0  , 0  , 0  , ipx_output  , 0  , 0  , 0  , ipx_init  , 0  , 0  , 0  , ipx_sysctl  }  , { 2 , & global_ipxdomain[38]   , 0  , 0x01 | 0x02   , 0  , 0  , ipx_ctlinput  , ipx_ctloutput  , ipx_usrreq  , 0  , 0  , 0  , 0  , ipx_sysctl  }   , { 1 , & global_ipxdomain[38]   , 5  , 0x04 | 0x08  | 0x20   , spx_input  , 0  , spx_ctlinput  , spx_ctloutput  , spx_usrreq  , spx_init  , spx_fasttimo  , spx_slowtimo  , 0  , spx_sysctl  }   , { 5 , & global_ipxdomain[38]   , 5  , 0x04 | 0x08  | 0x01  | 0x20   , spx_input  , 0  , spx_ctlinput  , spx_ctloutput  , spx_usrreq_sp  , 0  , 0  , 0  , 0  , spx_sysctl  }   , { 3 , & global_ipxdomain[38]   , 255  , 0x01 | 0x02   , ipx_input  , ipx_output  , 0  , ipx_ctloutput  , ipx_raw_usrreq  , 0  , 0  , 0  , 0  , ipx_sysctl  }   , }  ;  _GLOBAL_77_T  _GLOBAL_39_ipxsw_I [ ]  = { { 0 , & global_ipxdomain[39]   , 0  , 0  , 0  , ipx_output  , 0  , 0  , 0  , ipx_init  , 0  , 0  , 0  , ipx_sysctl  }  , { 2 , & global_ipxdomain[39]   , 0  , 0x01 | 0x02   , 0  , 0  , ipx_ctlinput  , ipx_ctloutput  , ipx_usrreq  , 0  , 0  , 0  , 0  , ipx_sysctl  }   , { 1 , & global_ipxdomain[39]   , 5  , 0x04 | 0x08  | 0x20   , spx_input  , 0  , spx_ctlinput  , spx_ctloutput  , spx_usrreq  , spx_init  , spx_fasttimo  , spx_slowtimo  , 0  , spx_sysctl  }   , { 5 , & global_ipxdomain[39]   , 5  , 0x04 | 0x08  | 0x01  | 0x20   , spx_input  , 0  , spx_ctlinput  , spx_ctloutput  , spx_usrreq_sp  , 0  , 0  , 0  , 0  , spx_sysctl  }   , { 3 , & global_ipxdomain[39]   , 255  , 0x01 | 0x02   , ipx_input  , ipx_output  , 0  , ipx_ctloutput  , ipx_raw_usrreq  , 0  , 0  , 0  , 0  , ipx_sysctl  }   , }  ;  _GLOBAL_77_T  _GLOBAL_40_ipxsw_I [ ]  = { { 0 , & global_ipxdomain[40]   , 0  , 0  , 0  , ipx_output  , 0  , 0  , 0  , ipx_init  , 0  , 0  , 0  , ipx_sysctl  }  , { 2 , & global_ipxdomain[40]   , 0  , 0x01 | 0x02   , 0  , 0  , ipx_ctlinput  , ipx_ctloutput  , ipx_usrreq  , 0  , 0  , 0  , 0  , ipx_sysctl  }   , { 1 , & global_ipxdomain[40]   , 5  , 0x04 | 0x08  | 0x20   , spx_input  , 0  , spx_ctlinput  , spx_ctloutput  , spx_usrreq  , spx_init  , spx_fasttimo  , spx_slowtimo  , 0  , spx_sysctl  }   , { 5 , & global_ipxdomain[40]   , 5  , 0x04 | 0x08  | 0x01  | 0x20   , spx_input  , 0  , spx_ctlinput  , spx_ctloutput  , spx_usrreq_sp  , 0  , 0  , 0  , 0  , spx_sysctl  }   , { 3 , & global_ipxdomain[40]   , 255  , 0x01 | 0x02   , ipx_input  , ipx_output  , 0  , ipx_ctloutput  , ipx_raw_usrreq  , 0  , 0  , 0  , 0  , ipx_sysctl  }   , }  ;  _GLOBAL_77_T  _GLOBAL_41_ipxsw_I [ ]  = { { 0 , & global_ipxdomain[41]   , 0  , 0  , 0  , ipx_output  , 0  , 0  , 0  , ipx_init  , 0  , 0  , 0  , ipx_sysctl  }  , { 2 , & global_ipxdomain[41]   , 0  , 0x01 | 0x02   , 0  , 0  , ipx_ctlinput  , ipx_ctloutput  , ipx_usrreq  , 0  , 0  , 0  , 0  , ipx_sysctl  }   , { 1 , & global_ipxdomain[41]   , 5  , 0x04 | 0x08  | 0x20   , spx_input  , 0  , spx_ctlinput  , spx_ctloutput  , spx_usrreq  , spx_init  , spx_fasttimo  , spx_slowtimo  , 0  , spx_sysctl  }   , { 5 , & global_ipxdomain[41]   , 5  , 0x04 | 0x08  | 0x01  | 0x20   , spx_input  , 0  , spx_ctlinput  , spx_ctloutput  , spx_usrreq_sp  , 0  , 0  , 0  , 0  , spx_sysctl  }   , { 3 , & global_ipxdomain[41]   , 255  , 0x01 | 0x02   , ipx_input  , ipx_output  , 0  , ipx_ctloutput  , ipx_raw_usrreq  , 0  , 0  , 0  , 0  , ipx_sysctl  }   , }  ;  _GLOBAL_77_T  _GLOBAL_42_ipxsw_I [ ]  = { { 0 , & global_ipxdomain[42]   , 0  , 0  , 0  , ipx_output  , 0  , 0  , 0  , ipx_init  , 0  , 0  , 0  , ipx_sysctl  }  , { 2 , & global_ipxdomain[42]   , 0  , 0x01 | 0x02   , 0  , 0  , ipx_ctlinput  , ipx_ctloutput  , ipx_usrreq  , 0  , 0  , 0  , 0  , ipx_sysctl  }   , { 1 , & global_ipxdomain[42]   , 5  , 0x04 | 0x08  | 0x20   , spx_input  , 0  , spx_ctlinput  , spx_ctloutput  , spx_usrreq  , spx_init  , spx_fasttimo  , spx_slowtimo  , 0  , spx_sysctl  }   , { 5 , & global_ipxdomain[42]   , 5  , 0x04 | 0x08  | 0x01  | 0x20   , spx_input  , 0  , spx_ctlinput  , spx_ctloutput  , spx_usrreq_sp  , 0  , 0  , 0  , 0  , spx_sysctl  }   , { 3 , & global_ipxdomain[42]   , 255  , 0x01 | 0x02   , ipx_input  , ipx_output  , 0  , ipx_ctloutput  , ipx_raw_usrreq  , 0  , 0  , 0  , 0  , ipx_sysctl  }   , }  ;  _GLOBAL_77_T  _GLOBAL_43_ipxsw_I [ ]  = { { 0 , & global_ipxdomain[43]   , 0  , 0  , 0  , ipx_output  , 0  , 0  , 0  , ipx_init  , 0  , 0  , 0  , ipx_sysctl  }  , { 2 , & global_ipxdomain[43]   , 0  , 0x01 | 0x02   , 0  , 0  , ipx_ctlinput  , ipx_ctloutput  , ipx_usrreq  , 0  , 0  , 0  , 0  , ipx_sysctl  }   , { 1 , & global_ipxdomain[43]   , 5  , 0x04 | 0x08  | 0x20   , spx_input  , 0  , spx_ctlinput  , spx_ctloutput  , spx_usrreq  , spx_init  , spx_fasttimo  , spx_slowtimo  , 0  , spx_sysctl  }   , { 5 , & global_ipxdomain[43]   , 5  , 0x04 | 0x08  | 0x01  | 0x20   , spx_input  , 0  , spx_ctlinput  , spx_ctloutput  , spx_usrreq_sp  , 0  , 0  , 0  , 0  , spx_sysctl  }   , { 3 , & global_ipxdomain[43]   , 255  , 0x01 | 0x02   , ipx_input  , ipx_output  , 0  , ipx_ctloutput  , ipx_raw_usrreq  , 0  , 0  , 0  , 0  , ipx_sysctl  }   , }  ;  _GLOBAL_77_T  _GLOBAL_44_ipxsw_I [ ]  = { { 0 , & global_ipxdomain[44]   , 0  , 0  , 0  , ipx_output  , 0  , 0  , 0  , ipx_init  , 0  , 0  , 0  , ipx_sysctl  }  , { 2 , & global_ipxdomain[44]   , 0  , 0x01 | 0x02   , 0  , 0  , ipx_ctlinput  , ipx_ctloutput  , ipx_usrreq  , 0  , 0  , 0  , 0  , ipx_sysctl  }   , { 1 , & global_ipxdomain[44]   , 5  , 0x04 | 0x08  | 0x20   , spx_input  , 0  , spx_ctlinput  , spx_ctloutput  , spx_usrreq  , spx_init  , spx_fasttimo  , spx_slowtimo  , 0  , spx_sysctl  }   , { 5 , & global_ipxdomain[44]   , 5  , 0x04 | 0x08  | 0x01  | 0x20   , spx_input  , 0  , spx_ctlinput  , spx_ctloutput  , spx_usrreq_sp  , 0  , 0  , 0  , 0  , spx_sysctl  }   , { 3 , & global_ipxdomain[44]   , 255  , 0x01 | 0x02   , ipx_input  , ipx_output  , 0  , ipx_ctloutput  , ipx_raw_usrreq  , 0  , 0  , 0  , 0  , ipx_sysctl  }   , }  ;  _GLOBAL_77_T  _GLOBAL_45_ipxsw_I [ ]  = { { 0 , & global_ipxdomain[45]   , 0  , 0  , 0  , ipx_output  , 0  , 0  , 0  , ipx_init  , 0  , 0  , 0  , ipx_sysctl  }  , { 2 , & global_ipxdomain[45]   , 0  , 0x01 | 0x02   , 0  , 0  , ipx_ctlinput  , ipx_ctloutput  , ipx_usrreq  , 0  , 0  , 0  , 0  , ipx_sysctl  }   , { 1 , & global_ipxdomain[45]   , 5  , 0x04 | 0x08  | 0x20   , spx_input  , 0  , spx_ctlinput  , spx_ctloutput  , spx_usrreq  , spx_init  , spx_fasttimo  , spx_slowtimo  , 0  , spx_sysctl  }   , { 5 , & global_ipxdomain[45]   , 5  , 0x04 | 0x08  | 0x01  | 0x20   , spx_input  , 0  , spx_ctlinput  , spx_ctloutput  , spx_usrreq_sp  , 0  , 0  , 0  , 0  , spx_sysctl  }   , { 3 , & global_ipxdomain[45]   , 255  , 0x01 | 0x02   , ipx_input  , ipx_output  , 0  , ipx_ctloutput  , ipx_raw_usrreq  , 0  , 0  , 0  , 0  , ipx_sysctl  }   , }  ;  _GLOBAL_77_T  _GLOBAL_46_ipxsw_I [ ]  = { { 0 , & global_ipxdomain[46]   , 0  , 0  , 0  , ipx_output  , 0  , 0  , 0  , ipx_init  , 0  , 0  , 0  , ipx_sysctl  }  , { 2 , & global_ipxdomain[46]   , 0  , 0x01 | 0x02   , 0  , 0  , ipx_ctlinput  , ipx_ctloutput  , ipx_usrreq  , 0  , 0  , 0  , 0  , ipx_sysctl  }   , { 1 , & global_ipxdomain[46]   , 5  , 0x04 | 0x08  | 0x20   , spx_input  , 0  , spx_ctlinput  , spx_ctloutput  , spx_usrreq  , spx_init  , spx_fasttimo  , spx_slowtimo  , 0  , spx_sysctl  }   , { 5 , & global_ipxdomain[46]   , 5  , 0x04 | 0x08  | 0x01  | 0x20   , spx_input  , 0  , spx_ctlinput  , spx_ctloutput  , spx_usrreq_sp  , 0  , 0  , 0  , 0  , spx_sysctl  }   , { 3 , & global_ipxdomain[46]   , 255  , 0x01 | 0x02   , ipx_input  , ipx_output  , 0  , ipx_ctloutput  , ipx_raw_usrreq  , 0  , 0  , 0  , 0  , ipx_sysctl  }   , }  ;  _GLOBAL_77_T  _GLOBAL_47_ipxsw_I [ ]  = { { 0 , & global_ipxdomain[47]   , 0  , 0  , 0  , ipx_output  , 0  , 0  , 0  , ipx_init  , 0  , 0  , 0  , ipx_sysctl  }  , { 2 , & global_ipxdomain[47]   , 0  , 0x01 | 0x02   , 0  , 0  , ipx_ctlinput  , ipx_ctloutput  , ipx_usrreq  , 0  , 0  , 0  , 0  , ipx_sysctl  }   , { 1 , & global_ipxdomain[47]   , 5  , 0x04 | 0x08  | 0x20   , spx_input  , 0  , spx_ctlinput  , spx_ctloutput  , spx_usrreq  , spx_init  , spx_fasttimo  , spx_slowtimo  , 0  , spx_sysctl  }   , { 5 , & global_ipxdomain[47]   , 5  , 0x04 | 0x08  | 0x01  | 0x20   , spx_input  , 0  , spx_ctlinput  , spx_ctloutput  , spx_usrreq_sp  , 0  , 0  , 0  , 0  , spx_sysctl  }   , { 3 , & global_ipxdomain[47]   , 255  , 0x01 | 0x02   , ipx_input  , ipx_output  , 0  , ipx_ctloutput  , ipx_raw_usrreq  , 0  , 0  , 0  , 0  , ipx_sysctl  }   , }  ;  _GLOBAL_77_T  _GLOBAL_48_ipxsw_I [ ]  = { { 0 , & global_ipxdomain[48]   , 0  , 0  , 0  , ipx_output  , 0  , 0  , 0  , ipx_init  , 0  , 0  , 0  , ipx_sysctl  }  , { 2 , & global_ipxdomain[48]   , 0  , 0x01 | 0x02   , 0  , 0  , ipx_ctlinput  , ipx_ctloutput  , ipx_usrreq  , 0  , 0  , 0  , 0  , ipx_sysctl  }   , { 1 , & global_ipxdomain[48]   , 5  , 0x04 | 0x08  | 0x20   , spx_input  , 0  , spx_ctlinput  , spx_ctloutput  , spx_usrreq  , spx_init  , spx_fasttimo  , spx_slowtimo  , 0  , spx_sysctl  }   , { 5 , & global_ipxdomain[48]   , 5  , 0x04 | 0x08  | 0x01  | 0x20   , spx_input  , 0  , spx_ctlinput  , spx_ctloutput  , spx_usrreq_sp  , 0  , 0  , 0  , 0  , spx_sysctl  }   , { 3 , & global_ipxdomain[48]   , 255  , 0x01 | 0x02   , ipx_input  , ipx_output  , 0  , ipx_ctloutput  , ipx_raw_usrreq  , 0  , 0  , 0  , 0  , ipx_sysctl  }   , }  ;  _GLOBAL_77_T  _GLOBAL_49_ipxsw_I [ ]  = { { 0 , & global_ipxdomain[49]   , 0  , 0  , 0  , ipx_output  , 0  , 0  , 0  , ipx_init  , 0  , 0  , 0  , ipx_sysctl  }  , { 2 , & global_ipxdomain[49]   , 0  , 0x01 | 0x02   , 0  , 0  , ipx_ctlinput  , ipx_ctloutput  , ipx_usrreq  , 0  , 0  , 0  , 0  , ipx_sysctl  }   , { 1 , & global_ipxdomain[49]   , 5  , 0x04 | 0x08  | 0x20   , spx_input  , 0  , spx_ctlinput  , spx_ctloutput  , spx_usrreq  , spx_init  , spx_fasttimo  , spx_slowtimo  , 0  , spx_sysctl  }   , { 5 , & global_ipxdomain[49]   , 5  , 0x04 | 0x08  | 0x01  | 0x20   , spx_input  , 0  , spx_ctlinput  , spx_ctloutput  , spx_usrreq_sp  , 0  , 0  , 0  , 0  , spx_sysctl  }   , { 3 , & global_ipxdomain[49]   , 255  , 0x01 | 0x02   , ipx_input  , ipx_output  , 0  , ipx_ctloutput  , ipx_raw_usrreq  , 0  , 0  , 0  , 0  , ipx_sysctl  }   , }  ; static __attribute__ ((unused)) __typeof__(_GLOBAL_0_ipxsw_I) *_GLOBAL_ipxsw_13_A[NUM_STACKS] = { &_GLOBAL_0_ipxsw_I, &_GLOBAL_1_ipxsw_I, &_GLOBAL_2_ipxsw_I, &_GLOBAL_3_ipxsw_I, &_GLOBAL_4_ipxsw_I, &_GLOBAL_5_ipxsw_I, &_GLOBAL_6_ipxsw_I, &_GLOBAL_7_ipxsw_I, &_GLOBAL_8_ipxsw_I, &_GLOBAL_9_ipxsw_I, &_GLOBAL_10_ipxsw_I, &_GLOBAL_11_ipxsw_I, &_GLOBAL_12_ipxsw_I, &_GLOBAL_13_ipxsw_I, &_GLOBAL_14_ipxsw_I, &_GLOBAL_15_ipxsw_I, &_GLOBAL_16_ipxsw_I, &_GLOBAL_17_ipxsw_I, &_GLOBAL_18_ipxsw_I, &_GLOBAL_19_ipxsw_I, &_GLOBAL_20_ipxsw_I, &_GLOBAL_21_ipxsw_I, &_GLOBAL_22_ipxsw_I, &_GLOBAL_23_ipxsw_I, &_GLOBAL_24_ipxsw_I, &_GLOBAL_25_ipxsw_I, &_GLOBAL_26_ipxsw_I, &_GLOBAL_27_ipxsw_I, &_GLOBAL_28_ipxsw_I, &_GLOBAL_29_ipxsw_I, &_GLOBAL_30_ipxsw_I, &_GLOBAL_31_ipxsw_I, &_GLOBAL_32_ipxsw_I, &_GLOBAL_33_ipxsw_I, &_GLOBAL_34_ipxsw_I, &_GLOBAL_35_ipxsw_I, &_GLOBAL_36_ipxsw_I, &_GLOBAL_37_ipxsw_I, &_GLOBAL_38_ipxsw_I, &_GLOBAL_39_ipxsw_I, &_GLOBAL_40_ipxsw_I, &_GLOBAL_41_ipxsw_I, &_GLOBAL_42_ipxsw_I, &_GLOBAL_43_ipxsw_I, &_GLOBAL_44_ipxsw_I, &_GLOBAL_45_ipxsw_I, &_GLOBAL_46_ipxsw_I, &_GLOBAL_47_ipxsw_I, &_GLOBAL_48_ipxsw_I, &_GLOBAL_49_ipxsw_I, };    
    
     
  
      

    
     
  
      

    
     
  
      

   
     
  
      

    
     
  
      










typedef  struct domain  _GLOBAL_78_T;  _GLOBAL_78_T  global_ipxdomain[NUM_STACKS] = {  { 23 , "Internetwork Packet Exchange"  , 0  , 0  , 0  , _GLOBAL_0_ipxsw_I  , & _GLOBAL_0_ipxsw_I [ sizeof ( _GLOBAL_0_ipxsw_I )   / sizeof ( _GLOBAL_0_ipxsw_I [ 0 ]  )    ]    , 0  , rn_inithead  , 16  , sizeof ( struct sockaddr_ipx  )   } ,  { 23 , "Internetwork Packet Exchange"  , 0  , 0  , 0  , _GLOBAL_1_ipxsw_I  , & _GLOBAL_1_ipxsw_I [ sizeof ( _GLOBAL_1_ipxsw_I )   / sizeof ( _GLOBAL_1_ipxsw_I [ 0 ]  )    ]    , 0  , rn_inithead  , 16  , sizeof ( struct sockaddr_ipx  )   } ,  { 23 , "Internetwork Packet Exchange"  , 0  , 0  , 0  , _GLOBAL_2_ipxsw_I  , & _GLOBAL_2_ipxsw_I [ sizeof ( _GLOBAL_2_ipxsw_I )   / sizeof ( _GLOBAL_2_ipxsw_I [ 0 ]  )    ]    , 0  , rn_inithead  , 16  , sizeof ( struct sockaddr_ipx  )   } ,  { 23 , "Internetwork Packet Exchange"  , 0  , 0  , 0  , _GLOBAL_3_ipxsw_I  , & _GLOBAL_3_ipxsw_I [ sizeof ( _GLOBAL_3_ipxsw_I )   / sizeof ( _GLOBAL_3_ipxsw_I [ 0 ]  )    ]    , 0  , rn_inithead  , 16  , sizeof ( struct sockaddr_ipx  )   } ,  { 23 , "Internetwork Packet Exchange"  , 0  , 0  , 0  , _GLOBAL_4_ipxsw_I  , & _GLOBAL_4_ipxsw_I [ sizeof ( _GLOBAL_4_ipxsw_I )   / sizeof ( _GLOBAL_4_ipxsw_I [ 0 ]  )    ]    , 0  , rn_inithead  , 16  , sizeof ( struct sockaddr_ipx  )   } ,  { 23 , "Internetwork Packet Exchange"  , 0  , 0  , 0  , _GLOBAL_5_ipxsw_I  , & _GLOBAL_5_ipxsw_I [ sizeof ( _GLOBAL_5_ipxsw_I )   / sizeof ( _GLOBAL_5_ipxsw_I [ 0 ]  )    ]    , 0  , rn_inithead  , 16  , sizeof ( struct sockaddr_ipx  )   } ,  { 23 , "Internetwork Packet Exchange"  , 0  , 0  , 0  , _GLOBAL_6_ipxsw_I  , & _GLOBAL_6_ipxsw_I [ sizeof ( _GLOBAL_6_ipxsw_I )   / sizeof ( _GLOBAL_6_ipxsw_I [ 0 ]  )    ]    , 0  , rn_inithead  , 16  , sizeof ( struct sockaddr_ipx  )   } ,  { 23 , "Internetwork Packet Exchange"  , 0  , 0  , 0  , _GLOBAL_7_ipxsw_I  , & _GLOBAL_7_ipxsw_I [ sizeof ( _GLOBAL_7_ipxsw_I )   / sizeof ( _GLOBAL_7_ipxsw_I [ 0 ]  )    ]    , 0  , rn_inithead  , 16  , sizeof ( struct sockaddr_ipx  )   } ,  { 23 , "Internetwork Packet Exchange"  , 0  , 0  , 0  , _GLOBAL_8_ipxsw_I  , & _GLOBAL_8_ipxsw_I [ sizeof ( _GLOBAL_8_ipxsw_I )   / sizeof ( _GLOBAL_8_ipxsw_I [ 0 ]  )    ]    , 0  , rn_inithead  , 16  , sizeof ( struct sockaddr_ipx  )   } ,  { 23 , "Internetwork Packet Exchange"  , 0  , 0  , 0  , _GLOBAL_9_ipxsw_I  , & _GLOBAL_9_ipxsw_I [ sizeof ( _GLOBAL_9_ipxsw_I )   / sizeof ( _GLOBAL_9_ipxsw_I [ 0 ]  )    ]    , 0  , rn_inithead  , 16  , sizeof ( struct sockaddr_ipx  )   } ,  { 23 , "Internetwork Packet Exchange"  , 0  , 0  , 0  , _GLOBAL_10_ipxsw_I  , & _GLOBAL_10_ipxsw_I [ sizeof ( _GLOBAL_10_ipxsw_I )   / sizeof ( _GLOBAL_10_ipxsw_I [ 0 ]  )    ]    , 0  , rn_inithead  , 16  , sizeof ( struct sockaddr_ipx  )   } ,  { 23 , "Internetwork Packet Exchange"  , 0  , 0  , 0  , _GLOBAL_11_ipxsw_I  , & _GLOBAL_11_ipxsw_I [ sizeof ( _GLOBAL_11_ipxsw_I )   / sizeof ( _GLOBAL_11_ipxsw_I [ 0 ]  )    ]    , 0  , rn_inithead  , 16  , sizeof ( struct sockaddr_ipx  )   } ,  { 23 , "Internetwork Packet Exchange"  , 0  , 0  , 0  , _GLOBAL_12_ipxsw_I  , & _GLOBAL_12_ipxsw_I [ sizeof ( _GLOBAL_12_ipxsw_I )   / sizeof ( _GLOBAL_12_ipxsw_I [ 0 ]  )    ]    , 0  , rn_inithead  , 16  , sizeof ( struct sockaddr_ipx  )   } ,  { 23 , "Internetwork Packet Exchange"  , 0  , 0  , 0  , _GLOBAL_13_ipxsw_I  , & _GLOBAL_13_ipxsw_I [ sizeof ( _GLOBAL_13_ipxsw_I )   / sizeof ( _GLOBAL_13_ipxsw_I [ 0 ]  )    ]    , 0  , rn_inithead  , 16  , sizeof ( struct sockaddr_ipx  )   } ,  { 23 , "Internetwork Packet Exchange"  , 0  , 0  , 0  , _GLOBAL_14_ipxsw_I  , & _GLOBAL_14_ipxsw_I [ sizeof ( _GLOBAL_14_ipxsw_I )   / sizeof ( _GLOBAL_14_ipxsw_I [ 0 ]  )    ]    , 0  , rn_inithead  , 16  , sizeof ( struct sockaddr_ipx  )   } ,  { 23 , "Internetwork Packet Exchange"  , 0  , 0  , 0  , _GLOBAL_15_ipxsw_I  , & _GLOBAL_15_ipxsw_I [ sizeof ( _GLOBAL_15_ipxsw_I )   / sizeof ( _GLOBAL_15_ipxsw_I [ 0 ]  )    ]    , 0  , rn_inithead  , 16  , sizeof ( struct sockaddr_ipx  )   } ,  { 23 , "Internetwork Packet Exchange"  , 0  , 0  , 0  , _GLOBAL_16_ipxsw_I  , & _GLOBAL_16_ipxsw_I [ sizeof ( _GLOBAL_16_ipxsw_I )   / sizeof ( _GLOBAL_16_ipxsw_I [ 0 ]  )    ]    , 0  , rn_inithead  , 16  , sizeof ( struct sockaddr_ipx  )   } ,  { 23 , "Internetwork Packet Exchange"  , 0  , 0  , 0  , _GLOBAL_17_ipxsw_I  , & _GLOBAL_17_ipxsw_I [ sizeof ( _GLOBAL_17_ipxsw_I )   / sizeof ( _GLOBAL_17_ipxsw_I [ 0 ]  )    ]    , 0  , rn_inithead  , 16  , sizeof ( struct sockaddr_ipx  )   } ,  { 23 , "Internetwork Packet Exchange"  , 0  , 0  , 0  , _GLOBAL_18_ipxsw_I  , & _GLOBAL_18_ipxsw_I [ sizeof ( _GLOBAL_18_ipxsw_I )   / sizeof ( _GLOBAL_18_ipxsw_I [ 0 ]  )    ]    , 0  , rn_inithead  , 16  , sizeof ( struct sockaddr_ipx  )   } ,  { 23 , "Internetwork Packet Exchange"  , 0  , 0  , 0  , _GLOBAL_19_ipxsw_I  , & _GLOBAL_19_ipxsw_I [ sizeof ( _GLOBAL_19_ipxsw_I )   / sizeof ( _GLOBAL_19_ipxsw_I [ 0 ]  )    ]    , 0  , rn_inithead  , 16  , sizeof ( struct sockaddr_ipx  )   } ,  { 23 , "Internetwork Packet Exchange"  , 0  , 0  , 0  , _GLOBAL_20_ipxsw_I  , & _GLOBAL_20_ipxsw_I [ sizeof ( _GLOBAL_20_ipxsw_I )   / sizeof ( _GLOBAL_20_ipxsw_I [ 0 ]  )    ]    , 0  , rn_inithead  , 16  , sizeof ( struct sockaddr_ipx  )   } ,  { 23 , "Internetwork Packet Exchange"  , 0  , 0  , 0  , _GLOBAL_21_ipxsw_I  , & _GLOBAL_21_ipxsw_I [ sizeof ( _GLOBAL_21_ipxsw_I )   / sizeof ( _GLOBAL_21_ipxsw_I [ 0 ]  )    ]    , 0  , rn_inithead  , 16  , sizeof ( struct sockaddr_ipx  )   } ,  { 23 , "Internetwork Packet Exchange"  , 0  , 0  , 0  , _GLOBAL_22_ipxsw_I  , & _GLOBAL_22_ipxsw_I [ sizeof ( _GLOBAL_22_ipxsw_I )   / sizeof ( _GLOBAL_22_ipxsw_I [ 0 ]  )    ]    , 0  , rn_inithead  , 16  , sizeof ( struct sockaddr_ipx  )   } ,  { 23 , "Internetwork Packet Exchange"  , 0  , 0  , 0  , _GLOBAL_23_ipxsw_I  , & _GLOBAL_23_ipxsw_I [ sizeof ( _GLOBAL_23_ipxsw_I )   / sizeof ( _GLOBAL_23_ipxsw_I [ 0 ]  )    ]    , 0  , rn_inithead  , 16  , sizeof ( struct sockaddr_ipx  )   } ,  { 23 , "Internetwork Packet Exchange"  , 0  , 0  , 0  , _GLOBAL_24_ipxsw_I  , & _GLOBAL_24_ipxsw_I [ sizeof ( _GLOBAL_24_ipxsw_I )   / sizeof ( _GLOBAL_24_ipxsw_I [ 0 ]  )    ]    , 0  , rn_inithead  , 16  , sizeof ( struct sockaddr_ipx  )   } ,  { 23 , "Internetwork Packet Exchange"  , 0  , 0  , 0  , _GLOBAL_25_ipxsw_I  , & _GLOBAL_25_ipxsw_I [ sizeof ( _GLOBAL_25_ipxsw_I )   / sizeof ( _GLOBAL_25_ipxsw_I [ 0 ]  )    ]    , 0  , rn_inithead  , 16  , sizeof ( struct sockaddr_ipx  )   } ,  { 23 , "Internetwork Packet Exchange"  , 0  , 0  , 0  , _GLOBAL_26_ipxsw_I  , & _GLOBAL_26_ipxsw_I [ sizeof ( _GLOBAL_26_ipxsw_I )   / sizeof ( _GLOBAL_26_ipxsw_I [ 0 ]  )    ]    , 0  , rn_inithead  , 16  , sizeof ( struct sockaddr_ipx  )   } ,  { 23 , "Internetwork Packet Exchange"  , 0  , 0  , 0  , _GLOBAL_27_ipxsw_I  , & _GLOBAL_27_ipxsw_I [ sizeof ( _GLOBAL_27_ipxsw_I )   / sizeof ( _GLOBAL_27_ipxsw_I [ 0 ]  )    ]    , 0  , rn_inithead  , 16  , sizeof ( struct sockaddr_ipx  )   } ,  { 23 , "Internetwork Packet Exchange"  , 0  , 0  , 0  , _GLOBAL_28_ipxsw_I  , & _GLOBAL_28_ipxsw_I [ sizeof ( _GLOBAL_28_ipxsw_I )   / sizeof ( _GLOBAL_28_ipxsw_I [ 0 ]  )    ]    , 0  , rn_inithead  , 16  , sizeof ( struct sockaddr_ipx  )   } ,  { 23 , "Internetwork Packet Exchange"  , 0  , 0  , 0  , _GLOBAL_29_ipxsw_I  , & _GLOBAL_29_ipxsw_I [ sizeof ( _GLOBAL_29_ipxsw_I )   / sizeof ( _GLOBAL_29_ipxsw_I [ 0 ]  )    ]    , 0  , rn_inithead  , 16  , sizeof ( struct sockaddr_ipx  )   } ,  { 23 , "Internetwork Packet Exchange"  , 0  , 0  , 0  , _GLOBAL_30_ipxsw_I  , & _GLOBAL_30_ipxsw_I [ sizeof ( _GLOBAL_30_ipxsw_I )   / sizeof ( _GLOBAL_30_ipxsw_I [ 0 ]  )    ]    , 0  , rn_inithead  , 16  , sizeof ( struct sockaddr_ipx  )   } ,  { 23 , "Internetwork Packet Exchange"  , 0  , 0  , 0  , _GLOBAL_31_ipxsw_I  , & _GLOBAL_31_ipxsw_I [ sizeof ( _GLOBAL_31_ipxsw_I )   / sizeof ( _GLOBAL_31_ipxsw_I [ 0 ]  )    ]    , 0  , rn_inithead  , 16  , sizeof ( struct sockaddr_ipx  )   } ,  { 23 , "Internetwork Packet Exchange"  , 0  , 0  , 0  , _GLOBAL_32_ipxsw_I  , & _GLOBAL_32_ipxsw_I [ sizeof ( _GLOBAL_32_ipxsw_I )   / sizeof ( _GLOBAL_32_ipxsw_I [ 0 ]  )    ]    , 0  , rn_inithead  , 16  , sizeof ( struct sockaddr_ipx  )   } ,  { 23 , "Internetwork Packet Exchange"  , 0  , 0  , 0  , _GLOBAL_33_ipxsw_I  , & _GLOBAL_33_ipxsw_I [ sizeof ( _GLOBAL_33_ipxsw_I )   / sizeof ( _GLOBAL_33_ipxsw_I [ 0 ]  )    ]    , 0  , rn_inithead  , 16  , sizeof ( struct sockaddr_ipx  )   } ,  { 23 , "Internetwork Packet Exchange"  , 0  , 0  , 0  , _GLOBAL_34_ipxsw_I  , & _GLOBAL_34_ipxsw_I [ sizeof ( _GLOBAL_34_ipxsw_I )   / sizeof ( _GLOBAL_34_ipxsw_I [ 0 ]  )    ]    , 0  , rn_inithead  , 16  , sizeof ( struct sockaddr_ipx  )   } ,  { 23 , "Internetwork Packet Exchange"  , 0  , 0  , 0  , _GLOBAL_35_ipxsw_I  , & _GLOBAL_35_ipxsw_I [ sizeof ( _GLOBAL_35_ipxsw_I )   / sizeof ( _GLOBAL_35_ipxsw_I [ 0 ]  )    ]    , 0  , rn_inithead  , 16  , sizeof ( struct sockaddr_ipx  )   } ,  { 23 , "Internetwork Packet Exchange"  , 0  , 0  , 0  , _GLOBAL_36_ipxsw_I  , & _GLOBAL_36_ipxsw_I [ sizeof ( _GLOBAL_36_ipxsw_I )   / sizeof ( _GLOBAL_36_ipxsw_I [ 0 ]  )    ]    , 0  , rn_inithead  , 16  , sizeof ( struct sockaddr_ipx  )   } ,  { 23 , "Internetwork Packet Exchange"  , 0  , 0  , 0  , _GLOBAL_37_ipxsw_I  , & _GLOBAL_37_ipxsw_I [ sizeof ( _GLOBAL_37_ipxsw_I )   / sizeof ( _GLOBAL_37_ipxsw_I [ 0 ]  )    ]    , 0  , rn_inithead  , 16  , sizeof ( struct sockaddr_ipx  )   } ,  { 23 , "Internetwork Packet Exchange"  , 0  , 0  , 0  , _GLOBAL_38_ipxsw_I  , & _GLOBAL_38_ipxsw_I [ sizeof ( _GLOBAL_38_ipxsw_I )   / sizeof ( _GLOBAL_38_ipxsw_I [ 0 ]  )    ]    , 0  , rn_inithead  , 16  , sizeof ( struct sockaddr_ipx  )   } ,  { 23 , "Internetwork Packet Exchange"  , 0  , 0  , 0  , _GLOBAL_39_ipxsw_I  , & _GLOBAL_39_ipxsw_I [ sizeof ( _GLOBAL_39_ipxsw_I )   / sizeof ( _GLOBAL_39_ipxsw_I [ 0 ]  )    ]    , 0  , rn_inithead  , 16  , sizeof ( struct sockaddr_ipx  )   } ,  { 23 , "Internetwork Packet Exchange"  , 0  , 0  , 0  , _GLOBAL_40_ipxsw_I  , & _GLOBAL_40_ipxsw_I [ sizeof ( _GLOBAL_40_ipxsw_I )   / sizeof ( _GLOBAL_40_ipxsw_I [ 0 ]  )    ]    , 0  , rn_inithead  , 16  , sizeof ( struct sockaddr_ipx  )   } ,  { 23 , "Internetwork Packet Exchange"  , 0  , 0  , 0  , _GLOBAL_41_ipxsw_I  , & _GLOBAL_41_ipxsw_I [ sizeof ( _GLOBAL_41_ipxsw_I )   / sizeof ( _GLOBAL_41_ipxsw_I [ 0 ]  )    ]    , 0  , rn_inithead  , 16  , sizeof ( struct sockaddr_ipx  )   } ,  { 23 , "Internetwork Packet Exchange"  , 0  , 0  , 0  , _GLOBAL_42_ipxsw_I  , & _GLOBAL_42_ipxsw_I [ sizeof ( _GLOBAL_42_ipxsw_I )   / sizeof ( _GLOBAL_42_ipxsw_I [ 0 ]  )    ]    , 0  , rn_inithead  , 16  , sizeof ( struct sockaddr_ipx  )   } ,  { 23 , "Internetwork Packet Exchange"  , 0  , 0  , 0  , _GLOBAL_43_ipxsw_I  , & _GLOBAL_43_ipxsw_I [ sizeof ( _GLOBAL_43_ipxsw_I )   / sizeof ( _GLOBAL_43_ipxsw_I [ 0 ]  )    ]    , 0  , rn_inithead  , 16  , sizeof ( struct sockaddr_ipx  )   } ,  { 23 , "Internetwork Packet Exchange"  , 0  , 0  , 0  , _GLOBAL_44_ipxsw_I  , & _GLOBAL_44_ipxsw_I [ sizeof ( _GLOBAL_44_ipxsw_I )   / sizeof ( _GLOBAL_44_ipxsw_I [ 0 ]  )    ]    , 0  , rn_inithead  , 16  , sizeof ( struct sockaddr_ipx  )   } ,  { 23 , "Internetwork Packet Exchange"  , 0  , 0  , 0  , _GLOBAL_45_ipxsw_I  , & _GLOBAL_45_ipxsw_I [ sizeof ( _GLOBAL_45_ipxsw_I )   / sizeof ( _GLOBAL_45_ipxsw_I [ 0 ]  )    ]    , 0  , rn_inithead  , 16  , sizeof ( struct sockaddr_ipx  )   } ,  { 23 , "Internetwork Packet Exchange"  , 0  , 0  , 0  , _GLOBAL_46_ipxsw_I  , & _GLOBAL_46_ipxsw_I [ sizeof ( _GLOBAL_46_ipxsw_I )   / sizeof ( _GLOBAL_46_ipxsw_I [ 0 ]  )    ]    , 0  , rn_inithead  , 16  , sizeof ( struct sockaddr_ipx  )   } ,  { 23 , "Internetwork Packet Exchange"  , 0  , 0  , 0  , _GLOBAL_47_ipxsw_I  , & _GLOBAL_47_ipxsw_I [ sizeof ( _GLOBAL_47_ipxsw_I )   / sizeof ( _GLOBAL_47_ipxsw_I [ 0 ]  )    ]    , 0  , rn_inithead  , 16  , sizeof ( struct sockaddr_ipx  )   } ,  { 23 , "Internetwork Packet Exchange"  , 0  , 0  , 0  , _GLOBAL_48_ipxsw_I  , & _GLOBAL_48_ipxsw_I [ sizeof ( _GLOBAL_48_ipxsw_I )   / sizeof ( _GLOBAL_48_ipxsw_I [ 0 ]  )    ]    , 0  , rn_inithead  , 16  , sizeof ( struct sockaddr_ipx  )   } ,  { 23 , "Internetwork Packet Exchange"  , 0  , 0  , 0  , _GLOBAL_49_ipxsw_I  , & _GLOBAL_49_ipxsw_I [ sizeof ( _GLOBAL_49_ipxsw_I )   / sizeof ( _GLOBAL_49_ipxsw_I [ 0 ]  )    ]    , 0  , rn_inithead  , 16  , sizeof ( struct sockaddr_ipx  )   } ,  };    
         
        
         

