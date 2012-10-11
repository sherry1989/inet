# 1 "openbsd3/kern/uipc_socket.c"
# 1 "/home/cmcc/omnet_workspace/inet/3rdparty/nsc-0.5.2//"
# 1 "<built-in>"
# 1 "<command-line>"
# 1 "openbsd3/kern/uipc_socket.c"
# 35 "openbsd3/kern/uipc_socket.c"
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
# 36 "openbsd3/kern/uipc_socket.c" 2
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
# 37 "openbsd3/kern/uipc_socket.c" 2
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
# 38 "openbsd3/kern/uipc_socket.c" 2
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
typedef  struct filelist   _GLOBAL_81_T; extern  _GLOBAL_81_T  global_filehead[NUM_STACKS];    
typedef  int  _GLOBAL_82_T; extern  _GLOBAL_82_T  global_maxfiles[NUM_STACKS];   
typedef  int  _GLOBAL_83_T; extern  _GLOBAL_83_T  global_nfiles[NUM_STACKS];   
typedef  struct fileops   _GLOBAL_84_T; extern  _GLOBAL_84_T  global_vnops[NUM_STACKS];    

int dofileread(struct proc *, int, struct file *, void *, size_t,
            off_t *, register_t *);
int dofilewrite(struct proc *, int, struct file *, const void *,
            size_t, off_t *, register_t *);
# 39 "openbsd3/kern/uipc_socket.c" 2
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
typedef  struct kmemstats   _GLOBAL_85_T; extern  _GLOBAL_85_T  _GLOBAL_0_kmemstats_I [ ] ; extern  _GLOBAL_85_T  _GLOBAL_1_kmemstats_I [ ] ; extern  _GLOBAL_85_T  _GLOBAL_2_kmemstats_I [ ] ; extern  _GLOBAL_85_T  _GLOBAL_3_kmemstats_I [ ] ; extern  _GLOBAL_85_T  _GLOBAL_4_kmemstats_I [ ] ; extern  _GLOBAL_85_T  _GLOBAL_5_kmemstats_I [ ] ; extern  _GLOBAL_85_T  _GLOBAL_6_kmemstats_I [ ] ; extern  _GLOBAL_85_T  _GLOBAL_7_kmemstats_I [ ] ; extern  _GLOBAL_85_T  _GLOBAL_8_kmemstats_I [ ] ; extern  _GLOBAL_85_T  _GLOBAL_9_kmemstats_I [ ] ; extern  _GLOBAL_85_T  _GLOBAL_10_kmemstats_I [ ] ; extern  _GLOBAL_85_T  _GLOBAL_11_kmemstats_I [ ] ; extern  _GLOBAL_85_T  _GLOBAL_12_kmemstats_I [ ] ; extern  _GLOBAL_85_T  _GLOBAL_13_kmemstats_I [ ] ; extern  _GLOBAL_85_T  _GLOBAL_14_kmemstats_I [ ] ; extern  _GLOBAL_85_T  _GLOBAL_15_kmemstats_I [ ] ; extern  _GLOBAL_85_T  _GLOBAL_16_kmemstats_I [ ] ; extern  _GLOBAL_85_T  _GLOBAL_17_kmemstats_I [ ] ; extern  _GLOBAL_85_T  _GLOBAL_18_kmemstats_I [ ] ; extern  _GLOBAL_85_T  _GLOBAL_19_kmemstats_I [ ] ; extern  _GLOBAL_85_T  _GLOBAL_20_kmemstats_I [ ] ; extern  _GLOBAL_85_T  _GLOBAL_21_kmemstats_I [ ] ; extern  _GLOBAL_85_T  _GLOBAL_22_kmemstats_I [ ] ; extern  _GLOBAL_85_T  _GLOBAL_23_kmemstats_I [ ] ; extern  _GLOBAL_85_T  _GLOBAL_24_kmemstats_I [ ] ; extern  _GLOBAL_85_T  _GLOBAL_25_kmemstats_I [ ] ; extern  _GLOBAL_85_T  _GLOBAL_26_kmemstats_I [ ] ; extern  _GLOBAL_85_T  _GLOBAL_27_kmemstats_I [ ] ; extern  _GLOBAL_85_T  _GLOBAL_28_kmemstats_I [ ] ; extern  _GLOBAL_85_T  _GLOBAL_29_kmemstats_I [ ] ; extern  _GLOBAL_85_T  _GLOBAL_30_kmemstats_I [ ] ; extern  _GLOBAL_85_T  _GLOBAL_31_kmemstats_I [ ] ; extern  _GLOBAL_85_T  _GLOBAL_32_kmemstats_I [ ] ; extern  _GLOBAL_85_T  _GLOBAL_33_kmemstats_I [ ] ; extern  _GLOBAL_85_T  _GLOBAL_34_kmemstats_I [ ] ; extern  _GLOBAL_85_T  _GLOBAL_35_kmemstats_I [ ] ; extern  _GLOBAL_85_T  _GLOBAL_36_kmemstats_I [ ] ; extern  _GLOBAL_85_T  _GLOBAL_37_kmemstats_I [ ] ; extern  _GLOBAL_85_T  _GLOBAL_38_kmemstats_I [ ] ; extern  _GLOBAL_85_T  _GLOBAL_39_kmemstats_I [ ] ; extern  _GLOBAL_85_T  _GLOBAL_40_kmemstats_I [ ] ; extern  _GLOBAL_85_T  _GLOBAL_41_kmemstats_I [ ] ; extern  _GLOBAL_85_T  _GLOBAL_42_kmemstats_I [ ] ; extern  _GLOBAL_85_T  _GLOBAL_43_kmemstats_I [ ] ; extern  _GLOBAL_85_T  _GLOBAL_44_kmemstats_I [ ] ; extern  _GLOBAL_85_T  _GLOBAL_45_kmemstats_I [ ] ; extern  _GLOBAL_85_T  _GLOBAL_46_kmemstats_I [ ] ; extern  _GLOBAL_85_T  _GLOBAL_47_kmemstats_I [ ] ; extern  _GLOBAL_85_T  _GLOBAL_48_kmemstats_I [ ] ; extern  _GLOBAL_85_T  _GLOBAL_49_kmemstats_I [ ] ; static __attribute__ ((unused)) __typeof__(_GLOBAL_0_kmemstats_I) *_GLOBAL_kmemstats_22_A[NUM_STACKS];   
typedef  struct kmemusage   _GLOBAL_86_T; extern  _GLOBAL_86_T  * global_kmemusage[NUM_STACKS];    
typedef  char  _GLOBAL_87_T; extern  _GLOBAL_87_T  * global_kmembase[NUM_STACKS];   
typedef  struct kmembuckets   _GLOBAL_88_T; extern  _GLOBAL_88_T  _GLOBAL_0_bucket_I [ ] ; extern  _GLOBAL_88_T  _GLOBAL_1_bucket_I [ ] ; extern  _GLOBAL_88_T  _GLOBAL_2_bucket_I [ ] ; extern  _GLOBAL_88_T  _GLOBAL_3_bucket_I [ ] ; extern  _GLOBAL_88_T  _GLOBAL_4_bucket_I [ ] ; extern  _GLOBAL_88_T  _GLOBAL_5_bucket_I [ ] ; extern  _GLOBAL_88_T  _GLOBAL_6_bucket_I [ ] ; extern  _GLOBAL_88_T  _GLOBAL_7_bucket_I [ ] ; extern  _GLOBAL_88_T  _GLOBAL_8_bucket_I [ ] ; extern  _GLOBAL_88_T  _GLOBAL_9_bucket_I [ ] ; extern  _GLOBAL_88_T  _GLOBAL_10_bucket_I [ ] ; extern  _GLOBAL_88_T  _GLOBAL_11_bucket_I [ ] ; extern  _GLOBAL_88_T  _GLOBAL_12_bucket_I [ ] ; extern  _GLOBAL_88_T  _GLOBAL_13_bucket_I [ ] ; extern  _GLOBAL_88_T  _GLOBAL_14_bucket_I [ ] ; extern  _GLOBAL_88_T  _GLOBAL_15_bucket_I [ ] ; extern  _GLOBAL_88_T  _GLOBAL_16_bucket_I [ ] ; extern  _GLOBAL_88_T  _GLOBAL_17_bucket_I [ ] ; extern  _GLOBAL_88_T  _GLOBAL_18_bucket_I [ ] ; extern  _GLOBAL_88_T  _GLOBAL_19_bucket_I [ ] ; extern  _GLOBAL_88_T  _GLOBAL_20_bucket_I [ ] ; extern  _GLOBAL_88_T  _GLOBAL_21_bucket_I [ ] ; extern  _GLOBAL_88_T  _GLOBAL_22_bucket_I [ ] ; extern  _GLOBAL_88_T  _GLOBAL_23_bucket_I [ ] ; extern  _GLOBAL_88_T  _GLOBAL_24_bucket_I [ ] ; extern  _GLOBAL_88_T  _GLOBAL_25_bucket_I [ ] ; extern  _GLOBAL_88_T  _GLOBAL_26_bucket_I [ ] ; extern  _GLOBAL_88_T  _GLOBAL_27_bucket_I [ ] ; extern  _GLOBAL_88_T  _GLOBAL_28_bucket_I [ ] ; extern  _GLOBAL_88_T  _GLOBAL_29_bucket_I [ ] ; extern  _GLOBAL_88_T  _GLOBAL_30_bucket_I [ ] ; extern  _GLOBAL_88_T  _GLOBAL_31_bucket_I [ ] ; extern  _GLOBAL_88_T  _GLOBAL_32_bucket_I [ ] ; extern  _GLOBAL_88_T  _GLOBAL_33_bucket_I [ ] ; extern  _GLOBAL_88_T  _GLOBAL_34_bucket_I [ ] ; extern  _GLOBAL_88_T  _GLOBAL_35_bucket_I [ ] ; extern  _GLOBAL_88_T  _GLOBAL_36_bucket_I [ ] ; extern  _GLOBAL_88_T  _GLOBAL_37_bucket_I [ ] ; extern  _GLOBAL_88_T  _GLOBAL_38_bucket_I [ ] ; extern  _GLOBAL_88_T  _GLOBAL_39_bucket_I [ ] ; extern  _GLOBAL_88_T  _GLOBAL_40_bucket_I [ ] ; extern  _GLOBAL_88_T  _GLOBAL_41_bucket_I [ ] ; extern  _GLOBAL_88_T  _GLOBAL_42_bucket_I [ ] ; extern  _GLOBAL_88_T  _GLOBAL_43_bucket_I [ ] ; extern  _GLOBAL_88_T  _GLOBAL_44_bucket_I [ ] ; extern  _GLOBAL_88_T  _GLOBAL_45_bucket_I [ ] ; extern  _GLOBAL_88_T  _GLOBAL_46_bucket_I [ ] ; extern  _GLOBAL_88_T  _GLOBAL_47_bucket_I [ ] ; extern  _GLOBAL_88_T  _GLOBAL_48_bucket_I [ ] ; extern  _GLOBAL_88_T  _GLOBAL_49_bucket_I [ ] ; static __attribute__ ((unused)) __typeof__(_GLOBAL_0_bucket_I) *_GLOBAL_bucket_23_A[NUM_STACKS];   

extern void *malloc(unsigned long size, int type, int flags);
extern void free(void *addr, int type);
extern int sysctl_malloc(int *, u_int, void *, size_t *, void *, size_t,
         struct proc *);

size_t malloc_roundup(size_t);
# 40 "openbsd3/kern/uipc_socket.c" 2
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






typedef  struct pool_allocator   _GLOBAL_89_T; extern  _GLOBAL_89_T  global_pool_allocator_nointr[NUM_STACKS];    

typedef  struct pool_allocator   _GLOBAL_90_T; extern  _GLOBAL_90_T  global_pool_allocator_kmem[NUM_STACKS];    

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


