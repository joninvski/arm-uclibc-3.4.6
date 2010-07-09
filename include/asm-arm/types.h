#ifndef __ASM_ARM_TYPES_H
#define __ASM_ARM_TYPES_H

#ifndef __ASSEMBLY__

typedef unsigned short umode_t;

/*
 * __xx is ok: it doesn't pollute the POSIX namespace. Use these in the
 * header files exported to user space
 */

typedef __signed__ char __s8;
typedef unsigned char __u8;

typedef __signed__ short __s16;
typedef unsigned short __u16;

typedef __signed__ int __s32;
typedef unsigned int __u32;

#if (defined(__GNUC__) && !defined(__STRICT_ANSI__)) || (__STDC_VERSION__ >= 199901L)
typedef __signed__ long long __s64;
typedef unsigned long long __u64;
#endif

#if (defined(__STRICT_ANSI__) && !defined(inline))
#define inline __inline__
#endif

#endif /* __ASSEMBLY__ */

/*
 * These aren't exported outside the kernel to avoid name space clashes
 */

#endif

