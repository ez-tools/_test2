/* obsdcompat/config.h.  Generated from config.h.in by configure.  */
/* obsdcompat/config.h.in.  Generated from configure.ac by autoheader.  */

/* Define if building universal (internal helper macro) */
/* #undef AC_APPLE_UNIVERSAL_BUILD */

/* Define if your snprintf is busted */
/* #undef BROKEN_SNPRINTF */

/* Define to 1 if you have the `asprintf' function. */
#define HAVE_ASPRINTF 1

/* OpenBSD's gcc has bounded */
/* #undef HAVE_ATTRIBUTE__BOUNDED__ */

/* OpenBSD's gcc has sentinel */
/* #undef HAVE_ATTRIBUTE__SENTINEL__ */

/* Define to 1 if you have the `bcopy' function. */
#define HAVE_BCOPY 1

/* Define if you are on Cygwin */
/* #undef HAVE_CYGWIN */

/* Define to 1 if you have the <endian.h> header file. */
#define HAVE_ENDIAN_H 1

/* Define to 1 if you have the <features.h> header file. */
#define HAVE_FEATURES_H 1

/* Define to 1 if you have the <floatingpoint.h> header file. */
/* #undef HAVE_FLOATINGPOINT_H */

/* Define to 1 if you have the `getrusage' function. */
/* #undef HAVE_GETRUSAGE */

/* define if you have int64_t data type */
#define HAVE_INT64_T 1

/* Define to 1 if you have the <inttypes.h> header file. */
#define HAVE_INTTYPES_H 1

/* define if you have intxx_t data type */
#define HAVE_INTXX_T 1

/* Define to 1 if you have the `dl' library (-ldl). */
/* #undef HAVE_LIBDL */

/* Define to 1 if you have the <limits.h> header file. */
#define HAVE_LIMITS_H 1

/* Define to 1 if the system has the type `long double'. */
#define HAVE_LONG_DOUBLE 1

/* Define to 1 if the system has the type `long long'. */
#define HAVE_LONG_LONG 1

/* Define to 1 if you have the <memory.h> header file. */
#define HAVE_MEMORY_H 1

/* define if you have size_t data type */
#define HAVE_SIZE_T 1

/* Define to 1 if you have the `snprintf' function. */
#define HAVE_SNPRINTF 1

/* define if you have ssize_t data type */
#define HAVE_SSIZE_T 1

/* Define to 1 if you have the <stddef.h> header file. */
#define HAVE_STDDEF_H 1

/* Define to 1 if you have the <stdint.h> header file. */
#define HAVE_STDINT_H 1

/* Define to 1 if you have the <stdlib.h> header file. */
#define HAVE_STDLIB_H 1

/* Define to 1 if you have the `strdup' function. */
#define HAVE_STRDUP 1

/* Define to 1 if you have the `strerror' function. */
#define HAVE_STRERROR 1

/* Define to 1 if you have the `strftime' function. */
#define HAVE_STRFTIME 1

/* Define to 1 if you have the <strings.h> header file. */
#define HAVE_STRINGS_H 1

/* Define to 1 if you have the <string.h> header file. */
#define HAVE_STRING_H 1

/* Define to 1 if you have the `strlcat' function. */
/* #undef HAVE_STRLCAT */

/* Define to 1 if you have the `strlcpy' function. */
/* #undef HAVE_STRLCPY */

/* Define to 1 if you have the `strsep' function. */
#define HAVE_STRSEP 1

/* Define to 1 if you have the `strtoll' function. */
#define HAVE_STRTOLL 1

/* Define to 1 if you have the `strtonum' function. */
/* #undef HAVE_STRTONUM */

/* Define to 1 if you have the `strtoul' function. */
#define HAVE_STRTOUL 1

/* Define to 1 if you have the `sysconf' function. */
#define HAVE_SYSCONF 1

/* Define to 1 if you have the <sys/stat.h> header file. */
#define HAVE_SYS_STAT_H 1

/* Define to 1 if you have the <sys/stropts.h> header file. */
#define HAVE_SYS_STROPTS_H 1