typedef  struct mbstat   _GLOBAL_91_T; extern  _GLOBAL_91_T  global_mbstat[NUM_STACKS];    
typedef  int  _GLOBAL_92_T; extern  _GLOBAL_92_T  global_nmbclust[NUM_STACKS];   
typedef  int  _GLOBAL_93_T; extern  _GLOBAL_93_T  global_mblowat[NUM_STACKS];   
typedef  int  _GLOBAL_94_T; extern  _GLOBAL_94_T  global_mcllowat[NUM_STACKS];   
typedef  int  _GLOBAL_95_T; extern  _GLOBAL_95_T  global_max_linkhdr[NUM_STACKS];   
typedef  int  _GLOBAL_96_T; extern  _GLOBAL_96_T  global_max_protohdr[NUM_STACKS];   
typedef  int  _GLOBAL_97_T; extern  _GLOBAL_97_T  global_max_hdr[NUM_STACKS];   
typedef  int  _GLOBAL_98_T; extern  _GLOBAL_98_T  global_max_datalen[NUM_STACKS];   
typedef  int  _GLOBAL_99_T; extern  _GLOBAL_99_T  _GLOBAL_0_mbtypes_I [ ] ; extern  _GLOBAL_99_T  _GLOBAL_1_mbtypes_I [ ] ; extern  _GLOBAL_99_T  _GLOBAL_2_mbtypes_I [ ] ; extern  _GLOBAL_99_T  _GLOBAL_3_mbtypes_I [ ] ; extern  _GLOBAL_99_T  _GLOBAL_4_mbtypes_I [ ] ; extern  _GLOBAL_99_T  _GLOBAL_5_mbtypes_I [ ] ; extern  _GLOBAL_99_T  _GLOBAL_6_mbtypes_I [ ] ; extern  _GLOBAL_99_T  _GLOBAL_7_mbtypes_I [ ] ; extern  _GLOBAL_99_T  _GLOBAL_8_mbtypes_I [ ] ; extern  _GLOBAL_99_T  _GLOBAL_9_mbtypes_I [ ] ; extern  _GLOBAL_99_T  _GLOBAL_10_mbtypes_I [ ] ; extern  _GLOBAL_99_T  _GLOBAL_11_mbtypes_I [ ] ; extern  _GLOBAL_99_T  _GLOBAL_12_mbtypes_I [ ] ; extern  _GLOBAL_99_T  _GLOBAL_13_mbtypes_I [ ] ; extern  _GLOBAL_99_T  _GLOBAL_14_mbtypes_I [ ] ; extern  _GLOBAL_99_T  _GLOBAL_15_mbtypes_I [ ] ; extern  _GLOBAL_99_T  _GLOBAL_16_mbtypes_I [ ] ; extern  _GLOBAL_99_T  _GLOBAL_17_mbtypes_I [ ] ; extern  _GLOBAL_99_T  _GLOBAL_18_mbtypes_I [ ] ; extern  _GLOBAL_99_T  _GLOBAL_19_mbtypes_I [ ] ; extern  _GLOBAL_99_T  _GLOBAL_20_mbtypes_I [ ] ; extern  _GLOBAL_99_T  _GLOBAL_21_mbtypes_I [ ] ; extern  _GLOBAL_99_T  _GLOBAL_22_mbtypes_I [ ] ; extern  _GLOBAL_99_T  _GLOBAL_23_mbtypes_I [ ] ; extern  _GLOBAL_99_T  _GLOBAL_24_mbtypes_I [ ] ; extern  _GLOBAL_99_T  _GLOBAL_25_mbtypes_I [ ] ; extern  _GLOBAL_99_T  _GLOBAL_26_mbtypes_I [ ] ; extern  _GLOBAL_99_T  _GLOBAL_27_mbtypes_I [ ] ; extern  _GLOBAL_99_T  _GLOBAL_28_mbtypes_I [ ] ; extern  _GLOBAL_99_T  _GLOBAL_29_mbtypes_I [ ] ; extern  _GLOBAL_99_T  _GLOBAL_30_mbtypes_I [ ] ; extern  _GLOBAL_99_T  _GLOBAL_31_mbtypes_I [ ] ; extern  _GLOBAL_99_T  _GLOBAL_32_mbtypes_I [ ] ; extern  _GLOBAL_99_T  _GLOBAL_33_mbtypes_I [ ] ; extern  _GLOBAL_99_T  _GLOBAL_34_mbtypes_I [ ] ; extern  _GLOBAL_99_T  _GLOBAL_35_mbtypes_I [ ] ; extern  _GLOBAL_99_T  _GLOBAL_36_mbtypes_I [ ] ; extern  _GLOBAL_99_T  _GLOBAL_37_mbtypes_I [ ] ; extern  _GLOBAL_99_T  _GLOBAL_38_mbtypes_I [ ] ; extern  _GLOBAL_99_T  _GLOBAL_39_mbtypes_I [ ] ; extern  _GLOBAL_99_T  _GLOBAL_40_mbtypes_I [ ] ; extern  _GLOBAL_99_T  _GLOBAL_41_mbtypes_I [ ] ; extern  _GLOBAL_99_T  _GLOBAL_42_mbtypes_I [ ] ; extern  _GLOBAL_99_T  _GLOBAL_43_mbtypes_I [ ] ; extern  _GLOBAL_99_T  _GLOBAL_44_mbtypes_I [ ] ; extern  _GLOBAL_99_T  _GLOBAL_45_mbtypes_I [ ] ; extern  _GLOBAL_99_T  _GLOBAL_46_mbtypes_I [ ] ; extern  _GLOBAL_99_T  _GLOBAL_47_mbtypes_I [ ] ; extern  _GLOBAL_99_T  _GLOBAL_48_mbtypes_I [ ] ; extern  _GLOBAL_99_T  _GLOBAL_49_mbtypes_I [ ] ; static __attribute__ ((unused)) __typeof__(_GLOBAL_0_mbtypes_I) *_GLOBAL_mbtypes_24_A[NUM_STACKS];  
typedef  struct pool   _GLOBAL_100_T; extern  _GLOBAL_100_T  global_mbpool[NUM_STACKS];    
typedef  struct pool   _GLOBAL_101_T; extern  _GLOBAL_101_T  global_mclpool[NUM_STACKS];    

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
# 41 "openbsd3/kern/uipc_socket.c" 2
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


typedef  struct domain   _GLOBAL_102_T; extern  _GLOBAL_102_T  * global_domains[NUM_STACKS];    
void domaininit(void);
# 42 "openbsd3/kern/uipc_socket.c" 2
# 1 "openbsd3/sys/kernel.h" 1
# 43 "openbsd3/sys/kernel.h"
typedef  long  _GLOBAL_103_T; extern  _GLOBAL_103_T  global_hostid[NUM_STACKS];   
typedef  char  _GLOBAL_104_T; extern  _GLOBAL_104_T  _GLOBAL_0_hostname_I [ 256 ] ; extern  _GLOBAL_104_T  _GLOBAL_1_hostname_I [ 256 ] ; extern  _GLOBAL_104_T  _GLOBAL_2_hostname_I [ 256 ] ; extern  _GLOBAL_104_T  _GLOBAL_3_hostname_I [ 256 ] ; extern  _GLOBAL_104_T  _GLOBAL_4_hostname_I [ 256 ] ; extern  _GLOBAL_104_T  _GLOBAL_5_hostname_I [ 256 ] ; extern  _GLOBAL_104_T  _GLOBAL_6_hostname_I [ 256 ] ; extern  _GLOBAL_104_T  _GLOBAL_7_hostname_I [ 256 ] ; extern  _GLOBAL_104_T  _GLOBAL_8_hostname_I [ 256 ] ; extern  _GLOBAL_104_T  _GLOBAL_9_hostname_I [ 256 ] ; extern  _GLOBAL_104_T  _GLOBAL_10_hostname_I [ 256 ] ; extern  _GLOBAL_104_T  _GLOBAL_11_hostname_I [ 256 ] ; extern  _GLOBAL_104_T  _GLOBAL_12_hostname_I [ 256 ] ; extern  _GLOBAL_104_T  _GLOBAL_13_hostname_I [ 256 ] ; extern  _GLOBAL_104_T  _GLOBAL_14_hostname_I [ 256 ] ; extern  _GLOBAL_104_T  _GLOBAL_15_hostname_I [ 256 ] ; extern  _GLOBAL_104_T  _GLOBAL_16_hostname_I [ 256 ] ; extern  _GLOBAL_104_T  _GLOBAL_17_hostname_I [ 256 ] ; extern  _GLOBAL_104_T  _GLOBAL_18_hostname_I [ 256 ] ; extern  _GLOBAL_104_T  _GLOBAL_19_hostname_I [ 256 ] ; extern  _GLOBAL_104_T  _GLOBAL_20_hostname_I [ 256 ] ; extern  _GLOBAL_104_T  _GLOBAL_21_hostname_I [ 256 ] ; extern  _GLOBAL_104_T  _GLOBAL_22_hostname_I [ 256 ] ; extern  _GLOBAL_104_T  _GLOBAL_23_hostname_I [ 256 ] ; extern  _GLOBAL_104_T  _GLOBAL_24_hostname_I [ 256 ] ; extern  _GLOBAL_104_T  _GLOBAL_25_hostname_I [ 256 ] ; extern  _GLOBAL_104_T  _GLOBAL_26_hostname_I [ 256 ] ; extern  _GLOBAL_104_T  _GLOBAL_27_hostname_I [ 256 ] ; extern  _GLOBAL_104_T  _GLOBAL_28_hostname_I [ 256 ] ; extern  _GLOBAL_104_T  _GLOBAL_29_hostname_I [ 256 ] ; extern  _GLOBAL_104_T  _GLOBAL_30_hostname_I [ 256 ] ; extern  _GLOBAL_104_T  _GLOBAL_31_hostname_I [ 256 ] ; extern  _GLOBAL_104_T  _GLOBAL_32_hostname_I [ 256 ] ; extern  _GLOBAL_104_T  _GLOBAL_33_hostname_I [ 256 ] ; extern  _GLOBAL_104_T  _GLOBAL_34_hostname_I [ 256 ] ; extern  _GLOBAL_104_T  _GLOBAL_35_hostname_I [ 256 ] ; extern  _GLOBAL_104_T  _GLOBAL_36_hostname_I [ 256 ] ; extern  _GLOBAL_104_T  _GLOBAL_37_hostname_I [ 256 ] ; extern  _GLOBAL_104_T  _GLOBAL_38_hostname_I [ 256 ] ; extern  _GLOBAL_104_T  _GLOBAL_39_hostname_I [ 256 ] ; extern  _GLOBAL_104_T  _GLOBAL_40_hostname_I [ 256 ] ; extern  _GLOBAL_104_T  _GLOBAL_41_hostname_I [ 256 ] ; extern  _GLOBAL_104_T  _GLOBAL_42_hostname_I [ 256 ] ; extern  _GLOBAL_104_T  _GLOBAL_43_hostname_I [ 256 ] ; extern  _GLOBAL_104_T  _GLOBAL_44_hostname_I [ 256 ] ; extern  _GLOBAL_104_T  _GLOBAL_45_hostname_I [ 256 ] ; extern  _GLOBAL_104_T  _GLOBAL_46_hostname_I [ 256 ] ; extern  _GLOBAL_104_T  _GLOBAL_47_hostname_I [ 256 ] ; extern  _GLOBAL_104_T  _GLOBAL_48_hostname_I [ 256 ] ; extern  _GLOBAL_104_T  _GLOBAL_49_hostname_I [ 256 ] ; static __attribute__ ((unused)) __typeof__(_GLOBAL_0_hostname_I) *_GLOBAL_hostname_25_A[NUM_STACKS];  
typedef  int  _GLOBAL_105_T; extern  _GLOBAL_105_T  global_hostnamelen[NUM_STACKS];   
typedef  char  _GLOBAL_106_T; extern  _GLOBAL_106_T  _GLOBAL_0_domainname_I [ 256 ] ; extern  _GLOBAL_106_T  _GLOBAL_1_domainname_I [ 256 ] ; extern  _GLOBAL_106_T  _GLOBAL_2_domainname_I [ 256 ] ; extern  _GLOBAL_106_T  _GLOBAL_3_domainname_I [ 256 ] ; extern  _GLOBAL_106_T  _GLOBAL_4_domainname_I [ 256 ] ; extern  _GLOBAL_106_T  _GLOBAL_5_domainname_I [ 256 ] ; extern  _GLOBAL_106_T  _GLOBAL_6_domainname_I [ 256 ] ; extern  _GLOBAL_106_T  _GLOBAL_7_domainname_I [ 256 ] ; extern  _GLOBAL_106_T  _GLOBAL_8_domainname_I [ 256 ] ; extern  _GLOBAL_106_T  _GLOBAL_9_domainname_I [ 256 ] ; extern  _GLOBAL_106_T  _GLOBAL_10_domainname_I [ 256 ] ; extern  _GLOBAL_106_T  _GLOBAL_11_domainname_I [ 256 ] ; extern  _GLOBAL_106_T  _GLOBAL_12_domainname_I [ 256 ] ; extern  _GLOBAL_106_T  _GLOBAL_13_domainname_I [ 256 ] ; extern  _GLOBAL_106_T  _GLOBAL_14_domainname_I [ 256 ] ; extern  _GLOBAL_106_T  _GLOBAL_15_domainname_I [ 256 ] ; extern  _GLOBAL_106_T  _GLOBAL_16_domainname_I [ 256 ] ; extern  _GLOBAL_106_T  _GLOBAL_17_domainname_I [ 256 ] ; extern  _GLOBAL_106_T  _GLOBAL_18_domainname_I [ 256 ] ; extern  _GLOBAL_106_T  _GLOBAL_19_domainname_I [ 256 ] ; extern  _GLOBAL_106_T  _GLOBAL_20_domainname_I [ 256 ] ; extern  _GLOBAL_106_T  _GLOBAL_21_domainname_I [ 256 ] ; extern  _GLOBAL_106_T  _GLOBAL_22_domainname_I [ 256 ] ; extern  _GLOBAL_106_T  _GLOBAL_23_domainname_I [ 256 ] ; extern  _GLOBAL_106_T  _GLOBAL_24_domainname_I [ 256 ] ; extern  _GLOBAL_106_T  _GLOBAL_25_domainname_I [ 256 ] ; extern  _GLOBAL_106_T  _GLOBAL_26_domainname_I [ 256 ] ; extern  _GLOBAL_106_T  _GLOBAL_27_domainname_I [ 256 ] ; extern  _GLOBAL_106_T  _GLOBAL_28_domainname_I [ 256 ] ; extern  _GLOBAL_106_T  _GLOBAL_29_domainname_I [ 256 ] ; extern  _GLOBAL_106_T  _GLOBAL_30_domainname_I [ 256 ] ; extern  _GLOBAL_106_T  _GLOBAL_31_domainname_I [ 256 ] ; extern  _GLOBAL_106_T  _GLOBAL_32_domainname_I [ 256 ] ; extern  _GLOBAL_106_T  _GLOBAL_33_domainname_I [ 256 ] ; extern  _GLOBAL_106_T  _GLOBAL_34_domainname_I [ 256 ] ; extern  _GLOBAL_106_T  _GLOBAL_35_domainname_I [ 256 ] ; extern  _GLOBAL_106_T  _GLOBAL_36_domainname_I [ 256 ] ; extern  _GLOBAL_106_T  _GLOBAL_37_domainname_I [ 256 ] ; extern  _GLOBAL_106_T  _GLOBAL_38_domainname_I [ 256 ] ; extern  _GLOBAL_106_T  _GLOBAL_39_domainname_I [ 256 ] ; extern  _GLOBAL_106_T  _GLOBAL_40_domainname_I [ 256 ] ; extern  _GLOBAL_106_T  _GLOBAL_41_domainname_I [ 256 ] ; extern  _GLOBAL_106_T  _GLOBAL_42_domainname_I [ 256 ] ; extern  _GLOBAL_106_T  _GLOBAL_43_domainname_I [ 256 ] ; extern  _GLOBAL_106_T  _GLOBAL_44_domainname_I [ 256 ] ; extern  _GLOBAL_106_T  _GLOBAL_45_domainname_I [ 256 ] ; extern  _GLOBAL_106_T  _GLOBAL_46_domainname_I [ 256 ] ; extern  _GLOBAL_106_T  _GLOBAL_47_domainname_I [ 256 ] ; extern  _GLOBAL_106_T  _GLOBAL_48_domainname_I [ 256 ] ; extern  _GLOBAL_106_T  _GLOBAL_49_domainname_I [ 256 ] ; static __attribute__ ((unused)) __typeof__(_GLOBAL_0_domainname_I) *_GLOBAL_domainname_26_A[NUM_STACKS];  
typedef  int  _GLOBAL_107_T; extern  _GLOBAL_107_T  global_domainnamelen[NUM_STACKS];   


