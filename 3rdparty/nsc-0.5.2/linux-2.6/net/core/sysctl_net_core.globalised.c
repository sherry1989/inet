# 1 "linux-2.6/net/core/sysctl_net_core.c"
# 1 "/home/cmcc/omnet_workspace/inet/3rdparty/nsc-0.5.2//"
# 1 "<built-in>"
# 1 "<command-line>"
# 1 "linux-2.6/net/core/sysctl_net_core.c"







# 1 "linux-2.6/include/linux/mm.h" 1



# 1 "linux-2.6/include/linux/sched.h" 1



# 1 "linux-2.6/include/asm/param.h" 1
# 5 "linux-2.6/include/linux/sched.h" 2

# 1 "linux-2.6/include/linux/config.h" 1



# 1 "linux-2.6/include/linux/autoconf.h" 1
# 5 "linux-2.6/include/linux/config.h" 2
# 7 "linux-2.6/include/linux/sched.h" 2
# 1 "linux-2.6/include/linux/capability.h" 1
# 16 "linux-2.6/include/linux/capability.h"
# 1 "linux-2.6/include/linux/types.h" 1
# 13 "linux-2.6/include/linux/types.h"
# 1 "linux-2.6/include/linux/posix_types.h" 1



# 1 "linux-2.6/include/linux/stddef.h" 1



# 1 "linux-2.6/include/linux/compiler.h" 1
# 38 "linux-2.6/include/linux/compiler.h"
# 1 "linux-2.6/include/linux/compiler-gcc+.h" 1






# 1 "linux-2.6/include/linux/compiler-gcc.h" 1
# 8 "linux-2.6/include/linux/compiler-gcc+.h" 2
# 39 "linux-2.6/include/linux/compiler.h" 2
# 5 "linux-2.6/include/linux/stddef.h" 2
# 5 "linux-2.6/include/linux/posix_types.h" 2
# 36 "linux-2.6/include/linux/posix_types.h"
#include "num_stacks.h"
typedef struct {
 unsigned long fds_bits [(1024/(8 * sizeof(unsigned long)))];
} __kernel_fd_set;


typedef void (*__kernel_sighandler_t)(int);


typedef int __kernel_key_t;
typedef int __kernel_mqd_t;

# 1 "linux-2.6/include/asm/posix_types.h" 1
# 10 "linux-2.6/include/asm/posix_types.h"
typedef unsigned long __kernel_ino_t;
typedef unsigned short __kernel_mode_t;
typedef unsigned short __kernel_nlink_t;
typedef long __kernel_off_t;
typedef int __kernel_pid_t;
typedef unsigned short __kernel_ipc_pid_t;
typedef unsigned short __kernel_uid_t;
typedef unsigned short __kernel_gid_t;
typedef unsigned int __kernel_size_t;
typedef int __kernel_ssize_t;
typedef int __kernel_ptrdiff_t;
typedef long __kernel_time_t;
typedef long __kernel_suseconds_t;
typedef long __kernel_clock_t;
typedef int __kernel_timer_t;
typedef int __kernel_clockid_t;
typedef int __kernel_daddr_t;
typedef char * __kernel_caddr_t;
typedef unsigned short __kernel_uid16_t;
typedef unsigned short __kernel_gid16_t;
typedef unsigned int __kernel_uid32_t;
typedef unsigned int __kernel_gid32_t;

typedef unsigned short __kernel_old_uid_t;
typedef unsigned short __kernel_old_gid_t;
typedef unsigned short __kernel_old_dev_t;


typedef long long __kernel_loff_t;


typedef struct {

 int val[2];



} __kernel_fsid_t;
# 48 "linux-2.6/include/linux/posix_types.h" 2
# 14 "linux-2.6/include/linux/types.h" 2
# 1 "linux-2.6/include/asm/types.h" 1





typedef unsigned short umode_t;






typedef __signed__ char __s8;
typedef unsigned char __u8;

typedef __signed__ short __s16;
typedef unsigned short __u16;

typedef __signed__ int __s32;
typedef unsigned int __u32;


typedef __signed__ long long __s64;
typedef unsigned long long __u64;
# 40 "linux-2.6/include/asm/types.h"
typedef signed char s8;
typedef unsigned char u8;

typedef signed short s16;
typedef unsigned short u16;

typedef signed int s32;
typedef unsigned int u32;

typedef signed long long s64;
typedef unsigned long long u64;






typedef u32 dma_addr_t;

typedef u64 dma64_addr_t;


typedef u64 sector_t;



typedef unsigned short kmem_bufctl_t;
# 15 "linux-2.6/include/linux/types.h" 2



typedef __u32 __kernel_dev_t;

typedef __kernel_fd_set fd_set;
typedef __kernel_dev_t dev_t;
typedef __kernel_ino_t ino_t;
typedef __kernel_mode_t mode_t;
typedef __kernel_nlink_t nlink_t;
typedef __kernel_off_t off_t;
typedef __kernel_pid_t pid_t;
typedef __kernel_daddr_t daddr_t;
typedef __kernel_key_t key_t;
typedef __kernel_suseconds_t suseconds_t;
typedef __kernel_timer_t timer_t;
typedef __kernel_clockid_t clockid_t;
typedef __kernel_mqd_t mqd_t;


typedef __kernel_uid32_t uid_t;
typedef __kernel_gid32_t gid_t;
typedef __kernel_uid16_t uid16_t;
typedef __kernel_gid16_t gid16_t;



typedef __kernel_old_uid_t old_uid_t;
typedef __kernel_old_gid_t old_gid_t;
# 55 "linux-2.6/include/linux/types.h"
typedef __kernel_loff_t loff_t;
# 64 "linux-2.6/include/linux/types.h"
typedef __kernel_size_t size_t;




typedef __kernel_ssize_t ssize_t;




typedef __kernel_ptrdiff_t ptrdiff_t;




typedef __kernel_time_t time_t;




typedef __kernel_clock_t clock_t;




typedef __kernel_caddr_t caddr_t;



typedef unsigned char u_char;
typedef unsigned short u_short;
typedef unsigned int u_int;
typedef unsigned long u_long;


typedef unsigned char unchar;
typedef unsigned short ushort;
typedef unsigned int uint;
typedef unsigned long ulong;




typedef __u8 u_int8_t;
typedef __s8 int8_t;
typedef __u16 u_int16_t;
typedef __s16 int16_t;
typedef __u32 u_int32_t;
typedef __s32 int32_t;



typedef __u8 uint8_t;
typedef __u16 uint16_t;
typedef __u32 uint32_t;


typedef __u64 uint64_t;
typedef __u64 u_int64_t;
typedef __s64 int64_t;
# 156 "linux-2.6/include/linux/types.h"
typedef __u16 __le16;
typedef __u16 __be16;
typedef __u32 __le32;
typedef __u32 __be32;

typedef __u64 __le64;
typedef __u64 __be64;


struct ustat {
 __kernel_daddr_t f_tfree;
 __kernel_ino_t f_tinode;
 char f_fname[6];
 char f_fpack[6];
};
# 17 "linux-2.6/include/linux/capability.h" 2
# 32 "linux-2.6/include/linux/capability.h"
typedef struct __user_cap_header_struct {
 __u32 version;
 int pid;
} *cap_user_header_t;

typedef struct __user_cap_data_struct {
        __u32 effective;
        __u32 permitted;
        __u32 inheritable;
} *cap_user_data_t;



# 1 "linux-2.6/include/linux/spinlock.h" 1
# 9 "linux-2.6/include/linux/spinlock.h"
# 1 "linux-2.6/include/linux/preempt.h" 1
# 10 "linux-2.6/include/linux/preempt.h"
# 1 "linux-2.6/include/linux/linkage.h" 1




# 1 "linux-2.6/include/asm/linkage.h" 1
# 6 "linux-2.6/include/linux/linkage.h" 2
# 11 "linux-2.6/include/linux/preempt.h" 2
# 10 "linux-2.6/include/linux/spinlock.h" 2


# 1 "linux-2.6/include/linux/thread_info.h" 1
# 13 "linux-2.6/include/linux/thread_info.h"
struct restart_block {
 long (*fn)(struct restart_block *);
 unsigned long arg0, arg1, arg2, arg3;
};

extern long do_no_restart_syscall(struct restart_block *parm);

# 1 "linux-2.6/include/linux/bitops.h" 1



# 1 "linux-2.6/include/asm/bitops.h" 1
# 42 "linux-2.6/include/asm/bitops.h"
static inline  __attribute__((always_inline)) void set_bit(int nr, volatile unsigned long * addr)
{
 __asm__ __volatile__( ""
  "btsl %1,%0"
  :"=m" ((*(volatile long *) addr))
  :"Ir" (nr));
}
# 59 "linux-2.6/include/asm/bitops.h"
static inline  __attribute__((always_inline)) void __set_bit(int nr, volatile unsigned long * addr)
{
 __asm__(
  "btsl %1,%0"
  :"=m" ((*(volatile long *) addr))
  :"Ir" (nr));
}
# 77 "linux-2.6/include/asm/bitops.h"
static inline  __attribute__((always_inline)) void clear_bit(int nr, volatile unsigned long * addr)
{
 __asm__ __volatile__( ""
  "btrl %1,%0"
  :"=m" ((*(volatile long *) addr))
  :"Ir" (nr));
}

static inline  __attribute__((always_inline)) void __clear_bit(int nr, volatile unsigned long * addr)
{
 __asm__ __volatile__(
  "btrl %1,%0"
  :"=m" ((*(volatile long *) addr))
  :"Ir" (nr));
}
# 104 "linux-2.6/include/asm/bitops.h"
static inline  __attribute__((always_inline)) void __change_bit(int nr, volatile unsigned long * addr)
{
 __asm__ __volatile__(
  "btcl %1,%0"
  :"=m" ((*(volatile long *) addr))
  :"Ir" (nr));
}
# 122 "linux-2.6/include/asm/bitops.h"
static inline  __attribute__((always_inline)) void change_bit(int nr, volatile unsigned long * addr)
{
 __asm__ __volatile__( ""
  "btcl %1,%0"
  :"=m" ((*(volatile long *) addr))
  :"Ir" (nr));
}
# 139 "linux-2.6/include/asm/bitops.h"
static inline  __attribute__((always_inline)) int test_and_set_bit(int nr, volatile unsigned long * addr)
{
 int oldbit;

 __asm__ __volatile__( ""
  "btsl %2,%1\n\tsbbl %0,%0"
  :"=r" (oldbit),"=m" ((*(volatile long *) addr))
  :"Ir" (nr) : "memory");
 return oldbit;
}
# 159 "linux-2.6/include/asm/bitops.h"
static inline  __attribute__((always_inline)) int __test_and_set_bit(int nr, volatile unsigned long * addr)
{
 int oldbit;

 __asm__(
  "btsl %2,%1\n\tsbbl %0,%0"
  :"=r" (oldbit),"=m" ((*(volatile long *) addr))
  :"Ir" (nr));
 return oldbit;
}
# 179 "linux-2.6/include/asm/bitops.h"
static inline  __attribute__((always_inline)) int test_and_clear_bit(int nr, volatile unsigned long * addr)
{
 int oldbit;

 __asm__ __volatile__( ""
  "btrl %2,%1\n\tsbbl %0,%0"
  :"=r" (oldbit),"=m" ((*(volatile long *) addr))
  :"Ir" (nr) : "memory");
 return oldbit;
}
# 199 "linux-2.6/include/asm/bitops.h"
static inline  __attribute__((always_inline)) int __test_and_clear_bit(int nr, volatile unsigned long *addr)
{
 int oldbit;

 __asm__(
  "btrl %2,%1\n\tsbbl %0,%0"
  :"=r" (oldbit),"=m" ((*(volatile long *) addr))
  :"Ir" (nr));
 return oldbit;
}


static inline  __attribute__((always_inline)) int __test_and_change_bit(int nr, volatile unsigned long *addr)
{
 int oldbit;

 __asm__ __volatile__(
  "btcl %2,%1\n\tsbbl %0,%0"
  :"=r" (oldbit),"=m" ((*(volatile long *) addr))
  :"Ir" (nr) : "memory");
 return oldbit;
}
# 230 "linux-2.6/include/asm/bitops.h"
static inline  __attribute__((always_inline)) int test_and_change_bit(int nr, volatile unsigned long* addr)
{
 int oldbit;

 __asm__ __volatile__( ""
  "btcl %2,%1\n\tsbbl %0,%0"
  :"=r" (oldbit),"=m" ((*(volatile long *) addr))
  :"Ir" (nr) : "memory");
 return oldbit;
}
# 250 "linux-2.6/include/asm/bitops.h"
static inline  __attribute__((always_inline)) int constant_test_bit(int nr, const volatile unsigned long *addr)
{
 return ((1UL << (nr & 31)) & (addr[nr >> 5])) != 0;
}

static inline  __attribute__((always_inline)) int variable_test_bit(int nr, const volatile unsigned long * addr)
{
 int oldbit;

 __asm__ __volatile__(
  "btl %2,%1\n\tsbbl %0,%0"
  :"=r" (oldbit)
  :"m" ((*(volatile long *) addr)),"Ir" (nr));
 return oldbit;
}
# 281 "linux-2.6/include/asm/bitops.h"
static inline  __attribute__((always_inline)) int find_first_zero_bit(const unsigned long *addr, unsigned size)
{
 int d0, d1, d2;
 int res;

 if (!size)
  return 0;

 __asm__ __volatile__(
  "movl $-1,%%eax\n\t"
  "xorl %%edx,%%edx\n\t"
  "repe; scasl\n\t"
  "je 1f\n\t"
  "xorl -4(%%edi),%%eax\n\t"
  "subl $4,%%edi\n\t"
  "bsfl %%eax,%%edx\n"
  "1:\tsubl %%ebx,%%edi\n\t"
  "shll $3,%%edi\n\t"
  "addl %%edi,%%edx"
  :"=d" (res), "=&c" (d0), "=&D" (d1), "=&a" (d2)
  :"1" ((size + 31) >> 5), "2" (addr), "b" (addr) : "memory");
 return res;
}







int find_next_zero_bit(const unsigned long *addr, int size, int offset);
# 321 "linux-2.6/include/asm/bitops.h"
static inline  __attribute__((always_inline)) int find_first_bit(const unsigned long *addr, unsigned size)
{
 int d0, d1;
 int res;


 __asm__ __volatile__(
  "xorl %%eax,%%eax\n\t"
  "repe; scasl\n\t"
  "jz 1f\n\t"
  "leal -4(%%edi),%%edi\n\t"
  "bsfl (%%edi),%%eax\n"
  "1:\tsubl %%ebx,%%edi\n\t"
  "shll $3,%%edi\n\t"
  "addl %%edi,%%eax"
  :"=a" (res), "=&c" (d0), "=&D" (d1)
  :"1" ((size + 31) >> 5), "2" (addr), "b" (addr) : "memory");
 return res;
}







int find_next_bit(const unsigned long *addr, int size, int offset);







static inline  __attribute__((always_inline)) unsigned long ffz(unsigned long word)
{
 __asm__("bsfl %1,%0"
  :"=r" (word)
  :"r" (~word));
 return word;
}







static inline  __attribute__((always_inline)) unsigned long __ffs(unsigned long word)
{
 __asm__("bsfl %1,%0"
  :"=r" (word)
  :"rm" (word));
 return word;
}
# 391 "linux-2.6/include/asm/bitops.h"
static inline  __attribute__((always_inline)) int sched_find_first_bit(const unsigned long *b)
{
 if (__builtin_expect(!!(b[0]), 0))
  return __ffs(b[0]);
 if (__builtin_expect(!!(b[1]), 0))
  return __ffs(b[1]) + 32;
 if (__builtin_expect(!!(b[2]), 0))
  return __ffs(b[2]) + 64;
 if (b[3])
  return __ffs(b[3]) + 96;
 return __ffs(b[4]) + 128;
}
# 412 "linux-2.6/include/asm/bitops.h"
static inline  __attribute__((always_inline)) int ffs(int x)
{
 int r;

 __asm__("bsfl %1,%0\n\t"
  "jnz 1f\n\t"
  "movl $-1,%0\n"
  "1:" : "=r" (r) : "rm" (x));
 return r+1;
}
# 5 "linux-2.6/include/linux/bitops.h" 2







static inline  __attribute__((always_inline)) int generic_ffs(int x)
{
 int r = 1;

 if (!x)
  return 0;
 if (!(x & 0xffff)) {
  x >>= 16;
  r += 16;
 }
 if (!(x & 0xff)) {
  x >>= 8;
  r += 8;
 }
 if (!(x & 0xf)) {
  x >>= 4;
  r += 4;
 }
 if (!(x & 3)) {
  x >>= 2;
  r += 2;
 }
 if (!(x & 1)) {
  x >>= 1;
  r += 1;
 }
 return r;
}





static __inline__  __attribute__((always_inline)) int generic_fls(int x)
{
 int r = 32;

 if (!x)
  return 0;
 if (!(x & 0xffff0000u)) {
  x <<= 16;
  r -= 16;
 }
 if (!(x & 0xff000000u)) {
  x <<= 8;
  r -= 8;
 }
 if (!(x & 0xf0000000u)) {
  x <<= 4;
  r -= 4;
 }
 if (!(x & 0xc0000000u)) {
  x <<= 2;
  r -= 2;
 }
 if (!(x & 0x80000000u)) {
  x <<= 1;
  r -= 1;
 }
 return r;
}

static __inline__  __attribute__((always_inline)) int get_bitmask_order(unsigned int count)
{
 int order;

 order = generic_fls(count);
 return order;
}






static inline  __attribute__((always_inline)) unsigned int generic_hweight32(unsigned int w)
{
        unsigned int res = (w & 0x55555555) + ((w >> 1) & 0x55555555);
        res = (res & 0x33333333) + ((res >> 2) & 0x33333333);
        res = (res & 0x0F0F0F0F) + ((res >> 4) & 0x0F0F0F0F);
        res = (res & 0x00FF00FF) + ((res >> 8) & 0x00FF00FF);
        return (res & 0x0000FFFF) + ((res >> 16) & 0x0000FFFF);
}

static inline  __attribute__((always_inline)) unsigned int generic_hweight16(unsigned int w)
{
        unsigned int res = (w & 0x5555) + ((w >> 1) & 0x5555);
        res = (res & 0x3333) + ((res >> 2) & 0x3333);
        res = (res & 0x0F0F) + ((res >> 4) & 0x0F0F);
        return (res & 0x00FF) + ((res >> 8) & 0x00FF);
}

static inline  __attribute__((always_inline)) unsigned int generic_hweight8(unsigned int w)
{
        unsigned int res = (w & 0x55) + ((w >> 1) & 0x55);
        res = (res & 0x33) + ((res >> 2) & 0x33);
        return (res & 0x0F) + ((res >> 4) & 0x0F);
}

static inline  __attribute__((always_inline)) unsigned long generic_hweight64(__u64 w)
{

 return generic_hweight32((unsigned int)(w >> 32)) +
    generic_hweight32((unsigned int)w);
# 125 "linux-2.6/include/linux/bitops.h"
}

static inline  __attribute__((always_inline)) unsigned long hweight_long(unsigned long w)
{
 return sizeof(w) == 4 ? generic_hweight32(w) : generic_hweight64(w);
}
# 21 "linux-2.6/include/linux/thread_info.h" 2
# 1 "linux-2.6/include/asm/thread_info.h" 1
# 13 "linux-2.6/include/asm/thread_info.h"
# 1 "linux-2.6/include/asm/page.h" 1
# 42 "linux-2.6/include/asm/page.h"
typedef  int  _GLOBAL_0_T; extern  _GLOBAL_0_T  global_nx_enabled[NUM_STACKS];   
# 52 "linux-2.6/include/asm/page.h"
typedef struct { unsigned long pte_low; } pte_t;
typedef struct { unsigned long pmd; } pmd_t;
typedef struct { unsigned long pgd; } pgd_t;
typedef struct { unsigned long pgprot; } pgprot_t;
# 103 "linux-2.6/include/asm/page.h"
typedef  unsigned int   _GLOBAL_1_T; extern  _GLOBAL_1_T  global___VMALLOC_RESERVE[NUM_STACKS];    


static __inline__  __attribute__((always_inline)) int get_order(unsigned long size)
{
 int order;

 size = (size-1) >> (12 -1);
 order = -1;
 do {
  size >>= 1;
  order++;
 } while (size);
 return order;
}

typedef  int  _GLOBAL_2_T; extern  _GLOBAL_2_T  global_sysctl_legacy_va_layout[NUM_STACKS];   
# 14 "linux-2.6/include/asm/thread_info.h" 2


# 1 "linux-2.6/include/asm/processor.h" 1
# 10 "linux-2.6/include/asm/processor.h"
# 1 "linux-2.6/include/asm/vm86.h" 1
# 68 "linux-2.6/include/asm/vm86.h"
struct vm86_regs {



 long ebx;
 long ecx;
 long edx;
 long esi;
 long edi;
 long ebp;
 long eax;
 long __null_ds;
 long __null_es;
 long __null_fs;
 long __null_gs;
 long orig_eax;
 long eip;
 unsigned short cs, __csh;
 long eflags;
 long esp;
 unsigned short ss, __ssh;



 unsigned short es, __esh;
 unsigned short ds, __dsh;
 unsigned short fs, __fsh;
 unsigned short gs, __gsh;
};

struct revectored_struct {
 unsigned long __map[8];
};

struct vm86_struct {
 struct vm86_regs regs;
 unsigned long flags;
 unsigned long screen_bitmap;
 unsigned long cpu_type;
 struct revectored_struct int_revectored;
 struct revectored_struct int21_revectored;
};






struct vm86plus_info_struct {
 unsigned long force_return_for_pic:1;
 unsigned long vm86dbg_active:1;
 unsigned long vm86dbg_TFpendig:1;
 unsigned long unused:28;
 unsigned long is_vm86pus:1;
 unsigned char vm86dbg_intxxtab[32];
};

struct vm86plus_struct {
 struct vm86_regs regs;
 unsigned long flags;
 unsigned long screen_bitmap;
 unsigned long cpu_type;
 struct revectored_struct int_revectored;
 struct revectored_struct int21_revectored;
 struct vm86plus_info_struct vm86plus;
};
# 145 "linux-2.6/include/asm/vm86.h"
struct kernel_vm86_regs {



 long ebx;
 long ecx;
 long edx;
 long esi;
 long edi;
 long ebp;
 long eax;
 long __null_ds;
 long __null_es;
 long orig_eax;
 long eip;
 unsigned short cs, __csh;
 long eflags;
 long esp;
 unsigned short ss, __ssh;



 unsigned short es, __esh;
 unsigned short ds, __dsh;
 unsigned short fs, __fsh;
 unsigned short gs, __gsh;
};

struct kernel_vm86_struct {
 struct kernel_vm86_regs regs;
# 184 "linux-2.6/include/asm/vm86.h"
 unsigned long flags;
 unsigned long screen_bitmap;
 unsigned long cpu_type;
 struct revectored_struct int_revectored;
 struct revectored_struct int21_revectored;
 struct vm86plus_info_struct vm86plus;
 struct pt_regs *regs32;
# 201 "linux-2.6/include/asm/vm86.h"
};

void handle_vm86_fault(struct kernel_vm86_regs *, long);
int handle_vm86_trap(struct kernel_vm86_regs *, long, int);
# 11 "linux-2.6/include/asm/processor.h" 2
# 1 "linux-2.6/include/asm/math_emu.h" 1



# 1 "linux-2.6/include/asm/sigcontext.h" 1
# 20 "linux-2.6/include/asm/sigcontext.h"
struct _fpreg {
 unsigned short significand[4];
 unsigned short exponent;
};

struct _fpxreg {
 unsigned short significand[4];
 unsigned short exponent;
 unsigned short padding[3];
};

struct _xmmreg {
 unsigned long element[4];
};

struct _fpstate {

 unsigned long cw;
 unsigned long sw;
 unsigned long tag;
 unsigned long ipoff;
 unsigned long cssel;
 unsigned long dataoff;
 unsigned long datasel;
 struct _fpreg _st[8];
 unsigned short status;
 unsigned short magic;


 unsigned long _fxsr_env[6];
 unsigned long mxcsr;
 unsigned long reserved;
 struct _fpxreg _fxsr_st[8];
 struct _xmmreg _xmm[8];
 unsigned long padding[56];
};



struct sigcontext {
 unsigned short gs, __gsh;
 unsigned short fs, __fsh;
 unsigned short es, __esh;
 unsigned short ds, __dsh;
 unsigned long edi;
 unsigned long esi;
 unsigned long ebp;
 unsigned long esp;
 unsigned long ebx;
 unsigned long edx;
 unsigned long ecx;
 unsigned long eax;
 unsigned long trapno;
 unsigned long err;
 unsigned long eip;
 unsigned short cs, __csh;
 unsigned long eflags;
 unsigned long esp_at_signal;
 unsigned short ss, __ssh;
 struct _fpstate * fpstate;
 unsigned long oldmask;
 unsigned long cr2;
};
# 5 "linux-2.6/include/asm/math_emu.h" 2

int restore_i387_soft(void *s387, struct _fpstate *buf);
int save_i387_soft(void *s387, struct _fpstate *buf);





struct info {
 long ___orig_eip;
 long ___ebx;
 long ___ecx;
 long ___edx;
 long ___esi;
 long ___edi;
 long ___ebp;
 long ___eax;
 long ___ds;
 long ___es;
 long ___orig_eax;
 long ___eip;
 long ___cs;
 long ___eflags;
 long ___esp;
 long ___ss;
 long ___vm86_es;
 long ___vm86_ds;
 long ___vm86_fs;
 long ___vm86_gs;
};
# 12 "linux-2.6/include/asm/processor.h" 2
# 1 "linux-2.6/include/asm/segment.h" 1
# 13 "linux-2.6/include/asm/processor.h" 2



# 1 "linux-2.6/include/asm/cpufeature.h" 1
# 17 "linux-2.6/include/asm/processor.h" 2
# 1 "linux-2.6/include/asm/msr.h" 1
# 27 "linux-2.6/include/asm/msr.h"
static inline  __attribute__((always_inline)) void wrmsrl (unsigned long msr, unsigned long long val)
{
 unsigned long lo, hi;
 lo = (unsigned long) val;
 hi = val >> 32;
 __asm__ __volatile__("wrmsr" : : "c" (msr), "a" (lo), "d" (hi));
}
# 18 "linux-2.6/include/asm/processor.h" 2
# 1 "linux-2.6/include/asm/system.h" 1




# 1 "linux-2.6/include/linux/kernel.h" 1
# 10 "linux-2.6/include/linux/kernel.h"
# 1 "/usr/lib/gcc/i686-linux-gnu/4.6/include/stdarg.h" 1 3 4
# 40 "/usr/lib/gcc/i686-linux-gnu/4.6/include/stdarg.h" 3 4
typedef __builtin_va_list __gnuc_va_list;
# 102 "/usr/lib/gcc/i686-linux-gnu/4.6/include/stdarg.h" 3 4
typedef __gnuc_va_list va_list;
# 11 "linux-2.6/include/linux/kernel.h" 2





# 1 "linux-2.6/include/asm/byteorder.h" 1
# 14 "linux-2.6/include/asm/byteorder.h"
static __inline__   __attribute__((always_inline)) __attribute__((__const__)) __u32 ___arch__swab32(__u32 x)
{

 __asm__("bswap %0" : "=r" (x) : "0" (x));







 return x;
}

static __inline__   __attribute__((always_inline)) __attribute__((__const__)) __u64 ___arch__swab64(__u64 val)
{
 union {
  struct { __u32 a,b; } s;
  __u64 u;
 } v;
 v.u = val;

 asm("bswapl %0 ; bswapl %1 ; xchgl %0,%1"
     : "=r" (v.s.a), "=r" (v.s.b)
     : "0" (v.s.a), "1" (v.s.b));





 return v.u;
}
# 57 "linux-2.6/include/asm/byteorder.h"
# 1 "linux-2.6/include/linux/byteorder/little_endian.h" 1
# 12 "linux-2.6/include/linux/byteorder/little_endian.h"
# 1 "linux-2.6/include/linux/byteorder/swab.h" 1
# 133 "linux-2.6/include/linux/byteorder/swab.h"
static __inline__   __attribute__((always_inline)) __attribute__((__const__)) __u16 __fswab16(__u16 x)
{
 return ({ __u16 __tmp = (x) ; ({ __u16 __x = (__tmp); ((__u16)( (((__u16)(__x) & (__u16)0x00ffU) << 8) | (((__u16)(__x) & (__u16)0xff00U) >> 8) )); }); });
}
static __inline__  __attribute__((always_inline)) __u16 __swab16p(const __u16 *x)
{
 return ({ __u16 __tmp = (*(x)) ; ({ __u16 __x = (__tmp); ((__u16)( (((__u16)(__x) & (__u16)0x00ffU) << 8) | (((__u16)(__x) & (__u16)0xff00U) >> 8) )); }); });
}
static __inline__  __attribute__((always_inline)) void __swab16s(__u16 *addr)
{
 do { *(addr) = ({ __u16 __tmp = (*((addr))) ; ({ __u16 __x = (__tmp); ((__u16)( (((__u16)(__x) & (__u16)0x00ffU) << 8) | (((__u16)(__x) & (__u16)0xff00U) >> 8) )); }); }); } while (0);
}

static __inline__   __attribute__((always_inline)) __attribute__((__const__)) __u32 __fswab32(__u32 x)
{
 return ___arch__swab32(x);
}
static __inline__  __attribute__((always_inline)) __u32 __swab32p(const __u32 *x)
{
 return ___arch__swab32(*(x));
}
static __inline__  __attribute__((always_inline)) void __swab32s(__u32 *addr)
{
 do { *(addr) = ___arch__swab32(*((addr))); } while (0);
}


static __inline__   __attribute__((always_inline)) __attribute__((__const__)) __u64 __fswab64(__u64 x)
{





 return ___arch__swab64(x);

}
static __inline__  __attribute__((always_inline)) __u64 __swab64p(const __u64 *x)
{
 return ___arch__swab64(*(x));
}
static __inline__  __attribute__((always_inline)) void __swab64s(__u64 *addr)
{
 do { *(addr) = ___arch__swab64(*((addr))); } while (0);
}
# 13 "linux-2.6/include/linux/byteorder/little_endian.h" 2
# 43 "linux-2.6/include/linux/byteorder/little_endian.h"
static inline  __attribute__((always_inline)) __le64 __cpu_to_le64p(const __u64 *p)
{
 return ( __le64)*p;
}
static inline  __attribute__((always_inline)) __u64 __le64_to_cpup(const __le64 *p)
{
 return ( __u64)*p;
}
static inline  __attribute__((always_inline)) __le32 __cpu_to_le32p(const __u32 *p)
{
 return ( __le32)*p;
}
static inline  __attribute__((always_inline)) __u32 __le32_to_cpup(const __le32 *p)
{
 return ( __u32)*p;
}
static inline  __attribute__((always_inline)) __le16 __cpu_to_le16p(const __u16 *p)
{
 return ( __le16)*p;
}
static inline  __attribute__((always_inline)) __u16 __le16_to_cpup(const __le16 *p)
{
 return ( __u16)*p;
}
static inline  __attribute__((always_inline)) __be64 __cpu_to_be64p(const __u64 *p)
{
 return ( __be64)__swab64p(p);
}
static inline  __attribute__((always_inline)) __u64 __be64_to_cpup(const __be64 *p)
{
 return __swab64p((__u64 *)p);
}
static inline  __attribute__((always_inline)) __be32 __cpu_to_be32p(const __u32 *p)
{
 return ( __be32)__swab32p(p);
}
static inline  __attribute__((always_inline)) __u32 __be32_to_cpup(const __be32 *p)
{
 return __swab32p((__u32 *)p);
}
static inline  __attribute__((always_inline)) __be16 __cpu_to_be16p(const __u16 *p)
{
 return ( __be16)__swab16p(p);
}
static inline  __attribute__((always_inline)) __u16 __be16_to_cpup(const __be16 *p)
{
 return __swab16p((__u16 *)p);
}
# 104 "linux-2.6/include/linux/byteorder/little_endian.h"
# 1 "linux-2.6/include/linux/byteorder/generic.h" 1
# 150 "linux-2.6/include/linux/byteorder/generic.h"
extern __u32 ntohl(__be32);
extern __be32 htonl(__u32);
extern __u16 ntohs(__be16);
extern __be16 htons(__u16);
# 105 "linux-2.6/include/linux/byteorder/little_endian.h" 2
# 58 "linux-2.6/include/asm/byteorder.h" 2
# 17 "linux-2.6/include/linux/kernel.h" 2
# 1 "linux-2.6/include/asm/bug.h" 1
# 23 "linux-2.6/include/asm/bug.h"
# 1 "linux-2.6/include/asm-generic/bug.h" 1
# 24 "linux-2.6/include/asm/bug.h" 2
# 18 "linux-2.6/include/linux/kernel.h" 2
# 40 "linux-2.6/include/linux/kernel.h"
typedef  int  _GLOBAL_3_T; extern  _GLOBAL_3_T  _GLOBAL_0_console_printk_I [ ] ; extern  _GLOBAL_3_T  _GLOBAL_1_console_printk_I [ ] ; extern  _GLOBAL_3_T  _GLOBAL_2_console_printk_I [ ] ; extern  _GLOBAL_3_T  _GLOBAL_3_console_printk_I [ ] ; extern  _GLOBAL_3_T  _GLOBAL_4_console_printk_I [ ] ; extern  _GLOBAL_3_T  _GLOBAL_5_console_printk_I [ ] ; extern  _GLOBAL_3_T  _GLOBAL_6_console_printk_I [ ] ; extern  _GLOBAL_3_T  _GLOBAL_7_console_printk_I [ ] ; extern  _GLOBAL_3_T  _GLOBAL_8_console_printk_I [ ] ; extern  _GLOBAL_3_T  _GLOBAL_9_console_printk_I [ ] ; extern  _GLOBAL_3_T  _GLOBAL_10_console_printk_I [ ] ; extern  _GLOBAL_3_T  _GLOBAL_11_console_printk_I [ ] ; extern  _GLOBAL_3_T  _GLOBAL_12_console_printk_I [ ] ; extern  _GLOBAL_3_T  _GLOBAL_13_console_printk_I [ ] ; extern  _GLOBAL_3_T  _GLOBAL_14_console_printk_I [ ] ; extern  _GLOBAL_3_T  _GLOBAL_15_console_printk_I [ ] ; extern  _GLOBAL_3_T  _GLOBAL_16_console_printk_I [ ] ; extern  _GLOBAL_3_T  _GLOBAL_17_console_printk_I [ ] ; extern  _GLOBAL_3_T  _GLOBAL_18_console_printk_I [ ] ; extern  _GLOBAL_3_T  _GLOBAL_19_console_printk_I [ ] ; extern  _GLOBAL_3_T  _GLOBAL_20_console_printk_I [ ] ; extern  _GLOBAL_3_T  _GLOBAL_21_console_printk_I [ ] ; extern  _GLOBAL_3_T  _GLOBAL_22_console_printk_I [ ] ; extern  _GLOBAL_3_T  _GLOBAL_23_console_printk_I [ ] ; extern  _GLOBAL_3_T  _GLOBAL_24_console_printk_I [ ] ; extern  _GLOBAL_3_T  _GLOBAL_25_console_printk_I [ ] ; extern  _GLOBAL_3_T  _GLOBAL_26_console_printk_I [ ] ; extern  _GLOBAL_3_T  _GLOBAL_27_console_printk_I [ ] ; extern  _GLOBAL_3_T  _GLOBAL_28_console_printk_I [ ] ; extern  _GLOBAL_3_T  _GLOBAL_29_console_printk_I [ ] ; extern  _GLOBAL_3_T  _GLOBAL_30_console_printk_I [ ] ; extern  _GLOBAL_3_T  _GLOBAL_31_console_printk_I [ ] ; extern  _GLOBAL_3_T  _GLOBAL_32_console_printk_I [ ] ; extern  _GLOBAL_3_T  _GLOBAL_33_console_printk_I [ ] ; extern  _GLOBAL_3_T  _GLOBAL_34_console_printk_I [ ] ; extern  _GLOBAL_3_T  _GLOBAL_35_console_printk_I [ ] ; extern  _GLOBAL_3_T  _GLOBAL_36_console_printk_I [ ] ; extern  _GLOBAL_3_T  _GLOBAL_37_console_printk_I [ ] ; extern  _GLOBAL_3_T  _GLOBAL_38_console_printk_I [ ] ; extern  _GLOBAL_3_T  _GLOBAL_39_console_printk_I [ ] ; extern  _GLOBAL_3_T  _GLOBAL_40_console_printk_I [ ] ; extern  _GLOBAL_3_T  _GLOBAL_41_console_printk_I [ ] ; extern  _GLOBAL_3_T  _GLOBAL_42_console_printk_I [ ] ; extern  _GLOBAL_3_T  _GLOBAL_43_console_printk_I [ ] ; extern  _GLOBAL_3_T  _GLOBAL_44_console_printk_I [ ] ; extern  _GLOBAL_3_T  _GLOBAL_45_console_printk_I [ ] ; extern  _GLOBAL_3_T  _GLOBAL_46_console_printk_I [ ] ; extern  _GLOBAL_3_T  _GLOBAL_47_console_printk_I [ ] ; extern  _GLOBAL_3_T  _GLOBAL_48_console_printk_I [ ] ; extern  _GLOBAL_3_T  _GLOBAL_49_console_printk_I [ ] ; static __attribute__ ((unused)) __typeof__(_GLOBAL_0_console_printk_I) *_GLOBAL_console_printk_0_A[NUM_STACKS] = { &_GLOBAL_0_console_printk_I, &_GLOBAL_1_console_printk_I, &_GLOBAL_2_console_printk_I, &_GLOBAL_3_console_printk_I, &_GLOBAL_4_console_printk_I, &_GLOBAL_5_console_printk_I, &_GLOBAL_6_console_printk_I, &_GLOBAL_7_console_printk_I, &_GLOBAL_8_console_printk_I, &_GLOBAL_9_console_printk_I, &_GLOBAL_10_console_printk_I, &_GLOBAL_11_console_printk_I, &_GLOBAL_12_console_printk_I, &_GLOBAL_13_console_printk_I, &_GLOBAL_14_console_printk_I, &_GLOBAL_15_console_printk_I, &_GLOBAL_16_console_printk_I, &_GLOBAL_17_console_printk_I, &_GLOBAL_18_console_printk_I, &_GLOBAL_19_console_printk_I, &_GLOBAL_20_console_printk_I, &_GLOBAL_21_console_printk_I, &_GLOBAL_22_console_printk_I, &_GLOBAL_23_console_printk_I, &_GLOBAL_24_console_printk_I, &_GLOBAL_25_console_printk_I, &_GLOBAL_26_console_printk_I, &_GLOBAL_27_console_printk_I, &_GLOBAL_28_console_printk_I, &_GLOBAL_29_console_printk_I, &_GLOBAL_30_console_printk_I, &_GLOBAL_31_console_printk_I, &_GLOBAL_32_console_printk_I, &_GLOBAL_33_console_printk_I, &_GLOBAL_34_console_printk_I, &_GLOBAL_35_console_printk_I, &_GLOBAL_36_console_printk_I, &_GLOBAL_37_console_printk_I, &_GLOBAL_38_console_printk_I, &_GLOBAL_39_console_printk_I, &_GLOBAL_40_console_printk_I, &_GLOBAL_41_console_printk_I, &_GLOBAL_42_console_printk_I, &_GLOBAL_43_console_printk_I, &_GLOBAL_44_console_printk_I, &_GLOBAL_45_console_printk_I, &_GLOBAL_46_console_printk_I, &_GLOBAL_47_console_printk_I, &_GLOBAL_48_console_printk_I, &_GLOBAL_49_console_printk_I, };  






struct completion;
# 68 "linux-2.6/include/linux/kernel.h"
typedef  struct notifier_block   _GLOBAL_4_T; extern  _GLOBAL_4_T  * global_panic_notifier_list[NUM_STACKS];    
typedef  long   ( *_GLOBAL_6_T  )  ( long  time  ) ; extern  _GLOBAL_6_T global_panic_blink[NUM_STACKS];    
 void panic(const char * fmt, ...)
 __attribute__ ((noreturn, format (printf, 1, 2))) ;
 __attribute__((regparm(3))) void do_exit(long error_code)
 __attribute__((noreturn)) ;
 void complete_and_exit(struct completion *, long)
 __attribute__((noreturn)) ;
extern unsigned long simple_strtoul(const char *,char **,unsigned int);
extern long simple_strtol(const char *,char **,unsigned int);
extern unsigned long long simple_strtoull(const char *,char **,unsigned int);
extern long long simple_strtoll(const char *,char **,unsigned int);
extern int sprintf(char * buf, const char * fmt, ...)
 __attribute__ ((format (printf, 2, 3))) ;
extern int vsprintf(char *buf, const char *, va_list);
extern int snprintf(char * buf, size_t size, const char * fmt, ...)
 __attribute__ ((format (printf, 3, 4))) ;
extern int vsnprintf(char *buf, size_t size, const char *fmt, va_list args);
extern int scnprintf(char * buf, size_t size, const char * fmt, ...)
 __attribute__ ((format (printf, 3, 4))) ;
extern int vscnprintf(char *buf, size_t size, const char *fmt, va_list args);

extern int sscanf(const char *, const char *, ...)
 __attribute__ ((format (scanf,2,3))) ;
extern int vsscanf(const char *, const char *, va_list);

extern int get_option(char **str, int *pint);
extern char *get_options(const char *str, int nints, int *ints);
extern unsigned long long memparse(char *ptr, char **retptr);

extern int __kernel_text_address(unsigned long addr);
extern int kernel_text_address(unsigned long addr);
extern int session_of_pgrp(int pgrp);

  __attribute__((regparm(0))) int vprintk(const char *fmt, va_list args);
  __attribute__((regparm(0))) int printk(const char * fmt, ...)
 __attribute__ ((format (printf, 1, 2))) ;

unsigned long int_sqrt(unsigned long);

static inline  __attribute__((always_inline)) int  __attribute__((pure)) long_log2(unsigned long x)
{
 int r = 0;
 for (x >>= 1; x > 0; x >>= 1)
  r++;
 return r;
}

static inline  __attribute__((always_inline)) unsigned long  __attribute__((__const__)) roundup_pow_of_two(unsigned long x)
{
 return (1UL << generic_fls(x - 1));
}

extern int printk_ratelimit(void);
extern int __printk_ratelimit(int ratelimit_jiffies, int ratelimit_burst);

static inline  __attribute__((always_inline)) void console_silent(void)
{
 ((*_GLOBAL_console_printk_0_A[get_stack_id()])[0]) = 0;
}

static inline  __attribute__((always_inline)) void console_verbose(void)
{
 if (((*_GLOBAL_console_printk_0_A[get_stack_id()])[0]))
  ((*_GLOBAL_console_printk_0_A[get_stack_id()])[0]) = 15;
}

extern void bust_spinlocks(int yes);
typedef  int  _GLOBAL_7_T; extern  _GLOBAL_7_T  global_oops_in_progress[NUM_STACKS];   
typedef  int  _GLOBAL_8_T; extern  _GLOBAL_8_T  global_panic_on_oops[NUM_STACKS];   
typedef  int  _GLOBAL_9_T; extern  _GLOBAL_9_T  global_tainted[NUM_STACKS];   
extern const char *print_tainted(void);
extern void add_taint(unsigned);


typedef  enum system_states { SYSTEM_BOOTING , SYSTEM_RUNNING  , SYSTEM_HALT  , SYSTEM_POWER_OFF  , SYSTEM_RESTART  , }   _GLOBAL_10_T; extern  _GLOBAL_10_T  global_system_state[NUM_STACKS];    
 
 
 
 
 
 
# 158 "linux-2.6/include/linux/kernel.h"
extern void dump_stack(void);
# 258 "linux-2.6/include/linux/kernel.h"
struct sysinfo {
 long uptime;
 unsigned long loads[3];
 unsigned long totalram;
 unsigned long freeram;
 unsigned long sharedram;
 unsigned long bufferram;
 unsigned long totalswap;
 unsigned long freeswap;
 unsigned short procs;
 unsigned short pad;
 unsigned long totalhigh;
 unsigned long freehigh;
 unsigned int mem_unit;
 char _f[20-2*sizeof(long)-sizeof(int)];
};

extern void BUILD_BUG(void);
# 6 "linux-2.6/include/asm/system.h" 2






struct task_struct;
extern struct task_struct * __switch_to(struct task_struct *prev, struct task_struct *next) __attribute__((regparm(3))) ;
# 61 "linux-2.6/include/asm/system.h"
static inline  __attribute__((always_inline)) unsigned long _get_base(char * addr)
{
 unsigned long __base;
 __asm__("movb %3,%%dh\n\t"
  "movb %2,%%dl\n\t"
  "shll $16,%%edx\n\t"
  "movw %1,%%dx"
  :"=&d" (__base)
  :"m" (*((addr)+2)),
   "m" (*((addr)+4)),
   "m" (*((addr)+7)));
 return __base;
}
# 134 "linux-2.6/include/asm/system.h"
static inline  __attribute__((always_inline)) unsigned long get_limit(unsigned long segment)
{
 unsigned long __limit;
 __asm__("lsll %1,%0"
  :"=r" (__limit):"r" (segment));
 return __limit+1;
}







struct __xchg_dummy { unsigned long a[100]; };
# 166 "linux-2.6/include/asm/system.h"
static inline  __attribute__((always_inline)) void __set_64bit (unsigned long long * ptr,
  unsigned int low, unsigned int high)
{
 __asm__ __volatile__ (
  "\n1:\t"
  "movl (%0), %%eax\n\t"
  "movl 4(%0), %%edx\n\t"
  "lock cmpxchg8b (%0)\n\t"
  "jnz 1b"
  :
  : "D"(ptr),
   "b"(low),
   "c"(high)
  : "ax","dx","memory");
}

static inline  __attribute__((always_inline)) void __set_64bit_constant (unsigned long long *ptr,
       unsigned long long value)
{
 __set_64bit(ptr,(unsigned int)(value), (unsigned int)((value)>>32ULL));
}



static inline  __attribute__((always_inline)) void __set_64bit_var (unsigned long long *ptr,
    unsigned long long value)
{
 __set_64bit(ptr,*(((unsigned int*)&(value))+0), *(((unsigned int*)&(value))+1));
}
# 211 "linux-2.6/include/asm/system.h"
static inline  __attribute__((always_inline)) unsigned long __xchg(unsigned long x, volatile void * ptr, int size)
{
 switch (size) {
  case 1:
   __asm__ __volatile__("xchgb %b0,%1"
    :"=q" (x)
    :"m" (*((struct __xchg_dummy *)(ptr))), "0" (x)
    :"memory");
   break;
  case 2:
   __asm__ __volatile__("xchgw %w0,%1"
    :"=r" (x)
    :"m" (*((struct __xchg_dummy *)(ptr))), "0" (x)
    :"memory");
   break;
  case 4:
   __asm__ __volatile__("xchgl %0,%1"
    :"=r" (x)
    :"m" (*((struct __xchg_dummy *)(ptr))), "0" (x)
    :"memory");
   break;
 }
 return x;
}
# 246 "linux-2.6/include/asm/system.h"
static inline  __attribute__((always_inline)) unsigned long __cmpxchg(volatile void *ptr, unsigned long old,
          unsigned long new, int size)
{
 unsigned long prev;
 switch (size) {
 case 1:
  __asm__ __volatile__("" "cmpxchgb %b1,%2"
         : "=a"(prev)
         : "q"(new), "m"(*((struct __xchg_dummy *)(ptr))), "0"(old)
         : "memory");
  return prev;
 case 2:
  __asm__ __volatile__("" "cmpxchgw %w1,%2"
         : "=a"(prev)
         : "q"(new), "m"(*((struct __xchg_dummy *)(ptr))), "0"(old)
         : "memory");
  return prev;
 case 4:
  __asm__ __volatile__("" "cmpxchgl %1,%2"
         : "=a"(prev)
         : "q"(new), "m"(*((struct __xchg_dummy *)(ptr))), "0"(old)
         : "memory");
  return prev;
 }
 return old;
}






struct alt_instr {
 __u8 *instr;
 __u8 *replacement;
 __u8 cpuid;
 __u8 instrlen;
 __u8 replacementlen;
 __u8 pad;
};
# 465 "linux-2.6/include/asm/system.h"
void disable_hlt(void);
void enable_hlt(void);

typedef  int  _GLOBAL_11_T; extern  _GLOBAL_11_T  global_es7000_plat[NUM_STACKS];   
# 19 "linux-2.6/include/asm/processor.h" 2
# 1 "linux-2.6/include/linux/cache.h" 1





# 1 "linux-2.6/include/asm/cache.h" 1
# 7 "linux-2.6/include/linux/cache.h" 2
# 20 "linux-2.6/include/asm/processor.h" 2

# 1 "linux-2.6/include/linux/threads.h" 1
# 22 "linux-2.6/include/asm/processor.h" 2
# 1 "linux-2.6/include/asm/percpu.h" 1



# 1 "linux-2.6/include/asm-generic/percpu.h" 1
# 5 "linux-2.6/include/asm/percpu.h" 2
# 23 "linux-2.6/include/asm/processor.h" 2


typedef  int  _GLOBAL_12_T; extern  _GLOBAL_12_T  global_tsc_disable[NUM_STACKS];   

struct desc_struct {
 unsigned long a,b;
};
# 48 "linux-2.6/include/asm/processor.h"
struct cpuinfo_x86 {
 __u8 x86;
 __u8 x86_vendor;
 __u8 x86_model;
 __u8 x86_mask;
 char wp_works_ok;
 char hlt_works_ok;
 char hard_math;
 char rfu;
        int cpuid_level;
 unsigned long x86_capability[6];
 char x86_vendor_id[16];
 char x86_model_id[64];
 int x86_cache_size;

 int x86_cache_alignment;
 int fdiv_bug;
 int f00f_bug;
 int coma_bug;
 unsigned long loops_per_jiffy;
} __attribute__((__aligned__((1 << (7))))) ;
# 86 "linux-2.6/include/asm/processor.h"
typedef  struct cpuinfo_x86   _GLOBAL_13_T; extern  _GLOBAL_13_T  global_boot_cpu_data[NUM_STACKS];    
typedef  struct cpuinfo_x86   _GLOBAL_14_T; extern  _GLOBAL_14_T  global_new_cpu_data[NUM_STACKS];    
typedef  struct tss_struct   _GLOBAL_15_T; extern  _GLOBAL_15_T  _GLOBAL_0_doublefault_tss_I; extern  _GLOBAL_15_T  _GLOBAL_1_doublefault_tss_I; extern  _GLOBAL_15_T  _GLOBAL_2_doublefault_tss_I; extern  _GLOBAL_15_T  _GLOBAL_3_doublefault_tss_I; extern  _GLOBAL_15_T  _GLOBAL_4_doublefault_tss_I; extern  _GLOBAL_15_T  _GLOBAL_5_doublefault_tss_I; extern  _GLOBAL_15_T  _GLOBAL_6_doublefault_tss_I; extern  _GLOBAL_15_T  _GLOBAL_7_doublefault_tss_I; extern  _GLOBAL_15_T  _GLOBAL_8_doublefault_tss_I; extern  _GLOBAL_15_T  _GLOBAL_9_doublefault_tss_I; extern  _GLOBAL_15_T  _GLOBAL_10_doublefault_tss_I; extern  _GLOBAL_15_T  _GLOBAL_11_doublefault_tss_I; extern  _GLOBAL_15_T  _GLOBAL_12_doublefault_tss_I; extern  _GLOBAL_15_T  _GLOBAL_13_doublefault_tss_I; extern  _GLOBAL_15_T  _GLOBAL_14_doublefault_tss_I; extern  _GLOBAL_15_T  _GLOBAL_15_doublefault_tss_I; extern  _GLOBAL_15_T  _GLOBAL_16_doublefault_tss_I; extern  _GLOBAL_15_T  _GLOBAL_17_doublefault_tss_I; extern  _GLOBAL_15_T  _GLOBAL_18_doublefault_tss_I; extern  _GLOBAL_15_T  _GLOBAL_19_doublefault_tss_I; extern  _GLOBAL_15_T  _GLOBAL_20_doublefault_tss_I; extern  _GLOBAL_15_T  _GLOBAL_21_doublefault_tss_I; extern  _GLOBAL_15_T  _GLOBAL_22_doublefault_tss_I; extern  _GLOBAL_15_T  _GLOBAL_23_doublefault_tss_I; extern  _GLOBAL_15_T  _GLOBAL_24_doublefault_tss_I; extern  _GLOBAL_15_T  _GLOBAL_25_doublefault_tss_I; extern  _GLOBAL_15_T  _GLOBAL_26_doublefault_tss_I; extern  _GLOBAL_15_T  _GLOBAL_27_doublefault_tss_I; extern  _GLOBAL_15_T  _GLOBAL_28_doublefault_tss_I; extern  _GLOBAL_15_T  _GLOBAL_29_doublefault_tss_I; extern  _GLOBAL_15_T  _GLOBAL_30_doublefault_tss_I; extern  _GLOBAL_15_T  _GLOBAL_31_doublefault_tss_I; extern  _GLOBAL_15_T  _GLOBAL_32_doublefault_tss_I; extern  _GLOBAL_15_T  _GLOBAL_33_doublefault_tss_I; extern  _GLOBAL_15_T  _GLOBAL_34_doublefault_tss_I; extern  _GLOBAL_15_T  _GLOBAL_35_doublefault_tss_I; extern  _GLOBAL_15_T  _GLOBAL_36_doublefault_tss_I; extern  _GLOBAL_15_T  _GLOBAL_37_doublefault_tss_I; extern  _GLOBAL_15_T  _GLOBAL_38_doublefault_tss_I; extern  _GLOBAL_15_T  _GLOBAL_39_doublefault_tss_I; extern  _GLOBAL_15_T  _GLOBAL_40_doublefault_tss_I; extern  _GLOBAL_15_T  _GLOBAL_41_doublefault_tss_I; extern  _GLOBAL_15_T  _GLOBAL_42_doublefault_tss_I; extern  _GLOBAL_15_T  _GLOBAL_43_doublefault_tss_I; extern  _GLOBAL_15_T  _GLOBAL_44_doublefault_tss_I; extern  _GLOBAL_15_T  _GLOBAL_45_doublefault_tss_I; extern  _GLOBAL_15_T  _GLOBAL_46_doublefault_tss_I; extern  _GLOBAL_15_T  _GLOBAL_47_doublefault_tss_I; extern  _GLOBAL_15_T  _GLOBAL_48_doublefault_tss_I; extern  _GLOBAL_15_T  _GLOBAL_49_doublefault_tss_I; static __attribute__ ((unused)) __typeof__(_GLOBAL_0_doublefault_tss_I) *_GLOBAL_doublefault_tss_1_A[NUM_STACKS];   
typedef  __typeof__ ( struct tss_struct  )   _GLOBAL_16_T; extern  _GLOBAL_16_T  _GLOBAL_0_per_cpu__init_tss_I; extern  _GLOBAL_16_T  _GLOBAL_1_per_cpu__init_tss_I; extern  _GLOBAL_16_T  _GLOBAL_2_per_cpu__init_tss_I; extern  _GLOBAL_16_T  _GLOBAL_3_per_cpu__init_tss_I; extern  _GLOBAL_16_T  _GLOBAL_4_per_cpu__init_tss_I; extern  _GLOBAL_16_T  _GLOBAL_5_per_cpu__init_tss_I; extern  _GLOBAL_16_T  _GLOBAL_6_per_cpu__init_tss_I; extern  _GLOBAL_16_T  _GLOBAL_7_per_cpu__init_tss_I; extern  _GLOBAL_16_T  _GLOBAL_8_per_cpu__init_tss_I; extern  _GLOBAL_16_T  _GLOBAL_9_per_cpu__init_tss_I; extern  _GLOBAL_16_T  _GLOBAL_10_per_cpu__init_tss_I; extern  _GLOBAL_16_T  _GLOBAL_11_per_cpu__init_tss_I; extern  _GLOBAL_16_T  _GLOBAL_12_per_cpu__init_tss_I; extern  _GLOBAL_16_T  _GLOBAL_13_per_cpu__init_tss_I; extern  _GLOBAL_16_T  _GLOBAL_14_per_cpu__init_tss_I; extern  _GLOBAL_16_T  _GLOBAL_15_per_cpu__init_tss_I; extern  _GLOBAL_16_T  _GLOBAL_16_per_cpu__init_tss_I; extern  _GLOBAL_16_T  _GLOBAL_17_per_cpu__init_tss_I; extern  _GLOBAL_16_T  _GLOBAL_18_per_cpu__init_tss_I; extern  _GLOBAL_16_T  _GLOBAL_19_per_cpu__init_tss_I; extern  _GLOBAL_16_T  _GLOBAL_20_per_cpu__init_tss_I; extern  _GLOBAL_16_T  _GLOBAL_21_per_cpu__init_tss_I; extern  _GLOBAL_16_T  _GLOBAL_22_per_cpu__init_tss_I; extern  _GLOBAL_16_T  _GLOBAL_23_per_cpu__init_tss_I; extern  _GLOBAL_16_T  _GLOBAL_24_per_cpu__init_tss_I; extern  _GLOBAL_16_T  _GLOBAL_25_per_cpu__init_tss_I; extern  _GLOBAL_16_T  _GLOBAL_26_per_cpu__init_tss_I; extern  _GLOBAL_16_T  _GLOBAL_27_per_cpu__init_tss_I; extern  _GLOBAL_16_T  _GLOBAL_28_per_cpu__init_tss_I; extern  _GLOBAL_16_T  _GLOBAL_29_per_cpu__init_tss_I; extern  _GLOBAL_16_T  _GLOBAL_30_per_cpu__init_tss_I; extern  _GLOBAL_16_T  _GLOBAL_31_per_cpu__init_tss_I; extern  _GLOBAL_16_T  _GLOBAL_32_per_cpu__init_tss_I; extern  _GLOBAL_16_T  _GLOBAL_33_per_cpu__init_tss_I; extern  _GLOBAL_16_T  _GLOBAL_34_per_cpu__init_tss_I; extern  _GLOBAL_16_T  _GLOBAL_35_per_cpu__init_tss_I; extern  _GLOBAL_16_T  _GLOBAL_36_per_cpu__init_tss_I; extern  _GLOBAL_16_T  _GLOBAL_37_per_cpu__init_tss_I; extern  _GLOBAL_16_T  _GLOBAL_38_per_cpu__init_tss_I; extern  _GLOBAL_16_T  _GLOBAL_39_per_cpu__init_tss_I; extern  _GLOBAL_16_T  _GLOBAL_40_per_cpu__init_tss_I; extern  _GLOBAL_16_T  _GLOBAL_41_per_cpu__init_tss_I; extern  _GLOBAL_16_T  _GLOBAL_42_per_cpu__init_tss_I; extern  _GLOBAL_16_T  _GLOBAL_43_per_cpu__init_tss_I; extern  _GLOBAL_16_T  _GLOBAL_44_per_cpu__init_tss_I; extern  _GLOBAL_16_T  _GLOBAL_45_per_cpu__init_tss_I; extern  _GLOBAL_16_T  _GLOBAL_46_per_cpu__init_tss_I; extern  _GLOBAL_16_T  _GLOBAL_47_per_cpu__init_tss_I; extern  _GLOBAL_16_T  _GLOBAL_48_per_cpu__init_tss_I; extern  _GLOBAL_16_T  _GLOBAL_49_per_cpu__init_tss_I; static __attribute__ ((unused)) __typeof__(_GLOBAL_0_per_cpu__init_tss_I) *_GLOBAL_per_cpu__init_tss_2_A[NUM_STACKS];   
# 99 "linux-2.6/include/asm/processor.h"
typedef  char  _GLOBAL_17_T; extern  _GLOBAL_17_T  global_ignore_fpu_irq[NUM_STACKS];   

extern void identify_cpu(struct cpuinfo_x86 *);
extern void print_cpu_info(struct cpuinfo_x86 *);
extern unsigned int init_intel_cacheinfo(struct cpuinfo_x86 *c);
extern void dodgy_tsc(void);
# 130 "linux-2.6/include/asm/processor.h"
static inline  __attribute__((always_inline)) void cpuid(int op, int *eax, int *ebx, int *ecx, int *edx)
{
 __asm__("cpuid"
  : "=a" (*eax),
    "=b" (*ebx),
    "=c" (*ecx),
    "=d" (*edx)
  : "0" (op));
}




static inline  __attribute__((always_inline)) unsigned int cpuid_eax(unsigned int op)
{
 unsigned int eax;

 __asm__("cpuid"
  : "=a" (eax)
  : "0" (op)
  : "bx", "cx", "dx");
 return eax;
}
static inline  __attribute__((always_inline)) unsigned int cpuid_ebx(unsigned int op)
{
 unsigned int eax, ebx;

 __asm__("cpuid"
  : "=a" (eax), "=b" (ebx)
  : "0" (op)
  : "cx", "dx" );
 return ebx;
}
static inline  __attribute__((always_inline)) unsigned int cpuid_ecx(unsigned int op)
{
 unsigned int eax, ecx;

 __asm__("cpuid"
  : "=a" (eax), "=c" (ecx)
  : "0" (op)
  : "bx", "dx" );
 return ecx;
}
static inline  __attribute__((always_inline)) unsigned int cpuid_edx(unsigned int op)
{
 unsigned int eax, edx;

 __asm__("cpuid"
  : "=a" (eax), "=d" (edx)
  : "0" (op)
  : "bx", "cx");
 return edx;
}
# 209 "linux-2.6/include/asm/processor.h"
typedef  unsigned long   _GLOBAL_18_T; extern  _GLOBAL_18_T  global_mmu_cr4_features[NUM_STACKS];    

static inline  __attribute__((always_inline)) void set_in_cr4 (unsigned long mask)
{
 global_mmu_cr4_features[get_stack_id()] |= mask;
 __asm__("movl %%cr4,%%eax\n\t"
  "orl %0,%%eax\n\t"
  "movl %%eax,%%cr4\n"
  : : "irg" (mask)
  :"ax");
}

static inline  __attribute__((always_inline)) void clear_in_cr4 (unsigned long mask)
{
 global_mmu_cr4_features[get_stack_id()] &= ~mask;
 __asm__("movl %%cr4,%%eax\n\t"
  "andl %0,%%eax\n\t"
  "movl %%eax,%%cr4\n"
  : : "irg" (~mask)
  :"ax");
}
# 265 "linux-2.6/include/asm/processor.h"
typedef  int  _GLOBAL_19_T; extern  _GLOBAL_19_T  global_MCA_bus[NUM_STACKS];   

static inline  __attribute__((always_inline)) void __monitor(const void *eax, unsigned long ecx,
  unsigned long edx)
{

 asm volatile(
  ".byte 0x0f,0x01,0xc8;"
  : :"a" (eax), "c" (ecx), "d"(edx));
}

static inline  __attribute__((always_inline)) void __mwait(unsigned long eax, unsigned long ecx)
{

 asm volatile(
  ".byte 0x0f,0x01,0xc9;"
  : :"a" (eax), "c" (ecx));
}



typedef  unsigned int   _GLOBAL_20_T; extern  _GLOBAL_20_T  global_machine_id[NUM_STACKS];    
typedef  unsigned int   _GLOBAL_21_T; extern  _GLOBAL_21_T  global_machine_submodel_id[NUM_STACKS];    
typedef  unsigned int   _GLOBAL_22_T; extern  _GLOBAL_22_T  global_BIOS_revision[NUM_STACKS];    
typedef  unsigned int   _GLOBAL_23_T; extern  _GLOBAL_23_T  global_mca_pentium_flag[NUM_STACKS];    
# 313 "linux-2.6/include/asm/processor.h"
struct i387_fsave_struct {
 long cwd;
 long swd;
 long twd;
 long fip;
 long fcs;
 long foo;
 long fos;
 long st_space[20];
 long status;
};

struct i387_fxsave_struct {
 unsigned short cwd;
 unsigned short swd;
 unsigned short twd;
 unsigned short fop;
 long fip;
 long fcs;
 long foo;
 long fos;
 long mxcsr;
 long mxcsr_mask;
 long st_space[32];
 long xmm_space[32];
 long padding[56];
} __attribute__ ((aligned (16))) ;

struct i387_soft_struct {
 long cwd;
 long swd;
 long twd;
 long fip;
 long fcs;
 long foo;
 long fos;
 long st_space[20];
 unsigned char ftop, changed, lookahead, no_update, rm, alimit;
 struct info *info;
 unsigned long entry_eip;
};

union i387_union {
 struct i387_fsave_struct fsave;
 struct i387_fxsave_struct fxsave;
 struct i387_soft_struct soft;
};

typedef struct {
 unsigned long seg;
} mm_segment_t;

struct thread_struct;

struct tss_struct {
 unsigned short back_link,__blh;
 unsigned long esp0;
 unsigned short ss0,__ss0h;
 unsigned long esp1;
 unsigned short ss1,__ss1h;
 unsigned long esp2;
 unsigned short ss2,__ss2h;
 unsigned long __cr3;
 unsigned long eip;
 unsigned long eflags;
 unsigned long eax,ecx,edx,ebx;
 unsigned long esp;
 unsigned long ebp;
 unsigned long esi;
 unsigned long edi;
 unsigned short es, __esh;
 unsigned short cs, __csh;
 unsigned short ss, __ssh;
 unsigned short ds, __dsh;
 unsigned short fs, __fsh;
 unsigned short gs, __gsh;
 unsigned short ldt, __ldth;
 unsigned short trace, io_bitmap_base;






 unsigned long io_bitmap[((65536/8)/sizeof(long)) + 1];



 unsigned long io_bitmap_max;
 struct thread_struct *io_bitmap_owner;



 unsigned long __cacheline_filler[35];



 unsigned long stack[64];
} __attribute__((packed)) ;



struct thread_struct {

 struct desc_struct tls_array[3];
 unsigned long esp0;
 unsigned long sysenter_cs;
 unsigned long eip;
 unsigned long esp;
 unsigned long fs;
 unsigned long gs;

 unsigned long debugreg[8];

 unsigned long cr2, trap_no, error_code;

 union i387_union i387;

 struct vm86_struct * vm86_info;
 unsigned long screen_bitmap;
 unsigned long v86flags, v86mask, saved_esp0;
 unsigned int saved_fs, saved_gs;

 unsigned long *io_bitmap_ptr;

 unsigned long io_bitmap_max;
};
# 462 "linux-2.6/include/asm/processor.h"
static inline  __attribute__((always_inline)) void load_esp0(struct tss_struct *tss, struct thread_struct *thread)
{
 tss->esp0 = thread->esp0;

 if (__builtin_expect(!!(tss->ss1 != thread->sysenter_cs), 0)) {
  tss->ss1 = thread->sysenter_cs;
  __asm__ __volatile__("wrmsr" : : "c" (0x174), "a" (thread->sysenter_cs), "d" (0));
 }
}
# 484 "linux-2.6/include/asm/processor.h"
struct task_struct;
struct mm_struct;


extern void release_thread(struct task_struct *);


extern void prepare_to_copy(struct task_struct *tsk);




extern int kernel_thread(int (*fn)(void *), void * arg, unsigned long flags);

extern unsigned long thread_saved_pc(struct task_struct *tsk);
void show_trace(struct task_struct *task, unsigned long *stack);

unsigned long get_wchan(struct task_struct *p);
# 521 "linux-2.6/include/asm/processor.h"
struct microcode_header {
 unsigned int hdrver;
 unsigned int rev;
 unsigned int date;
 unsigned int sig;
 unsigned int cksum;
 unsigned int ldrver;
 unsigned int pf;
 unsigned int datasize;
 unsigned int totalsize;
 unsigned int reserved[3];
};

struct microcode {
 struct microcode_header hdr;
 unsigned int bits[0];
};

typedef struct microcode microcode_t;
typedef struct microcode_header microcode_header_t;


struct extended_signature {
 unsigned int sig;
 unsigned int pf;
 unsigned int cksum;
};

struct extended_sigtable {
 unsigned int count;
 unsigned int cksum;
 unsigned int reserved[3];
 struct extended_signature sigs[0];
};




static inline  __attribute__((always_inline)) void rep_nop(void)
{
 __asm__ __volatile__("rep;nop": : :"memory");
}
# 634 "linux-2.6/include/asm/processor.h"
extern inline  __attribute__((always_inline)) void prefetch(const void *x)
{
 asm volatile ("661:\n\t" ".byte 0x8d,0x74,0x26,0x00\n" "\n662:\n" ".section .altinstructions,\"a\"\n" "  .align 4\n" "  .long 661b\n" "  .long 663f\n" "  .byte %c0\n" "  .byte 662b-661b\n" "  .byte 664f-663f\n" ".previous\n" ".section .altinstr_replacement,\"ax\"\n" "663:\n\t" "prefetchnta (%1)" "\n664:\n" ".previous" :: "i" ((0*32+25)), "r" (x))


             ;
}







extern inline  __attribute__((always_inline)) void prefetchw(const void *x)
{
 asm volatile ("661:\n\t" ".byte 0x8d,0x74,0x26,0x00\n" "\n662:\n" ".section .altinstructions,\"a\"\n" "  .align 4\n" "  .long 661b\n" "  .long 663f\n" "  .byte %c0\n" "  .byte 662b-661b\n" "  .byte 664f-663f\n" ".previous\n" ".section .altinstr_replacement,\"ax\"\n" "663:\n\t" "prefetchw (%1)" "\n664:\n" ".previous" :: "i" ((1*32+31)), "r" (x))


             ;
}


extern void select_idle_routine(const struct cpuinfo_x86 *c);



typedef  unsigned long   _GLOBAL_24_T; extern  _GLOBAL_24_T  global_boot_option_idle_override[NUM_STACKS];    
# 17 "linux-2.6/include/asm/thread_info.h" 2
# 27 "linux-2.6/include/asm/thread_info.h"
struct thread_info {
 struct task_struct *task;
 struct exec_domain *exec_domain;
 unsigned long flags;
 unsigned long status;
 __u32 cpu;
 __s32 preempt_count;


 mm_segment_t addr_limit;



 struct restart_block restart_block;

 unsigned long previous_esp;


 __u8 supervisor_stack[0];
};
# 87 "linux-2.6/include/asm/thread_info.h"
static inline  __attribute__((always_inline)) struct thread_info *current_thread_info(void)
{




    extern struct thread_info *nsc_get_current_thread_info(void);
    return nsc_get_current_thread_info();
}


static inline  __attribute__((always_inline)) unsigned long current_stack_pointer(void)
{
 unsigned long ti;
 __asm__("movl %%esp,%0; ":"=r" (ti) : );
 return ti;
}
# 22 "linux-2.6/include/linux/thread_info.h" 2
# 30 "linux-2.6/include/linux/thread_info.h"
static inline  __attribute__((always_inline)) void set_thread_flag(int flag)
{
 set_bit(flag,&current_thread_info()->flags);
}

static inline  __attribute__((always_inline)) void clear_thread_flag(int flag)
{
 clear_bit(flag,&current_thread_info()->flags);
}

static inline  __attribute__((always_inline)) int test_and_set_thread_flag(int flag)
{
 return test_and_set_bit(flag,&current_thread_info()->flags);
}

static inline  __attribute__((always_inline)) int test_and_clear_thread_flag(int flag)
{
 return test_and_clear_bit(flag,&current_thread_info()->flags);
}

static inline  __attribute__((always_inline)) int test_thread_flag(int flag)
{
 return (__builtin_constant_p(flag) ? constant_test_bit((flag),(&current_thread_info()->flags)) : variable_test_bit((flag),(&current_thread_info()->flags)));
}

static inline  __attribute__((always_inline)) void set_ti_thread_flag(struct thread_info *ti, int flag)
{
 set_bit(flag,&ti->flags);
}

static inline  __attribute__((always_inline)) void clear_ti_thread_flag(struct thread_info *ti, int flag)
{
 clear_bit(flag,&ti->flags);
}

static inline  __attribute__((always_inline)) int test_and_set_ti_thread_flag(struct thread_info *ti, int flag)
{
 return test_and_set_bit(flag,&ti->flags);
}

static inline  __attribute__((always_inline)) int test_and_clear_ti_thread_flag(struct thread_info *ti, int flag)
{
 return test_and_clear_bit(flag,&ti->flags);
}

static inline  __attribute__((always_inline)) int test_ti_thread_flag(struct thread_info *ti, int flag)
{
 return (__builtin_constant_p(flag) ? constant_test_bit((flag),(&ti->flags)) : variable_test_bit((flag),(&ti->flags)));
}

static inline  __attribute__((always_inline)) void set_need_resched(void)
{
 set_thread_flag(3);
}

static inline  __attribute__((always_inline)) void clear_need_resched(void)
{
 clear_thread_flag(3);
}
# 13 "linux-2.6/include/linux/spinlock.h" 2

# 1 "linux-2.6/include/linux/stringify.h" 1
# 15 "linux-2.6/include/linux/spinlock.h" 2
# 189 "linux-2.6/include/linux/spinlock.h"
  typedef struct { } spinlock_t;
# 210 "linux-2.6/include/linux/spinlock.h"
  typedef struct { } rwlock_t;
# 496 "linux-2.6/include/linux/spinlock.h"
static inline  __attribute__((always_inline)) void bit_spin_lock(int bitnum, unsigned long *addr)
{







 do { } while (0);






 (void)0;
}




static inline  __attribute__((always_inline)) int bit_spin_trylock(int bitnum, unsigned long *addr)
{
 do { } while (0);






 (void)0;
 return 1;
}




static inline  __attribute__((always_inline)) void bit_spin_unlock(int bitnum, unsigned long *addr)
{





 do { } while (0);
 (void)0;
}




static inline  __attribute__((always_inline)) int bit_spin_is_locked(int bitnum, unsigned long *addr)
{





 return 1;

}
# 46 "linux-2.6/include/linux/capability.h" 2

typedef  spinlock_t  _GLOBAL_25_T; extern  _GLOBAL_25_T  global_task_capability_lock[NUM_STACKS];   
# 59 "linux-2.6/include/linux/capability.h"
typedef __u32 kernel_cap_t;
# 291 "linux-2.6/include/linux/capability.h"
typedef  kernel_cap_t  _GLOBAL_26_T; extern  _GLOBAL_26_T  global_cap_bset[NUM_STACKS];   
# 319 "linux-2.6/include/linux/capability.h"
static inline  __attribute__((always_inline)) kernel_cap_t cap_combine(kernel_cap_t a, kernel_cap_t b)
{
     kernel_cap_t dest;
     (dest) = (a) | (b);
     return dest;
}

static inline  __attribute__((always_inline)) kernel_cap_t cap_intersect(kernel_cap_t a, kernel_cap_t b)
{
     kernel_cap_t dest;
     (dest) = (a) & (b);
     return dest;
}

static inline  __attribute__((always_inline)) kernel_cap_t cap_drop(kernel_cap_t a, kernel_cap_t drop)
{
     kernel_cap_t dest;
     (dest) = (a) & ~(drop);
     return dest;
}

static inline  __attribute__((always_inline)) kernel_cap_t cap_invert(kernel_cap_t c)
{
     kernel_cap_t dest;
     (dest) = ~(c);
     return dest;
}
# 8 "linux-2.6/include/linux/sched.h" 2



# 1 "linux-2.6/include/linux/timex.h" 1
# 58 "linux-2.6/include/linux/timex.h"
# 1 "linux-2.6/include/linux/time.h" 1






# 1 "linux-2.6/include/linux/seqlock.h" 1
# 33 "linux-2.6/include/linux/seqlock.h"
typedef struct {
 unsigned sequence;
 spinlock_t lock;
} seqlock_t;
# 50 "linux-2.6/include/linux/seqlock.h"
static inline  __attribute__((always_inline)) void write_seqlock(seqlock_t *sl)
{
 do { do { } while (0); do { (void)(&sl->lock); } while(0); (void)0; } while(0);
 ++sl->sequence;
 __asm__ __volatile__("": : :"memory");
}

static inline  __attribute__((always_inline)) void write_sequnlock(seqlock_t *sl)
{
 __asm__ __volatile__("": : :"memory");
 sl->sequence++;
 do { do { (void)(&sl->lock); } while(0); do { } while (0); (void)0; } while (0);
}

static inline  __attribute__((always_inline)) int write_tryseqlock(seqlock_t *sl)
{
 int ret = (({do { } while (0); (((void)(&sl->lock), 1)) ? 1 : ({do { } while (0); 0;});}));

 if (ret) {
  ++sl->sequence;
  __asm__ __volatile__("": : :"memory");
 }
 return ret;
}


static inline  __attribute__((always_inline)) unsigned read_seqbegin(const seqlock_t *sl)
{
 unsigned ret = sl->sequence;
 __asm__ __volatile__("": : :"memory");
 return ret;
}
# 91 "linux-2.6/include/linux/seqlock.h"
static inline  __attribute__((always_inline)) int read_seqretry(const seqlock_t *sl, unsigned iv)
{
 __asm__ __volatile__("": : :"memory");
 return (iv & 1) | (sl->sequence ^ iv);
}
# 105 "linux-2.6/include/linux/seqlock.h"
typedef struct seqcount {
 unsigned sequence;
} seqcount_t;





static inline  __attribute__((always_inline)) unsigned read_seqcount_begin(const seqcount_t *s)
{
 unsigned ret = s->sequence;
 __asm__ __volatile__("": : :"memory");
 return ret;
}






static inline  __attribute__((always_inline)) int read_seqcount_retry(const seqcount_t *s, unsigned iv)
{
 __asm__ __volatile__("": : :"memory");
 return (iv & 1) | (s->sequence ^ iv);
}






static inline  __attribute__((always_inline)) void write_seqcount_begin(seqcount_t *s)
{
 s->sequence++;
 __asm__ __volatile__("": : :"memory");
}

static inline  __attribute__((always_inline)) void write_seqcount_end(seqcount_t *s)
{
 __asm__ __volatile__("": : :"memory");
 s->sequence++;
}
# 8 "linux-2.6/include/linux/time.h" 2




struct timespec {
 time_t tv_sec;
 long tv_nsec;
};


struct timeval {
 time_t tv_sec;
 suseconds_t tv_usec;
};

struct timezone {
 int tz_minuteswest;
 int tz_dsttime;
};
# 43 "linux-2.6/include/linux/time.h"
static __inline__  __attribute__((always_inline)) int timespec_equal(struct timespec *a, struct timespec *b)
{
 return (a->tv_sec == b->tv_sec) && (a->tv_nsec == b->tv_nsec);
}
# 63 "linux-2.6/include/linux/time.h"
static inline  __attribute__((always_inline)) unsigned long
mktime (unsigned int year, unsigned int mon,
 unsigned int day, unsigned int hour,
 unsigned int min, unsigned int sec)
{
 if (0 >= (int) (mon -= 2)) {
  mon += 12;
  year -= 1;
 }

 return (((
  (unsigned long) (year/4 - year/100 + year/400 + 367*mon/12 + day) +
   year*365 - 719499
     )*24 + hour
   )*60 + min
 )*60 + sec;
}

typedef  struct timespec   _GLOBAL_27_T; extern  _GLOBAL_27_T  global_xtime[NUM_STACKS];    
typedef  struct timespec   _GLOBAL_28_T; extern  _GLOBAL_28_T  global_wall_to_monotonic[NUM_STACKS];    
typedef  seqlock_t  _GLOBAL_29_T; extern  _GLOBAL_29_T  global_xtime_lock[NUM_STACKS];   

static inline  __attribute__((always_inline)) unsigned long get_seconds(void)
{
 return global_xtime[get_stack_id()].tv_sec;
}

struct timespec current_kernel_time(void);



extern void do_gettimeofday(struct timeval *tv);
extern int do_settimeofday(struct timespec *tv);
extern int do_sys_settimeofday(struct timespec *tv, struct timezone *tz);
extern void clock_was_set(void);
extern int do_posix_clock_monotonic_gettime(struct timespec *tp);
extern long do_nanosleep(struct timespec *t);
extern long do_utimes(char * filename, struct timeval * times);
struct itimerval;
extern int do_setitimer(int which, struct itimerval *value, struct itimerval *ovalue);
extern int do_getitimer(int which, struct itimerval *value);
extern void getnstimeofday (struct timespec *tv);

static inline  __attribute__((always_inline)) void
set_normalized_timespec (struct timespec *ts, time_t sec, long nsec)
{
 while (nsec > (1000000000L)) {
  nsec -= (1000000000L);
  ++sec;
 }
 while (nsec < 0) {
  nsec += (1000000000L);
  --sec;
 }
 ts->tv_sec = sec;
 ts->tv_nsec = nsec;
}
# 139 "linux-2.6/include/linux/time.h"
struct itimerspec {
        struct timespec it_interval;
        struct timespec it_value;
};

struct itimerval {
 struct timeval it_interval;
 struct timeval it_value;
};
# 59 "linux-2.6/include/linux/timex.h" 2


# 1 "linux-2.6/include/asm/timex.h" 1
# 33 "linux-2.6/include/asm/timex.h"
typedef unsigned long long cycles_t;

typedef  cycles_t  _GLOBAL_30_T; extern  _GLOBAL_30_T  global_cacheflush_time[NUM_STACKS];   

static inline  __attribute__((always_inline)) cycles_t get_cycles (void)
{
 unsigned long long ret=0;







 __asm__ __volatile__("rdtsc" : "=A" (ret));

 return ret;
}

typedef  unsigned long   _GLOBAL_31_T; extern  _GLOBAL_31_T  global_cpu_khz[NUM_STACKS];    
# 62 "linux-2.6/include/linux/timex.h" 2
# 135 "linux-2.6/include/linux/timex.h"
struct timex {
 unsigned int modes;
 long offset;
 long freq;
 long maxerror;
 long esterror;
 int status;
 long constant;
 long precision;
 long tolerance;


 struct timeval time;
 long tick;

 long ppsfreq;
 long jitter;
 int shift;
 long stabil;
 long jitcnt;
 long calcnt;
 long errcnt;
 long stbcnt;

 int :32; int :32; int :32; int :32;
 int :32; int :32; int :32; int :32;
 int :32; int :32; int :32; int :32;
};
# 227 "linux-2.6/include/linux/timex.h"
typedef  unsigned long   _GLOBAL_32_T; extern  _GLOBAL_32_T  global_tick_usec[NUM_STACKS];    
typedef  unsigned long   _GLOBAL_33_T; extern  _GLOBAL_33_T  global_tick_nsec[NUM_STACKS];    
typedef  int  _GLOBAL_34_T; extern  _GLOBAL_34_T  global_tickadj[NUM_STACKS];   




typedef  int  _GLOBAL_35_T; extern  _GLOBAL_35_T  global_time_state[NUM_STACKS];   
typedef  int  _GLOBAL_36_T; extern  _GLOBAL_36_T  global_time_status[NUM_STACKS];   
typedef  long  _GLOBAL_37_T; extern  _GLOBAL_37_T  global_time_offset[NUM_STACKS];   
typedef  long  _GLOBAL_38_T; extern  _GLOBAL_38_T  global_time_constant[NUM_STACKS];   
typedef  long  _GLOBAL_39_T; extern  _GLOBAL_39_T  global_time_tolerance[NUM_STACKS];   
typedef  long  _GLOBAL_40_T; extern  _GLOBAL_40_T  global_time_precision[NUM_STACKS];   
typedef  long  _GLOBAL_41_T; extern  _GLOBAL_41_T  global_time_maxerror[NUM_STACKS];   
typedef  long  _GLOBAL_42_T; extern  _GLOBAL_42_T  global_time_esterror[NUM_STACKS];   

typedef  long  _GLOBAL_43_T; extern  _GLOBAL_43_T  global_time_phase[NUM_STACKS];   
typedef  long  _GLOBAL_44_T; extern  _GLOBAL_44_T  global_time_freq[NUM_STACKS];   
typedef  long  _GLOBAL_45_T; extern  _GLOBAL_45_T  global_time_adj[NUM_STACKS];   
typedef  long  _GLOBAL_46_T; extern  _GLOBAL_46_T  global_time_reftime[NUM_STACKS];   

typedef  long  _GLOBAL_47_T; extern  _GLOBAL_47_T  global_time_adjust[NUM_STACKS];   
typedef  long  _GLOBAL_48_T; extern  _GLOBAL_48_T  global_time_next_adjust[NUM_STACKS];   


typedef  long  _GLOBAL_49_T; extern  _GLOBAL_49_T  global_pps_offset[NUM_STACKS];   
typedef  long  _GLOBAL_50_T; extern  _GLOBAL_50_T  global_pps_jitter[NUM_STACKS];   
typedef  long  _GLOBAL_51_T; extern  _GLOBAL_51_T  global_pps_freq[NUM_STACKS];   
typedef  long  _GLOBAL_52_T; extern  _GLOBAL_52_T  global_pps_stabil[NUM_STACKS];   
typedef  long  _GLOBAL_53_T; extern  _GLOBAL_53_T  global_pps_valid[NUM_STACKS];   


typedef  int  _GLOBAL_54_T; extern  _GLOBAL_54_T  global_pps_shift[NUM_STACKS];   
typedef  long  _GLOBAL_55_T; extern  _GLOBAL_55_T  global_pps_jitcnt[NUM_STACKS];   
typedef  long  _GLOBAL_56_T; extern  _GLOBAL_56_T  global_pps_calcnt[NUM_STACKS];   
typedef  long  _GLOBAL_57_T; extern  _GLOBAL_57_T  global_pps_errcnt[NUM_STACKS];   
typedef  long  _GLOBAL_58_T; extern  _GLOBAL_58_T  global_pps_stbcnt[NUM_STACKS];   
# 313 "linux-2.6/include/linux/timex.h"
static inline  __attribute__((always_inline)) void
time_interpolator_reset(void)
{
}
# 12 "linux-2.6/include/linux/sched.h" 2
# 1 "linux-2.6/include/linux/jiffies.h" 1
# 9 "linux-2.6/include/linux/jiffies.h"
# 1 "linux-2.6/include/asm/div64.h" 1
# 38 "linux-2.6/include/asm/div64.h"
extern inline  __attribute__((always_inline)) long
div_ll_X_l_rem(long long divs, long div, long *rem)
{
 long dum2;
      __asm__("divl %2":"=a"(dum2), "=d"(*rem)
      : "rm"(div), "A"(divs));

 return dum2;

}
# 10 "linux-2.6/include/linux/jiffies.h" 2
# 78 "linux-2.6/include/linux/jiffies.h"
typedef  u64  _GLOBAL_59_T; extern  _GLOBAL_59_T  global_jiffies_64[NUM_STACKS];   
typedef  unsigned long    _GLOBAL_60_T; extern volatile  _GLOBAL_60_T  global_jiffies[NUM_STACKS];     


u64 get_jiffies_64(void);
# 249 "linux-2.6/include/linux/jiffies.h"
static inline  __attribute__((always_inline)) unsigned int jiffies_to_msecs(const unsigned long j)
{

 return (1000 / 1000) * j;





}

static inline  __attribute__((always_inline)) unsigned int jiffies_to_usecs(const unsigned long j)
{

 return (1000000 / 1000) * j;





}

static inline  __attribute__((always_inline)) unsigned long msecs_to_jiffies(const unsigned int m)
{
 if (m > jiffies_to_msecs(((~0UL >> 1)-1)))
  return ((~0UL >> 1)-1);

 return (m + (1000 / 1000) - 1) / (1000 / 1000);





}
# 295 "linux-2.6/include/linux/jiffies.h"
static __inline__  __attribute__((always_inline)) unsigned long
timespec_to_jiffies(const struct timespec *value)
{
 unsigned long sec = value->tv_sec;
 long nsec = value->tv_nsec + (( ((1000000UL * 1000 / (( ((1193182 / ((1193182 + 1000/2) / 1000)) << 8) + (((1193182 % ((1193182 + 1000/2) / 1000)) << 8) + ((1193182 + 1000/2) / 1000) / 2) / ((1193182 + 1000/2) / 1000)))) << 8) + (((1000000UL * 1000 % (( ((1193182 / ((1193182 + 1000/2) / 1000)) << 8) + (((1193182 % ((1193182 + 1000/2) / 1000)) << 8) + ((1193182 + 1000/2) / 1000) / 2) / ((1193182 + 1000/2) / 1000)))) << 8) + (( ((1193182 / ((1193182 + 1000/2) / 1000)) << 8) + (((1193182 % ((1193182 + 1000/2) / 1000)) << 8) + ((1193182 + 1000/2) / 1000) / 2) / ((1193182 + 1000/2) / 1000))) / 2) / (( ((1193182 / ((1193182 + 1000/2) / 1000)) << 8) + (((1193182 % ((1193182 + 1000/2) / 1000)) << 8) + ((1193182 + 1000/2) / 1000) / 2) / ((1193182 + 1000/2) / 1000))))) - 1;

 if (sec >= (long)((u64)((u64)((~0UL >> 1)-1) * (( ((1000000UL * 1000 / (( ((1193182 / ((1193182 + 1000/2) / 1000)) << 8) + (((1193182 % ((1193182 + 1000/2) / 1000)) << 8) + ((1193182 + 1000/2) / 1000) / 2) / ((1193182 + 1000/2) / 1000)))) << 8) + (((1000000UL * 1000 % (( ((1193182 / ((1193182 + 1000/2) / 1000)) << 8) + (((1193182 % ((1193182 + 1000/2) / 1000)) << 8) + ((1193182 + 1000/2) / 1000) / 2) / ((1193182 + 1000/2) / 1000)))) << 8) + (( ((1193182 / ((1193182 + 1000/2) / 1000)) << 8) + (((1193182 % ((1193182 + 1000/2) / 1000)) << 8) + ((1193182 + 1000/2) / 1000) / 2) / ((1193182 + 1000/2) / 1000))) / 2) / (( ((1193182 / ((1193182 + 1000/2) / 1000)) << 8) + (((1193182 % ((1193182 + 1000/2) / 1000)) << 8) + ((1193182 + 1000/2) / 1000) / 2) / ((1193182 + 1000/2) / 1000)))))) / (1000000000L))){
  sec = (long)((u64)((u64)((~0UL >> 1)-1) * (( ((1000000UL * 1000 / (( ((1193182 / ((1193182 + 1000/2) / 1000)) << 8) + (((1193182 % ((1193182 + 1000/2) / 1000)) << 8) + ((1193182 + 1000/2) / 1000) / 2) / ((1193182 + 1000/2) / 1000)))) << 8) + (((1000000UL * 1000 % (( ((1193182 / ((1193182 + 1000/2) / 1000)) << 8) + (((1193182 % ((1193182 + 1000/2) / 1000)) << 8) + ((1193182 + 1000/2) / 1000) / 2) / ((1193182 + 1000/2) / 1000)))) << 8) + (( ((1193182 / ((1193182 + 1000/2) / 1000)) << 8) + (((1193182 % ((1193182 + 1000/2) / 1000)) << 8) + ((1193182 + 1000/2) / 1000) / 2) / ((1193182 + 1000/2) / 1000))) / 2) / (( ((1193182 / ((1193182 + 1000/2) / 1000)) << 8) + (((1193182 % ((1193182 + 1000/2) / 1000)) << 8) + ((1193182 + 1000/2) / 1000) / 2) / ((1193182 + 1000/2) / 1000)))))) / (1000000000L));
  nsec = 0;
 }
 return (((u64)sec * ((unsigned long)((((u64)(1000000000L) << (32 - 10)) + (( ((1000000UL * 1000 / (( ((1193182 / ((1193182 + 1000/2) / 1000)) << 8) + (((1193182 % ((1193182 + 1000/2) / 1000)) << 8) + ((1193182 + 1000/2) / 1000) / 2) / ((1193182 + 1000/2) / 1000)))) << 8) + (((1000000UL * 1000 % (( ((1193182 / ((1193182 + 1000/2) / 1000)) << 8) + (((1193182 % ((1193182 + 1000/2) / 1000)) << 8) + ((1193182 + 1000/2) / 1000) / 2) / ((1193182 + 1000/2) / 1000)))) << 8) + (( ((1193182 / ((1193182 + 1000/2) / 1000)) << 8) + (((1193182 % ((1193182 + 1000/2) / 1000)) << 8) + ((1193182 + 1000/2) / 1000) / 2) / ((1193182 + 1000/2) / 1000))) / 2) / (( ((1193182 / ((1193182 + 1000/2) / 1000)) << 8) + (((1193182 % ((1193182 + 1000/2) / 1000)) << 8) + ((1193182 + 1000/2) / 1000) / 2) / ((1193182 + 1000/2) / 1000))))) -1) / (u64)(( ((1000000UL * 1000 / (( ((1193182 / ((1193182 + 1000/2) / 1000)) << 8) + (((1193182 % ((1193182 + 1000/2) / 1000)) << 8) + ((1193182 + 1000/2) / 1000) / 2) / ((1193182 + 1000/2) / 1000)))) << 8) + (((1000000UL * 1000 % (( ((1193182 / ((1193182 + 1000/2) / 1000)) << 8) + (((1193182 % ((1193182 + 1000/2) / 1000)) << 8) + ((1193182 + 1000/2) / 1000) / 2) / ((1193182 + 1000/2) / 1000)))) << 8) + (( ((1193182 / ((1193182 + 1000/2) / 1000)) << 8) + (((1193182 % ((1193182 + 1000/2) / 1000)) << 8) + ((1193182 + 1000/2) / 1000) / 2) / ((1193182 + 1000/2) / 1000))) / 2) / (( ((1193182 / ((1193182 + 1000/2) / 1000)) << 8) + (((1193182 % ((1193182 + 1000/2) / 1000)) << 8) + ((1193182 + 1000/2) / 1000) / 2) / ((1193182 + 1000/2) / 1000)))))))) +
  (((u64)nsec * ((unsigned long)((((u64)1 << ((32 - 10) + 29)) + (( ((1000000UL * 1000 / (( ((1193182 / ((1193182 + 1000/2) / 1000)) << 8) + (((1193182 % ((1193182 + 1000/2) / 1000)) << 8) + ((1193182 + 1000/2) / 1000) / 2) / ((1193182 + 1000/2) / 1000)))) << 8) + (((1000000UL * 1000 % (( ((1193182 / ((1193182 + 1000/2) / 1000)) << 8) + (((1193182 % ((1193182 + 1000/2) / 1000)) << 8) + ((1193182 + 1000/2) / 1000) / 2) / ((1193182 + 1000/2) / 1000)))) << 8) + (( ((1193182 / ((1193182 + 1000/2) / 1000)) << 8) + (((1193182 % ((1193182 + 1000/2) / 1000)) << 8) + ((1193182 + 1000/2) / 1000) / 2) / ((1193182 + 1000/2) / 1000))) / 2) / (( ((1193182 / ((1193182 + 1000/2) / 1000)) << 8) + (((1193182 % ((1193182 + 1000/2) / 1000)) << 8) + ((1193182 + 1000/2) / 1000) / 2) / ((1193182 + 1000/2) / 1000))))) -1) / (u64)(( ((1000000UL * 1000 / (( ((1193182 / ((1193182 + 1000/2) / 1000)) << 8) + (((1193182 % ((1193182 + 1000/2) / 1000)) << 8) + ((1193182 + 1000/2) / 1000) / 2) / ((1193182 + 1000/2) / 1000)))) << 8) + (((1000000UL * 1000 % (( ((1193182 / ((1193182 + 1000/2) / 1000)) << 8) + (((1193182 % ((1193182 + 1000/2) / 1000)) << 8) + ((1193182 + 1000/2) / 1000) / 2) / ((1193182 + 1000/2) / 1000)))) << 8) + (( ((1193182 / ((1193182 + 1000/2) / 1000)) << 8) + (((1193182 % ((1193182 + 1000/2) / 1000)) << 8) + ((1193182 + 1000/2) / 1000) / 2) / ((1193182 + 1000/2) / 1000))) / 2) / (( ((1193182 / ((1193182 + 1000/2) / 1000)) << 8) + (((1193182 % ((1193182 + 1000/2) / 1000)) << 8) + ((1193182 + 1000/2) / 1000) / 2) / ((1193182 + 1000/2) / 1000)))))))) >>
   (((32 - 10) + 29) - (32 - 10)))) >> (32 - 10);

}

static __inline__  __attribute__((always_inline)) void
jiffies_to_timespec(const unsigned long jiffies, struct timespec *value)
{




 u64 nsec = (u64)jiffies * (( ((1000000UL * 1000 / (( ((1193182 / ((1193182 + 1000/2) / 1000)) << 8) + (((1193182 % ((1193182 + 1000/2) / 1000)) << 8) + ((1193182 + 1000/2) / 1000) / 2) / ((1193182 + 1000/2) / 1000)))) << 8) + (((1000000UL * 1000 % (( ((1193182 / ((1193182 + 1000/2) / 1000)) << 8) + (((1193182 % ((1193182 + 1000/2) / 1000)) << 8) + ((1193182 + 1000/2) / 1000) / 2) / ((1193182 + 1000/2) / 1000)))) << 8) + (( ((1193182 / ((1193182 + 1000/2) / 1000)) << 8) + (((1193182 % ((1193182 + 1000/2) / 1000)) << 8) + ((1193182 + 1000/2) / 1000) / 2) / ((1193182 + 1000/2) / 1000))) / 2) / (( ((1193182 / ((1193182 + 1000/2) / 1000)) << 8) + (((1193182 % ((1193182 + 1000/2) / 1000)) << 8) + ((1193182 + 1000/2) / 1000) / 2) / ((1193182 + 1000/2) / 1000)))));
 value->tv_sec = div_ll_X_l_rem(nsec,(1000000000L),&value->tv_nsec);
}
# 334 "linux-2.6/include/linux/jiffies.h"
static __inline__  __attribute__((always_inline)) unsigned long
timeval_to_jiffies(const struct timeval *value)
{
 unsigned long sec = value->tv_sec;
 long usec = value->tv_usec;

 if (sec >= (long)((u64)((u64)((~0UL >> 1)-1) * (( ((1000000UL * 1000 / (( ((1193182 / ((1193182 + 1000/2) / 1000)) << 8) + (((1193182 % ((1193182 + 1000/2) / 1000)) << 8) + ((1193182 + 1000/2) / 1000) / 2) / ((1193182 + 1000/2) / 1000)))) << 8) + (((1000000UL * 1000 % (( ((1193182 / ((1193182 + 1000/2) / 1000)) << 8) + (((1193182 % ((1193182 + 1000/2) / 1000)) << 8) + ((1193182 + 1000/2) / 1000) / 2) / ((1193182 + 1000/2) / 1000)))) << 8) + (( ((1193182 / ((1193182 + 1000/2) / 1000)) << 8) + (((1193182 % ((1193182 + 1000/2) / 1000)) << 8) + ((1193182 + 1000/2) / 1000) / 2) / ((1193182 + 1000/2) / 1000))) / 2) / (( ((1193182 / ((1193182 + 1000/2) / 1000)) << 8) + (((1193182 % ((1193182 + 1000/2) / 1000)) << 8) + ((1193182 + 1000/2) / 1000) / 2) / ((1193182 + 1000/2) / 1000)))))) / (1000000000L))){
  sec = (long)((u64)((u64)((~0UL >> 1)-1) * (( ((1000000UL * 1000 / (( ((1193182 / ((1193182 + 1000/2) / 1000)) << 8) + (((1193182 % ((1193182 + 1000/2) / 1000)) << 8) + ((1193182 + 1000/2) / 1000) / 2) / ((1193182 + 1000/2) / 1000)))) << 8) + (((1000000UL * 1000 % (( ((1193182 / ((1193182 + 1000/2) / 1000)) << 8) + (((1193182 % ((1193182 + 1000/2) / 1000)) << 8) + ((1193182 + 1000/2) / 1000) / 2) / ((1193182 + 1000/2) / 1000)))) << 8) + (( ((1193182 / ((1193182 + 1000/2) / 1000)) << 8) + (((1193182 % ((1193182 + 1000/2) / 1000)) << 8) + ((1193182 + 1000/2) / 1000) / 2) / ((1193182 + 1000/2) / 1000))) / 2) / (( ((1193182 / ((1193182 + 1000/2) / 1000)) << 8) + (((1193182 % ((1193182 + 1000/2) / 1000)) << 8) + ((1193182 + 1000/2) / 1000) / 2) / ((1193182 + 1000/2) / 1000)))))) / (1000000000L));
  usec = 0;
 }
 return (((u64)sec * ((unsigned long)((((u64)(1000000000L) << (32 - 10)) + (( ((1000000UL * 1000 / (( ((1193182 / ((1193182 + 1000/2) / 1000)) << 8) + (((1193182 % ((1193182 + 1000/2) / 1000)) << 8) + ((1193182 + 1000/2) / 1000) / 2) / ((1193182 + 1000/2) / 1000)))) << 8) + (((1000000UL * 1000 % (( ((1193182 / ((1193182 + 1000/2) / 1000)) << 8) + (((1193182 % ((1193182 + 1000/2) / 1000)) << 8) + ((1193182 + 1000/2) / 1000) / 2) / ((1193182 + 1000/2) / 1000)))) << 8) + (( ((1193182 / ((1193182 + 1000/2) / 1000)) << 8) + (((1193182 % ((1193182 + 1000/2) / 1000)) << 8) + ((1193182 + 1000/2) / 1000) / 2) / ((1193182 + 1000/2) / 1000))) / 2) / (( ((1193182 / ((1193182 + 1000/2) / 1000)) << 8) + (((1193182 % ((1193182 + 1000/2) / 1000)) << 8) + ((1193182 + 1000/2) / 1000) / 2) / ((1193182 + 1000/2) / 1000))))) -1) / (u64)(( ((1000000UL * 1000 / (( ((1193182 / ((1193182 + 1000/2) / 1000)) << 8) + (((1193182 % ((1193182 + 1000/2) / 1000)) << 8) + ((1193182 + 1000/2) / 1000) / 2) / ((1193182 + 1000/2) / 1000)))) << 8) + (((1000000UL * 1000 % (( ((1193182 / ((1193182 + 1000/2) / 1000)) << 8) + (((1193182 % ((1193182 + 1000/2) / 1000)) << 8) + ((1193182 + 1000/2) / 1000) / 2) / ((1193182 + 1000/2) / 1000)))) << 8) + (( ((1193182 / ((1193182 + 1000/2) / 1000)) << 8) + (((1193182 % ((1193182 + 1000/2) / 1000)) << 8) + ((1193182 + 1000/2) / 1000) / 2) / ((1193182 + 1000/2) / 1000))) / 2) / (( ((1193182 / ((1193182 + 1000/2) / 1000)) << 8) + (((1193182 % ((1193182 + 1000/2) / 1000)) << 8) + ((1193182 + 1000/2) / 1000) / 2) / ((1193182 + 1000/2) / 1000)))))))) +
  (((u64)usec * ((unsigned long)((((u64)(1000L) << ((32 - 10) + 19)) + (( ((1000000UL * 1000 / (( ((1193182 / ((1193182 + 1000/2) / 1000)) << 8) + (((1193182 % ((1193182 + 1000/2) / 1000)) << 8) + ((1193182 + 1000/2) / 1000) / 2) / ((1193182 + 1000/2) / 1000)))) << 8) + (((1000000UL * 1000 % (( ((1193182 / ((1193182 + 1000/2) / 1000)) << 8) + (((1193182 % ((1193182 + 1000/2) / 1000)) << 8) + ((1193182 + 1000/2) / 1000) / 2) / ((1193182 + 1000/2) / 1000)))) << 8) + (( ((1193182 / ((1193182 + 1000/2) / 1000)) << 8) + (((1193182 % ((1193182 + 1000/2) / 1000)) << 8) + ((1193182 + 1000/2) / 1000) / 2) / ((1193182 + 1000/2) / 1000))) / 2) / (( ((1193182 / ((1193182 + 1000/2) / 1000)) << 8) + (((1193182 % ((1193182 + 1000/2) / 1000)) << 8) + ((1193182 + 1000/2) / 1000) / 2) / ((1193182 + 1000/2) / 1000))))) -1) / (u64)(( ((1000000UL * 1000 / (( ((1193182 / ((1193182 + 1000/2) / 1000)) << 8) + (((1193182 % ((1193182 + 1000/2) / 1000)) << 8) + ((1193182 + 1000/2) / 1000) / 2) / ((1193182 + 1000/2) / 1000)))) << 8) + (((1000000UL * 1000 % (( ((1193182 / ((1193182 + 1000/2) / 1000)) << 8) + (((1193182 % ((1193182 + 1000/2) / 1000)) << 8) + ((1193182 + 1000/2) / 1000) / 2) / ((1193182 + 1000/2) / 1000)))) << 8) + (( ((1193182 / ((1193182 + 1000/2) / 1000)) << 8) + (((1193182 % ((1193182 + 1000/2) / 1000)) << 8) + ((1193182 + 1000/2) / 1000) / 2) / ((1193182 + 1000/2) / 1000))) / 2) / (( ((1193182 / ((1193182 + 1000/2) / 1000)) << 8) + (((1193182 % ((1193182 + 1000/2) / 1000)) << 8) + ((1193182 + 1000/2) / 1000) / 2) / ((1193182 + 1000/2) / 1000))))))) + (u64)(((u64)1 << ((32 - 10) + 19)) - 1)) >>
   (((32 - 10) + 19) - (32 - 10)))) >> (32 - 10);
}

static __inline__  __attribute__((always_inline)) void
jiffies_to_timeval(const unsigned long jiffies, struct timeval *value)
{




 u64 nsec = (u64)jiffies * (( ((1000000UL * 1000 / (( ((1193182 / ((1193182 + 1000/2) / 1000)) << 8) + (((1193182 % ((1193182 + 1000/2) / 1000)) << 8) + ((1193182 + 1000/2) / 1000) / 2) / ((1193182 + 1000/2) / 1000)))) << 8) + (((1000000UL * 1000 % (( ((1193182 / ((1193182 + 1000/2) / 1000)) << 8) + (((1193182 % ((1193182 + 1000/2) / 1000)) << 8) + ((1193182 + 1000/2) / 1000) / 2) / ((1193182 + 1000/2) / 1000)))) << 8) + (( ((1193182 / ((1193182 + 1000/2) / 1000)) << 8) + (((1193182 % ((1193182 + 1000/2) / 1000)) << 8) + ((1193182 + 1000/2) / 1000) / 2) / ((1193182 + 1000/2) / 1000))) / 2) / (( ((1193182 / ((1193182 + 1000/2) / 1000)) << 8) + (((1193182 % ((1193182 + 1000/2) / 1000)) << 8) + ((1193182 + 1000/2) / 1000) / 2) / ((1193182 + 1000/2) / 1000)))));
 value->tv_sec = div_ll_X_l_rem(nsec,(1000000000L),&value->tv_usec);
 value->tv_usec /= (1000L);
}




static inline  __attribute__((always_inline)) clock_t jiffies_to_clock_t(long x)
{



 u64 tmp = (u64)x * (( ((1000000UL * 1000 / (( ((1193182 / ((1193182 + 1000/2) / 1000)) << 8) + (((1193182 % ((1193182 + 1000/2) / 1000)) << 8) + ((1193182 + 1000/2) / 1000) / 2) / ((1193182 + 1000/2) / 1000)))) << 8) + (((1000000UL * 1000 % (( ((1193182 / ((1193182 + 1000/2) / 1000)) << 8) + (((1193182 % ((1193182 + 1000/2) / 1000)) << 8) + ((1193182 + 1000/2) / 1000) / 2) / ((1193182 + 1000/2) / 1000)))) << 8) + (( ((1193182 / ((1193182 + 1000/2) / 1000)) << 8) + (((1193182 % ((1193182 + 1000/2) / 1000)) << 8) + ((1193182 + 1000/2) / 1000) / 2) / ((1193182 + 1000/2) / 1000))) / 2) / (( ((1193182 / ((1193182 + 1000/2) / 1000)) << 8) + (((1193182 % ((1193182 + 1000/2) / 1000)) << 8) + ((1193182 + 1000/2) / 1000) / 2) / ((1193182 + 1000/2) / 1000)))));
 ({ unsigned long __upper, __low, __high, __mod, __base; __base = (((1000000000L) / 100)); asm("":"=a" (__low), "=d" (__high):"A" (tmp)); __upper = __high; if (__high) { __upper = __high % (__base); __high = __high / (__base); } asm("divl %2":"=a" (__low), "=d" (__mod):"rm" (__base), "0" (__low), "1" (__upper)); asm("":"=A" (tmp):"a" (__low),"d" (__high)); __mod; });
 return (long)tmp;

}

static inline  __attribute__((always_inline)) unsigned long clock_t_to_jiffies(unsigned long x)
{

 if (x >= ~0UL / (1000 / 100))
  return ~0UL;
 return x * (1000 / 100);
# 393 "linux-2.6/include/linux/jiffies.h"
}

static inline  __attribute__((always_inline)) u64 jiffies_64_to_clock_t(u64 x)
{
# 405 "linux-2.6/include/linux/jiffies.h"
 x *= (( ((1000000UL * 1000 / (( ((1193182 / ((1193182 + 1000/2) / 1000)) << 8) + (((1193182 % ((1193182 + 1000/2) / 1000)) << 8) + ((1193182 + 1000/2) / 1000) / 2) / ((1193182 + 1000/2) / 1000)))) << 8) + (((1000000UL * 1000 % (( ((1193182 / ((1193182 + 1000/2) / 1000)) << 8) + (((1193182 % ((1193182 + 1000/2) / 1000)) << 8) + ((1193182 + 1000/2) / 1000) / 2) / ((1193182 + 1000/2) / 1000)))) << 8) + (( ((1193182 / ((1193182 + 1000/2) / 1000)) << 8) + (((1193182 % ((1193182 + 1000/2) / 1000)) << 8) + ((1193182 + 1000/2) / 1000) / 2) / ((1193182 + 1000/2) / 1000))) / 2) / (( ((1193182 / ((1193182 + 1000/2) / 1000)) << 8) + (((1193182 % ((1193182 + 1000/2) / 1000)) << 8) + ((1193182 + 1000/2) / 1000) / 2) / ((1193182 + 1000/2) / 1000)))));
 ({ unsigned long __upper, __low, __high, __mod, __base; __base = (((1000000000L) / 100)); asm("":"=a" (__low), "=d" (__high):"A" (x)); __upper = __high; if (__high) { __upper = __high % (__base); __high = __high / (__base); } asm("divl %2":"=a" (__low), "=d" (__mod):"rm" (__base), "0" (__low), "1" (__upper)); asm("":"=A" (x):"a" (__low),"d" (__high)); __mod; });

 return x;
}

static inline  __attribute__((always_inline)) u64 nsec_to_clock_t(u64 x)
{

 ({ unsigned long __upper, __low, __high, __mod, __base; __base = (((1000000000L) / 100)); asm("":"=a" (__low), "=d" (__high):"A" (x)); __upper = __high; if (__high) { __upper = __high % (__base); __high = __high / (__base); } asm("divl %2":"=a" (__low), "=d" (__mod):"rm" (__base), "0" (__low), "1" (__upper)); asm("":"=A" (x):"a" (__low),"d" (__high)); __mod; });
# 428 "linux-2.6/include/linux/jiffies.h"
 return x;
}
# 13 "linux-2.6/include/linux/sched.h" 2
# 1 "linux-2.6/include/linux/rbtree.h" 1
# 100 "linux-2.6/include/linux/rbtree.h"
struct rb_node
{
 struct rb_node *rb_parent;
 int rb_color;


 struct rb_node *rb_right;
 struct rb_node *rb_left;
};

struct rb_root
{
 struct rb_node *rb_node;
};




extern void rb_insert_color(struct rb_node *, struct rb_root *);
extern void rb_erase(struct rb_node *, struct rb_root *);


extern struct rb_node *rb_next(struct rb_node *);
extern struct rb_node *rb_prev(struct rb_node *);
extern struct rb_node *rb_first(struct rb_root *);
extern struct rb_node *rb_last(struct rb_root *);


extern void rb_replace_node(struct rb_node *victim, struct rb_node *new,
       struct rb_root *root);

static inline  __attribute__((always_inline)) void rb_link_node(struct rb_node * node, struct rb_node * parent,
    struct rb_node ** rb_link)
{
 node->rb_parent = parent;
 node->rb_color = 0;
 node->rb_left = node->rb_right = ((void *)0);

 *rb_link = node;
}
# 14 "linux-2.6/include/linux/sched.h" 2

# 1 "linux-2.6/include/linux/cpumask.h" 1
# 78 "linux-2.6/include/linux/cpumask.h"
# 1 "linux-2.6/include/linux/bitmap.h" 1







# 1 "linux-2.6/include/linux/string.h" 1
# 16 "linux-2.6/include/linux/string.h"
extern char * strpbrk(const char *,const char *);
extern char * strsep(char **,const char *);
extern __kernel_size_t strspn(const char *,const char *);
extern __kernel_size_t strcspn(const char *,const char *);




# 1 "linux-2.6/include/asm/string.h" 1
# 31 "linux-2.6/include/asm/string.h"
static inline  __attribute__((always_inline)) char * strcpy(char * dest,const char *src)
{
int d0, d1, d2;
__asm__ __volatile__(
 "1:\tlodsb\n\t"
 "stosb\n\t"
 "testb %%al,%%al\n\t"
 "jne 1b"
 : "=&S" (d0), "=&D" (d1), "=&a" (d2)
 :"0" (src),"1" (dest) : "memory");
return dest;
}


static inline  __attribute__((always_inline)) char * strncpy(char * dest,const char *src,size_t count)
{
int d0, d1, d2, d3;
__asm__ __volatile__(
 "1:\tdecl %2\n\t"
 "js 2f\n\t"
 "lodsb\n\t"
 "stosb\n\t"
 "testb %%al,%%al\n\t"
 "jne 1b\n\t"
 "rep\n\t"
 "stosb\n"
 "2:"
 : "=&S" (d0), "=&D" (d1), "=&c" (d2), "=&a" (d3)
 :"0" (src),"1" (dest),"2" (count) : "memory");
return dest;
}


static inline  __attribute__((always_inline)) char * strcat(char * dest,const char * src)
{
int d0, d1, d2, d3;
__asm__ __volatile__(
 "repne\n\t"
 "scasb\n\t"
 "decl %1\n"
 "1:\tlodsb\n\t"
 "stosb\n\t"
 "testb %%al,%%al\n\t"
 "jne 1b"
 : "=&S" (d0), "=&D" (d1), "=&a" (d2), "=&c" (d3)
 : "0" (src), "1" (dest), "2" (0), "3" (0xffffffffu):"memory");
return dest;
}


static inline  __attribute__((always_inline)) char * strncat(char * dest,const char * src,size_t count)
{
int d0, d1, d2, d3;
__asm__ __volatile__(
 "repne\n\t"
 "scasb\n\t"
 "decl %1\n\t"
 "movl %8,%3\n"
 "1:\tdecl %3\n\t"
 "js 2f\n\t"
 "lodsb\n\t"
 "stosb\n\t"
 "testb %%al,%%al\n\t"
 "jne 1b\n"
 "2:\txorl %2,%2\n\t"
 "stosb"
 : "=&S" (d0), "=&D" (d1), "=&a" (d2), "=&c" (d3)
 : "0" (src),"1" (dest),"2" (0),"3" (0xffffffffu), "g" (count)
 : "memory");
return dest;
}


static inline  __attribute__((always_inline)) int strcmp(const char * cs,const char * ct)
{
int d0, d1;
register int __res;
__asm__ __volatile__(
 "1:\tlodsb\n\t"
 "scasb\n\t"
 "jne 2f\n\t"
 "testb %%al,%%al\n\t"
 "jne 1b\n\t"
 "xorl %%eax,%%eax\n\t"
 "jmp 3f\n"
 "2:\tsbbl %%eax,%%eax\n\t"
 "orb $1,%%al\n"
 "3:"
 :"=a" (__res), "=&S" (d0), "=&D" (d1)
       :"1" (cs),"2" (ct));
return __res;
}


static inline  __attribute__((always_inline)) int strncmp(const char * cs,const char * ct,size_t count)
{
register int __res;
int d0, d1, d2;
__asm__ __volatile__(
 "1:\tdecl %3\n\t"
 "js 2f\n\t"
 "lodsb\n\t"
 "scasb\n\t"
 "jne 3f\n\t"
 "testb %%al,%%al\n\t"
 "jne 1b\n"
 "2:\txorl %%eax,%%eax\n\t"
 "jmp 4f\n"
 "3:\tsbbl %%eax,%%eax\n\t"
 "orb $1,%%al\n"
 "4:"
       :"=a" (__res), "=&S" (d0), "=&D" (d1), "=&c" (d2)
       :"1" (cs),"2" (ct),"3" (count));
return __res;
}


static inline  __attribute__((always_inline)) char * strchr(const char * s, int c)
{
int d0;
register char * __res;
__asm__ __volatile__(
 "movb %%al,%%ah\n"
 "1:\tlodsb\n\t"
 "cmpb %%ah,%%al\n\t"
 "je 2f\n\t"
 "testb %%al,%%al\n\t"
 "jne 1b\n\t"
 "movl $1,%1\n"
 "2:\tmovl %1,%0\n\t"
 "decl %0"
 :"=a" (__res), "=&S" (d0) : "1" (s),"0" (c));
return __res;
}


static inline  __attribute__((always_inline)) char * strrchr(const char * s, int c)
{
int d0, d1;
register char * __res;
__asm__ __volatile__(
 "movb %%al,%%ah\n"
 "1:\tlodsb\n\t"
 "cmpb %%ah,%%al\n\t"
 "jne 2f\n\t"
 "leal -1(%%esi),%0\n"
 "2:\ttestb %%al,%%al\n\t"
 "jne 1b"
 :"=g" (__res), "=&S" (d0), "=&a" (d1) :"0" (0),"1" (s),"2" (c));
return __res;
}




static inline  __attribute__((always_inline)) size_t strlen(const char * s)
{
int d0;
register int __res;
__asm__ __volatile__(
 "repne\n\t"
 "scasb\n\t"
 "notl %0\n\t"
 "decl %0"
 :"=c" (__res), "=&D" (d0) :"1" (s),"a" (0), "0" (0xffffffffu));
return __res;
}

static inline  __attribute__((always_inline)) void * __memcpy(void * to, const void * from, size_t n)
{
int d0, d1, d2;
__asm__ __volatile__(
 "rep ; movsl\n\t"
 "testb $2,%b4\n\t"
 "je 1f\n\t"
 "movsw\n"
 "1:\ttestb $1,%b4\n\t"
 "je 2f\n\t"
 "movsb\n"
 "2:"
 : "=&c" (d0), "=&D" (d1), "=&S" (d2)
 :"0" (n/4), "q" (n),"1" ((long) to),"2" ((long) from)
 : "memory");
return (to);
}





static inline  __attribute__((always_inline)) void * __constant_memcpy(void * to, const void * from, size_t n)
{
 if (n <= 128)
  return __builtin_memcpy(to, from, n);
# 233 "linux-2.6/include/asm/string.h"
{
 int d0, d1, d2;
 switch (n % 4) {
  case 0: __asm__ __volatile__( "rep ; movsl" "" : "=&c" (d0), "=&D" (d1), "=&S" (d2) : "0" (n/4),"1" ((long) to),"2" ((long) from) : "memory");; return to;
  case 1: __asm__ __volatile__( "rep ; movsl" "\n\tmovsb" : "=&c" (d0), "=&D" (d1), "=&S" (d2) : "0" (n/4),"1" ((long) to),"2" ((long) from) : "memory");; return to;
  case 2: __asm__ __volatile__( "rep ; movsl" "\n\tmovsw" : "=&c" (d0), "=&D" (d1), "=&S" (d2) : "0" (n/4),"1" ((long) to),"2" ((long) from) : "memory");; return to;
  default: __asm__ __volatile__( "rep ; movsl" "\n\tmovsw\n\tmovsb" : "=&c" (d0), "=&D" (d1), "=&S" (d2) : "0" (n/4),"1" ((long) to),"2" ((long) from) : "memory");; return to;
 }
}


}
# 289 "linux-2.6/include/asm/string.h"
void *memmove(void * dest,const void * src, size_t n);




static inline  __attribute__((always_inline)) void * memchr(const void * cs,int c,size_t count)
{
int d0;
register void * __res;
if (!count)
 return ((void *)0);
__asm__ __volatile__(
 "repne\n\t"
 "scasb\n\t"
 "je 1f\n\t"
 "movl $1,%0\n"
 "1:\tdecl %0"
 :"=D" (__res), "=&c" (d0) : "a" (c),"0" (cs),"1" (count));
return __res;
}

static inline  __attribute__((always_inline)) void * __memset_generic(void * s, char c,size_t count)
{
int d0, d1;
__asm__ __volatile__(
 "rep\n\t"
 "stosb"
 : "=&c" (d0), "=&D" (d1)
 :"a" (c),"1" (s),"0" (count)
 :"memory");
return s;
}
# 330 "linux-2.6/include/asm/string.h"
static inline  __attribute__((always_inline)) void * __constant_c_memset(void * s, unsigned long c, size_t count)
{
int d0, d1;
__asm__ __volatile__(
 "rep ; stosl\n\t"
 "testb $2,%b3\n\t"
 "je 1f\n\t"
 "stosw\n"
 "1:\ttestb $1,%b3\n\t"
 "je 2f\n\t"
 "stosb\n"
 "2:"
 : "=&c" (d0), "=&D" (d1)
 :"a" (c), "q" (count), "0" (count/4), "1" ((long) s)
 :"memory");
return (s);
}



static inline  __attribute__((always_inline)) size_t strnlen(const char * s, size_t count)
{
int d0;
register int __res;
__asm__ __volatile__(
 "movl %2,%0\n\t"
 "jmp 2f\n"
 "1:\tcmpb $0,(%0)\n\t"
 "je 3f\n\t"
 "incl %0\n"
 "2:\tdecl %1\n\t"
 "cmpl $-1,%1\n\t"
 "jne 1b\n"
 "3:\tsubl %2,%0"
 :"=a" (__res), "=&d" (d0)
 :"c" (s),"1" (count));
return __res;
}




extern char *strstr(const char *cs, const char *ct);





static inline  __attribute__((always_inline)) void * __constant_c_and_count_memset(void * s, unsigned long pattern, size_t count)
{
 switch (count) {
  case 0:
   return s;
  case 1:
   *(unsigned char *)s = pattern;
   return s;
  case 2:
   *(unsigned short *)s = pattern;
   return s;
  case 3:
   *(unsigned short *)s = pattern;
   *(2+(unsigned char *)s) = pattern;
   return s;
  case 4:
   *(unsigned long *)s = pattern;
   return s;
 }







{
 int d0, d1;
 switch (count % 4) {
  case 0: __asm__ __volatile__( "rep ; stosl" "" : "=&c" (d0), "=&D" (d1) : "a" (pattern),"0" (count/4),"1" ((long) s) : "memory"); return s;
  case 1: __asm__ __volatile__( "rep ; stosl" "\n\tstosb" : "=&c" (d0), "=&D" (d1) : "a" (pattern),"0" (count/4),"1" ((long) s) : "memory"); return s;
  case 2: __asm__ __volatile__( "rep ; stosl" "\n\tstosw" : "=&c" (d0), "=&D" (d1) : "a" (pattern),"0" (count/4),"1" ((long) s) : "memory"); return s;
  default: __asm__ __volatile__( "rep ; stosl" "\n\tstosw\n\tstosb" : "=&c" (d0), "=&D" (d1) : "a" (pattern),"0" (count/4),"1" ((long) s) : "memory"); return s;
 }
}


}
# 437 "linux-2.6/include/asm/string.h"
static inline  __attribute__((always_inline)) void * memscan(void * addr, int c, size_t size)
{
 if (!size)
  return addr;
 __asm__("repnz; scasb\n\t"
  "jnz 1f\n\t"
  "dec %%edi\n"
  "1:"
  : "=D" (addr), "=c" (size)
  : "0" (addr), "1" (size), "a" (c));
 return addr;
}
# 25 "linux-2.6/include/linux/string.h" 2
# 33 "linux-2.6/include/linux/string.h"
size_t strlcpy(char *, const char *, size_t);
# 42 "linux-2.6/include/linux/string.h"
extern size_t strlcat(char *, const char *, __kernel_size_t);
# 51 "linux-2.6/include/linux/string.h"
extern int strnicmp(const char *, const char *, __kernel_size_t);





extern char * strnchr(const char *, size_t, int);
# 85 "linux-2.6/include/linux/string.h"
extern int __builtin_memcmp(const void *,const void *,__kernel_size_t);
# 9 "linux-2.6/include/linux/bitmap.h" 2
# 73 "linux-2.6/include/linux/bitmap.h"
extern int __bitmap_empty(const unsigned long *bitmap, int bits);
extern int __bitmap_full(const unsigned long *bitmap, int bits);
extern int __bitmap_equal(const unsigned long *bitmap1,
                 const unsigned long *bitmap2, int bits);
extern void __bitmap_complement(unsigned long *dst, const unsigned long *src,
   int bits);
extern void __bitmap_shift_right(unsigned long *dst,
                        const unsigned long *src, int shift, int bits);
extern void __bitmap_shift_left(unsigned long *dst,
                        const unsigned long *src, int shift, int bits);
extern void __bitmap_and(unsigned long *dst, const unsigned long *bitmap1,
   const unsigned long *bitmap2, int bits);
extern void __bitmap_or(unsigned long *dst, const unsigned long *bitmap1,
   const unsigned long *bitmap2, int bits);
extern void __bitmap_xor(unsigned long *dst, const unsigned long *bitmap1,
   const unsigned long *bitmap2, int bits);
extern void __bitmap_andnot(unsigned long *dst, const unsigned long *bitmap1,
   const unsigned long *bitmap2, int bits);
extern int __bitmap_intersects(const unsigned long *bitmap1,
   const unsigned long *bitmap2, int bits);
extern int __bitmap_subset(const unsigned long *bitmap1,
   const unsigned long *bitmap2, int bits);
extern int __bitmap_weight(const unsigned long *bitmap, int bits);

extern int bitmap_scnprintf(char *buf, unsigned int len,
   const unsigned long *src, int nbits);
extern int bitmap_parse(const char *ubuf, unsigned int ulen,
   unsigned long *dst, int nbits);
extern int bitmap_find_free_region(unsigned long *bitmap, int bits, int order);
extern void bitmap_release_region(unsigned long *bitmap, int pos, int order);
extern int bitmap_allocate_region(unsigned long *bitmap, int pos, int order);







static inline  __attribute__((always_inline)) void bitmap_zero(unsigned long *dst, int nbits)
{
 if (nbits <= 32)
  *dst = 0UL;
 else {
  int len = (((nbits)+32 -1)/32) * sizeof(unsigned long);
  (__builtin_constant_p(0) ? (__builtin_constant_p((len)) ? __constant_c_and_count_memset(((dst)),((0x01010101UL*(unsigned char)(0))),((len))) : __constant_c_memset(((dst)),((0x01010101UL*(unsigned char)(0))),((len)))) : (__builtin_constant_p((len)) ? __memset_generic((((dst))),(((0))),(((len)))) : __memset_generic(((dst)),((0)),((len)))));
 }
}

static inline  __attribute__((always_inline)) void bitmap_fill(unsigned long *dst, int nbits)
{
 size_t nlongs = (((nbits)+32 -1)/32);
 if (nlongs > 1) {
  int len = (nlongs - 1) * sizeof(unsigned long);
  (__builtin_constant_p(0xff) ? (__builtin_constant_p((len)) ? __constant_c_and_count_memset(((dst)),((0x01010101UL*(unsigned char)(0xff))),((len))) : __constant_c_memset(((dst)),((0x01010101UL*(unsigned char)(0xff))),((len)))) : (__builtin_constant_p((len)) ? __memset_generic((((dst))),(((0xff))),(((len)))) : __memset_generic(((dst)),((0xff)),((len)))));
 }
 dst[nlongs - 1] = ( ((nbits) % 32) ? (1UL<<((nbits) % 32))-1 : ~0UL );
}

static inline  __attribute__((always_inline)) void bitmap_copy(unsigned long *dst, const unsigned long *src,
   int nbits)
{
 if (nbits <= 32)
  *dst = *src;
 else {
  int len = (((nbits)+32 -1)/32) * sizeof(unsigned long);
  (__builtin_constant_p(len) ? __constant_memcpy((dst),(src),(len)) : __memcpy((dst),(src),(len)));
 }
}

static inline  __attribute__((always_inline)) void bitmap_and(unsigned long *dst, const unsigned long *src1,
   const unsigned long *src2, int nbits)
{
 if (nbits <= 32)
  *dst = *src1 & *src2;
 else
  __bitmap_and(dst, src1, src2, nbits);
}

static inline  __attribute__((always_inline)) void bitmap_or(unsigned long *dst, const unsigned long *src1,
   const unsigned long *src2, int nbits)
{
 if (nbits <= 32)
  *dst = *src1 | *src2;
 else
  __bitmap_or(dst, src1, src2, nbits);
}

static inline  __attribute__((always_inline)) void bitmap_xor(unsigned long *dst, const unsigned long *src1,
   const unsigned long *src2, int nbits)
{
 if (nbits <= 32)
  *dst = *src1 ^ *src2;
 else
  __bitmap_xor(dst, src1, src2, nbits);
}

static inline  __attribute__((always_inline)) void bitmap_andnot(unsigned long *dst, const unsigned long *src1,
   const unsigned long *src2, int nbits)
{
 if (nbits <= 32)
  *dst = *src1 & ~(*src2);
 else
  __bitmap_andnot(dst, src1, src2, nbits);
}

static inline  __attribute__((always_inline)) void bitmap_complement(unsigned long *dst, const unsigned long *src,
   int nbits)
{
 if (nbits <= 32)
  *dst = ~(*src) & ( ((nbits) % 32) ? (1UL<<((nbits) % 32))-1 : ~0UL );
 else
  __bitmap_complement(dst, src, nbits);
}

static inline  __attribute__((always_inline)) int bitmap_equal(const unsigned long *src1,
   const unsigned long *src2, int nbits)
{
 if (nbits <= 32)
  return ! ((*src1 ^ *src2) & ( ((nbits) % 32) ? (1UL<<((nbits) % 32))-1 : ~0UL ));
 else
  return __bitmap_equal(src1, src2, nbits);
}

static inline  __attribute__((always_inline)) int bitmap_intersects(const unsigned long *src1,
   const unsigned long *src2, int nbits)
{
 if (nbits <= 32)
  return ((*src1 & *src2) & ( ((nbits) % 32) ? (1UL<<((nbits) % 32))-1 : ~0UL )) != 0;
 else
  return __bitmap_intersects(src1, src2, nbits);
}

static inline  __attribute__((always_inline)) int bitmap_subset(const unsigned long *src1,
   const unsigned long *src2, int nbits)
{
 if (nbits <= 32)
  return ! ((*src1 & ~(*src2)) & ( ((nbits) % 32) ? (1UL<<((nbits) % 32))-1 : ~0UL ));
 else
  return __bitmap_subset(src1, src2, nbits);
}

static inline  __attribute__((always_inline)) int bitmap_empty(const unsigned long *src, int nbits)
{
 if (nbits <= 32)
  return ! (*src & ( ((nbits) % 32) ? (1UL<<((nbits) % 32))-1 : ~0UL ));
 else
  return __bitmap_empty(src, nbits);
}

static inline  __attribute__((always_inline)) int bitmap_full(const unsigned long *src, int nbits)
{
 if (nbits <= 32)
  return ! (~(*src) & ( ((nbits) % 32) ? (1UL<<((nbits) % 32))-1 : ~0UL ));
 else
  return __bitmap_full(src, nbits);
}

static inline  __attribute__((always_inline)) int bitmap_weight(const unsigned long *src, int nbits)
{
 return __bitmap_weight(src, nbits);
}

static inline  __attribute__((always_inline)) void bitmap_shift_right(unsigned long *dst,
   const unsigned long *src, int n, int nbits)
{
 if (nbits <= 32)
  *dst = *src >> n;
 else
  __bitmap_shift_right(dst, src, n, nbits);
}

static inline  __attribute__((always_inline)) void bitmap_shift_left(unsigned long *dst,
   const unsigned long *src, int n, int nbits)
{
 if (nbits <= 32)
  *dst = (*src << n) & ( ((nbits) % 32) ? (1UL<<((nbits) % 32))-1 : ~0UL );
 else
  __bitmap_shift_left(dst, src, n, nbits);
}
# 79 "linux-2.6/include/linux/cpumask.h" 2


typedef struct { unsigned long bits[(((1)+32 -1)/32)]; } cpumask_t;
typedef  cpumask_t  _GLOBAL_61_T; extern  _GLOBAL_61_T  global__unused_cpumask_arg_[NUM_STACKS];   


static inline  __attribute__((always_inline)) void __cpu_set(int cpu, volatile cpumask_t *dstp)
{
 set_bit(cpu, dstp->bits);
}


static inline  __attribute__((always_inline)) void __cpu_clear(int cpu, volatile cpumask_t *dstp)
{
 clear_bit(cpu, dstp->bits);
}


static inline  __attribute__((always_inline)) void __cpus_setall(cpumask_t *dstp, int nbits)
{
 bitmap_fill(dstp->bits, nbits);
}


static inline  __attribute__((always_inline)) void __cpus_clear(cpumask_t *dstp, int nbits)
{
 bitmap_zero(dstp->bits, nbits);
}





static inline  __attribute__((always_inline)) int __cpu_test_and_set(int cpu, cpumask_t *addr)
{
 return test_and_set_bit(cpu, addr->bits);
}


static inline  __attribute__((always_inline)) void __cpus_and(cpumask_t *dstp, const cpumask_t *src1p,
     const cpumask_t *src2p, int nbits)
{
 bitmap_and(dstp->bits, src1p->bits, src2p->bits, nbits);
}


static inline  __attribute__((always_inline)) void __cpus_or(cpumask_t *dstp, const cpumask_t *src1p,
     const cpumask_t *src2p, int nbits)
{
 bitmap_or(dstp->bits, src1p->bits, src2p->bits, nbits);
}


static inline  __attribute__((always_inline)) void __cpus_xor(cpumask_t *dstp, const cpumask_t *src1p,
     const cpumask_t *src2p, int nbits)
{
 bitmap_xor(dstp->bits, src1p->bits, src2p->bits, nbits);
}



static inline  __attribute__((always_inline)) void __cpus_andnot(cpumask_t *dstp, const cpumask_t *src1p,
     const cpumask_t *src2p, int nbits)
{
 bitmap_andnot(dstp->bits, src1p->bits, src2p->bits, nbits);
}


static inline  __attribute__((always_inline)) void __cpus_complement(cpumask_t *dstp,
     const cpumask_t *srcp, int nbits)
{
 bitmap_complement(dstp->bits, srcp->bits, nbits);
}


static inline  __attribute__((always_inline)) int __cpus_equal(const cpumask_t *src1p,
     const cpumask_t *src2p, int nbits)
{
 return bitmap_equal(src1p->bits, src2p->bits, nbits);
}


static inline  __attribute__((always_inline)) int __cpus_intersects(const cpumask_t *src1p,
     const cpumask_t *src2p, int nbits)
{
 return bitmap_intersects(src1p->bits, src2p->bits, nbits);
}


static inline  __attribute__((always_inline)) int __cpus_subset(const cpumask_t *src1p,
     const cpumask_t *src2p, int nbits)
{
 return bitmap_subset(src1p->bits, src2p->bits, nbits);
}


static inline  __attribute__((always_inline)) int __cpus_empty(const cpumask_t *srcp, int nbits)
{
 return bitmap_empty(srcp->bits, nbits);
}


static inline  __attribute__((always_inline)) int __cpus_full(const cpumask_t *srcp, int nbits)
{
 return bitmap_full(srcp->bits, nbits);
}


static inline  __attribute__((always_inline)) int __cpus_weight(const cpumask_t *srcp, int nbits)
{
 return bitmap_weight(srcp->bits, nbits);
}



static inline  __attribute__((always_inline)) void __cpus_shift_right(cpumask_t *dstp,
     const cpumask_t *srcp, int n, int nbits)
{
 bitmap_shift_right(dstp->bits, srcp->bits, n, nbits);
}



static inline  __attribute__((always_inline)) void __cpus_shift_left(cpumask_t *dstp,
     const cpumask_t *srcp, int n, int nbits)
{
 bitmap_shift_left(dstp->bits, srcp->bits, n, nbits);
}


static inline  __attribute__((always_inline)) int __first_cpu(const cpumask_t *srcp, int nbits)
{
 return ({ int __x = (nbits); int __y = (find_first_bit(srcp->bits, nbits)); __x < __y ? __x: __y; });
}


static inline  __attribute__((always_inline)) int __next_cpu(int n, const cpumask_t *srcp, int nbits)
{
 return ({ int __x = (nbits); int __y = (find_next_bit(srcp->bits, nbits, n+1)); __x < __y ? __x: __y; });
}
# 265 "linux-2.6/include/linux/cpumask.h"
static inline  __attribute__((always_inline)) int __cpumask_scnprintf(char *buf, int len,
     const cpumask_t *srcp, int nbits)
{
 return bitmap_scnprintf(buf, len, srcp->bits, nbits);
}



static inline  __attribute__((always_inline)) int __cpumask_parse(const char *buf, int len,
     cpumask_t *dstp, int nbits)
{
 return bitmap_parse(buf, len, dstp->bits, nbits);
}
# 344 "linux-2.6/include/linux/cpumask.h"
typedef  cpumask_t  _GLOBAL_62_T; extern  _GLOBAL_62_T  global_cpu_possible_map[NUM_STACKS];   
typedef  cpumask_t  _GLOBAL_63_T; extern  _GLOBAL_63_T  global_cpu_online_map[NUM_STACKS];   
typedef  cpumask_t  _GLOBAL_64_T; extern  _GLOBAL_64_T  global_cpu_present_map[NUM_STACKS];   
# 16 "linux-2.6/include/linux/sched.h" 2


# 1 "linux-2.6/include/asm/semaphore.h" 1
# 40 "linux-2.6/include/asm/semaphore.h"
# 1 "linux-2.6/include/asm/atomic.h" 1
# 24 "linux-2.6/include/asm/atomic.h"
typedef struct { volatile int counter; } atomic_t;
# 52 "linux-2.6/include/asm/atomic.h"
static __inline__  __attribute__((always_inline)) void atomic_add(int i, atomic_t *v)
{
 __asm__ __volatile__(
  "" "addl %1,%0"
  :"=m" (v->counter)
  :"ir" (i), "m" (v->counter));
}
# 67 "linux-2.6/include/asm/atomic.h"
static __inline__  __attribute__((always_inline)) void atomic_sub(int i, atomic_t *v)
{
 __asm__ __volatile__(
  "" "subl %1,%0"
  :"=m" (v->counter)
  :"ir" (i), "m" (v->counter));
}
# 84 "linux-2.6/include/asm/atomic.h"
static __inline__  __attribute__((always_inline)) int atomic_sub_and_test(int i, atomic_t *v)
{
 unsigned char c;

 __asm__ __volatile__(
  "" "subl %2,%0; sete %1"
  :"=m" (v->counter), "=qm" (c)
  :"ir" (i), "m" (v->counter) : "memory");
 return c;
}







static __inline__  __attribute__((always_inline)) void atomic_inc(atomic_t *v)
{
 __asm__ __volatile__(
  "" "incl %0"
  :"=m" (v->counter)
  :"m" (v->counter));
}







static __inline__  __attribute__((always_inline)) void atomic_dec(atomic_t *v)
{
 __asm__ __volatile__(
  "" "decl %0"
  :"=m" (v->counter)
  :"m" (v->counter));
}
# 131 "linux-2.6/include/asm/atomic.h"
static __inline__  __attribute__((always_inline)) int atomic_dec_and_test(atomic_t *v)
{
 unsigned char c;

 __asm__ __volatile__(
  "" "decl %0; sete %1"
  :"=m" (v->counter), "=qm" (c)
  :"m" (v->counter) : "memory");
 return c != 0;
}
# 150 "linux-2.6/include/asm/atomic.h"
static __inline__  __attribute__((always_inline)) int atomic_inc_and_test(atomic_t *v)
{
 unsigned char c;

 __asm__ __volatile__(
  "" "incl %0; sete %1"
  :"=m" (v->counter), "=qm" (c)
  :"m" (v->counter) : "memory");
 return c != 0;
}
# 170 "linux-2.6/include/asm/atomic.h"
static __inline__  __attribute__((always_inline)) int atomic_add_negative(int i, atomic_t *v)
{
 unsigned char c;

 __asm__ __volatile__(
  "" "addl %2,%0; sets %1"
  :"=m" (v->counter), "=qm" (c)
  :"ir" (i), "m" (v->counter) : "memory");
 return c;
}
# 188 "linux-2.6/include/asm/atomic.h"
static __inline__  __attribute__((always_inline)) int atomic_add_return(int i, atomic_t *v)
{
 int __i;





 __i = i;
 __asm__ __volatile__(
  "" "xaddl %0, %1;"
  :"=r"(i)
  :"m"(v->counter), "0"(i));
 return i + __i;
# 211 "linux-2.6/include/asm/atomic.h"
}

static __inline__  __attribute__((always_inline)) int atomic_sub_return(int i, atomic_t *v)
{
 return atomic_add_return(-i,v);
}
# 41 "linux-2.6/include/asm/semaphore.h" 2
# 1 "linux-2.6/include/linux/wait.h" 1
# 23 "linux-2.6/include/linux/wait.h"
# 1 "linux-2.6/include/linux/list.h" 1






# 1 "linux-2.6/include/linux/prefetch.h" 1
# 58 "linux-2.6/include/linux/prefetch.h"
static inline  __attribute__((always_inline)) void prefetch_range(void *addr, size_t len)
{

 char *cp;
 char *end = addr + len;

 for (cp = addr; cp < end; cp += (4*(1 << (7))))
  prefetch(cp);

}
# 8 "linux-2.6/include/linux/list.h" 2
# 28 "linux-2.6/include/linux/list.h"
struct list_head {
 struct list_head *next, *prev;
};
# 47 "linux-2.6/include/linux/list.h"
static inline  __attribute__((always_inline)) void __list_add(struct list_head *new,
         struct list_head *prev,
         struct list_head *next)
{
 next->prev = new;
 new->next = next;
 new->prev = prev;
 prev->next = new;
}
# 65 "linux-2.6/include/linux/list.h"
static inline  __attribute__((always_inline)) void list_add(struct list_head *new, struct list_head *head)
{
 __list_add(new, head, head->next);
}
# 78 "linux-2.6/include/linux/list.h"
static inline  __attribute__((always_inline)) void list_add_tail(struct list_head *new, struct list_head *head)
{
 __list_add(new, head->prev, head);
}







static inline  __attribute__((always_inline)) void __list_add_rcu(struct list_head * new,
  struct list_head * prev, struct list_head * next)
{
 new->next = next;
 new->prev = prev;
 __asm__ __volatile__("": : :"memory");
 next->prev = new;
 prev->next = new;
}
# 115 "linux-2.6/include/linux/list.h"
static inline  __attribute__((always_inline)) void list_add_rcu(struct list_head *new, struct list_head *head)
{
 __list_add_rcu(new, head, head->next);
}
# 136 "linux-2.6/include/linux/list.h"
static inline  __attribute__((always_inline)) void list_add_tail_rcu(struct list_head *new,
     struct list_head *head)
{
 __list_add_rcu(new, head->prev, head);
}
# 149 "linux-2.6/include/linux/list.h"
static inline  __attribute__((always_inline)) void __list_del(struct list_head * prev, struct list_head * next)
{
 next->prev = prev;
 prev->next = next;
}







static inline  __attribute__((always_inline)) void list_del(struct list_head *entry)
{
 __list_del(entry->prev, entry->next);
 entry->next = ((void *) 0x00100100);
 entry->prev = ((void *) 0x00200200);
}
# 192 "linux-2.6/include/linux/list.h"
static inline  __attribute__((always_inline)) void list_del_rcu(struct list_head *entry)
{
 __list_del(entry->prev, entry->next);
 entry->prev = ((void *) 0x00200200);
}
# 205 "linux-2.6/include/linux/list.h"
static inline  __attribute__((always_inline)) void list_replace_rcu(struct list_head *old, struct list_head *new){
 new->next = old->next;
 new->prev = old->prev;
 __asm__ __volatile__("": : :"memory");
 new->next->prev = new;
 new->prev->next = new;
}





static inline  __attribute__((always_inline)) void list_del_init(struct list_head *entry)
{
 __list_del(entry->prev, entry->next);
 do { (entry)->next = (entry); (entry)->prev = (entry); } while (0);
}






static inline  __attribute__((always_inline)) void list_move(struct list_head *list, struct list_head *head)
{
        __list_del(list->prev, list->next);
        list_add(list, head);
}






static inline  __attribute__((always_inline)) void list_move_tail(struct list_head *list,
      struct list_head *head)
{
        __list_del(list->prev, list->next);
        list_add_tail(list, head);
}





static inline  __attribute__((always_inline)) int list_empty(const struct list_head *head)
{
 return head->next == head;
}
# 267 "linux-2.6/include/linux/list.h"
static inline  __attribute__((always_inline)) int list_empty_careful(const struct list_head *head)
{
 struct list_head *next = head->next;
 return (next == head) && (next == head->prev);
}

static inline  __attribute__((always_inline)) void __list_splice(struct list_head *list,
     struct list_head *head)
{
 struct list_head *first = list->next;
 struct list_head *last = list->prev;
 struct list_head *at = head->next;

 first->prev = head;
 head->next = first;

 last->next = at;
 at->prev = last;
}






static inline  __attribute__((always_inline)) void list_splice(struct list_head *list, struct list_head *head)
{
 if (!list_empty(list))
  __list_splice(list, head);
}
# 305 "linux-2.6/include/linux/list.h"
static inline  __attribute__((always_inline)) void list_splice_init(struct list_head *list,
        struct list_head *head)
{
 if (!list_empty(list)) {
  __list_splice(list, head);
  do { (list)->next = (list); (list)->prev = (list); } while (0);
 }
}
# 499 "linux-2.6/include/linux/list.h"
struct hlist_head {
 struct hlist_node *first;
};

struct hlist_node {
 struct hlist_node *next, **pprev;
};






static inline  __attribute__((always_inline)) int hlist_unhashed(const struct hlist_node *h)
{
 return !h->pprev;
}

static inline  __attribute__((always_inline)) int hlist_empty(const struct hlist_head *h)
{
 return !h->first;
}

static inline  __attribute__((always_inline)) void __hlist_del(struct hlist_node *n)
{
 struct hlist_node *next = n->next;
 struct hlist_node **pprev = n->pprev;
 *pprev = next;
 if (next)
  next->pprev = pprev;
}

static inline  __attribute__((always_inline)) void hlist_del(struct hlist_node *n)
{
 __hlist_del(n);
 n->next = ((void *) 0x00100100);
 n->pprev = ((void *) 0x00200200);
}
# 557 "linux-2.6/include/linux/list.h"
static inline  __attribute__((always_inline)) void hlist_del_rcu(struct hlist_node *n)
{
 __hlist_del(n);
 n->pprev = ((void *) 0x00200200);
}

static inline  __attribute__((always_inline)) void hlist_del_init(struct hlist_node *n)
{
 if (n->pprev) {
  __hlist_del(n);
  ((n)->next = ((void *)0), (n)->pprev = ((void *)0));
 }
}

static inline  __attribute__((always_inline)) void hlist_add_head(struct hlist_node *n, struct hlist_head *h)
{
 struct hlist_node *first = h->first;
 n->next = first;
 if (first)
  first->pprev = &n->next;
 h->first = n;
 n->pprev = &h->first;
}
# 598 "linux-2.6/include/linux/list.h"
static inline  __attribute__((always_inline)) void hlist_add_head_rcu(struct hlist_node *n,
     struct hlist_head *h)
{
 struct hlist_node *first = h->first;
 n->next = first;
 n->pprev = &h->first;
 __asm__ __volatile__("": : :"memory");
 if (first)
  first->pprev = &n->next;
 h->first = n;
}


static inline  __attribute__((always_inline)) void hlist_add_before(struct hlist_node *n,
     struct hlist_node *next)
{
 n->pprev = next->pprev;
 n->next = next;
 next->pprev = &n->next;
 *(n->pprev) = n;
}

static inline  __attribute__((always_inline)) void hlist_add_after(struct hlist_node *n,
     struct hlist_node *next)
{
 next->next = n->next;
 n->next = next;
 next->pprev = &n->next;

 if(next->next)
  next->next->pprev = &next->next;
}
# 24 "linux-2.6/include/linux/wait.h" 2



# 1 "linux-2.6/include/asm/current.h" 1





struct task_struct;


typedef  struct task_struct   _GLOBAL_65_T; extern  _GLOBAL_65_T  * global_nsc_task[NUM_STACKS];    
static inline  __attribute__((always_inline)) struct task_struct * get_current(void)
{

        return global_nsc_task[get_stack_id()];
}
# 28 "linux-2.6/include/linux/wait.h" 2

typedef struct __wait_queue wait_queue_t;
typedef int (*wait_queue_func_t)(wait_queue_t *wait, unsigned mode, int sync, void *key);
int default_wake_function(wait_queue_t *wait, unsigned mode, int sync, void *key);

struct __wait_queue {
 unsigned int flags;

 struct task_struct * task;
 wait_queue_func_t func;
 struct list_head task_list;
};

struct wait_bit_key {
 void *flags;
 int bit_nr;
};

struct wait_bit_queue {
 struct wait_bit_key key;
 wait_queue_t wait;
};

struct __wait_queue_head {
 spinlock_t lock;
 struct list_head task_list;
};
typedef struct __wait_queue_head wait_queue_head_t;
# 80 "linux-2.6/include/linux/wait.h"
static inline  __attribute__((always_inline)) void init_waitqueue_head(wait_queue_head_t *q)
{
 q->lock = (spinlock_t) { };
 do { (&q->task_list)->next = (&q->task_list); (&q->task_list)->prev = (&q->task_list); } while (0);
}

static inline  __attribute__((always_inline)) void init_waitqueue_entry(wait_queue_t *q, struct task_struct *p)
{
 q->flags = 0;
 q->task = p;
 q->func = default_wake_function;
}

static inline  __attribute__((always_inline)) void init_waitqueue_func_entry(wait_queue_t *q,
     wait_queue_func_t func)
{
 q->flags = 0;
 q->task = ((void *)0);
 q->func = func;
}

static inline  __attribute__((always_inline)) int waitqueue_active(wait_queue_head_t *q)
{
 return !list_empty(&q->task_list);
}
# 115 "linux-2.6/include/linux/wait.h"
extern void add_wait_queue(wait_queue_head_t *q, wait_queue_t * wait) __attribute__((regparm(3))) ;
extern void add_wait_queue_exclusive(wait_queue_head_t *q, wait_queue_t * wait) __attribute__((regparm(3))) ;
extern void remove_wait_queue(wait_queue_head_t *q, wait_queue_t * wait) __attribute__((regparm(3))) ;

static inline  __attribute__((always_inline)) void __add_wait_queue(wait_queue_head_t *head, wait_queue_t *new)
{
 list_add(&new->task_list, &head->task_list);
}




static inline  __attribute__((always_inline)) void __add_wait_queue_tail(wait_queue_head_t *head,
      wait_queue_t *new)
{
 list_add_tail(&new->task_list, &head->task_list);
}

static inline  __attribute__((always_inline)) void __remove_wait_queue(wait_queue_head_t *head,
       wait_queue_t *old)
{
 list_del(&old->task_list);
}

void __wake_up(wait_queue_head_t *q, unsigned int mode, int nr, void *key) __attribute__((regparm(3))) ;
extern void __wake_up_locked(wait_queue_head_t *q, unsigned int mode) __attribute__((regparm(3))) ;
extern void __wake_up_sync(wait_queue_head_t *q, unsigned int mode, int nr) __attribute__((regparm(3))) ;
void __wake_up_bit(wait_queue_head_t *, void *, int) __attribute__((regparm(3))) ;
int __wait_on_bit(wait_queue_head_t *, struct wait_bit_queue *, int (*)(void *), unsigned) __attribute__((regparm(3))) ;
int __wait_on_bit_lock(wait_queue_head_t *, struct wait_bit_queue *, int (*)(void *), unsigned) __attribute__((regparm(3))) ;
void wake_up_bit(void *, int) __attribute__((regparm(3))) ;
int out_of_line_wait_on_bit(void *, int, int (*)(void *), unsigned) __attribute__((regparm(3))) ;
int out_of_line_wait_on_bit_lock(void *, int, int (*)(void *), unsigned) __attribute__((regparm(3))) ;
wait_queue_head_t *bit_waitqueue(void *, int) __attribute__((regparm(3))) ;
# 286 "linux-2.6/include/linux/wait.h"
static inline  __attribute__((always_inline)) void add_wait_queue_exclusive_locked(wait_queue_head_t *q,
         wait_queue_t * wait)
{
 wait->flags |= 0x01;
 __add_wait_queue_tail(q, wait);
}




static inline  __attribute__((always_inline)) void remove_wait_queue_locked(wait_queue_head_t *q,
         wait_queue_t * wait)
{
 __remove_wait_queue(q, wait);
}






extern void sleep_on(wait_queue_head_t *q) __attribute__((regparm(3))) ;
extern long sleep_on_timeout(wait_queue_head_t *q, signed long timeout) 
                               __attribute__((regparm(3))) ;
extern void interruptible_sleep_on(wait_queue_head_t *q) __attribute__((regparm(3))) ;
extern long interruptible_sleep_on_timeout(wait_queue_head_t *q, signed long timeout) 
                               __attribute__((regparm(3))) ;




void prepare_to_wait(wait_queue_head_t *q, wait_queue_t *wait, int state) 
                                   __attribute__((regparm(3))) ;
void prepare_to_wait_exclusive(wait_queue_head_t *q, wait_queue_t *wait, int state) 
                                   __attribute__((regparm(3))) ;
void finish_wait(wait_queue_head_t *q, wait_queue_t *wait) __attribute__((regparm(3))) ;
int autoremove_wake_function(wait_queue_t *wait, unsigned mode, int sync, void *key);
int wake_bit_function(wait_queue_t *wait, unsigned mode, int sync, void *key);
# 366 "linux-2.6/include/linux/wait.h"
static inline  __attribute__((always_inline)) int wait_on_bit(void *word, int bit,
    int (*action)(void *), unsigned mode)
{
 if (!(__builtin_constant_p(bit) ? constant_test_bit((bit),(word)) : variable_test_bit((bit),(word))))
  return 0;
 return out_of_line_wait_on_bit(word, bit, action, mode);
}
# 390 "linux-2.6/include/linux/wait.h"
static inline  __attribute__((always_inline)) int wait_on_bit_lock(void *word, int bit,
    int (*action)(void *), unsigned mode)
{
 if (!test_and_set_bit(bit, word))
  return 0;
 return out_of_line_wait_on_bit_lock(word, bit, action, mode);
}
# 42 "linux-2.6/include/asm/semaphore.h" 2
# 1 "linux-2.6/include/linux/rwsem.h" 1
# 22 "linux-2.6/include/linux/rwsem.h"
struct rw_semaphore;




# 1 "linux-2.6/include/asm/rwsem.h" 1
# 44 "linux-2.6/include/asm/rwsem.h"
struct rwsem_waiter;

extern struct rw_semaphore *rwsem_down_read_failed(struct rw_semaphore *sem) __attribute__((regparm(3))) ;
extern struct rw_semaphore *rwsem_down_write_failed(struct rw_semaphore *sem) __attribute__((regparm(3))) ;
extern struct rw_semaphore *rwsem_wake(struct rw_semaphore *) __attribute__((regparm(3))) ;
extern struct rw_semaphore *rwsem_downgrade_wake(struct rw_semaphore *sem) __attribute__((regparm(3))) ;




struct rw_semaphore {
 signed long count;






 spinlock_t wait_lock;
 struct list_head wait_list;



};
# 85 "linux-2.6/include/asm/rwsem.h"
static inline  __attribute__((always_inline)) void init_rwsem(struct rw_semaphore *sem)
{
 sem->count = 0x00000000;
 do { (void)(&sem->wait_lock); } while(0);
 do { (&sem->wait_list)->next = (&sem->wait_list); (&sem->wait_list)->prev = (&sem->wait_list); } while (0);



}




static inline  __attribute__((always_inline)) void __down_read(struct rw_semaphore *sem)
{
 __asm__ __volatile__(
  "# beginning down_read\n\t"
"" "  incl      (%%eax)\n\t"
  "  js        2f\n\t"
  "1:\n\t"
  ".subsection 1\n\t" "" ".ifndef " ".text.lock." "clnt" "\n\t" ".text.lock." "clnt" ":\n\t" ".endif\n"
  "2:\n\t"
  "  pushl     %%ecx\n\t"
  "  pushl     %%edx\n\t"
  "  call      rwsem_down_read_failed\n\t"
  "  popl      %%edx\n\t"
  "  popl      %%ecx\n\t"
  "  jmp       1b\n"
  ".previous\n\t"
  "# ending down_read\n\t"
  : "=m"(sem->count)
  : "a"(sem), "m"(sem->count)
  : "memory", "cc");
}




static inline  __attribute__((always_inline)) int __down_read_trylock(struct rw_semaphore *sem)
{
 __s32 result, tmp;
 __asm__ __volatile__(
  "# beginning __down_read_trylock\n\t"
  "  movl      %0,%1\n\t"
  "1:\n\t"
  "  movl	     %1,%2\n\t"
  "  addl      %3,%2\n\t"
  "  jle	     2f\n\t"
"" "  cmpxchgl  %2,%0\n\t"
  "  jnz	     1b\n\t"
  "2:\n\t"
  "# ending __down_read_trylock\n\t"
  : "+m"(sem->count), "=&a"(result), "=&r"(tmp)
  : "i"(0x00000001)
  : "memory", "cc");
 return result>=0 ? 1 : 0;
}




static inline  __attribute__((always_inline)) void __down_write(struct rw_semaphore *sem)
{
 int tmp;

 tmp = ((-0x00010000) + 0x00000001);
 __asm__ __volatile__(
  "# beginning down_write\n\t"
"" "  xadd      %%edx,(%%eax)\n\t"
  "  testl     %%edx,%%edx\n\t"
  "  jnz       2f\n\t"
  "1:\n\t"
  ".subsection 1\n\t" "" ".ifndef " ".text.lock." "clnt" "\n\t" ".text.lock." "clnt" ":\n\t" ".endif\n"
  "2:\n\t"
  "  pushl     %%ecx\n\t"
  "  call      rwsem_down_write_failed\n\t"
  "  popl      %%ecx\n\t"
  "  jmp       1b\n"
  ".previous\n\t"
  "# ending down_write"
  : "=m"(sem->count), "=d"(tmp)
  : "a"(sem), "1"(tmp), "m"(sem->count)
  : "memory", "cc");
}




static inline  __attribute__((always_inline)) int __down_write_trylock(struct rw_semaphore *sem)
{
 signed long ret = ((__typeof__(*(&sem->count)))__cmpxchg((&sem->count),(unsigned long)(0x00000000), (unsigned long)(((-0x00010000) + 0x00000001)),sizeof(*(&sem->count))))

                              ;
 if (ret == 0x00000000)
  return 1;
 return 0;
}




static inline  __attribute__((always_inline)) void __up_read(struct rw_semaphore *sem)
{
 __s32 tmp = -0x00000001;
 __asm__ __volatile__(
  "# beginning __up_read\n\t"
"" "  xadd      %%edx,(%%eax)\n\t"
  "  js        2f\n\t"
  "1:\n\t"
  ".subsection 1\n\t" "" ".ifndef " ".text.lock." "clnt" "\n\t" ".text.lock." "clnt" ":\n\t" ".endif\n"
  "2:\n\t"
  "  decw      %%dx\n\t"
  "  jnz       1b\n\t"
  "  pushl     %%ecx\n\t"
  "  call      rwsem_wake\n\t"
  "  popl      %%ecx\n\t"
  "  jmp       1b\n"
  ".previous\n\t"
  "# ending __up_read\n"
  : "=m"(sem->count), "=d"(tmp)
  : "a"(sem), "1"(tmp), "m"(sem->count)
  : "memory", "cc");
}




static inline  __attribute__((always_inline)) void __up_write(struct rw_semaphore *sem)
{
 __asm__ __volatile__(
  "# beginning __up_write\n\t"
  "  movl      %2,%%edx\n\t"
"" "  xaddl     %%edx,(%%eax)\n\t"
  "  jnz       2f\n\t"
  "1:\n\t"
  ".subsection 1\n\t" "" ".ifndef " ".text.lock." "clnt" "\n\t" ".text.lock." "clnt" ":\n\t" ".endif\n"
  "2:\n\t"
  "  decw      %%dx\n\t"
  "  jnz       1b\n\t"
  "  pushl     %%ecx\n\t"
  "  call      rwsem_wake\n\t"
  "  popl      %%ecx\n\t"
  "  jmp       1b\n"
  ".previous\n\t"
  "# ending __up_write\n"
  : "=m"(sem->count)
  : "a"(sem), "i"(-((-0x00010000) + 0x00000001)), "m"(sem->count)
  : "memory", "cc", "edx");
}




static inline  __attribute__((always_inline)) void __downgrade_write(struct rw_semaphore *sem)
{
 __asm__ __volatile__(
  "# beginning __downgrade_write\n\t"
"" "  addl      %2,(%%eax)\n\t"
  "  js        2f\n\t"
  "1:\n\t"
  ".subsection 1\n\t" "" ".ifndef " ".text.lock." "clnt" "\n\t" ".text.lock." "clnt" ":\n\t" ".endif\n"
  "2:\n\t"
  "  pushl     %%ecx\n\t"
  "  pushl     %%edx\n\t"
  "  call      rwsem_downgrade_wake\n\t"
  "  popl      %%edx\n\t"
  "  popl      %%ecx\n\t"
  "  jmp       1b\n"
  ".previous\n\t"
  "# ending __downgrade_write\n"
  : "=m"(sem->count)
  : "a"(sem), "i"(-(-0x00010000)), "m"(sem->count)
  : "memory", "cc");
}




static inline  __attribute__((always_inline)) void rwsem_atomic_add(int delta, struct rw_semaphore *sem)
{
 __asm__ __volatile__(
"" "addl %1,%0"
  : "=m"(sem->count)
  : "ir"(delta), "m"(sem->count));
}




static inline  __attribute__((always_inline)) int rwsem_atomic_update(int delta, struct rw_semaphore *sem)
{
 int tmp = delta;

 __asm__ __volatile__(
"" "xadd %0,(%2)"
  : "+r"(tmp), "=m"(sem->count)
  : "r"(sem), "m"(sem->count)
  : "memory");

 return tmp+delta;
}
# 28 "linux-2.6/include/linux/rwsem.h" 2
# 41 "linux-2.6/include/linux/rwsem.h"
static inline  __attribute__((always_inline)) void down_read(struct rw_semaphore *sem)
{
 do {} while(0);
 ;
 __down_read(sem);
 ;
}




static inline  __attribute__((always_inline)) int down_read_trylock(struct rw_semaphore *sem)
{
 int ret;
 ;
 ret = __down_read_trylock(sem);
 ;
 return ret;
}




static inline  __attribute__((always_inline)) void down_write(struct rw_semaphore *sem)
{
 do {} while(0);
 ;
 __down_write(sem);
 ;
}




static inline  __attribute__((always_inline)) int down_write_trylock(struct rw_semaphore *sem)
{
 int ret;
 ;
 ret = __down_write_trylock(sem);
 ;
 return ret;
}




static inline  __attribute__((always_inline)) void up_read(struct rw_semaphore *sem)
{
 ;
 __up_read(sem);
 ;
}




static inline  __attribute__((always_inline)) void up_write(struct rw_semaphore *sem)
{
 ;
 __up_write(sem);
 ;
}




static inline  __attribute__((always_inline)) void downgrade_write(struct rw_semaphore *sem)
{
 ;
 __downgrade_write(sem);
 ;
}
# 43 "linux-2.6/include/asm/semaphore.h" 2

struct semaphore {
 atomic_t count;
 int sleepers;
 wait_queue_head_t wait;
};
# 67 "linux-2.6/include/asm/semaphore.h"
static inline  __attribute__((always_inline)) void sema_init (struct semaphore *sem, int val)
{






 (((&sem->count)->counter) = (val));
 sem->sleepers = 0;
 init_waitqueue_head(&sem->wait);
}

static inline  __attribute__((always_inline)) void init_MUTEX (struct semaphore *sem)
{
 sema_init(sem, 1);
}

static inline  __attribute__((always_inline)) void init_MUTEX_LOCKED (struct semaphore *sem)
{
 sema_init(sem, 0);
}

 __attribute__((regparm(3))) void __down_failed(void );
 __attribute__((regparm(3))) int __down_failed_interruptible(void );
 __attribute__((regparm(3))) int __down_failed_trylock(void );
 __attribute__((regparm(3))) void __up_wakeup(void );

 __attribute__((regparm(3))) void __down(struct semaphore * sem);
 __attribute__((regparm(3))) int __down_interruptible(struct semaphore * sem);
 __attribute__((regparm(3))) int __down_trylock(struct semaphore * sem);
 __attribute__((regparm(3))) void __up(struct semaphore * sem);






static inline  __attribute__((always_inline)) void down(struct semaphore * sem)
{
 do {} while(0);
 __asm__ __volatile__(
  "# atomic down operation\n\t"
  "" "decl %0\n\t"
  "js 2f\n"
  "1:\n"
  ".subsection 1\n\t" "" ".ifndef " ".text.lock." "clnt" "\n\t" ".text.lock." "clnt" ":\n\t" ".endif\n"
  "2:\tlea %0,%%eax\n\t"
  "call __down_failed\n\t"
  "jmp 1b\n"
  ".previous\n\t"
  :"=m" (sem->count)
  :
  :"memory","ax");
}





static inline  __attribute__((always_inline)) int down_interruptible(struct semaphore * sem)
{
 int result;

 do {} while(0);
 __asm__ __volatile__(
  "# atomic interruptible down operation\n\t"
  "" "decl %1\n\t"
  "js 2f\n\t"
  "xorl %0,%0\n"
  "1:\n"
  ".subsection 1\n\t" "" ".ifndef " ".text.lock." "clnt" "\n\t" ".text.lock." "clnt" ":\n\t" ".endif\n"
  "2:\tlea %1,%%eax\n\t"
  "call __down_failed_interruptible\n\t"
  "jmp 1b\n"
  ".previous\n\t"
  :"=a" (result), "=m" (sem->count)
  :
  :"memory");
 return result;
}





static inline  __attribute__((always_inline)) int down_trylock(struct semaphore * sem)
{
 int result;

 __asm__ __volatile__(
  "# atomic interruptible down operation\n\t"
  "" "decl %1\n\t"
  "js 2f\n\t"
  "xorl %0,%0\n"
  "1:\n"
  ".subsection 1\n\t" "" ".ifndef " ".text.lock." "clnt" "\n\t" ".text.lock." "clnt" ":\n\t" ".endif\n"
  "2:\tlea %1,%%eax\n\t"
  "call __down_failed_trylock\n\t"
  "jmp 1b\n"
  ".previous\n\t"
  :"=a" (result), "=m" (sem->count)
  :
  :"memory");
 return result;
}







static inline  __attribute__((always_inline)) void up(struct semaphore * sem)
{
 __asm__ __volatile__(
  "# atomic up operation\n\t"
  "" "incl %0\n\t"
  "jle 2f\n"
  "1:\n"
  ".subsection 1\n\t" "" ".ifndef " ".text.lock." "clnt" "\n\t" ".text.lock." "clnt" ":\n\t" ".endif\n"
  "2:\tlea %0,%%eax\n\t"
  "call __up_wakeup\n\t"
  "jmp 1b\n"
  ".previous\n\t"
  ".subsection 0\n"
  :"=m" (sem->count)
  :
  :"memory","ax");
}
# 19 "linux-2.6/include/linux/sched.h" 2

# 1 "linux-2.6/include/asm/ptrace.h" 1
# 26 "linux-2.6/include/asm/ptrace.h"
struct pt_regs {
 long ebx;
 long ecx;
 long edx;
 long esi;
 long edi;
 long ebp;
 long eax;
 int xds;
 int xes;
 long orig_eax;
 long eip;
 int xcs;
 long eflags;
 long esp;
 int xss;
};
# 21 "linux-2.6/include/linux/sched.h" 2
# 1 "linux-2.6/include/asm/mmu.h" 1
# 11 "linux-2.6/include/asm/mmu.h"
typedef struct {
 int size;
 struct semaphore sem;
 void *ldt;
} mm_context_t;
# 22 "linux-2.6/include/linux/sched.h" 2

# 1 "linux-2.6/include/linux/smp.h" 1
# 104 "linux-2.6/include/linux/smp.h"
static inline  __attribute__((always_inline)) void smp_send_reschedule(int cpu) { }
# 24 "linux-2.6/include/linux/sched.h" 2
# 1 "linux-2.6/include/linux/sem.h" 1



# 1 "linux-2.6/include/linux/ipc.h" 1
# 9 "linux-2.6/include/linux/ipc.h"
struct ipc_perm
{
 __kernel_key_t key;
 __kernel_uid_t uid;
 __kernel_gid_t gid;
 __kernel_uid_t cuid;
 __kernel_gid_t cgid;
 __kernel_mode_t mode;
 unsigned short seq;
};


# 1 "linux-2.6/include/asm/ipcbuf.h" 1
# 14 "linux-2.6/include/asm/ipcbuf.h"
struct ipc64_perm
{
 __kernel_key_t key;
 __kernel_uid32_t uid;
 __kernel_gid32_t gid;
 __kernel_uid32_t cuid;
 __kernel_gid32_t cgid;
 __kernel_mode_t mode;
 unsigned short __pad1;
 unsigned short seq;
 unsigned short __pad2;
 unsigned long __unused1;
 unsigned long __unused2;
};
# 22 "linux-2.6/include/linux/ipc.h" 2
# 57 "linux-2.6/include/linux/ipc.h"
struct kern_ipc_perm
{
 spinlock_t lock;
 int deleted;
 key_t key;
 uid_t uid;
 gid_t gid;
 uid_t cuid;
 gid_t cgid;
 mode_t mode;
 unsigned long seq;
 void *security;
};
# 5 "linux-2.6/include/linux/sem.h" 2
# 24 "linux-2.6/include/linux/sem.h"
struct semid_ds {
 struct ipc_perm sem_perm;
 __kernel_time_t sem_otime;
 __kernel_time_t sem_ctime;
 struct sem *sem_base;
 struct sem_queue *sem_pending;
 struct sem_queue **sem_pending_last;
 struct sem_undo *undo;
 unsigned short sem_nsems;
};


# 1 "linux-2.6/include/asm/sembuf.h" 1
# 14 "linux-2.6/include/asm/sembuf.h"
struct semid64_ds {
 struct ipc64_perm sem_perm;
 __kernel_time_t sem_otime;
 unsigned long __unused1;
 __kernel_time_t sem_ctime;
 unsigned long __unused2;
 unsigned long sem_nsems;
 unsigned long __unused3;
 unsigned long __unused4;
};
# 37 "linux-2.6/include/linux/sem.h" 2


struct sembuf {
 unsigned short sem_num;
 short sem_op;
 short sem_flg;
};


union semun {
 int val;
 struct semid_ds *buf;
 unsigned short *array;
 struct seminfo *__buf;
 void *__pad;
};

struct seminfo {
 int semmap;
 int semmni;
 int semmns;
 int semmnu;
 int semmsl;
 int semopm;
 int semume;
 int semusz;
 int semvmx;
 int semaem;
};
# 83 "linux-2.6/include/linux/sem.h"
struct sem {
 int semval;
 int sempid;
};


struct sem_array {
 struct kern_ipc_perm sem_perm;
 time_t sem_otime;
 time_t sem_ctime;
 struct sem *sem_base;
 struct sem_queue *sem_pending;
 struct sem_queue **sem_pending_last;
 struct sem_undo *undo;
 unsigned long sem_nsems;
};


struct sem_queue {
 struct sem_queue * next;
 struct sem_queue ** prev;
 struct task_struct* sleeper;
 struct sem_undo * undo;
 int pid;
 int status;
 struct sem_array * sma;
 int id;
 struct sembuf * sops;
 int nsops;
};




struct sem_undo {
 struct sem_undo * proc_next;
 struct sem_undo * id_next;
 int semid;
 short * semadj;
};




struct sem_undo_list {
 atomic_t refcnt;
 spinlock_t lock;
 struct sem_undo *proc_list;
};

struct sysv_sem {
 struct sem_undo_list *undo_list;
};



extern int copy_semundo(unsigned long clone_flags, struct task_struct *tsk);
extern void exit_sem(struct task_struct *tsk);
# 25 "linux-2.6/include/linux/sched.h" 2
# 1 "linux-2.6/include/linux/signal.h" 1





# 1 "linux-2.6/include/asm/signal.h" 1
# 10 "linux-2.6/include/asm/signal.h"
struct siginfo;
# 20 "linux-2.6/include/asm/signal.h"
typedef unsigned long old_sigset_t;

typedef struct {
 unsigned long sig[(64 / 32)];
} sigset_t;
# 132 "linux-2.6/include/asm/signal.h"
typedef void __signalfn_t(int);
typedef __signalfn_t *__sighandler_t;

typedef void __restorefn_t(void);
typedef __restorefn_t *__sigrestore_t;






struct old_sigaction {
 __sighandler_t sa_handler;
 old_sigset_t sa_mask;
 unsigned long sa_flags;
 __sigrestore_t sa_restorer;
};

struct sigaction {
 __sighandler_t sa_handler;
 unsigned long sa_flags;
 __sigrestore_t sa_restorer;
 sigset_t sa_mask;
};

struct k_sigaction {
 struct sigaction sa;
};
# 178 "linux-2.6/include/asm/signal.h"
typedef struct sigaltstack {
 void *ss_sp;
 int ss_flags;
 size_t ss_size;
} stack_t;






static __inline__  __attribute__((always_inline)) void sigaddset(sigset_t *set, int _sig)
{
 __asm__("btsl %1,%0" : "=m"(*set) : "Ir"(_sig - 1) : "cc");
}

static __inline__  __attribute__((always_inline)) void sigdelset(sigset_t *set, int _sig)
{
 __asm__("btrl %1,%0" : "=m"(*set) : "Ir"(_sig - 1) : "cc");
}

static __inline__  __attribute__((always_inline)) int __const_sigismember(sigset_t *set, int _sig)
{
 unsigned long sig = _sig - 1;
 return 1 & (set->sig[sig / 32] >> (sig % 32));
}

static __inline__  __attribute__((always_inline)) int __gen_sigismember(sigset_t *set, int _sig)
{
 int ret;
 __asm__("btl %2,%1\n\tsbbl %0,%0"
  : "=r"(ret) : "m"(*set), "Ir"(_sig-1) : "cc");
 return ret;
}






static __inline__  __attribute__((always_inline)) int sigfindinword(unsigned long word)
{
 __asm__("bsfl %1,%0" : "=r"(word) : "rm"(word) : "cc");
 return word;
}

struct pt_regs;
extern int do_signal(struct pt_regs *regs, sigset_t *oldset) __attribute__((regparm(3))) ;
# 7 "linux-2.6/include/linux/signal.h" 2
# 1 "linux-2.6/include/asm/siginfo.h" 1



# 1 "linux-2.6/include/asm-generic/siginfo.h" 1





# 1 "linux-2.6/include/linux/resource.h" 1
# 21 "linux-2.6/include/linux/resource.h"
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

struct rlimit {
 unsigned long rlim_cur;
 unsigned long rlim_max;
};
# 68 "linux-2.6/include/linux/resource.h"
# 1 "linux-2.6/include/asm/resource.h" 1
# 69 "linux-2.6/include/linux/resource.h" 2
# 7 "linux-2.6/include/asm-generic/siginfo.h" 2

typedef union sigval {
 int sival_int;
 void *sival_ptr;
} sigval_t;
# 41 "linux-2.6/include/asm-generic/siginfo.h"
typedef struct siginfo {
 int si_signo;
 int si_errno;
 int si_code;

 union {
  int _pad[((128 - (3 * sizeof(int))) / sizeof(int))];


  struct {
   pid_t _pid;
   uid_t _uid;
  } _kill;


  struct {
   timer_t _tid;
   int _overrun;
   char _pad[sizeof( uid_t) - sizeof(int)];
   sigval_t _sigval;
   int _sys_private;
  } _timer;


  struct {
   pid_t _pid;
   uid_t _uid;
   sigval_t _sigval;
  } _rt;


  struct {
   pid_t _pid;
   uid_t _uid;
   int _status;
   clock_t _utime;
   clock_t _stime;
  } _sigchld;


  struct {
   void *_addr;



  } _sigfault;


  struct {
   long _band;
   int _fd;
  } _sigpoll;
 } _sifields;
} siginfo_t;
# 250 "linux-2.6/include/asm-generic/siginfo.h"
typedef struct sigevent {
 sigval_t sigev_value;
 int sigev_signo;
 int sigev_notify;
 union {
  int _pad[((64/sizeof(int)) - 3)];
   int _tid;

  struct {
   void (*_function)(sigval_t);
   void *_attribute;
  } _sigev_thread;
 } _sigev_un;
} sigevent_t;
# 273 "linux-2.6/include/asm-generic/siginfo.h"
struct siginfo;
void do_schedule_next_timer(struct siginfo *info);





static inline  __attribute__((always_inline)) void copy_siginfo(struct siginfo *to, struct siginfo *from)
{
 if (from->si_code < 0)
  (__builtin_constant_p(sizeof(*to)) ? __constant_memcpy((to),(from),(sizeof(*to))) : __memcpy((to),(from),(sizeof(*to))));
 else

  (__builtin_constant_p((3 * sizeof(int)) + sizeof(from->_sifields._sigchld)) ? __constant_memcpy((to),(from),((3 * sizeof(int)) + sizeof(from->_sifields._sigchld))) : __memcpy((to),(from),((3 * sizeof(int)) + sizeof(from->_sifields._sigchld))));
}



extern int copy_siginfo_to_user(struct siginfo *to, struct siginfo *from);
# 5 "linux-2.6/include/asm/siginfo.h" 2
# 8 "linux-2.6/include/linux/signal.h" 2
# 17 "linux-2.6/include/linux/signal.h"
struct sigqueue {
 struct list_head list;
 spinlock_t *lock;
 int flags;
 siginfo_t info;
 struct user_struct *user;
};




struct sigpending {
 struct list_head list;
 sigset_t signal;
};
# 106 "linux-2.6/include/linux/signal.h"
static inline  __attribute__((always_inline)) void sigorsets(sigset_t *r, const sigset_t *a, const sigset_t *b) { extern void _NSIG_WORDS_is_unsupported_size(void); unsigned long a0, a1, a2, a3, b0, b1, b2, b3; switch ((64 / 32)) { case 4: a3 = a->sig[3]; a2 = a->sig[2]; b3 = b->sig[3]; b2 = b->sig[2]; r->sig[3] = ((a3) | (b3)); r->sig[2] = ((a2) | (b2)); case 2: a1 = a->sig[1]; b1 = b->sig[1]; r->sig[1] = ((a1) | (b1)); case 1: a0 = a->sig[0]; b0 = b->sig[0]; r->sig[0] = ((a0) | (b0)); break; default: _NSIG_WORDS_is_unsupported_size(); } }


static inline  __attribute__((always_inline)) void sigandsets(sigset_t *r, const sigset_t *a, const sigset_t *b) { extern void _NSIG_WORDS_is_unsupported_size(void); unsigned long a0, a1, a2, a3, b0, b1, b2, b3; switch ((64 / 32)) { case 4: a3 = a->sig[3]; a2 = a->sig[2]; b3 = b->sig[3]; b2 = b->sig[2]; r->sig[3] = ((a3) & (b3)); r->sig[2] = ((a2) & (b2)); case 2: a1 = a->sig[1]; b1 = b->sig[1]; r->sig[1] = ((a1) & (b1)); case 1: a0 = a->sig[0]; b0 = b->sig[0]; r->sig[0] = ((a0) & (b0)); break; default: _NSIG_WORDS_is_unsupported_size(); } }


static inline  __attribute__((always_inline)) void signandsets(sigset_t *r, const sigset_t *a, const sigset_t *b) { extern void _NSIG_WORDS_is_unsupported_size(void); unsigned long a0, a1, a2, a3, b0, b1, b2, b3; switch ((64 / 32)) { case 4: a3 = a->sig[3]; a2 = a->sig[2]; b3 = b->sig[3]; b2 = b->sig[2]; r->sig[3] = ((a3) & ~(b3)); r->sig[2] = ((a2) & ~(b2)); case 2: a1 = a->sig[1]; b1 = b->sig[1]; r->sig[1] = ((a1) & ~(b1)); case 1: a0 = a->sig[0]; b0 = b->sig[0]; r->sig[0] = ((a0) & ~(b0)); break; default: _NSIG_WORDS_is_unsupported_size(); } }
# 136 "linux-2.6/include/linux/signal.h"
static inline  __attribute__((always_inline)) void signotset(sigset_t *set) { extern void _NSIG_WORDS_is_unsupported_size(void); switch ((64 / 32)) { case 4: set->sig[3] = (~(set->sig[3])); set->sig[2] = (~(set->sig[2])); case 2: set->sig[1] = (~(set->sig[1])); case 1: set->sig[0] = (~(set->sig[0])); break; default: _NSIG_WORDS_is_unsupported_size(); } }




static inline  __attribute__((always_inline)) void sigemptyset(sigset_t *set)
{
 switch ((64 / 32)) {
 default:
  (__builtin_constant_p(0) ? (__builtin_constant_p((sizeof(sigset_t))) ? __constant_c_and_count_memset(((set)),((0x01010101UL*(unsigned char)(0))),((sizeof(sigset_t)))) : __constant_c_memset(((set)),((0x01010101UL*(unsigned char)(0))),((sizeof(sigset_t))))) : (__builtin_constant_p((sizeof(sigset_t))) ? __memset_generic((((set))),(((0))),(((sizeof(sigset_t))))) : __memset_generic(((set)),((0)),((sizeof(sigset_t))))));
  break;
 case 2: set->sig[1] = 0;
 case 1: set->sig[0] = 0;
  break;
 }
}

static inline  __attribute__((always_inline)) void sigfillset(sigset_t *set)
{
 switch ((64 / 32)) {
 default:
  (__builtin_constant_p(-1) ? (__builtin_constant_p((sizeof(sigset_t))) ? __constant_c_and_count_memset(((set)),((0x01010101UL*(unsigned char)(-1))),((sizeof(sigset_t)))) : __constant_c_memset(((set)),((0x01010101UL*(unsigned char)(-1))),((sizeof(sigset_t))))) : (__builtin_constant_p((sizeof(sigset_t))) ? __memset_generic((((set))),(((-1))),(((sizeof(sigset_t))))) : __memset_generic(((set)),((-1)),((sizeof(sigset_t))))));
  break;
 case 2: set->sig[1] = -1;
 case 1: set->sig[0] = -1;
  break;
 }
}



static inline  __attribute__((always_inline)) void sigaddsetmask(sigset_t *set, unsigned long mask)
{
 set->sig[0] |= mask;
}

static inline  __attribute__((always_inline)) void sigdelsetmask(sigset_t *set, unsigned long mask)
{
 set->sig[0] &= ~mask;
}

static inline  __attribute__((always_inline)) int sigtestsetmask(sigset_t *set, unsigned long mask)
{
 return (set->sig[0] & mask) != 0;
}

static inline  __attribute__((always_inline)) void siginitset(sigset_t *set, unsigned long mask)
{
 set->sig[0] = mask;
 switch ((64 / 32)) {
 default:
  (__builtin_constant_p(0) ? (__builtin_constant_p((sizeof(long)*((64 / 32)-1))) ? __constant_c_and_count_memset(((&set->sig[1])),((0x01010101UL*(unsigned char)(0))),((sizeof(long)*((64 / 32)-1)))) : __constant_c_memset(((&set->sig[1])),((0x01010101UL*(unsigned char)(0))),((sizeof(long)*((64 / 32)-1))))) : (__builtin_constant_p((sizeof(long)*((64 / 32)-1))) ? __memset_generic((((&set->sig[1]))),(((0))),(((sizeof(long)*((64 / 32)-1))))) : __memset_generic(((&set->sig[1])),((0)),((sizeof(long)*((64 / 32)-1))))));
  break;
 case 2: set->sig[1] = 0;
 case 1: ;
 }
}

static inline  __attribute__((always_inline)) void siginitsetinv(sigset_t *set, unsigned long mask)
{
 set->sig[0] = ~mask;
 switch ((64 / 32)) {
 default:
  (__builtin_constant_p(-1) ? (__builtin_constant_p((sizeof(long)*((64 / 32)-1))) ? __constant_c_and_count_memset(((&set->sig[1])),((0x01010101UL*(unsigned char)(-1))),((sizeof(long)*((64 / 32)-1)))) : __constant_c_memset(((&set->sig[1])),((0x01010101UL*(unsigned char)(-1))),((sizeof(long)*((64 / 32)-1))))) : (__builtin_constant_p((sizeof(long)*((64 / 32)-1))) ? __memset_generic((((&set->sig[1]))),(((-1))),(((sizeof(long)*((64 / 32)-1))))) : __memset_generic(((&set->sig[1])),((-1)),((sizeof(long)*((64 / 32)-1))))));
  break;
 case 2: set->sig[1] = -1;
 case 1: ;
 }
}



static inline  __attribute__((always_inline)) void init_sigpending(struct sigpending *sig)
{
 sigemptyset(&sig->signal);
 do { (&sig->list)->next = (&sig->list); (&sig->list)->prev = (&sig->list); } while (0);
}

extern int group_send_sig_info(int sig, struct siginfo *info, struct task_struct *p);
extern long do_sigpending(void *, unsigned long);
extern int sigprocmask(int, sigset_t *, sigset_t *);


struct pt_regs;
extern int get_signal_to_deliver(siginfo_t *info, struct k_sigaction *return_ka, struct pt_regs *regs, void *cookie);
# 26 "linux-2.6/include/linux/sched.h" 2
# 1 "linux-2.6/include/linux/securebits.h" 1





typedef  unsigned  _GLOBAL_66_T; extern  _GLOBAL_66_T  global_securebits[NUM_STACKS];   
# 27 "linux-2.6/include/linux/sched.h" 2
# 1 "linux-2.6/include/linux/fs_struct.h" 1



struct dentry;
struct vfsmount;

struct fs_struct {
 atomic_t count;
 rwlock_t lock;
 int umask;
 struct dentry * root, * pwd, * altroot;
 struct vfsmount * rootmnt, * pwdmnt, * altrootmnt;
};







extern void exit_fs(struct task_struct *);
extern void set_fs_altroot(void);
extern void set_fs_root(struct fs_struct *, struct vfsmount *, struct dentry *);
extern void set_fs_pwd(struct fs_struct *, struct vfsmount *, struct dentry *);
extern struct fs_struct *copy_fs_struct(struct fs_struct *);
extern void put_fs_struct(struct fs_struct *);
# 28 "linux-2.6/include/linux/sched.h" 2

# 1 "linux-2.6/include/linux/completion.h" 1
# 13 "linux-2.6/include/linux/completion.h"
struct completion {
 unsigned int done;
 wait_queue_head_t wait;
};







static inline  __attribute__((always_inline)) void init_completion(struct completion *x)
{
 x->done = 0;
 init_waitqueue_head(&x->wait);
}

extern void wait_for_completion(struct completion *) __attribute__((regparm(3))) ;
extern void complete(struct completion *) __attribute__((regparm(3))) ;
extern void complete_all(struct completion *) __attribute__((regparm(3))) ;
# 30 "linux-2.6/include/linux/sched.h" 2
# 1 "linux-2.6/include/linux/pid.h" 1



enum pid_type
{
 PIDTYPE_PID,
 PIDTYPE_TGID,
 PIDTYPE_PGID,
 PIDTYPE_SID,
 PIDTYPE_MAX
};

struct pid
{

 int nr;
 struct hlist_node pid_chain;

 struct list_head pid_list;
};
# 29 "linux-2.6/include/linux/pid.h"
extern int attach_pid(struct task_struct *task, enum pid_type type, int nr) __attribute__((regparm(3))) ;

extern void detach_pid(struct task_struct *task, enum pid_type) __attribute__((regparm(3))) ;





extern struct pid *find_pid(enum pid_type, int) __attribute__((regparm(3))) ;

extern int alloc_pidmap(void);
extern void free_pidmap(int) __attribute__((regparm(3))) ;
extern void switch_exec_pids(struct task_struct *leader, struct task_struct *thread);
# 31 "linux-2.6/include/linux/sched.h" 2
# 1 "linux-2.6/include/linux/percpu.h" 1



# 1 "linux-2.6/include/linux/slab.h" 1
# 12 "linux-2.6/include/linux/slab.h"
typedef struct kmem_cache_s kmem_cache_t;


# 1 "linux-2.6/include/linux/gfp.h" 1



# 1 "linux-2.6/include/linux/mmzone.h" 1
# 13 "linux-2.6/include/linux/mmzone.h"
# 1 "linux-2.6/include/linux/numa.h" 1
# 14 "linux-2.6/include/linux/mmzone.h" 2
# 23 "linux-2.6/include/linux/mmzone.h"
struct free_area {
 struct list_head free_list;
 unsigned long *map;
};

struct pglist_data;
# 45 "linux-2.6/include/linux/mmzone.h"
struct per_cpu_pages {
 int count;
 int low;
 int high;
 int batch;
 struct list_head list;
};

struct per_cpu_pageset {
 struct per_cpu_pages pcp[2];
# 63 "linux-2.6/include/linux/mmzone.h"
} ;
# 110 "linux-2.6/include/linux/mmzone.h"
struct zone {

 unsigned long free_pages;
 unsigned long pages_min, pages_low, pages_high;
# 126 "linux-2.6/include/linux/mmzone.h"
 unsigned long protection[3];

 struct per_cpu_pageset pageset[1];




 spinlock_t lock;
 struct free_area free_area[11];





 spinlock_t lru_lock;
 struct list_head active_list;
 struct list_head inactive_list;
 unsigned long nr_scan_active;
 unsigned long nr_scan_inactive;
 unsigned long nr_active;
 unsigned long nr_inactive;
 unsigned long pages_scanned;
 int all_unreclaimable;
# 166 "linux-2.6/include/linux/mmzone.h"
 int temp_priority;
 int prev_priority;



# 197 "linux-2.6/include/linux/mmzone.h"
 wait_queue_head_t * wait_table;
 unsigned long wait_table_size;
 unsigned long wait_table_bits;




 struct pglist_data *zone_pgdat;
 struct page *zone_mem_map;

 unsigned long zone_start_pfn;

 unsigned long spanned_pages;
 unsigned long present_pages;




 char *name;
} ;
# 237 "linux-2.6/include/linux/mmzone.h"
struct zonelist {
 struct zone *zones[(1 << 0) * 3 + 1];
};
# 253 "linux-2.6/include/linux/mmzone.h"
struct bootmem_data;
typedef struct pglist_data {
 struct zone node_zones[3];
 struct zonelist node_zonelists[((0x03 + 1) / 2 + 1)];
 int nr_zones;
 struct page *node_mem_map;
 struct bootmem_data *bdata;
 unsigned long node_start_pfn;
 unsigned long node_present_pages;
 unsigned long node_spanned_pages;

 int node_id;
 struct pglist_data *pgdat_next;
 wait_queue_head_t kswapd_wait;
 struct task_struct *kswapd;
} pg_data_t;




typedef  int  _GLOBAL_67_T; extern  _GLOBAL_67_T  global_numnodes[NUM_STACKS];   
typedef  struct pglist_data   _GLOBAL_68_T; extern  _GLOBAL_68_T  * global_pgdat_list[NUM_STACKS];    

void __get_zone_counts(unsigned long *active, unsigned long *inactive,
   unsigned long *free, struct pglist_data *pgdat);
void get_zone_counts(unsigned long *active, unsigned long *inactive,
   unsigned long *free);
void build_all_zonelists(void);
void wakeup_kswapd(struct zone *zone);
# 306 "linux-2.6/include/linux/mmzone.h"
static inline  __attribute__((always_inline)) struct zone *next_zone(struct zone *zone)
{
 pg_data_t *pgdat = zone->zone_pgdat;

 if (zone - pgdat->node_zones < 3 - 1)
  zone++;
 else if (pgdat->pgdat_next) {
  pgdat = pgdat->pgdat_next;
  zone = pgdat->node_zones;
 } else
  zone = ((void *)0);

 return zone;
}
# 339 "linux-2.6/include/linux/mmzone.h"
static inline  __attribute__((always_inline)) int is_highmem_idx(int idx)
{
 return (idx == 2);
}

static inline  __attribute__((always_inline)) int is_normal_idx(int idx)
{
 return (idx == 1);
}






static inline  __attribute__((always_inline)) int is_highmem(struct zone *zone)
{
 return (is_highmem_idx(zone - zone->zone_pgdat->node_zones));
}

static inline  __attribute__((always_inline)) int is_normal(struct zone *zone)
{
 return (is_normal_idx(zone - zone->zone_pgdat->node_zones));
}


struct ctl_table;
struct file;
int min_free_kbytes_sysctl_handler(struct ctl_table *, int, struct file *,
     void *, size_t *, loff_t *);
int lower_zone_protection_sysctl_handler(struct ctl_table *, int, struct file *,
     void *, size_t *, loff_t *);

# 1 "linux-2.6/include/linux/topology.h" 1
# 32 "linux-2.6/include/linux/topology.h"
# 1 "linux-2.6/include/linux/mmzone.h" 1
# 33 "linux-2.6/include/linux/topology.h" 2


# 1 "linux-2.6/include/asm/topology.h" 1
# 98 "linux-2.6/include/asm/topology.h"
# 1 "linux-2.6/include/asm-generic/topology.h" 1
# 99 "linux-2.6/include/asm/topology.h" 2
# 36 "linux-2.6/include/linux/topology.h" 2
# 46 "linux-2.6/include/linux/topology.h"
static inline  __attribute__((always_inline)) int __next_node_with_cpus(int node)
{
 do
  ++node;
 while (node < global_numnodes[get_stack_id()] && !({ cpumask_t __tmp__; __tmp__ = (global_cpu_online_map[get_stack_id()]); __cpus_weight(&(__tmp__), 1); }));
 return node;
}
# 373 "linux-2.6/include/linux/mmzone.h" 2





typedef  struct pglist_data   _GLOBAL_69_T; extern  _GLOBAL_69_T  global_contig_page_data[NUM_STACKS];    
# 5 "linux-2.6/include/linux/gfp.h" 2




struct vm_area_struct;
# 78 "linux-2.6/include/linux/gfp.h"
static inline  __attribute__((always_inline)) void arch_free_page(struct page *page, int order) { }


extern struct page *
__alloc_pages(unsigned int, unsigned int, struct zonelist *) __attribute__((regparm(3))) ;

static inline  __attribute__((always_inline)) struct page *alloc_pages_node(int nid, unsigned int gfp_mask,
      unsigned int order)
{
 if (__builtin_expect(!!(order >= 11), 0))
  return ((void *)0);

 return __alloc_pages(gfp_mask, order,
  (&global_contig_page_data[get_stack_id()])->node_zonelists + (gfp_mask & 0x03));
}
# 114 "linux-2.6/include/linux/gfp.h"
extern unsigned long __get_free_pages(unsigned int gfp_mask, unsigned int order) __attribute__((regparm(3))) ;
extern unsigned long get_zeroed_page(unsigned int gfp_mask) __attribute__((regparm(3))) ;







extern void __free_pages(struct page *page, unsigned int order) __attribute__((regparm(3))) ;
extern void free_pages(unsigned long addr, unsigned int order) __attribute__((regparm(3))) ;
extern void free_hot_page(struct page *page) __attribute__((regparm(3))) ;
extern void free_cold_page(struct page *page) __attribute__((regparm(3))) ;




void page_alloc_init(void);
# 16 "linux-2.6/include/linux/slab.h" 2
# 1 "linux-2.6/include/linux/init.h" 1
# 64 "linux-2.6/include/linux/init.h"
typedef int (*initcall_t)(void);
typedef void (*exitcall_t)(void);

typedef  initcall_t  _GLOBAL_70_T; extern  _GLOBAL_70_T  global___con_initcall_start[NUM_STACKS]; extern  _GLOBAL_70_T  global___con_initcall_end[NUM_STACKS];    
typedef  initcall_t  _GLOBAL_71_T; extern  _GLOBAL_71_T  global___security_initcall_start[NUM_STACKS]; extern  _GLOBAL_71_T  global___security_initcall_end[NUM_STACKS];    


typedef  char  _GLOBAL_72_T; extern  _GLOBAL_72_T  _GLOBAL_0_saved_command_line_I [ ] ; extern  _GLOBAL_72_T  _GLOBAL_1_saved_command_line_I [ ] ; extern  _GLOBAL_72_T  _GLOBAL_2_saved_command_line_I [ ] ; extern  _GLOBAL_72_T  _GLOBAL_3_saved_command_line_I [ ] ; extern  _GLOBAL_72_T  _GLOBAL_4_saved_command_line_I [ ] ; extern  _GLOBAL_72_T  _GLOBAL_5_saved_command_line_I [ ] ; extern  _GLOBAL_72_T  _GLOBAL_6_saved_command_line_I [ ] ; extern  _GLOBAL_72_T  _GLOBAL_7_saved_command_line_I [ ] ; extern  _GLOBAL_72_T  _GLOBAL_8_saved_command_line_I [ ] ; extern  _GLOBAL_72_T  _GLOBAL_9_saved_command_line_I [ ] ; extern  _GLOBAL_72_T  _GLOBAL_10_saved_command_line_I [ ] ; extern  _GLOBAL_72_T  _GLOBAL_11_saved_command_line_I [ ] ; extern  _GLOBAL_72_T  _GLOBAL_12_saved_command_line_I [ ] ; extern  _GLOBAL_72_T  _GLOBAL_13_saved_command_line_I [ ] ; extern  _GLOBAL_72_T  _GLOBAL_14_saved_command_line_I [ ] ; extern  _GLOBAL_72_T  _GLOBAL_15_saved_command_line_I [ ] ; extern  _GLOBAL_72_T  _GLOBAL_16_saved_command_line_I [ ] ; extern  _GLOBAL_72_T  _GLOBAL_17_saved_command_line_I [ ] ; extern  _GLOBAL_72_T  _GLOBAL_18_saved_command_line_I [ ] ; extern  _GLOBAL_72_T  _GLOBAL_19_saved_command_line_I [ ] ; extern  _GLOBAL_72_T  _GLOBAL_20_saved_command_line_I [ ] ; extern  _GLOBAL_72_T  _GLOBAL_21_saved_command_line_I [ ] ; extern  _GLOBAL_72_T  _GLOBAL_22_saved_command_line_I [ ] ; extern  _GLOBAL_72_T  _GLOBAL_23_saved_command_line_I [ ] ; extern  _GLOBAL_72_T  _GLOBAL_24_saved_command_line_I [ ] ; extern  _GLOBAL_72_T  _GLOBAL_25_saved_command_line_I [ ] ; extern  _GLOBAL_72_T  _GLOBAL_26_saved_command_line_I [ ] ; extern  _GLOBAL_72_T  _GLOBAL_27_saved_command_line_I [ ] ; extern  _GLOBAL_72_T  _GLOBAL_28_saved_command_line_I [ ] ; extern  _GLOBAL_72_T  _GLOBAL_29_saved_command_line_I [ ] ; extern  _GLOBAL_72_T  _GLOBAL_30_saved_command_line_I [ ] ; extern  _GLOBAL_72_T  _GLOBAL_31_saved_command_line_I [ ] ; extern  _GLOBAL_72_T  _GLOBAL_32_saved_command_line_I [ ] ; extern  _GLOBAL_72_T  _GLOBAL_33_saved_command_line_I [ ] ; extern  _GLOBAL_72_T  _GLOBAL_34_saved_command_line_I [ ] ; extern  _GLOBAL_72_T  _GLOBAL_35_saved_command_line_I [ ] ; extern  _GLOBAL_72_T  _GLOBAL_36_saved_command_line_I [ ] ; extern  _GLOBAL_72_T  _GLOBAL_37_saved_command_line_I [ ] ; extern  _GLOBAL_72_T  _GLOBAL_38_saved_command_line_I [ ] ; extern  _GLOBAL_72_T  _GLOBAL_39_saved_command_line_I [ ] ; extern  _GLOBAL_72_T  _GLOBAL_40_saved_command_line_I [ ] ; extern  _GLOBAL_72_T  _GLOBAL_41_saved_command_line_I [ ] ; extern  _GLOBAL_72_T  _GLOBAL_42_saved_command_line_I [ ] ; extern  _GLOBAL_72_T  _GLOBAL_43_saved_command_line_I [ ] ; extern  _GLOBAL_72_T  _GLOBAL_44_saved_command_line_I [ ] ; extern  _GLOBAL_72_T  _GLOBAL_45_saved_command_line_I [ ] ; extern  _GLOBAL_72_T  _GLOBAL_46_saved_command_line_I [ ] ; extern  _GLOBAL_72_T  _GLOBAL_47_saved_command_line_I [ ] ; extern  _GLOBAL_72_T  _GLOBAL_48_saved_command_line_I [ ] ; extern  _GLOBAL_72_T  _GLOBAL_49_saved_command_line_I [ ] ; static __attribute__ ((unused)) __typeof__(_GLOBAL_0_saved_command_line_I) *_GLOBAL_saved_command_line_3_A[NUM_STACKS];  
# 110 "linux-2.6/include/linux/init.h"
struct obs_kernel_param {
 const char *str;
 int (*setup_func)(char *);
 int early;
};
# 145 "linux-2.6/include/linux/init.h"
void  __attribute__ ((__section__ (".init.text"))) parse_early_param(void);
# 17 "linux-2.6/include/linux/slab.h" 2
# 57 "linux-2.6/include/linux/slab.h"
extern void  __attribute__ ((__section__ (".init.text"))) kmem_cache_init(void);

extern kmem_cache_t *kmem_cache_create(const char *, size_t, size_t, unsigned long,
           void (*)(void *, kmem_cache_t *, unsigned long),
           void (*)(void *, kmem_cache_t *, unsigned long));
extern int kmem_cache_destroy(kmem_cache_t *);
extern int kmem_cache_shrink(kmem_cache_t *);
extern void *kmem_cache_alloc(kmem_cache_t *, int);



static inline  __attribute__((always_inline)) void *kmem_cache_alloc_node(kmem_cache_t *cachep, int node)
{
 return kmem_cache_alloc(cachep, (0x10 | 0x40 | 0x80));
}

extern void kmem_cache_free(kmem_cache_t *, void *);
extern unsigned int kmem_cache_size(kmem_cache_t *);


struct cache_sizes {
 size_t cs_size;
 kmem_cache_t *cs_cachep;
 kmem_cache_t *cs_dmacachep;
};
typedef  struct cache_sizes   _GLOBAL_73_T; extern  _GLOBAL_73_T  _GLOBAL_0_malloc_sizes_I [ ] ; extern  _GLOBAL_73_T  _GLOBAL_1_malloc_sizes_I [ ] ; extern  _GLOBAL_73_T  _GLOBAL_2_malloc_sizes_I [ ] ; extern  _GLOBAL_73_T  _GLOBAL_3_malloc_sizes_I [ ] ; extern  _GLOBAL_73_T  _GLOBAL_4_malloc_sizes_I [ ] ; extern  _GLOBAL_73_T  _GLOBAL_5_malloc_sizes_I [ ] ; extern  _GLOBAL_73_T  _GLOBAL_6_malloc_sizes_I [ ] ; extern  _GLOBAL_73_T  _GLOBAL_7_malloc_sizes_I [ ] ; extern  _GLOBAL_73_T  _GLOBAL_8_malloc_sizes_I [ ] ; extern  _GLOBAL_73_T  _GLOBAL_9_malloc_sizes_I [ ] ; extern  _GLOBAL_73_T  _GLOBAL_10_malloc_sizes_I [ ] ; extern  _GLOBAL_73_T  _GLOBAL_11_malloc_sizes_I [ ] ; extern  _GLOBAL_73_T  _GLOBAL_12_malloc_sizes_I [ ] ; extern  _GLOBAL_73_T  _GLOBAL_13_malloc_sizes_I [ ] ; extern  _GLOBAL_73_T  _GLOBAL_14_malloc_sizes_I [ ] ; extern  _GLOBAL_73_T  _GLOBAL_15_malloc_sizes_I [ ] ; extern  _GLOBAL_73_T  _GLOBAL_16_malloc_sizes_I [ ] ; extern  _GLOBAL_73_T  _GLOBAL_17_malloc_sizes_I [ ] ; extern  _GLOBAL_73_T  _GLOBAL_18_malloc_sizes_I [ ] ; extern  _GLOBAL_73_T  _GLOBAL_19_malloc_sizes_I [ ] ; extern  _GLOBAL_73_T  _GLOBAL_20_malloc_sizes_I [ ] ; extern  _GLOBAL_73_T  _GLOBAL_21_malloc_sizes_I [ ] ; extern  _GLOBAL_73_T  _GLOBAL_22_malloc_sizes_I [ ] ; extern  _GLOBAL_73_T  _GLOBAL_23_malloc_sizes_I [ ] ; extern  _GLOBAL_73_T  _GLOBAL_24_malloc_sizes_I [ ] ; extern  _GLOBAL_73_T  _GLOBAL_25_malloc_sizes_I [ ] ; extern  _GLOBAL_73_T  _GLOBAL_26_malloc_sizes_I [ ] ; extern  _GLOBAL_73_T  _GLOBAL_27_malloc_sizes_I [ ] ; extern  _GLOBAL_73_T  _GLOBAL_28_malloc_sizes_I [ ] ; extern  _GLOBAL_73_T  _GLOBAL_29_malloc_sizes_I [ ] ; extern  _GLOBAL_73_T  _GLOBAL_30_malloc_sizes_I [ ] ; extern  _GLOBAL_73_T  _GLOBAL_31_malloc_sizes_I [ ] ; extern  _GLOBAL_73_T  _GLOBAL_32_malloc_sizes_I [ ] ; extern  _GLOBAL_73_T  _GLOBAL_33_malloc_sizes_I [ ] ; extern  _GLOBAL_73_T  _GLOBAL_34_malloc_sizes_I [ ] ; extern  _GLOBAL_73_T  _GLOBAL_35_malloc_sizes_I [ ] ; extern  _GLOBAL_73_T  _GLOBAL_36_malloc_sizes_I [ ] ; extern  _GLOBAL_73_T  _GLOBAL_37_malloc_sizes_I [ ] ; extern  _GLOBAL_73_T  _GLOBAL_38_malloc_sizes_I [ ] ; extern  _GLOBAL_73_T  _GLOBAL_39_malloc_sizes_I [ ] ; extern  _GLOBAL_73_T  _GLOBAL_40_malloc_sizes_I [ ] ; extern  _GLOBAL_73_T  _GLOBAL_41_malloc_sizes_I [ ] ; extern  _GLOBAL_73_T  _GLOBAL_42_malloc_sizes_I [ ] ; extern  _GLOBAL_73_T  _GLOBAL_43_malloc_sizes_I [ ] ; extern  _GLOBAL_73_T  _GLOBAL_44_malloc_sizes_I [ ] ; extern  _GLOBAL_73_T  _GLOBAL_45_malloc_sizes_I [ ] ; extern  _GLOBAL_73_T  _GLOBAL_46_malloc_sizes_I [ ] ; extern  _GLOBAL_73_T  _GLOBAL_47_malloc_sizes_I [ ] ; extern  _GLOBAL_73_T  _GLOBAL_48_malloc_sizes_I [ ] ; extern  _GLOBAL_73_T  _GLOBAL_49_malloc_sizes_I [ ] ; static __attribute__ ((unused)) __typeof__(_GLOBAL_0_malloc_sizes_I) *_GLOBAL_malloc_sizes_4_A[NUM_STACKS] = { &_GLOBAL_0_malloc_sizes_I, &_GLOBAL_1_malloc_sizes_I, &_GLOBAL_2_malloc_sizes_I, &_GLOBAL_3_malloc_sizes_I, &_GLOBAL_4_malloc_sizes_I, &_GLOBAL_5_malloc_sizes_I, &_GLOBAL_6_malloc_sizes_I, &_GLOBAL_7_malloc_sizes_I, &_GLOBAL_8_malloc_sizes_I, &_GLOBAL_9_malloc_sizes_I, &_GLOBAL_10_malloc_sizes_I, &_GLOBAL_11_malloc_sizes_I, &_GLOBAL_12_malloc_sizes_I, &_GLOBAL_13_malloc_sizes_I, &_GLOBAL_14_malloc_sizes_I, &_GLOBAL_15_malloc_sizes_I, &_GLOBAL_16_malloc_sizes_I, &_GLOBAL_17_malloc_sizes_I, &_GLOBAL_18_malloc_sizes_I, &_GLOBAL_19_malloc_sizes_I, &_GLOBAL_20_malloc_sizes_I, &_GLOBAL_21_malloc_sizes_I, &_GLOBAL_22_malloc_sizes_I, &_GLOBAL_23_malloc_sizes_I, &_GLOBAL_24_malloc_sizes_I, &_GLOBAL_25_malloc_sizes_I, &_GLOBAL_26_malloc_sizes_I, &_GLOBAL_27_malloc_sizes_I, &_GLOBAL_28_malloc_sizes_I, &_GLOBAL_29_malloc_sizes_I, &_GLOBAL_30_malloc_sizes_I, &_GLOBAL_31_malloc_sizes_I, &_GLOBAL_32_malloc_sizes_I, &_GLOBAL_33_malloc_sizes_I, &_GLOBAL_34_malloc_sizes_I, &_GLOBAL_35_malloc_sizes_I, &_GLOBAL_36_malloc_sizes_I, &_GLOBAL_37_malloc_sizes_I, &_GLOBAL_38_malloc_sizes_I, &_GLOBAL_39_malloc_sizes_I, &_GLOBAL_40_malloc_sizes_I, &_GLOBAL_41_malloc_sizes_I, &_GLOBAL_42_malloc_sizes_I, &_GLOBAL_43_malloc_sizes_I, &_GLOBAL_44_malloc_sizes_I, &_GLOBAL_45_malloc_sizes_I, &_GLOBAL_46_malloc_sizes_I, &_GLOBAL_47_malloc_sizes_I, &_GLOBAL_48_malloc_sizes_I, &_GLOBAL_49_malloc_sizes_I, };   
extern void *__kmalloc(size_t, int);

static inline  __attribute__((always_inline)) void *kmalloc(size_t size, int flags)
{
 if (__builtin_constant_p(size)) {
  int i = 0;





# 1 "linux-2.6/include/linux/kmalloc_sizes.h" 1

 if (size <= 32) goto found; else i++;

 if (size <= 64) goto found; else i++;



 if (size <= 128) goto found; else i++;



 if (size <= 256) goto found; else i++;
 if (size <= 512) goto found; else i++;
 if (size <= 1024) goto found; else i++;
 if (size <= 2048) goto found; else i++;
 if (size <= 4096) goto found; else i++;
 if (size <= 8192) goto found; else i++;
 if (size <= 16384) goto found; else i++;
 if (size <= 32768) goto found; else i++;
 if (size <= 65536) goto found; else i++;
 if (size <= 131072) goto found; else i++;
# 95 "linux-2.6/include/linux/slab.h" 2

  {
   extern void __you_cannot_kmalloc_that_much(void);
   __you_cannot_kmalloc_that_much();
  }
found:
  return kmem_cache_alloc((flags & 0x01) ?
   (*_GLOBAL_malloc_sizes_4_A[get_stack_id()])[i].cs_dmacachep :
   (*_GLOBAL_malloc_sizes_4_A[get_stack_id()])[i].cs_cachep, flags);
 }
 return __kmalloc(size, flags);
}

extern void *kcalloc(size_t, size_t, int);
extern void kfree(const void *);
extern unsigned int ksize(const void *);

extern int kmem_cache_reap(int) __attribute__((regparm(3))) ;
extern int kmem_ptr_validate(kmem_cache_t *cachep, void *ptr) __attribute__((regparm(3))) ;


typedef  kmem_cache_t  _GLOBAL_74_T; extern  _GLOBAL_74_T  * global_vm_area_cachep[NUM_STACKS];   
typedef  kmem_cache_t  _GLOBAL_75_T; extern  _GLOBAL_75_T  * global_mm_cachep[NUM_STACKS];   
typedef  kmem_cache_t  _GLOBAL_76_T; extern  _GLOBAL_76_T  * global_names_cachep[NUM_STACKS];   
typedef  kmem_cache_t  _GLOBAL_77_T; extern  _GLOBAL_77_T  * global_files_cachep[NUM_STACKS];   
typedef  kmem_cache_t  _GLOBAL_78_T; extern  _GLOBAL_78_T  * global_filp_cachep[NUM_STACKS];   
typedef  kmem_cache_t  _GLOBAL_79_T; extern  _GLOBAL_79_T  * global_dquot_cachep[NUM_STACKS];   
typedef  kmem_cache_t  _GLOBAL_80_T; extern  _GLOBAL_80_T  * global_fs_cachep[NUM_STACKS];   
typedef  kmem_cache_t  _GLOBAL_81_T; extern  _GLOBAL_81_T  * global_signal_cachep[NUM_STACKS];   
typedef  kmem_cache_t  _GLOBAL_82_T; extern  _GLOBAL_82_T  * global_sighand_cachep[NUM_STACKS];   
typedef  kmem_cache_t  _GLOBAL_83_T; extern  _GLOBAL_83_T  * global_bio_cachep[NUM_STACKS];   

typedef  atomic_t  _GLOBAL_84_T; extern  _GLOBAL_84_T  global_slab_reclaim_pages[NUM_STACKS];   
# 5 "linux-2.6/include/linux/percpu.h" 2
# 43 "linux-2.6/include/linux/percpu.h"
static inline  __attribute__((always_inline)) void *__alloc_percpu(size_t size, size_t align)
{
 void *ret = kmalloc(size, (0x10 | 0x40 | 0x80));
 if (ret)
  (__builtin_constant_p(0) ? (__builtin_constant_p((size)) ? __constant_c_and_count_memset(((ret)),((0x01010101UL*(unsigned char)(0))),((size))) : __constant_c_memset(((ret)),((0x01010101UL*(unsigned char)(0))),((size)))) : (__builtin_constant_p((size)) ? __memset_generic((((ret))),(((0))),(((size)))) : __memset_generic(((ret)),((0)),((size)))));
 return ret;
}
static inline  __attribute__((always_inline)) void free_percpu(const void *ptr)
{
 kfree(ptr);
}
# 32 "linux-2.6/include/linux/sched.h" 2


struct exec_domain;
# 74 "linux-2.6/include/linux/sched.h"
typedef  unsigned long   _GLOBAL_85_T; extern  _GLOBAL_85_T  _GLOBAL_0_avenrun_I [ ] ; extern  _GLOBAL_85_T  _GLOBAL_1_avenrun_I [ ] ; extern  _GLOBAL_85_T  _GLOBAL_2_avenrun_I [ ] ; extern  _GLOBAL_85_T  _GLOBAL_3_avenrun_I [ ] ; extern  _GLOBAL_85_T  _GLOBAL_4_avenrun_I [ ] ; extern  _GLOBAL_85_T  _GLOBAL_5_avenrun_I [ ] ; extern  _GLOBAL_85_T  _GLOBAL_6_avenrun_I [ ] ; extern  _GLOBAL_85_T  _GLOBAL_7_avenrun_I [ ] ; extern  _GLOBAL_85_T  _GLOBAL_8_avenrun_I [ ] ; extern  _GLOBAL_85_T  _GLOBAL_9_avenrun_I [ ] ; extern  _GLOBAL_85_T  _GLOBAL_10_avenrun_I [ ] ; extern  _GLOBAL_85_T  _GLOBAL_11_avenrun_I [ ] ; extern  _GLOBAL_85_T  _GLOBAL_12_avenrun_I [ ] ; extern  _GLOBAL_85_T  _GLOBAL_13_avenrun_I [ ] ; extern  _GLOBAL_85_T  _GLOBAL_14_avenrun_I [ ] ; extern  _GLOBAL_85_T  _GLOBAL_15_avenrun_I [ ] ; extern  _GLOBAL_85_T  _GLOBAL_16_avenrun_I [ ] ; extern  _GLOBAL_85_T  _GLOBAL_17_avenrun_I [ ] ; extern  _GLOBAL_85_T  _GLOBAL_18_avenrun_I [ ] ; extern  _GLOBAL_85_T  _GLOBAL_19_avenrun_I [ ] ; extern  _GLOBAL_85_T  _GLOBAL_20_avenrun_I [ ] ; extern  _GLOBAL_85_T  _GLOBAL_21_avenrun_I [ ] ; extern  _GLOBAL_85_T  _GLOBAL_22_avenrun_I [ ] ; extern  _GLOBAL_85_T  _GLOBAL_23_avenrun_I [ ] ; extern  _GLOBAL_85_T  _GLOBAL_24_avenrun_I [ ] ; extern  _GLOBAL_85_T  _GLOBAL_25_avenrun_I [ ] ; extern  _GLOBAL_85_T  _GLOBAL_26_avenrun_I [ ] ; extern  _GLOBAL_85_T  _GLOBAL_27_avenrun_I [ ] ; extern  _GLOBAL_85_T  _GLOBAL_28_avenrun_I [ ] ; extern  _GLOBAL_85_T  _GLOBAL_29_avenrun_I [ ] ; extern  _GLOBAL_85_T  _GLOBAL_30_avenrun_I [ ] ; extern  _GLOBAL_85_T  _GLOBAL_31_avenrun_I [ ] ; extern  _GLOBAL_85_T  _GLOBAL_32_avenrun_I [ ] ; extern  _GLOBAL_85_T  _GLOBAL_33_avenrun_I [ ] ; extern  _GLOBAL_85_T  _GLOBAL_34_avenrun_I [ ] ; extern  _GLOBAL_85_T  _GLOBAL_35_avenrun_I [ ] ; extern  _GLOBAL_85_T  _GLOBAL_36_avenrun_I [ ] ; extern  _GLOBAL_85_T  _GLOBAL_37_avenrun_I [ ] ; extern  _GLOBAL_85_T  _GLOBAL_38_avenrun_I [ ] ; extern  _GLOBAL_85_T  _GLOBAL_39_avenrun_I [ ] ; extern  _GLOBAL_85_T  _GLOBAL_40_avenrun_I [ ] ; extern  _GLOBAL_85_T  _GLOBAL_41_avenrun_I [ ] ; extern  _GLOBAL_85_T  _GLOBAL_42_avenrun_I [ ] ; extern  _GLOBAL_85_T  _GLOBAL_43_avenrun_I [ ] ; extern  _GLOBAL_85_T  _GLOBAL_44_avenrun_I [ ] ; extern  _GLOBAL_85_T  _GLOBAL_45_avenrun_I [ ] ; extern  _GLOBAL_85_T  _GLOBAL_46_avenrun_I [ ] ; extern  _GLOBAL_85_T  _GLOBAL_47_avenrun_I [ ] ; extern  _GLOBAL_85_T  _GLOBAL_48_avenrun_I [ ] ; extern  _GLOBAL_85_T  _GLOBAL_49_avenrun_I [ ] ; static __attribute__ ((unused)) __typeof__(_GLOBAL_0_avenrun_I) *_GLOBAL_avenrun_5_A[NUM_STACKS];   
# 91 "linux-2.6/include/linux/sched.h"
typedef  int  _GLOBAL_86_T; extern  _GLOBAL_86_T  global_nr_threads[NUM_STACKS];   
typedef  int  _GLOBAL_87_T; extern  _GLOBAL_87_T  global_last_pid[NUM_STACKS];   
typedef  __typeof__ ( unsigned long  )   _GLOBAL_88_T; extern  _GLOBAL_88_T  global_per_cpu__process_counts[NUM_STACKS];    
extern int nr_processes(void);
extern unsigned long nr_running(void);
extern unsigned long nr_uninterruptible(void);
extern unsigned long nr_iowait(void);


# 1 "linux-2.6/include/linux/param.h" 1
# 101 "linux-2.6/include/linux/sched.h" 2

# 1 "linux-2.6/include/linux/timer.h" 1
# 9 "linux-2.6/include/linux/timer.h"
struct tvec_t_base_s;

struct timer_list {
 struct list_head entry;
 unsigned long expires;

 spinlock_t lock;
 unsigned long magic;

 void (*function)(unsigned long);
 unsigned long data;

 struct tvec_t_base_s *base;
};
# 42 "linux-2.6/include/linux/timer.h"
static inline  __attribute__((always_inline)) void init_timer(struct timer_list * timer)
{
 timer->base = ((void *)0);
 timer->magic = 0x4b87ad6e;
 do { (void)(&timer->lock); } while(0);
}
# 59 "linux-2.6/include/linux/timer.h"
static inline  __attribute__((always_inline)) int timer_pending(const struct timer_list * timer)
{
 return timer->base != ((void *)0);
}

extern void add_timer_on(struct timer_list *timer, int cpu);
extern int del_timer(struct timer_list * timer);
extern int __mod_timer(struct timer_list *timer, unsigned long expires);
extern int mod_timer(struct timer_list *timer, unsigned long expires);

extern unsigned long next_timer_interrupt(void);
# 85 "linux-2.6/include/linux/timer.h"
static inline  __attribute__((always_inline)) void add_timer(struct timer_list * timer)
{
 __mod_timer(timer, timer->expires);
}
# 98 "linux-2.6/include/linux/timer.h"
extern void init_timers(void);
extern void run_local_timers(void);
extern void it_real_fn(unsigned long);
# 103 "linux-2.6/include/linux/sched.h" 2
# 131 "linux-2.6/include/linux/sched.h"
struct sched_param {
 int sched_priority;
};
# 145 "linux-2.6/include/linux/sched.h"
typedef  rwlock_t  _GLOBAL_89_T; extern  _GLOBAL_89_T  global_tasklist_lock[NUM_STACKS];   
typedef  spinlock_t  _GLOBAL_90_T; extern  _GLOBAL_90_T  global_mmlist_lock[NUM_STACKS];   

typedef struct task_struct task_t;

extern void sched_init(void);
extern void sched_init_smp(void);
extern void init_idle(task_t *idle, int cpu);

typedef  cpumask_t  _GLOBAL_91_T; extern  _GLOBAL_91_T  global_nohz_cpu_mask[NUM_STACKS];   

extern void show_state(void);
extern void show_regs(struct pt_regs *);






extern void show_stack(struct task_struct *task, unsigned long *sp);

void io_schedule(void);
long io_schedule_timeout(long timeout);

extern void cpu_init (void);
extern void trap_init(void);
extern void update_process_times(int user);
extern void scheduler_tick(int user_tick, int system);
typedef  unsigned long   _GLOBAL_92_T; extern  _GLOBAL_92_T  global_cache_decay_ticks[NUM_STACKS];    




extern int in_sched_functions(unsigned long addr);


extern signed long schedule_timeout(signed long timeout) __attribute__((regparm(3))) ;
  __attribute__((regparm(0))) void schedule(void);

struct namespace;




typedef  int  _GLOBAL_93_T; extern  _GLOBAL_93_T  global_sysctl_max_map_count[NUM_STACKS];   

# 1 "linux-2.6/include/linux/aio.h" 1




# 1 "linux-2.6/include/linux/workqueue.h" 1
# 12 "linux-2.6/include/linux/workqueue.h"
struct workqueue_struct;

struct work_struct {
 unsigned long pending;
 struct list_head entry;
 void (*func)(void *);
 void *data;
 void *wq_data;
 struct timer_list timer;
};
# 53 "linux-2.6/include/linux/workqueue.h"
extern struct workqueue_struct *__create_workqueue(const char *name,
          int singlethread);



extern void destroy_workqueue(struct workqueue_struct *wq);

extern int queue_work(struct workqueue_struct *wq, struct work_struct *work) __attribute__((regparm(3))) ;
extern int queue_delayed_work(struct workqueue_struct *wq, struct work_struct *work, unsigned long delay) __attribute__((regparm(3))) ;
extern void flush_workqueue(struct workqueue_struct *wq) __attribute__((regparm(3))) ;

extern int schedule_work(struct work_struct *work) __attribute__((regparm(3))) ;
extern int schedule_delayed_work(struct work_struct *work, unsigned long delay) __attribute__((regparm(3))) ;

extern int schedule_delayed_work_on(int cpu, struct work_struct *work, unsigned long delay);
extern void flush_scheduled_work(void);
extern int current_is_keventd(void);
extern int keventd_up(void);

extern void init_workqueues(void);






static inline  __attribute__((always_inline)) int cancel_delayed_work(struct work_struct *work)
{
 int ret;

 ret = del_timer(&work->timer);
 if (ret)
  clear_bit(0, &work->pending);
 return ret;
}
# 6 "linux-2.6/include/linux/aio.h" 2
# 1 "linux-2.6/include/linux/aio_abi.h" 1
# 32 "linux-2.6/include/linux/aio_abi.h"
typedef unsigned long aio_context_t;

enum {
 IOCB_CMD_PREAD = 0,
 IOCB_CMD_PWRITE = 1,
 IOCB_CMD_FSYNC = 2,
 IOCB_CMD_FDSYNC = 3,




 IOCB_CMD_NOOP = 6,
};


struct io_event {
 __u64 data;
 __u64 obj;
 __s64 res;
 __s64 res2;
};
# 68 "linux-2.6/include/linux/aio_abi.h"
struct iocb {

 __u64 aio_data;
 __u32 aio_key, aio_reserved1;



 __u16 aio_lio_opcode;
 __s16 aio_reqprio;
 __u32 aio_fildes;

 __u64 aio_buf;
 __u64 aio_nbytes;
 __s64 aio_offset;


 __u64 aio_reserved2;
 __u64 aio_reserved3;
};
# 7 "linux-2.6/include/linux/aio.h" 2






struct kioctx;
# 46 "linux-2.6/include/linux/aio.h"
struct kiocb {
 struct list_head ki_run_list;
 long ki_flags;
 int ki_users;
 unsigned ki_key;

 struct file *ki_filp;
 struct kioctx *ki_ctx;
 int (*ki_cancel)(struct kiocb *, struct io_event *);
 ssize_t (*ki_retry)(struct kiocb *);
 void (*ki_dtor)(struct kiocb *);

 struct list_head ki_list;


 union {
  void *user;
  struct task_struct *tsk;
 } ki_obj;
 __u64 ki_user_data;
 loff_t ki_pos;

 unsigned short ki_opcode;
 size_t ki_nbytes;
 char *ki_buf;
 size_t ki_left;
 wait_queue_t ki_wait;
 long ki_retried;
 long ki_kicked;
 long ki_queued;

 void *private;
};
# 99 "linux-2.6/include/linux/aio.h"
struct aio_ring {
 unsigned id;
 unsigned nr;
 unsigned head;
 unsigned tail;

 unsigned magic;
 unsigned compat_features;
 unsigned incompat_features;
 unsigned header_length;


 struct io_event io_events[0];
};




struct aio_ring_info {
 unsigned long mmap_base;
 unsigned long mmap_size;

 struct page **ring_pages;
 spinlock_t ring_lock;
 long nr_pages;

 unsigned nr, tail;

 struct page *internal_pages[8];
};

struct kioctx {
 atomic_t users;
 int dead;
 struct mm_struct *mm;


 unsigned long user_id;
 struct kioctx *next;

 wait_queue_head_t wait;

 spinlock_t ctx_lock;

 int reqs_active;
 struct list_head active_reqs;
 struct list_head run_list;

 unsigned max_reqs;

 struct aio_ring_info ring_info;

 struct work_struct wq;
};


typedef  unsigned  _GLOBAL_94_T; extern  _GLOBAL_94_T  global_aio_max_size[NUM_STACKS];   

extern ssize_t wait_on_sync_kiocb(struct kiocb *iocb) __attribute__((regparm(3))) ;
extern int aio_put_req(struct kiocb *iocb) __attribute__((regparm(3))) ;
extern void kick_iocb(struct kiocb *iocb) __attribute__((regparm(3))) ;
extern int aio_complete(struct kiocb *iocb, long res, long res2) __attribute__((regparm(3))) ;
extern void __put_ioctx(struct kioctx *ctx) __attribute__((regparm(3))) ;
struct mm_struct;
extern void exit_aio(struct mm_struct *mm) __attribute__((regparm(3))) ;
extern struct kioctx *lookup_ioctx(unsigned long ctx_id);
extern int io_submit_one(struct kioctx *ctx, struct iocb *user_iocb, struct iocb *iocb) 
                                                     __attribute__((regparm(3))) ;


struct kioctx *lookup_ioctx(unsigned long ctx_id);
int io_submit_one(struct kioctx *ctx, struct iocb *user_iocb, struct iocb *iocb) 
                         __attribute__((regparm(3))) ;
# 192 "linux-2.6/include/linux/aio.h"
static inline  __attribute__((always_inline)) struct kiocb *list_kiocb(struct list_head *h)
{
 return ({ const typeof( ((struct kiocb *)0)->ki_list ) *__mptr = (h); (struct kiocb *)( (char *)__mptr - ((size_t) &((struct kiocb *)0)->ki_list) );});
}


typedef  atomic_t  _GLOBAL_95_T; extern  _GLOBAL_95_T  global_aio_nr[NUM_STACKS];   
typedef  unsigned  _GLOBAL_96_T; extern  _GLOBAL_96_T  global_aio_max_nr[NUM_STACKS];   
# 192 "linux-2.6/include/linux/sched.h" 2

extern unsigned long
arch_get_unmapped_area(struct file *, unsigned long, unsigned long,
         unsigned long, unsigned long);
extern unsigned long
arch_get_unmapped_area_topdown(struct file *filp, unsigned long addr,
     unsigned long len, unsigned long pgoff,
     unsigned long flags);
extern void arch_unmap_area(struct vm_area_struct *area);
extern void arch_unmap_area_topdown(struct vm_area_struct *area);


struct mm_struct {
 struct vm_area_struct * mmap;
 struct rb_root mm_rb;
 struct vm_area_struct * mmap_cache;
 unsigned long (*get_unmapped_area) (struct file *filp,
    unsigned long addr, unsigned long len,
    unsigned long pgoff, unsigned long flags);
 void (*unmap_area) (struct vm_area_struct *area);
 unsigned long mmap_base;
 unsigned long free_area_cache;
 pgd_t * pgd;
 atomic_t mm_users;
 atomic_t mm_count;
 int map_count;
 struct rw_semaphore mmap_sem;
 spinlock_t page_table_lock;

 struct list_head mmlist;




 unsigned long start_code, end_code, start_data, end_data;
 unsigned long start_brk, brk, start_stack;
 unsigned long arg_start, arg_end, env_start, env_end;
 unsigned long rss, anon_rss, total_vm, locked_vm, shared_vm;
 unsigned long exec_vm, stack_vm, reserved_vm, def_flags, nr_ptes;

 unsigned long saved_auxv[42];

 unsigned dumpable:1;
 cpumask_t cpu_vm_mask;


 mm_context_t context;


 unsigned long swap_token_time;
 char recent_pagein;


 int core_waiters;
 struct completion *core_startup_done, core_done;


 rwlock_t ioctx_list_lock;
 struct kioctx *ioctx_list;

 struct kioctx default_kioctx;
};

struct sighand_struct {
 atomic_t count;
 struct k_sigaction action[64];
 spinlock_t siglock;
};
# 268 "linux-2.6/include/linux/sched.h"
struct signal_struct {
 atomic_t count;
 atomic_t live;


 task_t *curr_target;


 struct sigpending shared_pending;


 int group_exit;
 int group_exit_code;





 struct task_struct *group_exit_task;
 int notify_count;


 int group_stop_count;

   int stop_state;


 struct list_head posix_timers;


 pid_t pgrp;
 pid_t tty_old_pgrp;
 pid_t session;

 int leader;

 struct tty_struct *tty;







 unsigned long utime, stime, cutime, cstime;
 unsigned long nvcsw, nivcsw, cnvcsw, cnivcsw;
 unsigned long min_flt, maj_flt, cmin_flt, cmaj_flt;
# 325 "linux-2.6/include/linux/sched.h"
 struct rlimit rlim[13];
};
# 351 "linux-2.6/include/linux/sched.h"
struct user_struct {
 atomic_t __count;
 atomic_t processes;
 atomic_t files;
 atomic_t sigpending;

 unsigned long mq_bytes;
 unsigned long locked_shm;







 struct list_head uidhash_list;
 uid_t uid;
};

extern struct user_struct *find_user(uid_t);

typedef  struct user_struct   _GLOBAL_97_T; extern  _GLOBAL_97_T  global_root_user[NUM_STACKS];    


typedef struct prio_array prio_array_t;
struct backing_dev_info;
struct reclaim_state;
# 394 "linux-2.6/include/linux/sched.h"
enum idle_type
{
 SCHED_IDLE,
 NOT_IDLE,
 NEWLY_IDLE,
 MAX_IDLE_TYPES
};
# 474 "linux-2.6/include/linux/sched.h"
struct io_context;
void exit_io_context(void);



struct group_info {
 int ngroups;
 atomic_t usage;
 gid_t small_block[32];
 int nblocks;
 gid_t *blocks[0];
};
# 502 "linux-2.6/include/linux/sched.h"
struct group_info *groups_alloc(int gidsetsize);
void groups_free(struct group_info *group_info);
int set_current_groups(struct group_info *group_info);





struct audit_context;
struct mempolicy;

struct task_struct {
 volatile long state;
 struct thread_info *thread_info;
 atomic_t usage;
 unsigned long flags;
 unsigned long ptrace;

 int lock_depth;

 int prio, static_prio;
 struct list_head run_list;
 prio_array_t *array;

 unsigned long sleep_avg;
 long interactive_credit;
 unsigned long long timestamp, last_ran;
 int activated;

 unsigned long policy;
 cpumask_t cpus_allowed;
 unsigned int time_slice, first_time_slice;





 struct list_head tasks;




 struct list_head ptrace_children;
 struct list_head ptrace_list;

 struct mm_struct *mm, *active_mm;


 struct linux_binfmt *binfmt;
 long exit_state;
 int exit_code, exit_signal;
 int pdeath_signal;

 unsigned long personality;
 unsigned did_exec:1;
 pid_t pid;
 pid_t tgid;





 struct task_struct *real_parent;
 struct task_struct *parent;




 struct list_head children;
 struct list_head sibling;
 struct task_struct *group_leader;


 struct pid pids[PIDTYPE_MAX];

 wait_queue_head_t wait_chldexit;
 struct completion *vfork_done;
 int *set_child_tid;
 int *clear_child_tid;

 unsigned long rt_priority;
 unsigned long it_real_value, it_prof_value, it_virt_value;
 unsigned long it_real_incr, it_prof_incr, it_virt_incr;
 struct timer_list real_timer;
 unsigned long utime, stime;
 unsigned long nvcsw, nivcsw;
 struct timespec start_time;

 unsigned long min_flt, maj_flt;

 uid_t uid,euid,suid,fsuid;
 gid_t gid,egid,sgid,fsgid;
 struct group_info *group_info;
 kernel_cap_t cap_effective, cap_inheritable, cap_permitted;
 unsigned keep_capabilities:1;
 struct user_struct *user;





 unsigned short used_math;
 char comm[16];

 int link_count, total_link_count;

 struct sysv_sem sysvsem;

 struct thread_struct thread;

 struct fs_struct *fs;

 struct files_struct *files;

 struct namespace *namespace;

 struct signal_struct *signal;
 struct sighand_struct *sighand;

 sigset_t blocked, real_blocked;
 struct sigpending pending;

 unsigned long sas_ss_sp;
 size_t sas_ss_size;
 int (*notifier)(void *priv);
 void *notifier_data;
 sigset_t *notifier_mask;

 void *security;
 struct audit_context *audit_context;


    u32 parent_exec_id;
    u32 self_exec_id;

 spinlock_t alloc_lock;

 spinlock_t proc_lock;

 spinlock_t switch_lock;


 void *journal_info;


 struct reclaim_state *reclaim_state;

 struct dentry *proc_dentry;
 struct backing_dev_info *backing_dev_info;

 struct io_context *io_context;

 unsigned long ptrace_message;
 siginfo_t *last_siginfo;






 wait_queue_t *io_wait;




};

static inline  __attribute__((always_inline)) pid_t process_group(struct task_struct *tsk)
{
 return tsk->signal->pgrp;
}
# 682 "linux-2.6/include/linux/sched.h"
static inline  __attribute__((always_inline)) int pid_alive(struct task_struct *p)
{
 return p->pids[PIDTYPE_PID].nr != 0;
}

extern void free_task(struct task_struct *tsk);
extern void __put_task_struct(struct task_struct *tsk);
# 722 "linux-2.6/include/linux/sched.h"
static inline  __attribute__((always_inline)) int set_cpus_allowed(task_t *p, cpumask_t new_mask)
{
 return 0;
}


extern unsigned long long sched_clock(void);
# 737 "linux-2.6/include/linux/sched.h"
extern void sched_idle_next(void);
extern void set_user_nice(task_t *p, long nice);
extern int task_prio(const task_t *p);
extern int task_nice(const task_t *p);
extern int task_curr(const task_t *p);
extern int idle_cpu(int cpu);

void yield(void);




typedef  struct exec_domain   _GLOBAL_98_T; extern  _GLOBAL_98_T  _GLOBAL_0_default_exec_domain_I; extern  _GLOBAL_98_T  _GLOBAL_1_default_exec_domain_I; extern  _GLOBAL_98_T  _GLOBAL_2_default_exec_domain_I; extern  _GLOBAL_98_T  _GLOBAL_3_default_exec_domain_I; extern  _GLOBAL_98_T  _GLOBAL_4_default_exec_domain_I; extern  _GLOBAL_98_T  _GLOBAL_5_default_exec_domain_I; extern  _GLOBAL_98_T  _GLOBAL_6_default_exec_domain_I; extern  _GLOBAL_98_T  _GLOBAL_7_default_exec_domain_I; extern  _GLOBAL_98_T  _GLOBAL_8_default_exec_domain_I; extern  _GLOBAL_98_T  _GLOBAL_9_default_exec_domain_I; extern  _GLOBAL_98_T  _GLOBAL_10_default_exec_domain_I; extern  _GLOBAL_98_T  _GLOBAL_11_default_exec_domain_I; extern  _GLOBAL_98_T  _GLOBAL_12_default_exec_domain_I; extern  _GLOBAL_98_T  _GLOBAL_13_default_exec_domain_I; extern  _GLOBAL_98_T  _GLOBAL_14_default_exec_domain_I; extern  _GLOBAL_98_T  _GLOBAL_15_default_exec_domain_I; extern  _GLOBAL_98_T  _GLOBAL_16_default_exec_domain_I; extern  _GLOBAL_98_T  _GLOBAL_17_default_exec_domain_I; extern  _GLOBAL_98_T  _GLOBAL_18_default_exec_domain_I; extern  _GLOBAL_98_T  _GLOBAL_19_default_exec_domain_I; extern  _GLOBAL_98_T  _GLOBAL_20_default_exec_domain_I; extern  _GLOBAL_98_T  _GLOBAL_21_default_exec_domain_I; extern  _GLOBAL_98_T  _GLOBAL_22_default_exec_domain_I; extern  _GLOBAL_98_T  _GLOBAL_23_default_exec_domain_I; extern  _GLOBAL_98_T  _GLOBAL_24_default_exec_domain_I; extern  _GLOBAL_98_T  _GLOBAL_25_default_exec_domain_I; extern  _GLOBAL_98_T  _GLOBAL_26_default_exec_domain_I; extern  _GLOBAL_98_T  _GLOBAL_27_default_exec_domain_I; extern  _GLOBAL_98_T  _GLOBAL_28_default_exec_domain_I; extern  _GLOBAL_98_T  _GLOBAL_29_default_exec_domain_I; extern  _GLOBAL_98_T  _GLOBAL_30_default_exec_domain_I; extern  _GLOBAL_98_T  _GLOBAL_31_default_exec_domain_I; extern  _GLOBAL_98_T  _GLOBAL_32_default_exec_domain_I; extern  _GLOBAL_98_T  _GLOBAL_33_default_exec_domain_I; extern  _GLOBAL_98_T  _GLOBAL_34_default_exec_domain_I; extern  _GLOBAL_98_T  _GLOBAL_35_default_exec_domain_I; extern  _GLOBAL_98_T  _GLOBAL_36_default_exec_domain_I; extern  _GLOBAL_98_T  _GLOBAL_37_default_exec_domain_I; extern  _GLOBAL_98_T  _GLOBAL_38_default_exec_domain_I; extern  _GLOBAL_98_T  _GLOBAL_39_default_exec_domain_I; extern  _GLOBAL_98_T  _GLOBAL_40_default_exec_domain_I; extern  _GLOBAL_98_T  _GLOBAL_41_default_exec_domain_I; extern  _GLOBAL_98_T  _GLOBAL_42_default_exec_domain_I; extern  _GLOBAL_98_T  _GLOBAL_43_default_exec_domain_I; extern  _GLOBAL_98_T  _GLOBAL_44_default_exec_domain_I; extern  _GLOBAL_98_T  _GLOBAL_45_default_exec_domain_I; extern  _GLOBAL_98_T  _GLOBAL_46_default_exec_domain_I; extern  _GLOBAL_98_T  _GLOBAL_47_default_exec_domain_I; extern  _GLOBAL_98_T  _GLOBAL_48_default_exec_domain_I; extern  _GLOBAL_98_T  _GLOBAL_49_default_exec_domain_I; static __attribute__ ((unused)) __typeof__(_GLOBAL_0_default_exec_domain_I) *_GLOBAL_default_exec_domain_6_A[NUM_STACKS];   

union thread_union {
 struct thread_info thread_info;
 unsigned long stack[(4096)/sizeof(long)];
};


static inline  __attribute__((always_inline)) int kstack_end(void *addr)
{



 return !(((unsigned long)addr+sizeof(void*)-1) & ((4096)-sizeof(void*)));
}


typedef  union thread_union   _GLOBAL_99_T; extern  _GLOBAL_99_T  global_init_thread_union[NUM_STACKS];    
typedef  struct task_struct   _GLOBAL_100_T; extern  _GLOBAL_100_T  global_init_task[NUM_STACKS];    

typedef  struct mm_struct   _GLOBAL_101_T; extern  _GLOBAL_101_T  global_init_mm[NUM_STACKS];    


extern struct task_struct *find_task_by_pid_type(int type, int pid);
extern void set_special_pids(pid_t session, pid_t pgrp);
extern void __set_special_pids(pid_t session, pid_t pgrp);


extern struct user_struct * alloc_uid(uid_t);
static inline  __attribute__((always_inline)) struct user_struct *get_uid(struct user_struct *u)
{
 atomic_inc(&u->__count);
 return u;
}
extern void free_uid(struct user_struct *);
extern void switch_uid(struct user_struct *);



extern void do_timer(struct pt_regs *);

extern int wake_up_state(struct task_struct * tsk, unsigned int state) __attribute__((regparm(3))) ;
extern int wake_up_process(struct task_struct * tsk) __attribute__((regparm(3))) ;
extern void wake_up_new_task(struct task_struct * tsk, unsigned long clone_flags) 
                                 __attribute__((regparm(3))) ;



 static inline  __attribute__((always_inline)) void kick_process(struct task_struct *tsk) { }

extern void sched_fork(task_t * p) __attribute__((regparm(3))) ;
extern void sched_exit(task_t * p) __attribute__((regparm(3))) ;

extern int in_group_p(gid_t);
extern int in_egroup_p(gid_t);

extern void proc_caches_init(void);
extern void flush_signals(struct task_struct *);
extern void flush_signal_handlers(struct task_struct *, int force_default);
extern int dequeue_signal(struct task_struct *tsk, sigset_t *mask, siginfo_t *info);

static inline  __attribute__((always_inline)) int dequeue_signal_lock(struct task_struct *tsk, sigset_t *mask, siginfo_t *info)
{
 unsigned long flags;
 int ret;

 do { (void)flags; do { } while (0); do { (void)(&tsk->sighand->siglock); } while(0); (void)0; } while (0);
 ret = dequeue_signal(tsk, mask, info);
 do { do { (void)(&tsk->sighand->siglock); } while(0); (void)flags; do { } while (0); (void)0; } while (0);

 return ret;
}

extern void block_all_signals(int (*notifier)(void *priv), void *priv,
         sigset_t *mask);
extern void unblock_all_signals(void);
extern void release_task(struct task_struct * p);
extern int send_sig_info(int, struct siginfo *, struct task_struct *);
extern int send_group_sig_info(int, struct siginfo *, struct task_struct *);
extern int force_sigsegv(int, struct task_struct *);
extern int force_sig_info(int, struct siginfo *, struct task_struct *);
extern int __kill_pg_info(int sig, struct siginfo *info, pid_t pgrp);
extern int kill_pg_info(int, struct siginfo *, pid_t);
extern int kill_proc_info(int, struct siginfo *, pid_t);
extern void do_notify_parent(struct task_struct *, int);
extern void force_sig(int, struct task_struct *);
extern void force_sig_specific(int, struct task_struct *);
extern int send_sig(int, struct task_struct *, int);
extern void zap_other_threads(struct task_struct *p);
extern int kill_pg(pid_t, int, int);
extern int kill_sl(pid_t, int, int);
extern int kill_proc(pid_t, int, int);
extern struct sigqueue *sigqueue_alloc(void);
extern void sigqueue_free(struct sigqueue *);
extern int send_sigqueue(int, struct sigqueue *, struct task_struct *);
extern int send_group_sigqueue(int, struct sigqueue *, struct task_struct *);
extern int do_sigaction(int, const struct k_sigaction *, struct k_sigaction *);
extern int do_sigaltstack(const stack_t *, stack_t *, unsigned long);
# 855 "linux-2.6/include/linux/sched.h"
static inline  __attribute__((always_inline)) int on_sig_stack(unsigned long sp)
{
 return (sp - get_current()->sas_ss_sp < get_current()->sas_ss_size);
}

static inline  __attribute__((always_inline)) int sas_ss_flags(unsigned long sp)
{
 return (get_current()->sas_ss_size == 0 ? 2
  : on_sig_stack(sp) ? 1 : 0);
}






static inline  __attribute__((always_inline)) int capable(int cap)
{
 if (((get_current()->cap_effective) & (1 << (cap)))) {
  get_current()->flags |= 0x00000100;
  return 1;
 }
 return 0;
}





extern struct mm_struct * mm_alloc(void);


extern void __mmdrop(struct mm_struct *) __attribute__((regparm(3))) ;
static inline  __attribute__((always_inline)) void mmdrop(struct mm_struct * mm)
{
 if (atomic_dec_and_test(&mm->mm_count))
  __mmdrop(mm);
}


extern void mmput(struct mm_struct *);

extern struct mm_struct *get_task_mm(struct task_struct *task);

extern void mm_release(struct task_struct *, struct mm_struct *);

extern int copy_thread(int, unsigned long, unsigned long, unsigned long, struct task_struct *, struct pt_regs *);
extern void flush_thread(void);
extern void exit_thread(void);

extern void exit_mm(struct task_struct *);
extern void exit_files(struct task_struct *);
extern void exit_signal(struct task_struct *);
extern void __exit_signal(struct task_struct *);
extern void exit_sighand(struct task_struct *);
extern void __exit_sighand(struct task_struct *);
extern void exit_itimers(struct signal_struct *);

extern void do_group_exit(int);

extern void reparent_to_init(void);
extern void daemonize(const char *, ...);
extern int allow_signal(int);
extern int disallow_signal(int);
typedef  task_t  _GLOBAL_102_T; extern  _GLOBAL_102_T  * global_child_reaper[NUM_STACKS];   

extern int do_execve(char *, char * *, char * *, struct pt_regs *);
extern long do_fork(unsigned long, unsigned long, struct pt_regs *, unsigned long, int *, int *);
task_t *fork_idle(int);

extern void set_task_comm(struct task_struct *tsk, char *from);
extern void get_task_comm(char *to, struct task_struct *tsk);
# 965 "linux-2.6/include/linux/sched.h"
extern task_t * next_thread(const task_t *p) __attribute__((regparm(3))) ;



static inline  __attribute__((always_inline)) int thread_group_empty(task_t *p)
{
 return list_empty(&p->pids[PIDTYPE_TGID].pid_list);
}




extern void unhash_process(struct task_struct *p);
# 987 "linux-2.6/include/linux/sched.h"
static inline  __attribute__((always_inline)) void task_lock(struct task_struct *p)
{
 do { do { } while (0); do { (void)(&p->alloc_lock); } while(0); (void)0; } while(0);
}

static inline  __attribute__((always_inline)) void task_unlock(struct task_struct *p)
{
 do { do { (void)(&p->alloc_lock); } while(0); do { } while (0); (void)0; } while (0);
}




static inline  __attribute__((always_inline)) void set_tsk_thread_flag(struct task_struct *tsk, int flag)
{
 set_ti_thread_flag(tsk->thread_info,flag);
}

static inline  __attribute__((always_inline)) void clear_tsk_thread_flag(struct task_struct *tsk, int flag)
{
 clear_ti_thread_flag(tsk->thread_info,flag);
}

static inline  __attribute__((always_inline)) int test_and_set_tsk_thread_flag(struct task_struct *tsk, int flag)
{
 return test_and_set_ti_thread_flag(tsk->thread_info,flag);
}

static inline  __attribute__((always_inline)) int test_and_clear_tsk_thread_flag(struct task_struct *tsk, int flag)
{
 return test_and_clear_ti_thread_flag(tsk->thread_info,flag);
}

static inline  __attribute__((always_inline)) int test_tsk_thread_flag(struct task_struct *tsk, int flag)
{
 return test_ti_thread_flag(tsk->thread_info,flag);
}

static inline  __attribute__((always_inline)) void set_tsk_need_resched(struct task_struct *tsk)
{
 set_tsk_thread_flag(tsk,3);
}

static inline  __attribute__((always_inline)) void clear_tsk_need_resched(struct task_struct *tsk)
{
 clear_tsk_thread_flag(tsk,3);
}

static inline  __attribute__((always_inline)) int signal_pending(struct task_struct *p)
{
 return __builtin_expect(!!(test_tsk_thread_flag(p,2)), 0);
}

static inline  __attribute__((always_inline)) int need_resched(void)
{
 return __builtin_expect(!!(test_thread_flag(3)), 0);
}

extern void __cond_resched(void);
static inline  __attribute__((always_inline)) void cond_resched(void)
{
 if (need_resched())
  __cond_resched();
}
# 1060 "linux-2.6/include/linux/sched.h"
static inline  __attribute__((always_inline)) void cond_resched_lock(spinlock_t * lock)
{
 if (need_resched()) {
  do { (void)(lock); } while(0);
  do { } while (0);
  __cond_resched();
  do { do { } while (0); do { (void)(lock); } while(0); (void)0; } while(0);
 }
}





extern void recalc_sigpending_tsk(struct task_struct *t) __attribute__((regparm(3))) ;
extern void recalc_sigpending(void);

extern void signal_wake_up(struct task_struct *t, int resume_stopped);
# 1096 "linux-2.6/include/linux/sched.h"
static inline  __attribute__((always_inline)) unsigned int task_cpu(const struct task_struct *p)
{
 return 0;
}

static inline  __attribute__((always_inline)) void set_task_cpu(struct task_struct *p, unsigned int cpu)
{
}




extern void arch_pick_mmap_layout(struct mm_struct *mm);
# 1118 "linux-2.6/include/linux/sched.h"
extern long sched_setaffinity(pid_t pid, cpumask_t new_mask);
extern long sched_getaffinity(pid_t pid, cpumask_t *mask);
# 5 "linux-2.6/include/linux/mm.h" 2
# 1 "linux-2.6/include/linux/errno.h" 1



# 1 "linux-2.6/include/asm/errno.h" 1



# 1 "linux-2.6/include/asm-generic/errno.h" 1



# 1 "linux-2.6/include/asm-generic/errno-base.h" 1
# 5 "linux-2.6/include/asm-generic/errno.h" 2
# 5 "linux-2.6/include/asm/errno.h" 2
# 5 "linux-2.6/include/linux/errno.h" 2
# 6 "linux-2.6/include/linux/mm.h" 2
# 14 "linux-2.6/include/linux/mm.h"
# 1 "linux-2.6/include/linux/prio_tree.h" 1



struct prio_tree_node {
 struct prio_tree_node *left;
 struct prio_tree_node *right;
 struct prio_tree_node *parent;
};

struct prio_tree_root {
 struct prio_tree_node *prio_tree_node;
 unsigned int index_bits;
};

struct prio_tree_iter {
 struct prio_tree_node *cur;
 unsigned long mask;
 unsigned long value;
 int size_level;

 struct prio_tree_root *root;
 unsigned long r_index;
 unsigned long h_index;
};

static inline  __attribute__((always_inline)) void prio_tree_iter_init(struct prio_tree_iter *iter,
  struct prio_tree_root *root, unsigned long r_index, unsigned long h_index)
{
 iter->root = root;
 iter->r_index = r_index;
 iter->h_index = h_index;
}
# 56 "linux-2.6/include/linux/prio_tree.h"
static inline  __attribute__((always_inline)) int prio_tree_empty(const struct prio_tree_root *root)
{
 return root->prio_tree_node == ((void *)0);
}

static inline  __attribute__((always_inline)) int prio_tree_root(const struct prio_tree_node *node)
{
 return node->parent == node;
}

static inline  __attribute__((always_inline)) int prio_tree_left_empty(const struct prio_tree_node *node)
{
 return node->left == node;
}

static inline  __attribute__((always_inline)) int prio_tree_right_empty(const struct prio_tree_node *node)
{
 return node->right == node;
}
# 15 "linux-2.6/include/linux/mm.h" 2
# 1 "linux-2.6/include/linux/fs.h" 1
# 11 "linux-2.6/include/linux/fs.h"
# 1 "linux-2.6/include/linux/limits.h" 1
# 12 "linux-2.6/include/linux/fs.h" 2


# 1 "linux-2.6/include/linux/kdev_t.h" 1
# 21 "linux-2.6/include/linux/kdev_t.h"
static inline  __attribute__((always_inline)) int old_valid_dev(dev_t dev)
{
 return ((unsigned int) ((dev) >> 20)) < 256 && ((unsigned int) ((dev) & ((1U << 20) - 1))) < 256;
}

static inline  __attribute__((always_inline)) u16 old_encode_dev(dev_t dev)
{
 return (((unsigned int) ((dev) >> 20)) << 8) | ((unsigned int) ((dev) & ((1U << 20) - 1)));
}

static inline  __attribute__((always_inline)) dev_t old_decode_dev(u16 val)
{
 return ((((val >> 8) & 255) << 20) | (val & 255));
}

static inline  __attribute__((always_inline)) int new_valid_dev(dev_t dev)
{
 return 1;
}

static inline  __attribute__((always_inline)) u32 new_encode_dev(dev_t dev)
{
 unsigned major = ((unsigned int) ((dev) >> 20));
 unsigned minor = ((unsigned int) ((dev) & ((1U << 20) - 1)));
 return (minor & 0xff) | (major << 8) | ((minor & ~0xff) << 12);
}

static inline  __attribute__((always_inline)) dev_t new_decode_dev(u32 dev)
{
 unsigned major = (dev & 0xfff00) >> 8;
 unsigned minor = (dev & 0xff) | ((dev >> 12) & 0xfff00);
 return (((major) << 20) | (minor));
}

static inline  __attribute__((always_inline)) int huge_valid_dev(dev_t dev)
{
 return 1;
}

static inline  __attribute__((always_inline)) u64 huge_encode_dev(dev_t dev)
{
 return new_encode_dev(dev);
}

static inline  __attribute__((always_inline)) dev_t huge_decode_dev(u64 dev)
{
 return new_decode_dev(dev);
}

static inline  __attribute__((always_inline)) int sysv_valid_dev(dev_t dev)
{
 return ((unsigned int) ((dev) >> 20)) < (1<<14) && ((unsigned int) ((dev) & ((1U << 20) - 1))) < (1<<18);
}

static inline  __attribute__((always_inline)) u32 sysv_encode_dev(dev_t dev)
{
 return ((unsigned int) ((dev) & ((1U << 20) - 1))) | (((unsigned int) ((dev) >> 20)) << 18);
}

static inline  __attribute__((always_inline)) unsigned sysv_major(u32 dev)
{
 return (dev >> 18) & 0x3fff;
}

static inline  __attribute__((always_inline)) unsigned sysv_minor(u32 dev)
{
 return dev & 0x3ffff;
}
# 15 "linux-2.6/include/linux/fs.h" 2
# 1 "linux-2.6/include/linux/ioctl.h" 1



# 1 "linux-2.6/include/asm/ioctl.h" 1
# 56 "linux-2.6/include/asm/ioctl.h"
typedef  unsigned int   _GLOBAL_103_T; extern  _GLOBAL_103_T  global___invalid_size_argument_for_IOC[NUM_STACKS];    
# 5 "linux-2.6/include/linux/ioctl.h" 2
# 16 "linux-2.6/include/linux/fs.h" 2
# 1 "linux-2.6/include/linux/dcache.h" 1
# 10 "linux-2.6/include/linux/dcache.h"
# 1 "linux-2.6/include/linux/rcupdate.h" 1
# 50 "linux-2.6/include/linux/rcupdate.h"
struct rcu_head {
 struct rcu_head *next;
 void (*func)(struct rcu_head *head);
};
# 64 "linux-2.6/include/linux/rcupdate.h"
struct rcu_ctrlblk {
 long cur;
 long completed;
 int next_pending;
 seqcount_t lock;
} ;


static inline  __attribute__((always_inline)) int rcu_batch_before(long a, long b)
{
        return (a - b) < 0;
}


static inline  __attribute__((always_inline)) int rcu_batch_after(long a, long b)
{
        return (a - b) > 0;
}






struct rcu_data {

 long quiescbatch;
 long qsctr;
 long last_qsctr;

 int qs_pending;


 long batch;
 struct rcu_head *nxtlist;
 struct rcu_head **nxttail;
 struct rcu_head *curlist;
 struct rcu_head **curtail;
 struct rcu_head *donelist;
 struct rcu_head **donetail;
 int cpu;
};

typedef  __typeof__ ( struct rcu_data  )   _GLOBAL_104_T; extern  _GLOBAL_104_T  global_per_cpu__rcu_data[NUM_STACKS];    
typedef  __typeof__ ( struct rcu_data  )   _GLOBAL_105_T; extern  _GLOBAL_105_T  global_per_cpu__rcu_bh_data[NUM_STACKS];    
typedef  struct rcu_ctrlblk   _GLOBAL_106_T; extern  _GLOBAL_106_T  global_rcu_ctrlblk[NUM_STACKS];    
typedef  struct rcu_ctrlblk   _GLOBAL_107_T; extern  _GLOBAL_107_T  global_rcu_bh_ctrlblk[NUM_STACKS];    




static inline  __attribute__((always_inline)) void rcu_qsctr_inc(int cpu)
{
 struct rcu_data *rdp = &(*((void)cpu, &global_per_cpu__rcu_data[get_stack_id()]));
 rdp->qsctr++;
}
static inline  __attribute__((always_inline)) void rcu_bh_qsctr_inc(int cpu)
{
 struct rcu_data *rdp = &(*((void)cpu, &global_per_cpu__rcu_bh_data[get_stack_id()]));
 rdp->qsctr++;
}

static inline  __attribute__((always_inline)) int __rcu_pending(struct rcu_ctrlblk *rcp,
      struct rcu_data *rdp)
{



 if (rdp->curlist && !rcu_batch_before(rcp->completed, rdp->batch))
  return 1;


 if (!rdp->curlist && rdp->nxtlist)
  return 1;


 if (rdp->donelist)
  return 1;


 if (rdp->quiescbatch != rcp->cur || rdp->qs_pending)
  return 1;


 return 0;
}

static inline  __attribute__((always_inline)) int rcu_pending(int cpu)
{
 return __rcu_pending(&global_rcu_ctrlblk[get_stack_id()], &(*((void)cpu, &global_per_cpu__rcu_data[get_stack_id()]))) ||
  __rcu_pending(&global_rcu_bh_ctrlblk[get_stack_id()], &(*((void)cpu, &global_per_cpu__rcu_bh_data[get_stack_id()])));
}
# 259 "linux-2.6/include/linux/rcupdate.h"
extern void rcu_init(void);
extern void rcu_check_callbacks(int cpu, int user);
extern void rcu_restart_cpu(int cpu);


extern void call_rcu(struct rcu_head *head, void (*func)(struct rcu_head *head)) 
                                         __attribute__((regparm(3))) ;
extern void call_rcu_bh(struct rcu_head *head, void (*func)(struct rcu_head *head)) 
                                         __attribute__((regparm(3))) ;
extern void synchronize_kernel(void);
# 11 "linux-2.6/include/linux/dcache.h" 2


struct nameidata;
struct vfsmount;
# 34 "linux-2.6/include/linux/dcache.h"
struct qstr {
 unsigned int hash;
 unsigned int len;
 const unsigned char *name;
};

struct dentry_stat_t {
 int nr_dentry;
 int nr_unused;
 int age_limit;
 int want_pages;
 int dummy[2];
};
typedef  struct dentry_stat_t   _GLOBAL_108_T; extern  _GLOBAL_108_T  global_dentry_stat[NUM_STACKS];    






static inline  __attribute__((always_inline)) unsigned long
partial_name_hash(unsigned long c, unsigned long prevhash)
{
 return (prevhash + (c << 4) + (c >> 4)) * 11;
}





static inline  __attribute__((always_inline)) unsigned long end_name_hash(unsigned long hash)
{
 return (unsigned int) hash;
}


static inline  __attribute__((always_inline)) unsigned int
full_name_hash(const unsigned char *name, unsigned int len)
{
 unsigned long hash = 0;
 while (len--)
  hash = partial_name_hash(*name++, hash);
 return end_name_hash(hash);
}

struct dcookie_struct;



struct dentry {
 atomic_t d_count;
 unsigned int d_flags;
 spinlock_t d_lock;
 struct inode *d_inode;





 struct dentry *d_parent;
 struct qstr d_name;

 struct list_head d_lru;
 struct list_head d_child;
 struct list_head d_subdirs;
 struct list_head d_alias;
 unsigned long d_time;
 struct dentry_operations *d_op;
 struct super_block *d_sb;
 void *d_fsdata;
  struct rcu_head d_rcu;
 struct dcookie_struct *d_cookie;
 struct hlist_node d_hash;
 int d_mounted;
 unsigned char d_iname[36];
};

struct dentry_operations {
 int (*d_revalidate)(struct dentry *, struct nameidata *);
 int (*d_hash) (struct dentry *, struct qstr *);
 int (*d_compare) (struct dentry *, struct qstr *, struct qstr *);
 int (*d_delete)(struct dentry *);
 void (*d_release)(struct dentry *);
 void (*d_iput)(struct dentry *, struct inode *);
};
# 159 "linux-2.6/include/linux/dcache.h"
typedef  spinlock_t  _GLOBAL_109_T; extern  _GLOBAL_109_T  global_dcache_lock[NUM_STACKS];   
# 178 "linux-2.6/include/linux/dcache.h"
static inline  __attribute__((always_inline)) void __d_drop(struct dentry *dentry)
{
 if (!(dentry->d_flags & 0x0010)) {
  dentry->d_flags |= 0x0010;
  hlist_del_rcu(&dentry->d_hash);
 }
}

static inline  __attribute__((always_inline)) void d_drop(struct dentry *dentry)
{
 do { do { } while (0); do { (void)(&global_dcache_lock[get_stack_id()]); } while(0); (void)0; } while(0);
  __d_drop(dentry);
 do { do { (void)(&global_dcache_lock[get_stack_id()]); } while(0); do { } while (0); (void)0; } while (0);
}

static inline  __attribute__((always_inline)) int dname_external(struct dentry *dentry)
{
 return dentry->d_name.name != dentry->d_iname;
}




extern void d_instantiate(struct dentry *, struct inode *);
extern void d_delete(struct dentry *);


extern struct dentry * d_alloc(struct dentry *, const struct qstr *);
extern struct dentry * d_alloc_anon(struct inode *);
extern struct dentry * d_splice_alias(struct inode *, struct dentry *);
extern void shrink_dcache_sb(struct super_block *);
extern void shrink_dcache_parent(struct dentry *);
extern void shrink_dcache_anon(struct hlist_head *);
extern int d_invalidate(struct dentry *);


extern struct dentry * d_alloc_root(struct inode *);


extern void d_genocide(struct dentry *);

extern struct dentry *d_find_alias(struct inode *);
extern void d_prune_aliases(struct inode *);


extern int have_submounts(struct dentry *);




extern void d_rehash(struct dentry *);
# 239 "linux-2.6/include/linux/dcache.h"
static inline  __attribute__((always_inline)) void d_add(struct dentry *entry, struct inode *inode)
{
 d_instantiate(entry, inode);
 d_rehash(entry);
}


extern void d_move(struct dentry *, struct dentry *);


extern struct dentry * d_lookup(struct dentry *, struct qstr *);
extern struct dentry * __d_lookup(struct dentry *, struct qstr *);


extern int d_validate(struct dentry *, struct dentry *);

extern char * d_path(struct dentry *, struct vfsmount *, char *, int);
# 272 "linux-2.6/include/linux/dcache.h"
static inline  __attribute__((always_inline)) struct dentry *dget(struct dentry *dentry)
{
 if (dentry) {
  do { if (__builtin_expect(!!((!((&dentry->d_count)->counter))!=0), 0)) __asm__ __volatile__( "ud2\n" "\t.word %c0\n" "\t.long %c1\n" : : "i" (275), "i" ("linux-2.6/include/linux/dcache.h")); } while(0);
  atomic_inc(&dentry->d_count);
 }
 return dentry;
}

extern struct dentry * dget_locked(struct dentry *);
# 290 "linux-2.6/include/linux/dcache.h"
static inline  __attribute__((always_inline)) int d_unhashed(struct dentry *dentry)
{
 return (dentry->d_flags & 0x0010);
}

static inline  __attribute__((always_inline)) struct dentry *dget_parent(struct dentry *dentry)
{
 struct dentry *ret;

 do { do { } while (0); do { (void)(&dentry->d_lock); } while(0); (void)0; } while(0);
 ret = dget(dentry->d_parent);
 do { do { (void)(&dentry->d_lock); } while(0); do { } while (0); (void)0; } while (0);
 return ret;
}

extern void dput(struct dentry *);

static inline  __attribute__((always_inline)) int d_mountpoint(struct dentry *dentry)
{
 return dentry->d_mounted;
}

extern struct vfsmount *lookup_mnt(struct vfsmount *, struct dentry *);
extern struct dentry *lookup_create(struct nameidata *nd, int is_dir);

typedef  int  _GLOBAL_110_T; extern  _GLOBAL_110_T  global_sysctl_vfs_cache_pressure[NUM_STACKS];   
# 17 "linux-2.6/include/linux/fs.h" 2
# 1 "linux-2.6/include/linux/stat.h" 1





# 1 "linux-2.6/include/asm/stat.h" 1



struct __old_kernel_stat {
 unsigned short st_dev;
 unsigned short st_ino;
 unsigned short st_mode;
 unsigned short st_nlink;
 unsigned short st_uid;
 unsigned short st_gid;
 unsigned short st_rdev;
 unsigned long st_size;
 unsigned long st_atime;
 unsigned long st_mtime;
 unsigned long st_ctime;
};

struct stat {
 unsigned long st_dev;
 unsigned long st_ino;
 unsigned short st_mode;
 unsigned short st_nlink;
 unsigned short st_uid;
 unsigned short st_gid;
 unsigned long st_rdev;
 unsigned long st_size;
 unsigned long st_blksize;
 unsigned long st_blocks;
 unsigned long st_atime;
 unsigned long st_atime_nsec;
 unsigned long st_mtime;
 unsigned long st_mtime_nsec;
 unsigned long st_ctime;
 unsigned long st_ctime_nsec;
 unsigned long __unused4;
 unsigned long __unused5;
};




struct stat64 {
 unsigned long long st_dev;
 unsigned char __pad0[4];


 unsigned long __st_ino;

 unsigned int st_mode;
 unsigned int st_nlink;

 unsigned long st_uid;
 unsigned long st_gid;

 unsigned long long st_rdev;
 unsigned char __pad3[4];

 long long st_size;
 unsigned long st_blksize;

 unsigned long st_blocks;
 unsigned long __pad4;

 unsigned long st_atime;
 unsigned long st_atime_nsec;

 unsigned long st_mtime;
 unsigned int st_mtime_nsec;

 unsigned long st_ctime;
 unsigned long st_ctime_nsec;

 unsigned long long st_ino;
};
# 7 "linux-2.6/include/linux/stat.h" 2
# 59 "linux-2.6/include/linux/stat.h"
struct kstat {
 unsigned long ino;
 dev_t dev;
 umode_t mode;
 unsigned int nlink;
 uid_t uid;
 gid_t gid;
 dev_t rdev;
 loff_t size;
 struct timespec atime;
 struct timespec mtime;
 struct timespec ctime;
 unsigned long blksize;
 unsigned long blocks;
};
# 18 "linux-2.6/include/linux/fs.h" 2


# 1 "linux-2.6/include/linux/kobject.h" 1
# 22 "linux-2.6/include/linux/kobject.h"
# 1 "linux-2.6/include/linux/sysfs.h" 1
# 14 "linux-2.6/include/linux/sysfs.h"
struct kobject;
struct module;

struct attribute {
 char * name;
 struct module * owner;
 mode_t mode;
};

struct attribute_group {
 char * name;
 struct attribute ** attrs;
};
# 50 "linux-2.6/include/linux/sysfs.h"
struct bin_attribute {
 struct attribute attr;
 size_t size;
 ssize_t (*read)(struct kobject *, char *, loff_t, size_t);
 ssize_t (*write)(struct kobject *, char *, loff_t, size_t);
};

struct sysfs_ops {
 ssize_t (*show)(struct kobject *, struct attribute *,char *);
 ssize_t (*store)(struct kobject *,struct attribute *,const char *, size_t);
};

struct sysfs_dirent {
 atomic_t s_count;
 struct list_head s_sibling;
 struct list_head s_children;
 void * s_element;
 int s_type;
 umode_t s_mode;
 struct dentry * s_dentry;
};
# 81 "linux-2.6/include/linux/sysfs.h"
extern int
sysfs_create_dir(struct kobject *);

extern void
sysfs_remove_dir(struct kobject *);

extern int
sysfs_rename_dir(struct kobject *, const char *new_name);

extern int
sysfs_create_file(struct kobject *, const struct attribute *);

extern int
sysfs_update_file(struct kobject *, const struct attribute *);

extern void
sysfs_remove_file(struct kobject *, const struct attribute *);

extern int
sysfs_create_link(struct kobject * kobj, struct kobject * target, char * name);

extern void
sysfs_remove_link(struct kobject *, char * name);

int sysfs_create_bin_file(struct kobject * kobj, struct bin_attribute * attr);
int sysfs_remove_bin_file(struct kobject * kobj, struct bin_attribute * attr);

int sysfs_create_group(struct kobject *, const struct attribute_group *);
void sysfs_remove_group(struct kobject *, const struct attribute_group *);
# 23 "linux-2.6/include/linux/kobject.h" 2

# 1 "linux-2.6/include/linux/kref.h" 1
# 23 "linux-2.6/include/linux/kref.h"
struct kref {
 atomic_t refcount;
};

void kref_init(struct kref *kref);
void kref_get(struct kref *kref);
void kref_put(struct kref *kref, void (*release) (struct kref *kref));
# 25 "linux-2.6/include/linux/kobject.h" 2
# 1 "linux-2.6/include/linux/kobject_uevent.h" 1
# 17 "linux-2.6/include/linux/kobject_uevent.h"
typedef  char  _GLOBAL_111_T; extern  _GLOBAL_111_T  _GLOBAL_0_hotplug_path_I [ ] ; extern  _GLOBAL_111_T  _GLOBAL_1_hotplug_path_I [ ] ; extern  _GLOBAL_111_T  _GLOBAL_2_hotplug_path_I [ ] ; extern  _GLOBAL_111_T  _GLOBAL_3_hotplug_path_I [ ] ; extern  _GLOBAL_111_T  _GLOBAL_4_hotplug_path_I [ ] ; extern  _GLOBAL_111_T  _GLOBAL_5_hotplug_path_I [ ] ; extern  _GLOBAL_111_T  _GLOBAL_6_hotplug_path_I [ ] ; extern  _GLOBAL_111_T  _GLOBAL_7_hotplug_path_I [ ] ; extern  _GLOBAL_111_T  _GLOBAL_8_hotplug_path_I [ ] ; extern  _GLOBAL_111_T  _GLOBAL_9_hotplug_path_I [ ] ; extern  _GLOBAL_111_T  _GLOBAL_10_hotplug_path_I [ ] ; extern  _GLOBAL_111_T  _GLOBAL_11_hotplug_path_I [ ] ; extern  _GLOBAL_111_T  _GLOBAL_12_hotplug_path_I [ ] ; extern  _GLOBAL_111_T  _GLOBAL_13_hotplug_path_I [ ] ; extern  _GLOBAL_111_T  _GLOBAL_14_hotplug_path_I [ ] ; extern  _GLOBAL_111_T  _GLOBAL_15_hotplug_path_I [ ] ; extern  _GLOBAL_111_T  _GLOBAL_16_hotplug_path_I [ ] ; extern  _GLOBAL_111_T  _GLOBAL_17_hotplug_path_I [ ] ; extern  _GLOBAL_111_T  _GLOBAL_18_hotplug_path_I [ ] ; extern  _GLOBAL_111_T  _GLOBAL_19_hotplug_path_I [ ] ; extern  _GLOBAL_111_T  _GLOBAL_20_hotplug_path_I [ ] ; extern  _GLOBAL_111_T  _GLOBAL_21_hotplug_path_I [ ] ; extern  _GLOBAL_111_T  _GLOBAL_22_hotplug_path_I [ ] ; extern  _GLOBAL_111_T  _GLOBAL_23_hotplug_path_I [ ] ; extern  _GLOBAL_111_T  _GLOBAL_24_hotplug_path_I [ ] ; extern  _GLOBAL_111_T  _GLOBAL_25_hotplug_path_I [ ] ; extern  _GLOBAL_111_T  _GLOBAL_26_hotplug_path_I [ ] ; extern  _GLOBAL_111_T  _GLOBAL_27_hotplug_path_I [ ] ; extern  _GLOBAL_111_T  _GLOBAL_28_hotplug_path_I [ ] ; extern  _GLOBAL_111_T  _GLOBAL_29_hotplug_path_I [ ] ; extern  _GLOBAL_111_T  _GLOBAL_30_hotplug_path_I [ ] ; extern  _GLOBAL_111_T  _GLOBAL_31_hotplug_path_I [ ] ; extern  _GLOBAL_111_T  _GLOBAL_32_hotplug_path_I [ ] ; extern  _GLOBAL_111_T  _GLOBAL_33_hotplug_path_I [ ] ; extern  _GLOBAL_111_T  _GLOBAL_34_hotplug_path_I [ ] ; extern  _GLOBAL_111_T  _GLOBAL_35_hotplug_path_I [ ] ; extern  _GLOBAL_111_T  _GLOBAL_36_hotplug_path_I [ ] ; extern  _GLOBAL_111_T  _GLOBAL_37_hotplug_path_I [ ] ; extern  _GLOBAL_111_T  _GLOBAL_38_hotplug_path_I [ ] ; extern  _GLOBAL_111_T  _GLOBAL_39_hotplug_path_I [ ] ; extern  _GLOBAL_111_T  _GLOBAL_40_hotplug_path_I [ ] ; extern  _GLOBAL_111_T  _GLOBAL_41_hotplug_path_I [ ] ; extern  _GLOBAL_111_T  _GLOBAL_42_hotplug_path_I [ ] ; extern  _GLOBAL_111_T  _GLOBAL_43_hotplug_path_I [ ] ; extern  _GLOBAL_111_T  _GLOBAL_44_hotplug_path_I [ ] ; extern  _GLOBAL_111_T  _GLOBAL_45_hotplug_path_I [ ] ; extern  _GLOBAL_111_T  _GLOBAL_46_hotplug_path_I [ ] ; extern  _GLOBAL_111_T  _GLOBAL_47_hotplug_path_I [ ] ; extern  _GLOBAL_111_T  _GLOBAL_48_hotplug_path_I [ ] ; extern  _GLOBAL_111_T  _GLOBAL_49_hotplug_path_I [ ] ; static __attribute__ ((unused)) __typeof__(_GLOBAL_0_hotplug_path_I) *_GLOBAL_hotplug_path_7_A[NUM_STACKS];  





typedef int kobject_action_t;
enum kobject_action {
 KOBJ_ADD = ( kobject_action_t) 0x01,
 KOBJ_REMOVE = ( kobject_action_t) 0x02,
 KOBJ_CHANGE = ( kobject_action_t) 0x03,
 KOBJ_MOUNT = ( kobject_action_t) 0x04,
 KOBJ_UMOUNT = ( kobject_action_t) 0x05,
 KOBJ_OFFLINE = ( kobject_action_t) 0x06,
 KOBJ_ONLINE = ( kobject_action_t) 0x07,
};
# 43 "linux-2.6/include/linux/kobject_uevent.h"
static inline  __attribute__((always_inline)) int kobject_uevent(struct kobject *kobj,
     enum kobject_action action,
     struct attribute *attr)
{
 return 0;
}
static inline  __attribute__((always_inline)) int kobject_uevent_atomic(struct kobject *kobj,
            enum kobject_action action,
     struct attribute *attr)
{
 return 0;
}
# 26 "linux-2.6/include/linux/kobject.h" 2





typedef  u64  _GLOBAL_112_T; extern  _GLOBAL_112_T  global_hotplug_seqnum[NUM_STACKS];   

struct kobject {
 char * k_name;
 char name[20];
 struct kref kref;
 struct list_head entry;
 struct kobject * parent;
 struct kset * kset;
 struct kobj_type * ktype;
 struct dentry * dentry;
};

extern int kobject_set_name(struct kobject *, const char *, ...)
 __attribute__((format(printf,2,3))) ;

static inline  __attribute__((always_inline)) char * kobject_name(struct kobject * kobj)
{
 return kobj->k_name;
}

extern void kobject_init(struct kobject *);
extern void kobject_cleanup(struct kobject *);

extern int kobject_add(struct kobject *);
extern void kobject_del(struct kobject *);

extern int kobject_rename(struct kobject *, char *new_name);

extern int kobject_register(struct kobject *);
extern void kobject_unregister(struct kobject *);

extern struct kobject * kobject_get(struct kobject *);
extern void kobject_put(struct kobject *);

extern char * kobject_get_path(struct kobject *, int);

struct kobj_type {
 void (*release)(struct kobject *);
 struct sysfs_ops * sysfs_ops;
 struct attribute ** default_attrs;
};
# 93 "linux-2.6/include/linux/kobject.h"
struct kset_hotplug_ops {
 int (*filter)(struct kset *kset, struct kobject *kobj);
 char *(*name)(struct kset *kset, struct kobject *kobj);
 int (*hotplug)(struct kset *kset, struct kobject *kobj, char **envp,
   int num_envp, char *buffer, int buffer_size);
};

struct kset {
 struct subsystem * subsys;
 struct kobj_type * ktype;
 struct list_head list;
 struct kobject kobj;
 struct kset_hotplug_ops * hotplug_ops;
};


extern void kset_init(struct kset * k);
extern int kset_add(struct kset * k);
extern int kset_register(struct kset * k);
extern void kset_unregister(struct kset * k);

static inline  __attribute__((always_inline)) struct kset * to_kset(struct kobject * kobj)
{
 return kobj ? ({ const typeof( ((struct kset *)0)->kobj ) *__mptr = (kobj); (struct kset *)( (char *)__mptr - ((size_t) &((struct kset *)0)->kobj) );}) : ((void *)0);
}

static inline  __attribute__((always_inline)) struct kset * kset_get(struct kset * k)
{
 return k ? to_kset(kobject_get(&k->kobj)) : ((void *)0);
}

static inline  __attribute__((always_inline)) void kset_put(struct kset * k)
{
 kobject_put(&k->kobj);
}

static inline  __attribute__((always_inline)) struct kobj_type * get_ktype(struct kobject * k)
{
 if (k->kset && k->kset->ktype)
  return k->kset->ktype;
 else
  return k->ktype;
}

extern struct kobject * kset_find_obj(struct kset *, const char *);
# 148 "linux-2.6/include/linux/kobject.h"
struct subsystem {
 struct kset kset;
 struct rw_semaphore rwsem;
};
# 216 "linux-2.6/include/linux/kobject.h"
extern void subsystem_init(struct subsystem *);
extern int subsystem_register(struct subsystem *);
extern void subsystem_unregister(struct subsystem *);

static inline  __attribute__((always_inline)) struct subsystem * subsys_get(struct subsystem * s)
{
 return s ? ({ const typeof( ((struct subsystem *)0)->kset ) *__mptr = (kset_get(&s->kset)); (struct subsystem *)( (char *)__mptr - ((size_t) &((struct subsystem *)0)->kset) );}) : ((void *)0);
}

static inline  __attribute__((always_inline)) void subsys_put(struct subsystem * s)
{
 kset_put(&s->kset);
}

struct subsys_attribute {
 struct attribute attr;
 ssize_t (*show)(struct subsystem *, char *);
 ssize_t (*store)(struct subsystem *, const char *, size_t);
};

extern int subsys_create_file(struct subsystem * , struct subsys_attribute *);
extern void subsys_remove_file(struct subsystem * , struct subsys_attribute *);


void kobject_hotplug(struct kobject *kobj, enum kobject_action action);
int add_hotplug_env_var(char **envp, int num_envp, int *cur_index,
   char *buffer, int buffer_size, int *cur_len,
   const char *format, ...)
 __attribute__((format (printf, 7, 8))) ;
# 21 "linux-2.6/include/linux/fs.h" 2


struct iovec;
struct nameidata;
struct pipe_inode_info;
struct poll_table_struct;
struct kstatfs;
struct vm_area_struct;
struct vfsmount;
# 50 "linux-2.6/include/linux/fs.h"
struct files_stat_struct {
 int nr_files;
 int nr_free_files;
 int max_files;
};
typedef  struct files_stat_struct   _GLOBAL_113_T; extern  _GLOBAL_113_T  global_files_stat[NUM_STACKS];    

struct inodes_stat_t {
 int nr_inodes;
 int nr_unused;
 int dummy[5];
};
typedef  struct inodes_stat_t   _GLOBAL_114_T; extern  _GLOBAL_114_T  global_inodes_stat[NUM_STACKS];    

typedef  int  _GLOBAL_115_T; extern  _GLOBAL_115_T  global_leases_enable[NUM_STACKS]; extern  _GLOBAL_115_T  global_lease_break_time[NUM_STACKS];    
# 225 "linux-2.6/include/linux/fs.h"
# 1 "linux-2.6/include/linux/radix-tree.h" 1
# 25 "linux-2.6/include/linux/radix-tree.h"
struct radix_tree_root {
 unsigned int height;
 int gfp_mask;
 struct radix_tree_node *rnode;
};
# 47 "linux-2.6/include/linux/radix-tree.h"
int radix_tree_insert(struct radix_tree_root *, unsigned long, void *);
void *radix_tree_lookup(struct radix_tree_root *, unsigned long);
void *radix_tree_delete(struct radix_tree_root *, unsigned long);
unsigned int
radix_tree_gang_lookup(struct radix_tree_root *root, void **results,
   unsigned long first_index, unsigned int max_items);
int radix_tree_preload(int gfp_mask);
void radix_tree_init(void);
void *radix_tree_tag_set(struct radix_tree_root *root,
   unsigned long index, int tag);
void *radix_tree_tag_clear(struct radix_tree_root *root,
   unsigned long index, int tag);
int radix_tree_tag_get(struct radix_tree_root *root,
   unsigned long index, int tag);
unsigned int
radix_tree_gang_lookup_tag(struct radix_tree_root *root, void **results,
  unsigned long first_index, unsigned int max_items, int tag);
int radix_tree_tagged(struct radix_tree_root *root, int tag);

static inline  __attribute__((always_inline)) void radix_tree_preload_end(void)
{
 do { } while (0);
}
# 226 "linux-2.6/include/linux/fs.h" 2
# 1 "linux-2.6/include/linux/audit.h" 1
# 106 "linux-2.6/include/linux/audit.h"
struct audit_status {
 __u32 mask;
 __u32 enabled;
 __u32 failure;
 __u32 pid;
 __u32 rate_limit;
 __u32 backlog_limit;
 __u32 lost;
 __u32 backlog;
};

struct audit_login {
 __u32 loginuid;
 int msglen;
 char msg[1024];
};

struct audit_rule {
 __u32 flags;
 __u32 action;
 __u32 field_count;
 __u32 mask[64];
 __u32 fields[64];
 __u32 values[64];
};




struct audit_buffer;
struct audit_context;





extern int audit_alloc(struct task_struct *task);
extern void audit_free(struct task_struct *task);
extern void audit_syscall_entry(struct task_struct *task,
    int major, unsigned long a0, unsigned long a1,
    unsigned long a2, unsigned long a3);
extern void audit_syscall_exit(struct task_struct *task, int return_code);
extern void audit_getname(const char *name);
extern void audit_putname(const char *name);
extern void audit_inode(const char *name, unsigned long ino, dev_t rdev);


extern int audit_receive_filter(int type, int pid, int uid, int seq,
     void *data);
extern void audit_get_stamp(struct audit_context *ctx,
       struct timespec *t, int *serial);
extern int audit_set_loginuid(struct audit_context *ctx, uid_t loginuid);
# 171 "linux-2.6/include/linux/audit.h"
extern void audit_log(struct audit_context *ctx,
          const char *fmt, ...)
       __attribute__((format(printf,2,3))) ;

extern struct audit_buffer *audit_log_start(struct audit_context *ctx);
extern void audit_log_format(struct audit_buffer *ab,
          const char *fmt, ...)
       __attribute__((format(printf,2,3))) ;
extern void audit_log_end(struct audit_buffer *ab);
extern void audit_log_end_fast(struct audit_buffer *ab);
extern void audit_log_end_irq(struct audit_buffer *ab);
extern void audit_log_d_path(struct audit_buffer *ab,
          const char *prefix,
          struct dentry *dentry,
          struct vfsmount *vfsmnt);
extern int audit_set_rate_limit(int limit);
extern int audit_set_backlog_limit(int limit);
extern int audit_set_enabled(int state);
extern int audit_set_failure(int state);


extern void audit_send_reply(int pid, int seq, int type,
          int done, int multi,
          void *payload, int size);
extern void audit_log_lost(const char *message);
# 227 "linux-2.6/include/linux/fs.h" 2





extern void update_atime (struct inode *);

extern void  __attribute__ ((__section__ (".init.text"))) inode_init(unsigned long);
extern void  __attribute__ ((__section__ (".init.text"))) inode_init_early(void);
extern void  __attribute__ ((__section__ (".init.text"))) mnt_init(unsigned long);
extern void  __attribute__ ((__section__ (".init.text"))) files_init(unsigned long);

struct buffer_head;
typedef int (get_block_t)(struct inode *inode, sector_t iblock,
   struct buffer_head *bh_result, int create);
typedef int (get_blocks_t)(struct inode *inode, sector_t iblock,
   unsigned long max_blocks,
   struct buffer_head *bh_result, int create);
typedef void (dio_iodone_t)(struct inode *inode, loff_t offset,
   ssize_t bytes, void *private);
# 275 "linux-2.6/include/linux/fs.h"
struct iattr {
 unsigned int ia_valid;
 umode_t ia_mode;
 uid_t ia_uid;
 gid_t ia_gid;
 loff_t ia_size;
 struct timespec ia_atime;
 struct timespec ia_mtime;
 struct timespec ia_ctime;
 unsigned int ia_attr_flags;
};
# 299 "linux-2.6/include/linux/fs.h"
# 1 "linux-2.6/include/linux/quota.h" 1
# 45 "linux-2.6/include/linux/quota.h"
typedef __kernel_uid32_t qid_t;
typedef __u64 qsize_t;

typedef  spinlock_t  _GLOBAL_116_T; extern  _GLOBAL_116_T  global_dq_data_lock[NUM_STACKS];   
# 106 "linux-2.6/include/linux/quota.h"
struct if_dqblk {
 __u64 dqb_bhardlimit;
 __u64 dqb_bsoftlimit;
 __u64 dqb_curspace;
 __u64 dqb_ihardlimit;
 __u64 dqb_isoftlimit;
 __u64 dqb_curinodes;
 __u64 dqb_btime;
 __u64 dqb_itime;
 __u32 dqb_valid;
};
# 127 "linux-2.6/include/linux/quota.h"
struct if_dqinfo {
 __u64 dqi_bgrace;
 __u64 dqi_igrace;
 __u32 dqi_flags;
 __u32 dqi_valid;
};



# 1 "linux-2.6/include/linux/dqblk_xfs.h" 1
# 46 "linux-2.6/include/linux/dqblk_xfs.h"
typedef struct fs_disk_quota {
 __s8 d_version;
 __s8 d_flags;
 __u16 d_fieldmask;
 __u32 d_id;
 __u64 d_blk_hardlimit;
 __u64 d_blk_softlimit;
 __u64 d_ino_hardlimit;
 __u64 d_ino_softlimit;
 __u64 d_bcount;
 __u64 d_icount;
 __s32 d_itimer;

 __s32 d_btimer;
 __u16 d_iwarns;
 __u16 d_bwarns;
 __s32 d_padding2;
 __u64 d_rtb_hardlimit;
 __u64 d_rtb_softlimit;
 __u64 d_rtbcount;
 __s32 d_rtbtimer;
 __u16 d_rtbwarns;
 __s16 d_padding3;
 char d_padding4[8];
} fs_disk_quota_t;
# 133 "linux-2.6/include/linux/dqblk_xfs.h"
typedef struct fs_qfilestat {
 __u64 qfs_ino;
 __u64 qfs_nblks;
 __u32 qfs_nextents;
} fs_qfilestat_t;

typedef struct fs_quota_stat {
 __s8 qs_version;
 __u16 qs_flags;
 __s8 qs_pad;
 fs_qfilestat_t qs_uquota;
 fs_qfilestat_t qs_gquota;
 __u32 qs_incoredqs;
 __s32 qs_btimelimit;
 __s32 qs_itimelimit;
 __s32 qs_rtbtimelimit;
 __u16 qs_bwarnlimit;
 __u16 qs_iwarnlimit;
} fs_quota_stat_t;
# 137 "linux-2.6/include/linux/quota.h" 2
# 1 "linux-2.6/include/linux/dqblk_v1.h" 1
# 15 "linux-2.6/include/linux/dqblk_v1.h"
struct v1_mem_dqinfo {
};
# 138 "linux-2.6/include/linux/quota.h" 2
# 1 "linux-2.6/include/linux/dqblk_v2.h" 1
# 14 "linux-2.6/include/linux/dqblk_v2.h"
struct v2_mem_dqinfo {
 unsigned int dqi_blocks;
 unsigned int dqi_free_blk;
 unsigned int dqi_free_entry;
};
# 139 "linux-2.6/include/linux/quota.h" 2
# 147 "linux-2.6/include/linux/quota.h"
struct mem_dqblk {
 __u32 dqb_bhardlimit;
 __u32 dqb_bsoftlimit;
 qsize_t dqb_curspace;
 __u32 dqb_ihardlimit;
 __u32 dqb_isoftlimit;
 __u32 dqb_curinodes;
 time_t dqb_btime;
 time_t dqb_itime;
};




struct quota_format_type;

struct mem_dqinfo {
 struct quota_format_type *dqi_format;
 struct list_head dqi_dirty_list;
 unsigned long dqi_flags;
 unsigned int dqi_bgrace;
 unsigned int dqi_igrace;
 union {
  struct v1_mem_dqinfo v1_i;
  struct v2_mem_dqinfo v2_i;
 } u;
};

struct super_block;





extern void mark_info_dirty(struct super_block *sb, int type);







struct dqstats {
 int lookups;
 int drops;
 int reads;
 int writes;
 int cache_hits;
 int allocated_dquots;
 int free_dquots;
 int syncs;
};

typedef  struct dqstats   _GLOBAL_117_T; extern  _GLOBAL_117_T  global_dqstats[NUM_STACKS];    
# 210 "linux-2.6/include/linux/quota.h"
struct dquot {
 struct hlist_node dq_hash;
 struct list_head dq_inuse;
 struct list_head dq_free;
 struct list_head dq_dirty;
 struct semaphore dq_lock;
 atomic_t dq_count;
 wait_queue_head_t dq_wait_unused;
 struct super_block *dq_sb;
 unsigned int dq_id;
 loff_t dq_off;
 unsigned long dq_flags;
 short dq_type;
 struct mem_dqblk dq_dqb;
};







struct quota_format_ops {
 int (*check_quota_file)(struct super_block *sb, int type);
 int (*read_file_info)(struct super_block *sb, int type);
 int (*write_file_info)(struct super_block *sb, int type);
 int (*free_file_info)(struct super_block *sb, int type);
 int (*read_dqblk)(struct dquot *dquot);
 int (*commit_dqblk)(struct dquot *dquot);
 int (*release_dqblk)(struct dquot *dquot);
};


struct dquot_operations {
 int (*initialize) (struct inode *, int);
 int (*drop) (struct inode *);
 int (*alloc_space) (struct inode *, qsize_t, int);
 int (*alloc_inode) (const struct inode *, unsigned long);
 int (*free_space) (struct inode *, qsize_t);
 int (*free_inode) (const struct inode *, unsigned long);
 int (*transfer) (struct inode *, struct iattr *);
 int (*write_dquot) (struct dquot *);
 int (*acquire_dquot) (struct dquot *);
 int (*release_dquot) (struct dquot *);
 int (*mark_dirty) (struct dquot *);
 int (*write_info) (struct super_block *, int);
};


struct quotactl_ops {
 int (*quota_on)(struct super_block *, int, int, char *);
 int (*quota_off)(struct super_block *, int);
 int (*quota_sync)(struct super_block *, int);
 int (*get_info)(struct super_block *, int, struct if_dqinfo *);
 int (*set_info)(struct super_block *, int, struct if_dqinfo *);
 int (*get_dqblk)(struct super_block *, int, qid_t, struct if_dqblk *);
 int (*set_dqblk)(struct super_block *, int, qid_t, struct if_dqblk *);
 int (*get_xstate)(struct super_block *, struct fs_quota_stat *);
 int (*set_xstate)(struct super_block *, unsigned int, int);
 int (*get_xquota)(struct super_block *, int, qid_t, struct fs_disk_quota *);
 int (*set_xquota)(struct super_block *, int, qid_t, struct fs_disk_quota *);
};

struct quota_format_type {
 int qf_fmt_id;
 struct quota_format_ops *qf_ops;
 struct module *qf_owner;
 struct quota_format_type *qf_next;
};




struct quota_info {
 unsigned int flags;
 struct semaphore dqio_sem;
 struct semaphore dqonoff_sem;
 struct rw_semaphore dqptr_sem;
 struct file *files[2];
 struct mem_dqinfo info[2];
 struct quota_format_ops *ops[2];
};


int mark_dquot_dirty(struct dquot *dquot);
# 304 "linux-2.6/include/linux/quota.h"
int register_quota_format(struct quota_format_type *fmt);
void unregister_quota_format(struct quota_format_type *fmt);

struct quota_module_name {
 int qm_fmt_id;
 char *qm_mod_name;
};
# 300 "linux-2.6/include/linux/fs.h" 2




struct page;
struct address_space;
struct writeback_control;
struct kiocb;

struct address_space_operations {
 int (*writepage)(struct page *page, struct writeback_control *wbc);
 int (*readpage)(struct file *, struct page *);
 int (*sync_page)(struct page *);


 int (*writepages)(struct address_space *, struct writeback_control *);


 int (*set_page_dirty)(struct page *page);

 int (*readpages)(struct file *filp, struct address_space *mapping,
   struct list_head *pages, unsigned nr_pages);





 int (*prepare_write)(struct file *, struct page *, unsigned, unsigned);
 int (*commit_write)(struct file *, struct page *, unsigned, unsigned);

 sector_t (*bmap)(struct address_space *, sector_t);
 int (*invalidatepage) (struct page *, unsigned long);
 int (*releasepage) (struct page *, int);
 ssize_t (*direct_IO)(int, struct kiocb *, const struct iovec *iov,
   loff_t offset, unsigned long nr_segs);
};

struct backing_dev_info;
struct address_space {
 struct inode *host;
 struct radix_tree_root page_tree;
 spinlock_t tree_lock;
 unsigned int i_mmap_writable;
 struct prio_tree_root i_mmap;
 struct list_head i_mmap_nonlinear;
 spinlock_t i_mmap_lock;
 atomic_t truncate_count;
 unsigned long nrpages;
 unsigned long writeback_index;
 struct address_space_operations *a_ops;
 unsigned long flags;
 struct backing_dev_info *backing_dev_info;
 spinlock_t private_lock;
 struct list_head private_list;
 struct address_space *assoc_mapping;
} __attribute__((aligned(sizeof(long)))) ;






struct block_device {
 dev_t bd_dev;
 struct inode * bd_inode;
 int bd_openers;
 struct semaphore bd_sem;
 struct semaphore bd_mount_sem;
 struct list_head bd_inodes;
 void * bd_holder;
 int bd_holders;
 struct block_device * bd_contains;
 unsigned bd_block_size;
 struct hd_struct * bd_part;

 unsigned bd_part_count;
 int bd_invalidated;
 struct gendisk * bd_disk;
 struct list_head bd_list;
 struct backing_dev_info *bd_inode_backing_dev_info;






 unsigned long bd_private;
};
# 396 "linux-2.6/include/linux/fs.h"
int mapping_tagged(struct address_space *mapping, int tag);




static inline  __attribute__((always_inline)) int mapping_mapped(struct address_space *mapping)
{
 return !prio_tree_empty(&mapping->i_mmap) ||
  !list_empty(&mapping->i_mmap_nonlinear);
}







static inline  __attribute__((always_inline)) int mapping_writably_mapped(struct address_space *mapping)
{
 return mapping->i_mmap_writable != 0;
}
# 429 "linux-2.6/include/linux/fs.h"
struct inode {
 struct hlist_node i_hash;
 struct list_head i_list;
 struct list_head i_dentry;
 unsigned long i_ino;
 atomic_t i_count;
 umode_t i_mode;
 unsigned int i_nlink;
 uid_t i_uid;
 gid_t i_gid;
 dev_t i_rdev;
 loff_t i_size;
 struct timespec i_atime;
 struct timespec i_mtime;
 struct timespec i_ctime;
 unsigned int i_blkbits;
 unsigned long i_blksize;
 unsigned long i_version;
 unsigned long i_blocks;
 unsigned short i_bytes;
 unsigned char i_sock;
 spinlock_t i_lock;
 struct semaphore i_sem;
 struct rw_semaphore i_alloc_sem;
 struct inode_operations *i_op;
 struct file_operations *i_fop;
 struct super_block *i_sb;
 struct file_lock *i_flock;
 struct address_space *i_mapping;
 struct address_space i_data;




 struct list_head i_devices;
 struct pipe_inode_info *i_pipe;
 struct block_device *i_bdev;
 struct cdev *i_cdev;
 int i_cindex;

 __u32 i_generation;






 unsigned long i_state;
 unsigned long dirtied_when;

 unsigned int i_flags;

 atomic_t i_writecount;
 void *i_security;
 union {
  void *generic_ip;
 } u;



};
# 501 "linux-2.6/include/linux/fs.h"
static inline  __attribute__((always_inline)) loff_t i_size_read(struct inode *inode)
{
# 520 "linux-2.6/include/linux/fs.h"
 return inode->i_size;

}


static inline  __attribute__((always_inline)) void i_size_write(struct inode *inode, loff_t i_size)
{
# 536 "linux-2.6/include/linux/fs.h"
 inode->i_size = i_size;

}

static inline  __attribute__((always_inline)) unsigned iminor(struct inode *inode)
{
 return ((unsigned int) ((inode->i_rdev) & ((1U << 20) - 1)));
}

static inline  __attribute__((always_inline)) unsigned imajor(struct inode *inode)
{
 return ((unsigned int) ((inode->i_rdev) >> 20));
}

extern struct block_device *I_BDEV(struct inode *inode);

struct fown_struct {
 rwlock_t lock;
 int pid;
 uid_t uid, euid;
 void *security;
 int signum;
};




struct file_ra_state {
 unsigned long start;
 unsigned long size;
 unsigned long next_size;
 unsigned long prev_page;
 unsigned long ahead_start;
 unsigned long ahead_size;
 unsigned long currnt_wnd_hit;
 unsigned long average;
 unsigned long ra_pages;
 unsigned long mmap_hit;
 unsigned long mmap_miss;
};

struct file {
 struct list_head f_list;
 struct dentry *f_dentry;
 struct vfsmount *f_vfsmnt;
 struct file_operations *f_op;
 atomic_t f_count;
 unsigned int f_flags;
 mode_t f_mode;
 int f_error;
 loff_t f_pos;
 struct fown_struct f_owner;
 unsigned int f_uid, f_gid;
 struct file_ra_state f_ra;

 unsigned long f_version;
 void *f_security;


 void *private_data;



 struct list_head f_ep_links;
 spinlock_t f_ep_lock;

 struct address_space *f_mapping;
};
typedef  spinlock_t  _GLOBAL_118_T; extern  _GLOBAL_118_T  global_files_lock[NUM_STACKS];   
# 635 "linux-2.6/include/linux/fs.h"
typedef struct files_struct *fl_owner_t;

struct file_lock_operations {
 void (*fl_insert)(struct file_lock *);
 void (*fl_remove)(struct file_lock *);
 void (*fl_copy_lock)(struct file_lock *, struct file_lock *);
 void (*fl_release_private)(struct file_lock *);
};

struct lock_manager_operations {
 int (*fl_compare_owner)(struct file_lock *, struct file_lock *);
 void (*fl_notify)(struct file_lock *);
 void (*fl_copy_lock)(struct file_lock *, struct file_lock *);
 void (*fl_release_private)(struct file_lock *);
 void (*fl_break)(struct file_lock *);
};


# 1 "linux-2.6/include/linux/nfs_fs_i.h" 1





# 1 "linux-2.6/include/linux/nfs.h" 1
# 10 "linux-2.6/include/linux/nfs.h"
# 1 "linux-2.6/include/linux/sunrpc/msg_prot.h" 1
# 15 "linux-2.6/include/linux/sunrpc/msg_prot.h"
typedef u32 rpc_authflavor_t;

enum rpc_auth_flavors {
 RPC_AUTH_NULL = 0,
 RPC_AUTH_UNIX = 1,
 RPC_AUTH_SHORT = 2,
 RPC_AUTH_DES = 3,
 RPC_AUTH_KRB = 4,
 RPC_AUTH_GSS = 6,
 RPC_AUTH_MAXFLAVOR = 8,

 RPC_AUTH_GSS_KRB5 = 390003,
 RPC_AUTH_GSS_KRB5I = 390004,
 RPC_AUTH_GSS_KRB5P = 390005,
 RPC_AUTH_GSS_LKEY = 390006,
 RPC_AUTH_GSS_LKEYI = 390007,
 RPC_AUTH_GSS_LKEYP = 390008,
 RPC_AUTH_GSS_SPKM = 390009,
 RPC_AUTH_GSS_SPKMI = 390010,
 RPC_AUTH_GSS_SPKMP = 390011,
};

enum rpc_msg_type {
 RPC_CALL = 0,
 RPC_REPLY = 1
};

enum rpc_reply_stat {
 RPC_MSG_ACCEPTED = 0,
 RPC_MSG_DENIED = 1
};

enum rpc_accept_stat {
 RPC_SUCCESS = 0,
 RPC_PROG_UNAVAIL = 1,
 RPC_PROG_MISMATCH = 2,
 RPC_PROC_UNAVAIL = 3,
 RPC_GARBAGE_ARGS = 4,
 RPC_SYSTEM_ERR = 5
};

enum rpc_reject_stat {
 RPC_MISMATCH = 0,
 RPC_AUTH_ERROR = 1
};

enum rpc_auth_stat {
 RPC_AUTH_OK = 0,
 RPC_AUTH_BADCRED = 1,
 RPC_AUTH_REJECTEDCRED = 2,
 RPC_AUTH_BADVERF = 3,
 RPC_AUTH_REJECTEDVERF = 4,
 RPC_AUTH_TOOWEAK = 5,

 RPCSEC_GSS_CREDPROBLEM = 13,
 RPCSEC_GSS_CTXPROBLEM = 14
};
# 11 "linux-2.6/include/linux/nfs.h" 2
# 42 "linux-2.6/include/linux/nfs.h"
 enum nfs_stat {
 NFS_OK = 0,
 NFSERR_PERM = 1,
 NFSERR_NOENT = 2,
 NFSERR_IO = 5,
 NFSERR_NXIO = 6,
 NFSERR_EAGAIN = 11,
 NFSERR_ACCES = 13,
 NFSERR_EXIST = 17,
 NFSERR_XDEV = 18,
 NFSERR_NODEV = 19,
 NFSERR_NOTDIR = 20,
 NFSERR_ISDIR = 21,
 NFSERR_INVAL = 22,
 NFSERR_FBIG = 27,
 NFSERR_NOSPC = 28,
 NFSERR_ROFS = 30,
 NFSERR_MLINK = 31,
 NFSERR_OPNOTSUPP = 45,
 NFSERR_NAMETOOLONG = 63,
 NFSERR_NOTEMPTY = 66,
 NFSERR_DQUOT = 69,
 NFSERR_STALE = 70,
 NFSERR_REMOTE = 71,
 NFSERR_WFLUSH = 99,
 NFSERR_BADHANDLE = 10001,
 NFSERR_NOT_SYNC = 10002,
 NFSERR_BAD_COOKIE = 10003,
 NFSERR_NOTSUPP = 10004,
 NFSERR_TOOSMALL = 10005,
 NFSERR_SERVERFAULT = 10006,
 NFSERR_BADTYPE = 10007,
 NFSERR_JUKEBOX = 10008,
 NFSERR_SAME = 10009,
 NFSERR_DENIED = 10010,
 NFSERR_EXPIRED = 10011,
 NFSERR_LOCKED = 10012,
 NFSERR_GRACE = 10013,
 NFSERR_FHEXPIRED = 10014,
 NFSERR_SHARE_DENIED = 10015,
 NFSERR_WRONGSEC = 10016,
 NFSERR_CLID_INUSE = 10017,
 NFSERR_RESOURCE = 10018,
 NFSERR_MOVED = 10019,
 NFSERR_NOFILEHANDLE = 10020,
 NFSERR_MINOR_VERS_MISMATCH = 10021,
 NFSERR_STALE_CLIENTID = 10022,
 NFSERR_STALE_STATEID = 10023,
 NFSERR_OLD_STATEID = 10024,
 NFSERR_BAD_STATEID = 10025,
 NFSERR_BAD_SEQID = 10026,
 NFSERR_NOT_SAME = 10027,
 NFSERR_LOCK_RANGE = 10028,
 NFSERR_SYMLINK = 10029,
 NFSERR_RESTOREFH = 10030,
 NFSERR_LEASE_MOVED = 10031,
 NFSERR_ATTRNOTSUPP = 10032,
 NFSERR_NO_GRACE = 10033,
 NFSERR_RECLAIM_BAD = 10034,
 NFSERR_RECLAIM_CONFLICT = 10035,
 NFSERR_BAD_XDR = 10036,
 NFSERR_LOCKS_HELD = 10037,
 NFSERR_OPENMODE = 10038,
 NFSERR_BADOWNER = 10039,
 NFSERR_BADCHAR = 10040,
 NFSERR_BADNAME = 10041,
 NFSERR_BAD_RANGE = 10042,
 NFSERR_LOCK_NOTSUPP = 10043,
 NFSERR_OP_ILLEGAL = 10044,
 NFSERR_DEADLOCK = 10045,
 NFSERR_FILE_OPEN = 10046,
 NFSERR_ADMIN_REVOKED = 10047,
 NFSERR_CB_PATH_DOWN = 10048,
 NFSERR_REPLAY_ME = 10049
};



enum nfs_ftype {
 NFNON = 0,
 NFREG = 1,
 NFDIR = 2,
 NFBLK = 3,
 NFCHR = 4,
 NFLNK = 5,
 NFSOCK = 6,
 NFBAD = 7,
 NFFIFO = 8
};






struct nfs_fh {
 unsigned short size;
 unsigned char data[128];
};





static inline  __attribute__((always_inline)) int nfs_compare_fh(const struct nfs_fh *a, const struct nfs_fh *b)
{
 return a->size != b->size || __builtin_memcmp(a->data, b->data, a->size) != 0;
}

static inline  __attribute__((always_inline)) void nfs_copy_fh(struct nfs_fh *target, const struct nfs_fh *source)
{
 target->size = source->size;
 (__builtin_constant_p(source->size) ? __constant_memcpy((target->data),(source->data),(source->size)) : __memcpy((target->data),(source->data),(source->size)));
}
# 165 "linux-2.6/include/linux/nfs.h"
enum nfs3_stable_how {
 NFS_UNSTABLE = 0,
 NFS_DATA_SYNC = 1,
 NFS_FILE_SYNC = 2
};
# 7 "linux-2.6/include/linux/nfs_fs_i.h" 2

struct nlm_lockowner;




struct nfs_lock_info {
 u32 state;
 u32 flags;
 struct nlm_lockowner *owner;
};
# 654 "linux-2.6/include/linux/fs.h" 2

struct file_lock {
 struct file_lock *fl_next;
 struct list_head fl_link;
 struct list_head fl_block;
 fl_owner_t fl_owner;
 unsigned int fl_pid;
 wait_queue_head_t fl_wait;
 struct file *fl_file;
 unsigned char fl_flags;
 unsigned char fl_type;
 loff_t fl_start;
 loff_t fl_end;

 struct fasync_struct * fl_fasync;
 unsigned long fl_break_time;

 struct file_lock_operations *fl_ops;
 struct lock_manager_operations *fl_lmops;
 union {
  struct nfs_lock_info nfs_fl;
 } fl_u;
};
# 685 "linux-2.6/include/linux/fs.h"
typedef  struct list_head   _GLOBAL_119_T; extern  _GLOBAL_119_T  global_file_lock_list[NUM_STACKS];    

# 1 "linux-2.6/include/linux/fcntl.h" 1



# 1 "linux-2.6/include/asm/fcntl.h" 1
# 70 "linux-2.6/include/asm/fcntl.h"
struct flock {
 short l_type;
 short l_whence;
 off_t l_start;
 off_t l_len;
 pid_t l_pid;
};

struct flock64 {
 short l_type;
 short l_whence;
 loff_t l_start;
 loff_t l_len;
 pid_t l_pid;
};
# 5 "linux-2.6/include/linux/fcntl.h" 2
# 688 "linux-2.6/include/linux/fs.h" 2

extern int fcntl_getlk(struct file *, struct flock *);
extern int fcntl_setlk(struct file *, unsigned int, struct flock *);


extern int fcntl_getlk64(struct file *, struct flock64 *);
extern int fcntl_setlk64(struct file *, unsigned int, struct flock64 *);


extern void send_sigio(struct fown_struct *fown, int fd, int band);
extern int fcntl_setlease(unsigned int fd, struct file *filp, long arg);
extern int fcntl_getlease(struct file *filp);


extern void locks_init_lock(struct file_lock *);
extern void locks_copy_lock(struct file_lock *, struct file_lock *);
extern void locks_remove_posix(struct file *, fl_owner_t);
extern void locks_remove_flock(struct file *);
extern struct file_lock *posix_test_lock(struct file *, struct file_lock *);
extern int posix_lock_file(struct file *, struct file_lock *);
extern int posix_lock_file_wait(struct file *, struct file_lock *);
extern void posix_block_lock(struct file_lock *, struct file_lock *);
extern void posix_unblock_lock(struct file *, struct file_lock *);
extern int posix_locks_deadlock(struct file_lock *, struct file_lock *);
extern int flock_lock_file_wait(struct file *filp, struct file_lock *fl);
extern int __break_lease(struct inode *inode, unsigned int flags);
extern void lease_get_mtime(struct inode *, struct timespec *time);
extern int setlease(struct file *, long, struct file_lock **);
extern void remove_lease(struct file_lock *);
extern int lock_may_read(struct inode *, loff_t start, unsigned long count);
extern int lock_may_write(struct inode *, loff_t start, unsigned long count);
extern void steal_locks(fl_owner_t from);

struct fasync_struct {
 int magic;
 int fa_fd;
 struct fasync_struct *fa_next;
 struct file *fa_file;
};




extern int fasync_helper(int, struct file *, int, struct fasync_struct **);

extern void kill_fasync(struct fasync_struct **, int, int);

extern void __kill_fasync(struct fasync_struct *, int, int);

extern int f_setown(struct file *filp, unsigned long arg, int force);
extern void f_delown(struct file *filp);
extern int send_sigurg(struct fown_struct *fown);
# 749 "linux-2.6/include/linux/fs.h"
typedef  struct list_head   _GLOBAL_120_T; extern  _GLOBAL_120_T  global_super_blocks[NUM_STACKS];    
typedef  spinlock_t  _GLOBAL_121_T; extern  _GLOBAL_121_T  global_sb_lock[NUM_STACKS];   



struct super_block {
 struct list_head s_list;
 dev_t s_dev;
 unsigned long s_blocksize;
 unsigned long s_old_blocksize;
 unsigned char s_blocksize_bits;
 unsigned char s_dirt;
 unsigned long long s_maxbytes;
 struct file_system_type *s_type;
 struct super_operations *s_op;
 struct dquot_operations *dq_op;
  struct quotactl_ops *s_qcop;
 struct export_operations *s_export_op;
 unsigned long s_flags;
 unsigned long s_magic;
 struct dentry *s_root;
 struct rw_semaphore s_umount;
 struct semaphore s_lock;
 int s_count;
 int s_syncing;
 int s_need_sync_fs;
 atomic_t s_active;
 void *s_security;
 struct xattr_handler **s_xattr;

 struct list_head s_dirty;
 struct list_head s_io;
 struct hlist_head s_anon;
 struct list_head s_files;

 struct block_device *s_bdev;
 struct list_head s_instances;
 struct quota_info s_dquot;

 int s_frozen;
 wait_queue_head_t s_wait_unfrozen;

 char s_id[32];

 void *s_fs_info;





 struct semaphore s_vfs_rename_sem;
};




enum {
 SB_UNFROZEN = 0,
 SB_FREEZE_WRITE = 1,
 SB_FREEZE_TRANS = 2,
};







static inline  __attribute__((always_inline)) void lock_super(struct super_block * sb)
{
 down(&sb->s_lock);
}

static inline  __attribute__((always_inline)) void unlock_super(struct super_block * sb)
{
 up(&sb->s_lock);
}




extern int vfs_create(struct inode *, struct dentry *, int, struct nameidata *);
extern int vfs_mkdir(struct inode *, struct dentry *, int);
extern int vfs_mknod(struct inode *, struct dentry *, int, dev_t);
extern int vfs_symlink(struct inode *, struct dentry *, const char *, int);
extern int vfs_link(struct dentry *, struct inode *, struct dentry *);
extern int vfs_rmdir(struct inode *, struct dentry *);
extern int vfs_unlink(struct inode *, struct dentry *);
extern int vfs_rename(struct inode *, struct dentry *, struct inode *, struct dentry *);




extern void dentry_unhash(struct dentry *dentry);
# 863 "linux-2.6/include/linux/fs.h"
int generic_osync_inode(struct inode *, struct address_space *, int);







typedef int (*filldir_t)(void *, const char *, int, loff_t, ino_t, unsigned);

struct block_device_operations {
 int (*open) (struct inode *, struct file *);
 int (*release) (struct inode *, struct file *);
 int (*ioctl) (struct inode *, struct file *, unsigned, unsigned long);
 int (*media_changed) (struct gendisk *);
 int (*revalidate_disk) (struct gendisk *);
 struct module *owner;
};
# 891 "linux-2.6/include/linux/fs.h"
typedef struct {
 size_t written;
 size_t count;
 union {
  char * buf;
  void *data;
 } arg;
 int error;
} read_descriptor_t;

typedef int (*read_actor_t)(read_descriptor_t *, struct page *, unsigned long, unsigned long);






struct file_operations {
 struct module *owner;
 loff_t (*llseek) (struct file *, loff_t, int);
 ssize_t (*read) (struct file *, char *, size_t, loff_t *);
 ssize_t (*aio_read) (struct kiocb *, char *, size_t, loff_t);
 ssize_t (*write) (struct file *, const char *, size_t, loff_t *);
 ssize_t (*aio_write) (struct kiocb *, const char *, size_t, loff_t);
 int (*readdir) (struct file *, void *, filldir_t);
 unsigned int (*poll) (struct file *, struct poll_table_struct *);
 int (*ioctl) (struct inode *, struct file *, unsigned int, unsigned long);
 int (*mmap) (struct file *, struct vm_area_struct *);
 int (*open) (struct inode *, struct file *);
 int (*flush) (struct file *);
 int (*release) (struct inode *, struct file *);
 int (*fsync) (struct file *, struct dentry *, int datasync);
 int (*aio_fsync) (struct kiocb *, int datasync);
 int (*fasync) (int, struct file *, int);
 int (*lock) (struct file *, int, struct file_lock *);
 ssize_t (*readv) (struct file *, const struct iovec *, unsigned long, loff_t *);
 ssize_t (*writev) (struct file *, const struct iovec *, unsigned long, loff_t *);
 ssize_t (*sendfile) (struct file *, loff_t *, size_t, read_actor_t, void *);
 ssize_t (*sendpage) (struct file *, struct page *, int, size_t, loff_t *, int);
 unsigned long (*get_unmapped_area)(struct file *, unsigned long, unsigned long, unsigned long, unsigned long);
 int (*check_flags)(int);
 int (*dir_notify)(struct file *filp, unsigned long arg);
 int (*flock) (struct file *, int, struct file_lock *);
};

struct inode_operations {
 int (*create) (struct inode *,struct dentry *,int, struct nameidata *);
 struct dentry * (*lookup) (struct inode *,struct dentry *, struct nameidata *);
 int (*link) (struct dentry *,struct inode *,struct dentry *);
 int (*unlink) (struct inode *,struct dentry *);
 int (*symlink) (struct inode *,struct dentry *,const char *);
 int (*mkdir) (struct inode *,struct dentry *,int);
 int (*rmdir) (struct inode *,struct dentry *);
 int (*mknod) (struct inode *,struct dentry *,int,dev_t);
 int (*rename) (struct inode *, struct dentry *,
   struct inode *, struct dentry *);
 int (*readlink) (struct dentry *, char *,int);
 int (*follow_link) (struct dentry *, struct nameidata *);
 void (*put_link) (struct dentry *, struct nameidata *);
 void (*truncate) (struct inode *);
 int (*permission) (struct inode *, int, struct nameidata *);
 int (*setattr) (struct dentry *, struct iattr *);
 int (*getattr) (struct vfsmount *mnt, struct dentry *, struct kstat *);
 int (*setxattr) (struct dentry *, const char *,const void *,size_t,int);
 ssize_t (*getxattr) (struct dentry *, const char *, void *, size_t);
 ssize_t (*listxattr) (struct dentry *, char *, size_t);
 int (*removexattr) (struct dentry *, const char *);
};

struct seq_file;

extern ssize_t vfs_read(struct file *, char *, size_t, loff_t *);
extern ssize_t vfs_write(struct file *, const char *, size_t, loff_t *);
extern ssize_t vfs_readv(struct file *, const struct iovec *,
  unsigned long, loff_t *);
extern ssize_t vfs_writev(struct file *, const struct iovec *,
  unsigned long, loff_t *);





struct super_operations {
    struct inode *(*alloc_inode)(struct super_block *sb);
 void (*destroy_inode)(struct inode *);

 void (*read_inode) (struct inode *);

    void (*dirty_inode) (struct inode *);
 int (*write_inode) (struct inode *, int);
 void (*put_inode) (struct inode *);
 void (*drop_inode) (struct inode *);
 void (*delete_inode) (struct inode *);
 void (*put_super) (struct super_block *);
 void (*write_super) (struct super_block *);
 int (*sync_fs)(struct super_block *sb, int wait);
 void (*write_super_lockfs) (struct super_block *);
 void (*unlockfs) (struct super_block *);
 int (*statfs) (struct super_block *, struct kstatfs *);
 int (*remount_fs) (struct super_block *, int *, char *);
 void (*clear_inode) (struct inode *);
 void (*umount_begin) (struct super_block *);

 int (*show_options)(struct seq_file *, struct vfsmount *);
};
# 1009 "linux-2.6/include/linux/fs.h"
extern void __mark_inode_dirty(struct inode *, int);
static inline  __attribute__((always_inline)) void mark_inode_dirty(struct inode *inode)
{
 __mark_inode_dirty(inode, (1 | 2 | 4));
}

static inline  __attribute__((always_inline)) void mark_inode_dirty_sync(struct inode *inode)
{
 __mark_inode_dirty(inode, 1);
}

static inline  __attribute__((always_inline)) void touch_atime(struct vfsmount *mnt, struct dentry *dentry)
{

 update_atime(dentry->d_inode);
}

static inline  __attribute__((always_inline)) void file_accessed(struct file *file)
{
 if (!(file->f_flags & 01000000))
  touch_atime(file->f_vfsmnt, file->f_dentry);
}

int sync_inode(struct inode *inode, struct writeback_control *wbc);
# 1114 "linux-2.6/include/linux/fs.h"
struct export_operations {
 struct dentry *(*decode_fh)(struct super_block *sb, __u32 *fh, int fh_len, int fh_type,
    int (*acceptable)(void *context, struct dentry *de),
    void *context);
 int (*encode_fh)(struct dentry *de, __u32 *fh, int *max_len,
    int connectable);


 int (*get_name)(struct dentry *parent, char *name,
   struct dentry *child);
 struct dentry * (*get_parent)(struct dentry *child);
 struct dentry * (*get_dentry)(struct super_block *sb, void *inump);


 struct dentry * (*find_exported_dentry)(
  struct super_block *sb, void *obj, void *parent,
  int (*acceptable)(void *context, struct dentry *de),
  void *context);


};


struct file_system_type {
 const char *name;
 int fs_flags;
 struct super_block *(*get_sb) (struct file_system_type *, int,
           const char *, void *);
 void (*kill_sb) (struct super_block *);
 struct module *owner;
 struct file_system_type * next;
 struct list_head fs_supers;
};

struct super_block *get_sb_bdev(struct file_system_type *fs_type,
 int flags, const char *dev_name, void *data,
 int (*fill_super)(struct super_block *, void *, int));
struct super_block *get_sb_single(struct file_system_type *fs_type,
 int flags, void *data,
 int (*fill_super)(struct super_block *, void *, int));
struct super_block *get_sb_nodev(struct file_system_type *fs_type,
 int flags, void *data,
 int (*fill_super)(struct super_block *, void *, int));
void generic_shutdown_super(struct super_block *sb);
void kill_block_super(struct super_block *sb);
void kill_anon_super(struct super_block *sb);
void kill_litter_super(struct super_block *sb);
void deactivate_super(struct super_block *sb);
int set_anon_super(struct super_block *s, void *data);
struct super_block *sget(struct file_system_type *type,
   int (*test)(struct super_block *,void *),
   int (*set)(struct super_block *,void *),
   void *data);
struct super_block *get_sb_pseudo(struct file_system_type *, char *,
   struct super_operations *ops, unsigned long);
int __put_super(struct super_block *sb);
int __put_super_and_need_restart(struct super_block *sb);
void unnamed_dev_init(void);







extern int register_filesystem(struct file_system_type *);
extern int unregister_filesystem(struct file_system_type *);
extern struct vfsmount *kern_mount(struct file_system_type *);
extern int may_umount_tree(struct vfsmount *);
extern int may_umount(struct vfsmount *);
extern long do_mount(char *, char *, char *, unsigned long, void *);

extern int vfs_statfs(struct super_block *, struct kstatfs *);
# 1196 "linux-2.6/include/linux/fs.h"
extern int locks_mandatory_locked(struct inode *);
extern int locks_mandatory_area(int, struct inode *, struct file *, loff_t, size_t);
# 1206 "linux-2.6/include/linux/fs.h"
static inline  __attribute__((always_inline)) int locks_verify_locked(struct inode *inode)
{
 if ((((inode)->i_sb->s_flags & (64)) && ((inode)->i_mode & (0002000 | 00010)) == 0002000))
  return locks_mandatory_locked(inode);
 return 0;
}

static inline  __attribute__((always_inline)) int locks_verify_area(int read_write, struct inode *inode,
        struct file *filp, loff_t offset,
        size_t count)
{
 if (inode->i_flock && (((inode)->i_sb->s_flags & (64)) && ((inode)->i_mode & (0002000 | 00010)) == 0002000))
  return locks_mandatory_area(read_write, inode, filp, offset, count);
 return 0;
}

static inline  __attribute__((always_inline)) int locks_verify_truncate(struct inode *inode,
        struct file *filp,
        loff_t size)
{
 if (inode->i_flock && (((inode)->i_sb->s_flags & (64)) && ((inode)->i_mode & (0002000 | 00010)) == 0002000))
  return locks_mandatory_area(
   2, inode, filp,
   size < inode->i_size ? size : inode->i_size,
   (size < inode->i_size ? inode->i_size - size
    : size - inode->i_size)
  );
 return 0;
}

static inline  __attribute__((always_inline)) int break_lease(struct inode *inode, unsigned int mode)
{
 if (inode->i_flock)
  return __break_lease(inode, mode);
 return 0;
}



extern int do_truncate(struct dentry *, loff_t start);
extern struct file *filp_open(const char *, int, int);
extern struct file * dentry_open(struct dentry *, struct vfsmount *, int);
extern int filp_close(struct file *, fl_owner_t id);
extern char * getname(const char *);


extern void  __attribute__ ((__section__ (".init.text"))) vfs_caches_init_early(void);
extern void  __attribute__ ((__section__ (".init.text"))) vfs_caches_init(unsigned long);
# 1269 "linux-2.6/include/linux/fs.h"
extern int register_blkdev(unsigned int, const char *);
extern int unregister_blkdev(unsigned int, const char *);
extern struct block_device *bdget(dev_t);
extern void bd_set_size(struct block_device *, loff_t size);
extern void bd_forget(struct inode *inode);
extern void bdput(struct block_device *);
extern struct block_device *open_by_devnum(dev_t, unsigned);
typedef  struct file_operations   _GLOBAL_122_T; extern  _GLOBAL_122_T  global_def_blk_fops[NUM_STACKS];    
typedef  struct address_space_operations   _GLOBAL_123_T; extern  _GLOBAL_123_T  global_def_blk_aops[NUM_STACKS];    
typedef  struct file_operations   _GLOBAL_124_T; extern  _GLOBAL_124_T  global_def_chr_fops[NUM_STACKS];    
typedef  struct file_operations   _GLOBAL_125_T; extern  _GLOBAL_125_T  global_bad_sock_fops[NUM_STACKS];    
typedef  struct file_operations   _GLOBAL_126_T; extern  _GLOBAL_126_T  global_def_fifo_fops[NUM_STACKS];    
extern int ioctl_by_bdev(struct block_device *, unsigned, unsigned long);
extern int blkdev_ioctl(struct inode *, struct file *, unsigned, unsigned long);
extern int blkdev_get(struct block_device *, mode_t, unsigned);
extern int blkdev_put(struct block_device *);
extern int bd_claim(struct block_device *, void *);
extern void bd_release(struct block_device *);


extern int alloc_chrdev_region(dev_t *, unsigned, unsigned, const char *);
extern int register_chrdev_region(dev_t, unsigned, const char *);
extern int register_chrdev(unsigned int, const char *,
      struct file_operations *);
extern int unregister_chrdev(unsigned int, const char *);
extern void unregister_chrdev_region(dev_t, unsigned);
extern int chrdev_open(struct inode *, struct file *);



extern const char *__bdevname(dev_t, char *buffer);
extern const char *bdevname(struct block_device *bdev, char *buffer);
extern struct block_device *lookup_bdev(const char *);
extern struct block_device *open_bdev_excl(const char *, int, void *);
extern void close_bdev_excl(struct block_device *);

extern void init_special_inode(struct inode *, umode_t, dev_t);


extern void make_bad_inode(struct inode *);
extern int is_bad_inode(struct inode *);

typedef  struct file_operations   _GLOBAL_127_T; extern  _GLOBAL_127_T  global_read_fifo_fops[NUM_STACKS];    
typedef  struct file_operations   _GLOBAL_128_T; extern  _GLOBAL_128_T  global_write_fifo_fops[NUM_STACKS];    
typedef  struct file_operations   _GLOBAL_129_T; extern  _GLOBAL_129_T  global_rdwr_fifo_fops[NUM_STACKS];    
typedef  struct file_operations   _GLOBAL_130_T; extern  _GLOBAL_130_T  global_read_pipe_fops[NUM_STACKS];    
typedef  struct file_operations   _GLOBAL_131_T; extern  _GLOBAL_131_T  global_write_pipe_fops[NUM_STACKS];    
typedef  struct file_operations   _GLOBAL_132_T; extern  _GLOBAL_132_T  global_rdwr_pipe_fops[NUM_STACKS];    

extern int fs_may_remount_ro(struct super_block *);
# 1330 "linux-2.6/include/linux/fs.h"
extern int check_disk_change(struct block_device *);
extern int invalidate_inodes(struct super_block *);
extern int __invalidate_device(struct block_device *, int);
extern int invalidate_partition(struct gendisk *, int);
unsigned long invalidate_mapping_pages(struct address_space *mapping,
     unsigned long start, unsigned long end);
unsigned long invalidate_inode_pages(struct address_space *mapping);
static inline  __attribute__((always_inline)) void invalidate_remote_inode(struct inode *inode)
{
 if ((((inode->i_mode) & 00170000) == 0100000) || (((inode->i_mode) & 00170000) == 0040000) ||
     (((inode->i_mode) & 00170000) == 0120000))
  invalidate_inode_pages(inode->i_mapping);
}
extern void invalidate_inode_pages2(struct address_space *mapping);
extern void write_inode_now(struct inode *, int);
extern int filemap_fdatawrite(struct address_space *);
extern int filemap_flush(struct address_space *);
extern int filemap_fdatawait(struct address_space *);
extern int filemap_write_and_wait(struct address_space *mapping);
extern void sync_supers(void);
extern void sync_filesystems(int wait);
extern void emergency_sync(void);
extern void emergency_remount(void);
extern int do_remount_sb(struct super_block *sb, int flags,
    void *data, int force);
extern sector_t bmap(struct inode *, sector_t);
extern int setattr_mask(unsigned int);
extern int notify_change(struct dentry *, struct iattr *);
extern int permission(struct inode *, int, struct nameidata *);
extern int generic_permission(struct inode *, int,
  int (*check_acl)(struct inode *, int));

extern int get_write_access(struct inode *);
extern int deny_write_access(struct file *);
static inline  __attribute__((always_inline)) void put_write_access(struct inode * inode)
{
 atomic_dec(&inode->i_writecount);
}
static inline  __attribute__((always_inline)) void allow_write_access(struct file *file)
{
 if (file)
  atomic_inc(&file->f_dentry->d_inode->i_writecount);
}
extern int do_pipe(int *);

extern int open_namei(const char *, int, int, struct nameidata *);
extern int may_open(struct nameidata *, int, int);

extern int kernel_read(struct file *, unsigned long, char *, unsigned long);
extern struct file * open_exec(const char *);


extern int is_subdir(struct dentry *, struct dentry *);
extern ino_t find_inode_number(struct dentry *, struct qstr *);

# 1 "linux-2.6/include/linux/err.h" 1
# 16 "linux-2.6/include/linux/err.h"
static inline  __attribute__((always_inline)) void *ERR_PTR(long error)
{
 return (void *) error;
}

static inline  __attribute__((always_inline)) long PTR_ERR(const void *ptr)
{
 return (long) ptr;
}

static inline  __attribute__((always_inline)) long IS_ERR(const void *ptr)
{
 return __builtin_expect(!!((unsigned long)ptr > (unsigned long)-1000L), 0);
}
# 1386 "linux-2.6/include/linux/fs.h" 2


extern loff_t default_llseek(struct file *file, loff_t offset, int origin);

extern loff_t vfs_llseek(struct file *file, loff_t offset, int origin);

extern void inode_init_once(struct inode *);
extern void iput(struct inode *);
extern struct inode * igrab(struct inode *);
extern ino_t iunique(struct super_block *, ino_t);
extern int inode_needs_sync(struct inode *inode);
extern void generic_delete_inode(struct inode *inode);

extern struct inode *ilookup5(struct super_block *sb, unsigned long hashval,
  int (*test)(struct inode *, void *), void *data);
extern struct inode *ilookup(struct super_block *sb, unsigned long ino);

extern struct inode * iget5_locked(struct super_block *, unsigned long, int (*test)(struct inode *, void *), int (*set)(struct inode *, void *), void *);
extern struct inode * iget_locked(struct super_block *, unsigned long);
extern void unlock_new_inode(struct inode *);

static inline  __attribute__((always_inline)) struct inode *iget(struct super_block *sb, unsigned long ino)
{
 struct inode *inode = iget_locked(sb, ino);

 if (inode && (inode->i_state & 64)) {
  sb->s_op->read_inode(inode);
  unlock_new_inode(inode);
 }

 return inode;
}

extern void __iget(struct inode * inode);
extern void clear_inode(struct inode *);
extern void destroy_inode(struct inode *);
extern struct inode *new_inode(struct super_block *);
extern int remove_suid(struct dentry *);
extern void remove_dquot_ref(struct super_block *, int, struct list_head *);
typedef  struct semaphore   _GLOBAL_133_T; extern  _GLOBAL_133_T  global_iprune_sem[NUM_STACKS];    

extern void __insert_inode_hash(struct inode *, unsigned long hashval);
extern void remove_inode_hash(struct inode *);
static inline  __attribute__((always_inline)) void insert_inode_hash(struct inode *inode) {
 __insert_inode_hash(inode, inode->i_ino);
}

extern struct file * get_empty_filp(void);
extern void file_move(struct file *f, struct list_head *list);
extern void file_kill(struct file *f);
struct bio;
extern void submit_bio(int, struct bio *);
extern int bdev_read_only(struct block_device *);
extern int set_blocksize(struct block_device *, int);
extern int sb_set_blocksize(struct super_block *, int);
extern int sb_min_blocksize(struct super_block *, int);

extern int generic_file_mmap(struct file *, struct vm_area_struct *);
extern int generic_file_readonly_mmap(struct file *, struct vm_area_struct *);
extern int file_read_actor(read_descriptor_t * desc, struct page *page, unsigned long offset, unsigned long size);
extern int file_send_actor(read_descriptor_t * desc, struct page *page, unsigned long offset, unsigned long size);
extern ssize_t generic_file_read(struct file *, char *, size_t, loff_t *);
int generic_write_checks(struct file *file, loff_t *pos, size_t *count, int isblk);
extern ssize_t generic_file_write(struct file *, const char *, size_t, loff_t *);
extern ssize_t generic_file_aio_read(struct kiocb *, char *, size_t, loff_t);
extern ssize_t __generic_file_aio_read(struct kiocb *, const struct iovec *, unsigned long, loff_t *);
extern ssize_t generic_file_aio_write(struct kiocb *, const char *, size_t, loff_t);
extern ssize_t generic_file_aio_write_nolock(struct kiocb *, const struct iovec *,
  unsigned long, loff_t *);
extern ssize_t generic_file_direct_write(struct kiocb *, const struct iovec *,
  unsigned long *, loff_t, loff_t *, size_t, size_t);
extern ssize_t generic_file_buffered_write(struct kiocb *, const struct iovec *,
  unsigned long, loff_t, loff_t *, size_t, ssize_t);
extern ssize_t do_sync_read(struct file *filp, char *buf, size_t len, loff_t *ppos);
extern ssize_t do_sync_write(struct file *filp, const char *buf, size_t len, loff_t *ppos);
ssize_t generic_file_write_nolock(struct file *file, const struct iovec *iov,
    unsigned long nr_segs, loff_t *ppos);
extern ssize_t generic_file_sendfile(struct file *, loff_t *, size_t, read_actor_t, void *);
extern void do_generic_mapping_read(struct address_space *mapping,
        struct file_ra_state *, struct file *,
        loff_t *, read_descriptor_t *, read_actor_t);
extern void
file_ra_state_init(struct file_ra_state *ra, struct address_space *mapping);
extern ssize_t generic_file_direct_IO(int rw, struct kiocb *iocb,
 const struct iovec *iov, loff_t offset, unsigned long nr_segs);
extern ssize_t generic_file_readv(struct file *filp, const struct iovec *iov,
 unsigned long nr_segs, loff_t *ppos);
ssize_t generic_file_writev(struct file *filp, const struct iovec *iov,
   unsigned long nr_segs, loff_t *ppos);
extern loff_t no_llseek(struct file *file, loff_t offset, int origin);
extern loff_t generic_file_llseek(struct file *file, loff_t offset, int origin);
extern loff_t remote_llseek(struct file *file, loff_t offset, int origin);
extern int generic_file_open(struct inode * inode, struct file * filp);
extern int nonseekable_open(struct inode * inode, struct file * filp);

static inline  __attribute__((always_inline)) void do_generic_file_read(struct file * filp, loff_t *ppos,
     read_descriptor_t * desc,
     read_actor_t actor)
{
 do_generic_mapping_read(filp->f_mapping,
    &filp->f_ra,
    filp,
    ppos,
    desc,
    actor);
}

ssize_t __blockdev_direct_IO(int rw, struct kiocb *iocb, struct inode *inode,
 struct block_device *bdev, const struct iovec *iov, loff_t offset,
 unsigned long nr_segs, get_blocks_t get_blocks, dio_iodone_t end_io,
 int lock_type);

enum {
 DIO_LOCKING = 1,
 DIO_NO_LOCKING,
 DIO_OWN_LOCKING,
};

static inline  __attribute__((always_inline)) ssize_t blockdev_direct_IO(int rw, struct kiocb *iocb,
 struct inode *inode, struct block_device *bdev, const struct iovec *iov,
 loff_t offset, unsigned long nr_segs, get_blocks_t get_blocks,
 dio_iodone_t end_io)
{
 return __blockdev_direct_IO(rw, iocb, inode, bdev, iov, offset,
    nr_segs, get_blocks, end_io, DIO_LOCKING);
}

static inline  __attribute__((always_inline)) ssize_t blockdev_direct_IO_no_locking(int rw, struct kiocb *iocb,
 struct inode *inode, struct block_device *bdev, const struct iovec *iov,
 loff_t offset, unsigned long nr_segs, get_blocks_t get_blocks,
 dio_iodone_t end_io)
{
 return __blockdev_direct_IO(rw, iocb, inode, bdev, iov, offset,
    nr_segs, get_blocks, end_io, DIO_NO_LOCKING);
}

static inline  __attribute__((always_inline)) ssize_t blockdev_direct_IO_own_locking(int rw, struct kiocb *iocb,
 struct inode *inode, struct block_device *bdev, const struct iovec *iov,
 loff_t offset, unsigned long nr_segs, get_blocks_t get_blocks,
 dio_iodone_t end_io)
{
 return __blockdev_direct_IO(rw, iocb, inode, bdev, iov, offset,
    nr_segs, get_blocks, end_io, DIO_OWN_LOCKING);
}

typedef  struct file_operations   _GLOBAL_134_T; extern  _GLOBAL_134_T  global_generic_ro_fops[NUM_STACKS];    



extern int vfs_readlink(struct dentry *, char *, int, const char *);
extern int vfs_follow_link(struct nameidata *, const char *);
extern int page_readlink(struct dentry *, char *, int);
extern int page_follow_link_light(struct dentry *, struct nameidata *);
extern void page_put_link(struct dentry *, struct nameidata *);
extern int page_symlink(struct inode *inode, const char *symname, int len);
typedef  struct inode_operations   _GLOBAL_135_T; extern  _GLOBAL_135_T  global_page_symlink_inode_operations[NUM_STACKS];    
extern int generic_readlink(struct dentry *, char *, int);
extern void generic_fillattr(struct inode *, struct kstat *);
extern int vfs_getattr(struct vfsmount *, struct dentry *, struct kstat *);
void inode_add_bytes(struct inode *inode, loff_t bytes);
void inode_sub_bytes(struct inode *inode, loff_t bytes);
loff_t inode_get_bytes(struct inode *inode);
void inode_set_bytes(struct inode *inode, loff_t bytes);

extern int vfs_readdir(struct file *, filldir_t, void *);

extern int vfs_stat(char *, struct kstat *);
extern int vfs_lstat(char *, struct kstat *);
extern int vfs_fstat(unsigned int, struct kstat *);

extern struct file_system_type *get_fs_type(const char *name);
extern struct super_block *get_super(struct block_device *);
extern struct super_block *user_get_super(dev_t);
extern void drop_super(struct super_block *sb);

extern int dcache_dir_open(struct inode *, struct file *);
extern int dcache_dir_close(struct inode *, struct file *);
extern loff_t dcache_dir_lseek(struct file *, loff_t, int);
extern int dcache_readdir(struct file *, void *, filldir_t);
extern int simple_getattr(struct vfsmount *, struct dentry *, struct kstat *);
extern int simple_statfs(struct super_block *, struct kstatfs *);
extern int simple_link(struct dentry *, struct inode *, struct dentry *);
extern int simple_unlink(struct inode *, struct dentry *);
extern int simple_rmdir(struct inode *, struct dentry *);
extern int simple_rename(struct inode *, struct dentry *, struct inode *, struct dentry *);
extern int simple_sync_file(struct file *, struct dentry *, int);
extern int simple_empty(struct dentry *);
extern int simple_readpage(struct file *file, struct page *page);
extern int simple_prepare_write(struct file *file, struct page *page,
   unsigned offset, unsigned to);
extern int simple_commit_write(struct file *file, struct page *page,
    unsigned offset, unsigned to);

extern struct dentry *simple_lookup(struct inode *, struct dentry *, struct nameidata *);
extern ssize_t generic_read_dir(struct file *, char *, size_t, loff_t *);
typedef  struct file_operations   _GLOBAL_136_T; extern  _GLOBAL_136_T  global_simple_dir_operations[NUM_STACKS];    
typedef  struct inode_operations   _GLOBAL_137_T; extern  _GLOBAL_137_T  global_simple_dir_inode_operations[NUM_STACKS];    
struct tree_descr { char *name; struct file_operations *ops; int mode; };
struct dentry *d_alloc_name(struct dentry *, const char *);
extern int simple_fill_super(struct super_block *, int, struct tree_descr *);
extern int simple_pin_fs(char *name, struct vfsmount **mount, int *count);
extern void simple_release_fs(struct vfsmount **mount, int *count);

extern ssize_t simple_read_from_buffer(void *, size_t, loff_t *, const void *, size_t);

extern int inode_change_ok(struct inode *, struct iattr *);
extern int  __attribute__((warn_unused_result)) inode_setattr(struct inode *, struct iattr *);

extern void inode_update_time(struct inode *inode, int ctime_too);

static inline  __attribute__((always_inline)) ino_t parent_ino(struct dentry *dentry)
{
 ino_t res;

 do { do { } while (0); do { (void)(&dentry->d_lock); } while(0); (void)0; } while(0);
 res = dentry->d_parent->d_inode->i_ino;
 do { do { (void)(&dentry->d_lock); } while(0); do { } while (0); (void)0; } while (0);
 return res;
}


extern int unshare_files(void);







struct simple_transaction_argresp {
 ssize_t size;
 char data[0];
};



char *simple_transaction_get(struct file *file, const char *buf,
    size_t size);
ssize_t simple_transaction_read(struct file *file, char *buf,
    size_t size, loff_t *pos);
int simple_transaction_release(struct inode *inode, struct file *file);

static inline  __attribute__((always_inline)) void simple_transaction_set(struct file *file, size_t n)
{
 struct simple_transaction_argresp *ar = file->private_data;

 do { if (__builtin_expect(!!((n > ((1UL << 12) - sizeof(struct simple_transaction_argresp)))!=0), 0)) __asm__ __volatile__( "ud2\n" "\t.word %c0\n" "\t.long %c1\n" : : "i" (1632), "i" ("linux-2.6/include/linux/fs.h")); } while(0);





 __asm__ __volatile__("": : :"memory");
 ar->size = n;
}
# 1653 "linux-2.6/include/linux/fs.h"
static inline  __attribute__((always_inline)) char *alloc_secdata(void)
{
 return (char *)1;
}

static inline  __attribute__((always_inline)) void free_secdata(void *secdata)
{ }
# 16 "linux-2.6/include/linux/mm.h" 2

struct mempolicy;
struct anon_vma;


typedef  unsigned long   _GLOBAL_138_T; extern  _GLOBAL_138_T  global_max_mapnr[NUM_STACKS];    


typedef  unsigned long   _GLOBAL_139_T; extern  _GLOBAL_139_T  global_num_physpages[NUM_STACKS];    
typedef  void  _GLOBAL_140_T; extern  _GLOBAL_140_T  * global_high_memory[NUM_STACKS];    
typedef  unsigned long   _GLOBAL_141_T; extern  _GLOBAL_141_T  global_vmalloc_earlyreserve[NUM_STACKS];    
typedef  int  _GLOBAL_142_T; extern  _GLOBAL_142_T  global_page_cluster[NUM_STACKS];   


typedef  int  _GLOBAL_143_T; extern  _GLOBAL_143_T  global_sysctl_legacy_va_layout[NUM_STACKS];   





# 1 "linux-2.6/include/asm/pgtable.h" 1
# 17 "linux-2.6/include/asm/pgtable.h"
# 1 "linux-2.6/include/asm/fixmap.h" 1
# 27 "linux-2.6/include/asm/fixmap.h"
# 1 "linux-2.6/include/asm/acpi.h" 1
# 58 "linux-2.6/include/asm/acpi.h"
static inline  __attribute__((always_inline)) int
__acpi_acquire_global_lock (unsigned int *lock)
{
 unsigned int old, new, val;
 do {
  old = *lock;
  new = (((old & ~0x3) + 2) + ((old >> 1) & 0x1));
  val = ((__typeof__(*(lock)))__cmpxchg((lock),(unsigned long)(old), (unsigned long)(new),sizeof(*(lock))));
 } while (__builtin_expect(!!(val != old), 0));
 return (new < 3) ? -1 : 0;
}

static inline  __attribute__((always_inline)) int
__acpi_release_global_lock (unsigned int *lock)
{
 unsigned int old, new, val;
 do {
  old = *lock;
  new = old & ~0x3;
  val = ((__typeof__(*(lock)))__cmpxchg((lock),(unsigned long)(old), (unsigned long)(new),sizeof(*(lock))));
 } while (__builtin_expect(!!(val != old), 0));
 return old & 0x1;
}
# 117 "linux-2.6/include/asm/acpi.h"
typedef  int  _GLOBAL_144_T; extern  _GLOBAL_144_T  global_acpi_lapic[NUM_STACKS];   
typedef  int  _GLOBAL_145_T; extern  _GLOBAL_145_T  global_acpi_ioapic[NUM_STACKS];   
typedef  int  _GLOBAL_146_T; extern  _GLOBAL_146_T  global_acpi_noirq[NUM_STACKS];   
typedef  int  _GLOBAL_147_T; extern  _GLOBAL_147_T  global_acpi_strict[NUM_STACKS];   
typedef  int  _GLOBAL_148_T; extern  _GLOBAL_148_T  global_acpi_disabled[NUM_STACKS];   
typedef  int  _GLOBAL_149_T; extern  _GLOBAL_149_T  global_acpi_ht[NUM_STACKS];   
typedef  int  _GLOBAL_150_T; extern  _GLOBAL_150_T  global_acpi_pci_disabled[NUM_STACKS];   
static inline  __attribute__((always_inline)) void disable_acpi(void)
{
 global_acpi_disabled[get_stack_id()] = 1;
 global_acpi_ht[get_stack_id()] = 0;
 global_acpi_pci_disabled[get_stack_id()] = 1;
 global_acpi_noirq[get_stack_id()] = 1;
}




extern int acpi_gsi_to_irq(u32 gsi, unsigned int *irq);


typedef  int  _GLOBAL_151_T; extern  _GLOBAL_151_T  global_skip_ioapic_setup[NUM_STACKS];   
typedef  int  _GLOBAL_152_T; extern  _GLOBAL_152_T  global_acpi_skip_timer_override[NUM_STACKS];   

extern void check_acpi_pci(void);

static inline  __attribute__((always_inline)) void disable_ioapic_setup(void)
{
 global_skip_ioapic_setup[get_stack_id()] = 1;
}

static inline  __attribute__((always_inline)) int ioapic_setup_disabled(void)
{
 return global_skip_ioapic_setup[get_stack_id()];
}
# 166 "linux-2.6/include/asm/acpi.h"
static inline  __attribute__((always_inline)) void acpi_noirq_set(void) { global_acpi_noirq[get_stack_id()] = 1; }
static inline  __attribute__((always_inline)) void acpi_disable_pci(void)
{
 global_acpi_pci_disabled[get_stack_id()] = 1;
 acpi_noirq_set();
}
extern int acpi_irq_balance_set(char *str);
# 182 "linux-2.6/include/asm/acpi.h"
extern int acpi_save_state_mem(void);
extern int acpi_save_state_disk(void);
extern void acpi_restore_state_mem(void);

typedef  unsigned long   _GLOBAL_153_T; extern  _GLOBAL_153_T  global_acpi_wakeup_address[NUM_STACKS];    


extern void acpi_reserve_bootmem(void);



typedef  u8  _GLOBAL_154_T; extern  _GLOBAL_154_T  _GLOBAL_0_x86_acpiid_to_apicid_I [ ] ; extern  _GLOBAL_154_T  _GLOBAL_1_x86_acpiid_to_apicid_I [ ] ; extern  _GLOBAL_154_T  _GLOBAL_2_x86_acpiid_to_apicid_I [ ] ; extern  _GLOBAL_154_T  _GLOBAL_3_x86_acpiid_to_apicid_I [ ] ; extern  _GLOBAL_154_T  _GLOBAL_4_x86_acpiid_to_apicid_I [ ] ; extern  _GLOBAL_154_T  _GLOBAL_5_x86_acpiid_to_apicid_I [ ] ; extern  _GLOBAL_154_T  _GLOBAL_6_x86_acpiid_to_apicid_I [ ] ; extern  _GLOBAL_154_T  _GLOBAL_7_x86_acpiid_to_apicid_I [ ] ; extern  _GLOBAL_154_T  _GLOBAL_8_x86_acpiid_to_apicid_I [ ] ; extern  _GLOBAL_154_T  _GLOBAL_9_x86_acpiid_to_apicid_I [ ] ; extern  _GLOBAL_154_T  _GLOBAL_10_x86_acpiid_to_apicid_I [ ] ; extern  _GLOBAL_154_T  _GLOBAL_11_x86_acpiid_to_apicid_I [ ] ; extern  _GLOBAL_154_T  _GLOBAL_12_x86_acpiid_to_apicid_I [ ] ; extern  _GLOBAL_154_T  _GLOBAL_13_x86_acpiid_to_apicid_I [ ] ; extern  _GLOBAL_154_T  _GLOBAL_14_x86_acpiid_to_apicid_I [ ] ; extern  _GLOBAL_154_T  _GLOBAL_15_x86_acpiid_to_apicid_I [ ] ; extern  _GLOBAL_154_T  _GLOBAL_16_x86_acpiid_to_apicid_I [ ] ; extern  _GLOBAL_154_T  _GLOBAL_17_x86_acpiid_to_apicid_I [ ] ; extern  _GLOBAL_154_T  _GLOBAL_18_x86_acpiid_to_apicid_I [ ] ; extern  _GLOBAL_154_T  _GLOBAL_19_x86_acpiid_to_apicid_I [ ] ; extern  _GLOBAL_154_T  _GLOBAL_20_x86_acpiid_to_apicid_I [ ] ; extern  _GLOBAL_154_T  _GLOBAL_21_x86_acpiid_to_apicid_I [ ] ; extern  _GLOBAL_154_T  _GLOBAL_22_x86_acpiid_to_apicid_I [ ] ; extern  _GLOBAL_154_T  _GLOBAL_23_x86_acpiid_to_apicid_I [ ] ; extern  _GLOBAL_154_T  _GLOBAL_24_x86_acpiid_to_apicid_I [ ] ; extern  _GLOBAL_154_T  _GLOBAL_25_x86_acpiid_to_apicid_I [ ] ; extern  _GLOBAL_154_T  _GLOBAL_26_x86_acpiid_to_apicid_I [ ] ; extern  _GLOBAL_154_T  _GLOBAL_27_x86_acpiid_to_apicid_I [ ] ; extern  _GLOBAL_154_T  _GLOBAL_28_x86_acpiid_to_apicid_I [ ] ; extern  _GLOBAL_154_T  _GLOBAL_29_x86_acpiid_to_apicid_I [ ] ; extern  _GLOBAL_154_T  _GLOBAL_30_x86_acpiid_to_apicid_I [ ] ; extern  _GLOBAL_154_T  _GLOBAL_31_x86_acpiid_to_apicid_I [ ] ; extern  _GLOBAL_154_T  _GLOBAL_32_x86_acpiid_to_apicid_I [ ] ; extern  _GLOBAL_154_T  _GLOBAL_33_x86_acpiid_to_apicid_I [ ] ; extern  _GLOBAL_154_T  _GLOBAL_34_x86_acpiid_to_apicid_I [ ] ; extern  _GLOBAL_154_T  _GLOBAL_35_x86_acpiid_to_apicid_I [ ] ; extern  _GLOBAL_154_T  _GLOBAL_36_x86_acpiid_to_apicid_I [ ] ; extern  _GLOBAL_154_T  _GLOBAL_37_x86_acpiid_to_apicid_I [ ] ; extern  _GLOBAL_154_T  _GLOBAL_38_x86_acpiid_to_apicid_I [ ] ; extern  _GLOBAL_154_T  _GLOBAL_39_x86_acpiid_to_apicid_I [ ] ; extern  _GLOBAL_154_T  _GLOBAL_40_x86_acpiid_to_apicid_I [ ] ; extern  _GLOBAL_154_T  _GLOBAL_41_x86_acpiid_to_apicid_I [ ] ; extern  _GLOBAL_154_T  _GLOBAL_42_x86_acpiid_to_apicid_I [ ] ; extern  _GLOBAL_154_T  _GLOBAL_43_x86_acpiid_to_apicid_I [ ] ; extern  _GLOBAL_154_T  _GLOBAL_44_x86_acpiid_to_apicid_I [ ] ; extern  _GLOBAL_154_T  _GLOBAL_45_x86_acpiid_to_apicid_I [ ] ; extern  _GLOBAL_154_T  _GLOBAL_46_x86_acpiid_to_apicid_I [ ] ; extern  _GLOBAL_154_T  _GLOBAL_47_x86_acpiid_to_apicid_I [ ] ; extern  _GLOBAL_154_T  _GLOBAL_48_x86_acpiid_to_apicid_I [ ] ; extern  _GLOBAL_154_T  _GLOBAL_49_x86_acpiid_to_apicid_I [ ] ; static __attribute__ ((unused)) __typeof__(_GLOBAL_0_x86_acpiid_to_apicid_I) *_GLOBAL_x86_acpiid_to_apicid_8_A[NUM_STACKS];  
# 28 "linux-2.6/include/asm/fixmap.h" 2
# 1 "linux-2.6/include/asm/apicdef.h" 1
# 127 "linux-2.6/include/asm/apicdef.h"
struct local_apic {

        struct { unsigned int __reserved[4]; } __reserved_01;

        struct { unsigned int __reserved[4]; } __reserved_02;

        struct {
  unsigned int __reserved_1 : 24,
   phys_apic_id : 4,
   __reserved_2 : 4;
  unsigned int __reserved[3];
 } id;

        const
 struct {
  unsigned int version : 8,
   __reserved_1 : 8,
   max_lvt : 8,
   __reserved_2 : 8;
  unsigned int __reserved[3];
 } version;

        struct { unsigned int __reserved[4]; } __reserved_03;

        struct { unsigned int __reserved[4]; } __reserved_04;

        struct { unsigned int __reserved[4]; } __reserved_05;

        struct { unsigned int __reserved[4]; } __reserved_06;

        struct {
  unsigned int priority : 8,
   __reserved_1 : 24;
  unsigned int __reserved_2[3];
 } tpr;

        const
 struct {
  unsigned int priority : 8,
   __reserved_1 : 24;
  unsigned int __reserved_2[3];
 } apr;

        const
 struct {
  unsigned int priority : 8,
   __reserved_1 : 24;
  unsigned int __reserved_2[3];
 } ppr;

        struct {
  unsigned int eoi;
  unsigned int __reserved[3];
 } eoi;

        struct { unsigned int __reserved[4]; } __reserved_07;

        struct {
  unsigned int __reserved_1 : 24,
   logical_dest : 8;
  unsigned int __reserved_2[3];
 } ldr;

        struct {
  unsigned int __reserved_1 : 28,
   model : 4;
  unsigned int __reserved_2[3];
 } dfr;

        struct {
  unsigned int spurious_vector : 8,
   apic_enabled : 1,
   focus_cpu : 1,
   __reserved_2 : 22;
  unsigned int __reserved_3[3];
 } svr;

        struct {
         unsigned int bitfield;
  unsigned int __reserved[3];
 } isr [8];

        struct {
         unsigned int bitfield;
  unsigned int __reserved[3];
 } tmr [8];

        struct {
         unsigned int bitfield;
  unsigned int __reserved[3];
 } irr [8];

        union {
  struct {
   unsigned int send_cs_error : 1,
    receive_cs_error : 1,
    send_accept_error : 1,
    receive_accept_error : 1,
    __reserved_1 : 1,
    send_illegal_vector : 1,
    receive_illegal_vector : 1,
    illegal_register_address : 1,
    __reserved_2 : 24;
   unsigned int __reserved_3[3];
  } error_bits;
  struct {
   unsigned int errors;
   unsigned int __reserved_3[3];
  } all_errors;
 } esr;

        struct { unsigned int __reserved[4]; } __reserved_08;

        struct { unsigned int __reserved[4]; } __reserved_09;

        struct { unsigned int __reserved[4]; } __reserved_10;

        struct { unsigned int __reserved[4]; } __reserved_11;

        struct { unsigned int __reserved[4]; } __reserved_12;

        struct { unsigned int __reserved[4]; } __reserved_13;

        struct { unsigned int __reserved[4]; } __reserved_14;

        struct {
  unsigned int vector : 8,
   delivery_mode : 3,
   destination_mode : 1,
   delivery_status : 1,
   __reserved_1 : 1,
   level : 1,
   trigger : 1,
   __reserved_2 : 2,
   shorthand : 2,
   __reserved_3 : 12;
  unsigned int __reserved_4[3];
 } icr1;

        struct {
  union {
   unsigned int __reserved_1 : 24,
    phys_dest : 4,
    __reserved_2 : 4;
   unsigned int __reserved_3 : 24,
    logical_dest : 8;
  } dest;
  unsigned int __reserved_4[3];
 } icr2;

        struct {
  unsigned int vector : 8,
   __reserved_1 : 4,
   delivery_status : 1,
   __reserved_2 : 3,
   mask : 1,
   timer_mode : 1,
   __reserved_3 : 14;
  unsigned int __reserved_4[3];
 } lvt_timer;

        struct {
  unsigned int vector : 8,
   delivery_mode : 3,
   __reserved_1 : 1,
   delivery_status : 1,
   __reserved_2 : 3,
   mask : 1,
   __reserved_3 : 15;
  unsigned int __reserved_4[3];
 } lvt_thermal;

        struct {
  unsigned int vector : 8,
   delivery_mode : 3,
   __reserved_1 : 1,
   delivery_status : 1,
   __reserved_2 : 3,
   mask : 1,
   __reserved_3 : 15;
  unsigned int __reserved_4[3];
 } lvt_pc;

        struct {
  unsigned int vector : 8,
   delivery_mode : 3,
   __reserved_1 : 1,
   delivery_status : 1,
   polarity : 1,
   remote_irr : 1,
   trigger : 1,
   mask : 1,
   __reserved_2 : 15;
  unsigned int __reserved_3[3];
 } lvt_lint0;

        struct {
  unsigned int vector : 8,
   delivery_mode : 3,
   __reserved_1 : 1,
   delivery_status : 1,
   polarity : 1,
   remote_irr : 1,
   trigger : 1,
   mask : 1,
   __reserved_2 : 15;
  unsigned int __reserved_3[3];
 } lvt_lint1;

        struct {
  unsigned int vector : 8,
   __reserved_1 : 4,
   delivery_status : 1,
   __reserved_2 : 3,
   mask : 1,
   __reserved_3 : 15;
  unsigned int __reserved_4[3];
 } lvt_error;

        struct {
  unsigned int initial_count;
  unsigned int __reserved_2[3];
 } timer_icr;

        const
 struct {
  unsigned int curr_count;
  unsigned int __reserved_2[3];
 } timer_ccr;

        struct { unsigned int __reserved[4]; } __reserved_16;

        struct { unsigned int __reserved[4]; } __reserved_17;

        struct { unsigned int __reserved[4]; } __reserved_18;

        struct { unsigned int __reserved[4]; } __reserved_19;

        struct {
  unsigned int divisor : 4,
   __reserved_1 : 28;
  unsigned int __reserved_2[3];
 } timer_dcr;

        struct { unsigned int __reserved[4]; } __reserved_20;

} __attribute__ ((packed)) ;
# 29 "linux-2.6/include/asm/fixmap.h" 2
# 53 "linux-2.6/include/asm/fixmap.h"
enum fixed_addresses {
 FIX_HOLE,
 FIX_VSYSCALL,

 FIX_APIC_BASE,


 FIX_IO_APIC_BASE_0,
 FIX_IO_APIC_BASE_END = FIX_IO_APIC_BASE_0 + 8 -1,
# 80 "linux-2.6/include/asm/fixmap.h"
 FIX_ACPI_BEGIN,
 FIX_ACPI_END = FIX_ACPI_BEGIN + 4 - 1,


 FIX_PCIE_MCFG,

 __end_of_permanent_fixed_addresses,


 FIX_BTMAP_END = __end_of_permanent_fixed_addresses,
 FIX_BTMAP_BEGIN = FIX_BTMAP_END + 16 - 1,
 FIX_WP_TEST,
 __end_of_fixed_addresses
};

extern void __set_fixmap (enum fixed_addresses idx,
     unsigned long phys, pgprot_t flags);
# 125 "linux-2.6/include/asm/fixmap.h"
extern void __this_fixmap_does_not_exist(void);






static inline  __attribute__((always_inline)) unsigned long fix_to_virt(const unsigned int idx)
{
# 143 "linux-2.6/include/asm/fixmap.h"
 if (idx >= __end_of_fixed_addresses)
  __this_fixmap_does_not_exist();

        return (((unsigned long)0xfffff000) - ((idx) << 12));
}

static inline  __attribute__((always_inline)) unsigned long virt_to_fix(const unsigned long vaddr)
{
 do { if (__builtin_expect(!!((vaddr >= ((unsigned long)0xfffff000) || vaddr < (((unsigned long)0xfffff000) - (__end_of_permanent_fixed_addresses << 12)))!=0), 0)) __asm__ __volatile__( "ud2\n" "\t.word %c0\n" "\t.long %c1\n" : : "i" (151), "i" ("linux-2.6/include/asm/fixmap.h")); } while(0);
 return ((((unsigned long)0xfffff000) - ((vaddr)&(~((1UL << 12)-1)))) >> 12);
}
# 18 "linux-2.6/include/asm/pgtable.h" 2
# 33 "linux-2.6/include/asm/pgtable.h"
typedef  unsigned long   _GLOBAL_155_T; extern  _GLOBAL_155_T  _GLOBAL_0_empty_zero_page_I [ 1024 ] ; extern  _GLOBAL_155_T  _GLOBAL_1_empty_zero_page_I [ 1024 ] ; extern  _GLOBAL_155_T  _GLOBAL_2_empty_zero_page_I [ 1024 ] ; extern  _GLOBAL_155_T  _GLOBAL_3_empty_zero_page_I [ 1024 ] ; extern  _GLOBAL_155_T  _GLOBAL_4_empty_zero_page_I [ 1024 ] ; extern  _GLOBAL_155_T  _GLOBAL_5_empty_zero_page_I [ 1024 ] ; extern  _GLOBAL_155_T  _GLOBAL_6_empty_zero_page_I [ 1024 ] ; extern  _GLOBAL_155_T  _GLOBAL_7_empty_zero_page_I [ 1024 ] ; extern  _GLOBAL_155_T  _GLOBAL_8_empty_zero_page_I [ 1024 ] ; extern  _GLOBAL_155_T  _GLOBAL_9_empty_zero_page_I [ 1024 ] ; extern  _GLOBAL_155_T  _GLOBAL_10_empty_zero_page_I [ 1024 ] ; extern  _GLOBAL_155_T  _GLOBAL_11_empty_zero_page_I [ 1024 ] ; extern  _GLOBAL_155_T  _GLOBAL_12_empty_zero_page_I [ 1024 ] ; extern  _GLOBAL_155_T  _GLOBAL_13_empty_zero_page_I [ 1024 ] ; extern  _GLOBAL_155_T  _GLOBAL_14_empty_zero_page_I [ 1024 ] ; extern  _GLOBAL_155_T  _GLOBAL_15_empty_zero_page_I [ 1024 ] ; extern  _GLOBAL_155_T  _GLOBAL_16_empty_zero_page_I [ 1024 ] ; extern  _GLOBAL_155_T  _GLOBAL_17_empty_zero_page_I [ 1024 ] ; extern  _GLOBAL_155_T  _GLOBAL_18_empty_zero_page_I [ 1024 ] ; extern  _GLOBAL_155_T  _GLOBAL_19_empty_zero_page_I [ 1024 ] ; extern  _GLOBAL_155_T  _GLOBAL_20_empty_zero_page_I [ 1024 ] ; extern  _GLOBAL_155_T  _GLOBAL_21_empty_zero_page_I [ 1024 ] ; extern  _GLOBAL_155_T  _GLOBAL_22_empty_zero_page_I [ 1024 ] ; extern  _GLOBAL_155_T  _GLOBAL_23_empty_zero_page_I [ 1024 ] ; extern  _GLOBAL_155_T  _GLOBAL_24_empty_zero_page_I [ 1024 ] ; extern  _GLOBAL_155_T  _GLOBAL_25_empty_zero_page_I [ 1024 ] ; extern  _GLOBAL_155_T  _GLOBAL_26_empty_zero_page_I [ 1024 ] ; extern  _GLOBAL_155_T  _GLOBAL_27_empty_zero_page_I [ 1024 ] ; extern  _GLOBAL_155_T  _GLOBAL_28_empty_zero_page_I [ 1024 ] ; extern  _GLOBAL_155_T  _GLOBAL_29_empty_zero_page_I [ 1024 ] ; extern  _GLOBAL_155_T  _GLOBAL_30_empty_zero_page_I [ 1024 ] ; extern  _GLOBAL_155_T  _GLOBAL_31_empty_zero_page_I [ 1024 ] ; extern  _GLOBAL_155_T  _GLOBAL_32_empty_zero_page_I [ 1024 ] ; extern  _GLOBAL_155_T  _GLOBAL_33_empty_zero_page_I [ 1024 ] ; extern  _GLOBAL_155_T  _GLOBAL_34_empty_zero_page_I [ 1024 ] ; extern  _GLOBAL_155_T  _GLOBAL_35_empty_zero_page_I [ 1024 ] ; extern  _GLOBAL_155_T  _GLOBAL_36_empty_zero_page_I [ 1024 ] ; extern  _GLOBAL_155_T  _GLOBAL_37_empty_zero_page_I [ 1024 ] ; extern  _GLOBAL_155_T  _GLOBAL_38_empty_zero_page_I [ 1024 ] ; extern  _GLOBAL_155_T  _GLOBAL_39_empty_zero_page_I [ 1024 ] ; extern  _GLOBAL_155_T  _GLOBAL_40_empty_zero_page_I [ 1024 ] ; extern  _GLOBAL_155_T  _GLOBAL_41_empty_zero_page_I [ 1024 ] ; extern  _GLOBAL_155_T  _GLOBAL_42_empty_zero_page_I [ 1024 ] ; extern  _GLOBAL_155_T  _GLOBAL_43_empty_zero_page_I [ 1024 ] ; extern  _GLOBAL_155_T  _GLOBAL_44_empty_zero_page_I [ 1024 ] ; extern  _GLOBAL_155_T  _GLOBAL_45_empty_zero_page_I [ 1024 ] ; extern  _GLOBAL_155_T  _GLOBAL_46_empty_zero_page_I [ 1024 ] ; extern  _GLOBAL_155_T  _GLOBAL_47_empty_zero_page_I [ 1024 ] ; extern  _GLOBAL_155_T  _GLOBAL_48_empty_zero_page_I [ 1024 ] ; extern  _GLOBAL_155_T  _GLOBAL_49_empty_zero_page_I [ 1024 ] ; static __attribute__ ((unused)) __typeof__(_GLOBAL_0_empty_zero_page_I) *_GLOBAL_empty_zero_page_9_A[NUM_STACKS];   
typedef  pgd_t  _GLOBAL_156_T; extern  _GLOBAL_156_T  _GLOBAL_0_swapper_pg_dir_I [ 1024 ] ; extern  _GLOBAL_156_T  _GLOBAL_1_swapper_pg_dir_I [ 1024 ] ; extern  _GLOBAL_156_T  _GLOBAL_2_swapper_pg_dir_I [ 1024 ] ; extern  _GLOBAL_156_T  _GLOBAL_3_swapper_pg_dir_I [ 1024 ] ; extern  _GLOBAL_156_T  _GLOBAL_4_swapper_pg_dir_I [ 1024 ] ; extern  _GLOBAL_156_T  _GLOBAL_5_swapper_pg_dir_I [ 1024 ] ; extern  _GLOBAL_156_T  _GLOBAL_6_swapper_pg_dir_I [ 1024 ] ; extern  _GLOBAL_156_T  _GLOBAL_7_swapper_pg_dir_I [ 1024 ] ; extern  _GLOBAL_156_T  _GLOBAL_8_swapper_pg_dir_I [ 1024 ] ; extern  _GLOBAL_156_T  _GLOBAL_9_swapper_pg_dir_I [ 1024 ] ; extern  _GLOBAL_156_T  _GLOBAL_10_swapper_pg_dir_I [ 1024 ] ; extern  _GLOBAL_156_T  _GLOBAL_11_swapper_pg_dir_I [ 1024 ] ; extern  _GLOBAL_156_T  _GLOBAL_12_swapper_pg_dir_I [ 1024 ] ; extern  _GLOBAL_156_T  _GLOBAL_13_swapper_pg_dir_I [ 1024 ] ; extern  _GLOBAL_156_T  _GLOBAL_14_swapper_pg_dir_I [ 1024 ] ; extern  _GLOBAL_156_T  _GLOBAL_15_swapper_pg_dir_I [ 1024 ] ; extern  _GLOBAL_156_T  _GLOBAL_16_swapper_pg_dir_I [ 1024 ] ; extern  _GLOBAL_156_T  _GLOBAL_17_swapper_pg_dir_I [ 1024 ] ; extern  _GLOBAL_156_T  _GLOBAL_18_swapper_pg_dir_I [ 1024 ] ; extern  _GLOBAL_156_T  _GLOBAL_19_swapper_pg_dir_I [ 1024 ] ; extern  _GLOBAL_156_T  _GLOBAL_20_swapper_pg_dir_I [ 1024 ] ; extern  _GLOBAL_156_T  _GLOBAL_21_swapper_pg_dir_I [ 1024 ] ; extern  _GLOBAL_156_T  _GLOBAL_22_swapper_pg_dir_I [ 1024 ] ; extern  _GLOBAL_156_T  _GLOBAL_23_swapper_pg_dir_I [ 1024 ] ; extern  _GLOBAL_156_T  _GLOBAL_24_swapper_pg_dir_I [ 1024 ] ; extern  _GLOBAL_156_T  _GLOBAL_25_swapper_pg_dir_I [ 1024 ] ; extern  _GLOBAL_156_T  _GLOBAL_26_swapper_pg_dir_I [ 1024 ] ; extern  _GLOBAL_156_T  _GLOBAL_27_swapper_pg_dir_I [ 1024 ] ; extern  _GLOBAL_156_T  _GLOBAL_28_swapper_pg_dir_I [ 1024 ] ; extern  _GLOBAL_156_T  _GLOBAL_29_swapper_pg_dir_I [ 1024 ] ; extern  _GLOBAL_156_T  _GLOBAL_30_swapper_pg_dir_I [ 1024 ] ; extern  _GLOBAL_156_T  _GLOBAL_31_swapper_pg_dir_I [ 1024 ] ; extern  _GLOBAL_156_T  _GLOBAL_32_swapper_pg_dir_I [ 1024 ] ; extern  _GLOBAL_156_T  _GLOBAL_33_swapper_pg_dir_I [ 1024 ] ; extern  _GLOBAL_156_T  _GLOBAL_34_swapper_pg_dir_I [ 1024 ] ; extern  _GLOBAL_156_T  _GLOBAL_35_swapper_pg_dir_I [ 1024 ] ; extern  _GLOBAL_156_T  _GLOBAL_36_swapper_pg_dir_I [ 1024 ] ; extern  _GLOBAL_156_T  _GLOBAL_37_swapper_pg_dir_I [ 1024 ] ; extern  _GLOBAL_156_T  _GLOBAL_38_swapper_pg_dir_I [ 1024 ] ; extern  _GLOBAL_156_T  _GLOBAL_39_swapper_pg_dir_I [ 1024 ] ; extern  _GLOBAL_156_T  _GLOBAL_40_swapper_pg_dir_I [ 1024 ] ; extern  _GLOBAL_156_T  _GLOBAL_41_swapper_pg_dir_I [ 1024 ] ; extern  _GLOBAL_156_T  _GLOBAL_42_swapper_pg_dir_I [ 1024 ] ; extern  _GLOBAL_156_T  _GLOBAL_43_swapper_pg_dir_I [ 1024 ] ; extern  _GLOBAL_156_T  _GLOBAL_44_swapper_pg_dir_I [ 1024 ] ; extern  _GLOBAL_156_T  _GLOBAL_45_swapper_pg_dir_I [ 1024 ] ; extern  _GLOBAL_156_T  _GLOBAL_46_swapper_pg_dir_I [ 1024 ] ; extern  _GLOBAL_156_T  _GLOBAL_47_swapper_pg_dir_I [ 1024 ] ; extern  _GLOBAL_156_T  _GLOBAL_48_swapper_pg_dir_I [ 1024 ] ; extern  _GLOBAL_156_T  _GLOBAL_49_swapper_pg_dir_I [ 1024 ] ; static __attribute__ ((unused)) __typeof__(_GLOBAL_0_swapper_pg_dir_I) *_GLOBAL_swapper_pg_dir_10_A[NUM_STACKS];  
typedef  kmem_cache_t  _GLOBAL_157_T; extern  _GLOBAL_157_T  * global_pgd_cache[NUM_STACKS];   
typedef  kmem_cache_t  _GLOBAL_158_T; extern  _GLOBAL_158_T  * global_pmd_cache[NUM_STACKS];   
typedef  spinlock_t  _GLOBAL_159_T; extern  _GLOBAL_159_T  global_pgd_lock[NUM_STACKS];   
typedef  struct page   _GLOBAL_160_T; extern  _GLOBAL_160_T  * global_pgd_list[NUM_STACKS];    

void pmd_ctor(void *, kmem_cache_t *, unsigned long);
void pgd_ctor(void *, kmem_cache_t *, unsigned long);
void pgd_dtor(void *, kmem_cache_t *, unsigned long);
void pgtable_cache_init(void);
void paging_init(void);
# 54 "linux-2.6/include/asm/pgtable.h"
# 1 "linux-2.6/include/asm/pgtable-2level-defs.h" 1
# 55 "linux-2.6/include/asm/pgtable.h" 2
# 157 "linux-2.6/include/asm/pgtable.h"
typedef  unsigned long long    _GLOBAL_161_T; extern  _GLOBAL_161_T  global___PAGE_KERNEL[NUM_STACKS]; extern  _GLOBAL_161_T  global___PAGE_KERNEL_EXEC[NUM_STACKS];      
# 201 "linux-2.6/include/asm/pgtable.h"
typedef  unsigned long   _GLOBAL_162_T; extern  _GLOBAL_162_T  _GLOBAL_0_pg0_I [ ] ; extern  _GLOBAL_162_T  _GLOBAL_1_pg0_I [ ] ; extern  _GLOBAL_162_T  _GLOBAL_2_pg0_I [ ] ; extern  _GLOBAL_162_T  _GLOBAL_3_pg0_I [ ] ; extern  _GLOBAL_162_T  _GLOBAL_4_pg0_I [ ] ; extern  _GLOBAL_162_T  _GLOBAL_5_pg0_I [ ] ; extern  _GLOBAL_162_T  _GLOBAL_6_pg0_I [ ] ; extern  _GLOBAL_162_T  _GLOBAL_7_pg0_I [ ] ; extern  _GLOBAL_162_T  _GLOBAL_8_pg0_I [ ] ; extern  _GLOBAL_162_T  _GLOBAL_9_pg0_I [ ] ; extern  _GLOBAL_162_T  _GLOBAL_10_pg0_I [ ] ; extern  _GLOBAL_162_T  _GLOBAL_11_pg0_I [ ] ; extern  _GLOBAL_162_T  _GLOBAL_12_pg0_I [ ] ; extern  _GLOBAL_162_T  _GLOBAL_13_pg0_I [ ] ; extern  _GLOBAL_162_T  _GLOBAL_14_pg0_I [ ] ; extern  _GLOBAL_162_T  _GLOBAL_15_pg0_I [ ] ; extern  _GLOBAL_162_T  _GLOBAL_16_pg0_I [ ] ; extern  _GLOBAL_162_T  _GLOBAL_17_pg0_I [ ] ; extern  _GLOBAL_162_T  _GLOBAL_18_pg0_I [ ] ; extern  _GLOBAL_162_T  _GLOBAL_19_pg0_I [ ] ; extern  _GLOBAL_162_T  _GLOBAL_20_pg0_I [ ] ; extern  _GLOBAL_162_T  _GLOBAL_21_pg0_I [ ] ; extern  _GLOBAL_162_T  _GLOBAL_22_pg0_I [ ] ; extern  _GLOBAL_162_T  _GLOBAL_23_pg0_I [ ] ; extern  _GLOBAL_162_T  _GLOBAL_24_pg0_I [ ] ; extern  _GLOBAL_162_T  _GLOBAL_25_pg0_I [ ] ; extern  _GLOBAL_162_T  _GLOBAL_26_pg0_I [ ] ; extern  _GLOBAL_162_T  _GLOBAL_27_pg0_I [ ] ; extern  _GLOBAL_162_T  _GLOBAL_28_pg0_I [ ] ; extern  _GLOBAL_162_T  _GLOBAL_29_pg0_I [ ] ; extern  _GLOBAL_162_T  _GLOBAL_30_pg0_I [ ] ; extern  _GLOBAL_162_T  _GLOBAL_31_pg0_I [ ] ; extern  _GLOBAL_162_T  _GLOBAL_32_pg0_I [ ] ; extern  _GLOBAL_162_T  _GLOBAL_33_pg0_I [ ] ; extern  _GLOBAL_162_T  _GLOBAL_34_pg0_I [ ] ; extern  _GLOBAL_162_T  _GLOBAL_35_pg0_I [ ] ; extern  _GLOBAL_162_T  _GLOBAL_36_pg0_I [ ] ; extern  _GLOBAL_162_T  _GLOBAL_37_pg0_I [ ] ; extern  _GLOBAL_162_T  _GLOBAL_38_pg0_I [ ] ; extern  _GLOBAL_162_T  _GLOBAL_39_pg0_I [ ] ; extern  _GLOBAL_162_T  _GLOBAL_40_pg0_I [ ] ; extern  _GLOBAL_162_T  _GLOBAL_41_pg0_I [ ] ; extern  _GLOBAL_162_T  _GLOBAL_42_pg0_I [ ] ; extern  _GLOBAL_162_T  _GLOBAL_43_pg0_I [ ] ; extern  _GLOBAL_162_T  _GLOBAL_44_pg0_I [ ] ; extern  _GLOBAL_162_T  _GLOBAL_45_pg0_I [ ] ; extern  _GLOBAL_162_T  _GLOBAL_46_pg0_I [ ] ; extern  _GLOBAL_162_T  _GLOBAL_47_pg0_I [ ] ; extern  _GLOBAL_162_T  _GLOBAL_48_pg0_I [ ] ; extern  _GLOBAL_162_T  _GLOBAL_49_pg0_I [ ] ; static __attribute__ ((unused)) __typeof__(_GLOBAL_0_pg0_I) *_GLOBAL_pg0_11_A[NUM_STACKS];   
# 218 "linux-2.6/include/asm/pgtable.h"
static inline  __attribute__((always_inline)) int pte_user(pte_t pte) { return (pte).pte_low & 0x004; }
static inline  __attribute__((always_inline)) int pte_read(pte_t pte) { return (pte).pte_low & 0x004; }
static inline  __attribute__((always_inline)) int pte_dirty(pte_t pte) { return (pte).pte_low & 0x040; }
static inline  __attribute__((always_inline)) int pte_young(pte_t pte) { return (pte).pte_low & 0x020; }
static inline  __attribute__((always_inline)) int pte_write(pte_t pte) { return (pte).pte_low & 0x002; }




static inline  __attribute__((always_inline)) int pte_file(pte_t pte) { return (pte).pte_low & 0x040; }

static inline  __attribute__((always_inline)) pte_t pte_rdprotect(pte_t pte) { (pte).pte_low &= ~0x004; return pte; }
static inline  __attribute__((always_inline)) pte_t pte_exprotect(pte_t pte) { (pte).pte_low &= ~0x004; return pte; }
static inline  __attribute__((always_inline)) pte_t pte_mkclean(pte_t pte) { (pte).pte_low &= ~0x040; return pte; }
static inline  __attribute__((always_inline)) pte_t pte_mkold(pte_t pte) { (pte).pte_low &= ~0x020; return pte; }
static inline  __attribute__((always_inline)) pte_t pte_wrprotect(pte_t pte) { (pte).pte_low &= ~0x002; return pte; }
static inline  __attribute__((always_inline)) pte_t pte_mkread(pte_t pte) { (pte).pte_low |= 0x004; return pte; }
static inline  __attribute__((always_inline)) pte_t pte_mkexec(pte_t pte) { (pte).pte_low |= 0x004; return pte; }
static inline  __attribute__((always_inline)) pte_t pte_mkdirty(pte_t pte) { (pte).pte_low |= 0x040; return pte; }
static inline  __attribute__((always_inline)) pte_t pte_mkyoung(pte_t pte) { (pte).pte_low |= 0x020; return pte; }
static inline  __attribute__((always_inline)) pte_t pte_mkwrite(pte_t pte) { (pte).pte_low |= 0x002; return pte; }




# 1 "linux-2.6/include/asm/pgtable-2level.h" 1
# 16 "linux-2.6/include/asm/pgtable-2level.h"
static inline  __attribute__((always_inline)) int pgd_none(pgd_t pgd) { return 0; }
static inline  __attribute__((always_inline)) int pgd_bad(pgd_t pgd) { return 0; }
static inline  __attribute__((always_inline)) int pgd_present(pgd_t pgd) { return 1; }
# 38 "linux-2.6/include/asm/pgtable-2level.h"
static inline  __attribute__((always_inline)) pmd_t * pmd_offset(pgd_t * dir, unsigned long address)
{
 return (pmd_t *) dir;
}
# 53 "linux-2.6/include/asm/pgtable-2level.h"
static inline  __attribute__((always_inline)) int pte_exec(pte_t pte)
{
 return pte_user(pte);
}




static inline  __attribute__((always_inline)) int pte_exec_kernel(pte_t pte)
{
 return 1;
}
# 244 "linux-2.6/include/asm/pgtable.h" 2


static inline  __attribute__((always_inline)) int ptep_test_and_clear_dirty(pte_t *ptep)
{
 if (!pte_dirty(*ptep))
  return 0;
 return test_and_clear_bit(6, &ptep->pte_low);
}

static inline  __attribute__((always_inline)) int ptep_test_and_clear_young(pte_t *ptep)
{
 if (!pte_young(*ptep))
  return 0;
 return test_and_clear_bit(5, &ptep->pte_low);
}

static inline  __attribute__((always_inline)) void ptep_set_wrprotect(pte_t *ptep) { clear_bit(1, &ptep->pte_low); }
static inline  __attribute__((always_inline)) void ptep_mkdirty(pte_t *ptep) { set_bit(6, &ptep->pte_low); }
# 278 "linux-2.6/include/asm/pgtable.h"
static inline  __attribute__((always_inline)) pte_t pte_modify(pte_t pte, pgprot_t newprot)
{
 pte.pte_low &= ((~((1UL << 12)-1)) | 0x020 | 0x040);
 pte.pte_low |= ((newprot).pgprot);
# 291 "linux-2.6/include/asm/pgtable.h"
 return pte;
}
# 352 "linux-2.6/include/asm/pgtable.h"
extern pte_t *lookup_address(unsigned long address);
# 363 "linux-2.6/include/asm/pgtable.h"
 static inline  __attribute__((always_inline)) int set_kernel_exec(unsigned long vaddr, int enable) { return 0;}
# 416 "linux-2.6/include/asm/pgtable.h"
# 1 "linux-2.6/include/asm-generic/pgtable.h" 1
# 417 "linux-2.6/include/asm/pgtable.h" 2
# 37 "linux-2.6/include/linux/mm.h" 2
# 61 "linux-2.6/include/linux/mm.h"
struct vm_area_struct {
 struct mm_struct * vm_mm;
 unsigned long vm_start;
 unsigned long vm_end;



 struct vm_area_struct *vm_next;

 pgprot_t vm_page_prot;
 unsigned long vm_flags;

 struct rb_node vm_rb;







 union {
  struct {
   struct list_head list;
   void *parent;
   struct vm_area_struct *head;
  } vm_set;

  struct prio_tree_node prio_tree_node;
 } shared;







 struct list_head anon_vma_node;
 struct anon_vma *anon_vma;


 struct vm_operations_struct * vm_ops;


 unsigned long vm_pgoff;

 struct file * vm_file;
 void * vm_private_data;




};
# 167 "linux-2.6/include/linux/mm.h"
typedef  pgprot_t  _GLOBAL_163_T; extern  _GLOBAL_163_T  _GLOBAL_0_protection_map_I [ 16 ] ; extern  _GLOBAL_163_T  _GLOBAL_1_protection_map_I [ 16 ] ; extern  _GLOBAL_163_T  _GLOBAL_2_protection_map_I [ 16 ] ; extern  _GLOBAL_163_T  _GLOBAL_3_protection_map_I [ 16 ] ; extern  _GLOBAL_163_T  _GLOBAL_4_protection_map_I [ 16 ] ; extern  _GLOBAL_163_T  _GLOBAL_5_protection_map_I [ 16 ] ; extern  _GLOBAL_163_T  _GLOBAL_6_protection_map_I [ 16 ] ; extern  _GLOBAL_163_T  _GLOBAL_7_protection_map_I [ 16 ] ; extern  _GLOBAL_163_T  _GLOBAL_8_protection_map_I [ 16 ] ; extern  _GLOBAL_163_T  _GLOBAL_9_protection_map_I [ 16 ] ; extern  _GLOBAL_163_T  _GLOBAL_10_protection_map_I [ 16 ] ; extern  _GLOBAL_163_T  _GLOBAL_11_protection_map_I [ 16 ] ; extern  _GLOBAL_163_T  _GLOBAL_12_protection_map_I [ 16 ] ; extern  _GLOBAL_163_T  _GLOBAL_13_protection_map_I [ 16 ] ; extern  _GLOBAL_163_T  _GLOBAL_14_protection_map_I [ 16 ] ; extern  _GLOBAL_163_T  _GLOBAL_15_protection_map_I [ 16 ] ; extern  _GLOBAL_163_T  _GLOBAL_16_protection_map_I [ 16 ] ; extern  _GLOBAL_163_T  _GLOBAL_17_protection_map_I [ 16 ] ; extern  _GLOBAL_163_T  _GLOBAL_18_protection_map_I [ 16 ] ; extern  _GLOBAL_163_T  _GLOBAL_19_protection_map_I [ 16 ] ; extern  _GLOBAL_163_T  _GLOBAL_20_protection_map_I [ 16 ] ; extern  _GLOBAL_163_T  _GLOBAL_21_protection_map_I [ 16 ] ; extern  _GLOBAL_163_T  _GLOBAL_22_protection_map_I [ 16 ] ; extern  _GLOBAL_163_T  _GLOBAL_23_protection_map_I [ 16 ] ; extern  _GLOBAL_163_T  _GLOBAL_24_protection_map_I [ 16 ] ; extern  _GLOBAL_163_T  _GLOBAL_25_protection_map_I [ 16 ] ; extern  _GLOBAL_163_T  _GLOBAL_26_protection_map_I [ 16 ] ; extern  _GLOBAL_163_T  _GLOBAL_27_protection_map_I [ 16 ] ; extern  _GLOBAL_163_T  _GLOBAL_28_protection_map_I [ 16 ] ; extern  _GLOBAL_163_T  _GLOBAL_29_protection_map_I [ 16 ] ; extern  _GLOBAL_163_T  _GLOBAL_30_protection_map_I [ 16 ] ; extern  _GLOBAL_163_T  _GLOBAL_31_protection_map_I [ 16 ] ; extern  _GLOBAL_163_T  _GLOBAL_32_protection_map_I [ 16 ] ; extern  _GLOBAL_163_T  _GLOBAL_33_protection_map_I [ 16 ] ; extern  _GLOBAL_163_T  _GLOBAL_34_protection_map_I [ 16 ] ; extern  _GLOBAL_163_T  _GLOBAL_35_protection_map_I [ 16 ] ; extern  _GLOBAL_163_T  _GLOBAL_36_protection_map_I [ 16 ] ; extern  _GLOBAL_163_T  _GLOBAL_37_protection_map_I [ 16 ] ; extern  _GLOBAL_163_T  _GLOBAL_38_protection_map_I [ 16 ] ; extern  _GLOBAL_163_T  _GLOBAL_39_protection_map_I [ 16 ] ; extern  _GLOBAL_163_T  _GLOBAL_40_protection_map_I [ 16 ] ; extern  _GLOBAL_163_T  _GLOBAL_41_protection_map_I [ 16 ] ; extern  _GLOBAL_163_T  _GLOBAL_42_protection_map_I [ 16 ] ; extern  _GLOBAL_163_T  _GLOBAL_43_protection_map_I [ 16 ] ; extern  _GLOBAL_163_T  _GLOBAL_44_protection_map_I [ 16 ] ; extern  _GLOBAL_163_T  _GLOBAL_45_protection_map_I [ 16 ] ; extern  _GLOBAL_163_T  _GLOBAL_46_protection_map_I [ 16 ] ; extern  _GLOBAL_163_T  _GLOBAL_47_protection_map_I [ 16 ] ; extern  _GLOBAL_163_T  _GLOBAL_48_protection_map_I [ 16 ] ; extern  _GLOBAL_163_T  _GLOBAL_49_protection_map_I [ 16 ] ; static __attribute__ ((unused)) __typeof__(_GLOBAL_0_protection_map_I) *_GLOBAL_protection_map_12_A[NUM_STACKS];  







struct vm_operations_struct {
 void (*open)(struct vm_area_struct * area);
 void (*close)(struct vm_area_struct * area);
 struct page * (*nopage)(struct vm_area_struct * area, unsigned long address, int *type);
 int (*populate)(struct vm_area_struct * area, unsigned long address, unsigned long len, pgprot_t prot, unsigned long pgoff, int nonblock);





};

struct mmu_gather;
struct inode;




typedef unsigned long page_flags_t;
# 202 "linux-2.6/include/linux/mm.h"
struct page {
 page_flags_t flags;

 atomic_t _count;
 atomic_t _mapcount;



 unsigned long private;




 struct address_space *mapping;






 unsigned long index;
 struct list_head lru;
# 240 "linux-2.6/include/linux/mm.h"
};





# 1 "linux-2.6/include/linux/page-flags.h" 1
# 83 "linux-2.6/include/linux/page-flags.h"
struct page_state {
 unsigned long nr_dirty;
 unsigned long nr_writeback;
 unsigned long nr_unstable;
 unsigned long nr_page_table_pages;
 unsigned long nr_mapped;
 unsigned long nr_slab;






 unsigned long pgpgin;
 unsigned long pgpgout;
 unsigned long pswpin;
 unsigned long pswpout;
 unsigned long pgalloc_high;

 unsigned long pgalloc_normal;
 unsigned long pgalloc_dma;
 unsigned long pgfree;
 unsigned long pgactivate;
 unsigned long pgdeactivate;

 unsigned long pgfault;
 unsigned long pgmajfault;
 unsigned long pgrefill_high;
 unsigned long pgrefill_normal;
 unsigned long pgrefill_dma;

 unsigned long pgsteal_high;
 unsigned long pgsteal_normal;
 unsigned long pgsteal_dma;
 unsigned long pgscan_kswapd_high;
 unsigned long pgscan_kswapd_normal;

 unsigned long pgscan_kswapd_dma;
 unsigned long pgscan_direct_high;
 unsigned long pgscan_direct_normal;
 unsigned long pgscan_direct_dma;
 unsigned long pginodesteal;

 unsigned long slabs_scanned;
 unsigned long kswapd_steal;
 unsigned long kswapd_inodesteal;
 unsigned long pageoutrun;
 unsigned long allocstall;

 unsigned long pgrotated;
};

typedef  __typeof__ ( struct page_state  )   _GLOBAL_164_T; extern  _GLOBAL_164_T  global_per_cpu__page_states[NUM_STACKS];    

extern void get_page_state(struct page_state *ret);
extern void get_full_page_state(struct page_state *ret);
extern unsigned long __read_page_state(unsigned offset);
# 301 "linux-2.6/include/linux/page-flags.h"
struct page;

int test_clear_page_dirty(struct page *page);
int __clear_page_dirty(struct page *page);
int test_clear_page_writeback(struct page *page);
int test_set_page_writeback(struct page *page);

static inline  __attribute__((always_inline)) void clear_page_dirty(struct page *page)
{
 test_clear_page_dirty(page);
}

static inline  __attribute__((always_inline)) void set_page_writeback(struct page *page)
{
 test_set_page_writeback(page);
}
# 247 "linux-2.6/include/linux/mm.h" 2
# 289 "linux-2.6/include/linux/mm.h"
extern void __page_cache_release(struct page *) __attribute__((regparm(3))) ;
# 313 "linux-2.6/include/linux/mm.h"
static inline  __attribute__((always_inline)) void get_page(struct page *page)
{
 atomic_inc(&page->_count);
}

static inline  __attribute__((always_inline)) void put_page(struct page *page)
{
 if (!(__builtin_constant_p(11) ? constant_test_bit((11),(&(page)->flags)) : variable_test_bit((11),(&(page)->flags))) && ({ do { if (__builtin_expect(!!(((((&(page)->_count)->counter) + 1) == 0)!=0), 0)) __asm__ __volatile__( "ud2\n" "\t.word %c0\n" "\t.long %c1\n" : : "i" (320), "i" ("linux-2.6/include/linux/mm.h")); } while(0); atomic_add_negative(-1, &(page)->_count); }))
  __page_cache_release(page);
}
# 384 "linux-2.6/include/linux/mm.h"
static inline  __attribute__((always_inline)) unsigned long page_zonenum(struct page *page)
{
 return (page->flags >> (sizeof(page_flags_t)*8 - 1 - 2)) & (~(~0UL << 2));
}
static inline  __attribute__((always_inline)) unsigned long page_to_nid(struct page *page)
{
 return (page->flags >> ((sizeof(page_flags_t)*8 - 1 - 2) + 2));
}

struct zone;
extern struct zone *zone_table[];

static inline  __attribute__((always_inline)) struct zone *page_zone(struct page *page)
{
 return zone_table[page->flags >> (sizeof(page_flags_t)*8 - 1 - 2)];
}

static inline  __attribute__((always_inline)) void set_page_zone(struct page *page, unsigned long nodezone_num)
{
 page->flags &= ~(~0UL << (sizeof(page_flags_t)*8 - 1 - 2));
 page->flags |= nodezone_num << (sizeof(page_flags_t)*8 - 1 - 2);
}



typedef  struct page   _GLOBAL_165_T; extern  _GLOBAL_165_T  * global_mem_map[NUM_STACKS];    


static inline  __attribute__((always_inline)) void *lowmem_page_address(struct page *page)
{
 return ((void *)((unsigned long)(((unsigned long)((page) - global_mem_map[get_stack_id()])) << 12)+((unsigned long)(0xC0000000UL))));
}
# 453 "linux-2.6/include/linux/mm.h"
typedef  struct address_space   _GLOBAL_166_T; extern  _GLOBAL_166_T  global_swapper_space[NUM_STACKS];    
static inline  __attribute__((always_inline)) struct address_space *page_mapping(struct page *page)
{
 struct address_space *mapping = page->mapping;

 if (__builtin_expect(!!((__builtin_constant_p(16) ? constant_test_bit((16),(&(page)->flags)) : variable_test_bit((16),(&(page)->flags)))), 0))
  mapping = &global_swapper_space[get_stack_id()];
 else if (__builtin_expect(!!((unsigned long)mapping & 1), 0))
  mapping = ((void *)0);
 return mapping;
}

static inline  __attribute__((always_inline)) int PageAnon(struct page *page)
{
 return ((unsigned long)page->mapping & 1) != 0;
}





static inline  __attribute__((always_inline)) unsigned long page_index(struct page *page)
{
 if (__builtin_expect(!!((__builtin_constant_p(16) ? constant_test_bit((16),(&(page)->flags)) : variable_test_bit((16),(&(page)->flags)))), 0))
  return page->private;
 return page->index;
}






static inline  __attribute__((always_inline)) void reset_page_mapcount(struct page *page)
{
 (((&(page)->_mapcount)->counter) = (-1));
}

static inline  __attribute__((always_inline)) int page_mapcount(struct page *page)
{
 return ((&(page)->_mapcount)->counter) + 1;
}




static inline  __attribute__((always_inline)) int page_mapped(struct page *page)
{
 return ((&(page)->_mapcount)->counter) >= 0;
}
# 522 "linux-2.6/include/linux/mm.h"
extern void show_free_areas(void);


struct page *shmem_nopage(struct vm_area_struct *vma,
   unsigned long address, int *type);
int shmem_set_policy(struct vm_area_struct *vma, struct mempolicy *new);
struct mempolicy *shmem_get_policy(struct vm_area_struct *vma,
     unsigned long addr);
int shmem_lock(struct file *file, int lock, struct user_struct *user);






struct file *shmem_file_setup(char *name, loff_t size, unsigned long flags);

int shmem_zero_setup(struct vm_area_struct *);

static inline  __attribute__((always_inline)) int can_do_mlock(void)
{
 if (capable(14))
  return 1;
 if (get_current()->signal->rlim[8].rlim_cur != 0)
  return 1;
 return 0;
}
extern int user_shm_lock(size_t, struct user_struct *);
extern void user_shm_unlock(size_t, struct user_struct *);




struct zap_details {
 struct vm_area_struct *nonlinear_vma;
 struct address_space *check_mapping;
 unsigned long first_index;
 unsigned long last_index;
 int atomic;
};

void zap_page_range(struct vm_area_struct *vma, unsigned long address,
  unsigned long size, struct zap_details *);
int unmap_vmas(struct mmu_gather **tlbp, struct mm_struct *mm,
  struct vm_area_struct *start_vma, unsigned long start_addr,
  unsigned long end_addr, unsigned long *nr_accounted,
  struct zap_details *);
void clear_page_tables(struct mmu_gather *tlb, unsigned long first, int nr);
int copy_page_range(struct mm_struct *dst, struct mm_struct *src,
   struct vm_area_struct *vma);
int zeromap_page_range(struct vm_area_struct *vma, unsigned long from,
   unsigned long size, pgprot_t prot);
void unmap_mapping_range(struct address_space *mapping,
  loff_t const holebegin, loff_t const holelen, int even_cows);

static inline  __attribute__((always_inline)) void unmap_shared_mapping_range(struct address_space *mapping,
  loff_t const holebegin, loff_t const holelen)
{
 unmap_mapping_range(mapping, holebegin, holelen, 0);
}

extern int vmtruncate(struct inode * inode, loff_t offset);
extern pmd_t *__pmd_alloc(struct mm_struct *mm, pgd_t *pgd, unsigned long address) __attribute__((regparm(3))) ;
extern pte_t *pte_alloc_kernel(struct mm_struct *mm, pmd_t *pmd, unsigned long address) __attribute__((regparm(3))) ;
extern pte_t *pte_alloc_map(struct mm_struct *mm, pmd_t *pmd, unsigned long address) __attribute__((regparm(3))) ;
extern int install_page(struct mm_struct *mm, struct vm_area_struct *vma, unsigned long addr, struct page *page, pgprot_t prot);
extern int install_file_pte(struct mm_struct *mm, struct vm_area_struct *vma, unsigned long addr, unsigned long pgoff, pgprot_t prot);
extern int handle_mm_fault(struct mm_struct *mm,struct vm_area_struct *vma, unsigned long address, int write_access);
extern int make_pages_present(unsigned long addr, unsigned long end);
extern int access_process_vm(struct task_struct *tsk, unsigned long addr, void *buf, int len, int write);
void install_arg_page(struct vm_area_struct *, struct page *, unsigned long);

int get_user_pages(struct task_struct *tsk, struct mm_struct *mm, unsigned long start,
  int len, int write, int force, struct page **pages, struct vm_area_struct **vmas);

int __set_page_dirty_buffers(struct page *page);
int __set_page_dirty_nobuffers(struct page *page);
int redirty_page_for_writepage(struct writeback_control *wbc,
    struct page *page);
int set_page_dirty(struct page *page) __attribute__((regparm(3))) ;
int set_page_dirty_lock(struct page *page);
int clear_page_dirty_for_io(struct page *page);
# 616 "linux-2.6/include/linux/mm.h"
typedef int (*shrinker_t)(int nr_to_scan, unsigned int gfp_mask);







struct shrinker;
extern struct shrinker *set_shrinker(int, shrinker_t);
extern void remove_shrinker(struct shrinker *shrinker);






static inline  __attribute__((always_inline)) pmd_t *pmd_alloc(struct mm_struct *mm, pgd_t *pgd, unsigned long address)
{
 if (pgd_none(*pgd))
  return __pmd_alloc(mm, pgd, address);
 return pmd_offset(pgd, address);
}

extern void free_area_init(unsigned long * zones_size);
extern void free_area_init_node(int nid, pg_data_t *pgdat,
 unsigned long * zones_size, unsigned long zone_start_pfn,
 unsigned long *zholes_size);
extern void memmap_init_zone(unsigned long, int, unsigned long, unsigned long);
extern void mem_init(void);
extern void show_mem(void);
extern void si_meminfo(struct sysinfo * val);
extern void si_meminfo_node(struct sysinfo *val, int nid);


void vma_prio_tree_add(struct vm_area_struct *, struct vm_area_struct *old);
void vma_prio_tree_insert(struct vm_area_struct *, struct prio_tree_root *);
void vma_prio_tree_remove(struct vm_area_struct *, struct prio_tree_root *);
struct vm_area_struct *vma_prio_tree_next(struct vm_area_struct *vma,
 struct prio_tree_iter *iter);





static inline  __attribute__((always_inline)) void vma_nonlinear_insert(struct vm_area_struct *vma,
     struct list_head *list)
{
 vma->shared.vm_set.parent = ((void *)0);
 list_add_tail(&vma->shared.vm_set.list, list);
}


extern void vma_adjust(struct vm_area_struct *vma, unsigned long start,
 unsigned long end, unsigned long pgoff, struct vm_area_struct *insert);
extern struct vm_area_struct *vma_merge(struct mm_struct *,
 struct vm_area_struct *prev, unsigned long addr, unsigned long end,
 unsigned long vm_flags, struct anon_vma *, struct file *, unsigned long,
 struct mempolicy *);
extern struct anon_vma *find_mergeable_anon_vma(struct vm_area_struct *);
extern int split_vma(struct mm_struct *,
 struct vm_area_struct *, unsigned long addr, int new_below);
extern int insert_vm_struct(struct mm_struct *, struct vm_area_struct *);
extern void __vma_link_rb(struct mm_struct *, struct vm_area_struct *,
 struct rb_node **, struct rb_node *);
extern struct vm_area_struct *copy_vma(struct vm_area_struct **,
 unsigned long addr, unsigned long len, unsigned long pgoff);
extern void exit_mmap(struct mm_struct *);

extern unsigned long get_unmapped_area(struct file *, unsigned long, unsigned long, unsigned long, unsigned long);

extern unsigned long do_mmap_pgoff(struct file *file, unsigned long addr,
 unsigned long len, unsigned long prot,
 unsigned long flag, unsigned long pgoff);

static inline  __attribute__((always_inline)) unsigned long do_mmap(struct file *file, unsigned long addr,
 unsigned long len, unsigned long prot,
 unsigned long flag, unsigned long offset)
{
 unsigned long ret = -22;
 if ((offset + (((len)+(1UL << 12)-1)&(~((1UL << 12)-1)))) < offset)
  goto out;
 if (!(offset & ~(~((1UL << 12)-1))))
  ret = do_mmap_pgoff(file, addr, len, prot, flag, offset >> 12);
out:
 return ret;
}

extern int do_munmap(struct mm_struct *, unsigned long, size_t);

extern unsigned long do_brk(unsigned long, unsigned long);


extern unsigned long page_unuse(struct page *);
extern void truncate_inode_pages(struct address_space *, loff_t);


struct page *filemap_nopage(struct vm_area_struct *, unsigned long, int *);


int write_one_page(struct page *page, int wait);





int do_page_cache_readahead(struct address_space *mapping, struct file *filp,
   unsigned long offset, unsigned long nr_to_read);
int force_page_cache_readahead(struct address_space *mapping, struct file *filp,
   unsigned long offset, unsigned long nr_to_read);
void page_cache_readahead(struct address_space *mapping,
     struct file_ra_state *ra,
     struct file *filp,
     unsigned long offset);
void handle_ra_miss(struct address_space *mapping,
      struct file_ra_state *ra, unsigned long offset);
unsigned long max_sane_readahead(unsigned long nr);


extern int expand_stack(struct vm_area_struct * vma, unsigned long address);


extern struct vm_area_struct * find_vma(struct mm_struct * mm, unsigned long addr);
extern struct vm_area_struct * find_vma_prev(struct mm_struct * mm, unsigned long addr,
          struct vm_area_struct **pprev);



static inline  __attribute__((always_inline)) struct vm_area_struct * find_vma_intersection(struct mm_struct * mm, unsigned long start_addr, unsigned long end_addr)
{
 struct vm_area_struct * vma = find_vma(mm,start_addr);

 if (vma && end_addr <= vma->vm_start)
  vma = ((void *)0);
 return vma;
}

static inline  __attribute__((always_inline)) unsigned long vma_pages(struct vm_area_struct *vma)
{
 return (vma->vm_end - vma->vm_start) >> 12;
}

extern struct vm_area_struct *find_extend_vma(struct mm_struct *mm, unsigned long addr);

extern struct page * vmalloc_to_page(void *addr);
extern unsigned long vmalloc_to_pfn(void *addr);
extern struct page * follow_page(struct mm_struct *mm, unsigned long address,
  int write);
int remap_pfn_range(struct vm_area_struct *, unsigned long,
  unsigned long, unsigned long, pgprot_t);

static inline  
__attribute__((always_inline)) __attribute__((deprecated)) int remap_page_range(struct vm_area_struct *vma, unsigned long uvaddr,
   unsigned long paddr, unsigned long size, pgprot_t prot)
{
 return remap_pfn_range(vma, uvaddr, paddr >> 12, size, prot);
}


void __vm_stat_account(struct mm_struct *, unsigned long, struct file *, long);







static inline  __attribute__((always_inline)) void vm_stat_account(struct vm_area_struct *vma)
{
 __vm_stat_account(vma->vm_mm, vma->vm_flags, vma->vm_file,
       vma_pages(vma));
}

static inline  __attribute__((always_inline)) void vm_stat_unaccount(struct vm_area_struct *vma)
{
 __vm_stat_account(vma->vm_mm, vma->vm_flags, vma->vm_file,
       -vma_pages(vma));
}


static inline  __attribute__((always_inline)) void
kernel_map_pages(struct page *page, int numpages, int enable)
{
}



extern struct vm_area_struct *get_gate_vma(struct task_struct *tsk);
int in_gate_area(struct task_struct *task, unsigned long addr);
# 9 "linux-2.6/net/core/sysctl_net_core.c" 2
# 1 "linux-2.6/include/linux/sysctl.h" 1
# 26 "linux-2.6/include/linux/sysctl.h"
struct file;






struct __sysctl_args {
 int *name;
 int nlen;
 void *oldval;
 size_t *oldlenp;
 void *newval;
 size_t newlen;
 unsigned long __unused[4];
};
# 53 "linux-2.6/include/linux/sysctl.h"
enum
{
 CTL_KERN=1,
 CTL_VM=2,
 CTL_NET=3,
 CTL_PROC=4,
 CTL_FS=5,
 CTL_DEBUG=6,
 CTL_DEV=7,
 CTL_BUS=8,
 CTL_ABI=9,
 CTL_CPU=10
};


enum
{
 CTL_BUS_ISA=1
};


enum
{
 KERN_OSTYPE=1,
 KERN_OSRELEASE=2,
 KERN_OSREV=3,
 KERN_VERSION=4,
 KERN_SECUREMASK=5,
 KERN_PROF=6,
 KERN_NODENAME=7,
 KERN_DOMAINNAME=8,

 KERN_CAP_BSET=14,
 KERN_PANIC=15,
 KERN_REALROOTDEV=16,

 KERN_SPARC_REBOOT=21,
 KERN_CTLALTDEL=22,
 KERN_PRINTK=23,
 KERN_NAMETRANS=24,
 KERN_PPC_HTABRECLAIM=25,
 KERN_PPC_ZEROPAGED=26,
 KERN_PPC_POWERSAVE_NAP=27,
 KERN_MODPROBE=28,
 KERN_SG_BIG_BUFF=29,
 KERN_ACCT=30,
 KERN_PPC_L2CR=31,

 KERN_RTSIGNR=32,
 KERN_RTSIGMAX=33,

 KERN_SHMMAX=34,
 KERN_MSGMAX=35,
 KERN_MSGMNB=36,
 KERN_MSGPOOL=37,
 KERN_SYSRQ=38,
 KERN_MAX_THREADS=39,
  KERN_RANDOM=40,
  KERN_SHMALL=41,
  KERN_MSGMNI=42,
  KERN_SEM=43,
  KERN_SPARC_STOP_A=44,
  KERN_SHMMNI=45,
 KERN_OVERFLOWUID=46,
 KERN_OVERFLOWGID=47,
 KERN_SHMPATH=48,
 KERN_HOTPLUG=49,
 KERN_IEEE_EMULATION_WARNINGS=50,
 KERN_S390_USER_DEBUG_LOGGING=51,
 KERN_CORE_USES_PID=52,
 KERN_TAINTED=53,
 KERN_CADPID=54,
 KERN_PIDMAX=55,
   KERN_CORE_PATTERN=56,
 KERN_PANIC_ON_OOPS=57,
 KERN_HPPA_PWRSW=58,
 KERN_HPPA_UNALIGNED=59,
 KERN_PRINTK_RATELIMIT=60,
 KERN_PRINTK_RATELIMIT_BURST=61,
 KERN_PTY=62,
 KERN_NGROUPS_MAX=63,
 KERN_SPARC_SCONS_PWROFF=64,
 KERN_HZ_TIMER=65,
 KERN_UNKNOWN_NMI_PANIC=66,
};



enum
{
 VM_UNUSED1=1,
 VM_UNUSED2=2,
 VM_UNUSED3=3,
 VM_UNUSED4=4,
 VM_OVERCOMMIT_MEMORY=5,
 VM_UNUSED5=6,
 VM_UNUSED7=7,
 VM_UNUSED8=8,
 VM_UNUSED9=9,
 VM_PAGE_CLUSTER=10,
 VM_DIRTY_BACKGROUND=11,
 VM_DIRTY_RATIO=12,
 VM_DIRTY_WB_CS=13,
 VM_DIRTY_EXPIRE_CS=14,
 VM_NR_PDFLUSH_THREADS=15,
 VM_OVERCOMMIT_RATIO=16,
 VM_PAGEBUF=17,
 VM_HUGETLB_PAGES=18,
 VM_SWAPPINESS=19,
 VM_LOWER_ZONE_PROTECTION=20,
 VM_MIN_FREE_KBYTES=21,
 VM_MAX_MAP_COUNT=22,
 VM_LAPTOP_MODE=23,
 VM_BLOCK_DUMP=24,
 VM_HUGETLB_GROUP=25,
 VM_VFS_CACHE_PRESSURE=26,
 VM_LEGACY_VA_LAYOUT=27,
 VM_SWAP_TOKEN_TIMEOUT=28,
};



enum
{
 NET_CORE=1,
 NET_ETHER=2,
 NET_802=3,
 NET_UNIX=4,
 NET_IPV4=5,
 NET_IPX=6,
 NET_ATALK=7,
 NET_NETROM=8,
 NET_AX25=9,
 NET_BRIDGE=10,
 NET_ROSE=11,
 NET_IPV6=12,
 NET_X25=13,
 NET_TR=14,
 NET_DECNET=15,
 NET_ECONET=16,
 NET_SCTP=17,
};


enum
{
 RANDOM_POOLSIZE=1,
 RANDOM_ENTROPY_COUNT=2,
 RANDOM_READ_THRESH=3,
 RANDOM_WRITE_THRESH=4,
 RANDOM_BOOT_ID=5,
 RANDOM_UUID=6
};


enum
{
 PTY_MAX=1,
 PTY_NR=2
};


enum
{
 BUS_ISA_MEM_BASE=1,
 BUS_ISA_PORT_BASE=2,
 BUS_ISA_PORT_SHIFT=3
};


enum
{
 NET_CORE_WMEM_MAX=1,
 NET_CORE_RMEM_MAX=2,
 NET_CORE_WMEM_DEFAULT=3,
 NET_CORE_RMEM_DEFAULT=4,

 NET_CORE_MAX_BACKLOG=6,
 NET_CORE_FASTROUTE=7,
 NET_CORE_MSG_COST=8,
 NET_CORE_MSG_BURST=9,
 NET_CORE_OPTMEM_MAX=10,
 NET_CORE_HOT_LIST_LENGTH=11,
 NET_CORE_DIVERT_VERSION=12,
 NET_CORE_NO_CONG_THRESH=13,
 NET_CORE_NO_CONG=14,
 NET_CORE_LO_CONG=15,
 NET_CORE_MOD_CONG=16,
 NET_CORE_DEV_WEIGHT=17,
 NET_CORE_SOMAXCONN=18,
};







enum
{
 NET_UNIX_DESTROY_DELAY=1,
 NET_UNIX_DELETE_DELAY=2,
 NET_UNIX_MAX_DGRAM_QLEN=3,
};


enum
{

 NET_IPV4_FORWARD=8,
 NET_IPV4_DYNADDR=9,

 NET_IPV4_CONF=16,
 NET_IPV4_NEIGH=17,
 NET_IPV4_ROUTE=18,
 NET_IPV4_FIB_HASH=19,
 NET_IPV4_NETFILTER=20,

 NET_IPV4_TCP_TIMESTAMPS=33,
 NET_IPV4_TCP_WINDOW_SCALING=34,
 NET_IPV4_TCP_SACK=35,
 NET_IPV4_TCP_RETRANS_COLLAPSE=36,
 NET_IPV4_DEFAULT_TTL=37,
 NET_IPV4_AUTOCONFIG=38,
 NET_IPV4_NO_PMTU_DISC=39,
 NET_IPV4_TCP_SYN_RETRIES=40,
 NET_IPV4_IPFRAG_HIGH_THRESH=41,
 NET_IPV4_IPFRAG_LOW_THRESH=42,
 NET_IPV4_IPFRAG_TIME=43,
 NET_IPV4_TCP_MAX_KA_PROBES=44,
 NET_IPV4_TCP_KEEPALIVE_TIME=45,
 NET_IPV4_TCP_KEEPALIVE_PROBES=46,
 NET_IPV4_TCP_RETRIES1=47,
 NET_IPV4_TCP_RETRIES2=48,
 NET_IPV4_TCP_FIN_TIMEOUT=49,
 NET_IPV4_IP_MASQ_DEBUG=50,
 NET_TCP_SYNCOOKIES=51,
 NET_TCP_STDURG=52,
 NET_TCP_RFC1337=53,
 NET_TCP_SYN_TAILDROP=54,
 NET_TCP_MAX_SYN_BACKLOG=55,
 NET_IPV4_LOCAL_PORT_RANGE=56,
 NET_IPV4_ICMP_ECHO_IGNORE_ALL=57,
 NET_IPV4_ICMP_ECHO_IGNORE_BROADCASTS=58,
 NET_IPV4_ICMP_SOURCEQUENCH_RATE=59,
 NET_IPV4_ICMP_DESTUNREACH_RATE=60,
 NET_IPV4_ICMP_TIMEEXCEED_RATE=61,
 NET_IPV4_ICMP_PARAMPROB_RATE=62,
 NET_IPV4_ICMP_ECHOREPLY_RATE=63,
 NET_IPV4_ICMP_IGNORE_BOGUS_ERROR_RESPONSES=64,
 NET_IPV4_IGMP_MAX_MEMBERSHIPS=65,
 NET_TCP_TW_RECYCLE=66,
 NET_IPV4_ALWAYS_DEFRAG=67,
 NET_IPV4_TCP_KEEPALIVE_INTVL=68,
 NET_IPV4_INET_PEER_THRESHOLD=69,
 NET_IPV4_INET_PEER_MINTTL=70,
 NET_IPV4_INET_PEER_MAXTTL=71,
 NET_IPV4_INET_PEER_GC_MINTIME=72,
 NET_IPV4_INET_PEER_GC_MAXTIME=73,
 NET_TCP_ORPHAN_RETRIES=74,
 NET_TCP_ABORT_ON_OVERFLOW=75,
 NET_TCP_SYNACK_RETRIES=76,
 NET_TCP_MAX_ORPHANS=77,
 NET_TCP_MAX_TW_BUCKETS=78,
 NET_TCP_FACK=79,
 NET_TCP_REORDERING=80,
 NET_TCP_ECN=81,
 NET_TCP_DSACK=82,
 NET_TCP_MEM=83,
 NET_TCP_WMEM=84,
 NET_TCP_RMEM=85,
 NET_TCP_APP_WIN=86,
 NET_TCP_ADV_WIN_SCALE=87,
 NET_IPV4_NONLOCAL_BIND=88,
 NET_IPV4_ICMP_RATELIMIT=89,
 NET_IPV4_ICMP_RATEMASK=90,
 NET_TCP_TW_REUSE=91,
 NET_TCP_FRTO=92,
 NET_TCP_LOW_LATENCY=93,
 NET_IPV4_IPFRAG_SECRET_INTERVAL=94,
 NET_TCP_WESTWOOD=95,
 NET_IPV4_IGMP_MAX_MSF=96,
 NET_TCP_NO_METRICS_SAVE=97,
 NET_TCP_VEGAS=98,
 NET_TCP_VEGAS_ALPHA=99,
 NET_TCP_VEGAS_BETA=100,
 NET_TCP_VEGAS_GAMMA=101,
  NET_TCP_BIC=102,
  NET_TCP_BIC_FAST_CONVERGENCE=103,
 NET_TCP_BIC_LOW_WINDOW=104,
 NET_TCP_DEFAULT_WIN_SCALE=105,
 NET_TCP_MODERATE_RCVBUF=106,
 NET_TCP_TSO_WIN_DIVISOR=107,
};

enum {
 NET_IPV4_ROUTE_FLUSH=1,
 NET_IPV4_ROUTE_MIN_DELAY=2,
 NET_IPV4_ROUTE_MAX_DELAY=3,
 NET_IPV4_ROUTE_GC_THRESH=4,
 NET_IPV4_ROUTE_MAX_SIZE=5,
 NET_IPV4_ROUTE_GC_MIN_INTERVAL=6,
 NET_IPV4_ROUTE_GC_TIMEOUT=7,
 NET_IPV4_ROUTE_GC_INTERVAL=8,
 NET_IPV4_ROUTE_REDIRECT_LOAD=9,
 NET_IPV4_ROUTE_REDIRECT_NUMBER=10,
 NET_IPV4_ROUTE_REDIRECT_SILENCE=11,
 NET_IPV4_ROUTE_ERROR_COST=12,
 NET_IPV4_ROUTE_ERROR_BURST=13,
 NET_IPV4_ROUTE_GC_ELASTICITY=14,
 NET_IPV4_ROUTE_MTU_EXPIRES=15,
 NET_IPV4_ROUTE_MIN_PMTU=16,
 NET_IPV4_ROUTE_MIN_ADVMSS=17,
 NET_IPV4_ROUTE_SECRET_INTERVAL=18,
};

enum
{
 NET_PROTO_CONF_ALL=-2,
 NET_PROTO_CONF_DEFAULT=-3


};

enum
{
 NET_IPV4_CONF_FORWARDING=1,
 NET_IPV4_CONF_MC_FORWARDING=2,
 NET_IPV4_CONF_PROXY_ARP=3,
 NET_IPV4_CONF_ACCEPT_REDIRECTS=4,
 NET_IPV4_CONF_SECURE_REDIRECTS=5,
 NET_IPV4_CONF_SEND_REDIRECTS=6,
 NET_IPV4_CONF_SHARED_MEDIA=7,
 NET_IPV4_CONF_RP_FILTER=8,
 NET_IPV4_CONF_ACCEPT_SOURCE_ROUTE=9,
 NET_IPV4_CONF_BOOTP_RELAY=10,
 NET_IPV4_CONF_LOG_MARTIANS=11,
 NET_IPV4_CONF_TAG=12,
 NET_IPV4_CONF_ARPFILTER=13,
 NET_IPV4_CONF_MEDIUM_ID=14,
 NET_IPV4_CONF_NOXFRM=15,
 NET_IPV4_CONF_NOPOLICY=16,
 NET_IPV4_CONF_FORCE_IGMP_VERSION=17,
 NET_IPV4_CONF_ARP_ANNOUNCE=18,
 NET_IPV4_CONF_ARP_IGNORE=19,
};


enum
{
 NET_IPV4_NF_CONNTRACK_MAX=1,
 NET_IPV4_NF_CONNTRACK_TCP_TIMEOUT_SYN_SENT=2,
 NET_IPV4_NF_CONNTRACK_TCP_TIMEOUT_SYN_RECV=3,
 NET_IPV4_NF_CONNTRACK_TCP_TIMEOUT_ESTABLISHED=4,
 NET_IPV4_NF_CONNTRACK_TCP_TIMEOUT_FIN_WAIT=5,
 NET_IPV4_NF_CONNTRACK_TCP_TIMEOUT_CLOSE_WAIT=6,
 NET_IPV4_NF_CONNTRACK_TCP_TIMEOUT_LAST_ACK=7,
 NET_IPV4_NF_CONNTRACK_TCP_TIMEOUT_TIME_WAIT=8,
 NET_IPV4_NF_CONNTRACK_TCP_TIMEOUT_CLOSE=9,
 NET_IPV4_NF_CONNTRACK_UDP_TIMEOUT=10,
 NET_IPV4_NF_CONNTRACK_UDP_TIMEOUT_STREAM=11,
 NET_IPV4_NF_CONNTRACK_ICMP_TIMEOUT=12,
 NET_IPV4_NF_CONNTRACK_GENERIC_TIMEOUT=13,
 NET_IPV4_NF_CONNTRACK_BUCKETS=14,
 NET_IPV4_NF_CONNTRACK_LOG_INVALID=15,
 NET_IPV4_NF_CONNTRACK_TCP_TIMEOUT_MAX_RETRANS=16,
 NET_IPV4_NF_CONNTRACK_TCP_LOOSE=17,
 NET_IPV4_NF_CONNTRACK_TCP_BE_LIBERAL=18,
 NET_IPV4_NF_CONNTRACK_TCP_MAX_RETRANS=19,
  NET_IPV4_NF_CONNTRACK_SCTP_TIMEOUT_CLOSED=20,
  NET_IPV4_NF_CONNTRACK_SCTP_TIMEOUT_COOKIE_WAIT=21,
  NET_IPV4_NF_CONNTRACK_SCTP_TIMEOUT_COOKIE_ECHOED=22,
  NET_IPV4_NF_CONNTRACK_SCTP_TIMEOUT_ESTABLISHED=23,
  NET_IPV4_NF_CONNTRACK_SCTP_TIMEOUT_SHUTDOWN_SENT=24,
  NET_IPV4_NF_CONNTRACK_SCTP_TIMEOUT_SHUTDOWN_RECD=25,
  NET_IPV4_NF_CONNTRACK_SCTP_TIMEOUT_SHUTDOWN_ACK_SENT=26,
 NET_IPV4_NF_CONNTRACK_COUNT=27,
};


enum {
 NET_IPV6_CONF=16,
 NET_IPV6_NEIGH=17,
 NET_IPV6_ROUTE=18,
 NET_IPV6_ICMP=19,
 NET_IPV6_BINDV6ONLY=20,
 NET_IPV6_IP6FRAG_HIGH_THRESH=21,
 NET_IPV6_IP6FRAG_LOW_THRESH=22,
 NET_IPV6_IP6FRAG_TIME=23,
 NET_IPV6_IP6FRAG_SECRET_INTERVAL=24,
 NET_IPV6_MLD_MAX_MSF=25,
};

enum {
 NET_IPV6_ROUTE_FLUSH=1,
 NET_IPV6_ROUTE_GC_THRESH=2,
 NET_IPV6_ROUTE_MAX_SIZE=3,
 NET_IPV6_ROUTE_GC_MIN_INTERVAL=4,
 NET_IPV6_ROUTE_GC_TIMEOUT=5,
 NET_IPV6_ROUTE_GC_INTERVAL=6,
 NET_IPV6_ROUTE_GC_ELASTICITY=7,
 NET_IPV6_ROUTE_MTU_EXPIRES=8,
 NET_IPV6_ROUTE_MIN_ADVMSS=9
};

enum {
 NET_IPV6_FORWARDING=1,
 NET_IPV6_HOP_LIMIT=2,
 NET_IPV6_MTU=3,
 NET_IPV6_ACCEPT_RA=4,
 NET_IPV6_ACCEPT_REDIRECTS=5,
 NET_IPV6_AUTOCONF=6,
 NET_IPV6_DAD_TRANSMITS=7,
 NET_IPV6_RTR_SOLICITS=8,
 NET_IPV6_RTR_SOLICIT_INTERVAL=9,
 NET_IPV6_RTR_SOLICIT_DELAY=10,
 NET_IPV6_USE_TEMPADDR=11,
 NET_IPV6_TEMP_VALID_LFT=12,
 NET_IPV6_TEMP_PREFERED_LFT=13,
 NET_IPV6_REGEN_MAX_RETRY=14,
 NET_IPV6_MAX_DESYNC_FACTOR=15,
 NET_IPV6_MAX_ADDRESSES=16,
 NET_IPV6_FORCE_MLD_VERSION=17
};


enum {
 NET_IPV6_ICMP_RATELIMIT=1
};


enum {
 NET_NEIGH_MCAST_SOLICIT=1,
 NET_NEIGH_UCAST_SOLICIT=2,
 NET_NEIGH_APP_SOLICIT=3,
 NET_NEIGH_RETRANS_TIME=4,
 NET_NEIGH_REACHABLE_TIME=5,
 NET_NEIGH_DELAY_PROBE_TIME=6,
 NET_NEIGH_GC_STALE_TIME=7,
 NET_NEIGH_UNRES_QLEN=8,
 NET_NEIGH_PROXY_QLEN=9,
 NET_NEIGH_ANYCAST_DELAY=10,
 NET_NEIGH_PROXY_DELAY=11,
 NET_NEIGH_LOCKTIME=12,
 NET_NEIGH_GC_INTERVAL=13,
 NET_NEIGH_GC_THRESH1=14,
 NET_NEIGH_GC_THRESH2=15,
 NET_NEIGH_GC_THRESH3=16
};


enum {
 NET_IPX_PPROP_BROADCASTING=1,
 NET_IPX_FORWARDING=2
};



enum {
 NET_ATALK_AARP_EXPIRY_TIME=1,
 NET_ATALK_AARP_TICK_TIME=2,
 NET_ATALK_AARP_RETRANSMIT_LIMIT=3,
 NET_ATALK_AARP_RESOLVE_TIME=4
};



enum {
 NET_NETROM_DEFAULT_PATH_QUALITY=1,
 NET_NETROM_OBSOLESCENCE_COUNT_INITIALISER=2,
 NET_NETROM_NETWORK_TTL_INITIALISER=3,
 NET_NETROM_TRANSPORT_TIMEOUT=4,
 NET_NETROM_TRANSPORT_MAXIMUM_TRIES=5,
 NET_NETROM_TRANSPORT_ACKNOWLEDGE_DELAY=6,
 NET_NETROM_TRANSPORT_BUSY_DELAY=7,
 NET_NETROM_TRANSPORT_REQUESTED_WINDOW_SIZE=8,
 NET_NETROM_TRANSPORT_NO_ACTIVITY_TIMEOUT=9,
 NET_NETROM_ROUTING_CONTROL=10,
 NET_NETROM_LINK_FAILS_COUNT=11
};


enum {
 NET_AX25_IP_DEFAULT_MODE=1,
 NET_AX25_DEFAULT_MODE=2,
 NET_AX25_BACKOFF_TYPE=3,
 NET_AX25_CONNECT_MODE=4,
 NET_AX25_STANDARD_WINDOW=5,
 NET_AX25_EXTENDED_WINDOW=6,
 NET_AX25_T1_TIMEOUT=7,
 NET_AX25_T2_TIMEOUT=8,
 NET_AX25_T3_TIMEOUT=9,
 NET_AX25_IDLE_TIMEOUT=10,
 NET_AX25_N2=11,
 NET_AX25_PACLEN=12,
 NET_AX25_PROTOCOL=13,
 NET_AX25_DAMA_SLAVE_TIMEOUT=14
};


enum {
 NET_ROSE_RESTART_REQUEST_TIMEOUT=1,
 NET_ROSE_CALL_REQUEST_TIMEOUT=2,
 NET_ROSE_RESET_REQUEST_TIMEOUT=3,
 NET_ROSE_CLEAR_REQUEST_TIMEOUT=4,
 NET_ROSE_ACK_HOLD_BACK_TIMEOUT=5,
 NET_ROSE_ROUTING_CONTROL=6,
 NET_ROSE_LINK_FAIL_TIMEOUT=7,
 NET_ROSE_MAX_VCS=8,
 NET_ROSE_WINDOW_SIZE=9,
 NET_ROSE_NO_ACTIVITY_TIMEOUT=10
};


enum {
 NET_X25_RESTART_REQUEST_TIMEOUT=1,
 NET_X25_CALL_REQUEST_TIMEOUT=2,
 NET_X25_RESET_REQUEST_TIMEOUT=3,
 NET_X25_CLEAR_REQUEST_TIMEOUT=4,
 NET_X25_ACK_HOLD_BACK_TIMEOUT=5
};


enum
{
 NET_TR_RIF_TIMEOUT=1
};


enum {
 NET_DECNET_NODE_TYPE = 1,
 NET_DECNET_NODE_ADDRESS = 2,
 NET_DECNET_NODE_NAME = 3,
 NET_DECNET_DEFAULT_DEVICE = 4,
 NET_DECNET_TIME_WAIT = 5,
 NET_DECNET_DN_COUNT = 6,
 NET_DECNET_DI_COUNT = 7,
 NET_DECNET_DR_COUNT = 8,
 NET_DECNET_DST_GC_INTERVAL = 9,
 NET_DECNET_CONF = 10,
 NET_DECNET_NO_FC_MAX_CWND = 11,
 NET_DECNET_DEBUG_LEVEL = 255
};


enum {
 NET_DECNET_CONF_LOOPBACK = -2,
 NET_DECNET_CONF_DDCMP = -3,
 NET_DECNET_CONF_PPP = -4,
 NET_DECNET_CONF_X25 = -5,
 NET_DECNET_CONF_GRE = -6,
 NET_DECNET_CONF_ETHER = -7


};


enum {
 NET_DECNET_CONF_DEV_PRIORITY = 1,
 NET_DECNET_CONF_DEV_T1 = 2,
 NET_DECNET_CONF_DEV_T2 = 3,
 NET_DECNET_CONF_DEV_T3 = 4,
 NET_DECNET_CONF_DEV_FORWARDING = 5,
 NET_DECNET_CONF_DEV_BLKSIZE = 6,
 NET_DECNET_CONF_DEV_STATE = 7
};


enum {
 NET_SCTP_RTO_INITIAL = 1,
 NET_SCTP_RTO_MIN = 2,
 NET_SCTP_RTO_MAX = 3,
 NET_SCTP_RTO_ALPHA = 4,
 NET_SCTP_RTO_BETA = 5,
 NET_SCTP_VALID_COOKIE_LIFE = 6,
 NET_SCTP_ASSOCIATION_MAX_RETRANS = 7,
 NET_SCTP_PATH_MAX_RETRANS = 8,
 NET_SCTP_MAX_INIT_RETRANSMITS = 9,
 NET_SCTP_HB_INTERVAL = 10,
 NET_SCTP_PRESERVE_ENABLE = 11,
 NET_SCTP_MAX_BURST = 12,
 NET_SCTP_ADDIP_ENABLE = 13,
 NET_SCTP_PRSCTP_ENABLE = 14,
};


enum {
 NET_BRIDGE_NF_CALL_ARPTABLES = 1,
 NET_BRIDGE_NF_CALL_IPTABLES = 2,
 NET_BRIDGE_NF_CALL_IP6TABLES = 3,
 NET_BRIDGE_NF_FILTER_VLAN_TAGGED = 4,
};




enum
{
 FS_NRINODE=1,
 FS_STATINODE=2,
 FS_MAXINODE=3,
 FS_NRDQUOT=4,
 FS_MAXDQUOT=5,
 FS_NRFILE=6,
 FS_MAXFILE=7,
 FS_DENTRY=8,
 FS_NRSUPER=9,
 FS_MAXSUPER=10,
 FS_OVERFLOWUID=11,
 FS_OVERFLOWGID=12,
 FS_LEASES=13,
 FS_DIR_NOTIFY=14,
 FS_LEASE_TIME=15,
 FS_DQSTATS=16,
 FS_XFS=17,
 FS_AIO_NR=18,
 FS_AIO_MAX_NR=19,
};


enum {
 FS_DQ_LOOKUPS = 1,
 FS_DQ_DROPS = 2,
 FS_DQ_READS = 3,
 FS_DQ_WRITES = 4,
 FS_DQ_CACHE_HITS = 5,
 FS_DQ_ALLOCATED = 6,
 FS_DQ_FREE = 7,
 FS_DQ_SYNCS = 8,
};




enum {
 DEV_CDROM=1,
 DEV_HWMON=2,
 DEV_PARPORT=3,
 DEV_RAID=4,
 DEV_MAC_HID=5,
 DEV_SCSI=6,
};


enum {
 DEV_CDROM_INFO=1,
 DEV_CDROM_AUTOCLOSE=2,
 DEV_CDROM_AUTOEJECT=3,
 DEV_CDROM_DEBUG=4,
 DEV_CDROM_LOCK=5,
 DEV_CDROM_CHECK_MEDIA=6
};


enum {
 DEV_PARPORT_DEFAULT=-3
};


enum {
 DEV_RAID_SPEED_LIMIT_MIN=1,
 DEV_RAID_SPEED_LIMIT_MAX=2
};


enum {
 DEV_PARPORT_DEFAULT_TIMESLICE=1,
 DEV_PARPORT_DEFAULT_SPINTIME=2
};


enum {
 DEV_PARPORT_SPINTIME=1,
 DEV_PARPORT_BASE_ADDR=2,
 DEV_PARPORT_IRQ=3,
 DEV_PARPORT_DMA=4,
 DEV_PARPORT_MODES=5,
 DEV_PARPORT_DEVICES=6,
 DEV_PARPORT_AUTOPROBE=16
};


enum {
 DEV_PARPORT_DEVICES_ACTIVE=-3,
};


enum {
 DEV_PARPORT_DEVICE_TIMESLICE=1,
};


enum {
 DEV_MAC_HID_KEYBOARD_SENDS_LINUX_KEYCODES=1,
 DEV_MAC_HID_KEYBOARD_LOCK_KEYCODES=2,
 DEV_MAC_HID_MOUSE_BUTTON_EMULATION=3,
 DEV_MAC_HID_MOUSE_BUTTON2_KEYCODE=4,
 DEV_MAC_HID_MOUSE_BUTTON3_KEYCODE=5,
 DEV_MAC_HID_ADB_MOUSE_SENDS_KEYCODES=6
};


enum {
 DEV_SCSI_LOGGING_LEVEL=1,
};


enum
{
 ABI_DEFHANDLER_COFF=1,
 ABI_DEFHANDLER_ELF=2,
 ABI_DEFHANDLER_LCALL7=3,
 ABI_DEFHANDLER_LIBCSO=4,
 ABI_TRACE=5,
 ABI_FAKE_UTSNAME=6,
};



extern void sysctl_init(void);

typedef struct ctl_table ctl_table;

typedef int ctl_handler (ctl_table *table, int *name, int nlen,
    void *oldval, size_t *oldlenp,
    void *newval, size_t newlen,
    void **context);

typedef int proc_handler (ctl_table *ctl, int write, struct file * filp,
     void *buffer, size_t *lenp, loff_t *ppos);

extern int proc_dostring(ctl_table *, int, struct file *,
    void *, size_t *, loff_t *);
extern int proc_dointvec(ctl_table *, int, struct file *,
    void *, size_t *, loff_t *);
extern int proc_dointvec_bset(ctl_table *, int, struct file *,
         void *, size_t *, loff_t *);
extern int proc_dointvec_minmax(ctl_table *, int, struct file *,
    void *, size_t *, loff_t *);
extern int proc_dointvec_jiffies(ctl_table *, int, struct file *,
     void *, size_t *, loff_t *);
extern int proc_dointvec_userhz_jiffies(ctl_table *, int, struct file *,
     void *, size_t *, loff_t *);
extern int proc_doulongvec_minmax(ctl_table *, int, struct file *,
      void *, size_t *, loff_t *);
extern int proc_doulongvec_ms_jiffies_minmax(ctl_table *table, int,
          struct file *, void *, size_t *, loff_t *);

extern int do_sysctl (int *name, int nlen,
        void *oldval, size_t *oldlenp,
        void *newval, size_t newlen);

extern int do_sysctl_strategy (ctl_table *table,
          int *name, int nlen,
          void *oldval, size_t *oldlenp,
          void *newval, size_t newlen, void ** context);

extern ctl_handler sysctl_string;
extern ctl_handler sysctl_intvec;
extern ctl_handler sysctl_jiffies;
# 853 "linux-2.6/include/linux/sysctl.h"
struct ctl_table
{
 int ctl_name;
 const char *procname;
 void *data;
 int maxlen;
 mode_t mode;
 ctl_table *child;
 proc_handler *proc_handler;
 ctl_handler *strategy;
 struct proc_dir_entry *de;
 void *extra1;
 void *extra2;
};



struct ctl_table_header
{
 ctl_table *ctl_table;
 struct list_head ctl_entry;
};

struct ctl_table_header * register_sysctl_table(ctl_table * table,
      int insert_at_head);
void unregister_sysctl_table(struct ctl_table_header * table);
# 10 "linux-2.6/net/core/sysctl_net_core.c" 2

# 1 "linux-2.6/include/linux/module.h" 1
# 16 "linux-2.6/include/linux/module.h"
# 1 "linux-2.6/include/linux/kmod.h" 1
# 31 "linux-2.6/include/linux/kmod.h"
extern int request_module(const char * name, ...) __attribute__ ((format (printf, 1, 2))) ;





extern int call_usermodehelper(char *path, char *argv[], char *envp[], int wait);
extern void usermodehelper_init(void);
# 17 "linux-2.6/include/linux/module.h" 2
# 1 "linux-2.6/include/linux/elf.h" 1




# 1 "linux-2.6/include/asm/elf.h" 1
# 9 "linux-2.6/include/asm/elf.h"
# 1 "linux-2.6/include/asm/user.h" 1
# 44 "linux-2.6/include/asm/user.h"
struct user_i387_struct {
 long cwd;
 long swd;
 long twd;
 long fip;
 long fcs;
 long foo;
 long fos;
 long st_space[20];
};

struct user_fxsr_struct {
 unsigned short cwd;
 unsigned short swd;
 unsigned short twd;
 unsigned short fop;
 long fip;
 long fcs;
 long foo;
 long fos;
 long mxcsr;
 long reserved;
 long st_space[32];
 long xmm_space[32];
 long padding[56];
};







struct user_regs_struct {
 long ebx, ecx, edx, esi, edi, ebp, eax;
 unsigned short ds, __ds, es, __es;
 unsigned short fs, __fs, gs, __gs;
 long orig_eax, eip;
 unsigned short cs, __cs;
 long eflags, esp;
 unsigned short ss, __ss;
};




struct user{


  struct user_regs_struct regs;

  int u_fpvalid;

  struct user_i387_struct i387;

  unsigned long int u_tsize;
  unsigned long int u_dsize;
  unsigned long int u_ssize;
  unsigned long start_code;
  unsigned long start_stack;



  long int signal;
  int reserved;
  struct user_pt_regs * u_ar0;

  struct user_i387_struct* u_fpstate;
  unsigned long magic;
  char u_comm[32];
  int u_debugreg[8];
};
# 10 "linux-2.6/include/asm/elf.h" 2



# 1 "linux-2.6/include/linux/utsname.h" 1





struct oldold_utsname {
 char sysname[9];
 char nodename[9];
 char release[9];
 char version[9];
 char machine[9];
};



struct old_utsname {
 char sysname[65];
 char nodename[65];
 char release[65];
 char version[65];
 char machine[65];
};

struct new_utsname {
 char sysname[65];
 char nodename[65];
 char release[65];
 char version[65];
 char machine[65];
 char domainname[65];
};

typedef  struct new_utsname   _GLOBAL_167_T; extern  _GLOBAL_167_T  global_system_utsname[NUM_STACKS];    

typedef  struct rw_semaphore   _GLOBAL_168_T; extern  _GLOBAL_168_T  global_uts_sem[NUM_STACKS];    
# 14 "linux-2.6/include/asm/elf.h" 2
# 28 "linux-2.6/include/asm/elf.h"
typedef unsigned long elf_greg_t;


typedef elf_greg_t elf_gregset_t[(sizeof (struct user_regs_struct) / sizeof(elf_greg_t))];

typedef struct user_i387_struct elf_fpregset_t;
typedef struct user_fxsr_struct elf_fpxregset_t;
# 128 "linux-2.6/include/asm/elf.h"
extern int dump_task_regs (struct task_struct *, elf_gregset_t *);
extern int dump_task_fpu (struct task_struct *, elf_fpregset_t *);
extern int dump_task_extended_fpu (struct task_struct *, struct user_fxsr_struct *);
# 139 "linux-2.6/include/asm/elf.h"
extern void __kernel_vsyscall;
# 6 "linux-2.6/include/linux/elf.h" 2
# 15 "linux-2.6/include/linux/elf.h"
typedef __u32 Elf32_Addr;
typedef __u16 Elf32_Half;
typedef __u32 Elf32_Off;
typedef __s32 Elf32_Sword;
typedef __u32 Elf32_Word;


typedef __u64 Elf64_Addr;
typedef __u16 Elf64_Half;
typedef __s16 Elf64_SHalf;
typedef __u64 Elf64_Off;
typedef __s32 Elf64_Sword;
typedef __u32 Elf64_Word;
typedef __u64 Elf64_Xword;
typedef __s64 Elf64_Sxword;
# 181 "linux-2.6/include/linux/elf.h"
typedef struct dynamic{
  Elf32_Sword d_tag;
  union{
    Elf32_Sword d_val;
    Elf32_Addr d_ptr;
  } d_un;
} Elf32_Dyn;

typedef struct {
  Elf64_Sxword d_tag;
  union {
    Elf64_Xword d_val;
    Elf64_Addr d_ptr;
  } d_un;
} Elf64_Dyn;
# 204 "linux-2.6/include/linux/elf.h"
typedef struct elf32_rel {
  Elf32_Addr r_offset;
  Elf32_Word r_info;
} Elf32_Rel;

typedef struct elf64_rel {
  Elf64_Addr r_offset;
  Elf64_Xword r_info;
} Elf64_Rel;

typedef struct elf32_rela{
  Elf32_Addr r_offset;
  Elf32_Word r_info;
  Elf32_Sword r_addend;
} Elf32_Rela;

typedef struct elf64_rela {
  Elf64_Addr r_offset;
  Elf64_Xword r_info;
  Elf64_Sxword r_addend;
} Elf64_Rela;

typedef struct elf32_sym{
  Elf32_Word st_name;
  Elf32_Addr st_value;
  Elf32_Word st_size;
  unsigned char st_info;
  unsigned char st_other;
  Elf32_Half st_shndx;
} Elf32_Sym;

typedef struct elf64_sym {
  Elf64_Word st_name;
  unsigned char st_info;
  unsigned char st_other;
  Elf64_Half st_shndx;
  Elf64_Addr st_value;
  Elf64_Xword st_size;
} Elf64_Sym;




typedef struct elf32_hdr{
  unsigned char e_ident[16];
  Elf32_Half e_type;
  Elf32_Half e_machine;
  Elf32_Word e_version;
  Elf32_Addr e_entry;
  Elf32_Off e_phoff;
  Elf32_Off e_shoff;
  Elf32_Word e_flags;
  Elf32_Half e_ehsize;
  Elf32_Half e_phentsize;
  Elf32_Half e_phnum;
  Elf32_Half e_shentsize;
  Elf32_Half e_shnum;
  Elf32_Half e_shstrndx;
} Elf32_Ehdr;

typedef struct elf64_hdr {
  unsigned char e_ident[16];
  Elf64_Half e_type;
  Elf64_Half e_machine;
  Elf64_Word e_version;
  Elf64_Addr e_entry;
  Elf64_Off e_phoff;
  Elf64_Off e_shoff;
  Elf64_Word e_flags;
  Elf64_Half e_ehsize;
  Elf64_Half e_phentsize;
  Elf64_Half e_phnum;
  Elf64_Half e_shentsize;
  Elf64_Half e_shnum;
  Elf64_Half e_shstrndx;
} Elf64_Ehdr;







typedef struct elf32_phdr{
  Elf32_Word p_type;
  Elf32_Off p_offset;
  Elf32_Addr p_vaddr;
  Elf32_Addr p_paddr;
  Elf32_Word p_filesz;
  Elf32_Word p_memsz;
  Elf32_Word p_flags;
  Elf32_Word p_align;
} Elf32_Phdr;

typedef struct elf64_phdr {
  Elf64_Word p_type;
  Elf64_Word p_flags;
  Elf64_Off p_offset;
  Elf64_Addr p_vaddr;
  Elf64_Addr p_paddr;
  Elf64_Xword p_filesz;
  Elf64_Xword p_memsz;
  Elf64_Xword p_align;
} Elf64_Phdr;
# 343 "linux-2.6/include/linux/elf.h"
typedef struct {
  Elf32_Word sh_name;
  Elf32_Word sh_type;
  Elf32_Word sh_flags;
  Elf32_Addr sh_addr;
  Elf32_Off sh_offset;
  Elf32_Word sh_size;
  Elf32_Word sh_link;
  Elf32_Word sh_info;
  Elf32_Word sh_addralign;
  Elf32_Word sh_entsize;
} Elf32_Shdr;

typedef struct elf64_shdr {
  Elf64_Word sh_name;
  Elf64_Word sh_type;
  Elf64_Xword sh_flags;
  Elf64_Addr sh_addr;
  Elf64_Off sh_offset;
  Elf64_Xword sh_size;
  Elf64_Word sh_link;
  Elf64_Word sh_info;
  Elf64_Xword sh_addralign;
  Elf64_Xword sh_entsize;
} Elf64_Shdr;
# 416 "linux-2.6/include/linux/elf.h"
typedef struct elf32_note {
  Elf32_Word n_namesz;
  Elf32_Word n_descsz;
  Elf32_Word n_type;
} Elf32_Nhdr;


typedef struct elf64_note {
  Elf64_Word n_namesz;
  Elf64_Word n_descsz;
  Elf64_Word n_type;
} Elf64_Nhdr;



extern Elf32_Dyn _DYNAMIC [];
# 18 "linux-2.6/include/linux/module.h" 2


# 1 "linux-2.6/include/linux/moduleparam.h" 1
# 16 "linux-2.6/include/linux/moduleparam.h"
struct kernel_param;


typedef int (*param_set_fn)(const char *val, struct kernel_param *kp);

typedef int (*param_get_fn)(char *buffer, struct kernel_param *kp);

struct kernel_param {
 const char *name;
 unsigned int perm;
 param_set_fn set;
 param_get_fn get;
 void *arg;
};


struct kparam_string {
 unsigned int maxlen;
 char *string;
};


struct kparam_array
{
 unsigned int max;
 unsigned int *num;
 param_set_fn set;
 param_get_fn get;
 unsigned int elemsize;
 void *elem;
};
# 80 "linux-2.6/include/linux/moduleparam.h"
extern int parse_args(const char *name,
        char *args,
        struct kernel_param *params,
        unsigned num,
        int (*unknown)(char *param, char *val));







extern int param_set_byte(const char *val, struct kernel_param *kp);
extern int param_get_byte(char *buffer, struct kernel_param *kp);


extern int param_set_short(const char *val, struct kernel_param *kp);
extern int param_get_short(char *buffer, struct kernel_param *kp);


extern int param_set_ushort(const char *val, struct kernel_param *kp);
extern int param_get_ushort(char *buffer, struct kernel_param *kp);


extern int param_set_int(const char *val, struct kernel_param *kp);
extern int param_get_int(char *buffer, struct kernel_param *kp);


extern int param_set_uint(const char *val, struct kernel_param *kp);
extern int param_get_uint(char *buffer, struct kernel_param *kp);


extern int param_set_long(const char *val, struct kernel_param *kp);
extern int param_get_long(char *buffer, struct kernel_param *kp);


extern int param_set_ulong(const char *val, struct kernel_param *kp);
extern int param_get_ulong(char *buffer, struct kernel_param *kp);


extern int param_set_charp(const char *val, struct kernel_param *kp);
extern int param_get_charp(char *buffer, struct kernel_param *kp);


extern int param_set_bool(const char *val, struct kernel_param *kp);
extern int param_get_bool(char *buffer, struct kernel_param *kp);


extern int param_set_invbool(const char *val, struct kernel_param *kp);
extern int param_get_invbool(char *buffer, struct kernel_param *kp);
# 143 "linux-2.6/include/linux/moduleparam.h"
extern int param_array_set(const char *val, struct kernel_param *kp);
extern int param_array_get(char *buffer, struct kernel_param *kp);

extern int param_set_copystring(const char *val, struct kernel_param *kp);
extern int param_get_string(char *buffer, struct kernel_param *kp);

int param_array(const char *name,
  const char *val,
  unsigned int min, unsigned int max,
  void *elem, int elemsize,
  int (*set)(const char *, struct kernel_param *kp),
  int *num);



struct module;

extern int module_param_sysfs_setup(struct module *mod,
        struct kernel_param *kparam,
        unsigned int num_params);

extern void module_param_sysfs_remove(struct module *mod);
# 21 "linux-2.6/include/linux/module.h" 2
# 1 "linux-2.6/include/asm/local.h" 1





typedef struct
{
 volatile unsigned long counter;
} local_t;






static __inline__  __attribute__((always_inline)) void local_inc(local_t *v)
{
 __asm__ __volatile__(
  "incl %0"
  :"=m" (v->counter)
  :"m" (v->counter));
}

static __inline__  __attribute__((always_inline)) void local_dec(local_t *v)
{
 __asm__ __volatile__(
  "decl %0"
  :"=m" (v->counter)
  :"m" (v->counter));
}

static __inline__  __attribute__((always_inline)) void local_add(unsigned long i, local_t *v)
{
 __asm__ __volatile__(
  "addl %1,%0"
  :"=m" (v->counter)
  :"ir" (i), "m" (v->counter));
}

static __inline__  __attribute__((always_inline)) void local_sub(unsigned long i, local_t *v)
{
 __asm__ __volatile__(
  "subl %1,%0"
  :"=m" (v->counter)
  :"ir" (i), "m" (v->counter));
}
# 22 "linux-2.6/include/linux/module.h" 2

# 1 "linux-2.6/include/asm/module.h" 1




struct mod_arch_specific
{
};
# 24 "linux-2.6/include/linux/module.h" 2
# 35 "linux-2.6/include/linux/module.h"
struct kernel_symbol
{
 unsigned long value;
 const char *name;
};

struct modversion_info
{
 unsigned long crc;
 char name[(64 - sizeof(unsigned long))];
};

struct module;

struct module_attribute {
        struct attribute attr;
        ssize_t (*show)(struct module *, char *);
        ssize_t (*store)(struct module *, const char *, size_t count);
};

struct module_kobject
{
 struct kobject kobj;
 struct module *mod;
};


extern int init_module(void);
extern void cleanup_module(void);


struct exception_table_entry;

const struct exception_table_entry *
search_extable(const struct exception_table_entry *first,
        const struct exception_table_entry *last,
        unsigned long value);
void sort_extable(struct exception_table_entry *start,
    struct exception_table_entry *finish);
void sort_main_extable(void);

typedef  struct subsystem   _GLOBAL_169_T; extern  _GLOBAL_169_T  global_module_subsys[NUM_STACKS];    
# 165 "linux-2.6/include/linux/module.h"
const struct exception_table_entry *search_exception_tables(unsigned long add);

struct notifier_block;




void *__symbol_get(const char *symbol);
void *__symbol_get_gpl(const char *symbol);
# 213 "linux-2.6/include/linux/module.h"
struct module_ref
{
 local_t count;
} __attribute__((__aligned__((1 << (7))))) ;

enum module_state
{
 MODULE_STATE_LIVE,
 MODULE_STATE_COMING,
 MODULE_STATE_GOING,
};



struct module_sect_attr
{
 struct attribute attr;
 char name[32];
 unsigned long address;
};

struct module_sections
{
 struct kobject kobj;
 struct module_sect_attr attrs[0];
};

struct param_kobject;

struct module
{
 enum module_state state;


 struct list_head list;


 char name[(64 - sizeof(unsigned long))];


 struct module_kobject *mkobj;
 struct param_kobject *params_kobject;


 const struct kernel_symbol *syms;
 unsigned int num_syms;
 const unsigned long *crcs;


 const struct kernel_symbol *gpl_syms;
 unsigned int num_gpl_syms;
 const unsigned long *gpl_crcs;


 unsigned int num_exentries;
 const struct exception_table_entry *extable;


 int (*init)(void);


 void *module_init;


 void *module_core;


 unsigned long init_size, core_size;


 unsigned long init_text_size, core_text_size;


 struct mod_arch_specific arch;


 int unsafe;


 int license_gplok;
# 310 "linux-2.6/include/linux/module.h"
 Elf32_Sym *symtab;
 unsigned long num_symtab;
 char *strtab;


 struct module_sections *sect_attrs;



 void *percpu;



 char *args;
};




static inline  __attribute__((always_inline)) int module_is_live(struct module *mod)
{
 return mod->state != MODULE_STATE_GOING;
}


struct module *module_text_address(unsigned long addr);
struct module *__module_text_address(unsigned long addr);



struct module *module_get_kallsym(unsigned int symnum,
      unsigned long *value,
      char *type,
      char namebuf[128]);


unsigned long module_kallsyms_lookup_name(const char *name);

int is_exported(const char *name, const struct module *mod);

extern void __module_put_and_exit(struct module *mod, long code)
 __attribute__((noreturn)) ;
# 399 "linux-2.6/include/linux/module.h"
static inline  __attribute__((always_inline)) int try_module_get(struct module *module)
{
 return !module || module_is_live(module);
}
static inline  __attribute__((always_inline)) void module_put(struct module *module)
{
}
static inline  __attribute__((always_inline)) void __module_get(struct module *module)
{
}
# 432 "linux-2.6/include/linux/module.h"
const char *module_address_lookup(unsigned long addr,
      unsigned long *symbolsize,
      unsigned long *offset,
      char **modname);


const struct exception_table_entry *search_module_extables(unsigned long addr);

int register_module_notifier(struct notifier_block * nb);
int unregister_module_notifier(struct notifier_block * nb);

extern void print_modules(void);

struct device_driver;
void module_add_driver(struct module *, struct device_driver *);
void module_remove_driver(struct device_driver *);
# 556 "linux-2.6/include/linux/module.h"
struct obsolete_modparm {
 char name[64];
 char type[64-sizeof(void *)];
 void *addr;
};

static inline  __attribute__((always_inline)) void MODULE_PARM_(void) { }
# 576 "linux-2.6/include/linux/module.h"
extern void  __attribute__((deprecated)) inter_module_register(const char *,
  struct module *, const void *);
extern void  __attribute__((deprecated)) inter_module_unregister(const char *);
extern const void *  __attribute__((deprecated)) inter_module_get(const char *);
extern const void *  __attribute__((deprecated)) inter_module_get_request(const char *,
  const char *);
extern void  __attribute__((deprecated)) inter_module_put(const char *);
# 12 "linux-2.6/net/core/sysctl_net_core.c" 2



typedef  int  _GLOBAL_170_T; extern  _GLOBAL_170_T  global_netdev_max_backlog[NUM_STACKS];   
typedef  int  _GLOBAL_171_T; extern  _GLOBAL_171_T  global_weight_p[NUM_STACKS];   
typedef  int  _GLOBAL_172_T; extern  _GLOBAL_172_T  global_no_cong_thresh[NUM_STACKS];   
typedef  int  _GLOBAL_173_T; extern  _GLOBAL_173_T  global_no_cong[NUM_STACKS];   
typedef  int  _GLOBAL_174_T; extern  _GLOBAL_174_T  global_lo_cong[NUM_STACKS];   
typedef  int  _GLOBAL_175_T; extern  _GLOBAL_175_T  global_mod_cong[NUM_STACKS];   
typedef  int  _GLOBAL_176_T; extern  _GLOBAL_176_T  global_netdev_fastroute[NUM_STACKS];   
typedef  int  _GLOBAL_177_T; extern  _GLOBAL_177_T  global_net_msg_cost[NUM_STACKS];   
typedef  int  _GLOBAL_178_T; extern  _GLOBAL_178_T  global_net_msg_burst[NUM_STACKS];   

typedef  __u32  _GLOBAL_179_T; extern  _GLOBAL_179_T  global_sysctl_wmem_max[NUM_STACKS];   
typedef  __u32  _GLOBAL_180_T; extern  _GLOBAL_180_T  global_sysctl_rmem_max[NUM_STACKS];   
typedef  __u32  _GLOBAL_181_T; extern  _GLOBAL_181_T  global_sysctl_wmem_default[NUM_STACKS];   
typedef  __u32  _GLOBAL_182_T; extern  _GLOBAL_182_T  global_sysctl_rmem_default[NUM_STACKS];   

typedef  int  _GLOBAL_183_T; extern  _GLOBAL_183_T  global_sysctl_core_destroy_delay[NUM_STACKS];   
typedef  int  _GLOBAL_184_T; extern  _GLOBAL_184_T  global_sysctl_optmem_max[NUM_STACKS];   
typedef  int  _GLOBAL_185_T; extern  _GLOBAL_185_T  global_sysctl_somaxconn[NUM_STACKS];   
# 43 "linux-2.6/net/core/sysctl_net_core.c"
char *net_sysctl_strdup(const char *s)
{
 char *rv = kmalloc(strlen(s)+1, (0x10 | 0x40 | 0x80));
 if (rv)
  strcpy(rv, s);
 return rv;
}

typedef  ctl_table _GLOBAL_186_T;  _GLOBAL_186_T  _GLOBAL_0_core_table_I [ ]  = { { . ctl_name  = NET_CORE_WMEM_MAX  , . procname  = "wmem_max"   , . data  = & global_sysctl_wmem_max[0]    , . maxlen  = sizeof ( int )    , . mode  = 0644   , . proc_handler  = & proc_dointvec    }  , { . ctl_name  = NET_CORE_RMEM_MAX  , . procname  = "rmem_max"   , . data  = & global_sysctl_rmem_max[0]    , . maxlen  = sizeof ( int )    , . mode  = 0644   , . proc_handler  = & proc_dointvec    }   , { . ctl_name  = NET_CORE_WMEM_DEFAULT  , . procname  = "wmem_default"   , . data  = & global_sysctl_wmem_default[0]    , . maxlen  = sizeof ( int )    , . mode  = 0644   , . proc_handler  = & proc_dointvec    }   , { . ctl_name  = NET_CORE_RMEM_DEFAULT  , . procname  = "rmem_default"   , . data  = & global_sysctl_rmem_default[0]    , . maxlen  = sizeof ( int )    , . mode  = 0644   , . proc_handler  = & proc_dointvec    }   , { . ctl_name  = NET_CORE_DEV_WEIGHT  , . procname  = "dev_weight"   , . data  = & global_weight_p[0]    , . maxlen  = sizeof ( int )    , . mode  = 0644   , . proc_handler  = & proc_dointvec    }   , { . ctl_name  = NET_CORE_MAX_BACKLOG  , . procname  = "netdev_max_backlog"   , . data  = & global_netdev_max_backlog[0]    , . maxlen  = sizeof ( int )    , . mode  = 0644   , . proc_handler  = & proc_dointvec    }   , { . ctl_name  = NET_CORE_NO_CONG_THRESH  , . procname  = "no_cong_thresh"   , . data  = & global_no_cong_thresh[0]    , . maxlen  = sizeof ( int )    , . mode  = 0644   , . proc_handler  = & proc_dointvec    }   , { . ctl_name  = NET_CORE_NO_CONG  , . procname  = "no_cong"   , . data  = & global_no_cong[0]    , . maxlen  = sizeof ( int )    , . mode  = 0644   , . proc_handler  = & proc_dointvec    }   , { . ctl_name  = NET_CORE_LO_CONG  , . procname  = "lo_cong"   , . data  = & global_lo_cong[0]    , . maxlen  = sizeof ( int )    , . mode  = 0644   , . proc_handler  = & proc_dointvec    }   , { . ctl_name  = NET_CORE_MOD_CONG  , . procname  = "mod_cong"   , . data  = & global_mod_cong[0]    , . maxlen  = sizeof ( int )    , . mode  = 0644   , . proc_handler  = & proc_dointvec    }   , { . ctl_name  = NET_CORE_MSG_COST  , . procname  = "message_cost"   , . data  = & global_net_msg_cost[0]    , . maxlen  = sizeof ( int )    , . mode  = 0644   , . proc_handler  = & proc_dointvec_jiffies    , . strategy  = & sysctl_jiffies    , }   , { . ctl_name  = NET_CORE_MSG_BURST  , . procname  = "message_burst"   , . data  = & global_net_msg_burst[0]    , . maxlen  = sizeof ( int )    , . mode  = 0644   , . proc_handler  = & proc_dointvec    , }   , { . ctl_name  = NET_CORE_OPTMEM_MAX  , . procname  = "optmem_max"   , . data  = & global_sysctl_optmem_max[0]    , . maxlen  = sizeof ( int )    , . mode  = 0644   , . proc_handler  = & proc_dointvec    }   , { . ctl_name  = NET_CORE_SOMAXCONN  , . procname  = "somaxconn"   , . data  = & global_sysctl_somaxconn[0]    , . maxlen  = sizeof ( int )    , . mode  = 0644   , . proc_handler  = & proc_dointvec    }   , { . ctl_name  = 0  }   }  ;  _GLOBAL_186_T  _GLOBAL_1_core_table_I [ ]  = { { . ctl_name  = NET_CORE_WMEM_MAX  , . procname  = "wmem_max"   , . data  = & global_sysctl_wmem_max[1]    , . maxlen  = sizeof ( int )    , . mode  = 0644   , . proc_handler  = & proc_dointvec    }  , { . ctl_name  = NET_CORE_RMEM_MAX  , . procname  = "rmem_max"   , . data  = & global_sysctl_rmem_max[1]    , . maxlen  = sizeof ( int )    , . mode  = 0644   , . proc_handler  = & proc_dointvec    }   , { . ctl_name  = NET_CORE_WMEM_DEFAULT  , . procname  = "wmem_default"   , . data  = & global_sysctl_wmem_default[1]    , . maxlen  = sizeof ( int )    , . mode  = 0644   , . proc_handler  = & proc_dointvec    }   , { . ctl_name  = NET_CORE_RMEM_DEFAULT  , . procname  = "rmem_default"   , . data  = & global_sysctl_rmem_default[1]    , . maxlen  = sizeof ( int )    , . mode  = 0644   , . proc_handler  = & proc_dointvec    }   , { . ctl_name  = NET_CORE_DEV_WEIGHT  , . procname  = "dev_weight"   , . data  = & global_weight_p[1]    , . maxlen  = sizeof ( int )    , . mode  = 0644   , . proc_handler  = & proc_dointvec    }   , { . ctl_name  = NET_CORE_MAX_BACKLOG  , . procname  = "netdev_max_backlog"   , . data  = & global_netdev_max_backlog[1]    , . maxlen  = sizeof ( int )    , . mode  = 0644   , . proc_handler  = & proc_dointvec    }   , { . ctl_name  = NET_CORE_NO_CONG_THRESH  , . procname  = "no_cong_thresh"   , . data  = & global_no_cong_thresh[1]    , . maxlen  = sizeof ( int )    , . mode  = 0644   , . proc_handler  = & proc_dointvec    }   , { . ctl_name  = NET_CORE_NO_CONG  , . procname  = "no_cong"   , . data  = & global_no_cong[1]    , . maxlen  = sizeof ( int )    , . mode  = 0644   , . proc_handler  = & proc_dointvec    }   , { . ctl_name  = NET_CORE_LO_CONG  , . procname  = "lo_cong"   , . data  = & global_lo_cong[1]    , . maxlen  = sizeof ( int )    , . mode  = 0644   , . proc_handler  = & proc_dointvec    }   , { . ctl_name  = NET_CORE_MOD_CONG  , . procname  = "mod_cong"   , . data  = & global_mod_cong[1]    , . maxlen  = sizeof ( int )    , . mode  = 0644   , . proc_handler  = & proc_dointvec    }   , { . ctl_name  = NET_CORE_MSG_COST  , . procname  = "message_cost"   , . data  = & global_net_msg_cost[1]    , . maxlen  = sizeof ( int )    , . mode  = 0644   , . proc_handler  = & proc_dointvec_jiffies    , . strategy  = & sysctl_jiffies    , }   , { . ctl_name  = NET_CORE_MSG_BURST  , . procname  = "message_burst"   , . data  = & global_net_msg_burst[1]    , . maxlen  = sizeof ( int )    , . mode  = 0644   , . proc_handler  = & proc_dointvec    , }   , { . ctl_name  = NET_CORE_OPTMEM_MAX  , . procname  = "optmem_max"   , . data  = & global_sysctl_optmem_max[1]    , . maxlen  = sizeof ( int )    , . mode  = 0644   , . proc_handler  = & proc_dointvec    }   , { . ctl_name  = NET_CORE_SOMAXCONN  , . procname  = "somaxconn"   , . data  = & global_sysctl_somaxconn[1]    , . maxlen  = sizeof ( int )    , . mode  = 0644   , . proc_handler  = & proc_dointvec    }   , { . ctl_name  = 0  }   }  ;  _GLOBAL_186_T  _GLOBAL_2_core_table_I [ ]  = { { . ctl_name  = NET_CORE_WMEM_MAX  , . procname  = "wmem_max"   , . data  = & global_sysctl_wmem_max[2]    , . maxlen  = sizeof ( int )    , . mode  = 0644   , . proc_handler  = & proc_dointvec    }  , { . ctl_name  = NET_CORE_RMEM_MAX  , . procname  = "rmem_max"   , . data  = & global_sysctl_rmem_max[2]    , . maxlen  = sizeof ( int )    , . mode  = 0644   , . proc_handler  = & proc_dointvec    }   , { . ctl_name  = NET_CORE_WMEM_DEFAULT  , . procname  = "wmem_default"   , . data  = & global_sysctl_wmem_default[2]    , . maxlen  = sizeof ( int )    , . mode  = 0644   , . proc_handler  = & proc_dointvec    }   , { . ctl_name  = NET_CORE_RMEM_DEFAULT  , . procname  = "rmem_default"   , . data  = & global_sysctl_rmem_default[2]    , . maxlen  = sizeof ( int )    , . mode  = 0644   , . proc_handler  = & proc_dointvec    }   , { . ctl_name  = NET_CORE_DEV_WEIGHT  , . procname  = "dev_weight"   , . data  = & global_weight_p[2]    , . maxlen  = sizeof ( int )    , . mode  = 0644   , . proc_handler  = & proc_dointvec    }   , { . ctl_name  = NET_CORE_MAX_BACKLOG  , . procname  = "netdev_max_backlog"   , . data  = & global_netdev_max_backlog[2]    , . maxlen  = sizeof ( int )    , . mode  = 0644   , . proc_handler  = & proc_dointvec    }   , { . ctl_name  = NET_CORE_NO_CONG_THRESH  , . procname  = "no_cong_thresh"   , . data  = & global_no_cong_thresh[2]    , . maxlen  = sizeof ( int )    , . mode  = 0644   , . proc_handler  = & proc_dointvec    }   , { . ctl_name  = NET_CORE_NO_CONG  , . procname  = "no_cong"   , . data  = & global_no_cong[2]    , . maxlen  = sizeof ( int )    , . mode  = 0644   , . proc_handler  = & proc_dointvec    }   , { . ctl_name  = NET_CORE_LO_CONG  , . procname  = "lo_cong"   , . data  = & global_lo_cong[2]    , . maxlen  = sizeof ( int )    , . mode  = 0644   , . proc_handler  = & proc_dointvec    }   , { . ctl_name  = NET_CORE_MOD_CONG  , . procname  = "mod_cong"   , . data  = & global_mod_cong[2]    , . maxlen  = sizeof ( int )    , . mode  = 0644   , . proc_handler  = & proc_dointvec    }   , { . ctl_name  = NET_CORE_MSG_COST  , . procname  = "message_cost"   , . data  = & global_net_msg_cost[2]    , . maxlen  = sizeof ( int )    , . mode  = 0644   , . proc_handler  = & proc_dointvec_jiffies    , . strategy  = & sysctl_jiffies    , }   , { . ctl_name  = NET_CORE_MSG_BURST  , . procname  = "message_burst"   , . data  = & global_net_msg_burst[2]    , . maxlen  = sizeof ( int )    , . mode  = 0644   , . proc_handler  = & proc_dointvec    , }   , { . ctl_name  = NET_CORE_OPTMEM_MAX  , . procname  = "optmem_max"   , . data  = & global_sysctl_optmem_max[2]    , . maxlen  = sizeof ( int )    , . mode  = 0644   , . proc_handler  = & proc_dointvec    }   , { . ctl_name  = NET_CORE_SOMAXCONN  , . procname  = "somaxconn"   , . data  = & global_sysctl_somaxconn[2]    , . maxlen  = sizeof ( int )    , . mode  = 0644   , . proc_handler  = & proc_dointvec    }   , { . ctl_name  = 0  }   }  ;  _GLOBAL_186_T  _GLOBAL_3_core_table_I [ ]  = { { . ctl_name  = NET_CORE_WMEM_MAX  , . procname  = "wmem_max"   , . data  = & global_sysctl_wmem_max[3]    , . maxlen  = sizeof ( int )    , . mode  = 0644   , . proc_handler  = & proc_dointvec    }  , { . ctl_name  = NET_CORE_RMEM_MAX  , . procname  = "rmem_max"   , . data  = & global_sysctl_rmem_max[3]    , . maxlen  = sizeof ( int )    , . mode  = 0644   , . proc_handler  = & proc_dointvec    }   , { . ctl_name  = NET_CORE_WMEM_DEFAULT  , . procname  = "wmem_default"   , . data  = & global_sysctl_wmem_default[3]    , . maxlen  = sizeof ( int )    , . mode  = 0644   , . proc_handler  = & proc_dointvec    }   , { . ctl_name  = NET_CORE_RMEM_DEFAULT  , . procname  = "rmem_default"   , . data  = & global_sysctl_rmem_default[3]    , . maxlen  = sizeof ( int )    , . mode  = 0644   , . proc_handler  = & proc_dointvec    }   , { . ctl_name  = NET_CORE_DEV_WEIGHT  , . procname  = "dev_weight"   , . data  = & global_weight_p[3]    , . maxlen  = sizeof ( int )    , . mode  = 0644   , . proc_handler  = & proc_dointvec    }   , { . ctl_name  = NET_CORE_MAX_BACKLOG  , . procname  = "netdev_max_backlog"   , . data  = & global_netdev_max_backlog[3]    , . maxlen  = sizeof ( int )    , . mode  = 0644   , . proc_handler  = & proc_dointvec    }   , { . ctl_name  = NET_CORE_NO_CONG_THRESH  , . procname  = "no_cong_thresh"   , . data  = & global_no_cong_thresh[3]    , . maxlen  = sizeof ( int )    , . mode  = 0644   , . proc_handler  = & proc_dointvec    }   , { . ctl_name  = NET_CORE_NO_CONG  , . procname  = "no_cong"   , . data  = & global_no_cong[3]    , . maxlen  = sizeof ( int )    , . mode  = 0644   , . proc_handler  = & proc_dointvec    }   , { . ctl_name  = NET_CORE_LO_CONG  , . procname  = "lo_cong"   , . data  = & global_lo_cong[3]    , . maxlen  = sizeof ( int )    , . mode  = 0644   , . proc_handler  = & proc_dointvec    }   , { . ctl_name  = NET_CORE_MOD_CONG  , . procname  = "mod_cong"   , . data  = & global_mod_cong[3]    , . maxlen  = sizeof ( int )    , . mode  = 0644   , . proc_handler  = & proc_dointvec    }   , { . ctl_name  = NET_CORE_MSG_COST  , . procname  = "message_cost"   , . data  = & global_net_msg_cost[3]    , . maxlen  = sizeof ( int )    , . mode  = 0644   , . proc_handler  = & proc_dointvec_jiffies    , . strategy  = & sysctl_jiffies    , }   , { . ctl_name  = NET_CORE_MSG_BURST  , . procname  = "message_burst"   , . data  = & global_net_msg_burst[3]    , . maxlen  = sizeof ( int )    , . mode  = 0644   , . proc_handler  = & proc_dointvec    , }   , { . ctl_name  = NET_CORE_OPTMEM_MAX  , . procname  = "optmem_max"   , . data  = & global_sysctl_optmem_max[3]    , . maxlen  = sizeof ( int )    , . mode  = 0644   , . proc_handler  = & proc_dointvec    }   , { . ctl_name  = NET_CORE_SOMAXCONN  , . procname  = "somaxconn"   , . data  = & global_sysctl_somaxconn[3]    , . maxlen  = sizeof ( int )    , . mode  = 0644   , . proc_handler  = & proc_dointvec    }   , { . ctl_name  = 0  }   }  ;  _GLOBAL_186_T  _GLOBAL_4_core_table_I [ ]  = { { . ctl_name  = NET_CORE_WMEM_MAX  , . procname  = "wmem_max"   , . data  = & global_sysctl_wmem_max[4]    , . maxlen  = sizeof ( int )    , . mode  = 0644   , . proc_handler  = & proc_dointvec    }  , { . ctl_name  = NET_CORE_RMEM_MAX  , . procname  = "rmem_max"   , . data  = & global_sysctl_rmem_max[4]    , . maxlen  = sizeof ( int )    , . mode  = 0644   , . proc_handler  = & proc_dointvec    }   , { . ctl_name  = NET_CORE_WMEM_DEFAULT  , . procname  = "wmem_default"   , . data  = & global_sysctl_wmem_default[4]    , . maxlen  = sizeof ( int )    , . mode  = 0644   , . proc_handler  = & proc_dointvec    }   , { . ctl_name  = NET_CORE_RMEM_DEFAULT  , . procname  = "rmem_default"   , . data  = & global_sysctl_rmem_default[4]    , . maxlen  = sizeof ( int )    , . mode  = 0644   , . proc_handler  = & proc_dointvec    }   , { . ctl_name  = NET_CORE_DEV_WEIGHT  , . procname  = "dev_weight"   , . data  = & global_weight_p[4]    , . maxlen  = sizeof ( int )    , . mode  = 0644   , . proc_handler  = & proc_dointvec    }   , { . ctl_name  = NET_CORE_MAX_BACKLOG  , . procname  = "netdev_max_backlog"   , . data  = & global_netdev_max_backlog[4]    , . maxlen  = sizeof ( int )    , . mode  = 0644   , . proc_handler  = & proc_dointvec    }   , { . ctl_name  = NET_CORE_NO_CONG_THRESH  , . procname  = "no_cong_thresh"   , . data  = & global_no_cong_thresh[4]    , . maxlen  = sizeof ( int )    , . mode  = 0644   , . proc_handler  = & proc_dointvec    }   , { . ctl_name  = NET_CORE_NO_CONG  , . procname  = "no_cong"   , . data  = & global_no_cong[4]    , . maxlen  = sizeof ( int )    , . mode  = 0644   , . proc_handler  = & proc_dointvec    }   , { . ctl_name  = NET_CORE_LO_CONG  , . procname  = "lo_cong"   , . data  = & global_lo_cong[4]    , . maxlen  = sizeof ( int )    , . mode  = 0644   , . proc_handler  = & proc_dointvec    }   , { . ctl_name  = NET_CORE_MOD_CONG  , . procname  = "mod_cong"   , . data  = & global_mod_cong[4]    , . maxlen  = sizeof ( int )    , . mode  = 0644   , . proc_handler  = & proc_dointvec    }   , { . ctl_name  = NET_CORE_MSG_COST  , . procname  = "message_cost"   , . data  = & global_net_msg_cost[4]    , . maxlen  = sizeof ( int )    , . mode  = 0644   , . proc_handler  = & proc_dointvec_jiffies    , . strategy  = & sysctl_jiffies    , }   , { . ctl_name  = NET_CORE_MSG_BURST  , . procname  = "message_burst"   , . data  = & global_net_msg_burst[4]    , . maxlen  = sizeof ( int )    , . mode  = 0644   , . proc_handler  = & proc_dointvec    , }   , { . ctl_name  = NET_CORE_OPTMEM_MAX  , . procname  = "optmem_max"   , . data  = & global_sysctl_optmem_max[4]    , . maxlen  = sizeof ( int )    , . mode  = 0644   , . proc_handler  = & proc_dointvec    }   , { . ctl_name  = NET_CORE_SOMAXCONN  , . procname  = "somaxconn"   , . data  = & global_sysctl_somaxconn[4]    , . maxlen  = sizeof ( int )    , . mode  = 0644   , . proc_handler  = & proc_dointvec    }   , { . ctl_name  = 0  }   }  ;  _GLOBAL_186_T  _GLOBAL_5_core_table_I [ ]  = { { . ctl_name  = NET_CORE_WMEM_MAX  , . procname  = "wmem_max"   , . data  = & global_sysctl_wmem_max[5]    , . maxlen  = sizeof ( int )    , . mode  = 0644   , . proc_handler  = & proc_dointvec    }  , { . ctl_name  = NET_CORE_RMEM_MAX  , . procname  = "rmem_max"   , . data  = & global_sysctl_rmem_max[5]    , . maxlen  = sizeof ( int )    , . mode  = 0644   , . proc_handler  = & proc_dointvec    }   , { . ctl_name  = NET_CORE_WMEM_DEFAULT  , . procname  = "wmem_default"   , . data  = & global_sysctl_wmem_default[5]    , . maxlen  = sizeof ( int )    , . mode  = 0644   , . proc_handler  = & proc_dointvec    }   , { . ctl_name  = NET_CORE_RMEM_DEFAULT  , . procname  = "rmem_default"   , . data  = & global_sysctl_rmem_default[5]    , . maxlen  = sizeof ( int )    , . mode  = 0644   , . proc_handler  = & proc_dointvec    }   , { . ctl_name  = NET_CORE_DEV_WEIGHT  , . procname  = "dev_weight"   , . data  = & global_weight_p[5]    , . maxlen  = sizeof ( int )    , . mode  = 0644   , . proc_handler  = & proc_dointvec    }   , { . ctl_name  = NET_CORE_MAX_BACKLOG  , . procname  = "netdev_max_backlog"   , . data  = & global_netdev_max_backlog[5]    , . maxlen  = sizeof ( int )    , . mode  = 0644   , . proc_handler  = & proc_dointvec    }   , { . ctl_name  = NET_CORE_NO_CONG_THRESH  , . procname  = "no_cong_thresh"   , . data  = & global_no_cong_thresh[5]    , . maxlen  = sizeof ( int )    , . mode  = 0644   , . proc_handler  = & proc_dointvec    }   , { . ctl_name  = NET_CORE_NO_CONG  , . procname  = "no_cong"   , . data  = & global_no_cong[5]    , . maxlen  = sizeof ( int )    , . mode  = 0644   , . proc_handler  = & proc_dointvec    }   , { . ctl_name  = NET_CORE_LO_CONG  , . procname  = "lo_cong"   , . data  = & global_lo_cong[5]    , . maxlen  = sizeof ( int )    , . mode  = 0644   , . proc_handler  = & proc_dointvec    }   , { . ctl_name  = NET_CORE_MOD_CONG  , . procname  = "mod_cong"   , . data  = & global_mod_cong[5]    , . maxlen  = sizeof ( int )    , . mode  = 0644   , . proc_handler  = & proc_dointvec    }   , { . ctl_name  = NET_CORE_MSG_COST  , . procname  = "message_cost"   , . data  = & global_net_msg_cost[5]    , . maxlen  = sizeof ( int )    , . mode  = 0644   , . proc_handler  = & proc_dointvec_jiffies    , . strategy  = & sysctl_jiffies    , }   , { . ctl_name  = NET_CORE_MSG_BURST  , . procname  = "message_burst"   , . data  = & global_net_msg_burst[5]    , . maxlen  = sizeof ( int )    , . mode  = 0644   , . proc_handler  = & proc_dointvec    , }   , { . ctl_name  = NET_CORE_OPTMEM_MAX  , . procname  = "optmem_max"   , . data  = & global_sysctl_optmem_max[5]    , . maxlen  = sizeof ( int )    , . mode  = 0644   , . proc_handler  = & proc_dointvec    }   , { . ctl_name  = NET_CORE_SOMAXCONN  , . procname  = "somaxconn"   , . data  = & global_sysctl_somaxconn[5]    , . maxlen  = sizeof ( int )    , . mode  = 0644   , . proc_handler  = & proc_dointvec    }   , { . ctl_name  = 0  }   }  ;  _GLOBAL_186_T  _GLOBAL_6_core_table_I [ ]  = { { . ctl_name  = NET_CORE_WMEM_MAX  , . procname  = "wmem_max"   , . data  = & global_sysctl_wmem_max[6]    , . maxlen  = sizeof ( int )    , . mode  = 0644   , . proc_handler  = & proc_dointvec    }  , { . ctl_name  = NET_CORE_RMEM_MAX  , . procname  = "rmem_max"   , . data  = & global_sysctl_rmem_max[6]    , . maxlen  = sizeof ( int )    , . mode  = 0644   , . proc_handler  = & proc_dointvec    }   , { . ctl_name  = NET_CORE_WMEM_DEFAULT  , . procname  = "wmem_default"   , . data  = & global_sysctl_wmem_default[6]    , . maxlen  = sizeof ( int )    , . mode  = 0644   , . proc_handler  = & proc_dointvec    }   , { . ctl_name  = NET_CORE_RMEM_DEFAULT  , . procname  = "rmem_default"   , . data  = & global_sysctl_rmem_default[6]    , . maxlen  = sizeof ( int )    , . mode  = 0644   , . proc_handler  = & proc_dointvec    }   , { . ctl_name  = NET_CORE_DEV_WEIGHT  , . procname  = "dev_weight"   , . data  = & global_weight_p[6]    , . maxlen  = sizeof ( int )    , . mode  = 0644   , . proc_handler  = & proc_dointvec    }   , { . ctl_name  = NET_CORE_MAX_BACKLOG  , . procname  = "netdev_max_backlog"   , . data  = & global_netdev_max_backlog[6]    , . maxlen  = sizeof ( int )    , . mode  = 0644   , . proc_handler  = & proc_dointvec    }   , { . ctl_name  = NET_CORE_NO_CONG_THRESH  , . procname  = "no_cong_thresh"   , . data  = & global_no_cong_thresh[6]    , . maxlen  = sizeof ( int )    , . mode  = 0644   , . proc_handler  = & proc_dointvec    }   , { . ctl_name  = NET_CORE_NO_CONG  , . procname  = "no_cong"   , . data  = & global_no_cong[6]    , . maxlen  = sizeof ( int )    , . mode  = 0644   , . proc_handler  = & proc_dointvec    }   , { . ctl_name  = NET_CORE_LO_CONG  , . procname  = "lo_cong"   , . data  = & global_lo_cong[6]    , . maxlen  = sizeof ( int )    , . mode  = 0644   , . proc_handler  = & proc_dointvec    }   , { . ctl_name  = NET_CORE_MOD_CONG  , . procname  = "mod_cong"   , . data  = & global_mod_cong[6]    , . maxlen  = sizeof ( int )    , . mode  = 0644   , . proc_handler  = & proc_dointvec    }   , { . ctl_name  = NET_CORE_MSG_COST  , . procname  = "message_cost"   , . data  = & global_net_msg_cost[6]    , . maxlen  = sizeof ( int )    , . mode  = 0644   , . proc_handler  = & proc_dointvec_jiffies    , . strategy  = & sysctl_jiffies    , }   , { . ctl_name  = NET_CORE_MSG_BURST  , . procname  = "message_burst"   , . data  = & global_net_msg_burst[6]    , . maxlen  = sizeof ( int )    , . mode  = 0644   , . proc_handler  = & proc_dointvec    , }   , { . ctl_name  = NET_CORE_OPTMEM_MAX  , . procname  = "optmem_max"   , . data  = & global_sysctl_optmem_max[6]    , . maxlen  = sizeof ( int )    , . mode  = 0644   , . proc_handler  = & proc_dointvec    }   , { . ctl_name  = NET_CORE_SOMAXCONN  , . procname  = "somaxconn"   , . data  = & global_sysctl_somaxconn[6]    , . maxlen  = sizeof ( int )    , . mode  = 0644   , . proc_handler  = & proc_dointvec    }   , { . ctl_name  = 0  }   }  ;  _GLOBAL_186_T  _GLOBAL_7_core_table_I [ ]  = { { . ctl_name  = NET_CORE_WMEM_MAX  , . procname  = "wmem_max"   , . data  = & global_sysctl_wmem_max[7]    , . maxlen  = sizeof ( int )    , . mode  = 0644   , . proc_handler  = & proc_dointvec    }  , { . ctl_name  = NET_CORE_RMEM_MAX  , . procname  = "rmem_max"   , . data  = & global_sysctl_rmem_max[7]    , . maxlen  = sizeof ( int )    , . mode  = 0644   , . proc_handler  = & proc_dointvec    }   , { . ctl_name  = NET_CORE_WMEM_DEFAULT  , . procname  = "wmem_default"   , . data  = & global_sysctl_wmem_default[7]    , . maxlen  = sizeof ( int )    , . mode  = 0644   , . proc_handler  = & proc_dointvec    }   , { . ctl_name  = NET_CORE_RMEM_DEFAULT  , . procname  = "rmem_default"   , . data  = & global_sysctl_rmem_default[7]    , . maxlen  = sizeof ( int )    , . mode  = 0644   , . proc_handler  = & proc_dointvec    }   , { . ctl_name  = NET_CORE_DEV_WEIGHT  , . procname  = "dev_weight"   , . data  = & global_weight_p[7]    , . maxlen  = sizeof ( int )    , . mode  = 0644   , . proc_handler  = & proc_dointvec    }   , { . ctl_name  = NET_CORE_MAX_BACKLOG  , . procname  = "netdev_max_backlog"   , . data  = & global_netdev_max_backlog[7]    , . maxlen  = sizeof ( int )    , . mode  = 0644   , . proc_handler  = & proc_dointvec    }   , { . ctl_name  = NET_CORE_NO_CONG_THRESH  , . procname  = "no_cong_thresh"   , . data  = & global_no_cong_thresh[7]    , . maxlen  = sizeof ( int )    , . mode  = 0644   , . proc_handler  = & proc_dointvec    }   , { . ctl_name  = NET_CORE_NO_CONG  , . procname  = "no_cong"   , . data  = & global_no_cong[7]    , . maxlen  = sizeof ( int )    , . mode  = 0644   , . proc_handler  = & proc_dointvec    }   , { . ctl_name  = NET_CORE_LO_CONG  , . procname  = "lo_cong"   , . data  = & global_lo_cong[7]    , . maxlen  = sizeof ( int )    , . mode  = 0644   , . proc_handler  = & proc_dointvec    }   , { . ctl_name  = NET_CORE_MOD_CONG  , . procname  = "mod_cong"   , . data  = & global_mod_cong[7]    , . maxlen  = sizeof ( int )    , . mode  = 0644   , . proc_handler  = & proc_dointvec    }   , { . ctl_name  = NET_CORE_MSG_COST  , . procname  = "message_cost"   , . data  = & global_net_msg_cost[7]    , . maxlen  = sizeof ( int )    , . mode  = 0644   , . proc_handler  = & proc_dointvec_jiffies    , . strategy  = & sysctl_jiffies    , }   , { . ctl_name  = NET_CORE_MSG_BURST  , . procname  = "message_burst"   , . data  = & global_net_msg_burst[7]    , . maxlen  = sizeof ( int )    , . mode  = 0644   , . proc_handler  = & proc_dointvec    , }   , { . ctl_name  = NET_CORE_OPTMEM_MAX  , . procname  = "optmem_max"   , . data  = & global_sysctl_optmem_max[7]    , . maxlen  = sizeof ( int )    , . mode  = 0644   , . proc_handler  = & proc_dointvec    }   , { . ctl_name  = NET_CORE_SOMAXCONN  , . procname  = "somaxconn"   , . data  = & global_sysctl_somaxconn[7]    , . maxlen  = sizeof ( int )    , . mode  = 0644   , . proc_handler  = & proc_dointvec    }   , { . ctl_name  = 0  }   }  ;  _GLOBAL_186_T  _GLOBAL_8_core_table_I [ ]  = { { . ctl_name  = NET_CORE_WMEM_MAX  , . procname  = "wmem_max"   , . data  = & global_sysctl_wmem_max[8]    , . maxlen  = sizeof ( int )    , . mode  = 0644   , . proc_handler  = & proc_dointvec    }  , { . ctl_name  = NET_CORE_RMEM_MAX  , . procname  = "rmem_max"   , . data  = & global_sysctl_rmem_max[8]    , . maxlen  = sizeof ( int )    , . mode  = 0644   , . proc_handler  = & proc_dointvec    }   , { . ctl_name  = NET_CORE_WMEM_DEFAULT  , . procname  = "wmem_default"   , . data  = & global_sysctl_wmem_default[8]    , . maxlen  = sizeof ( int )    , . mode  = 0644   , . proc_handler  = & proc_dointvec    }   , { . ctl_name  = NET_CORE_RMEM_DEFAULT  , . procname  = "rmem_default"   , . data  = & global_sysctl_rmem_default[8]    , . maxlen  = sizeof ( int )    , . mode  = 0644   , . proc_handler  = & proc_dointvec    }   , { . ctl_name  = NET_CORE_DEV_WEIGHT  , . procname  = "dev_weight"   , . data  = & global_weight_p[8]    , . maxlen  = sizeof ( int )    , . mode  = 0644   , . proc_handler  = & proc_dointvec    }   , { . ctl_name  = NET_CORE_MAX_BACKLOG  , . procname  = "netdev_max_backlog"   , . data  = & global_netdev_max_backlog[8]    , . maxlen  = sizeof ( int )    , . mode  = 0644   , . proc_handler  = & proc_dointvec    }   , { . ctl_name  = NET_CORE_NO_CONG_THRESH  , . procname  = "no_cong_thresh"   , . data  = & global_no_cong_thresh[8]    , . maxlen  = sizeof ( int )    , . mode  = 0644   , . proc_handler  = & proc_dointvec    }   , { . ctl_name  = NET_CORE_NO_CONG  , . procname  = "no_cong"   , . data  = & global_no_cong[8]    , . maxlen  = sizeof ( int )    , . mode  = 0644   , . proc_handler  = & proc_dointvec    }   , { . ctl_name  = NET_CORE_LO_CONG  , . procname  = "lo_cong"   , . data  = & global_lo_cong[8]    , . maxlen  = sizeof ( int )    , . mode  = 0644   , . proc_handler  = & proc_dointvec    }   , { . ctl_name  = NET_CORE_MOD_CONG  , . procname  = "mod_cong"   , . data  = & global_mod_cong[8]    , . maxlen  = sizeof ( int )    , . mode  = 0644   , . proc_handler  = & proc_dointvec    }   , { . ctl_name  = NET_CORE_MSG_COST  , . procname  = "message_cost"   , . data  = & global_net_msg_cost[8]    , . maxlen  = sizeof ( int )    , . mode  = 0644   , . proc_handler  = & proc_dointvec_jiffies    , . strategy  = & sysctl_jiffies    , }   , { . ctl_name  = NET_CORE_MSG_BURST  , . procname  = "message_burst"   , . data  = & global_net_msg_burst[8]    , . maxlen  = sizeof ( int )    , . mode  = 0644   , . proc_handler  = & proc_dointvec    , }   , { . ctl_name  = NET_CORE_OPTMEM_MAX  , . procname  = "optmem_max"   , . data  = & global_sysctl_optmem_max[8]    , . maxlen  = sizeof ( int )    , . mode  = 0644   , . proc_handler  = & proc_dointvec    }   , { . ctl_name  = NET_CORE_SOMAXCONN  , . procname  = "somaxconn"   , . data  = & global_sysctl_somaxconn[8]    , . maxlen  = sizeof ( int )    , . mode  = 0644   , . proc_handler  = & proc_dointvec    }   , { . ctl_name  = 0  }   }  ;  _GLOBAL_186_T  _GLOBAL_9_core_table_I [ ]  = { { . ctl_name  = NET_CORE_WMEM_MAX  , . procname  = "wmem_max"   , . data  = & global_sysctl_wmem_max[9]    , . maxlen  = sizeof ( int )    , . mode  = 0644   , . proc_handler  = & proc_dointvec    }  , { . ctl_name  = NET_CORE_RMEM_MAX  , . procname  = "rmem_max"   , . data  = & global_sysctl_rmem_max[9]    , . maxlen  = sizeof ( int )    , . mode  = 0644   , . proc_handler  = & proc_dointvec    }   , { . ctl_name  = NET_CORE_WMEM_DEFAULT  , . procname  = "wmem_default"   , . data  = & global_sysctl_wmem_default[9]    , . maxlen  = sizeof ( int )    , . mode  = 0644   , . proc_handler  = & proc_dointvec    }   , { . ctl_name  = NET_CORE_RMEM_DEFAULT  , . procname  = "rmem_default"   , . data  = & global_sysctl_rmem_default[9]    , . maxlen  = sizeof ( int )    , . mode  = 0644   , . proc_handler  = & proc_dointvec    }   , { . ctl_name  = NET_CORE_DEV_WEIGHT  , . procname  = "dev_weight"   , . data  = & global_weight_p[9]    , . maxlen  = sizeof ( int )    , . mode  = 0644   , . proc_handler  = & proc_dointvec    }   , { . ctl_name  = NET_CORE_MAX_BACKLOG  , . procname  = "netdev_max_backlog"   , . data  = & global_netdev_max_backlog[9]    , . maxlen  = sizeof ( int )    , . mode  = 0644   , . proc_handler  = & proc_dointvec    }   , { . ctl_name  = NET_CORE_NO_CONG_THRESH  , . procname  = "no_cong_thresh"   , . data  = & global_no_cong_thresh[9]    , . maxlen  = sizeof ( int )    , . mode  = 0644   , . proc_handler  = & proc_dointvec    }   , { . ctl_name  = NET_CORE_NO_CONG  , . procname  = "no_cong"   , . data  = & global_no_cong[9]    , . maxlen  = sizeof ( int )    , . mode  = 0644   , . proc_handler  = & proc_dointvec    }   , { . ctl_name  = NET_CORE_LO_CONG  , . procname  = "lo_cong"   , . data  = & global_lo_cong[9]    , . maxlen  = sizeof ( int )    , . mode  = 0644   , . proc_handler  = & proc_dointvec    }   , { . ctl_name  = NET_CORE_MOD_CONG  , . procname  = "mod_cong"   , . data  = & global_mod_cong[9]    , . maxlen  = sizeof ( int )    , . mode  = 0644   , . proc_handler  = & proc_dointvec    }   , { . ctl_name  = NET_CORE_MSG_COST  , . procname  = "message_cost"   , . data  = & global_net_msg_cost[9]    , . maxlen  = sizeof ( int )    , . mode  = 0644   , . proc_handler  = & proc_dointvec_jiffies    , . strategy  = & sysctl_jiffies    , }   , { . ctl_name  = NET_CORE_MSG_BURST  , . procname  = "message_burst"   , . data  = & global_net_msg_burst[9]    , . maxlen  = sizeof ( int )    , . mode  = 0644   , . proc_handler  = & proc_dointvec    , }   , { . ctl_name  = NET_CORE_OPTMEM_MAX  , . procname  = "optmem_max"   , . data  = & global_sysctl_optmem_max[9]    , . maxlen  = sizeof ( int )    , . mode  = 0644   , . proc_handler  = & proc_dointvec    }   , { . ctl_name  = NET_CORE_SOMAXCONN  , . procname  = "somaxconn"   , . data  = & global_sysctl_somaxconn[9]    , . maxlen  = sizeof ( int )    , . mode  = 0644   , . proc_handler  = & proc_dointvec    }   , { . ctl_name  = 0  }   }  ;  _GLOBAL_186_T  _GLOBAL_10_core_table_I [ ]  = { { . ctl_name  = NET_CORE_WMEM_MAX  , . procname  = "wmem_max"   , . data  = & global_sysctl_wmem_max[10]    , . maxlen  = sizeof ( int )    , . mode  = 0644   , . proc_handler  = & proc_dointvec    }  , { . ctl_name  = NET_CORE_RMEM_MAX  , . procname  = "rmem_max"   , . data  = & global_sysctl_rmem_max[10]    , . maxlen  = sizeof ( int )    , . mode  = 0644   , . proc_handler  = & proc_dointvec    }   , { . ctl_name  = NET_CORE_WMEM_DEFAULT  , . procname  = "wmem_default"   , . data  = & global_sysctl_wmem_default[10]    , . maxlen  = sizeof ( int )    , . mode  = 0644   , . proc_handler  = & proc_dointvec    }   , { . ctl_name  = NET_CORE_RMEM_DEFAULT  , . procname  = "rmem_default"   , . data  = & global_sysctl_rmem_default[10]    , . maxlen  = sizeof ( int )    , . mode  = 0644   , . proc_handler  = & proc_dointvec    }   , { . ctl_name  = NET_CORE_DEV_WEIGHT  , . procname  = "dev_weight"   , . data  = & global_weight_p[10]    , . maxlen  = sizeof ( int )    , . mode  = 0644   , . proc_handler  = & proc_dointvec    }   , { . ctl_name  = NET_CORE_MAX_BACKLOG  , . procname  = "netdev_max_backlog"   , . data  = & global_netdev_max_backlog[10]    , . maxlen  = sizeof ( int )    , . mode  = 0644   , . proc_handler  = & proc_dointvec    }   , { . ctl_name  = NET_CORE_NO_CONG_THRESH  , . procname  = "no_cong_thresh"   , . data  = & global_no_cong_thresh[10]    , . maxlen  = sizeof ( int )    , . mode  = 0644   , . proc_handler  = & proc_dointvec    }   , { . ctl_name  = NET_CORE_NO_CONG  , . procname  = "no_cong"   , . data  = & global_no_cong[10]    , . maxlen  = sizeof ( int )    , . mode  = 0644   , . proc_handler  = & proc_dointvec    }   , { . ctl_name  = NET_CORE_LO_CONG  , . procname  = "lo_cong"   , . data  = & global_lo_cong[10]    , . maxlen  = sizeof ( int )    , . mode  = 0644   , . proc_handler  = & proc_dointvec    }   , { . ctl_name  = NET_CORE_MOD_CONG  , . procname  = "mod_cong"   , . data  = & global_mod_cong[10]    , . maxlen  = sizeof ( int )    , . mode  = 0644   , . proc_handler  = & proc_dointvec    }   , { . ctl_name  = NET_CORE_MSG_COST  , . procname  = "message_cost"   , . data  = & global_net_msg_cost[10]    , . maxlen  = sizeof ( int )    , . mode  = 0644   , . proc_handler  = & proc_dointvec_jiffies    , . strategy  = & sysctl_jiffies    , }   , { . ctl_name  = NET_CORE_MSG_BURST  , . procname  = "message_burst"   , . data  = & global_net_msg_burst[10]    , . maxlen  = sizeof ( int )    , . mode  = 0644   , . proc_handler  = & proc_dointvec    , }   , { . ctl_name  = NET_CORE_OPTMEM_MAX  , . procname  = "optmem_max"   , . data  = & global_sysctl_optmem_max[10]    , . maxlen  = sizeof ( int )    , . mode  = 0644   , . proc_handler  = & proc_dointvec    }   , { . ctl_name  = NET_CORE_SOMAXCONN  , . procname  = "somaxconn"   , . data  = & global_sysctl_somaxconn[10]    , . maxlen  = sizeof ( int )    , . mode  = 0644   , . proc_handler  = & proc_dointvec    }   , { . ctl_name  = 0  }   }  ;  _GLOBAL_186_T  _GLOBAL_11_core_table_I [ ]  = { { . ctl_name  = NET_CORE_WMEM_MAX  , . procname  = "wmem_max"   , . data  = & global_sysctl_wmem_max[11]    , . maxlen  = sizeof ( int )    , . mode  = 0644   , . proc_handler  = & proc_dointvec    }  , { . ctl_name  = NET_CORE_RMEM_MAX  , . procname  = "rmem_max"   , . data  = & global_sysctl_rmem_max[11]    , . maxlen  = sizeof ( int )    , . mode  = 0644   , . proc_handler  = & proc_dointvec    }   , { . ctl_name  = NET_CORE_WMEM_DEFAULT  , . procname  = "wmem_default"   , . data  = & global_sysctl_wmem_default[11]    , . maxlen  = sizeof ( int )    , . mode  = 0644   , . proc_handler  = & proc_dointvec    }   , { . ctl_name  = NET_CORE_RMEM_DEFAULT  , . procname  = "rmem_default"   , . data  = & global_sysctl_rmem_default[11]    , . maxlen  = sizeof ( int )    , . mode  = 0644   , . proc_handler  = & proc_dointvec    }   , { . ctl_name  = NET_CORE_DEV_WEIGHT  , . procname  = "dev_weight"   , . data  = & global_weight_p[11]    , . maxlen  = sizeof ( int )    , . mode  = 0644   , . proc_handler  = & proc_dointvec    }   , { . ctl_name  = NET_CORE_MAX_BACKLOG  , . procname  = "netdev_max_backlog"   , . data  = & global_netdev_max_backlog[11]    , . maxlen  = sizeof ( int )    , . mode  = 0644   , . proc_handler  = & proc_dointvec    }   , { . ctl_name  = NET_CORE_NO_CONG_THRESH  , . procname  = "no_cong_thresh"   , . data  = & global_no_cong_thresh[11]    , . maxlen  = sizeof ( int )    , . mode  = 0644   , . proc_handler  = & proc_dointvec    }   , { . ctl_name  = NET_CORE_NO_CONG  , . procname  = "no_cong"   , . data  = & global_no_cong[11]    , . maxlen  = sizeof ( int )    , . mode  = 0644   , . proc_handler  = & proc_dointvec    }   , { . ctl_name  = NET_CORE_LO_CONG  , . procname  = "lo_cong"   , . data  = & global_lo_cong[11]    , . maxlen  = sizeof ( int )    , . mode  = 0644   , . proc_handler  = & proc_dointvec    }   , { . ctl_name  = NET_CORE_MOD_CONG  , . procname  = "mod_cong"   , . data  = & global_mod_cong[11]    , . maxlen  = sizeof ( int )    , . mode  = 0644   , . proc_handler  = & proc_dointvec    }   , { . ctl_name  = NET_CORE_MSG_COST  , . procname  = "message_cost"   , . data  = & global_net_msg_cost[11]    , . maxlen  = sizeof ( int )    , . mode  = 0644   , . proc_handler  = & proc_dointvec_jiffies    , . strategy  = & sysctl_jiffies    , }   , { . ctl_name  = NET_CORE_MSG_BURST  , . procname  = "message_burst"   , . data  = & global_net_msg_burst[11]    , . maxlen  = sizeof ( int )    , . mode  = 0644   , . proc_handler  = & proc_dointvec    , }   , { . ctl_name  = NET_CORE_OPTMEM_MAX  , . procname  = "optmem_max"   , . data  = & global_sysctl_optmem_max[11]    , . maxlen  = sizeof ( int )    , . mode  = 0644   , . proc_handler  = & proc_dointvec    }   , { . ctl_name  = NET_CORE_SOMAXCONN  , . procname  = "somaxconn"   , . data  = & global_sysctl_somaxconn[11]    , . maxlen  = sizeof ( int )    , . mode  = 0644   , . proc_handler  = & proc_dointvec    }   , { . ctl_name  = 0  }   }  ;  _GLOBAL_186_T  _GLOBAL_12_core_table_I [ ]  = { { . ctl_name  = NET_CORE_WMEM_MAX  , . procname  = "wmem_max"   , . data  = & global_sysctl_wmem_max[12]    , . maxlen  = sizeof ( int )    , . mode  = 0644   , . proc_handler  = & proc_dointvec    }  , { . ctl_name  = NET_CORE_RMEM_MAX  , . procname  = "rmem_max"   , . data  = & global_sysctl_rmem_max[12]    , . maxlen  = sizeof ( int )    , . mode  = 0644   , . proc_handler  = & proc_dointvec    }   , { . ctl_name  = NET_CORE_WMEM_DEFAULT  , . procname  = "wmem_default"   , . data  = & global_sysctl_wmem_default[12]    , . maxlen  = sizeof ( int )    , . mode  = 0644   , . proc_handler  = & proc_dointvec    }   , { . ctl_name  = NET_CORE_RMEM_DEFAULT  , . procname  = "rmem_default"   , . data  = & global_sysctl_rmem_default[12]    , . maxlen  = sizeof ( int )    , . mode  = 0644   , . proc_handler  = & proc_dointvec    }   , { . ctl_name  = NET_CORE_DEV_WEIGHT  , . procname  = "dev_weight"   , . data  = & global_weight_p[12]    , . maxlen  = sizeof ( int )    , . mode  = 0644   , . proc_handler  = & proc_dointvec    }   , { . ctl_name  = NET_CORE_MAX_BACKLOG  , . procname  = "netdev_max_backlog"   , . data  = & global_netdev_max_backlog[12]    , . maxlen  = sizeof ( int )    , . mode  = 0644   , . proc_handler  = & proc_dointvec    }   , { . ctl_name  = NET_CORE_NO_CONG_THRESH  , . procname  = "no_cong_thresh"   , . data  = & global_no_cong_thresh[12]    , . maxlen  = sizeof ( int )    , . mode  = 0644   , . proc_handler  = & proc_dointvec    }   , { . ctl_name  = NET_CORE_NO_CONG  , . procname  = "no_cong"   , . data  = & global_no_cong[12]    , . maxlen  = sizeof ( int )    , . mode  = 0644   , . proc_handler  = & proc_dointvec    }   , { . ctl_name  = NET_CORE_LO_CONG  , . procname  = "lo_cong"   , . data  = & global_lo_cong[12]    , . maxlen  = sizeof ( int )    , . mode  = 0644   , . proc_handler  = & proc_dointvec    }   , { . ctl_name  = NET_CORE_MOD_CONG  , . procname  = "mod_cong"   , . data  = & global_mod_cong[12]    , . maxlen  = sizeof ( int )    , . mode  = 0644   , . proc_handler  = & proc_dointvec    }   , { . ctl_name  = NET_CORE_MSG_COST  , . procname  = "message_cost"   , . data  = & global_net_msg_cost[12]    , . maxlen  = sizeof ( int )    , . mode  = 0644   , . proc_handler  = & proc_dointvec_jiffies    , . strategy  = & sysctl_jiffies    , }   , { . ctl_name  = NET_CORE_MSG_BURST  , . procname  = "message_burst"   , . data  = & global_net_msg_burst[12]    , . maxlen  = sizeof ( int )    , . mode  = 0644   , . proc_handler  = & proc_dointvec    , }   , { . ctl_name  = NET_CORE_OPTMEM_MAX  , . procname  = "optmem_max"   , . data  = & global_sysctl_optmem_max[12]    , . maxlen  = sizeof ( int )    , . mode  = 0644   , . proc_handler  = & proc_dointvec    }   , { . ctl_name  = NET_CORE_SOMAXCONN  , . procname  = "somaxconn"   , . data  = & global_sysctl_somaxconn[12]    , . maxlen  = sizeof ( int )    , . mode  = 0644   , . proc_handler  = & proc_dointvec    }   , { . ctl_name  = 0  }   }  ;  _GLOBAL_186_T  _GLOBAL_13_core_table_I [ ]  = { { . ctl_name  = NET_CORE_WMEM_MAX  , . procname  = "wmem_max"   , . data  = & global_sysctl_wmem_max[13]    , . maxlen  = sizeof ( int )    , . mode  = 0644   , . proc_handler  = & proc_dointvec    }  , { . ctl_name  = NET_CORE_RMEM_MAX  , . procname  = "rmem_max"   , . data  = & global_sysctl_rmem_max[13]    , . maxlen  = sizeof ( int )    , . mode  = 0644   , . proc_handler  = & proc_dointvec    }   , { . ctl_name  = NET_CORE_WMEM_DEFAULT  , . procname  = "wmem_default"   , . data  = & global_sysctl_wmem_default[13]    , . maxlen  = sizeof ( int )    , . mode  = 0644   , . proc_handler  = & proc_dointvec    }   , { . ctl_name  = NET_CORE_RMEM_DEFAULT  , . procname  = "rmem_default"   , . data  = & global_sysctl_rmem_default[13]    , . maxlen  = sizeof ( int )    , . mode  = 0644   , . proc_handler  = & proc_dointvec    }   , { . ctl_name  = NET_CORE_DEV_WEIGHT  , . procname  = "dev_weight"   , . data  = & global_weight_p[13]    , . maxlen  = sizeof ( int )    , . mode  = 0644   , . proc_handler  = & proc_dointvec    }   , { . ctl_name  = NET_CORE_MAX_BACKLOG  , . procname  = "netdev_max_backlog"   , . data  = & global_netdev_max_backlog[13]    , . maxlen  = sizeof ( int )    , . mode  = 0644   , . proc_handler  = & proc_dointvec    }   , { . ctl_name  = NET_CORE_NO_CONG_THRESH  , . procname  = "no_cong_thresh"   , . data  = & global_no_cong_thresh[13]    , . maxlen  = sizeof ( int )    , . mode  = 0644   , . proc_handler  = & proc_dointvec    }   , { . ctl_name  = NET_CORE_NO_CONG  , . procname  = "no_cong"   , . data  = & global_no_cong[13]    , . maxlen  = sizeof ( int )    , . mode  = 0644   , . proc_handler  = & proc_dointvec    }   , { . ctl_name  = NET_CORE_LO_CONG  , . procname  = "lo_cong"   , . data  = & global_lo_cong[13]    , . maxlen  = sizeof ( int )    , . mode  = 0644   , . proc_handler  = & proc_dointvec    }   , { . ctl_name  = NET_CORE_MOD_CONG  , . procname  = "mod_cong"   , . data  = & global_mod_cong[13]    , . maxlen  = sizeof ( int )    , . mode  = 0644   , . proc_handler  = & proc_dointvec    }   , { . ctl_name  = NET_CORE_MSG_COST  , . procname  = "message_cost"   , . data  = & global_net_msg_cost[13]    , . maxlen  = sizeof ( int )    , . mode  = 0644   , . proc_handler  = & proc_dointvec_jiffies    , . strategy  = & sysctl_jiffies    , }   , { . ctl_name  = NET_CORE_MSG_BURST  , . procname  = "message_burst"   , . data  = & global_net_msg_burst[13]    , . maxlen  = sizeof ( int )    , . mode  = 0644   , . proc_handler  = & proc_dointvec    , }   , { . ctl_name  = NET_CORE_OPTMEM_MAX  , . procname  = "optmem_max"   , . data  = & global_sysctl_optmem_max[13]    , . maxlen  = sizeof ( int )    , . mode  = 0644   , . proc_handler  = & proc_dointvec    }   , { . ctl_name  = NET_CORE_SOMAXCONN  , . procname  = "somaxconn"   , . data  = & global_sysctl_somaxconn[13]    , . maxlen  = sizeof ( int )    , . mode  = 0644   , . proc_handler  = & proc_dointvec    }   , { . ctl_name  = 0  }   }  ;  _GLOBAL_186_T  _GLOBAL_14_core_table_I [ ]  = { { . ctl_name  = NET_CORE_WMEM_MAX  , . procname  = "wmem_max"   , . data  = & global_sysctl_wmem_max[14]    , . maxlen  = sizeof ( int )    , . mode  = 0644   , . proc_handler  = & proc_dointvec    }  , { . ctl_name  = NET_CORE_RMEM_MAX  , . procname  = "rmem_max"   , . data  = & global_sysctl_rmem_max[14]    , . maxlen  = sizeof ( int )    , . mode  = 0644   , . proc_handler  = & proc_dointvec    }   , { . ctl_name  = NET_CORE_WMEM_DEFAULT  , . procname  = "wmem_default"   , . data  = & global_sysctl_wmem_default[14]    , . maxlen  = sizeof ( int )    , . mode  = 0644   , . proc_handler  = & proc_dointvec    }   , { . ctl_name  = NET_CORE_RMEM_DEFAULT  , . procname  = "rmem_default"   , . data  = & global_sysctl_rmem_default[14]    , . maxlen  = sizeof ( int )    , . mode  = 0644   , . proc_handler  = & proc_dointvec    }   , { . ctl_name  = NET_CORE_DEV_WEIGHT  , . procname  = "dev_weight"   , . data  = & global_weight_p[14]    , . maxlen  = sizeof ( int )    , . mode  = 0644   , . proc_handler  = & proc_dointvec    }   , { . ctl_name  = NET_CORE_MAX_BACKLOG  , . procname  = "netdev_max_backlog"   , . data  = & global_netdev_max_backlog[14]    , . maxlen  = sizeof ( int )    , . mode  = 0644   , . proc_handler  = & proc_dointvec    }   , { . ctl_name  = NET_CORE_NO_CONG_THRESH  , . procname  = "no_cong_thresh"   , . data  = & global_no_cong_thresh[14]    , . maxlen  = sizeof ( int )    , . mode  = 0644   , . proc_handler  = & proc_dointvec    }   , { . ctl_name  = NET_CORE_NO_CONG  , . procname  = "no_cong"   , . data  = & global_no_cong[14]    , . maxlen  = sizeof ( int )    , . mode  = 0644   , . proc_handler  = & proc_dointvec    }   , { . ctl_name  = NET_CORE_LO_CONG  , . procname  = "lo_cong"   , . data  = & global_lo_cong[14]    , . maxlen  = sizeof ( int )    , . mode  = 0644   , . proc_handler  = & proc_dointvec    }   , { . ctl_name  = NET_CORE_MOD_CONG  , . procname  = "mod_cong"   , . data  = & global_mod_cong[14]    , . maxlen  = sizeof ( int )    , . mode  = 0644   , . proc_handler  = & proc_dointvec    }   , { . ctl_name  = NET_CORE_MSG_COST  , . procname  = "message_cost"   , . data  = & global_net_msg_cost[14]    , . maxlen  = sizeof ( int )    , . mode  = 0644   , . proc_handler  = & proc_dointvec_jiffies    , . strategy  = & sysctl_jiffies    , }   , { . ctl_name  = NET_CORE_MSG_BURST  , . procname  = "message_burst"   , . data  = & global_net_msg_burst[14]    , . maxlen  = sizeof ( int )    , . mode  = 0644   , . proc_handler  = & proc_dointvec    , }   , { . ctl_name  = NET_CORE_OPTMEM_MAX  , . procname  = "optmem_max"   , . data  = & global_sysctl_optmem_max[14]    , . maxlen  = sizeof ( int )    , . mode  = 0644   , . proc_handler  = & proc_dointvec    }   , { . ctl_name  = NET_CORE_SOMAXCONN  , . procname  = "somaxconn"   , . data  = & global_sysctl_somaxconn[14]    , . maxlen  = sizeof ( int )    , . mode  = 0644   , . proc_handler  = & proc_dointvec    }   , { . ctl_name  = 0  }   }  ;  _GLOBAL_186_T  _GLOBAL_15_core_table_I [ ]  = { { . ctl_name  = NET_CORE_WMEM_MAX  , . procname  = "wmem_max"   , . data  = & global_sysctl_wmem_max[15]    , . maxlen  = sizeof ( int )    , . mode  = 0644   , . proc_handler  = & proc_dointvec    }  , { . ctl_name  = NET_CORE_RMEM_MAX  , . procname  = "rmem_max"   , . data  = & global_sysctl_rmem_max[15]    , . maxlen  = sizeof ( int )    , . mode  = 0644   , . proc_handler  = & proc_dointvec    }   , { . ctl_name  = NET_CORE_WMEM_DEFAULT  , . procname  = "wmem_default"   , . data  = & global_sysctl_wmem_default[15]    , . maxlen  = sizeof ( int )    , . mode  = 0644   , . proc_handler  = & proc_dointvec    }   , { . ctl_name  = NET_CORE_RMEM_DEFAULT  , . procname  = "rmem_default"   , . data  = & global_sysctl_rmem_default[15]    , . maxlen  = sizeof ( int )    , . mode  = 0644   , . proc_handler  = & proc_dointvec    }   , { . ctl_name  = NET_CORE_DEV_WEIGHT  , . procname  = "dev_weight"   , . data  = & global_weight_p[15]    , . maxlen  = sizeof ( int )    , . mode  = 0644   , . proc_handler  = & proc_dointvec    }   , { . ctl_name  = NET_CORE_MAX_BACKLOG  , . procname  = "netdev_max_backlog"   , . data  = & global_netdev_max_backlog[15]    , . maxlen  = sizeof ( int )    , . mode  = 0644   , . proc_handler  = & proc_dointvec    }   , { . ctl_name  = NET_CORE_NO_CONG_THRESH  , . procname  = "no_cong_thresh"   , . data  = & global_no_cong_thresh[15]    , . maxlen  = sizeof ( int )    , . mode  = 0644   , . proc_handler  = & proc_dointvec    }   , { . ctl_name  = NET_CORE_NO_CONG  , . procname  = "no_cong"   , . data  = & global_no_cong[15]    , . maxlen  = sizeof ( int )    , . mode  = 0644   , . proc_handler  = & proc_dointvec    }   , { . ctl_name  = NET_CORE_LO_CONG  , . procname  = "lo_cong"   , . data  = & global_lo_cong[15]    , . maxlen  = sizeof ( int )    , . mode  = 0644   , . proc_handler  = & proc_dointvec    }   , { . ctl_name  = NET_CORE_MOD_CONG  , . procname  = "mod_cong"   , . data  = & global_mod_cong[15]    , . maxlen  = sizeof ( int )    , . mode  = 0644   , . proc_handler  = & proc_dointvec    }   , { . ctl_name  = NET_CORE_MSG_COST  , . procname  = "message_cost"   , . data  = & global_net_msg_cost[15]    , . maxlen  = sizeof ( int )    , . mode  = 0644   , . proc_handler  = & proc_dointvec_jiffies    , . strategy  = & sysctl_jiffies    , }   , { . ctl_name  = NET_CORE_MSG_BURST  , . procname  = "message_burst"   , . data  = & global_net_msg_burst[15]    , . maxlen  = sizeof ( int )    , . mode  = 0644   , . proc_handler  = & proc_dointvec    , }   , { . ctl_name  = NET_CORE_OPTMEM_MAX  , . procname  = "optmem_max"   , . data  = & global_sysctl_optmem_max[15]    , . maxlen  = sizeof ( int )    , . mode  = 0644   , . proc_handler  = & proc_dointvec    }   , { . ctl_name  = NET_CORE_SOMAXCONN  , . procname  = "somaxconn"   , . data  = & global_sysctl_somaxconn[15]    , . maxlen  = sizeof ( int )    , . mode  = 0644   , . proc_handler  = & proc_dointvec    }   , { . ctl_name  = 0  }   }  ;  _GLOBAL_186_T  _GLOBAL_16_core_table_I [ ]  = { { . ctl_name  = NET_CORE_WMEM_MAX  , . procname  = "wmem_max"   , . data  = & global_sysctl_wmem_max[16]    , . maxlen  = sizeof ( int )    , . mode  = 0644   , . proc_handler  = & proc_dointvec    }  , { . ctl_name  = NET_CORE_RMEM_MAX  , . procname  = "rmem_max"   , . data  = & global_sysctl_rmem_max[16]    , . maxlen  = sizeof ( int )    , . mode  = 0644   , . proc_handler  = & proc_dointvec    }   , { . ctl_name  = NET_CORE_WMEM_DEFAULT  , . procname  = "wmem_default"   , . data  = & global_sysctl_wmem_default[16]    , . maxlen  = sizeof ( int )    , . mode  = 0644   , . proc_handler  = & proc_dointvec    }   , { . ctl_name  = NET_CORE_RMEM_DEFAULT  , . procname  = "rmem_default"   , . data  = & global_sysctl_rmem_default[16]    , . maxlen  = sizeof ( int )    , . mode  = 0644   , . proc_handler  = & proc_dointvec    }   , { . ctl_name  = NET_CORE_DEV_WEIGHT  , . procname  = "dev_weight"   , . data  = & global_weight_p[16]    , . maxlen  = sizeof ( int )    , . mode  = 0644   , . proc_handler  = & proc_dointvec    }   , { . ctl_name  = NET_CORE_MAX_BACKLOG  , . procname  = "netdev_max_backlog"   , . data  = & global_netdev_max_backlog[16]    , . maxlen  = sizeof ( int )    , . mode  = 0644   , . proc_handler  = & proc_dointvec    }   , { . ctl_name  = NET_CORE_NO_CONG_THRESH  , . procname  = "no_cong_thresh"   , . data  = & global_no_cong_thresh[16]    , . maxlen  = sizeof ( int )    , . mode  = 0644   , . proc_handler  = & proc_dointvec    }   , { . ctl_name  = NET_CORE_NO_CONG  , . procname  = "no_cong"   , . data  = & global_no_cong[16]    , . maxlen  = sizeof ( int )    , . mode  = 0644   , . proc_handler  = & proc_dointvec    }   , { . ctl_name  = NET_CORE_LO_CONG  , . procname  = "lo_cong"   , . data  = & global_lo_cong[16]    , . maxlen  = sizeof ( int )    , . mode  = 0644   , . proc_handler  = & proc_dointvec    }   , { . ctl_name  = NET_CORE_MOD_CONG  , . procname  = "mod_cong"   , . data  = & global_mod_cong[16]    , . maxlen  = sizeof ( int )    , . mode  = 0644   , . proc_handler  = & proc_dointvec    }   , { . ctl_name  = NET_CORE_MSG_COST  , . procname  = "message_cost"   , . data  = & global_net_msg_cost[16]    , . maxlen  = sizeof ( int )    , . mode  = 0644   , . proc_handler  = & proc_dointvec_jiffies    , . strategy  = & sysctl_jiffies    , }   , { . ctl_name  = NET_CORE_MSG_BURST  , . procname  = "message_burst"   , . data  = & global_net_msg_burst[16]    , . maxlen  = sizeof ( int )    , . mode  = 0644   , . proc_handler  = & proc_dointvec    , }   , { . ctl_name  = NET_CORE_OPTMEM_MAX  , . procname  = "optmem_max"   , . data  = & global_sysctl_optmem_max[16]    , . maxlen  = sizeof ( int )    , . mode  = 0644   , . proc_handler  = & proc_dointvec    }   , { . ctl_name  = NET_CORE_SOMAXCONN  , . procname  = "somaxconn"   , . data  = & global_sysctl_somaxconn[16]    , . maxlen  = sizeof ( int )    , . mode  = 0644   , . proc_handler  = & proc_dointvec    }   , { . ctl_name  = 0  }   }  ;  _GLOBAL_186_T  _GLOBAL_17_core_table_I [ ]  = { { . ctl_name  = NET_CORE_WMEM_MAX  , . procname  = "wmem_max"   , . data  = & global_sysctl_wmem_max[17]    , . maxlen  = sizeof ( int )    , . mode  = 0644   , . proc_handler  = & proc_dointvec    }  , { . ctl_name  = NET_CORE_RMEM_MAX  , . procname  = "rmem_max"   , . data  = & global_sysctl_rmem_max[17]    , . maxlen  = sizeof ( int )    , . mode  = 0644   , . proc_handler  = & proc_dointvec    }   , { . ctl_name  = NET_CORE_WMEM_DEFAULT  , . procname  = "wmem_default"   , . data  = & global_sysctl_wmem_default[17]    , . maxlen  = sizeof ( int )    , . mode  = 0644   , . proc_handler  = & proc_dointvec    }   , { . ctl_name  = NET_CORE_RMEM_DEFAULT  , . procname  = "rmem_default"   , . data  = & global_sysctl_rmem_default[17]    , . maxlen  = sizeof ( int )    , . mode  = 0644   , . proc_handler  = & proc_dointvec    }   , { . ctl_name  = NET_CORE_DEV_WEIGHT  , . procname  = "dev_weight"   , . data  = & global_weight_p[17]    , . maxlen  = sizeof ( int )    , . mode  = 0644   , . proc_handler  = & proc_dointvec    }   , { . ctl_name  = NET_CORE_MAX_BACKLOG  , . procname  = "netdev_max_backlog"   , . data  = & global_netdev_max_backlog[17]    , . maxlen  = sizeof ( int )    , . mode  = 0644   , . proc_handler  = & proc_dointvec    }   , { . ctl_name  = NET_CORE_NO_CONG_THRESH  , . procname  = "no_cong_thresh"   , . data  = & global_no_cong_thresh[17]    , . maxlen  = sizeof ( int )    , . mode  = 0644   , . proc_handler  = & proc_dointvec    }   , { . ctl_name  = NET_CORE_NO_CONG  , . procname  = "no_cong"   , . data  = & global_no_cong[17]    , . maxlen  = sizeof ( int )    , . mode  = 0644   , . proc_handler  = & proc_dointvec    }   , { . ctl_name  = NET_CORE_LO_CONG  , . procname  = "lo_cong"   , . data  = & global_lo_cong[17]    , . maxlen  = sizeof ( int )    , . mode  = 0644   , . proc_handler  = & proc_dointvec    }   , { . ctl_name  = NET_CORE_MOD_CONG  , . procname  = "mod_cong"   , . data  = & global_mod_cong[17]    , . maxlen  = sizeof ( int )    , . mode  = 0644   , . proc_handler  = & proc_dointvec    }   , { . ctl_name  = NET_CORE_MSG_COST  , . procname  = "message_cost"   , . data  = & global_net_msg_cost[17]    , . maxlen  = sizeof ( int )    , . mode  = 0644   , . proc_handler  = & proc_dointvec_jiffies    , . strategy  = & sysctl_jiffies    , }   , { . ctl_name  = NET_CORE_MSG_BURST  , . procname  = "message_burst"   , . data  = & global_net_msg_burst[17]    , . maxlen  = sizeof ( int )    , . mode  = 0644   , . proc_handler  = & proc_dointvec    , }   , { . ctl_name  = NET_CORE_OPTMEM_MAX  , . procname  = "optmem_max"   , . data  = & global_sysctl_optmem_max[17]    , . maxlen  = sizeof ( int )    , . mode  = 0644   , . proc_handler  = & proc_dointvec    }   , { . ctl_name  = NET_CORE_SOMAXCONN  , . procname  = "somaxconn"   , . data  = & global_sysctl_somaxconn[17]    , . maxlen  = sizeof ( int )    , . mode  = 0644   , . proc_handler  = & proc_dointvec    }   , { . ctl_name  = 0  }   }  ;  _GLOBAL_186_T  _GLOBAL_18_core_table_I [ ]  = { { . ctl_name  = NET_CORE_WMEM_MAX  , . procname  = "wmem_max"   , . data  = & global_sysctl_wmem_max[18]    , . maxlen  = sizeof ( int )    , . mode  = 0644   , . proc_handler  = & proc_dointvec    }  , { . ctl_name  = NET_CORE_RMEM_MAX  , . procname  = "rmem_max"   , . data  = & global_sysctl_rmem_max[18]    , . maxlen  = sizeof ( int )    , . mode  = 0644   , . proc_handler  = & proc_dointvec    }   , { . ctl_name  = NET_CORE_WMEM_DEFAULT  , . procname  = "wmem_default"   , . data  = & global_sysctl_wmem_default[18]    , . maxlen  = sizeof ( int )    , . mode  = 0644   , . proc_handler  = & proc_dointvec    }   , { . ctl_name  = NET_CORE_RMEM_DEFAULT  , . procname  = "rmem_default"   , . data  = & global_sysctl_rmem_default[18]    , . maxlen  = sizeof ( int )    , . mode  = 0644   , . proc_handler  = & proc_dointvec    }   , { . ctl_name  = NET_CORE_DEV_WEIGHT  , . procname  = "dev_weight"   , . data  = & global_weight_p[18]    , . maxlen  = sizeof ( int )    , . mode  = 0644   , . proc_handler  = & proc_dointvec    }   , { . ctl_name  = NET_CORE_MAX_BACKLOG  , . procname  = "netdev_max_backlog"   , . data  = & global_netdev_max_backlog[18]    , . maxlen  = sizeof ( int )    , . mode  = 0644   , . proc_handler  = & proc_dointvec    }   , { . ctl_name  = NET_CORE_NO_CONG_THRESH  , . procname  = "no_cong_thresh"   , . data  = & global_no_cong_thresh[18]    , . maxlen  = sizeof ( int )    , . mode  = 0644   , . proc_handler  = & proc_dointvec    }   , { . ctl_name  = NET_CORE_NO_CONG  , . procname  = "no_cong"   , . data  = & global_no_cong[18]    , . maxlen  = sizeof ( int )    , . mode  = 0644   , . proc_handler  = & proc_dointvec    }   , { . ctl_name  = NET_CORE_LO_CONG  , . procname  = "lo_cong"   , . data  = & global_lo_cong[18]    , . maxlen  = sizeof ( int )    , . mode  = 0644   , . proc_handler  = & proc_dointvec    }   , { . ctl_name  = NET_CORE_MOD_CONG  , . procname  = "mod_cong"   , . data  = & global_mod_cong[18]    , . maxlen  = sizeof ( int )    , . mode  = 0644   , . proc_handler  = & proc_dointvec    }   , { . ctl_name  = NET_CORE_MSG_COST  , . procname  = "message_cost"   , . data  = & global_net_msg_cost[18]    , . maxlen  = sizeof ( int )    , . mode  = 0644   , . proc_handler  = & proc_dointvec_jiffies    , . strategy  = & sysctl_jiffies    , }   , { . ctl_name  = NET_CORE_MSG_BURST  , . procname  = "message_burst"   , . data  = & global_net_msg_burst[18]    , . maxlen  = sizeof ( int )    , . mode  = 0644   , . proc_handler  = & proc_dointvec    , }   , { . ctl_name  = NET_CORE_OPTMEM_MAX  , . procname  = "optmem_max"   , . data  = & global_sysctl_optmem_max[18]    , . maxlen  = sizeof ( int )    , . mode  = 0644   , . proc_handler  = & proc_dointvec    }   , { . ctl_name  = NET_CORE_SOMAXCONN  , . procname  = "somaxconn"   , . data  = & global_sysctl_somaxconn[18]    , . maxlen  = sizeof ( int )    , . mode  = 0644   , . proc_handler  = & proc_dointvec    }   , { . ctl_name  = 0  }   }  ;  _GLOBAL_186_T  _GLOBAL_19_core_table_I [ ]  = { { . ctl_name  = NET_CORE_WMEM_MAX  , . procname  = "wmem_max"   , . data  = & global_sysctl_wmem_max[19]    , . maxlen  = sizeof ( int )    , . mode  = 0644   , . proc_handler  = & proc_dointvec    }  , { . ctl_name  = NET_CORE_RMEM_MAX  , . procname  = "rmem_max"   , . data  = & global_sysctl_rmem_max[19]    , . maxlen  = sizeof ( int )    , . mode  = 0644   , . proc_handler  = & proc_dointvec    }   , { . ctl_name  = NET_CORE_WMEM_DEFAULT  , . procname  = "wmem_default"   , . data  = & global_sysctl_wmem_default[19]    , . maxlen  = sizeof ( int )    , . mode  = 0644   , . proc_handler  = & proc_dointvec    }   , { . ctl_name  = NET_CORE_RMEM_DEFAULT  , . procname  = "rmem_default"   , . data  = & global_sysctl_rmem_default[19]    , . maxlen  = sizeof ( int )    , . mode  = 0644   , . proc_handler  = & proc_dointvec    }   , { . ctl_name  = NET_CORE_DEV_WEIGHT  , . procname  = "dev_weight"   , . data  = & global_weight_p[19]    , . maxlen  = sizeof ( int )    , . mode  = 0644   , . proc_handler  = & proc_dointvec    }   , { . ctl_name  = NET_CORE_MAX_BACKLOG  , . procname  = "netdev_max_backlog"   , . data  = & global_netdev_max_backlog[19]    , . maxlen  = sizeof ( int )    , . mode  = 0644   , . proc_handler  = & proc_dointvec    }   , { . ctl_name  = NET_CORE_NO_CONG_THRESH  , . procname  = "no_cong_thresh"   , . data  = & global_no_cong_thresh[19]    , . maxlen  = sizeof ( int )    , . mode  = 0644   , . proc_handler  = & proc_dointvec    }   , { . ctl_name  = NET_CORE_NO_CONG  , . procname  = "no_cong"   , . data  = & global_no_cong[19]    , . maxlen  = sizeof ( int )    , . mode  = 0644   , . proc_handler  = & proc_dointvec    }   , { . ctl_name  = NET_CORE_LO_CONG  , . procname  = "lo_cong"   , . data  = & global_lo_cong[19]    , . maxlen  = sizeof ( int )    , . mode  = 0644   , . proc_handler  = & proc_dointvec    }   , { . ctl_name  = NET_CORE_MOD_CONG  , . procname  = "mod_cong"   , . data  = & global_mod_cong[19]    , . maxlen  = sizeof ( int )    , . mode  = 0644   , . proc_handler  = & proc_dointvec    }   , { . ctl_name  = NET_CORE_MSG_COST  , . procname  = "message_cost"   , . data  = & global_net_msg_cost[19]    , . maxlen  = sizeof ( int )    , . mode  = 0644   , . proc_handler  = & proc_dointvec_jiffies    , . strategy  = & sysctl_jiffies    , }   , { . ctl_name  = NET_CORE_MSG_BURST  , . procname  = "message_burst"   , . data  = & global_net_msg_burst[19]    , . maxlen  = sizeof ( int )    , . mode  = 0644   , . proc_handler  = & proc_dointvec    , }   , { . ctl_name  = NET_CORE_OPTMEM_MAX  , . procname  = "optmem_max"   , . data  = & global_sysctl_optmem_max[19]    , . maxlen  = sizeof ( int )    , . mode  = 0644   , . proc_handler  = & proc_dointvec    }   , { . ctl_name  = NET_CORE_SOMAXCONN  , . procname  = "somaxconn"   , . data  = & global_sysctl_somaxconn[19]    , . maxlen  = sizeof ( int )    , . mode  = 0644   , . proc_handler  = & proc_dointvec    }   , { . ctl_name  = 0  }   }  ;  _GLOBAL_186_T  _GLOBAL_20_core_table_I [ ]  = { { . ctl_name  = NET_CORE_WMEM_MAX  , . procname  = "wmem_max"   , . data  = & global_sysctl_wmem_max[20]    , . maxlen  = sizeof ( int )    , . mode  = 0644   , . proc_handler  = & proc_dointvec    }  , { . ctl_name  = NET_CORE_RMEM_MAX  , . procname  = "rmem_max"   , . data  = & global_sysctl_rmem_max[20]    , . maxlen  = sizeof ( int )    , . mode  = 0644   , . proc_handler  = & proc_dointvec    }   , { . ctl_name  = NET_CORE_WMEM_DEFAULT  , . procname  = "wmem_default"   , . data  = & global_sysctl_wmem_default[20]    , . maxlen  = sizeof ( int )    , . mode  = 0644   , . proc_handler  = & proc_dointvec    }   , { . ctl_name  = NET_CORE_RMEM_DEFAULT  , . procname  = "rmem_default"   , . data  = & global_sysctl_rmem_default[20]    , . maxlen  = sizeof ( int )    , . mode  = 0644   , . proc_handler  = & proc_dointvec    }   , { . ctl_name  = NET_CORE_DEV_WEIGHT  , . procname  = "dev_weight"   , . data  = & global_weight_p[20]    , . maxlen  = sizeof ( int )    , . mode  = 0644   , . proc_handler  = & proc_dointvec    }   , { . ctl_name  = NET_CORE_MAX_BACKLOG  , . procname  = "netdev_max_backlog"   , . data  = & global_netdev_max_backlog[20]    , . maxlen  = sizeof ( int )    , . mode  = 0644   , . proc_handler  = & proc_dointvec    }   , { . ctl_name  = NET_CORE_NO_CONG_THRESH  , . procname  = "no_cong_thresh"   , . data  = & global_no_cong_thresh[20]    , . maxlen  = sizeof ( int )    , . mode  = 0644   , . proc_handler  = & proc_dointvec    }   , { . ctl_name  = NET_CORE_NO_CONG  , . procname  = "no_cong"   , . data  = & global_no_cong[20]    , . maxlen  = sizeof ( int )    , . mode  = 0644   , . proc_handler  = & proc_dointvec    }   , { . ctl_name  = NET_CORE_LO_CONG  , . procname  = "lo_cong"   , . data  = & global_lo_cong[20]    , . maxlen  = sizeof ( int )    , . mode  = 0644   , . proc_handler  = & proc_dointvec    }   , { . ctl_name  = NET_CORE_MOD_CONG  , . procname  = "mod_cong"   , . data  = & global_mod_cong[20]    , . maxlen  = sizeof ( int )    , . mode  = 0644   , . proc_handler  = & proc_dointvec    }   , { . ctl_name  = NET_CORE_MSG_COST  , . procname  = "message_cost"   , . data  = & global_net_msg_cost[20]    , . maxlen  = sizeof ( int )    , . mode  = 0644   , . proc_handler  = & proc_dointvec_jiffies    , . strategy  = & sysctl_jiffies    , }   , { . ctl_name  = NET_CORE_MSG_BURST  , . procname  = "message_burst"   , . data  = & global_net_msg_burst[20]    , . maxlen  = sizeof ( int )    , . mode  = 0644   , . proc_handler  = & proc_dointvec    , }   , { . ctl_name  = NET_CORE_OPTMEM_MAX  , . procname  = "optmem_max"   , . data  = & global_sysctl_optmem_max[20]    , . maxlen  = sizeof ( int )    , . mode  = 0644   , . proc_handler  = & proc_dointvec    }   , { . ctl_name  = NET_CORE_SOMAXCONN  , . procname  = "somaxconn"   , . data  = & global_sysctl_somaxconn[20]    , . maxlen  = sizeof ( int )    , . mode  = 0644   , . proc_handler  = & proc_dointvec    }   , { . ctl_name  = 0  }   }  ;  _GLOBAL_186_T  _GLOBAL_21_core_table_I [ ]  = { { . ctl_name  = NET_CORE_WMEM_MAX  , . procname  = "wmem_max"   , . data  = & global_sysctl_wmem_max[21]    , . maxlen  = sizeof ( int )    , . mode  = 0644   , . proc_handler  = & proc_dointvec    }  , { . ctl_name  = NET_CORE_RMEM_MAX  , . procname  = "rmem_max"   , . data  = & global_sysctl_rmem_max[21]    , . maxlen  = sizeof ( int )    , . mode  = 0644   , . proc_handler  = & proc_dointvec    }   , { . ctl_name  = NET_CORE_WMEM_DEFAULT  , . procname  = "wmem_default"   , . data  = & global_sysctl_wmem_default[21]    , . maxlen  = sizeof ( int )    , . mode  = 0644   , . proc_handler  = & proc_dointvec    }   , { . ctl_name  = NET_CORE_RMEM_DEFAULT  , . procname  = "rmem_default"   , . data  = & global_sysctl_rmem_default[21]    , . maxlen  = sizeof ( int )    , . mode  = 0644   , . proc_handler  = & proc_dointvec    }   , { . ctl_name  = NET_CORE_DEV_WEIGHT  , . procname  = "dev_weight"   , . data  = & global_weight_p[21]    , . maxlen  = sizeof ( int )    , . mode  = 0644   , . proc_handler  = & proc_dointvec    }   , { . ctl_name  = NET_CORE_MAX_BACKLOG  , . procname  = "netdev_max_backlog"   , . data  = & global_netdev_max_backlog[21]    , . maxlen  = sizeof ( int )    , . mode  = 0644   , . proc_handler  = & proc_dointvec    }   , { . ctl_name  = NET_CORE_NO_CONG_THRESH  , . procname  = "no_cong_thresh"   , . data  = & global_no_cong_thresh[21]    , . maxlen  = sizeof ( int )    , . mode  = 0644   , . proc_handler  = & proc_dointvec    }   , { . ctl_name  = NET_CORE_NO_CONG  , . procname  = "no_cong"   , . data  = & global_no_cong[21]    , . maxlen  = sizeof ( int )    , . mode  = 0644   , . proc_handler  = & proc_dointvec    }   , { . ctl_name  = NET_CORE_LO_CONG  , . procname  = "lo_cong"   , . data  = & global_lo_cong[21]    , . maxlen  = sizeof ( int )    , . mode  = 0644   , . proc_handler  = & proc_dointvec    }   , { . ctl_name  = NET_CORE_MOD_CONG  , . procname  = "mod_cong"   , . data  = & global_mod_cong[21]    , . maxlen  = sizeof ( int )    , . mode  = 0644   , . proc_handler  = & proc_dointvec    }   , { . ctl_name  = NET_CORE_MSG_COST  , . procname  = "message_cost"   , . data  = & global_net_msg_cost[21]    , . maxlen  = sizeof ( int )    , . mode  = 0644   , . proc_handler  = & proc_dointvec_jiffies    , . strategy  = & sysctl_jiffies    , }   , { . ctl_name  = NET_CORE_MSG_BURST  , . procname  = "message_burst"   , . data  = & global_net_msg_burst[21]    , . maxlen  = sizeof ( int )    , . mode  = 0644   , . proc_handler  = & proc_dointvec    , }   , { . ctl_name  = NET_CORE_OPTMEM_MAX  , . procname  = "optmem_max"   , . data  = & global_sysctl_optmem_max[21]    , . maxlen  = sizeof ( int )    , . mode  = 0644   , . proc_handler  = & proc_dointvec    }   , { . ctl_name  = NET_CORE_SOMAXCONN  , . procname  = "somaxconn"   , . data  = & global_sysctl_somaxconn[21]    , . maxlen  = sizeof ( int )    , . mode  = 0644   , . proc_handler  = & proc_dointvec    }   , { . ctl_name  = 0  }   }  ;  _GLOBAL_186_T  _GLOBAL_22_core_table_I [ ]  = { { . ctl_name  = NET_CORE_WMEM_MAX  , . procname  = "wmem_max"   , . data  = & global_sysctl_wmem_max[22]    , . maxlen  = sizeof ( int )    , . mode  = 0644   , . proc_handler  = & proc_dointvec    }  , { . ctl_name  = NET_CORE_RMEM_MAX  , . procname  = "rmem_max"   , . data  = & global_sysctl_rmem_max[22]    , . maxlen  = sizeof ( int )    , . mode  = 0644   , . proc_handler  = & proc_dointvec    }   , { . ctl_name  = NET_CORE_WMEM_DEFAULT  , . procname  = "wmem_default"   , . data  = & global_sysctl_wmem_default[22]    , . maxlen  = sizeof ( int )    , . mode  = 0644   , . proc_handler  = & proc_dointvec    }   , { . ctl_name  = NET_CORE_RMEM_DEFAULT  , . procname  = "rmem_default"   , . data  = & global_sysctl_rmem_default[22]    , . maxlen  = sizeof ( int )    , . mode  = 0644   , . proc_handler  = & proc_dointvec    }   , { . ctl_name  = NET_CORE_DEV_WEIGHT  , . procname  = "dev_weight"   , . data  = & global_weight_p[22]    , . maxlen  = sizeof ( int )    , . mode  = 0644   , . proc_handler  = & proc_dointvec    }   , { . ctl_name  = NET_CORE_MAX_BACKLOG  , . procname  = "netdev_max_backlog"   , . data  = & global_netdev_max_backlog[22]    , . maxlen  = sizeof ( int )    , . mode  = 0644   , . proc_handler  = & proc_dointvec    }   , { . ctl_name  = NET_CORE_NO_CONG_THRESH  , . procname  = "no_cong_thresh"   , . data  = & global_no_cong_thresh[22]    , . maxlen  = sizeof ( int )    , . mode  = 0644   , . proc_handler  = & proc_dointvec    }   , { . ctl_name  = NET_CORE_NO_CONG  , . procname  = "no_cong"   , . data  = & global_no_cong[22]    , . maxlen  = sizeof ( int )    , . mode  = 0644   , . proc_handler  = & proc_dointvec    }   , { . ctl_name  = NET_CORE_LO_CONG  , . procname  = "lo_cong"   , . data  = & global_lo_cong[22]    , . maxlen  = sizeof ( int )    , . mode  = 0644   , . proc_handler  = & proc_dointvec    }   , { . ctl_name  = NET_CORE_MOD_CONG  , . procname  = "mod_cong"   , . data  = & global_mod_cong[22]    , . maxlen  = sizeof ( int )    , . mode  = 0644   , . proc_handler  = & proc_dointvec    }   , { . ctl_name  = NET_CORE_MSG_COST  , . procname  = "message_cost"   , . data  = & global_net_msg_cost[22]    , . maxlen  = sizeof ( int )    , . mode  = 0644   , . proc_handler  = & proc_dointvec_jiffies    , . strategy  = & sysctl_jiffies    , }   , { . ctl_name  = NET_CORE_MSG_BURST  , . procname  = "message_burst"   , . data  = & global_net_msg_burst[22]    , . maxlen  = sizeof ( int )    , . mode  = 0644   , . proc_handler  = & proc_dointvec    , }   , { . ctl_name  = NET_CORE_OPTMEM_MAX  , . procname  = "optmem_max"   , . data  = & global_sysctl_optmem_max[22]    , . maxlen  = sizeof ( int )    , . mode  = 0644   , . proc_handler  = & proc_dointvec    }   , { . ctl_name  = NET_CORE_SOMAXCONN  , . procname  = "somaxconn"   , . data  = & global_sysctl_somaxconn[22]    , . maxlen  = sizeof ( int )    , . mode  = 0644   , . proc_handler  = & proc_dointvec    }   , { . ctl_name  = 0  }   }  ;  _GLOBAL_186_T  _GLOBAL_23_core_table_I [ ]  = { { . ctl_name  = NET_CORE_WMEM_MAX  , . procname  = "wmem_max"   , . data  = & global_sysctl_wmem_max[23]    , . maxlen  = sizeof ( int )    , . mode  = 0644   , . proc_handler  = & proc_dointvec    }  , { . ctl_name  = NET_CORE_RMEM_MAX  , . procname  = "rmem_max"   , . data  = & global_sysctl_rmem_max[23]    , . maxlen  = sizeof ( int )    , . mode  = 0644   , . proc_handler  = & proc_dointvec    }   , { . ctl_name  = NET_CORE_WMEM_DEFAULT  , . procname  = "wmem_default"   , . data  = & global_sysctl_wmem_default[23]    , . maxlen  = sizeof ( int )    , . mode  = 0644   , . proc_handler  = & proc_dointvec    }   , { . ctl_name  = NET_CORE_RMEM_DEFAULT  , . procname  = "rmem_default"   , . data  = & global_sysctl_rmem_default[23]    , . maxlen  = sizeof ( int )    , . mode  = 0644   , . proc_handler  = & proc_dointvec    }   , { . ctl_name  = NET_CORE_DEV_WEIGHT  , . procname  = "dev_weight"   , . data  = & global_weight_p[23]    , . maxlen  = sizeof ( int )    , . mode  = 0644   , . proc_handler  = & proc_dointvec    }   , { . ctl_name  = NET_CORE_MAX_BACKLOG  , . procname  = "netdev_max_backlog"   , . data  = & global_netdev_max_backlog[23]    , . maxlen  = sizeof ( int )    , . mode  = 0644   , . proc_handler  = & proc_dointvec    }   , { . ctl_name  = NET_CORE_NO_CONG_THRESH  , . procname  = "no_cong_thresh"   , . data  = & global_no_cong_thresh[23]    , . maxlen  = sizeof ( int )    , . mode  = 0644   , . proc_handler  = & proc_dointvec    }   , { . ctl_name  = NET_CORE_NO_CONG  , . procname  = "no_cong"   , . data  = & global_no_cong[23]    , . maxlen  = sizeof ( int )    , . mode  = 0644   , . proc_handler  = & proc_dointvec    }   , { . ctl_name  = NET_CORE_LO_CONG  , . procname  = "lo_cong"   , . data  = & global_lo_cong[23]    , . maxlen  = sizeof ( int )    , . mode  = 0644   , . proc_handler  = & proc_dointvec    }   , { . ctl_name  = NET_CORE_MOD_CONG  , . procname  = "mod_cong"   , . data  = & global_mod_cong[23]    , . maxlen  = sizeof ( int )    , . mode  = 0644   , . proc_handler  = & proc_dointvec    }   , { . ctl_name  = NET_CORE_MSG_COST  , . procname  = "message_cost"   , . data  = & global_net_msg_cost[23]    , . maxlen  = sizeof ( int )    , . mode  = 0644   , . proc_handler  = & proc_dointvec_jiffies    , . strategy  = & sysctl_jiffies    , }   , { . ctl_name  = NET_CORE_MSG_BURST  , . procname  = "message_burst"   , . data  = & global_net_msg_burst[23]    , . maxlen  = sizeof ( int )    , . mode  = 0644   , . proc_handler  = & proc_dointvec    , }   , { . ctl_name  = NET_CORE_OPTMEM_MAX  , . procname  = "optmem_max"   , . data  = & global_sysctl_optmem_max[23]    , . maxlen  = sizeof ( int )    , . mode  = 0644   , . proc_handler  = & proc_dointvec    }   , { . ctl_name  = NET_CORE_SOMAXCONN  , . procname  = "somaxconn"   , . data  = & global_sysctl_somaxconn[23]    , . maxlen  = sizeof ( int )    , . mode  = 0644   , . proc_handler  = & proc_dointvec    }   , { . ctl_name  = 0  }   }  ;  _GLOBAL_186_T  _GLOBAL_24_core_table_I [ ]  = { { . ctl_name  = NET_CORE_WMEM_MAX  , . procname  = "wmem_max"   , . data  = & global_sysctl_wmem_max[24]    , . maxlen  = sizeof ( int )    , . mode  = 0644   , . proc_handler  = & proc_dointvec    }  , { . ctl_name  = NET_CORE_RMEM_MAX  , . procname  = "rmem_max"   , . data  = & global_sysctl_rmem_max[24]    , . maxlen  = sizeof ( int )    , . mode  = 0644   , . proc_handler  = & proc_dointvec    }   , { . ctl_name  = NET_CORE_WMEM_DEFAULT  , . procname  = "wmem_default"   , . data  = & global_sysctl_wmem_default[24]    , . maxlen  = sizeof ( int )    , . mode  = 0644   , . proc_handler  = & proc_dointvec    }   , { . ctl_name  = NET_CORE_RMEM_DEFAULT  , . procname  = "rmem_default"   , . data  = & global_sysctl_rmem_default[24]    , . maxlen  = sizeof ( int )    , . mode  = 0644   , . proc_handler  = & proc_dointvec    }   , { . ctl_name  = NET_CORE_DEV_WEIGHT  , . procname  = "dev_weight"   , . data  = & global_weight_p[24]    , . maxlen  = sizeof ( int )    , . mode  = 0644   , . proc_handler  = & proc_dointvec    }   , { . ctl_name  = NET_CORE_MAX_BACKLOG  , . procname  = "netdev_max_backlog"   , . data  = & global_netdev_max_backlog[24]    , . maxlen  = sizeof ( int )    , . mode  = 0644   , . proc_handler  = & proc_dointvec    }   , { . ctl_name  = NET_CORE_NO_CONG_THRESH  , . procname  = "no_cong_thresh"   , . data  = & global_no_cong_thresh[24]    , . maxlen  = sizeof ( int )    , . mode  = 0644   , . proc_handler  = & proc_dointvec    }   , { . ctl_name  = NET_CORE_NO_CONG  , . procname  = "no_cong"   , . data  = & global_no_cong[24]    , . maxlen  = sizeof ( int )    , . mode  = 0644   , . proc_handler  = & proc_dointvec    }   , { . ctl_name  = NET_CORE_LO_CONG  , . procname  = "lo_cong"   , . data  = & global_lo_cong[24]    , . maxlen  = sizeof ( int )    , . mode  = 0644   , . proc_handler  = & proc_dointvec    }   , { . ctl_name  = NET_CORE_MOD_CONG  , . procname  = "mod_cong"   , . data  = & global_mod_cong[24]    , . maxlen  = sizeof ( int )    , . mode  = 0644   , . proc_handler  = & proc_dointvec    }   , { . ctl_name  = NET_CORE_MSG_COST  , . procname  = "message_cost"   , . data  = & global_net_msg_cost[24]    , . maxlen  = sizeof ( int )    , . mode  = 0644   , . proc_handler  = & proc_dointvec_jiffies    , . strategy  = & sysctl_jiffies    , }   , { . ctl_name  = NET_CORE_MSG_BURST  , . procname  = "message_burst"   , . data  = & global_net_msg_burst[24]    , . maxlen  = sizeof ( int )    , . mode  = 0644   , . proc_handler  = & proc_dointvec    , }   , { . ctl_name  = NET_CORE_OPTMEM_MAX  , . procname  = "optmem_max"   , . data  = & global_sysctl_optmem_max[24]    , . maxlen  = sizeof ( int )    , . mode  = 0644   , . proc_handler  = & proc_dointvec    }   , { . ctl_name  = NET_CORE_SOMAXCONN  , . procname  = "somaxconn"   , . data  = & global_sysctl_somaxconn[24]    , . maxlen  = sizeof ( int )    , . mode  = 0644   , . proc_handler  = & proc_dointvec    }   , { . ctl_name  = 0  }   }  ;  _GLOBAL_186_T  _GLOBAL_25_core_table_I [ ]  = { { . ctl_name  = NET_CORE_WMEM_MAX  , . procname  = "wmem_max"   , . data  = & global_sysctl_wmem_max[25]    , . maxlen  = sizeof ( int )    , . mode  = 0644   , . proc_handler  = & proc_dointvec    }  , { . ctl_name  = NET_CORE_RMEM_MAX  , . procname  = "rmem_max"   , . data  = & global_sysctl_rmem_max[25]    , . maxlen  = sizeof ( int )    , . mode  = 0644   , . proc_handler  = & proc_dointvec    }   , { . ctl_name  = NET_CORE_WMEM_DEFAULT  , . procname  = "wmem_default"   , . data  = & global_sysctl_wmem_default[25]    , . maxlen  = sizeof ( int )    , . mode  = 0644   , . proc_handler  = & proc_dointvec    }   , { . ctl_name  = NET_CORE_RMEM_DEFAULT  , . procname  = "rmem_default"   , . data  = & global_sysctl_rmem_default[25]    , . maxlen  = sizeof ( int )    , . mode  = 0644   , . proc_handler  = & proc_dointvec    }   , { . ctl_name  = NET_CORE_DEV_WEIGHT  , . procname  = "dev_weight"   , . data  = & global_weight_p[25]    , . maxlen  = sizeof ( int )    , . mode  = 0644   , . proc_handler  = & proc_dointvec    }   , { . ctl_name  = NET_CORE_MAX_BACKLOG  , . procname  = "netdev_max_backlog"   , . data  = & global_netdev_max_backlog[25]    , . maxlen  = sizeof ( int )    , . mode  = 0644   , . proc_handler  = & proc_dointvec    }   , { . ctl_name  = NET_CORE_NO_CONG_THRESH  , . procname  = "no_cong_thresh"   , . data  = & global_no_cong_thresh[25]    , . maxlen  = sizeof ( int )    , . mode  = 0644   , . proc_handler  = & proc_dointvec    }   , { . ctl_name  = NET_CORE_NO_CONG  , . procname  = "no_cong"   , . data  = & global_no_cong[25]    , . maxlen  = sizeof ( int )    , . mode  = 0644   , . proc_handler  = & proc_dointvec    }   , { . ctl_name  = NET_CORE_LO_CONG  , . procname  = "lo_cong"   , . data  = & global_lo_cong[25]    , . maxlen  = sizeof ( int )    , . mode  = 0644   , . proc_handler  = & proc_dointvec    }   , { . ctl_name  = NET_CORE_MOD_CONG  , . procname  = "mod_cong"   , . data  = & global_mod_cong[25]    , . maxlen  = sizeof ( int )    , . mode  = 0644   , . proc_handler  = & proc_dointvec    }   , { . ctl_name  = NET_CORE_MSG_COST  , . procname  = "message_cost"   , . data  = & global_net_msg_cost[25]    , . maxlen  = sizeof ( int )    , . mode  = 0644   , . proc_handler  = & proc_dointvec_jiffies    , . strategy  = & sysctl_jiffies    , }   , { . ctl_name  = NET_CORE_MSG_BURST  , . procname  = "message_burst"   , . data  = & global_net_msg_burst[25]    , . maxlen  = sizeof ( int )    , . mode  = 0644   , . proc_handler  = & proc_dointvec    , }   , { . ctl_name  = NET_CORE_OPTMEM_MAX  , . procname  = "optmem_max"   , . data  = & global_sysctl_optmem_max[25]    , . maxlen  = sizeof ( int )    , . mode  = 0644   , . proc_handler  = & proc_dointvec    }   , { . ctl_name  = NET_CORE_SOMAXCONN  , . procname  = "somaxconn"   , . data  = & global_sysctl_somaxconn[25]    , . maxlen  = sizeof ( int )    , . mode  = 0644   , . proc_handler  = & proc_dointvec    }   , { . ctl_name  = 0  }   }  ;  _GLOBAL_186_T  _GLOBAL_26_core_table_I [ ]  = { { . ctl_name  = NET_CORE_WMEM_MAX  , . procname  = "wmem_max"   , . data  = & global_sysctl_wmem_max[26]    , . maxlen  = sizeof ( int )    , . mode  = 0644   , . proc_handler  = & proc_dointvec    }  , { . ctl_name  = NET_CORE_RMEM_MAX  , . procname  = "rmem_max"   , . data  = & global_sysctl_rmem_max[26]    , . maxlen  = sizeof ( int )    , . mode  = 0644   , . proc_handler  = & proc_dointvec    }   , { . ctl_name  = NET_CORE_WMEM_DEFAULT  , . procname  = "wmem_default"   , . data  = & global_sysctl_wmem_default[26]    , . maxlen  = sizeof ( int )    , . mode  = 0644   , . proc_handler  = & proc_dointvec    }   , { . ctl_name  = NET_CORE_RMEM_DEFAULT  , . procname  = "rmem_default"   , . data  = & global_sysctl_rmem_default[26]    , . maxlen  = sizeof ( int )    , . mode  = 0644   , . proc_handler  = & proc_dointvec    }   , { . ctl_name  = NET_CORE_DEV_WEIGHT  , . procname  = "dev_weight"   , . data  = & global_weight_p[26]    , . maxlen  = sizeof ( int )    , . mode  = 0644   , . proc_handler  = & proc_dointvec    }   , { . ctl_name  = NET_CORE_MAX_BACKLOG  , . procname  = "netdev_max_backlog"   , . data  = & global_netdev_max_backlog[26]    , . maxlen  = sizeof ( int )    , . mode  = 0644   , . proc_handler  = & proc_dointvec    }   , { . ctl_name  = NET_CORE_NO_CONG_THRESH  , . procname  = "no_cong_thresh"   , . data  = & global_no_cong_thresh[26]    , . maxlen  = sizeof ( int )    , . mode  = 0644   , . proc_handler  = & proc_dointvec    }   , { . ctl_name  = NET_CORE_NO_CONG  , . procname  = "no_cong"   , . data  = & global_no_cong[26]    , . maxlen  = sizeof ( int )    , . mode  = 0644   , . proc_handler  = & proc_dointvec    }   , { . ctl_name  = NET_CORE_LO_CONG  , . procname  = "lo_cong"   , . data  = & global_lo_cong[26]    , . maxlen  = sizeof ( int )    , . mode  = 0644   , . proc_handler  = & proc_dointvec    }   , { . ctl_name  = NET_CORE_MOD_CONG  , . procname  = "mod_cong"   , . data  = & global_mod_cong[26]    , . maxlen  = sizeof ( int )    , . mode  = 0644   , . proc_handler  = & proc_dointvec    }   , { . ctl_name  = NET_CORE_MSG_COST  , . procname  = "message_cost"   , . data  = & global_net_msg_cost[26]    , . maxlen  = sizeof ( int )    , . mode  = 0644   , . proc_handler  = & proc_dointvec_jiffies    , . strategy  = & sysctl_jiffies    , }   , { . ctl_name  = NET_CORE_MSG_BURST  , . procname  = "message_burst"   , . data  = & global_net_msg_burst[26]    , . maxlen  = sizeof ( int )    , . mode  = 0644   , . proc_handler  = & proc_dointvec    , }   , { . ctl_name  = NET_CORE_OPTMEM_MAX  , . procname  = "optmem_max"   , . data  = & global_sysctl_optmem_max[26]    , . maxlen  = sizeof ( int )    , . mode  = 0644   , . proc_handler  = & proc_dointvec    }   , { . ctl_name  = NET_CORE_SOMAXCONN  , . procname  = "somaxconn"   , . data  = & global_sysctl_somaxconn[26]    , . maxlen  = sizeof ( int )    , . mode  = 0644   , . proc_handler  = & proc_dointvec    }   , { . ctl_name  = 0  }   }  ;  _GLOBAL_186_T  _GLOBAL_27_core_table_I [ ]  = { { . ctl_name  = NET_CORE_WMEM_MAX  , . procname  = "wmem_max"   , . data  = & global_sysctl_wmem_max[27]    , . maxlen  = sizeof ( int )    , . mode  = 0644   , . proc_handler  = & proc_dointvec    }  , { . ctl_name  = NET_CORE_RMEM_MAX  , . procname  = "rmem_max"   , . data  = & global_sysctl_rmem_max[27]    , . maxlen  = sizeof ( int )    , . mode  = 0644   , . proc_handler  = & proc_dointvec    }   , { . ctl_name  = NET_CORE_WMEM_DEFAULT  , . procname  = "wmem_default"   , . data  = & global_sysctl_wmem_default[27]    , . maxlen  = sizeof ( int )    , . mode  = 0644   , . proc_handler  = & proc_dointvec    }   , { . ctl_name  = NET_CORE_RMEM_DEFAULT  , . procname  = "rmem_default"   , . data  = & global_sysctl_rmem_default[27]    , . maxlen  = sizeof ( int )    , . mode  = 0644   , . proc_handler  = & proc_dointvec    }   , { . ctl_name  = NET_CORE_DEV_WEIGHT  , . procname  = "dev_weight"   , . data  = & global_weight_p[27]    , . maxlen  = sizeof ( int )    , . mode  = 0644   , . proc_handler  = & proc_dointvec    }   , { . ctl_name  = NET_CORE_MAX_BACKLOG  , . procname  = "netdev_max_backlog"   , . data  = & global_netdev_max_backlog[27]    , . maxlen  = sizeof ( int )    , . mode  = 0644   , . proc_handler  = & proc_dointvec    }   , { . ctl_name  = NET_CORE_NO_CONG_THRESH  , . procname  = "no_cong_thresh"   , . data  = & global_no_cong_thresh[27]    , . maxlen  = sizeof ( int )    , . mode  = 0644   , . proc_handler  = & proc_dointvec    }   , { . ctl_name  = NET_CORE_NO_CONG  , . procname  = "no_cong"   , . data  = & global_no_cong[27]    , . maxlen  = sizeof ( int )    , . mode  = 0644   , . proc_handler  = & proc_dointvec    }   , { . ctl_name  = NET_CORE_LO_CONG  , . procname  = "lo_cong"   , . data  = & global_lo_cong[27]    , . maxlen  = sizeof ( int )    , . mode  = 0644   , . proc_handler  = & proc_dointvec    }   , { . ctl_name  = NET_CORE_MOD_CONG  , . procname  = "mod_cong"   , . data  = & global_mod_cong[27]    , . maxlen  = sizeof ( int )    , . mode  = 0644   , . proc_handler  = & proc_dointvec    }   , { . ctl_name  = NET_CORE_MSG_COST  , . procname  = "message_cost"   , . data  = & global_net_msg_cost[27]    , . maxlen  = sizeof ( int )    , . mode  = 0644   , . proc_handler  = & proc_dointvec_jiffies    , . strategy  = & sysctl_jiffies    , }   , { . ctl_name  = NET_CORE_MSG_BURST  , . procname  = "message_burst"   , . data  = & global_net_msg_burst[27]    , . maxlen  = sizeof ( int )    , . mode  = 0644   , . proc_handler  = & proc_dointvec    , }   , { . ctl_name  = NET_CORE_OPTMEM_MAX  , . procname  = "optmem_max"   , . data  = & global_sysctl_optmem_max[27]    , . maxlen  = sizeof ( int )    , . mode  = 0644   , . proc_handler  = & proc_dointvec    }   , { . ctl_name  = NET_CORE_SOMAXCONN  , . procname  = "somaxconn"   , . data  = & global_sysctl_somaxconn[27]    , . maxlen  = sizeof ( int )    , . mode  = 0644   , . proc_handler  = & proc_dointvec    }   , { . ctl_name  = 0  }   }  ;  _GLOBAL_186_T  _GLOBAL_28_core_table_I [ ]  = { { . ctl_name  = NET_CORE_WMEM_MAX  , . procname  = "wmem_max"   , . data  = & global_sysctl_wmem_max[28]    , . maxlen  = sizeof ( int )    , . mode  = 0644   , . proc_handler  = & proc_dointvec    }  , { . ctl_name  = NET_CORE_RMEM_MAX  , . procname  = "rmem_max"   , . data  = & global_sysctl_rmem_max[28]    , . maxlen  = sizeof ( int )    , . mode  = 0644   , . proc_handler  = & proc_dointvec    }   , { . ctl_name  = NET_CORE_WMEM_DEFAULT  , . procname  = "wmem_default"   , . data  = & global_sysctl_wmem_default[28]    , . maxlen  = sizeof ( int )    , . mode  = 0644   , . proc_handler  = & proc_dointvec    }   , { . ctl_name  = NET_CORE_RMEM_DEFAULT  , . procname  = "rmem_default"   , . data  = & global_sysctl_rmem_default[28]    , . maxlen  = sizeof ( int )    , . mode  = 0644   , . proc_handler  = & proc_dointvec    }   , { . ctl_name  = NET_CORE_DEV_WEIGHT  , . procname  = "dev_weight"   , . data  = & global_weight_p[28]    , . maxlen  = sizeof ( int )    , . mode  = 0644   , . proc_handler  = & proc_dointvec    }   , { . ctl_name  = NET_CORE_MAX_BACKLOG  , . procname  = "netdev_max_backlog"   , . data  = & global_netdev_max_backlog[28]    , . maxlen  = sizeof ( int )    , . mode  = 0644   , . proc_handler  = & proc_dointvec    }   , { . ctl_name  = NET_CORE_NO_CONG_THRESH  , . procname  = "no_cong_thresh"   , . data  = & global_no_cong_thresh[28]    , . maxlen  = sizeof ( int )    , . mode  = 0644   , . proc_handler  = & proc_dointvec    }   , { . ctl_name  = NET_CORE_NO_CONG  , . procname  = "no_cong"   , . data  = & global_no_cong[28]    , . maxlen  = sizeof ( int )    , . mode  = 0644   , . proc_handler  = & proc_dointvec    }   , { . ctl_name  = NET_CORE_LO_CONG  , . procname  = "lo_cong"   , . data  = & global_lo_cong[28]    , . maxlen  = sizeof ( int )    , . mode  = 0644   , . proc_handler  = & proc_dointvec    }   , { . ctl_name  = NET_CORE_MOD_CONG  , . procname  = "mod_cong"   , . data  = & global_mod_cong[28]    , . maxlen  = sizeof ( int )    , . mode  = 0644   , . proc_handler  = & proc_dointvec    }   , { . ctl_name  = NET_CORE_MSG_COST  , . procname  = "message_cost"   , . data  = & global_net_msg_cost[28]    , . maxlen  = sizeof ( int )    , . mode  = 0644   , . proc_handler  = & proc_dointvec_jiffies    , . strategy  = & sysctl_jiffies    , }   , { . ctl_name  = NET_CORE_MSG_BURST  , . procname  = "message_burst"   , . data  = & global_net_msg_burst[28]    , . maxlen  = sizeof ( int )    , . mode  = 0644   , . proc_handler  = & proc_dointvec    , }   , { . ctl_name  = NET_CORE_OPTMEM_MAX  , . procname  = "optmem_max"   , . data  = & global_sysctl_optmem_max[28]    , . maxlen  = sizeof ( int )    , . mode  = 0644   , . proc_handler  = & proc_dointvec    }   , { . ctl_name  = NET_CORE_SOMAXCONN  , . procname  = "somaxconn"   , . data  = & global_sysctl_somaxconn[28]    , . maxlen  = sizeof ( int )    , . mode  = 0644   , . proc_handler  = & proc_dointvec    }   , { . ctl_name  = 0  }   }  ;  _GLOBAL_186_T  _GLOBAL_29_core_table_I [ ]  = { { . ctl_name  = NET_CORE_WMEM_MAX  , . procname  = "wmem_max"   , . data  = & global_sysctl_wmem_max[29]    , . maxlen  = sizeof ( int )    , . mode  = 0644   , . proc_handler  = & proc_dointvec    }  , { . ctl_name  = NET_CORE_RMEM_MAX  , . procname  = "rmem_max"   , . data  = & global_sysctl_rmem_max[29]    , . maxlen  = sizeof ( int )    , . mode  = 0644   , . proc_handler  = & proc_dointvec    }   , { . ctl_name  = NET_CORE_WMEM_DEFAULT  , . procname  = "wmem_default"   , . data  = & global_sysctl_wmem_default[29]    , . maxlen  = sizeof ( int )    , . mode  = 0644   , . proc_handler  = & proc_dointvec    }   , { . ctl_name  = NET_CORE_RMEM_DEFAULT  , . procname  = "rmem_default"   , . data  = & global_sysctl_rmem_default[29]    , . maxlen  = sizeof ( int )    , . mode  = 0644   , . proc_handler  = & proc_dointvec    }   , { . ctl_name  = NET_CORE_DEV_WEIGHT  , . procname  = "dev_weight"   , . data  = & global_weight_p[29]    , . maxlen  = sizeof ( int )    , . mode  = 0644   , . proc_handler  = & proc_dointvec    }   , { . ctl_name  = NET_CORE_MAX_BACKLOG  , . procname  = "netdev_max_backlog"   , . data  = & global_netdev_max_backlog[29]    , . maxlen  = sizeof ( int )    , . mode  = 0644   , . proc_handler  = & proc_dointvec    }   , { . ctl_name  = NET_CORE_NO_CONG_THRESH  , . procname  = "no_cong_thresh"   , . data  = & global_no_cong_thresh[29]    , . maxlen  = sizeof ( int )    , . mode  = 0644   , . proc_handler  = & proc_dointvec    }   , { . ctl_name  = NET_CORE_NO_CONG  , . procname  = "no_cong"   , . data  = & global_no_cong[29]    , . maxlen  = sizeof ( int )    , . mode  = 0644   , . proc_handler  = & proc_dointvec    }   , { . ctl_name  = NET_CORE_LO_CONG  , . procname  = "lo_cong"   , . data  = & global_lo_cong[29]    , . maxlen  = sizeof ( int )    , . mode  = 0644   , . proc_handler  = & proc_dointvec    }   , { . ctl_name  = NET_CORE_MOD_CONG  , . procname  = "mod_cong"   , . data  = & global_mod_cong[29]    , . maxlen  = sizeof ( int )    , . mode  = 0644   , . proc_handler  = & proc_dointvec    }   , { . ctl_name  = NET_CORE_MSG_COST  , . procname  = "message_cost"   , . data  = & global_net_msg_cost[29]    , . maxlen  = sizeof ( int )    , . mode  = 0644   , . proc_handler  = & proc_dointvec_jiffies    , . strategy  = & sysctl_jiffies    , }   , { . ctl_name  = NET_CORE_MSG_BURST  , . procname  = "message_burst"   , . data  = & global_net_msg_burst[29]    , . maxlen  = sizeof ( int )    , . mode  = 0644   , . proc_handler  = & proc_dointvec    , }   , { . ctl_name  = NET_CORE_OPTMEM_MAX  , . procname  = "optmem_max"   , . data  = & global_sysctl_optmem_max[29]    , . maxlen  = sizeof ( int )    , . mode  = 0644   , . proc_handler  = & proc_dointvec    }   , { . ctl_name  = NET_CORE_SOMAXCONN  , . procname  = "somaxconn"   , . data  = & global_sysctl_somaxconn[29]    , . maxlen  = sizeof ( int )    , . mode  = 0644   , . proc_handler  = & proc_dointvec    }   , { . ctl_name  = 0  }   }  ;  _GLOBAL_186_T  _GLOBAL_30_core_table_I [ ]  = { { . ctl_name  = NET_CORE_WMEM_MAX  , . procname  = "wmem_max"   , . data  = & global_sysctl_wmem_max[30]    , . maxlen  = sizeof ( int )    , . mode  = 0644   , . proc_handler  = & proc_dointvec    }  , { . ctl_name  = NET_CORE_RMEM_MAX  , . procname  = "rmem_max"   , . data  = & global_sysctl_rmem_max[30]    , . maxlen  = sizeof ( int )    , . mode  = 0644   , . proc_handler  = & proc_dointvec    }   , { . ctl_name  = NET_CORE_WMEM_DEFAULT  , . procname  = "wmem_default"   , . data  = & global_sysctl_wmem_default[30]    , . maxlen  = sizeof ( int )    , . mode  = 0644   , . proc_handler  = & proc_dointvec    }   , { . ctl_name  = NET_CORE_RMEM_DEFAULT  , . procname  = "rmem_default"   , . data  = & global_sysctl_rmem_default[30]    , . maxlen  = sizeof ( int )    , . mode  = 0644   , . proc_handler  = & proc_dointvec    }   , { . ctl_name  = NET_CORE_DEV_WEIGHT  , . procname  = "dev_weight"   , . data  = & global_weight_p[30]    , . maxlen  = sizeof ( int )    , . mode  = 0644   , . proc_handler  = & proc_dointvec    }   , { . ctl_name  = NET_CORE_MAX_BACKLOG  , . procname  = "netdev_max_backlog"   , . data  = & global_netdev_max_backlog[30]    , . maxlen  = sizeof ( int )    , . mode  = 0644   , . proc_handler  = & proc_dointvec    }   , { . ctl_name  = NET_CORE_NO_CONG_THRESH  , . procname  = "no_cong_thresh"   , . data  = & global_no_cong_thresh[30]    , . maxlen  = sizeof ( int )    , . mode  = 0644   , . proc_handler  = & proc_dointvec    }   , { . ctl_name  = NET_CORE_NO_CONG  , . procname  = "no_cong"   , . data  = & global_no_cong[30]    , . maxlen  = sizeof ( int )    , . mode  = 0644   , . proc_handler  = & proc_dointvec    }   , { . ctl_name  = NET_CORE_LO_CONG  , . procname  = "lo_cong"   , . data  = & global_lo_cong[30]    , . maxlen  = sizeof ( int )    , . mode  = 0644   , . proc_handler  = & proc_dointvec    }   , { . ctl_name  = NET_CORE_MOD_CONG  , . procname  = "mod_cong"   , . data  = & global_mod_cong[30]    , . maxlen  = sizeof ( int )    , . mode  = 0644   , . proc_handler  = & proc_dointvec    }   , { . ctl_name  = NET_CORE_MSG_COST  , . procname  = "message_cost"   , . data  = & global_net_msg_cost[30]    , . maxlen  = sizeof ( int )    , . mode  = 0644   , . proc_handler  = & proc_dointvec_jiffies    , . strategy  = & sysctl_jiffies    , }   , { . ctl_name  = NET_CORE_MSG_BURST  , . procname  = "message_burst"   , . data  = & global_net_msg_burst[30]    , . maxlen  = sizeof ( int )    , . mode  = 0644   , . proc_handler  = & proc_dointvec    , }   , { . ctl_name  = NET_CORE_OPTMEM_MAX  , . procname  = "optmem_max"   , . data  = & global_sysctl_optmem_max[30]    , . maxlen  = sizeof ( int )    , . mode  = 0644   , . proc_handler  = & proc_dointvec    }   , { . ctl_name  = NET_CORE_SOMAXCONN  , . procname  = "somaxconn"   , . data  = & global_sysctl_somaxconn[30]    , . maxlen  = sizeof ( int )    , . mode  = 0644   , . proc_handler  = & proc_dointvec    }   , { . ctl_name  = 0  }   }  ;  _GLOBAL_186_T  _GLOBAL_31_core_table_I [ ]  = { { . ctl_name  = NET_CORE_WMEM_MAX  , . procname  = "wmem_max"   , . data  = & global_sysctl_wmem_max[31]    , . maxlen  = sizeof ( int )    , . mode  = 0644   , . proc_handler  = & proc_dointvec    }  , { . ctl_name  = NET_CORE_RMEM_MAX  , . procname  = "rmem_max"   , . data  = & global_sysctl_rmem_max[31]    , . maxlen  = sizeof ( int )    , . mode  = 0644   , . proc_handler  = & proc_dointvec    }   , { . ctl_name  = NET_CORE_WMEM_DEFAULT  , . procname  = "wmem_default"   , . data  = & global_sysctl_wmem_default[31]    , . maxlen  = sizeof ( int )    , . mode  = 0644   , . proc_handler  = & proc_dointvec    }   , { . ctl_name  = NET_CORE_RMEM_DEFAULT  , . procname  = "rmem_default"   , . data  = & global_sysctl_rmem_default[31]    , . maxlen  = sizeof ( int )    , . mode  = 0644   , . proc_handler  = & proc_dointvec    }   , { . ctl_name  = NET_CORE_DEV_WEIGHT  , . procname  = "dev_weight"   , . data  = & global_weight_p[31]    , . maxlen  = sizeof ( int )    , . mode  = 0644   , . proc_handler  = & proc_dointvec    }   , { . ctl_name  = NET_CORE_MAX_BACKLOG  , . procname  = "netdev_max_backlog"   , . data  = & global_netdev_max_backlog[31]    , . maxlen  = sizeof ( int )    , . mode  = 0644   , . proc_handler  = & proc_dointvec    }   , { . ctl_name  = NET_CORE_NO_CONG_THRESH  , . procname  = "no_cong_thresh"   , . data  = & global_no_cong_thresh[31]    , . maxlen  = sizeof ( int )    , . mode  = 0644   , . proc_handler  = & proc_dointvec    }   , { . ctl_name  = NET_CORE_NO_CONG  , . procname  = "no_cong"   , . data  = & global_no_cong[31]    , . maxlen  = sizeof ( int )    , . mode  = 0644   , . proc_handler  = & proc_dointvec    }   , { . ctl_name  = NET_CORE_LO_CONG  , . procname  = "lo_cong"   , . data  = & global_lo_cong[31]    , . maxlen  = sizeof ( int )    , . mode  = 0644   , . proc_handler  = & proc_dointvec    }   , { . ctl_name  = NET_CORE_MOD_CONG  , . procname  = "mod_cong"   , . data  = & global_mod_cong[31]    , . maxlen  = sizeof ( int )    , . mode  = 0644   , . proc_handler  = & proc_dointvec    }   , { . ctl_name  = NET_CORE_MSG_COST  , . procname  = "message_cost"   , . data  = & global_net_msg_cost[31]    , . maxlen  = sizeof ( int )    , . mode  = 0644   , . proc_handler  = & proc_dointvec_jiffies    , . strategy  = & sysctl_jiffies    , }   , { . ctl_name  = NET_CORE_MSG_BURST  , . procname  = "message_burst"   , . data  = & global_net_msg_burst[31]    , . maxlen  = sizeof ( int )    , . mode  = 0644   , . proc_handler  = & proc_dointvec    , }   , { . ctl_name  = NET_CORE_OPTMEM_MAX  , . procname  = "optmem_max"   , . data  = & global_sysctl_optmem_max[31]    , . maxlen  = sizeof ( int )    , . mode  = 0644   , . proc_handler  = & proc_dointvec    }   , { . ctl_name  = NET_CORE_SOMAXCONN  , . procname  = "somaxconn"   , . data  = & global_sysctl_somaxconn[31]    , . maxlen  = sizeof ( int )    , . mode  = 0644   , . proc_handler  = & proc_dointvec    }   , { . ctl_name  = 0  }   }  ;  _GLOBAL_186_T  _GLOBAL_32_core_table_I [ ]  = { { . ctl_name  = NET_CORE_WMEM_MAX  , . procname  = "wmem_max"   , . data  = & global_sysctl_wmem_max[32]    , . maxlen  = sizeof ( int )    , . mode  = 0644   , . proc_handler  = & proc_dointvec    }  , { . ctl_name  = NET_CORE_RMEM_MAX  , . procname  = "rmem_max"   , . data  = & global_sysctl_rmem_max[32]    , . maxlen  = sizeof ( int )    , . mode  = 0644   , . proc_handler  = & proc_dointvec    }   , { . ctl_name  = NET_CORE_WMEM_DEFAULT  , . procname  = "wmem_default"   , . data  = & global_sysctl_wmem_default[32]    , . maxlen  = sizeof ( int )    , . mode  = 0644   , . proc_handler  = & proc_dointvec    }   , { . ctl_name  = NET_CORE_RMEM_DEFAULT  , . procname  = "rmem_default"   , . data  = & global_sysctl_rmem_default[32]    , . maxlen  = sizeof ( int )    , . mode  = 0644   , . proc_handler  = & proc_dointvec    }   , { . ctl_name  = NET_CORE_DEV_WEIGHT  , . procname  = "dev_weight"   , . data  = & global_weight_p[32]    , . maxlen  = sizeof ( int )    , . mode  = 0644   , . proc_handler  = & proc_dointvec    }   , { . ctl_name  = NET_CORE_MAX_BACKLOG  , . procname  = "netdev_max_backlog"   , . data  = & global_netdev_max_backlog[32]    , . maxlen  = sizeof ( int )    , . mode  = 0644   , . proc_handler  = & proc_dointvec    }   , { . ctl_name  = NET_CORE_NO_CONG_THRESH  , . procname  = "no_cong_thresh"   , . data  = & global_no_cong_thresh[32]    , . maxlen  = sizeof ( int )    , . mode  = 0644   , . proc_handler  = & proc_dointvec    }   , { . ctl_name  = NET_CORE_NO_CONG  , . procname  = "no_cong"   , . data  = & global_no_cong[32]    , . maxlen  = sizeof ( int )    , . mode  = 0644   , . proc_handler  = & proc_dointvec    }   , { . ctl_name  = NET_CORE_LO_CONG  , . procname  = "lo_cong"   , . data  = & global_lo_cong[32]    , . maxlen  = sizeof ( int )    , . mode  = 0644   , . proc_handler  = & proc_dointvec    }   , { . ctl_name  = NET_CORE_MOD_CONG  , . procname  = "mod_cong"   , . data  = & global_mod_cong[32]    , . maxlen  = sizeof ( int )    , . mode  = 0644   , . proc_handler  = & proc_dointvec    }   , { . ctl_name  = NET_CORE_MSG_COST  , . procname  = "message_cost"   , . data  = & global_net_msg_cost[32]    , . maxlen  = sizeof ( int )    , . mode  = 0644   , . proc_handler  = & proc_dointvec_jiffies    , . strategy  = & sysctl_jiffies    , }   , { . ctl_name  = NET_CORE_MSG_BURST  , . procname  = "message_burst"   , . data  = & global_net_msg_burst[32]    , . maxlen  = sizeof ( int )    , . mode  = 0644   , . proc_handler  = & proc_dointvec    , }   , { . ctl_name  = NET_CORE_OPTMEM_MAX  , . procname  = "optmem_max"   , . data  = & global_sysctl_optmem_max[32]    , . maxlen  = sizeof ( int )    , . mode  = 0644   , . proc_handler  = & proc_dointvec    }   , { . ctl_name  = NET_CORE_SOMAXCONN  , . procname  = "somaxconn"   , . data  = & global_sysctl_somaxconn[32]    , . maxlen  = sizeof ( int )    , . mode  = 0644   , . proc_handler  = & proc_dointvec    }   , { . ctl_name  = 0  }   }  ;  _GLOBAL_186_T  _GLOBAL_33_core_table_I [ ]  = { { . ctl_name  = NET_CORE_WMEM_MAX  , . procname  = "wmem_max"   , . data  = & global_sysctl_wmem_max[33]    , . maxlen  = sizeof ( int )    , . mode  = 0644   , . proc_handler  = & proc_dointvec    }  , { . ctl_name  = NET_CORE_RMEM_MAX  , . procname  = "rmem_max"   , . data  = & global_sysctl_rmem_max[33]    , . maxlen  = sizeof ( int )    , . mode  = 0644   , . proc_handler  = & proc_dointvec    }   , { . ctl_name  = NET_CORE_WMEM_DEFAULT  , . procname  = "wmem_default"   , . data  = & global_sysctl_wmem_default[33]    , . maxlen  = sizeof ( int )    , . mode  = 0644   , . proc_handler  = & proc_dointvec    }   , { . ctl_name  = NET_CORE_RMEM_DEFAULT  , . procname  = "rmem_default"   , . data  = & global_sysctl_rmem_default[33]    , . maxlen  = sizeof ( int )    , . mode  = 0644   , . proc_handler  = & proc_dointvec    }   , { . ctl_name  = NET_CORE_DEV_WEIGHT  , . procname  = "dev_weight"   , . data  = & global_weight_p[33]    , . maxlen  = sizeof ( int )    , . mode  = 0644   , . proc_handler  = & proc_dointvec    }   , { . ctl_name  = NET_CORE_MAX_BACKLOG  , . procname  = "netdev_max_backlog"   , . data  = & global_netdev_max_backlog[33]    , . maxlen  = sizeof ( int )    , . mode  = 0644   , . proc_handler  = & proc_dointvec    }   , { . ctl_name  = NET_CORE_NO_CONG_THRESH  , . procname  = "no_cong_thresh"   , . data  = & global_no_cong_thresh[33]    , . maxlen  = sizeof ( int )    , . mode  = 0644   , . proc_handler  = & proc_dointvec    }   , { . ctl_name  = NET_CORE_NO_CONG  , . procname  = "no_cong"   , . data  = & global_no_cong[33]    , . maxlen  = sizeof ( int )    , . mode  = 0644   , . proc_handler  = & proc_dointvec    }   , { . ctl_name  = NET_CORE_LO_CONG  , . procname  = "lo_cong"   , . data  = & global_lo_cong[33]    , . maxlen  = sizeof ( int )    , . mode  = 0644   , . proc_handler  = & proc_dointvec    }   , { . ctl_name  = NET_CORE_MOD_CONG  , . procname  = "mod_cong"   , . data  = & global_mod_cong[33]    , . maxlen  = sizeof ( int )    , . mode  = 0644   , . proc_handler  = & proc_dointvec    }   , { . ctl_name  = NET_CORE_MSG_COST  , . procname  = "message_cost"   , . data  = & global_net_msg_cost[33]    , . maxlen  = sizeof ( int )    , . mode  = 0644   , . proc_handler  = & proc_dointvec_jiffies    , . strategy  = & sysctl_jiffies    , }   , { . ctl_name  = NET_CORE_MSG_BURST  , . procname  = "message_burst"   , . data  = & global_net_msg_burst[33]    , . maxlen  = sizeof ( int )    , . mode  = 0644   , . proc_handler  = & proc_dointvec    , }   , { . ctl_name  = NET_CORE_OPTMEM_MAX  , . procname  = "optmem_max"   , . data  = & global_sysctl_optmem_max[33]    , . maxlen  = sizeof ( int )    , . mode  = 0644   , . proc_handler  = & proc_dointvec    }   , { . ctl_name  = NET_CORE_SOMAXCONN  , . procname  = "somaxconn"   , . data  = & global_sysctl_somaxconn[33]    , . maxlen  = sizeof ( int )    , . mode  = 0644   , . proc_handler  = & proc_dointvec    }   , { . ctl_name  = 0  }   }  ;  _GLOBAL_186_T  _GLOBAL_34_core_table_I [ ]  = { { . ctl_name  = NET_CORE_WMEM_MAX  , . procname  = "wmem_max"   , . data  = & global_sysctl_wmem_max[34]    , . maxlen  = sizeof ( int )    , . mode  = 0644   , . proc_handler  = & proc_dointvec    }  , { . ctl_name  = NET_CORE_RMEM_MAX  , . procname  = "rmem_max"   , . data  = & global_sysctl_rmem_max[34]    , . maxlen  = sizeof ( int )    , . mode  = 0644   , . proc_handler  = & proc_dointvec    }   , { . ctl_name  = NET_CORE_WMEM_DEFAULT  , . procname  = "wmem_default"   , . data  = & global_sysctl_wmem_default[34]    , . maxlen  = sizeof ( int )    , . mode  = 0644   , . proc_handler  = & proc_dointvec    }   , { . ctl_name  = NET_CORE_RMEM_DEFAULT  , . procname  = "rmem_default"   , . data  = & global_sysctl_rmem_default[34]    , . maxlen  = sizeof ( int )    , . mode  = 0644   , . proc_handler  = & proc_dointvec    }   , { . ctl_name  = NET_CORE_DEV_WEIGHT  , . procname  = "dev_weight"   , . data  = & global_weight_p[34]    , . maxlen  = sizeof ( int )    , . mode  = 0644   , . proc_handler  = & proc_dointvec    }   , { . ctl_name  = NET_CORE_MAX_BACKLOG  , . procname  = "netdev_max_backlog"   , . data  = & global_netdev_max_backlog[34]    , . maxlen  = sizeof ( int )    , . mode  = 0644   , . proc_handler  = & proc_dointvec    }   , { . ctl_name  = NET_CORE_NO_CONG_THRESH  , . procname  = "no_cong_thresh"   , . data  = & global_no_cong_thresh[34]    , . maxlen  = sizeof ( int )    , . mode  = 0644   , . proc_handler  = & proc_dointvec    }   , { . ctl_name  = NET_CORE_NO_CONG  , . procname  = "no_cong"   , . data  = & global_no_cong[34]    , . maxlen  = sizeof ( int )    , . mode  = 0644   , . proc_handler  = & proc_dointvec    }   , { . ctl_name  = NET_CORE_LO_CONG  , . procname  = "lo_cong"   , . data  = & global_lo_cong[34]    , . maxlen  = sizeof ( int )    , . mode  = 0644   , . proc_handler  = & proc_dointvec    }   , { . ctl_name  = NET_CORE_MOD_CONG  , . procname  = "mod_cong"   , . data  = & global_mod_cong[34]    , . maxlen  = sizeof ( int )    , . mode  = 0644   , . proc_handler  = & proc_dointvec    }   , { . ctl_name  = NET_CORE_MSG_COST  , . procname  = "message_cost"   , . data  = & global_net_msg_cost[34]    , . maxlen  = sizeof ( int )    , . mode  = 0644   , . proc_handler  = & proc_dointvec_jiffies    , . strategy  = & sysctl_jiffies    , }   , { . ctl_name  = NET_CORE_MSG_BURST  , . procname  = "message_burst"   , . data  = & global_net_msg_burst[34]    , . maxlen  = sizeof ( int )    , . mode  = 0644   , . proc_handler  = & proc_dointvec    , }   , { . ctl_name  = NET_CORE_OPTMEM_MAX  , . procname  = "optmem_max"   , . data  = & global_sysctl_optmem_max[34]    , . maxlen  = sizeof ( int )    , . mode  = 0644   , . proc_handler  = & proc_dointvec    }   , { . ctl_name  = NET_CORE_SOMAXCONN  , . procname  = "somaxconn"   , . data  = & global_sysctl_somaxconn[34]    , . maxlen  = sizeof ( int )    , . mode  = 0644   , . proc_handler  = & proc_dointvec    }   , { . ctl_name  = 0  }   }  ;  _GLOBAL_186_T  _GLOBAL_35_core_table_I [ ]  = { { . ctl_name  = NET_CORE_WMEM_MAX  , . procname  = "wmem_max"   , . data  = & global_sysctl_wmem_max[35]    , . maxlen  = sizeof ( int )    , . mode  = 0644   , . proc_handler  = & proc_dointvec    }  , { . ctl_name  = NET_CORE_RMEM_MAX  , . procname  = "rmem_max"   , . data  = & global_sysctl_rmem_max[35]    , . maxlen  = sizeof ( int )    , . mode  = 0644   , . proc_handler  = & proc_dointvec    }   , { . ctl_name  = NET_CORE_WMEM_DEFAULT  , . procname  = "wmem_default"   , . data  = & global_sysctl_wmem_default[35]    , . maxlen  = sizeof ( int )    , . mode  = 0644   , . proc_handler  = & proc_dointvec    }   , { . ctl_name  = NET_CORE_RMEM_DEFAULT  , . procname  = "rmem_default"   , . data  = & global_sysctl_rmem_default[35]    , . maxlen  = sizeof ( int )    , . mode  = 0644   , . proc_handler  = & proc_dointvec    }   , { . ctl_name  = NET_CORE_DEV_WEIGHT  , . procname  = "dev_weight"   , . data  = & global_weight_p[35]    , . maxlen  = sizeof ( int )    , . mode  = 0644   , . proc_handler  = & proc_dointvec    }   , { . ctl_name  = NET_CORE_MAX_BACKLOG  , . procname  = "netdev_max_backlog"   , . data  = & global_netdev_max_backlog[35]    , . maxlen  = sizeof ( int )    , . mode  = 0644   , . proc_handler  = & proc_dointvec    }   , { . ctl_name  = NET_CORE_NO_CONG_THRESH  , . procname  = "no_cong_thresh"   , . data  = & global_no_cong_thresh[35]    , . maxlen  = sizeof ( int )    , . mode  = 0644   , . proc_handler  = & proc_dointvec    }   , { . ctl_name  = NET_CORE_NO_CONG  , . procname  = "no_cong"   , . data  = & global_no_cong[35]    , . maxlen  = sizeof ( int )    , . mode  = 0644   , . proc_handler  = & proc_dointvec    }   , { . ctl_name  = NET_CORE_LO_CONG  , . procname  = "lo_cong"   , . data  = & global_lo_cong[35]    , . maxlen  = sizeof ( int )    , . mode  = 0644   , . proc_handler  = & proc_dointvec    }   , { . ctl_name  = NET_CORE_MOD_CONG  , . procname  = "mod_cong"   , . data  = & global_mod_cong[35]    , . maxlen  = sizeof ( int )    , . mode  = 0644   , . proc_handler  = & proc_dointvec    }   , { . ctl_name  = NET_CORE_MSG_COST  , . procname  = "message_cost"   , . data  = & global_net_msg_cost[35]    , . maxlen  = sizeof ( int )    , . mode  = 0644   , . proc_handler  = & proc_dointvec_jiffies    , . strategy  = & sysctl_jiffies    , }   , { . ctl_name  = NET_CORE_MSG_BURST  , . procname  = "message_burst"   , . data  = & global_net_msg_burst[35]    , . maxlen  = sizeof ( int )    , . mode  = 0644   , . proc_handler  = & proc_dointvec    , }   , { . ctl_name  = NET_CORE_OPTMEM_MAX  , . procname  = "optmem_max"   , . data  = & global_sysctl_optmem_max[35]    , . maxlen  = sizeof ( int )    , . mode  = 0644   , . proc_handler  = & proc_dointvec    }   , { . ctl_name  = NET_CORE_SOMAXCONN  , . procname  = "somaxconn"   , . data  = & global_sysctl_somaxconn[35]    , . maxlen  = sizeof ( int )    , . mode  = 0644   , . proc_handler  = & proc_dointvec    }   , { . ctl_name  = 0  }   }  ;  _GLOBAL_186_T  _GLOBAL_36_core_table_I [ ]  = { { . ctl_name  = NET_CORE_WMEM_MAX  , . procname  = "wmem_max"   , . data  = & global_sysctl_wmem_max[36]    , . maxlen  = sizeof ( int )    , . mode  = 0644   , . proc_handler  = & proc_dointvec    }  , { . ctl_name  = NET_CORE_RMEM_MAX  , . procname  = "rmem_max"   , . data  = & global_sysctl_rmem_max[36]    , . maxlen  = sizeof ( int )    , . mode  = 0644   , . proc_handler  = & proc_dointvec    }   , { . ctl_name  = NET_CORE_WMEM_DEFAULT  , . procname  = "wmem_default"   , . data  = & global_sysctl_wmem_default[36]    , . maxlen  = sizeof ( int )    , . mode  = 0644   , . proc_handler  = & proc_dointvec    }   , { . ctl_name  = NET_CORE_RMEM_DEFAULT  , . procname  = "rmem_default"   , . data  = & global_sysctl_rmem_default[36]    , . maxlen  = sizeof ( int )    , . mode  = 0644   , . proc_handler  = & proc_dointvec    }   , { . ctl_name  = NET_CORE_DEV_WEIGHT  , . procname  = "dev_weight"   , . data  = & global_weight_p[36]    , . maxlen  = sizeof ( int )    , . mode  = 0644   , . proc_handler  = & proc_dointvec    }   , { . ctl_name  = NET_CORE_MAX_BACKLOG  , . procname  = "netdev_max_backlog"   , . data  = & global_netdev_max_backlog[36]    , . maxlen  = sizeof ( int )    , . mode  = 0644   , . proc_handler  = & proc_dointvec    }   , { . ctl_name  = NET_CORE_NO_CONG_THRESH  , . procname  = "no_cong_thresh"   , . data  = & global_no_cong_thresh[36]    , . maxlen  = sizeof ( int )    , . mode  = 0644   , . proc_handler  = & proc_dointvec    }   , { . ctl_name  = NET_CORE_NO_CONG  , . procname  = "no_cong"   , . data  = & global_no_cong[36]    , . maxlen  = sizeof ( int )    , . mode  = 0644   , . proc_handler  = & proc_dointvec    }   , { . ctl_name  = NET_CORE_LO_CONG  , . procname  = "lo_cong"   , . data  = & global_lo_cong[36]    , . maxlen  = sizeof ( int )    , . mode  = 0644   , . proc_handler  = & proc_dointvec    }   , { . ctl_name  = NET_CORE_MOD_CONG  , . procname  = "mod_cong"   , . data  = & global_mod_cong[36]    , . maxlen  = sizeof ( int )    , . mode  = 0644   , . proc_handler  = & proc_dointvec    }   , { . ctl_name  = NET_CORE_MSG_COST  , . procname  = "message_cost"   , . data  = & global_net_msg_cost[36]    , . maxlen  = sizeof ( int )    , . mode  = 0644   , . proc_handler  = & proc_dointvec_jiffies    , . strategy  = & sysctl_jiffies    , }   , { . ctl_name  = NET_CORE_MSG_BURST  , . procname  = "message_burst"   , . data  = & global_net_msg_burst[36]    , . maxlen  = sizeof ( int )    , . mode  = 0644   , . proc_handler  = & proc_dointvec    , }   , { . ctl_name  = NET_CORE_OPTMEM_MAX  , . procname  = "optmem_max"   , . data  = & global_sysctl_optmem_max[36]    , . maxlen  = sizeof ( int )    , . mode  = 0644   , . proc_handler  = & proc_dointvec    }   , { . ctl_name  = NET_CORE_SOMAXCONN  , . procname  = "somaxconn"   , . data  = & global_sysctl_somaxconn[36]    , . maxlen  = sizeof ( int )    , . mode  = 0644   , . proc_handler  = & proc_dointvec    }   , { . ctl_name  = 0  }   }  ;  _GLOBAL_186_T  _GLOBAL_37_core_table_I [ ]  = { { . ctl_name  = NET_CORE_WMEM_MAX  , . procname  = "wmem_max"   , . data  = & global_sysctl_wmem_max[37]    , . maxlen  = sizeof ( int )    , . mode  = 0644   , . proc_handler  = & proc_dointvec    }  , { . ctl_name  = NET_CORE_RMEM_MAX  , . procname  = "rmem_max"   , . data  = & global_sysctl_rmem_max[37]    , . maxlen  = sizeof ( int )    , . mode  = 0644   , . proc_handler  = & proc_dointvec    }   , { . ctl_name  = NET_CORE_WMEM_DEFAULT  , . procname  = "wmem_default"   , . data  = & global_sysctl_wmem_default[37]    , . maxlen  = sizeof ( int )    , . mode  = 0644   , . proc_handler  = & proc_dointvec    }   , { . ctl_name  = NET_CORE_RMEM_DEFAULT  , . procname  = "rmem_default"   , . data  = & global_sysctl_rmem_default[37]    , . maxlen  = sizeof ( int )    , . mode  = 0644   , . proc_handler  = & proc_dointvec    }   , { . ctl_name  = NET_CORE_DEV_WEIGHT  , . procname  = "dev_weight"   , . data  = & global_weight_p[37]    , . maxlen  = sizeof ( int )    , . mode  = 0644   , . proc_handler  = & proc_dointvec    }   , { . ctl_name  = NET_CORE_MAX_BACKLOG  , . procname  = "netdev_max_backlog"   , . data  = & global_netdev_max_backlog[37]    , . maxlen  = sizeof ( int )    , . mode  = 0644   , . proc_handler  = & proc_dointvec    }   , { . ctl_name  = NET_CORE_NO_CONG_THRESH  , . procname  = "no_cong_thresh"   , . data  = & global_no_cong_thresh[37]    , . maxlen  = sizeof ( int )    , . mode  = 0644   , . proc_handler  = & proc_dointvec    }   , { . ctl_name  = NET_CORE_NO_CONG  , . procname  = "no_cong"   , . data  = & global_no_cong[37]    , . maxlen  = sizeof ( int )    , . mode  = 0644   , . proc_handler  = & proc_dointvec    }   , { . ctl_name  = NET_CORE_LO_CONG  , . procname  = "lo_cong"   , . data  = & global_lo_cong[37]    , . maxlen  = sizeof ( int )    , . mode  = 0644   , . proc_handler  = & proc_dointvec    }   , { . ctl_name  = NET_CORE_MOD_CONG  , . procname  = "mod_cong"   , . data  = & global_mod_cong[37]    , . maxlen  = sizeof ( int )    , . mode  = 0644   , . proc_handler  = & proc_dointvec    }   , { . ctl_name  = NET_CORE_MSG_COST  , . procname  = "message_cost"   , . data  = & global_net_msg_cost[37]    , . maxlen  = sizeof ( int )    , . mode  = 0644   , . proc_handler  = & proc_dointvec_jiffies    , . strategy  = & sysctl_jiffies    , }   , { . ctl_name  = NET_CORE_MSG_BURST  , . procname  = "message_burst"   , . data  = & global_net_msg_burst[37]    , . maxlen  = sizeof ( int )    , . mode  = 0644   , . proc_handler  = & proc_dointvec    , }   , { . ctl_name  = NET_CORE_OPTMEM_MAX  , . procname  = "optmem_max"   , . data  = & global_sysctl_optmem_max[37]    , . maxlen  = sizeof ( int )    , . mode  = 0644   , . proc_handler  = & proc_dointvec    }   , { . ctl_name  = NET_CORE_SOMAXCONN  , . procname  = "somaxconn"   , . data  = & global_sysctl_somaxconn[37]    , . maxlen  = sizeof ( int )    , . mode  = 0644   , . proc_handler  = & proc_dointvec    }   , { . ctl_name  = 0  }   }  ;  _GLOBAL_186_T  _GLOBAL_38_core_table_I [ ]  = { { . ctl_name  = NET_CORE_WMEM_MAX  , . procname  = "wmem_max"   , . data  = & global_sysctl_wmem_max[38]    , . maxlen  = sizeof ( int )    , . mode  = 0644   , . proc_handler  = & proc_dointvec    }  , { . ctl_name  = NET_CORE_RMEM_MAX  , . procname  = "rmem_max"   , . data  = & global_sysctl_rmem_max[38]    , . maxlen  = sizeof ( int )    , . mode  = 0644   , . proc_handler  = & proc_dointvec    }   , { . ctl_name  = NET_CORE_WMEM_DEFAULT  , . procname  = "wmem_default"   , . data  = & global_sysctl_wmem_default[38]    , . maxlen  = sizeof ( int )    , . mode  = 0644   , . proc_handler  = & proc_dointvec    }   , { . ctl_name  = NET_CORE_RMEM_DEFAULT  , . procname  = "rmem_default"   , . data  = & global_sysctl_rmem_default[38]    , . maxlen  = sizeof ( int )    , . mode  = 0644   , . proc_handler  = & proc_dointvec    }   , { . ctl_name  = NET_CORE_DEV_WEIGHT  , . procname  = "dev_weight"   , . data  = & global_weight_p[38]    , . maxlen  = sizeof ( int )    , . mode  = 0644   , . proc_handler  = & proc_dointvec    }   , { . ctl_name  = NET_CORE_MAX_BACKLOG  , . procname  = "netdev_max_backlog"   , . data  = & global_netdev_max_backlog[38]    , . maxlen  = sizeof ( int )    , . mode  = 0644   , . proc_handler  = & proc_dointvec    }   , { . ctl_name  = NET_CORE_NO_CONG_THRESH  , . procname  = "no_cong_thresh"   , . data  = & global_no_cong_thresh[38]    , . maxlen  = sizeof ( int )    , . mode  = 0644   , . proc_handler  = & proc_dointvec    }   , { . ctl_name  = NET_CORE_NO_CONG  , . procname  = "no_cong"   , . data  = & global_no_cong[38]    , . maxlen  = sizeof ( int )    , . mode  = 0644   , . proc_handler  = & proc_dointvec    }   , { . ctl_name  = NET_CORE_LO_CONG  , . procname  = "lo_cong"   , . data  = & global_lo_cong[38]    , . maxlen  = sizeof ( int )    , . mode  = 0644   , . proc_handler  = & proc_dointvec    }   , { . ctl_name  = NET_CORE_MOD_CONG  , . procname  = "mod_cong"   , . data  = & global_mod_cong[38]    , . maxlen  = sizeof ( int )    , . mode  = 0644   , . proc_handler  = & proc_dointvec    }   , { . ctl_name  = NET_CORE_MSG_COST  , . procname  = "message_cost"   , . data  = & global_net_msg_cost[38]    , . maxlen  = sizeof ( int )    , . mode  = 0644   , . proc_handler  = & proc_dointvec_jiffies    , . strategy  = & sysctl_jiffies    , }   , { . ctl_name  = NET_CORE_MSG_BURST  , . procname  = "message_burst"   , . data  = & global_net_msg_burst[38]    , . maxlen  = sizeof ( int )    , . mode  = 0644   , . proc_handler  = & proc_dointvec    , }   , { . ctl_name  = NET_CORE_OPTMEM_MAX  , . procname  = "optmem_max"   , . data  = & global_sysctl_optmem_max[38]    , . maxlen  = sizeof ( int )    , . mode  = 0644   , . proc_handler  = & proc_dointvec    }   , { . ctl_name  = NET_CORE_SOMAXCONN  , . procname  = "somaxconn"   , . data  = & global_sysctl_somaxconn[38]    , . maxlen  = sizeof ( int )    , . mode  = 0644   , . proc_handler  = & proc_dointvec    }   , { . ctl_name  = 0  }   }  ;  _GLOBAL_186_T  _GLOBAL_39_core_table_I [ ]  = { { . ctl_name  = NET_CORE_WMEM_MAX  , . procname  = "wmem_max"   , . data  = & global_sysctl_wmem_max[39]    , . maxlen  = sizeof ( int )    , . mode  = 0644   , . proc_handler  = & proc_dointvec    }  , { . ctl_name  = NET_CORE_RMEM_MAX  , . procname  = "rmem_max"   , . data  = & global_sysctl_rmem_max[39]    , . maxlen  = sizeof ( int )    , . mode  = 0644   , . proc_handler  = & proc_dointvec    }   , { . ctl_name  = NET_CORE_WMEM_DEFAULT  , . procname  = "wmem_default"   , . data  = & global_sysctl_wmem_default[39]    , . maxlen  = sizeof ( int )    , . mode  = 0644   , . proc_handler  = & proc_dointvec    }   , { . ctl_name  = NET_CORE_RMEM_DEFAULT  , . procname  = "rmem_default"   , . data  = & global_sysctl_rmem_default[39]    , . maxlen  = sizeof ( int )    , . mode  = 0644   , . proc_handler  = & proc_dointvec    }   , { . ctl_name  = NET_CORE_DEV_WEIGHT  , . procname  = "dev_weight"   , . data  = & global_weight_p[39]    , . maxlen  = sizeof ( int )    , . mode  = 0644   , . proc_handler  = & proc_dointvec    }   , { . ctl_name  = NET_CORE_MAX_BACKLOG  , . procname  = "netdev_max_backlog"   , . data  = & global_netdev_max_backlog[39]    , . maxlen  = sizeof ( int )    , . mode  = 0644   , . proc_handler  = & proc_dointvec    }   , { . ctl_name  = NET_CORE_NO_CONG_THRESH  , . procname  = "no_cong_thresh"   , . data  = & global_no_cong_thresh[39]    , . maxlen  = sizeof ( int )    , . mode  = 0644   , . proc_handler  = & proc_dointvec    }   , { . ctl_name  = NET_CORE_NO_CONG  , . procname  = "no_cong"   , . data  = & global_no_cong[39]    , . maxlen  = sizeof ( int )    , . mode  = 0644   , . proc_handler  = & proc_dointvec    }   , { . ctl_name  = NET_CORE_LO_CONG  , . procname  = "lo_cong"   , . data  = & global_lo_cong[39]    , . maxlen  = sizeof ( int )    , . mode  = 0644   , . proc_handler  = & proc_dointvec    }   , { . ctl_name  = NET_CORE_MOD_CONG  , . procname  = "mod_cong"   , . data  = & global_mod_cong[39]    , . maxlen  = sizeof ( int )    , . mode  = 0644   , . proc_handler  = & proc_dointvec    }   , { . ctl_name  = NET_CORE_MSG_COST  , . procname  = "message_cost"   , . data  = & global_net_msg_cost[39]    , . maxlen  = sizeof ( int )    , . mode  = 0644   , . proc_handler  = & proc_dointvec_jiffies    , . strategy  = & sysctl_jiffies    , }   , { . ctl_name  = NET_CORE_MSG_BURST  , . procname  = "message_burst"   , . data  = & global_net_msg_burst[39]    , . maxlen  = sizeof ( int )    , . mode  = 0644   , . proc_handler  = & proc_dointvec    , }   , { . ctl_name  = NET_CORE_OPTMEM_MAX  , . procname  = "optmem_max"   , . data  = & global_sysctl_optmem_max[39]    , . maxlen  = sizeof ( int )    , . mode  = 0644   , . proc_handler  = & proc_dointvec    }   , { . ctl_name  = NET_CORE_SOMAXCONN  , . procname  = "somaxconn"   , . data  = & global_sysctl_somaxconn[39]    , . maxlen  = sizeof ( int )    , . mode  = 0644   , . proc_handler  = & proc_dointvec    }   , { . ctl_name  = 0  }   }  ;  _GLOBAL_186_T  _GLOBAL_40_core_table_I [ ]  = { { . ctl_name  = NET_CORE_WMEM_MAX  , . procname  = "wmem_max"   , . data  = & global_sysctl_wmem_max[40]    , . maxlen  = sizeof ( int )    , . mode  = 0644   , . proc_handler  = & proc_dointvec    }  , { . ctl_name  = NET_CORE_RMEM_MAX  , . procname  = "rmem_max"   , . data  = & global_sysctl_rmem_max[40]    , . maxlen  = sizeof ( int )    , . mode  = 0644   , . proc_handler  = & proc_dointvec    }   , { . ctl_name  = NET_CORE_WMEM_DEFAULT  , . procname  = "wmem_default"   , . data  = & global_sysctl_wmem_default[40]    , . maxlen  = sizeof ( int )    , . mode  = 0644   , . proc_handler  = & proc_dointvec    }   , { . ctl_name  = NET_CORE_RMEM_DEFAULT  , . procname  = "rmem_default"   , . data  = & global_sysctl_rmem_default[40]    , . maxlen  = sizeof ( int )    , . mode  = 0644   , . proc_handler  = & proc_dointvec    }   , { . ctl_name  = NET_CORE_DEV_WEIGHT  , . procname  = "dev_weight"   , . data  = & global_weight_p[40]    , . maxlen  = sizeof ( int )    , . mode  = 0644   , . proc_handler  = & proc_dointvec    }   , { . ctl_name  = NET_CORE_MAX_BACKLOG  , . procname  = "netdev_max_backlog"   , . data  = & global_netdev_max_backlog[40]    , . maxlen  = sizeof ( int )    , . mode  = 0644   , . proc_handler  = & proc_dointvec    }   , { . ctl_name  = NET_CORE_NO_CONG_THRESH  , . procname  = "no_cong_thresh"   , . data  = & global_no_cong_thresh[40]    , . maxlen  = sizeof ( int )    , . mode  = 0644   , . proc_handler  = & proc_dointvec    }   , { . ctl_name  = NET_CORE_NO_CONG  , . procname  = "no_cong"   , . data  = & global_no_cong[40]    , . maxlen  = sizeof ( int )    , . mode  = 0644   , . proc_handler  = & proc_dointvec    }   , { . ctl_name  = NET_CORE_LO_CONG  , . procname  = "lo_cong"   , . data  = & global_lo_cong[40]    , . maxlen  = sizeof ( int )    , . mode  = 0644   , . proc_handler  = & proc_dointvec    }   , { . ctl_name  = NET_CORE_MOD_CONG  , . procname  = "mod_cong"   , . data  = & global_mod_cong[40]    , . maxlen  = sizeof ( int )    , . mode  = 0644   , . proc_handler  = & proc_dointvec    }   , { . ctl_name  = NET_CORE_MSG_COST  , . procname  = "message_cost"   , . data  = & global_net_msg_cost[40]    , . maxlen  = sizeof ( int )    , . mode  = 0644   , . proc_handler  = & proc_dointvec_jiffies    , . strategy  = & sysctl_jiffies    , }   , { . ctl_name  = NET_CORE_MSG_BURST  , . procname  = "message_burst"   , . data  = & global_net_msg_burst[40]    , . maxlen  = sizeof ( int )    , . mode  = 0644   , . proc_handler  = & proc_dointvec    , }   , { . ctl_name  = NET_CORE_OPTMEM_MAX  , . procname  = "optmem_max"   , . data  = & global_sysctl_optmem_max[40]    , . maxlen  = sizeof ( int )    , . mode  = 0644   , . proc_handler  = & proc_dointvec    }   , { . ctl_name  = NET_CORE_SOMAXCONN  , . procname  = "somaxconn"   , . data  = & global_sysctl_somaxconn[40]    , . maxlen  = sizeof ( int )    , . mode  = 0644   , . proc_handler  = & proc_dointvec    }   , { . ctl_name  = 0  }   }  ;  _GLOBAL_186_T  _GLOBAL_41_core_table_I [ ]  = { { . ctl_name  = NET_CORE_WMEM_MAX  , . procname  = "wmem_max"   , . data  = & global_sysctl_wmem_max[41]    , . maxlen  = sizeof ( int )    , . mode  = 0644   , . proc_handler  = & proc_dointvec    }  , { . ctl_name  = NET_CORE_RMEM_MAX  , . procname  = "rmem_max"   , . data  = & global_sysctl_rmem_max[41]    , . maxlen  = sizeof ( int )    , . mode  = 0644   , . proc_handler  = & proc_dointvec    }   , { . ctl_name  = NET_CORE_WMEM_DEFAULT  , . procname  = "wmem_default"   , . data  = & global_sysctl_wmem_default[41]    , . maxlen  = sizeof ( int )    , . mode  = 0644   , . proc_handler  = & proc_dointvec    }   , { . ctl_name  = NET_CORE_RMEM_DEFAULT  , . procname  = "rmem_default"   , . data  = & global_sysctl_rmem_default[41]    , . maxlen  = sizeof ( int )    , . mode  = 0644   , . proc_handler  = & proc_dointvec    }   , { . ctl_name  = NET_CORE_DEV_WEIGHT  , . procname  = "dev_weight"   , . data  = & global_weight_p[41]    , . maxlen  = sizeof ( int )    , . mode  = 0644   , . proc_handler  = & proc_dointvec    }   , { . ctl_name  = NET_CORE_MAX_BACKLOG  , . procname  = "netdev_max_backlog"   , . data  = & global_netdev_max_backlog[41]    , . maxlen  = sizeof ( int )    , . mode  = 0644   , . proc_handler  = & proc_dointvec    }   , { . ctl_name  = NET_CORE_NO_CONG_THRESH  , . procname  = "no_cong_thresh"   , . data  = & global_no_cong_thresh[41]    , . maxlen  = sizeof ( int )    , . mode  = 0644   , . proc_handler  = & proc_dointvec    }   , { . ctl_name  = NET_CORE_NO_CONG  , . procname  = "no_cong"   , . data  = & global_no_cong[41]    , . maxlen  = sizeof ( int )    , . mode  = 0644   , . proc_handler  = & proc_dointvec    }   , { . ctl_name  = NET_CORE_LO_CONG  , . procname  = "lo_cong"   , . data  = & global_lo_cong[41]    , . maxlen  = sizeof ( int )    , . mode  = 0644   , . proc_handler  = & proc_dointvec    }   , { . ctl_name  = NET_CORE_MOD_CONG  , . procname  = "mod_cong"   , . data  = & global_mod_cong[41]    , . maxlen  = sizeof ( int )    , . mode  = 0644   , . proc_handler  = & proc_dointvec    }   , { . ctl_name  = NET_CORE_MSG_COST  , . procname  = "message_cost"   , . data  = & global_net_msg_cost[41]    , . maxlen  = sizeof ( int )    , . mode  = 0644   , . proc_handler  = & proc_dointvec_jiffies    , . strategy  = & sysctl_jiffies    , }   , { . ctl_name  = NET_CORE_MSG_BURST  , . procname  = "message_burst"   , . data  = & global_net_msg_burst[41]    , . maxlen  = sizeof ( int )    , . mode  = 0644   , . proc_handler  = & proc_dointvec    , }   , { . ctl_name  = NET_CORE_OPTMEM_MAX  , . procname  = "optmem_max"   , . data  = & global_sysctl_optmem_max[41]    , . maxlen  = sizeof ( int )    , . mode  = 0644   , . proc_handler  = & proc_dointvec    }   , { . ctl_name  = NET_CORE_SOMAXCONN  , . procname  = "somaxconn"   , . data  = & global_sysctl_somaxconn[41]    , . maxlen  = sizeof ( int )    , . mode  = 0644   , . proc_handler  = & proc_dointvec    }   , { . ctl_name  = 0  }   }  ;  _GLOBAL_186_T  _GLOBAL_42_core_table_I [ ]  = { { . ctl_name  = NET_CORE_WMEM_MAX  , . procname  = "wmem_max"   , . data  = & global_sysctl_wmem_max[42]    , . maxlen  = sizeof ( int )    , . mode  = 0644   , . proc_handler  = & proc_dointvec    }  , { . ctl_name  = NET_CORE_RMEM_MAX  , . procname  = "rmem_max"   , . data  = & global_sysctl_rmem_max[42]    , . maxlen  = sizeof ( int )    , . mode  = 0644   , . proc_handler  = & proc_dointvec    }   , { . ctl_name  = NET_CORE_WMEM_DEFAULT  , . procname  = "wmem_default"   , . data  = & global_sysctl_wmem_default[42]    , . maxlen  = sizeof ( int )    , . mode  = 0644   , . proc_handler  = & proc_dointvec    }   , { . ctl_name  = NET_CORE_RMEM_DEFAULT  , . procname  = "rmem_default"   , . data  = & global_sysctl_rmem_default[42]    , . maxlen  = sizeof ( int )    , . mode  = 0644   , . proc_handler  = & proc_dointvec    }   , { . ctl_name  = NET_CORE_DEV_WEIGHT  , . procname  = "dev_weight"   , . data  = & global_weight_p[42]    , . maxlen  = sizeof ( int )    , . mode  = 0644   , . proc_handler  = & proc_dointvec    }   , { . ctl_name  = NET_CORE_MAX_BACKLOG  , . procname  = "netdev_max_backlog"   , . data  = & global_netdev_max_backlog[42]    , . maxlen  = sizeof ( int )    , . mode  = 0644   , . proc_handler  = & proc_dointvec    }   , { . ctl_name  = NET_CORE_NO_CONG_THRESH  , . procname  = "no_cong_thresh"   , . data  = & global_no_cong_thresh[42]    , . maxlen  = sizeof ( int )    , . mode  = 0644   , . proc_handler  = & proc_dointvec    }   , { . ctl_name  = NET_CORE_NO_CONG  , . procname  = "no_cong"   , . data  = & global_no_cong[42]    , . maxlen  = sizeof ( int )    , . mode  = 0644   , . proc_handler  = & proc_dointvec    }   , { . ctl_name  = NET_CORE_LO_CONG  , . procname  = "lo_cong"   , . data  = & global_lo_cong[42]    , . maxlen  = sizeof ( int )    , . mode  = 0644   , . proc_handler  = & proc_dointvec    }   , { . ctl_name  = NET_CORE_MOD_CONG  , . procname  = "mod_cong"   , . data  = & global_mod_cong[42]    , . maxlen  = sizeof ( int )    , . mode  = 0644   , . proc_handler  = & proc_dointvec    }   , { . ctl_name  = NET_CORE_MSG_COST  , . procname  = "message_cost"   , . data  = & global_net_msg_cost[42]    , . maxlen  = sizeof ( int )    , . mode  = 0644   , . proc_handler  = & proc_dointvec_jiffies    , . strategy  = & sysctl_jiffies    , }   , { . ctl_name  = NET_CORE_MSG_BURST  , . procname  = "message_burst"   , . data  = & global_net_msg_burst[42]    , . maxlen  = sizeof ( int )    , . mode  = 0644   , . proc_handler  = & proc_dointvec    , }   , { . ctl_name  = NET_CORE_OPTMEM_MAX  , . procname  = "optmem_max"   , . data  = & global_sysctl_optmem_max[42]    , . maxlen  = sizeof ( int )    , . mode  = 0644   , . proc_handler  = & proc_dointvec    }   , { . ctl_name  = NET_CORE_SOMAXCONN  , . procname  = "somaxconn"   , . data  = & global_sysctl_somaxconn[42]    , . maxlen  = sizeof ( int )    , . mode  = 0644   , . proc_handler  = & proc_dointvec    }   , { . ctl_name  = 0  }   }  ;  _GLOBAL_186_T  _GLOBAL_43_core_table_I [ ]  = { { . ctl_name  = NET_CORE_WMEM_MAX  , . procname  = "wmem_max"   , . data  = & global_sysctl_wmem_max[43]    , . maxlen  = sizeof ( int )    , . mode  = 0644   , . proc_handler  = & proc_dointvec    }  , { . ctl_name  = NET_CORE_RMEM_MAX  , . procname  = "rmem_max"   , . data  = & global_sysctl_rmem_max[43]    , . maxlen  = sizeof ( int )    , . mode  = 0644   , . proc_handler  = & proc_dointvec    }   , { . ctl_name  = NET_CORE_WMEM_DEFAULT  , . procname  = "wmem_default"   , . data  = & global_sysctl_wmem_default[43]    , . maxlen  = sizeof ( int )    , . mode  = 0644   , . proc_handler  = & proc_dointvec    }   , { . ctl_name  = NET_CORE_RMEM_DEFAULT  , . procname  = "rmem_default"   , . data  = & global_sysctl_rmem_default[43]    , . maxlen  = sizeof ( int )    , . mode  = 0644   , . proc_handler  = & proc_dointvec    }   , { . ctl_name  = NET_CORE_DEV_WEIGHT  , . procname  = "dev_weight"   , . data  = & global_weight_p[43]    , . maxlen  = sizeof ( int )    , . mode  = 0644   , . proc_handler  = & proc_dointvec    }   , { . ctl_name  = NET_CORE_MAX_BACKLOG  , . procname  = "netdev_max_backlog"   , . data  = & global_netdev_max_backlog[43]    , . maxlen  = sizeof ( int )    , . mode  = 0644   , . proc_handler  = & proc_dointvec    }   , { . ctl_name  = NET_CORE_NO_CONG_THRESH  , . procname  = "no_cong_thresh"   , . data  = & global_no_cong_thresh[43]    , . maxlen  = sizeof ( int )    , . mode  = 0644   , . proc_handler  = & proc_dointvec    }   , { . ctl_name  = NET_CORE_NO_CONG  , . procname  = "no_cong"   , . data  = & global_no_cong[43]    , . maxlen  = sizeof ( int )    , . mode  = 0644   , . proc_handler  = & proc_dointvec    }   , { . ctl_name  = NET_CORE_LO_CONG  , . procname  = "lo_cong"   , . data  = & global_lo_cong[43]    , . maxlen  = sizeof ( int )    , . mode  = 0644   , . proc_handler  = & proc_dointvec    }   , { . ctl_name  = NET_CORE_MOD_CONG  , . procname  = "mod_cong"   , . data  = & global_mod_cong[43]    , . maxlen  = sizeof ( int )    , . mode  = 0644   , . proc_handler  = & proc_dointvec    }   , { . ctl_name  = NET_CORE_MSG_COST  , . procname  = "message_cost"   , . data  = & global_net_msg_cost[43]    , . maxlen  = sizeof ( int )    , . mode  = 0644   , . proc_handler  = & proc_dointvec_jiffies    , . strategy  = & sysctl_jiffies    , }   , { . ctl_name  = NET_CORE_MSG_BURST  , . procname  = "message_burst"   , . data  = & global_net_msg_burst[43]    , . maxlen  = sizeof ( int )    , . mode  = 0644   , . proc_handler  = & proc_dointvec    , }   , { . ctl_name  = NET_CORE_OPTMEM_MAX  , . procname  = "optmem_max"   , . data  = & global_sysctl_optmem_max[43]    , . maxlen  = sizeof ( int )    , . mode  = 0644   , . proc_handler  = & proc_dointvec    }   , { . ctl_name  = NET_CORE_SOMAXCONN  , . procname  = "somaxconn"   , . data  = & global_sysctl_somaxconn[43]    , . maxlen  = sizeof ( int )    , . mode  = 0644   , . proc_handler  = & proc_dointvec    }   , { . ctl_name  = 0  }   }  ;  _GLOBAL_186_T  _GLOBAL_44_core_table_I [ ]  = { { . ctl_name  = NET_CORE_WMEM_MAX  , . procname  = "wmem_max"   , . data  = & global_sysctl_wmem_max[44]    , . maxlen  = sizeof ( int )    , . mode  = 0644   , . proc_handler  = & proc_dointvec    }  , { . ctl_name  = NET_CORE_RMEM_MAX  , . procname  = "rmem_max"   , . data  = & global_sysctl_rmem_max[44]    , . maxlen  = sizeof ( int )    , . mode  = 0644   , . proc_handler  = & proc_dointvec    }   , { . ctl_name  = NET_CORE_WMEM_DEFAULT  , . procname  = "wmem_default"   , . data  = & global_sysctl_wmem_default[44]    , . maxlen  = sizeof ( int )    , . mode  = 0644   , . proc_handler  = & proc_dointvec    }   , { . ctl_name  = NET_CORE_RMEM_DEFAULT  , . procname  = "rmem_default"   , . data  = & global_sysctl_rmem_default[44]    , . maxlen  = sizeof ( int )    , . mode  = 0644   , . proc_handler  = & proc_dointvec    }   , { . ctl_name  = NET_CORE_DEV_WEIGHT  , . procname  = "dev_weight"   , . data  = & global_weight_p[44]    , . maxlen  = sizeof ( int )    , . mode  = 0644   , . proc_handler  = & proc_dointvec    }   , { . ctl_name  = NET_CORE_MAX_BACKLOG  , . procname  = "netdev_max_backlog"   , . data  = & global_netdev_max_backlog[44]    , . maxlen  = sizeof ( int )    , . mode  = 0644   , . proc_handler  = & proc_dointvec    }   , { . ctl_name  = NET_CORE_NO_CONG_THRESH  , . procname  = "no_cong_thresh"   , . data  = & global_no_cong_thresh[44]    , . maxlen  = sizeof ( int )    , . mode  = 0644   , . proc_handler  = & proc_dointvec    }   , { . ctl_name  = NET_CORE_NO_CONG  , . procname  = "no_cong"   , . data  = & global_no_cong[44]    , . maxlen  = sizeof ( int )    , . mode  = 0644   , . proc_handler  = & proc_dointvec    }   , { . ctl_name  = NET_CORE_LO_CONG  , . procname  = "lo_cong"   , . data  = & global_lo_cong[44]    , . maxlen  = sizeof ( int )    , . mode  = 0644   , . proc_handler  = & proc_dointvec    }   , { . ctl_name  = NET_CORE_MOD_CONG  , . procname  = "mod_cong"   , . data  = & global_mod_cong[44]    , . maxlen  = sizeof ( int )    , . mode  = 0644   , . proc_handler  = & proc_dointvec    }   , { . ctl_name  = NET_CORE_MSG_COST  , . procname  = "message_cost"   , . data  = & global_net_msg_cost[44]    , . maxlen  = sizeof ( int )    , . mode  = 0644   , . proc_handler  = & proc_dointvec_jiffies    , . strategy  = & sysctl_jiffies    , }   , { . ctl_name  = NET_CORE_MSG_BURST  , . procname  = "message_burst"   , . data  = & global_net_msg_burst[44]    , . maxlen  = sizeof ( int )    , . mode  = 0644   , . proc_handler  = & proc_dointvec    , }   , { . ctl_name  = NET_CORE_OPTMEM_MAX  , . procname  = "optmem_max"   , . data  = & global_sysctl_optmem_max[44]    , . maxlen  = sizeof ( int )    , . mode  = 0644   , . proc_handler  = & proc_dointvec    }   , { . ctl_name  = NET_CORE_SOMAXCONN  , . procname  = "somaxconn"   , . data  = & global_sysctl_somaxconn[44]    , . maxlen  = sizeof ( int )    , . mode  = 0644   , . proc_handler  = & proc_dointvec    }   , { . ctl_name  = 0  }   }  ;  _GLOBAL_186_T  _GLOBAL_45_core_table_I [ ]  = { { . ctl_name  = NET_CORE_WMEM_MAX  , . procname  = "wmem_max"   , . data  = & global_sysctl_wmem_max[45]    , . maxlen  = sizeof ( int )    , . mode  = 0644   , . proc_handler  = & proc_dointvec    }  , { . ctl_name  = NET_CORE_RMEM_MAX  , . procname  = "rmem_max"   , . data  = & global_sysctl_rmem_max[45]    , . maxlen  = sizeof ( int )    , . mode  = 0644   , . proc_handler  = & proc_dointvec    }   , { . ctl_name  = NET_CORE_WMEM_DEFAULT  , . procname  = "wmem_default"   , . data  = & global_sysctl_wmem_default[45]    , . maxlen  = sizeof ( int )    , . mode  = 0644   , . proc_handler  = & proc_dointvec    }   , { . ctl_name  = NET_CORE_RMEM_DEFAULT  , . procname  = "rmem_default"   , . data  = & global_sysctl_rmem_default[45]    , . maxlen  = sizeof ( int )    , . mode  = 0644   , . proc_handler  = & proc_dointvec    }   , { . ctl_name  = NET_CORE_DEV_WEIGHT  , . procname  = "dev_weight"   , . data  = & global_weight_p[45]    , . maxlen  = sizeof ( int )    , . mode  = 0644   , . proc_handler  = & proc_dointvec    }   , { . ctl_name  = NET_CORE_MAX_BACKLOG  , . procname  = "netdev_max_backlog"   , . data  = & global_netdev_max_backlog[45]    , . maxlen  = sizeof ( int )    , . mode  = 0644   , . proc_handler  = & proc_dointvec    }   , { . ctl_name  = NET_CORE_NO_CONG_THRESH  , . procname  = "no_cong_thresh"   , . data  = & global_no_cong_thresh[45]    , . maxlen  = sizeof ( int )    , . mode  = 0644   , . proc_handler  = & proc_dointvec    }   , { . ctl_name  = NET_CORE_NO_CONG  , . procname  = "no_cong"   , . data  = & global_no_cong[45]    , . maxlen  = sizeof ( int )    , . mode  = 0644   , . proc_handler  = & proc_dointvec    }   , { . ctl_name  = NET_CORE_LO_CONG  , . procname  = "lo_cong"   , . data  = & global_lo_cong[45]    , . maxlen  = sizeof ( int )    , . mode  = 0644   , . proc_handler  = & proc_dointvec    }   , { . ctl_name  = NET_CORE_MOD_CONG  , . procname  = "mod_cong"   , . data  = & global_mod_cong[45]    , . maxlen  = sizeof ( int )    , . mode  = 0644   , . proc_handler  = & proc_dointvec    }   , { . ctl_name  = NET_CORE_MSG_COST  , . procname  = "message_cost"   , . data  = & global_net_msg_cost[45]    , . maxlen  = sizeof ( int )    , . mode  = 0644   , . proc_handler  = & proc_dointvec_jiffies    , . strategy  = & sysctl_jiffies    , }   , { . ctl_name  = NET_CORE_MSG_BURST  , . procname  = "message_burst"   , . data  = & global_net_msg_burst[45]    , . maxlen  = sizeof ( int )    , . mode  = 0644   , . proc_handler  = & proc_dointvec    , }   , { . ctl_name  = NET_CORE_OPTMEM_MAX  , . procname  = "optmem_max"   , . data  = & global_sysctl_optmem_max[45]    , . maxlen  = sizeof ( int )    , . mode  = 0644   , . proc_handler  = & proc_dointvec    }   , { . ctl_name  = NET_CORE_SOMAXCONN  , . procname  = "somaxconn"   , . data  = & global_sysctl_somaxconn[45]    , . maxlen  = sizeof ( int )    , . mode  = 0644   , . proc_handler  = & proc_dointvec    }   , { . ctl_name  = 0  }   }  ;  _GLOBAL_186_T  _GLOBAL_46_core_table_I [ ]  = { { . ctl_name  = NET_CORE_WMEM_MAX  , . procname  = "wmem_max"   , . data  = & global_sysctl_wmem_max[46]    , . maxlen  = sizeof ( int )    , . mode  = 0644   , . proc_handler  = & proc_dointvec    }  , { . ctl_name  = NET_CORE_RMEM_MAX  , . procname  = "rmem_max"   , . data  = & global_sysctl_rmem_max[46]    , . maxlen  = sizeof ( int )    , . mode  = 0644   , . proc_handler  = & proc_dointvec    }   , { . ctl_name  = NET_CORE_WMEM_DEFAULT  , . procname  = "wmem_default"   , . data  = & global_sysctl_wmem_default[46]    , . maxlen  = sizeof ( int )    , . mode  = 0644   , . proc_handler  = & proc_dointvec    }   , { . ctl_name  = NET_CORE_RMEM_DEFAULT  , . procname  = "rmem_default"   , . data  = & global_sysctl_rmem_default[46]    , . maxlen  = sizeof ( int )    , . mode  = 0644   , . proc_handler  = & proc_dointvec    }   , { . ctl_name  = NET_CORE_DEV_WEIGHT  , . procname  = "dev_weight"   , . data  = & global_weight_p[46]    , . maxlen  = sizeof ( int )    , . mode  = 0644   , . proc_handler  = & proc_dointvec    }   , { . ctl_name  = NET_CORE_MAX_BACKLOG  , . procname  = "netdev_max_backlog"   , . data  = & global_netdev_max_backlog[46]    , . maxlen  = sizeof ( int )    , . mode  = 0644   , . proc_handler  = & proc_dointvec    }   , { . ctl_name  = NET_CORE_NO_CONG_THRESH  , . procname  = "no_cong_thresh"   , . data  = & global_no_cong_thresh[46]    , . maxlen  = sizeof ( int )    , . mode  = 0644   , . proc_handler  = & proc_dointvec    }   , { . ctl_name  = NET_CORE_NO_CONG  , . procname  = "no_cong"   , . data  = & global_no_cong[46]    , . maxlen  = sizeof ( int )    , . mode  = 0644   , . proc_handler  = & proc_dointvec    }   , { . ctl_name  = NET_CORE_LO_CONG  , . procname  = "lo_cong"   , . data  = & global_lo_cong[46]    , . maxlen  = sizeof ( int )    , . mode  = 0644   , . proc_handler  = & proc_dointvec    }   , { . ctl_name  = NET_CORE_MOD_CONG  , . procname  = "mod_cong"   , . data  = & global_mod_cong[46]    , . maxlen  = sizeof ( int )    , . mode  = 0644   , . proc_handler  = & proc_dointvec    }   , { . ctl_name  = NET_CORE_MSG_COST  , . procname  = "message_cost"   , . data  = & global_net_msg_cost[46]    , . maxlen  = sizeof ( int )    , . mode  = 0644   , . proc_handler  = & proc_dointvec_jiffies    , . strategy  = & sysctl_jiffies    , }   , { . ctl_name  = NET_CORE_MSG_BURST  , . procname  = "message_burst"   , . data  = & global_net_msg_burst[46]    , . maxlen  = sizeof ( int )    , . mode  = 0644   , . proc_handler  = & proc_dointvec    , }   , { . ctl_name  = NET_CORE_OPTMEM_MAX  , . procname  = "optmem_max"   , . data  = & global_sysctl_optmem_max[46]    , . maxlen  = sizeof ( int )    , . mode  = 0644   , . proc_handler  = & proc_dointvec    }   , { . ctl_name  = NET_CORE_SOMAXCONN  , . procname  = "somaxconn"   , . data  = & global_sysctl_somaxconn[46]    , . maxlen  = sizeof ( int )    , . mode  = 0644   , . proc_handler  = & proc_dointvec    }   , { . ctl_name  = 0  }   }  ;  _GLOBAL_186_T  _GLOBAL_47_core_table_I [ ]  = { { . ctl_name  = NET_CORE_WMEM_MAX  , . procname  = "wmem_max"   , . data  = & global_sysctl_wmem_max[47]    , . maxlen  = sizeof ( int )    , . mode  = 0644   , . proc_handler  = & proc_dointvec    }  , { . ctl_name  = NET_CORE_RMEM_MAX  , . procname  = "rmem_max"   , . data  = & global_sysctl_rmem_max[47]    , . maxlen  = sizeof ( int )    , . mode  = 0644   , . proc_handler  = & proc_dointvec    }   , { . ctl_name  = NET_CORE_WMEM_DEFAULT  , . procname  = "wmem_default"   , . data  = & global_sysctl_wmem_default[47]    , . maxlen  = sizeof ( int )    , . mode  = 0644   , . proc_handler  = & proc_dointvec    }   , { . ctl_name  = NET_CORE_RMEM_DEFAULT  , . procname  = "rmem_default"   , . data  = & global_sysctl_rmem_default[47]    , . maxlen  = sizeof ( int )    , . mode  = 0644   , . proc_handler  = & proc_dointvec    }   , { . ctl_name  = NET_CORE_DEV_WEIGHT  , . procname  = "dev_weight"   , . data  = & global_weight_p[47]    , . maxlen  = sizeof ( int )    , . mode  = 0644   , . proc_handler  = & proc_dointvec    }   , { . ctl_name  = NET_CORE_MAX_BACKLOG  , . procname  = "netdev_max_backlog"   , . data  = & global_netdev_max_backlog[47]    , . maxlen  = sizeof ( int )    , . mode  = 0644   , . proc_handler  = & proc_dointvec    }   , { . ctl_name  = NET_CORE_NO_CONG_THRESH  , . procname  = "no_cong_thresh"   , . data  = & global_no_cong_thresh[47]    , . maxlen  = sizeof ( int )    , . mode  = 0644   , . proc_handler  = & proc_dointvec    }   , { . ctl_name  = NET_CORE_NO_CONG  , . procname  = "no_cong"   , . data  = & global_no_cong[47]    , . maxlen  = sizeof ( int )    , . mode  = 0644   , . proc_handler  = & proc_dointvec    }   , { . ctl_name  = NET_CORE_LO_CONG  , . procname  = "lo_cong"   , . data  = & global_lo_cong[47]    , . maxlen  = sizeof ( int )    , . mode  = 0644   , . proc_handler  = & proc_dointvec    }   , { . ctl_name  = NET_CORE_MOD_CONG  , . procname  = "mod_cong"   , . data  = & global_mod_cong[47]    , . maxlen  = sizeof ( int )    , . mode  = 0644   , . proc_handler  = & proc_dointvec    }   , { . ctl_name  = NET_CORE_MSG_COST  , . procname  = "message_cost"   , . data  = & global_net_msg_cost[47]    , . maxlen  = sizeof ( int )    , . mode  = 0644   , . proc_handler  = & proc_dointvec_jiffies    , . strategy  = & sysctl_jiffies    , }   , { . ctl_name  = NET_CORE_MSG_BURST  , . procname  = "message_burst"   , . data  = & global_net_msg_burst[47]    , . maxlen  = sizeof ( int )    , . mode  = 0644   , . proc_handler  = & proc_dointvec    , }   , { . ctl_name  = NET_CORE_OPTMEM_MAX  , . procname  = "optmem_max"   , . data  = & global_sysctl_optmem_max[47]    , . maxlen  = sizeof ( int )    , . mode  = 0644   , . proc_handler  = & proc_dointvec    }   , { . ctl_name  = NET_CORE_SOMAXCONN  , . procname  = "somaxconn"   , . data  = & global_sysctl_somaxconn[47]    , . maxlen  = sizeof ( int )    , . mode  = 0644   , . proc_handler  = & proc_dointvec    }   , { . ctl_name  = 0  }   }  ;  _GLOBAL_186_T  _GLOBAL_48_core_table_I [ ]  = { { . ctl_name  = NET_CORE_WMEM_MAX  , . procname  = "wmem_max"   , . data  = & global_sysctl_wmem_max[48]    , . maxlen  = sizeof ( int )    , . mode  = 0644   , . proc_handler  = & proc_dointvec    }  , { . ctl_name  = NET_CORE_RMEM_MAX  , . procname  = "rmem_max"   , . data  = & global_sysctl_rmem_max[48]    , . maxlen  = sizeof ( int )    , . mode  = 0644   , . proc_handler  = & proc_dointvec    }   , { . ctl_name  = NET_CORE_WMEM_DEFAULT  , . procname  = "wmem_default"   , . data  = & global_sysctl_wmem_default[48]    , . maxlen  = sizeof ( int )    , . mode  = 0644   , . proc_handler  = & proc_dointvec    }   , { . ctl_name  = NET_CORE_RMEM_DEFAULT  , . procname  = "rmem_default"   , . data  = & global_sysctl_rmem_default[48]    , . maxlen  = sizeof ( int )    , . mode  = 0644   , . proc_handler  = & proc_dointvec    }   , { . ctl_name  = NET_CORE_DEV_WEIGHT  , . procname  = "dev_weight"   , . data  = & global_weight_p[48]    , . maxlen  = sizeof ( int )    , . mode  = 0644   , . proc_handler  = & proc_dointvec    }   , { . ctl_name  = NET_CORE_MAX_BACKLOG  , . procname  = "netdev_max_backlog"   , . data  = & global_netdev_max_backlog[48]    , . maxlen  = sizeof ( int )    , . mode  = 0644   , . proc_handler  = & proc_dointvec    }   , { . ctl_name  = NET_CORE_NO_CONG_THRESH  , . procname  = "no_cong_thresh"   , . data  = & global_no_cong_thresh[48]    , . maxlen  = sizeof ( int )    , . mode  = 0644   , . proc_handler  = & proc_dointvec    }   , { . ctl_name  = NET_CORE_NO_CONG  , . procname  = "no_cong"   , . data  = & global_no_cong[48]    , . maxlen  = sizeof ( int )    , . mode  = 0644   , . proc_handler  = & proc_dointvec    }   , { . ctl_name  = NET_CORE_LO_CONG  , . procname  = "lo_cong"   , . data  = & global_lo_cong[48]    , . maxlen  = sizeof ( int )    , . mode  = 0644   , . proc_handler  = & proc_dointvec    }   , { . ctl_name  = NET_CORE_MOD_CONG  , . procname  = "mod_cong"   , . data  = & global_mod_cong[48]    , . maxlen  = sizeof ( int )    , . mode  = 0644   , . proc_handler  = & proc_dointvec    }   , { . ctl_name  = NET_CORE_MSG_COST  , . procname  = "message_cost"   , . data  = & global_net_msg_cost[48]    , . maxlen  = sizeof ( int )    , . mode  = 0644   , . proc_handler  = & proc_dointvec_jiffies    , . strategy  = & sysctl_jiffies    , }   , { . ctl_name  = NET_CORE_MSG_BURST  , . procname  = "message_burst"   , . data  = & global_net_msg_burst[48]    , . maxlen  = sizeof ( int )    , . mode  = 0644   , . proc_handler  = & proc_dointvec    , }   , { . ctl_name  = NET_CORE_OPTMEM_MAX  , . procname  = "optmem_max"   , . data  = & global_sysctl_optmem_max[48]    , . maxlen  = sizeof ( int )    , . mode  = 0644   , . proc_handler  = & proc_dointvec    }   , { . ctl_name  = NET_CORE_SOMAXCONN  , . procname  = "somaxconn"   , . data  = & global_sysctl_somaxconn[48]    , . maxlen  = sizeof ( int )    , . mode  = 0644   , . proc_handler  = & proc_dointvec    }   , { . ctl_name  = 0  }   }  ;  _GLOBAL_186_T  _GLOBAL_49_core_table_I [ ]  = { { . ctl_name  = NET_CORE_WMEM_MAX  , . procname  = "wmem_max"   , . data  = & global_sysctl_wmem_max[49]    , . maxlen  = sizeof ( int )    , . mode  = 0644   , . proc_handler  = & proc_dointvec    }  , { . ctl_name  = NET_CORE_RMEM_MAX  , . procname  = "rmem_max"   , . data  = & global_sysctl_rmem_max[49]    , . maxlen  = sizeof ( int )    , . mode  = 0644   , . proc_handler  = & proc_dointvec    }   , { . ctl_name  = NET_CORE_WMEM_DEFAULT  , . procname  = "wmem_default"   , . data  = & global_sysctl_wmem_default[49]    , . maxlen  = sizeof ( int )    , . mode  = 0644   , . proc_handler  = & proc_dointvec    }   , { . ctl_name  = NET_CORE_RMEM_DEFAULT  , . procname  = "rmem_default"   , . data  = & global_sysctl_rmem_default[49]    , . maxlen  = sizeof ( int )    , . mode  = 0644   , . proc_handler  = & proc_dointvec    }   , { . ctl_name  = NET_CORE_DEV_WEIGHT  , . procname  = "dev_weight"   , . data  = & global_weight_p[49]    , . maxlen  = sizeof ( int )    , . mode  = 0644   , . proc_handler  = & proc_dointvec    }   , { . ctl_name  = NET_CORE_MAX_BACKLOG  , . procname  = "netdev_max_backlog"   , . data  = & global_netdev_max_backlog[49]    , . maxlen  = sizeof ( int )    , . mode  = 0644   , . proc_handler  = & proc_dointvec    }   , { . ctl_name  = NET_CORE_NO_CONG_THRESH  , . procname  = "no_cong_thresh"   , . data  = & global_no_cong_thresh[49]    , . maxlen  = sizeof ( int )    , . mode  = 0644   , . proc_handler  = & proc_dointvec    }   , { . ctl_name  = NET_CORE_NO_CONG  , . procname  = "no_cong"   , . data  = & global_no_cong[49]    , . maxlen  = sizeof ( int )    , . mode  = 0644   , . proc_handler  = & proc_dointvec    }   , { . ctl_name  = NET_CORE_LO_CONG  , . procname  = "lo_cong"   , . data  = & global_lo_cong[49]    , . maxlen  = sizeof ( int )    , . mode  = 0644   , . proc_handler  = & proc_dointvec    }   , { . ctl_name  = NET_CORE_MOD_CONG  , . procname  = "mod_cong"   , . data  = & global_mod_cong[49]    , . maxlen  = sizeof ( int )    , . mode  = 0644   , . proc_handler  = & proc_dointvec    }   , { . ctl_name  = NET_CORE_MSG_COST  , . procname  = "message_cost"   , . data  = & global_net_msg_cost[49]    , . maxlen  = sizeof ( int )    , . mode  = 0644   , . proc_handler  = & proc_dointvec_jiffies    , . strategy  = & sysctl_jiffies    , }   , { . ctl_name  = NET_CORE_MSG_BURST  , . procname  = "message_burst"   , . data  = & global_net_msg_burst[49]    , . maxlen  = sizeof ( int )    , . mode  = 0644   , . proc_handler  = & proc_dointvec    , }   , { . ctl_name  = NET_CORE_OPTMEM_MAX  , . procname  = "optmem_max"   , . data  = & global_sysctl_optmem_max[49]    , . maxlen  = sizeof ( int )    , . mode  = 0644   , . proc_handler  = & proc_dointvec    }   , { . ctl_name  = NET_CORE_SOMAXCONN  , . procname  = "somaxconn"   , . data  = & global_sysctl_somaxconn[49]    , . maxlen  = sizeof ( int )    , . mode  = 0644   , . proc_handler  = & proc_dointvec    }   , { . ctl_name  = 0  }   }  ; static __attribute__ ((unused)) __typeof__(_GLOBAL_0_core_table_I) *_GLOBAL_core_table_13_A[NUM_STACKS] = { &_GLOBAL_0_core_table_I, &_GLOBAL_1_core_table_I, &_GLOBAL_2_core_table_I, &_GLOBAL_3_core_table_I, &_GLOBAL_4_core_table_I, &_GLOBAL_5_core_table_I, &_GLOBAL_6_core_table_I, &_GLOBAL_7_core_table_I, &_GLOBAL_8_core_table_I, &_GLOBAL_9_core_table_I, &_GLOBAL_10_core_table_I, &_GLOBAL_11_core_table_I, &_GLOBAL_12_core_table_I, &_GLOBAL_13_core_table_I, &_GLOBAL_14_core_table_I, &_GLOBAL_15_core_table_I, &_GLOBAL_16_core_table_I, &_GLOBAL_17_core_table_I, &_GLOBAL_18_core_table_I, &_GLOBAL_19_core_table_I, &_GLOBAL_20_core_table_I, &_GLOBAL_21_core_table_I, &_GLOBAL_22_core_table_I, &_GLOBAL_23_core_table_I, &_GLOBAL_24_core_table_I, &_GLOBAL_25_core_table_I, &_GLOBAL_26_core_table_I, &_GLOBAL_27_core_table_I, &_GLOBAL_28_core_table_I, &_GLOBAL_29_core_table_I, &_GLOBAL_30_core_table_I, &_GLOBAL_31_core_table_I, &_GLOBAL_32_core_table_I, &_GLOBAL_33_core_table_I, &_GLOBAL_34_core_table_I, &_GLOBAL_35_core_table_I, &_GLOBAL_36_core_table_I, &_GLOBAL_37_core_table_I, &_GLOBAL_38_core_table_I, &_GLOBAL_39_core_table_I, &_GLOBAL_40_core_table_I, &_GLOBAL_41_core_table_I, &_GLOBAL_42_core_table_I, &_GLOBAL_43_core_table_I, &_GLOBAL_44_core_table_I, &_GLOBAL_45_core_table_I, &_GLOBAL_46_core_table_I, &_GLOBAL_47_core_table_I, &_GLOBAL_48_core_table_I, &_GLOBAL_49_core_table_I, };   

 
    
    
    
    
    
    
 
 
    
    
    
    
    
    
 
 
    
    
    
    
    
    
 
 
    
    
    
    
    
    
 
 
    
    
    
    
    
    
 
 
    
    
    
    
    
    
 
 
    
    
    
    
    
    
 
 
    
    
    
    
    
    
 
 
    
    
    
    
    
    
 
 
    
    
    
    
    
    
 
 
    
    
    
    
    
    
    
 
 
    
    
    
    
    
    
 
 
    
    
    
    
    
    
 
# 169 "linux-2.6/net/core/sysctl_net_core.c"
 
    
    
    
    
    
    
 
     


 typedef  const char   _GLOBAL_187_T; static  _GLOBAL_187_T  _GLOBAL_0___kstrtab_net_sysctl_strdup_I [ ] __attribute__((section("__ksymtab_strings")))   = "" "net_sysctl_strdup"  ; static  _GLOBAL_187_T  _GLOBAL_1___kstrtab_net_sysctl_strdup_I [ ] __attribute__((section("__ksymtab_strings")))   = "" "net_sysctl_strdup"  ; static  _GLOBAL_187_T  _GLOBAL_2___kstrtab_net_sysctl_strdup_I [ ] __attribute__((section("__ksymtab_strings")))   = "" "net_sysctl_strdup"  ; static  _GLOBAL_187_T  _GLOBAL_3___kstrtab_net_sysctl_strdup_I [ ] __attribute__((section("__ksymtab_strings")))   = "" "net_sysctl_strdup"  ; static  _GLOBAL_187_T  _GLOBAL_4___kstrtab_net_sysctl_strdup_I [ ] __attribute__((section("__ksymtab_strings")))   = "" "net_sysctl_strdup"  ; static  _GLOBAL_187_T  _GLOBAL_5___kstrtab_net_sysctl_strdup_I [ ] __attribute__((section("__ksymtab_strings")))   = "" "net_sysctl_strdup"  ; static  _GLOBAL_187_T  _GLOBAL_6___kstrtab_net_sysctl_strdup_I [ ] __attribute__((section("__ksymtab_strings")))   = "" "net_sysctl_strdup"  ; static  _GLOBAL_187_T  _GLOBAL_7___kstrtab_net_sysctl_strdup_I [ ] __attribute__((section("__ksymtab_strings")))   = "" "net_sysctl_strdup"  ; static  _GLOBAL_187_T  _GLOBAL_8___kstrtab_net_sysctl_strdup_I [ ] __attribute__((section("__ksymtab_strings")))   = "" "net_sysctl_strdup"  ; static  _GLOBAL_187_T  _GLOBAL_9___kstrtab_net_sysctl_strdup_I [ ] __attribute__((section("__ksymtab_strings")))   = "" "net_sysctl_strdup"  ; static  _GLOBAL_187_T  _GLOBAL_10___kstrtab_net_sysctl_strdup_I [ ] __attribute__((section("__ksymtab_strings")))   = "" "net_sysctl_strdup"  ; static  _GLOBAL_187_T  _GLOBAL_11___kstrtab_net_sysctl_strdup_I [ ] __attribute__((section("__ksymtab_strings")))   = "" "net_sysctl_strdup"  ; static  _GLOBAL_187_T  _GLOBAL_12___kstrtab_net_sysctl_strdup_I [ ] __attribute__((section("__ksymtab_strings")))   = "" "net_sysctl_strdup"  ; static  _GLOBAL_187_T  _GLOBAL_13___kstrtab_net_sysctl_strdup_I [ ] __attribute__((section("__ksymtab_strings")))   = "" "net_sysctl_strdup"  ; static  _GLOBAL_187_T  _GLOBAL_14___kstrtab_net_sysctl_strdup_I [ ] __attribute__((section("__ksymtab_strings")))   = "" "net_sysctl_strdup"  ; static  _GLOBAL_187_T  _GLOBAL_15___kstrtab_net_sysctl_strdup_I [ ] __attribute__((section("__ksymtab_strings")))   = "" "net_sysctl_strdup"  ; static  _GLOBAL_187_T  _GLOBAL_16___kstrtab_net_sysctl_strdup_I [ ] __attribute__((section("__ksymtab_strings")))   = "" "net_sysctl_strdup"  ; static  _GLOBAL_187_T  _GLOBAL_17___kstrtab_net_sysctl_strdup_I [ ] __attribute__((section("__ksymtab_strings")))   = "" "net_sysctl_strdup"  ; static  _GLOBAL_187_T  _GLOBAL_18___kstrtab_net_sysctl_strdup_I [ ] __attribute__((section("__ksymtab_strings")))   = "" "net_sysctl_strdup"  ; static  _GLOBAL_187_T  _GLOBAL_19___kstrtab_net_sysctl_strdup_I [ ] __attribute__((section("__ksymtab_strings")))   = "" "net_sysctl_strdup"  ; static  _GLOBAL_187_T  _GLOBAL_20___kstrtab_net_sysctl_strdup_I [ ] __attribute__((section("__ksymtab_strings")))   = "" "net_sysctl_strdup"  ; static  _GLOBAL_187_T  _GLOBAL_21___kstrtab_net_sysctl_strdup_I [ ] __attribute__((section("__ksymtab_strings")))   = "" "net_sysctl_strdup"  ; static  _GLOBAL_187_T  _GLOBAL_22___kstrtab_net_sysctl_strdup_I [ ] __attribute__((section("__ksymtab_strings")))   = "" "net_sysctl_strdup"  ; static  _GLOBAL_187_T  _GLOBAL_23___kstrtab_net_sysctl_strdup_I [ ] __attribute__((section("__ksymtab_strings")))   = "" "net_sysctl_strdup"  ; static  _GLOBAL_187_T  _GLOBAL_24___kstrtab_net_sysctl_strdup_I [ ] __attribute__((section("__ksymtab_strings")))   = "" "net_sysctl_strdup"  ; static  _GLOBAL_187_T  _GLOBAL_25___kstrtab_net_sysctl_strdup_I [ ] __attribute__((section("__ksymtab_strings")))   = "" "net_sysctl_strdup"  ; static  _GLOBAL_187_T  _GLOBAL_26___kstrtab_net_sysctl_strdup_I [ ] __attribute__((section("__ksymtab_strings")))   = "" "net_sysctl_strdup"  ; static  _GLOBAL_187_T  _GLOBAL_27___kstrtab_net_sysctl_strdup_I [ ] __attribute__((section("__ksymtab_strings")))   = "" "net_sysctl_strdup"  ; static  _GLOBAL_187_T  _GLOBAL_28___kstrtab_net_sysctl_strdup_I [ ] __attribute__((section("__ksymtab_strings")))   = "" "net_sysctl_strdup"  ; static  _GLOBAL_187_T  _GLOBAL_29___kstrtab_net_sysctl_strdup_I [ ] __attribute__((section("__ksymtab_strings")))   = "" "net_sysctl_strdup"  ; static  _GLOBAL_187_T  _GLOBAL_30___kstrtab_net_sysctl_strdup_I [ ] __attribute__((section("__ksymtab_strings")))   = "" "net_sysctl_strdup"  ; static  _GLOBAL_187_T  _GLOBAL_31___kstrtab_net_sysctl_strdup_I [ ] __attribute__((section("__ksymtab_strings")))   = "" "net_sysctl_strdup"  ; static  _GLOBAL_187_T  _GLOBAL_32___kstrtab_net_sysctl_strdup_I [ ] __attribute__((section("__ksymtab_strings")))   = "" "net_sysctl_strdup"  ; static  _GLOBAL_187_T  _GLOBAL_33___kstrtab_net_sysctl_strdup_I [ ] __attribute__((section("__ksymtab_strings")))   = "" "net_sysctl_strdup"  ; static  _GLOBAL_187_T  _GLOBAL_34___kstrtab_net_sysctl_strdup_I [ ] __attribute__((section("__ksymtab_strings")))   = "" "net_sysctl_strdup"  ; static  _GLOBAL_187_T  _GLOBAL_35___kstrtab_net_sysctl_strdup_I [ ] __attribute__((section("__ksymtab_strings")))   = "" "net_sysctl_strdup"  ; static  _GLOBAL_187_T  _GLOBAL_36___kstrtab_net_sysctl_strdup_I [ ] __attribute__((section("__ksymtab_strings")))   = "" "net_sysctl_strdup"  ; static  _GLOBAL_187_T  _GLOBAL_37___kstrtab_net_sysctl_strdup_I [ ] __attribute__((section("__ksymtab_strings")))   = "" "net_sysctl_strdup"  ; static  _GLOBAL_187_T  _GLOBAL_38___kstrtab_net_sysctl_strdup_I [ ] __attribute__((section("__ksymtab_strings")))   = "" "net_sysctl_strdup"  ; static  _GLOBAL_187_T  _GLOBAL_39___kstrtab_net_sysctl_strdup_I [ ] __attribute__((section("__ksymtab_strings")))   = "" "net_sysctl_strdup"  ; static  _GLOBAL_187_T  _GLOBAL_40___kstrtab_net_sysctl_strdup_I [ ] __attribute__((section("__ksymtab_strings")))   = "" "net_sysctl_strdup"  ; static  _GLOBAL_187_T  _GLOBAL_41___kstrtab_net_sysctl_strdup_I [ ] __attribute__((section("__ksymtab_strings")))   = "" "net_sysctl_strdup"  ; static  _GLOBAL_187_T  _GLOBAL_42___kstrtab_net_sysctl_strdup_I [ ] __attribute__((section("__ksymtab_strings")))   = "" "net_sysctl_strdup"  ; static  _GLOBAL_187_T  _GLOBAL_43___kstrtab_net_sysctl_strdup_I [ ] __attribute__((section("__ksymtab_strings")))   = "" "net_sysctl_strdup"  ; static  _GLOBAL_187_T  _GLOBAL_44___kstrtab_net_sysctl_strdup_I [ ] __attribute__((section("__ksymtab_strings")))   = "" "net_sysctl_strdup"  ; static  _GLOBAL_187_T  _GLOBAL_45___kstrtab_net_sysctl_strdup_I [ ] __attribute__((section("__ksymtab_strings")))   = "" "net_sysctl_strdup"  ; static  _GLOBAL_187_T  _GLOBAL_46___kstrtab_net_sysctl_strdup_I [ ] __attribute__((section("__ksymtab_strings")))   = "" "net_sysctl_strdup"  ; static  _GLOBAL_187_T  _GLOBAL_47___kstrtab_net_sysctl_strdup_I [ ] __attribute__((section("__ksymtab_strings")))   = "" "net_sysctl_strdup"  ; static  _GLOBAL_187_T  _GLOBAL_48___kstrtab_net_sysctl_strdup_I [ ] __attribute__((section("__ksymtab_strings")))   = "" "net_sysctl_strdup"  ; static  _GLOBAL_187_T  _GLOBAL_49___kstrtab_net_sysctl_strdup_I [ ] __attribute__((section("__ksymtab_strings")))   = "" "net_sysctl_strdup"  ; static __attribute__ ((unused)) __typeof__(_GLOBAL_0___kstrtab_net_sysctl_strdup_I) *_GLOBAL___kstrtab_net_sysctl_strdup_14_A[NUM_STACKS] = { &_GLOBAL_0___kstrtab_net_sysctl_strdup_I, &_GLOBAL_1___kstrtab_net_sysctl_strdup_I, &_GLOBAL_2___kstrtab_net_sysctl_strdup_I, &_GLOBAL_3___kstrtab_net_sysctl_strdup_I, &_GLOBAL_4___kstrtab_net_sysctl_strdup_I, &_GLOBAL_5___kstrtab_net_sysctl_strdup_I, &_GLOBAL_6___kstrtab_net_sysctl_strdup_I, &_GLOBAL_7___kstrtab_net_sysctl_strdup_I, &_GLOBAL_8___kstrtab_net_sysctl_strdup_I, &_GLOBAL_9___kstrtab_net_sysctl_strdup_I, &_GLOBAL_10___kstrtab_net_sysctl_strdup_I, &_GLOBAL_11___kstrtab_net_sysctl_strdup_I, &_GLOBAL_12___kstrtab_net_sysctl_strdup_I, &_GLOBAL_13___kstrtab_net_sysctl_strdup_I, &_GLOBAL_14___kstrtab_net_sysctl_strdup_I, &_GLOBAL_15___kstrtab_net_sysctl_strdup_I, &_GLOBAL_16___kstrtab_net_sysctl_strdup_I, &_GLOBAL_17___kstrtab_net_sysctl_strdup_I, &_GLOBAL_18___kstrtab_net_sysctl_strdup_I, &_GLOBAL_19___kstrtab_net_sysctl_strdup_I, &_GLOBAL_20___kstrtab_net_sysctl_strdup_I, &_GLOBAL_21___kstrtab_net_sysctl_strdup_I, &_GLOBAL_22___kstrtab_net_sysctl_strdup_I, &_GLOBAL_23___kstrtab_net_sysctl_strdup_I, &_GLOBAL_24___kstrtab_net_sysctl_strdup_I, &_GLOBAL_25___kstrtab_net_sysctl_strdup_I, &_GLOBAL_26___kstrtab_net_sysctl_strdup_I, &_GLOBAL_27___kstrtab_net_sysctl_strdup_I, &_GLOBAL_28___kstrtab_net_sysctl_strdup_I, &_GLOBAL_29___kstrtab_net_sysctl_strdup_I, &_GLOBAL_30___kstrtab_net_sysctl_strdup_I, &_GLOBAL_31___kstrtab_net_sysctl_strdup_I, &_GLOBAL_32___kstrtab_net_sysctl_strdup_I, &_GLOBAL_33___kstrtab_net_sysctl_strdup_I, &_GLOBAL_34___kstrtab_net_sysctl_strdup_I, &_GLOBAL_35___kstrtab_net_sysctl_strdup_I, &_GLOBAL_36___kstrtab_net_sysctl_strdup_I, &_GLOBAL_37___kstrtab_net_sysctl_strdup_I, &_GLOBAL_38___kstrtab_net_sysctl_strdup_I, &_GLOBAL_39___kstrtab_net_sysctl_strdup_I, &_GLOBAL_40___kstrtab_net_sysctl_strdup_I, &_GLOBAL_41___kstrtab_net_sysctl_strdup_I, &_GLOBAL_42___kstrtab_net_sysctl_strdup_I, &_GLOBAL_43___kstrtab_net_sysctl_strdup_I, &_GLOBAL_44___kstrtab_net_sysctl_strdup_I, &_GLOBAL_45___kstrtab_net_sysctl_strdup_I, &_GLOBAL_46___kstrtab_net_sysctl_strdup_I, &_GLOBAL_47___kstrtab_net_sysctl_strdup_I, &_GLOBAL_48___kstrtab_net_sysctl_strdup_I, &_GLOBAL_49___kstrtab_net_sysctl_strdup_I, };        typedef  const struct kernel_symbol    _GLOBAL_188_T; static  _GLOBAL_188_T  global___ksymtab_net_sysctl_strdup[NUM_STACKS] __attribute__((__used__)) __attribute__((section("__ksymtab" ""), unused))   = {  { ( unsigned long  ) & net_sysctl_strdup   , _GLOBAL_0___kstrtab_net_sysctl_strdup_I  } ,  { ( unsigned long  ) & net_sysctl_strdup   , _GLOBAL_1___kstrtab_net_sysctl_strdup_I  } ,  { ( unsigned long  ) & net_sysctl_strdup   , _GLOBAL_2___kstrtab_net_sysctl_strdup_I  } ,  { ( unsigned long  ) & net_sysctl_strdup   , _GLOBAL_3___kstrtab_net_sysctl_strdup_I  } ,  { ( unsigned long  ) & net_sysctl_strdup   , _GLOBAL_4___kstrtab_net_sysctl_strdup_I  } ,  { ( unsigned long  ) & net_sysctl_strdup   , _GLOBAL_5___kstrtab_net_sysctl_strdup_I  } ,  { ( unsigned long  ) & net_sysctl_strdup   , _GLOBAL_6___kstrtab_net_sysctl_strdup_I  } ,  { ( unsigned long  ) & net_sysctl_strdup   , _GLOBAL_7___kstrtab_net_sysctl_strdup_I  } ,  { ( unsigned long  ) & net_sysctl_strdup   , _GLOBAL_8___kstrtab_net_sysctl_strdup_I  } ,  { ( unsigned long  ) & net_sysctl_strdup   , _GLOBAL_9___kstrtab_net_sysctl_strdup_I  } ,  { ( unsigned long  ) & net_sysctl_strdup   , _GLOBAL_10___kstrtab_net_sysctl_strdup_I  } ,  { ( unsigned long  ) & net_sysctl_strdup   , _GLOBAL_11___kstrtab_net_sysctl_strdup_I  } ,  { ( unsigned long  ) & net_sysctl_strdup   , _GLOBAL_12___kstrtab_net_sysctl_strdup_I  } ,  { ( unsigned long  ) & net_sysctl_strdup   , _GLOBAL_13___kstrtab_net_sysctl_strdup_I  } ,  { ( unsigned long  ) & net_sysctl_strdup   , _GLOBAL_14___kstrtab_net_sysctl_strdup_I  } ,  { ( unsigned long  ) & net_sysctl_strdup   , _GLOBAL_15___kstrtab_net_sysctl_strdup_I  } ,  { ( unsigned long  ) & net_sysctl_strdup   , _GLOBAL_16___kstrtab_net_sysctl_strdup_I  } ,  { ( unsigned long  ) & net_sysctl_strdup   , _GLOBAL_17___kstrtab_net_sysctl_strdup_I  } ,  { ( unsigned long  ) & net_sysctl_strdup   , _GLOBAL_18___kstrtab_net_sysctl_strdup_I  } ,  { ( unsigned long  ) & net_sysctl_strdup   , _GLOBAL_19___kstrtab_net_sysctl_strdup_I  } ,  { ( unsigned long  ) & net_sysctl_strdup   , _GLOBAL_20___kstrtab_net_sysctl_strdup_I  } ,  { ( unsigned long  ) & net_sysctl_strdup   , _GLOBAL_21___kstrtab_net_sysctl_strdup_I  } ,  { ( unsigned long  ) & net_sysctl_strdup   , _GLOBAL_22___kstrtab_net_sysctl_strdup_I  } ,  { ( unsigned long  ) & net_sysctl_strdup   , _GLOBAL_23___kstrtab_net_sysctl_strdup_I  } ,  { ( unsigned long  ) & net_sysctl_strdup   , _GLOBAL_24___kstrtab_net_sysctl_strdup_I  } ,  { ( unsigned long  ) & net_sysctl_strdup   , _GLOBAL_25___kstrtab_net_sysctl_strdup_I  } ,  { ( unsigned long  ) & net_sysctl_strdup   , _GLOBAL_26___kstrtab_net_sysctl_strdup_I  } ,  { ( unsigned long  ) & net_sysctl_strdup   , _GLOBAL_27___kstrtab_net_sysctl_strdup_I  } ,  { ( unsigned long  ) & net_sysctl_strdup   , _GLOBAL_28___kstrtab_net_sysctl_strdup_I  } ,  { ( unsigned long  ) & net_sysctl_strdup   , _GLOBAL_29___kstrtab_net_sysctl_strdup_I  } ,  { ( unsigned long  ) & net_sysctl_strdup   , _GLOBAL_30___kstrtab_net_sysctl_strdup_I  } ,  { ( unsigned long  ) & net_sysctl_strdup   , _GLOBAL_31___kstrtab_net_sysctl_strdup_I  } ,  { ( unsigned long  ) & net_sysctl_strdup   , _GLOBAL_32___kstrtab_net_sysctl_strdup_I  } ,  { ( unsigned long  ) & net_sysctl_strdup   , _GLOBAL_33___kstrtab_net_sysctl_strdup_I  } ,  { ( unsigned long  ) & net_sysctl_strdup   , _GLOBAL_34___kstrtab_net_sysctl_strdup_I  } ,  { ( unsigned long  ) & net_sysctl_strdup   , _GLOBAL_35___kstrtab_net_sysctl_strdup_I  } ,  { ( unsigned long  ) & net_sysctl_strdup   , _GLOBAL_36___kstrtab_net_sysctl_strdup_I  } ,  { ( unsigned long  ) & net_sysctl_strdup   , _GLOBAL_37___kstrtab_net_sysctl_strdup_I  } ,  { ( unsigned long  ) & net_sysctl_strdup   , _GLOBAL_38___kstrtab_net_sysctl_strdup_I  } ,  { ( unsigned long  ) & net_sysctl_strdup   , _GLOBAL_39___kstrtab_net_sysctl_strdup_I  } ,  { ( unsigned long  ) & net_sysctl_strdup   , _GLOBAL_40___kstrtab_net_sysctl_strdup_I  } ,  { ( unsigned long  ) & net_sysctl_strdup   , _GLOBAL_41___kstrtab_net_sysctl_strdup_I  } ,  { ( unsigned long  ) & net_sysctl_strdup   , _GLOBAL_42___kstrtab_net_sysctl_strdup_I  } ,  { ( unsigned long  ) & net_sysctl_strdup   , _GLOBAL_43___kstrtab_net_sysctl_strdup_I  } ,  { ( unsigned long  ) & net_sysctl_strdup   , _GLOBAL_44___kstrtab_net_sysctl_strdup_I  } ,  { ( unsigned long  ) & net_sysctl_strdup   , _GLOBAL_45___kstrtab_net_sysctl_strdup_I  } ,  { ( unsigned long  ) & net_sysctl_strdup   , _GLOBAL_46___kstrtab_net_sysctl_strdup_I  } ,  { ( unsigned long  ) & net_sysctl_strdup   , _GLOBAL_47___kstrtab_net_sysctl_strdup_I  } ,  { ( unsigned long  ) & net_sysctl_strdup   , _GLOBAL_48___kstrtab_net_sysctl_strdup_I  } ,  { ( unsigned long  ) & net_sysctl_strdup   , _GLOBAL_49___kstrtab_net_sysctl_strdup_I  } ,  };             