/* Define to 1 if you have the <sys/strtio.h> header file. */
/* #undef HAVE_SYS_STRTIO_H */

/* Define to 1 if you have the <sys/sysmacros.h> header file. */
#define HAVE_SYS_SYSMACROS_H 1

/* Define to 1 if you have the <sys/types.h> header file. */
#define HAVE_SYS_TYPES_H 1

/* define if you have uintxx_t data type */
#define HAVE_UINTXX_T 1

/* Define to 1 if you have the <unistd.h> header file. */
#define HAVE_UNISTD_H 1

/* Define to 1 if the system has the type `unsigned long long'. */
#define HAVE_UNSIGNED_LONG_LONG 1

/* Define to 1 if you have the <util.h> header file. */
/* #undef HAVE_UTIL_H */

/* define if you have u_char data type */
#define HAVE_U_CHAR 1

/* define if you have u_int data type */
#define HAVE_U_INT 1

/* define if you have u_int64_t data type */
#define HAVE_U_INT64_T 1

/* define if you have u_intxx_t data type */
#define HAVE_U_INTXX_T 1

/* Define to 1 if you have the `vasprintf' function. */
#define HAVE_VASPRINTF 1

/* Define if va_copy exists */
#define HAVE_VA_COPY 1

/* Define to 1 if you have the `vsnprintf' function. */
#define HAVE_VSNPRINTF 1

/* Define if compiler implements __FUNCTION__ */
#define HAVE___FUNCTION__ 1

/* Define if libc defines __progname */
#define HAVE___PROGNAME 1

/* Define if __va_copy exists */
#define HAVE___VA_COPY 1

/* Define if compiler implements __func__ */
#define HAVE___func__ 1

/* max value of long long calculated by configure */
/* #undef LLONG_MAX */

/* min value of long long calculated by configure */
/* #undef LLONG_MIN */

/* Name of package */
#define OBSD_PACKAGE "openbsd-compat"

/* Define to the address where bug reports for this package should be sent. */
#define OBSD_PACKAGE_BUGREPORT "martin@pdftex.org"

/* Define to the full name of this package. */
#define OBSD_PACKAGE_NAME "OpenBSD-Compat"

/* Define to the full name and version of this package. */
#define OBSD_PACKAGE_STRING "OpenBSD-Compat Portable"

/* Define to the one symbol short name of this package. */
#define OBSD_PACKAGE_TARNAME "openbsd-compat"

/* Define to the home page for this package. */
#define OBSD_PACKAGE_URL ""

/* Define to the version of this package. */
#define OBSD_PACKAGE_VERSION "Portable"

/* The size of `char', as computed by sizeof. */
#define SIZEOF_CHAR 1

/* The size of `int', as computed by sizeof. */
#define SIZEOF_INT 4

/* The size of `long int', as computed by sizeof. */
#define SIZEOF_LONG_INT 8

/* The size of `long long int', as computed by sizeof. */
#define SIZEOF_LONG_LONG_INT 8

/* The size of `short int', as computed by sizeof. */
#define SIZEOF_SHORT_INT 2

/* Define as const if snprintf() can declare const char *fmt */
#define SNPRINTF_CONST const

/* Define to 1 if you have the ANSI C header files. */
#define STDC_HEADERS 1

/* Version number of package */
#define OBSD_VERSION "Portable"

/* Define WORDS_BIGENDIAN to 1 if your processor stores words with the most
   significant byte first (like Motorola and SPARC, unlike Intel). */
#if defined AC_APPLE_UNIVERSAL_BUILD
# if defined __BIG_ENDIAN__
#  define WORDS_BIGENDIAN 1
# endif
#else
# ifndef WORDS_BIGENDIAN
/* #  undef WORDS_BIGENDIAN */
# endif
#endif

/* Number of bits in a file offset, on hosts where this is settable. */
/* #undef _FILE_OFFSET_BITS */

/* Define for large files, on AIX-style hosts. */
/* #undef _LARGE_FILES */

/* Define to `__inline__' or `__inline' if that's what the C compiler
   calls it, or to nothing if 'inline' is not supported under any name.  */
#ifndef __cplusplus
/* #undef inline */
#endif