typedef  struct timeval    _GLOBAL_108_T; extern volatile  _GLOBAL_108_T  global_mono_time[NUM_STACKS];     
typedef  struct timeval   _GLOBAL_109_T; extern  _GLOBAL_109_T  global_boottime[NUM_STACKS];    
typedef  struct timeval   _GLOBAL_110_T; extern  _GLOBAL_110_T  global_runtime[NUM_STACKS];    
extern volatile struct timeval time;
typedef  struct timezone   _GLOBAL_111_T; extern  _GLOBAL_111_T  global_tz[NUM_STACKS];    

typedef  int  _GLOBAL_112_T; extern  _GLOBAL_112_T  global_tick[NUM_STACKS];   
typedef  int  _GLOBAL_113_T; extern  _GLOBAL_113_T  global_tickfix[NUM_STACKS];   
typedef  int  _GLOBAL_114_T; extern  _GLOBAL_114_T  global_tickfixinterval[NUM_STACKS];   
typedef  int  _GLOBAL_115_T; extern  _GLOBAL_115_T  global_tickadj[NUM_STACKS];   
typedef  int  _GLOBAL_116_T; extern  _GLOBAL_116_T  global_hz[NUM_STACKS];   
typedef  int  _GLOBAL_117_T; extern  _GLOBAL_117_T  global_stathz[NUM_STACKS];   
typedef  int  _GLOBAL_118_T; extern  _GLOBAL_118_T  global_profhz[NUM_STACKS];   
typedef  int  _GLOBAL_119_T; extern  _GLOBAL_119_T  global_lbolt[NUM_STACKS];   
typedef  int  _GLOBAL_120_T; extern  _GLOBAL_120_T  global_tickdelta[NUM_STACKS];   
typedef  long  _GLOBAL_121_T; extern  _GLOBAL_121_T  global_timedelta[NUM_STACKS];   
# 43 "openbsd3/kern/uipc_socket.c" 2

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
# 45 "openbsd3/kern/uipc_socket.c" 2
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
# 46 "openbsd3/kern/uipc_socket.c" 2
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
typedef  u_long  _GLOBAL_122_T; extern  _GLOBAL_122_T  global_sb_max[NUM_STACKS];   
struct socket *sonewconn(struct socket *head, int connstatus);


typedef  const char   _GLOBAL_123_T; extern  _GLOBAL_123_T  _GLOBAL_0_netio_I [ ] ; extern  _GLOBAL_123_T  _GLOBAL_1_netio_I [ ] ; extern  _GLOBAL_123_T  _GLOBAL_2_netio_I [ ] ; extern  _GLOBAL_123_T  _GLOBAL_3_netio_I [ ] ; extern  _GLOBAL_123_T  _GLOBAL_4_netio_I [ ] ; extern  _GLOBAL_123_T  _GLOBAL_5_netio_I [ ] ; extern  _GLOBAL_123_T  _GLOBAL_6_netio_I [ ] ; extern  _GLOBAL_123_T  _GLOBAL_7_netio_I [ ] ; extern  _GLOBAL_123_T  _GLOBAL_8_netio_I [ ] ; extern  _GLOBAL_123_T  _GLOBAL_9_netio_I [ ] ; extern  _GLOBAL_123_T  _GLOBAL_10_netio_I [ ] ; extern  _GLOBAL_123_T  _GLOBAL_11_netio_I [ ] ; extern  _GLOBAL_123_T  _GLOBAL_12_netio_I [ ] ; extern  _GLOBAL_123_T  _GLOBAL_13_netio_I [ ] ; extern  _GLOBAL_123_T  _GLOBAL_14_netio_I [ ] ; extern  _GLOBAL_123_T  _GLOBAL_15_netio_I [ ] ; extern  _GLOBAL_123_T  _GLOBAL_16_netio_I [ ] ; extern  _GLOBAL_123_T  _GLOBAL_17_netio_I [ ] ; extern  _GLOBAL_123_T  _GLOBAL_18_netio_I [ ] ; extern  _GLOBAL_123_T  _GLOBAL_19_netio_I [ ] ; extern  _GLOBAL_123_T  _GLOBAL_20_netio_I [ ] ; extern  _GLOBAL_123_T  _GLOBAL_21_netio_I [ ] ; extern  _GLOBAL_123_T  _GLOBAL_22_netio_I [ ] ; extern  _GLOBAL_123_T  _GLOBAL_23_netio_I [ ] ; extern  _GLOBAL_123_T  _GLOBAL_24_netio_I [ ] ; extern  _GLOBAL_123_T  _GLOBAL_25_netio_I [ ] ; extern  _GLOBAL_123_T  _GLOBAL_26_netio_I [ ] ; extern  _GLOBAL_123_T  _GLOBAL_27_netio_I [ ] ; extern  _GLOBAL_123_T  _GLOBAL_28_netio_I [ ] ; extern  _GLOBAL_123_T  _GLOBAL_29_netio_I [ ] ; extern  _GLOBAL_123_T  _GLOBAL_30_netio_I [ ] ; extern  _GLOBAL_123_T  _GLOBAL_31_netio_I [ ] ; extern  _GLOBAL_123_T  _GLOBAL_32_netio_I [ ] ; extern  _GLOBAL_123_T  _GLOBAL_33_netio_I [ ] ; extern  _GLOBAL_123_T  _GLOBAL_34_netio_I [ ] ; extern  _GLOBAL_123_T  _GLOBAL_35_netio_I [ ] ; extern  _GLOBAL_123_T  _GLOBAL_36_netio_I [ ] ; extern  _GLOBAL_123_T  _GLOBAL_37_netio_I [ ] ; extern  _GLOBAL_123_T  _GLOBAL_38_netio_I [ ] ; extern  _GLOBAL_123_T  _GLOBAL_39_netio_I [ ] ; extern  _GLOBAL_123_T  _GLOBAL_40_netio_I [ ] ; extern  _GLOBAL_123_T  _GLOBAL_41_netio_I [ ] ; extern  _GLOBAL_123_T  _GLOBAL_42_netio_I [ ] ; extern  _GLOBAL_123_T  _GLOBAL_43_netio_I [ ] ; extern  _GLOBAL_123_T  _GLOBAL_44_netio_I [ ] ; extern  _GLOBAL_123_T  _GLOBAL_45_netio_I [ ] ; extern  _GLOBAL_123_T  _GLOBAL_46_netio_I [ ] ; extern  _GLOBAL_123_T  _GLOBAL_47_netio_I [ ] ; extern  _GLOBAL_123_T  _GLOBAL_48_netio_I [ ] ; extern  _GLOBAL_123_T  _GLOBAL_49_netio_I [ ] ; static __attribute__ ((unused)) __typeof__(_GLOBAL_0_netio_I) *_GLOBAL_netio_27_A[NUM_STACKS];extern  _GLOBAL_123_T  _GLOBAL_0_netcon_I [ ] ; extern  _GLOBAL_123_T  _GLOBAL_1_netcon_I [ ] ; extern  _GLOBAL_123_T  _GLOBAL_2_netcon_I [ ] ; extern  _GLOBAL_123_T  _GLOBAL_3_netcon_I [ ] ; extern  _GLOBAL_123_T  _GLOBAL_4_netcon_I [ ] ; extern  _GLOBAL_123_T  _GLOBAL_5_netcon_I [ ] ; extern  _GLOBAL_123_T  _GLOBAL_6_netcon_I [ ] ; extern  _GLOBAL_123_T  _GLOBAL_7_netcon_I [ ] ; extern  _GLOBAL_123_T  _GLOBAL_8_netcon_I [ ] ; extern  _GLOBAL_123_T  _GLOBAL_9_netcon_I [ ] ; extern  _GLOBAL_123_T  _GLOBAL_10_netcon_I [ ] ; extern  _GLOBAL_123_T  _GLOBAL_11_netcon_I [ ] ; extern  _GLOBAL_123_T  _GLOBAL_12_netcon_I [ ] ; extern  _GLOBAL_123_T  _GLOBAL_13_netcon_I [ ] ; extern  _GLOBAL_123_T  _GLOBAL_14_netcon_I [ ] ; extern  _GLOBAL_123_T  _GLOBAL_15_netcon_I [ ] ; extern  _GLOBAL_123_T  _GLOBAL_16_netcon_I [ ] ; extern  _GLOBAL_123_T  _GLOBAL_17_netcon_I [ ] ; extern  _GLOBAL_123_T  _GLOBAL_18_netcon_I [ ] ; extern  _GLOBAL_123_T  _GLOBAL_19_netcon_I [ ] ; extern  _GLOBAL_123_T  _GLOBAL_20_netcon_I [ ] ; extern  _GLOBAL_123_T  _GLOBAL_21_netcon_I [ ] ; extern  _GLOBAL_123_T  _GLOBAL_22_netcon_I [ ] ; extern  _GLOBAL_123_T  _GLOBAL_23_netcon_I [ ] ; extern  _GLOBAL_123_T  _GLOBAL_24_netcon_I [ ] ; extern  _GLOBAL_123_T  _GLOBAL_25_netcon_I [ ] ; extern  _GLOBAL_123_T  _GLOBAL_26_netcon_I [ ] ; extern  _GLOBAL_123_T  _GLOBAL_27_netcon_I [ ] ; extern  _GLOBAL_123_T  _GLOBAL_28_netcon_I [ ] ; extern  _GLOBAL_123_T  _GLOBAL_29_netcon_I [ ] ; extern  _GLOBAL_123_T  _GLOBAL_30_netcon_I [ ] ; extern  _GLOBAL_123_T  _GLOBAL_31_netcon_I [ ] ; extern  _GLOBAL_123_T  _GLOBAL_32_netcon_I [ ] ; extern  _GLOBAL_123_T  _GLOBAL_33_netcon_I [ ] ; extern  _GLOBAL_123_T  _GLOBAL_34_netcon_I [ ] ; extern  _GLOBAL_123_T  _GLOBAL_35_netcon_I [ ] ; extern  _GLOBAL_123_T  _GLOBAL_36_netcon_I [ ] ; extern  _GLOBAL_123_T  _GLOBAL_37_netcon_I [ ] ; extern  _GLOBAL_123_T  _GLOBAL_38_netcon_I [ ] ; extern  _GLOBAL_123_T  _GLOBAL_39_netcon_I [ ] ; extern  _GLOBAL_123_T  _GLOBAL_40_netcon_I [ ] ; extern  _GLOBAL_123_T  _GLOBAL_41_netcon_I [ ] ; extern  _GLOBAL_123_T  _GLOBAL_42_netcon_I [ ] ; extern  _GLOBAL_123_T  _GLOBAL_43_netcon_I [ ] ; extern  _GLOBAL_123_T  _GLOBAL_44_netcon_I [ ] ; extern  _GLOBAL_123_T  _GLOBAL_45_netcon_I [ ] ; extern  _GLOBAL_123_T  _GLOBAL_46_netcon_I [ ] ; extern  _GLOBAL_123_T  _GLOBAL_47_netcon_I [ ] ; extern  _GLOBAL_123_T  _GLOBAL_48_netcon_I [ ] ; extern  _GLOBAL_123_T  _GLOBAL_49_netcon_I [ ] ; static __attribute__ ((unused)) __typeof__(_GLOBAL_0_netcon_I) *_GLOBAL_netcon_28_A[NUM_STACKS];extern  _GLOBAL_123_T  _GLOBAL_0_netcls_I [ ] ; extern  _GLOBAL_123_T  _GLOBAL_1_netcls_I [ ] ; extern  _GLOBAL_123_T  _GLOBAL_2_netcls_I [ ] ; extern  _GLOBAL_123_T  _GLOBAL_3_netcls_I [ ] ; extern  _GLOBAL_123_T  _GLOBAL_4_netcls_I [ ] ; extern  _GLOBAL_123_T  _GLOBAL_5_netcls_I [ ] ; extern  _GLOBAL_123_T  _GLOBAL_6_netcls_I [ ] ; extern  _GLOBAL_123_T  _GLOBAL_7_netcls_I [ ] ; extern  _GLOBAL_123_T  _GLOBAL_8_netcls_I [ ] ; extern  _GLOBAL_123_T  _GLOBAL_9_netcls_I [ ] ; extern  _GLOBAL_123_T  _GLOBAL_10_netcls_I [ ] ; extern  _GLOBAL_123_T  _GLOBAL_11_netcls_I [ ] ; extern  _GLOBAL_123_T  _GLOBAL_12_netcls_I [ ] ; extern  _GLOBAL_123_T  _GLOBAL_13_netcls_I [ ] ; extern  _GLOBAL_123_T  _GLOBAL_14_netcls_I [ ] ; extern  _GLOBAL_123_T  _GLOBAL_15_netcls_I [ ] ; extern  _GLOBAL_123_T  _GLOBAL_16_netcls_I [ ] ; extern  _GLOBAL_123_T  _GLOBAL_17_netcls_I [ ] ; extern  _GLOBAL_123_T  _GLOBAL_18_netcls_I [ ] ; extern  _GLOBAL_123_T  _GLOBAL_19_netcls_I [ ] ; extern  _GLOBAL_123_T  _GLOBAL_20_netcls_I [ ] ; extern  _GLOBAL_123_T  _GLOBAL_21_netcls_I [ ] ; extern  _GLOBAL_123_T  _GLOBAL_22_netcls_I [ ] ; extern  _GLOBAL_123_T  _GLOBAL_23_netcls_I [ ] ; extern  _GLOBAL_123_T  _GLOBAL_24_netcls_I [ ] ; extern  _GLOBAL_123_T  _GLOBAL_25_netcls_I [ ] ; extern  _GLOBAL_123_T  _GLOBAL_26_netcls_I [ ] ; extern  _GLOBAL_123_T  _GLOBAL_27_netcls_I [ ] ; extern  _GLOBAL_123_T  _GLOBAL_28_netcls_I [ ] ; extern  _GLOBAL_123_T  _GLOBAL_29_netcls_I [ ] ; extern  _GLOBAL_123_T  _GLOBAL_30_netcls_I [ ] ; extern  _GLOBAL_123_T  _GLOBAL_31_netcls_I [ ] ; extern  _GLOBAL_123_T  _GLOBAL_32_netcls_I [ ] ; extern  _GLOBAL_123_T  _GLOBAL_33_netcls_I [ ] ; extern  _GLOBAL_123_T  _GLOBAL_34_netcls_I [ ] ; extern  _GLOBAL_123_T  _GLOBAL_35_netcls_I [ ] ; extern  _GLOBAL_123_T  _GLOBAL_36_netcls_I [ ] ; extern  _GLOBAL_123_T  _GLOBAL_37_netcls_I [ ] ; extern  _GLOBAL_123_T  _GLOBAL_38_netcls_I [ ] ; extern  _GLOBAL_123_T  _GLOBAL_39_netcls_I [ ] ; extern  _GLOBAL_123_T  _GLOBAL_40_netcls_I [ ] ; extern  _GLOBAL_123_T  _GLOBAL_41_netcls_I [ ] ; extern  _GLOBAL_123_T  _GLOBAL_42_netcls_I [ ] ; extern  _GLOBAL_123_T  _GLOBAL_43_netcls_I [ ] ; extern  _GLOBAL_123_T  _GLOBAL_44_netcls_I [ ] ; extern  _GLOBAL_123_T  _GLOBAL_45_netcls_I [ ] ; extern  _GLOBAL_123_T  _GLOBAL_46_netcls_I [ ] ; extern  _GLOBAL_123_T  _GLOBAL_47_netcls_I [ ] ; extern  _GLOBAL_123_T  _GLOBAL_48_netcls_I [ ] ; extern  _GLOBAL_123_T  _GLOBAL_49_netcls_I [ ] ; static __attribute__ ((unused)) __typeof__(_GLOBAL_0_netcls_I) *_GLOBAL_netcls_29_A[NUM_STACKS] = { &_GLOBAL_0_netcls_I, &_GLOBAL_1_netcls_I, &_GLOBAL_2_netcls_I, &_GLOBAL_3_netcls_I, &_GLOBAL_4_netcls_I, &_GLOBAL_5_netcls_I, &_GLOBAL_6_netcls_I, &_GLOBAL_7_netcls_I, &_GLOBAL_8_netcls_I, &_GLOBAL_9_netcls_I, &_GLOBAL_10_netcls_I, &_GLOBAL_11_netcls_I, &_GLOBAL_12_netcls_I, &_GLOBAL_13_netcls_I, &_GLOBAL_14_netcls_I, &_GLOBAL_15_netcls_I, &_GLOBAL_16_netcls_I, &_GLOBAL_17_netcls_I, &_GLOBAL_18_netcls_I, &_GLOBAL_19_netcls_I, &_GLOBAL_20_netcls_I, &_GLOBAL_21_netcls_I, &_GLOBAL_22_netcls_I, &_GLOBAL_23_netcls_I, &_GLOBAL_24_netcls_I, &_GLOBAL_25_netcls_I, &_GLOBAL_26_netcls_I, &_GLOBAL_27_netcls_I, &_GLOBAL_28_netcls_I, &_GLOBAL_29_netcls_I, &_GLOBAL_30_netcls_I, &_GLOBAL_31_netcls_I, &_GLOBAL_32_netcls_I, &_GLOBAL_33_netcls_I, &_GLOBAL_34_netcls_I, &_GLOBAL_35_netcls_I, &_GLOBAL_36_netcls_I, &_GLOBAL_37_netcls_I, &_GLOBAL_38_netcls_I, &_GLOBAL_39_netcls_I, &_GLOBAL_40_netcls_I, &_GLOBAL_41_netcls_I, &_GLOBAL_42_netcls_I, &_GLOBAL_43_netcls_I, &_GLOBAL_44_netcls_I, &_GLOBAL_45_netcls_I, &_GLOBAL_46_netcls_I, &_GLOBAL_47_netcls_I, &_GLOBAL_48_netcls_I, &_GLOBAL_49_netcls_I, };     

typedef  struct pool   _GLOBAL_124_T; extern  _GLOBAL_124_T  global_socket_pool[NUM_STACKS];    

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
# 47 "openbsd3/kern/uipc_socket.c" 2
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
# 48 "openbsd3/kern/uipc_socket.c" 2
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
# 49 "openbsd3/kern/uipc_socket.c" 2


void filt_sordetach(struct knote *kn);
int filt_soread(struct knote *kn, long hint);
void filt_sowdetach(struct knote *kn);
int filt_sowrite(struct knote *kn, long hint);
int filt_solisten(struct knote *kn, long hint);

typedef  struct filterops  _GLOBAL_125_T;  _GLOBAL_125_T  global_solisten_filtops[NUM_STACKS] = {  { 1 , 0L  , filt_sordetach  , filt_solisten  } ,  { 1 , 0L  , filt_sordetach  , filt_solisten  } ,  { 1 , 0L  , filt_sordetach  , filt_solisten  } ,  { 1 , 0L  , filt_sordetach  , filt_solisten  } ,  { 1 , 0L  , filt_sordetach  , filt_solisten  } ,  { 1 , 0L  , filt_sordetach  , filt_solisten  } ,  { 1 , 0L  , filt_sordetach  , filt_solisten  } ,  { 1 , 0L  , filt_sordetach  , filt_solisten  } ,  { 1 , 0L  , filt_sordetach  , filt_solisten  } ,  { 1 , 0L  , filt_sordetach  , filt_solisten  } ,  { 1 , 0L  , filt_sordetach  , filt_solisten  } ,  { 1 , 0L  , filt_sordetach  , filt_solisten  } ,  { 1 , 0L  , filt_sordetach  , filt_solisten  } ,  { 1 , 0L  , filt_sordetach  , filt_solisten  } ,  { 1 , 0L  , filt_sordetach  , filt_solisten  } ,  { 1 , 0L  , filt_sordetach  , filt_solisten  } ,  { 1 , 0L  , filt_sordetach  , filt_solisten  } ,  { 1 , 0L  , filt_sordetach  , filt_solisten  } ,  { 1 , 0L  , filt_sordetach  , filt_solisten  } ,  { 1 , 0L  , filt_sordetach  , filt_solisten  } ,  { 1 , 0L  , filt_sordetach  , filt_solisten  } ,  { 1 , 0L  , filt_sordetach  , filt_solisten  } ,  { 1 , 0L  , filt_sordetach  , filt_solisten  } ,  { 1 , 0L  , filt_sordetach  , filt_solisten  } ,  { 1 , 0L  , filt_sordetach  , filt_solisten  } ,  { 1 , 0L  , filt_sordetach  , filt_solisten  } ,  { 1 , 0L  , filt_sordetach  , filt_solisten  } ,  { 1 , 0L  , filt_sordetach  , filt_solisten  } ,  { 1 , 0L  , filt_sordetach  , filt_solisten  } ,  { 1 , 0L  , filt_sordetach  , filt_solisten  } ,  { 1 , 0L  , filt_sordetach  , filt_solisten  } ,  { 1 , 0L  , filt_sordetach  , filt_solisten  } ,  { 1 , 0L  , filt_sordetach  , filt_solisten  } ,  { 1 , 0L  , filt_sordetach  , filt_solisten  } ,  { 1 , 0L  , filt_sordetach  , filt_solisten  } ,  { 1 , 0L  , filt_sordetach  , filt_solisten  } ,  { 1 , 0L  , filt_sordetach  , filt_solisten  } ,  { 1 , 0L  , filt_sordetach  , filt_solisten  } ,  { 1 , 0L  , filt_sordetach  , filt_solisten  } ,  { 1 , 0L  , filt_sordetach  , filt_solisten  } ,  { 1 , 0L  , filt_sordetach  , filt_solisten  } ,  { 1 , 0L  , filt_sordetach  , filt_solisten  } ,  { 1 , 0L  , filt_sordetach  , filt_solisten  } ,  { 1 , 0L  , filt_sordetach  , filt_solisten  } ,  { 1 , 0L  , filt_sordetach  , filt_solisten  } ,  { 1 , 0L  , filt_sordetach  , filt_solisten  } ,  { 1 , 0L  , filt_sordetach  , filt_solisten  } ,  { 1 , 0L  , filt_sordetach  , filt_solisten  } ,  { 1 , 0L  , filt_sordetach  , filt_solisten  } ,  { 1 , 0L  , filt_sordetach  , filt_solisten  } ,  };    
      
typedef  struct filterops  _GLOBAL_126_T;  _GLOBAL_126_T  global_soread_filtops[NUM_STACKS] = {  { 1 , 0L  , filt_sordetach  , filt_soread  } ,  { 1 , 0L  , filt_sordetach  , filt_soread  } ,  { 1 , 0L  , filt_sordetach  , filt_soread  } ,  { 1 , 0L  , filt_sordetach  , filt_soread  } ,  { 1 , 0L  , filt_sordetach  , filt_soread  } ,  { 1 , 0L  , filt_sordetach  , filt_soread  } ,  { 1 , 0L  , filt_sordetach  , filt_soread  } ,  { 1 , 0L  , filt_sordetach  , filt_soread  } ,  { 1 , 0L  , filt_sordetach  , filt_soread  } ,  { 1 , 0L  , filt_sordetach  , filt_soread  } ,  { 1 , 0L  , filt_sordetach  , filt_soread  } ,  { 1 , 0L  , filt_sordetach  , filt_soread  } ,  { 1 , 0L  , filt_sordetach  , filt_soread  } ,  { 1 , 0L  , filt_sordetach  , filt_soread  } ,  { 1 , 0L  , filt_sordetach  , filt_soread  } ,  { 1 , 0L  , filt_sordetach  , filt_soread  } ,  { 1 , 0L  , filt_sordetach  , filt_soread  } ,  { 1 , 0L  , filt_sordetach  , filt_soread  } ,  { 1 , 0L  , filt_sordetach  , filt_soread  } ,  { 1 , 0L  , filt_sordetach  , filt_soread  } ,  { 1 , 0L  , filt_sordetach  , filt_soread  } ,  { 1 , 0L  , filt_sordetach  , filt_soread  } ,  { 1 , 0L  , filt_sordetach  , filt_soread  } ,  { 1 , 0L  , filt_sordetach  , filt_soread  } ,  { 1 , 0L  , filt_sordetach  , filt_soread  } ,  { 1 , 0L  , filt_sordetach  , filt_soread  } ,  { 1 , 0L  , filt_sordetach  , filt_soread  } ,  { 1 , 0L  , filt_sordetach  , filt_soread  } ,  { 1 , 0L  , filt_sordetach  , filt_soread  } ,  { 1 , 0L  , filt_sordetach  , filt_soread  } ,  { 1 , 0L  , filt_sordetach  , filt_soread  } ,  { 1 , 0L  , filt_sordetach  , filt_soread  } ,  { 1 , 0L  , filt_sordetach  , filt_soread  } ,  { 1 , 0L  , filt_sordetach  , filt_soread  } ,  { 1 , 0L  , filt_sordetach  , filt_soread  } ,  { 1 , 0L  , filt_sordetach  , filt_soread  } ,  { 1 , 0L  , filt_sordetach  , filt_soread  } ,  { 1 , 0L  , filt_sordetach  , filt_soread  } ,  { 1 , 0L  , filt_sordetach  , filt_soread  } ,  { 1 , 0L  , filt_sordetach  , filt_soread  } ,  { 1 , 0L  , filt_sordetach  , filt_soread  } ,  { 1 , 0L  , filt_sordetach  , filt_soread  } ,  { 1 , 0L  , filt_sordetach  , filt_soread  } ,  { 1 , 0L  , filt_sordetach  , filt_soread  } ,  { 1 , 0L  , filt_sordetach  , filt_soread  } ,  { 1 , 0L  , filt_sordetach  , filt_soread  } ,  { 1 , 0L  , filt_sordetach  , filt_soread  } ,  { 1 , 0L  , filt_sordetach  , filt_soread  } ,  { 1 , 0L  , filt_sordetach  , filt_soread  } ,  { 1 , 0L  , filt_sordetach  , filt_soread  } ,  };    
      
typedef  struct filterops  _GLOBAL_127_T;  _GLOBAL_127_T  global_sowrite_filtops[NUM_STACKS] = {  { 1 , 0L  , filt_sowdetach  , filt_sowrite  } ,  { 1 , 0L  , filt_sowdetach  , filt_sowrite  } ,  { 1 , 0L  , filt_sowdetach  , filt_sowrite  } ,  { 1 , 0L  , filt_sowdetach  , filt_sowrite  } ,  { 1 , 0L  , filt_sowdetach  , filt_sowrite  } ,  { 1 , 0L  , filt_sowdetach  , filt_sowrite  } ,  { 1 , 0L  , filt_sowdetach  , filt_sowrite  } ,  { 1 , 0L  , filt_sowdetach  , filt_sowrite  } ,  { 1 , 0L  , filt_sowdetach  , filt_sowrite  } ,  { 1 , 0L  , filt_sowdetach  , filt_sowrite  } ,  { 1 , 0L  , filt_sowdetach  , filt_sowrite  } ,  { 1 , 0L  , filt_sowdetach  , filt_sowrite  } ,  { 1 , 0L  , filt_sowdetach  , filt_sowrite  } ,  { 1 , 0L  , filt_sowdetach  , filt_sowrite  } ,  { 1 , 0L  , filt_sowdetach  , filt_sowrite  } ,  { 1 , 0L  , filt_sowdetach  , filt_sowrite  } ,  { 1 , 0L  , filt_sowdetach  , filt_sowrite  } ,  { 1 , 0L  , filt_sowdetach  , filt_sowrite  } ,  { 1 , 0L  , filt_sowdetach  , filt_sowrite  } ,  { 1 , 0L  , filt_sowdetach  , filt_sowrite  } ,  { 1 , 0L  , filt_sowdetach  , filt_sowrite  } ,  { 1 , 0L  , filt_sowdetach  , filt_sowrite  } ,  { 1 , 0L  , filt_sowdetach  , filt_sowrite  } ,  { 1 , 0L  , filt_sowdetach  , filt_sowrite  } ,  { 1 , 0L  , filt_sowdetach  , filt_sowrite  } ,  { 1 , 0L  , filt_sowdetach  , filt_sowrite  } ,  { 1 , 0L  , filt_sowdetach  , filt_sowrite  } ,  { 1 , 0L  , filt_sowdetach  , filt_sowrite  } ,  { 1 , 0L  , filt_sowdetach  , filt_sowrite  } ,  { 1 , 0L  , filt_sowdetach  , filt_sowrite  } ,  { 1 , 0L  , filt_sowdetach  , filt_sowrite  } ,  { 1 , 0L  , filt_sowdetach  , filt_sowrite  } ,  { 1 , 0L  , filt_sowdetach  , filt_sowrite  } ,  { 1 , 0L  , filt_sowdetach  , filt_sowrite  } ,  { 1 , 0L  , filt_sowdetach  , filt_sowrite  } ,  { 1 , 0L  , filt_sowdetach  , filt_sowrite  } ,  { 1 , 0L  , filt_sowdetach  , filt_sowrite  } ,  { 1 , 0L  , filt_sowdetach  , filt_sowrite  } ,  { 1 , 0L  , filt_sowdetach  , filt_sowrite  } ,  { 1 , 0L  , filt_sowdetach  , filt_sowrite  } ,  { 1 , 0L  , filt_sowdetach  , filt_sowrite  } ,  { 1 , 0L  , filt_sowdetach  , filt_sowrite  } ,  { 1 , 0L  , filt_sowdetach  , filt_sowrite  } ,  { 1 , 0L  , filt_sowdetach  , filt_sowrite  } ,  { 1 , 0L  , filt_sowdetach  , filt_sowrite  } ,  { 1 , 0L  , filt_sowdetach  , filt_sowrite  } ,  { 1 , 0L  , filt_sowdetach  , filt_sowrite  } ,  { 1 , 0L  , filt_sowdetach  , filt_sowrite  } ,  { 1 , 0L  , filt_sowdetach  , filt_sowrite  } ,  { 1 , 0L  , filt_sowdetach  , filt_sowrite  } ,  };    
      






typedef  int _GLOBAL_128_T;  _GLOBAL_128_T  global_somaxconn[NUM_STACKS] = {  128,  128,  128,  128,  128,  128,  128,  128,  128,  128,  128,  128,  128,  128,  128,  128,  128,  128,  128,  128,  128,  128,  128,  128,  128,  128,  128,  128,  128,  128,  128,  128,  128,  128,  128,  128,  128,  128,  128,  128,  128,  128,  128,  128,  128,  128,  128,  128,  128,  128,  };    
typedef  int _GLOBAL_129_T;  _GLOBAL_129_T  global_sominconn[NUM_STACKS] = {  80,  80,  80,  80,  80,  80,  80,  80,  80,  80,  80,  80,  80,  80,  80,  80,  80,  80,  80,  80,  80,  80,  80,  80,  80,  80,  80,  80,  80,  80,  80,  80,  80,  80,  80,  80,  80,  80,  80,  80,  80,  80,  80,  80,  80,  80,  80,  80,  80,  80,  };    

typedef  struct pool  _GLOBAL_130_T;  _GLOBAL_130_T  global_socket_pool[NUM_STACKS];   

void
soinit(void)
{

 pool_init(&global_socket_pool[get_stack_id()], sizeof(struct socket), 0, 0, 0, "sockpl", 0L);
}
# 89 "openbsd3/kern/uipc_socket.c"
int
socreate(dom, aso, type, proto)
 int dom;
 struct socket **aso;
 register int type;
 int proto;
{
 struct proc *p = global_curproc[get_stack_id()];
 struct protosw *prp;
 struct socket *so;
 int error, s;

 if (proto)
  prp = pffindproto(dom, proto, type);
 else
  prp = pffindtype(dom, type);
 if (prp == 0 || prp->pr_usrreq == 0)
  return (43);
 if (prp->pr_type != type)
  return (41);
 s = splraise((0x20 + ((1) << 4)));
 so = pool_get(&global_socket_pool[get_stack_id()], 0x02);
 bzero(so, sizeof(*so));
 do { (&so->so_q0)->tqh_first = 0L; (&so->so_q0)->tqh_last = &(&so->so_q0)->tqh_first; } while (0);
 do { (&so->so_q)->tqh_first = 0L; (&so->so_q)->tqh_last = &(&so->so_q)->tqh_first; } while (0);
 so->so_type = type;
 if (p->p_cred->pc_ucred->cr_uid == 0)
  so->so_state = 0x080;
 so->so_ruid = p->p_cred->p_ruid;
 so->so_euid = p->p_cred->pc_ucred->cr_uid;
 so->so_rgid = p->p_cred->p_rgid;
 so->so_egid = p->p_cred->pc_ucred->cr_gid;
 so->so_proto = prp;
 error = (*prp->pr_usrreq)(so, 0, 0L,
     (struct mbuf *)(long)proto, 0L);
 if (error) {
  so->so_state |= 0x001;
  sofree(so);
  splx(s);
  return (error);
 }







 splx(s);
 *aso = so;
 return (0);
}

int
sobind(so, nam)
 struct socket *so;
 struct mbuf *nam;
{
 int s = splraise((0x20 + ((1) << 4)));
 int error;

 error = (*so->so_proto->pr_usrreq)(so, 2, 0L, nam, 0L);
 splx(s);
 return (error);
}

int
solisten(so, backlog)
 register struct socket *so;
 int backlog;
{
 int s = splraise((0x20 + ((1) << 4))), error;

 error = (*so->so_proto->pr_usrreq)(so, 3, 0L, 0L, 0L);
 if (error) {
  splx(s);
  return (error);
 }
 if (((&so->so_q)->tqh_first) == 0L)
  so->so_options |= 0x0002;
 if (backlog < 0 || backlog > global_somaxconn[get_stack_id()])
  backlog = global_somaxconn[get_stack_id()];
 if (backlog < global_sominconn[get_stack_id()])
  backlog = global_sominconn[get_stack_id()];
 so->so_qlimit = backlog;
 splx(s);
 return (0);
}





void
sofree(struct socket *so)
{
 do { if (__builtin_expect(((global_splassert_ctl[get_stack_id()] > 0) != 0), 0)) { splassert_check((0x20 + ((1) << 4)), __func__); } } while (0);

 if (so->so_pcb || (so->so_state & 0x001) == 0)
  return;
 if (so->so_head) {





  if (!soqremque(so, 0))
   return;
 }
 sbrelease(&so->so_snd);
 sorflush(so);
 pool_put(&global_socket_pool[get_stack_id()], so);
}






int
soclose(so)
 register struct socket *so;
{
 struct socket *so2;
 int s = splraise((0x20 + ((1) << 4)));
 int error = 0;

 if (so->so_options & 0x0002) {
  while ((so2 = ((&so->so_q0)->tqh_first)) != 0L) {
   (void) soqremque(so2, 0);
   (void) soabort(so2);
  }
  while ((so2 = ((&so->so_q)->tqh_first)) != 0L) {
   (void) soqremque(so2, 1);
   (void) soabort(so2);
  }
 }
 if (so->so_pcb == 0)
  goto discard;
 if (so->so_state & 0x002) {
  if ((so->so_state & 0x008) == 0) {
   error = sodisconnect(so);
   if (error)
    goto drop;
  }
  if (so->so_options & 0x0080) {
   if ((so->so_state & 0x008) &&
       (so->so_state & 0x100))
    goto drop;
   while (so->so_state & 0x002) {
    error = ltsleep(&so->so_timeo, 24 | 0x100, (*_GLOBAL_netcls_29_A[get_stack_id()]), so->so_linger * global_hz[get_stack_id()], 0L)

                           ;
    if (error)
     break;
   }
  }
 }
drop:
 if (so->so_pcb) {
  int error2 = (*so->so_proto->pr_usrreq)(so, 1, 0L,
       0L, 0L);
  if (error == 0)
   error = error2;
 }
discard:
 if (so->so_state & 0x001)
  panic("soclose: NOFDREF");
 so->so_state |= 0x001;
 sofree(so);
 splx(s);
 return (error);
}




int
soabort(struct socket *so)
{
 do { if (__builtin_expect(((global_splassert_ctl[get_stack_id()] > 0) != 0), 0)) { splassert_check((0x20 + ((1) << 4)), __func__); } } while (0);

 return (*so->so_proto->pr_usrreq)(so, 10, 0L, 0L, 0L);
}

int
soaccept(so, nam)
 register struct socket *so;
 struct mbuf *nam;
{
 int s = splraise((0x20 + ((1) << 4)));
 int error = 0;

 if ((so->so_state & 0x001) == 0)
  panic("soaccept: !NOFDREF");
 so->so_state &= ~0x001;
 if ((so->so_state & 0x800) == 0 ||
     (so->so_proto->pr_flags & 0x20) == 0)
  error = (*so->so_proto->pr_usrreq)(so, 5, 0L,
      nam, 0L);
 else
  error = 53;
 splx(s);
 return (error);
}

int
soconnect(so, nam)
 register struct socket *so;
 struct mbuf *nam;
{
 int s;
 int error;

 if (so->so_options & 0x0002)
  return (45);
 s = splraise((0x20 + ((1) << 4)));






 if (so->so_state & (0x002|0x004) &&
     ((so->so_proto->pr_flags & 0x04) ||
     (error = sodisconnect(so))))
  error = 56;
 else
  error = (*so->so_proto->pr_usrreq)(so, 4,
         0L, nam, 0L);
 splx(s);
 return (error);
}

int
soconnect2(so1, so2)
 register struct socket *so1;
 struct socket *so2;
{
 int s = splraise((0x20 + ((1) << 4)));
 int error;

 error = (*so1->so_proto->pr_usrreq)(so1, 17, 0L,
         (struct mbuf *)so2, 0L);
 splx(s);
 return (error);
}

int
sodisconnect(so)
 register struct socket *so;
{
 int s = splraise((0x20 + ((1) << 4)));
 int error;

 if ((so->so_state & 0x002) == 0) {
  error = 57;
  goto bad;
 }
 if (so->so_state & 0x008) {
  error = 37;
  goto bad;
 }
 error = (*so->so_proto->pr_usrreq)(so, 6, 0L, 0L,
        0L);
bad:
 splx(s);
 return (error);
}
# 377 "openbsd3/kern/uipc_socket.c"
int
sosend(so, addr, uio, top, control, flags)
 register struct socket *so;
 struct mbuf *addr;
 struct uio *uio;
 struct mbuf *top;
 struct mbuf *control;
 int flags;
{
 struct proc *p = global_curproc[get_stack_id()];
 struct mbuf **mp;
 struct mbuf *m;
 long space, len, mlen, clen = 0;
 quad_t resid;
 int error, s, dontroute;
 int atomic = ((so)->so_proto->pr_flags & 0x01) || top;

 if (uio)
  resid = uio->uio_resid;
 else
  resid = top->M_dat.MH.MH_pkthdr.len;
# 406 "openbsd3/kern/uipc_socket.c"
 if (resid < 0 ||
     (so->so_type == 1 && (flags & 0x8))) {
  error = 22;
  goto out;
 }
 dontroute =
     (flags & 0x4) && (so->so_options & 0x0010) == 0 &&
     (so->so_proto->pr_flags & 0x01);
 p->p_stats->p_ru.ru_msgsnd++;
 if (control)
  clen = control->m_hdr.mh_len;


restart:
 if ((error = ((&so->so_snd)->sb_flags & 0x01 ? ((((((flags) & 0x80) ? 0x0001 : 0x0000)) == 0x0000) ? sb_lock(&so->so_snd) : 35) : ((&so->so_snd)->sb_flags |= 0x01), 0)) != 0)
  goto out;
 do {
  s = splraise((0x20 + ((1) << 4)));
  if (so->so_state & 0x010)
   { error = 32; splx(s); goto release; };
  if (so->so_error) {
   error = so->so_error;
   so->so_error = 0;
   splx(s);
   goto release;
  }
  if ((so->so_state & 0x002) == 0) {
   if (so->so_proto->pr_flags & 0x04) {
    if ((so->so_state & 0x400) == 0 &&
        !(resid == 0 && clen != 0))
     { error = 57; splx(s); goto release; };
   } else if (addr == 0)
    { error = 39; splx(s); goto release; };
  }
  space = ((long) imin((int)((&so->so_snd)->sb_hiwat - (&so->so_snd)->sb_cc), (int)((&so->so_snd)->sb_mbmax - (&so->so_snd)->sb_mbcnt)));
  if (flags & 0x1)
   space += 1024;
  if ((atomic && resid > so->so_snd.sb_hiwat) ||
      clen > so->so_snd.sb_hiwat)
   { error = 40; splx(s); goto release; };
  if (space < resid + clen && uio &&
      (atomic || space < so->so_snd.sb_lowat || space < clen)) {
   if (so->so_state & 0x100)
    { error = 35; splx(s); goto release; };
   { (&so->so_snd)->sb_flags &= ~0x01; if ((&so->so_snd)->sb_flags & 0x02) { (&so->so_snd)->sb_flags &= ~0x02; wakeup((caddr_t)&(&so->so_snd)->sb_flags); } };
   error = sbwait(&so->so_snd);
   splx(s);
   if (error)
    goto out;
   goto restart;
  }
  splx(s);
  mp = &top;
  space -= clen;
  do {
   if (uio == 0L) {



    resid = 0;
    if (flags & 0x8)
     top->m_hdr.mh_flags |= 0x0004;
   } else do {
    if (top == 0) {
     do { { int ms = splraise((0x20 + ((6) << 4))); { (m) = pool_get(&global_mbpool[get_stack_id()], (0x0000) == 0x0000 ? 0x02|0x20 : 0); } splx(ms); }; if (m) { (m)->m_hdr.mh_type = (1); { int ms = splraise((0x20 + ((6) << 4))); { global_mbstat[get_stack_id()].m_mtypes[1]++; } splx(ms); } (m)->m_hdr.mh_next = (struct mbuf *)0L; (m)->m_hdr.mh_nextpkt = (struct mbuf *)0L; (m)->m_hdr.mh_data = (m)->M_dat.MH.MH_dat.MH_databuf; (m)->m_hdr.mh_flags = 0x0002; { ((&(m)->M_dat.MH.MH_pkthdr.tags)->slh_first) = 0L; }; (m)->M_dat.MH.MH_pkthdr.csum = 0; } } while ( 0);
     mlen = ((256 - sizeof(struct m_hdr)) - sizeof(struct pkthdr));
     m->M_dat.MH.MH_pkthdr.len = 0;
     m->M_dat.MH.MH_pkthdr.rcvif = (struct ifnet *)0;
    } else {
     do { { int ms = splraise((0x20 + ((6) << 4))); { (m) = pool_get(&global_mbpool[get_stack_id()], (0x0000) == 0x0000 ? 0x02|0x20 : 0); } splx(ms); }; if (m) { (m)->m_hdr.mh_type = (1); { int ms = splraise((0x20 + ((6) << 4))); { global_mbstat[get_stack_id()].m_mtypes[1]++; } splx(ms); } (m)->m_hdr.mh_next = (struct mbuf *)0L; (m)->m_hdr.mh_nextpkt = (struct mbuf *)0L; (m)->m_hdr.mh_data = (m)->M_dat.M_databuf; (m)->m_hdr.mh_flags = 0; } } while( 0);
     mlen = (256 - sizeof(struct m_hdr));
    }
    if (resid >= (((256 - sizeof(struct m_hdr)) - sizeof(struct pkthdr)) + 1) && space >= (1 << 11)) {
     do { { int ms = splraise((0x20 + ((6) << 4))); { (m)->M_dat.MH.MH_dat.MH_ext.ext_buf = pool_get(&global_mclpool[get_stack_id()], (0x0000) == 0x0000 ? (0x02|0x20) : 0); } splx(ms); }; if ((m)->M_dat.MH.MH_dat.MH_ext.ext_buf != 0L) { (m)->m_hdr.mh_data = (m)->M_dat.MH.MH_dat.MH_ext.ext_buf; (m)->m_hdr.mh_flags |= 0x0001|0x0008; (m)->M_dat.MH.MH_dat.MH_ext.ext_size = (1 << 11); (m)->M_dat.MH.MH_dat.MH_ext.ext_free = 0L; (m)->M_dat.MH.MH_dat.MH_ext.ext_arg = 0L; do { (m)->M_dat.MH.MH_dat.MH_ext.ext_prevref = (m); (m)->M_dat.MH.MH_dat.MH_ext.ext_nextref = (m); ; ; } while ( 0); } } while ( 0);
     if ((m->m_hdr.mh_flags & 0x0001) == 0)
      goto nopages;
     mlen = (1 << 11);
     if (atomic && top == 0) {
      len = lmin((1 << 11) - global_max_hdr[get_stack_id()], resid);
      m->m_hdr.mh_data += global_max_hdr[get_stack_id()];
     } else
      len = lmin((1 << 11), resid);
     space -= len;
    } else {
nopages:
     len = lmin(lmin(mlen, resid), space);
     space -= len;




     if (atomic && top == 0 && len < mlen)
      { (m)->m_hdr.mh_data += (((256 - sizeof(struct m_hdr)) - sizeof(struct pkthdr)) - (len)) &~ (sizeof(long) - 1); };
    }
    error = uiomove(((caddr_t)((m)->m_hdr.mh_data)), (int)len,
        uio);
    resid = uio->uio_resid;
    m->m_hdr.mh_len = len;
    *mp = m;
    top->M_dat.MH.MH_pkthdr.len += len;
    if (error)
     goto release;
    mp = &m->m_hdr.mh_next;
    if (resid <= 0) {
     if (flags & 0x8)
      top->m_hdr.mh_flags |= 0x0004;
     break;
    }
   } while (space > 0 && atomic);
   if (dontroute)
    so->so_options |= 0x0010;
   s = splraise((0x20 + ((1) << 4)));
   error = (*so->so_proto->pr_usrreq)(so,
       (flags & 0x1) ? 14 : 9,
       top, addr, control);
   splx(s);
   if (dontroute)
    so->so_options &= ~0x0010;
   clen = 0;
   control = 0;
   top = 0;
   mp = &top;
   if (error)
    goto release;
  } while (resid && space > 0);
 } while (resid);

release:
 { (&so->so_snd)->sb_flags &= ~0x01; if ((&so->so_snd)->sb_flags & 0x02) { (&so->so_snd)->sb_flags &= ~0x02; wakeup((caddr_t)&(&so->so_snd)->sb_flags); } };
out:
 if (top)
  m_freem(top);
 if (control)
  m_freem(control);
 return (error);
}
# 559 "openbsd3/kern/uipc_socket.c"
int
soreceive(so, paddr, uio, mp0, controlp, flagsp)
 register struct socket *so;
 struct mbuf **paddr;
 struct uio *uio;
 struct mbuf **mp0;
 struct mbuf **controlp;
 int *flagsp;
{
 register struct mbuf *m, **mp;
 register int flags, len, error, s, offset;
 struct protosw *pr = so->so_proto;
 struct mbuf *nextrecord;
 int moff, type = 0;
 size_t orig_resid = uio->uio_resid;
 int uio_error = 0;
 int resid;

 mp = mp0;
 if (paddr)
  *paddr = 0;
 if (controlp)
  *controlp = 0;
 if (flagsp)
  flags = *flagsp &~ 0x8;
 else
  flags = 0;
 if (so->so_state & 0x100)
  flags |= 0x80;
 if (flags & 0x1) {
  m = m_get(0x0000, 1);
  error = (*pr->pr_usrreq)(so, 13, m,
      (struct mbuf *)(long)(flags & 0x2), 0L);
  if (error)
   goto bad;
  do {
   error = uiomove(((caddr_t)((m)->m_hdr.mh_data)),
       (int) min(uio->uio_resid, m->m_hdr.mh_len), uio);
   m = m_free(m);
  } while (uio->uio_resid && error == 0 && m);
bad:
  if (m)
   m_freem(m);
  return (error);
 }
 if (mp)
  *mp = (struct mbuf *)0;
 if (so->so_state & 0x400 && uio->uio_resid)
  (*pr->pr_usrreq)(so, 8, 0L, 0L, 0L);

restart:
 if ((error = ((&so->so_rcv)->sb_flags & 0x01 ? ((((((flags) & 0x80) ? 0x0001 : 0x0000)) == 0x0000) ? sb_lock(&so->so_rcv) : 35) : ((&so->so_rcv)->sb_flags |= 0x01), 0)) != 0)
  return (error);
 s = splraise((0x20 + ((1) << 4)));

 m = so->so_rcv.sb_mb;
# 626 "openbsd3/kern/uipc_socket.c"
 if (m == 0 || (((flags & 0x80) == 0 &&
     so->so_rcv.sb_cc < uio->uio_resid) &&
     (so->so_rcv.sb_cc < so->so_rcv.sb_lowat ||
     ((flags & 0x40) && uio->uio_resid <= so->so_rcv.sb_hiwat)) &&
     m->m_hdr.mh_nextpkt == 0 && (pr->pr_flags & 0x01) == 0)) {

  if (m == 0 && so->so_rcv.sb_cc)
   panic("receive 1");

  if (so->so_error) {
   if (m)
    goto dontblock;
   error = so->so_error;
   if ((flags & 0x2) == 0)
    so->so_error = 0;
   goto release;
  }
  if (so->so_state & 0x020) {
   if (m)
    goto dontblock;
   else
    goto release;
  }
  for (; m; m = m->m_hdr.mh_next)
   if (m->m_hdr.mh_type == 7 || (m->m_hdr.mh_flags & 0x0004)) {
    m = so->so_rcv.sb_mb;
    goto dontblock;
   }
  if ((so->so_state & (0x002|0x004)) == 0 &&
      (so->so_proto->pr_flags & 0x04)) {
   error = 57;
   goto release;
  }
  if (uio->uio_resid == 0 && controlp == 0L)
   goto release;
  if ((so->so_state & 0x100) || (flags & 0x80)) {
   error = 35;
   goto release;
  }
  ;
  ;
  { (&so->so_rcv)->sb_flags &= ~0x01; if ((&so->so_rcv)->sb_flags & 0x02) { (&so->so_rcv)->sb_flags &= ~0x02; wakeup((caddr_t)&(&so->so_rcv)->sb_flags); } };
  error = sbwait(&so->so_rcv);
  splx(s);
  if (error)
   return (error);
  goto restart;
 }
dontblock:
# 684 "openbsd3/kern/uipc_socket.c"
 ((m == so->so_rcv.sb_mb) ? (void)0 : __assert("diagnostic ", "openbsd3/kern/uipc_socket.c", 684, "m == so->so_rcv.sb_mb"));
 ;
 ;
 nextrecord = m->m_hdr.mh_nextpkt;
 if (pr->pr_flags & 0x02) {

  if (m->m_hdr.mh_type != 3)
   panic("receive 1a");

  orig_resid = 0;
  if (flags & 0x2) {
   if (paddr)
    *paddr = m_copym((m), (0), (m->m_hdr.mh_len), 0x0001);
   m = m->m_hdr.mh_next;
  } else {
   { (&so->so_rcv)->sb_cc -= (m)->m_hdr.mh_len; (&so->so_rcv)->sb_mbcnt -= 256; if ((m)->m_hdr.mh_flags & 0x0001) (&so->so_rcv)->sb_mbcnt -= (m)->M_dat.MH.MH_dat.MH_ext.ext_size; };
   if (paddr) {
    *paddr = m;
    so->so_rcv.sb_mb = m->m_hdr.mh_next;
    m->m_hdr.mh_next = 0;
    m = so->so_rcv.sb_mb;
   } else {
    { int ms = splraise((0x20 + ((6) << 4))); { global_mbstat[get_stack_id()].m_mtypes[(m)->m_hdr.mh_type]--; if ((m)->m_hdr.mh_flags & 0x0002) m_tag_delete_chain((m), 0L); if ((m)->m_hdr.mh_flags & 0x0001) { do { if ((((m))->M_dat.MH.MH_dat.MH_ext.ext_nextref != ((m)))) { do { ((m))->M_dat.MH.MH_dat.MH_ext.ext_nextref->M_dat.MH.MH_dat.MH_ext.ext_prevref = ((m))->M_dat.MH.MH_dat.MH_ext.ext_prevref; ((m))->M_dat.MH.MH_dat.MH_ext.ext_prevref->M_dat.MH.MH_dat.MH_ext.ext_nextref = ((m))->M_dat.MH.MH_dat.MH_ext.ext_nextref; } while ( 0); } else if (((m))->m_hdr.mh_flags & 0x0008) { pool_put(&global_mclpool[get_stack_id()], ((m))->M_dat.MH.MH_dat.MH_ext.ext_buf); } else if (((m))->M_dat.MH.MH_dat.MH_ext.ext_free) { (*(((m))->M_dat.MH.MH_dat.MH_ext.ext_free))(((m))->M_dat.MH.MH_dat.MH_ext.ext_buf, ((m))->M_dat.MH.MH_dat.MH_ext.ext_size, ((m))->M_dat.MH.MH_dat.MH_ext.ext_arg); } else { free(((m))->M_dat.MH.MH_dat.MH_ext.ext_buf,((m))->M_dat.MH.MH_dat.MH_ext.ext_type); } ((m))->m_hdr.mh_flags &= ~(0x0008|0x0001); ((m))->M_dat.MH.MH_dat.MH_ext.ext_size = 0; } while ( 0); } (so->so_rcv.sb_mb) = (m)->m_hdr.mh_next; pool_put(&global_mbpool[get_stack_id()], (m)); } splx(ms); };
    m = so->so_rcv.sb_mb;
   }
  }
 }
 while (m && m->m_hdr.mh_type == 6 && error == 0) {
  if (flags & 0x2) {
   if (controlp)
    *controlp = m_copym((m), (0), (m->m_hdr.mh_len), 0x0001);
   m = m->m_hdr.mh_next;
  } else {
   { (&so->so_rcv)->sb_cc -= (m)->m_hdr.mh_len; (&so->so_rcv)->sb_mbcnt -= 256; if ((m)->m_hdr.mh_flags & 0x0001) (&so->so_rcv)->sb_mbcnt -= (m)->M_dat.MH.MH_dat.MH_ext.ext_size; };
   if (controlp) {
    if (pr->pr_domain->dom_externalize &&
        ((struct cmsghdr *)((m)->m_hdr.mh_data))->cmsg_type ==
        0x01)
       error = (*pr->pr_domain->dom_externalize)(m);
    *controlp = m;
    so->so_rcv.sb_mb = m->m_hdr.mh_next;
    m->m_hdr.mh_next = 0;
    m = so->so_rcv.sb_mb;
   } else {
    { int ms = splraise((0x20 + ((6) << 4))); { global_mbstat[get_stack_id()].m_mtypes[(m)->m_hdr.mh_type]--; if ((m)->m_hdr.mh_flags & 0x0002) m_tag_delete_chain((m), 0L); if ((m)->m_hdr.mh_flags & 0x0001) { do { if ((((m))->M_dat.MH.MH_dat.MH_ext.ext_nextref != ((m)))) { do { ((m))->M_dat.MH.MH_dat.MH_ext.ext_nextref->M_dat.MH.MH_dat.MH_ext.ext_prevref = ((m))->M_dat.MH.MH_dat.MH_ext.ext_prevref; ((m))->M_dat.MH.MH_dat.MH_ext.ext_prevref->M_dat.MH.MH_dat.MH_ext.ext_nextref = ((m))->M_dat.MH.MH_dat.MH_ext.ext_nextref; } while ( 0); } else if (((m))->m_hdr.mh_flags & 0x0008) { pool_put(&global_mclpool[get_stack_id()], ((m))->M_dat.MH.MH_dat.MH_ext.ext_buf); } else if (((m))->M_dat.MH.MH_dat.MH_ext.ext_free) { (*(((m))->M_dat.MH.MH_dat.MH_ext.ext_free))(((m))->M_dat.MH.MH_dat.MH_ext.ext_buf, ((m))->M_dat.MH.MH_dat.MH_ext.ext_size, ((m))->M_dat.MH.MH_dat.MH_ext.ext_arg); } else { free(((m))->M_dat.MH.MH_dat.MH_ext.ext_buf,((m))->M_dat.MH.MH_dat.MH_ext.ext_type); } ((m))->m_hdr.mh_flags &= ~(0x0008|0x0001); ((m))->M_dat.MH.MH_dat.MH_ext.ext_size = 0; } while ( 0); } (so->so_rcv.sb_mb) = (m)->m_hdr.mh_next; pool_put(&global_mbpool[get_stack_id()], (m)); } splx(ms); };
    m = so->so_rcv.sb_mb;
   }
  }
  if (controlp) {
   orig_resid = 0;
   controlp = &(*controlp)->m_hdr.mh_next;
  }
 }







 if (m) {
  if ((flags & 0x2) == 0) {
   m->m_hdr.mh_nextpkt = nextrecord;





   if (nextrecord == 0L) {
    ((so->so_rcv.sb_mb == m) ? (void)0 : __assert("diagnostic ", "openbsd3/kern/uipc_socket.c", 753, "so->so_rcv.sb_mb == m"));
    so->so_rcv.sb_lastrecord = m;
   }
  }
  type = m->m_hdr.mh_type;
  if (type == 7)
   flags |= 0x1;
  if (m->m_hdr.mh_flags & 0x0100)
   flags |= 0x100;
  if (m->m_hdr.mh_flags & 0x0200)
   flags |= 0x200;
 } else {
  if ((flags & 0x2) == 0) {
   ((so->so_rcv.sb_mb == m) ? (void)0 : __assert("diagnostic ", "openbsd3/kern/uipc_socket.c", 766, "so->so_rcv.sb_mb == m"));
   so->so_rcv.sb_mb = nextrecord;
   do { if ((&so->so_rcv)->sb_mb == 0L) { (&so->so_rcv)->sb_mbtail = 0L; (&so->so_rcv)->sb_lastrecord = 0L; } } while ( 0);
  }
 }
 ;
 ;

 moff = 0;
 offset = 0;
 while (m && uio->uio_resid > 0 && error == 0) {
  if (m->m_hdr.mh_type == 7) {
   if (type != 7)
    break;
  } else if (type == 7)
   break;

  else if (m->m_hdr.mh_type != 1 && m->m_hdr.mh_type != 2)
   panic("receive 3");

  so->so_state &= ~0x040;
  len = uio->uio_resid;
  if (so->so_oobmark && len > so->so_oobmark - offset)
   len = so->so_oobmark - offset;
  if (len > m->m_hdr.mh_len - moff)
   len = m->m_hdr.mh_len - moff;
# 800 "openbsd3/kern/uipc_socket.c"
  if (mp == 0 && uio_error == 0) {
   ;
   ;
   resid = uio->uio_resid;
   splx(s);
   uio_error =
    uiomove(((caddr_t)((m)->m_hdr.mh_data)) + moff, (int)len,
     uio);
   s = splraise((0x20 + ((1) << 4)));
   if (uio_error)
    uio->uio_resid = resid - len;
  } else
   uio->uio_resid -= len;
  if (len == m->m_hdr.mh_len - moff) {
   if (m->m_hdr.mh_flags & 0x0004)
    flags |= 0x8;
   if (flags & 0x2) {
    m = m->m_hdr.mh_next;
    moff = 0;
   } else {
    nextrecord = m->m_hdr.mh_nextpkt;
    { (&so->so_rcv)->sb_cc -= (m)->m_hdr.mh_len; (&so->so_rcv)->sb_mbcnt -= 256; if ((m)->m_hdr.mh_flags & 0x0001) (&so->so_rcv)->sb_mbcnt -= (m)->M_dat.MH.MH_dat.MH_ext.ext_size; };
    if (mp) {
     *mp = m;
     mp = &m->m_hdr.mh_next;
     so->so_rcv.sb_mb = m = m->m_hdr.mh_next;
     *mp = (struct mbuf *)0;
    } else {
     { int ms = splraise((0x20 + ((6) << 4))); { global_mbstat[get_stack_id()].m_mtypes[(m)->m_hdr.mh_type]--; if ((m)->m_hdr.mh_flags & 0x0002) m_tag_delete_chain((m), 0L); if ((m)->m_hdr.mh_flags & 0x0001) { do { if ((((m))->M_dat.MH.MH_dat.MH_ext.ext_nextref != ((m)))) { do { ((m))->M_dat.MH.MH_dat.MH_ext.ext_nextref->M_dat.MH.MH_dat.MH_ext.ext_prevref = ((m))->M_dat.MH.MH_dat.MH_ext.ext_prevref; ((m))->M_dat.MH.MH_dat.MH_ext.ext_prevref->M_dat.MH.MH_dat.MH_ext.ext_nextref = ((m))->M_dat.MH.MH_dat.MH_ext.ext_nextref; } while ( 0); } else if (((m))->m_hdr.mh_flags & 0x0008) { pool_put(&global_mclpool[get_stack_id()], ((m))->M_dat.MH.MH_dat.MH_ext.ext_buf); } else if (((m))->M_dat.MH.MH_dat.MH_ext.ext_free) { (*(((m))->M_dat.MH.MH_dat.MH_ext.ext_free))(((m))->M_dat.MH.MH_dat.MH_ext.ext_buf, ((m))->M_dat.MH.MH_dat.MH_ext.ext_size, ((m))->M_dat.MH.MH_dat.MH_ext.ext_arg); } else { free(((m))->M_dat.MH.MH_dat.MH_ext.ext_buf,((m))->M_dat.MH.MH_dat.MH_ext.ext_type); } ((m))->m_hdr.mh_flags &= ~(0x0008|0x0001); ((m))->M_dat.MH.MH_dat.MH_ext.ext_size = 0; } while ( 0); } (so->so_rcv.sb_mb) = (m)->m_hdr.mh_next; pool_put(&global_mbpool[get_stack_id()], (m)); } splx(ms); };
     m = so->so_rcv.sb_mb;
    }




    ((so->so_rcv.sb_mb == m) ? (void)0 : __assert("diagnostic ", "openbsd3/kern/uipc_socket.c", 835, "so->so_rcv.sb_mb == m"));
    if (m) {
     m->m_hdr.mh_nextpkt = nextrecord;
     if (nextrecord == 0L)
      so->so_rcv.sb_lastrecord = m;
    } else {
     so->so_rcv.sb_mb = nextrecord;
     do { if ((&so->so_rcv)->sb_mb == 0L) { (&so->so_rcv)->sb_mbtail = 0L; (&so->so_rcv)->sb_lastrecord = 0L; } } while ( 0);
    }
    ;
    ;
   }
  } else {
   if (flags & 0x2)
    moff += len;
   else {
    if (mp)
     *mp = m_copym(m, 0, len, 0x0000);
    m->m_hdr.mh_data += len;
    m->m_hdr.mh_len -= len;
    so->so_rcv.sb_cc -= len;
   }
  }
  if (so->so_oobmark) {
   if ((flags & 0x2) == 0) {
    so->so_oobmark -= len;
    if (so->so_oobmark == 0) {
     so->so_state |= 0x040;
     break;
    }
   } else {
    offset += len;
    if (offset == so->so_oobmark)
     break;
   }
  }
  if (flags & 0x8)
   break;







  while (flags & 0x40 && m == 0 && uio->uio_resid > 0 &&
      !((so)->so_proto->pr_flags & 0x01) && !nextrecord) {
   if (so->so_error || so->so_state & 0x020)
    break;
   ;
   ;
   error = sbwait(&so->so_rcv);
   if (error) {
    { (&so->so_rcv)->sb_flags &= ~0x01; if ((&so->so_rcv)->sb_flags & 0x02) { (&so->so_rcv)->sb_flags &= ~0x02; wakeup((caddr_t)&(&so->so_rcv)->sb_flags); } };
    splx(s);
    return (0);
   }
   if ((m = so->so_rcv.sb_mb) != 0L)
    nextrecord = m->m_hdr.mh_nextpkt;
  }
 }

 if (m && pr->pr_flags & 0x01) {
  flags |= 0x10;
  if ((flags & 0x2) == 0)
   (void) sbdroprecord(&so->so_rcv);
 }
 if ((flags & 0x2) == 0) {
  if (m == 0) {





   so->so_rcv.sb_mb = nextrecord;
   if (so->so_rcv.sb_mb == 0L) {
    so->so_rcv.sb_mbtail = 0L;
    so->so_rcv.sb_lastrecord = 0L;
   } else if (nextrecord->m_hdr.mh_nextpkt == 0L)
    so->so_rcv.sb_lastrecord = nextrecord;
  }
  ;
  ;
  if (pr->pr_flags & 0x08 && so->so_pcb)
   (*pr->pr_usrreq)(so, 8, 0L,
      (struct mbuf *)(long)flags, 0L);
 }
 if (orig_resid == uio->uio_resid && orig_resid &&
     (flags & 0x8) == 0 && (so->so_state & 0x020) == 0) {
  { (&so->so_rcv)->sb_flags &= ~0x01; if ((&so->so_rcv)->sb_flags & 0x02) { (&so->so_rcv)->sb_flags &= ~0x02; wakeup((caddr_t)&(&so->so_rcv)->sb_flags); } };
  splx(s);
  goto restart;
 }

 if (uio_error)
  error = uio_error;

 if (flagsp)
  *flagsp |= flags;
release:
 { (&so->so_rcv)->sb_flags &= ~0x01; if ((&so->so_rcv)->sb_flags & 0x02) { (&so->so_rcv)->sb_flags &= ~0x02; wakeup((caddr_t)&(&so->so_rcv)->sb_flags); } };
 splx(s);
 return (error);
}

int
soshutdown(so, how)
 register struct socket *so;
 register int how;
{
 register struct protosw *pr = so->so_proto;

 how++;
 if (how & ~(0x0001|0x0002))
  return (22);
 if (how & 0x0001)
  sorflush(so);
 if (how & 0x0002)
  return (*pr->pr_usrreq)(so, 7, 0L, 0L, 0L);
 return (0);
}

void
sorflush(so)
 register struct socket *so;
{
 register struct sockbuf *sb = &so->so_rcv;
 register struct protosw *pr = so->so_proto;
 register int s;
 struct sockbuf asb;

 sb->sb_flags |= 0x40;
 (void) ((sb)->sb_flags & 0x01 ? (((0x0000) == 0x0000) ? sb_lock(sb) : 35) : ((sb)->sb_flags |= 0x01), 0);
 s = splraise((0x20 + ((6) << 4)));
 socantrcvmore(so);
 { (sb)->sb_flags &= ~0x01; if ((sb)->sb_flags & 0x02) { (sb)->sb_flags &= ~0x02; wakeup((caddr_t)&(sb)->sb_flags); } };
 asb = *sb;
 bzero(sb, sizeof (*sb));

 if (asb.sb_flags & 0x80) {
  sb->sb_sel.si_note = asb.sb_sel.si_note;
  sb->sb_flags = 0x80;
 }
 splx(s);
 if (pr->pr_flags & 0x10 && pr->pr_domain->dom_dispose)
  (*pr->pr_domain->dom_dispose)(asb.sb_mb);
 sbrelease(&asb);
}

int
sosetopt(so, level, optname, m0)
 register struct socket *so;
 int level, optname;
 struct mbuf *m0;
{
 int error = 0;
 register struct mbuf *m = m0;

 if (level != 0xffff) {
  if (so->so_proto && so->so_proto->pr_ctloutput)
   return ((*so->so_proto->pr_ctloutput)
      (1, so, level, optname, &m0));
  error = 42;
 } else {
  switch (optname) {

  case 0x0080:
   if (m == 0L || m->m_hdr.mh_len != sizeof (struct linger) ||
       ((struct linger *)((m)->m_hdr.mh_data))->l_linger < 0 ||
       ((struct linger *)((m)->m_hdr.mh_data))->l_linger > 0x7fff) {
    error = 22;
    goto bad;
   }
   so->so_linger = ((struct linger *)((m)->m_hdr.mh_data))->l_linger;


  case 0x0001:
  case 0x0008:
  case 0x0010:
  case 0x0040:
  case 0x0020:
  case 0x0004:
  case 0x0200:
  case 0x0100:
   if (m == 0L || m->m_hdr.mh_len < sizeof (int)) {
    error = 22;
    goto bad;
   }
   if (*((int *)((m)->m_hdr.mh_data)))
    so->so_options |= optname;
   else
    so->so_options &= ~optname;
   break;

  case 0x1001:
  case 0x1002:
  case 0x1003:
  case 0x1004:
      {
   u_long cnt;

   if (m == 0L || m->m_hdr.mh_len < sizeof (int)) {
    error = 22;
    goto bad;
   }
   cnt = *((int *)((m)->m_hdr.mh_data));
   if ((long)cnt <= 0)
    cnt = 1;
   switch (optname) {

   case 0x1001:
   case 0x1002:
    if (sbreserve(optname == 0x1001 ?
        &so->so_snd : &so->so_rcv,
        cnt) == 0) {
     error = 55;
     goto bad;
    }
    break;

   case 0x1003:
    so->so_snd.sb_lowat = (cnt > so->so_snd.sb_hiwat) ?
        so->so_snd.sb_hiwat : cnt;
    break;
   case 0x1004:
    so->so_rcv.sb_lowat = (cnt > so->so_rcv.sb_hiwat) ?
        so->so_rcv.sb_hiwat : cnt;
    break;
   }
   break;
      }

  case 0x1005:
  case 0x1006:
      {
   struct timeval *tv;
   short val;

   if (m == 0L || m->m_hdr.mh_len < sizeof (*tv)) {
    error = 22;
    goto bad;
   }
   tv = ((struct timeval *)((m)->m_hdr.mh_data));
   if (tv->tv_sec > (0x7fff - tv->tv_usec / global_tick[get_stack_id()]) / global_hz[get_stack_id()]) {
    error = 33;
    goto bad;
   }
   val = tv->tv_sec * global_hz[get_stack_id()] + tv->tv_usec / global_tick[get_stack_id()];
   if (val == 0 && tv->tv_usec != 0)
    val = 1;

   switch (optname) {

   case 0x1005:
    so->so_snd.sb_timeo = val;
    break;
   case 0x1006:
    so->so_rcv.sb_timeo = val;
    break;
   }
   break;
      }

  default:
   error = 42;
   break;
  }
  if (error == 0 && so->so_proto && so->so_proto->pr_ctloutput) {
   (void) ((*so->so_proto->pr_ctloutput)
      (1, so, level, optname, &m0));
   m = 0L;
  }
 }
bad:
 if (m)
  (void) m_free(m);
 return (error);
}

int
sogetopt(so, level, optname, mp)
 register struct socket *so;
 int level, optname;
 struct mbuf **mp;
{
 register struct mbuf *m;

 if (level != 0xffff) {
  if (so->so_proto && so->so_proto->pr_ctloutput) {
   return ((*so->so_proto->pr_ctloutput)
      (0, so, level, optname, mp));
  } else
   return (42);
 } else {
  m = m_get(0x0000, 4);
  m->m_hdr.mh_len = sizeof (int);

  switch (optname) {

  case 0x0080:
   m->m_hdr.mh_len = sizeof (struct linger);
   ((struct linger *)((m)->m_hdr.mh_data))->l_onoff =
    so->so_options & 0x0080;
   ((struct linger *)((m)->m_hdr.mh_data))->l_linger = so->so_linger;
   break;

  case 0x0040:
  case 0x0010:
  case 0x0001:
  case 0x0008:
  case 0x0004:
  case 0x0200:
  case 0x0020:
  case 0x0100:
   *((int *)((m)->m_hdr.mh_data)) = so->so_options & optname;
   break;

  case 0x1008:
   *((int *)((m)->m_hdr.mh_data)) = so->so_type;
   break;

  case 0x1007:
   *((int *)((m)->m_hdr.mh_data)) = so->so_error;
   so->so_error = 0;
   break;

  case 0x1001:
   *((int *)((m)->m_hdr.mh_data)) = so->so_snd.sb_hiwat;
   break;

  case 0x1002:
   *((int *)((m)->m_hdr.mh_data)) = so->so_rcv.sb_hiwat;
   break;

  case 0x1003:
   *((int *)((m)->m_hdr.mh_data)) = so->so_snd.sb_lowat;
   break;

  case 0x1004:
   *((int *)((m)->m_hdr.mh_data)) = so->so_rcv.sb_lowat;
   break;

  case 0x1005:
  case 0x1006:
      {
   int val = (optname == 0x1005 ?
       so->so_snd.sb_timeo : so->so_rcv.sb_timeo);

   m->m_hdr.mh_len = sizeof(struct timeval);
   ((struct timeval *)((m)->m_hdr.mh_data))->tv_sec = val / global_hz[get_stack_id()];
   ((struct timeval *)((m)->m_hdr.mh_data))->tv_usec =
       (val % global_hz[get_stack_id()]) * global_tick[get_stack_id()];
   break;
      }

  default:
   (void)m_free(m);
   return (42);
  }
  *mp = m;
  return (0);
 }
}

void
sohasoutofband(so)
 register struct socket *so;
{
 csignal(so->so_pgid, 16, so->so_siguid, so->so_sigeuid);
 selwakeup(&so->so_rcv.sb_sel);
}

int
soo_kqfilter(struct file *fp, struct knote *kn)
{
 struct socket *so = (struct socket *)kn->kn_ptr.p_fp->f_data;
 struct sockbuf *sb;
 int s;

 switch (kn->kn_kevent.filter) {
 case (-1):
  if (so->so_options & 0x0002)
   kn->kn_fop = &global_solisten_filtops[get_stack_id()];
  else
   kn->kn_fop = &global_soread_filtops[get_stack_id()];
  sb = &so->so_rcv;
  break;
 case (-2):
  kn->kn_fop = &global_sowrite_filtops[get_stack_id()];
  sb = &so->so_snd;
  break;
 default:
  return (1);
 }

 s = splraise((0x20 + ((3) << 4)));
 do { (kn)->kn_selnext.sle_next = (&sb->sb_sel.si_note)->slh_first; (&sb->sb_sel.si_note)->slh_first = (kn); } while (0);
 sb->sb_flags |= 0x80;
 splx(s);
 return (0);
}

void
filt_sordetach(struct knote *kn)
{
 struct socket *so = (struct socket *)kn->kn_ptr.p_fp->f_data;
 int s = splraise((0x20 + ((3) << 4)));

 do { if ((&so->so_rcv.sb_sel.si_note)->slh_first == (kn)) { do { ((&so->so_rcv.sb_sel.si_note))->slh_first = ((&so->so_rcv.sb_sel.si_note))->slh_first->kn_selnext.sle_next; } while (0); } else { struct knote *curelm = (&so->so_rcv.sb_sel.si_note)->slh_first; while( curelm->kn_selnext.sle_next != (kn) ) curelm = curelm->kn_selnext.sle_next; curelm->kn_selnext.sle_next = curelm->kn_selnext.sle_next->kn_selnext.sle_next; } } while (0);
 if ((((&so->so_rcv.sb_sel.si_note)->slh_first) == 0L))
  so->so_rcv.sb_flags &= ~0x80;
 splx(s);
}


int
filt_soread(struct knote *kn, long hint)
{
 struct socket *so = (struct socket *)kn->kn_ptr.p_fp->f_data;

 kn->kn_kevent.data = so->so_rcv.sb_cc;
 if (so->so_state & 0x020) {
  kn->kn_kevent.flags |= 0x8000;
  kn->kn_kevent.fflags = so->so_error;
  return (1);
 }
 if (so->so_error)
  return (1);
 if (kn->kn_sfflags & 0x0001)
  return (kn->kn_kevent.data >= kn->kn_sdata);
 return (kn->kn_kevent.data >= so->so_rcv.sb_lowat);
}

void
filt_sowdetach(struct knote *kn)
{
 struct socket *so = (struct socket *)kn->kn_ptr.p_fp->f_data;
 int s = splraise((0x20 + ((3) << 4)));

 do { if ((&so->so_snd.sb_sel.si_note)->slh_first == (kn)) { do { ((&so->so_snd.sb_sel.si_note))->slh_first = ((&so->so_snd.sb_sel.si_note))->slh_first->kn_selnext.sle_next; } while (0); } else { struct knote *curelm = (&so->so_snd.sb_sel.si_note)->slh_first; while( curelm->kn_selnext.sle_next != (kn) ) curelm = curelm->kn_selnext.sle_next; curelm->kn_selnext.sle_next = curelm->kn_selnext.sle_next->kn_selnext.sle_next; } } while (0);
 if ((((&so->so_snd.sb_sel.si_note)->slh_first) == 0L))
  so->so_snd.sb_flags &= ~0x80;
 splx(s);
}


int
filt_sowrite(struct knote *kn, long hint)
{
 struct socket *so = (struct socket *)kn->kn_ptr.p_fp->f_data;

 kn->kn_kevent.data = ((long) imin((int)((&so->so_snd)->sb_hiwat - (&so->so_snd)->sb_cc), (int)((&so->so_snd)->sb_mbmax - (&so->so_snd)->sb_mbcnt)));
 if (so->so_state & 0x010) {
  kn->kn_kevent.flags |= 0x8000;
  kn->kn_kevent.fflags = so->so_error;
  return (1);
 }
 if (so->so_error)
  return (1);
 if (((so->so_state & 0x002) == 0) &&
     (so->so_proto->pr_flags & 0x04))
  return (0);
 if (kn->kn_sfflags & 0x0001)
  return (kn->kn_kevent.data >= kn->kn_sdata);
 return (kn->kn_kevent.data >= so->so_snd.sb_lowat);
}


int
filt_solisten(struct knote *kn, long hint)
{
 struct socket *so = (struct socket *)kn->kn_ptr.p_fp->f_data;

 kn->kn_kevent.data = so->so_qlen;
 return (so->so_qlen != 0);
}

