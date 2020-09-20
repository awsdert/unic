#if !defined( UNIC_UINT_LEAST8_C ) && UNIC_CHAR_BIT >= 8
#include "_.h"

/* Since these macros can function as fallbacks check for originals 1st */

#ifdef UINT_LEAST8_MAX
# define UNIC_UINT_LEAST8_MAX UINT_LEAST8_MAX
#else
# define UNIC_UINT_LEAST8_MAX UCHAR_MAX
#endif

#ifdef UINT_LEAST8_END_BIT
# define UNIC_UINT_LEAST8_END_BIT UINT_LEAST8_END_BIT
#else
# define UNIC_UINT_LEAST8_END_BIT (~(UNIC_UINT_MAX>>1))
#endif

#ifdef SIZEOF_UINT_LEAST8
# define UNIC_SIZEOF_UINT_LEAST8 SIZEOF_UINT_LEAST8
#else
# define UNIC_SIZEOF_UINT_LEAST8 UNIC_SIZEOF_CHAR
#endif

#ifdef UINT_LEAST8_WIDTH
# define UNIC_UINT_LEAST8_WIDTH UINT_LEAST8_WIDTH
#else
# define UNIC_UINT_LEAST8_WIDTH (UNIC_SIZEOF_UINT_LEAST8 * UNIC_CHAR_BIT)
#endif

#ifdef UINT_LEAST8_TYPE
# define UNIC_UINT_LEAST8_TYPE UINT_LEAST8_TYPE
#else
# define UNIC_UINT_LEAST8_TYPE unsigned char
#endif

typedef UNIC_UINT_LEAST8_TYPE unic_uint_least8_t;

#ifdef UINT_LEAST8_C
# define UNIC_UINT_LEAST8_C UINT_LEAST8_C
#else
# define UNIC_UINT_LEAST8_C(VAL) VAL
#endif

#ifdef PRI_UINT_LEAST8
# define UNIC_PRI_UINT_LEAST8 PRI_UINT_LEAST8
#else
# define UNIC_PRI_UINT_LEAST8
#endif

#ifdef SCN_UINT_LEAST8
# define UNIC_SCN_UINT_LEAST8 SCN_UINT_LEAST8
#else
# define UNIC_SCN_UINT_LEAST8 "hh"
#endif

#define UNIC_PRIiUINT_LEAST8 UNIC_PRI_UINT_LEAST8 "i"
#define UNIC_PRIoUINT_LEAST8 UNIC_PRI_UINT_LEAST8 "o"
#define UNIC_PRIuUINT_LEAST8 UNIC_PRI_UINT_LEAST8 "u"
#define UNIC_PRIxUINT_LEAST8 UNIC_PRI_UINT_LEAST8 "x"
#define UNIC_PRIXUINT_LEAST8 UNIC_PRI_UINT_LEAST8 "X"

#define UNIC_SCNiUINT_LEAST8 UNIC_SCN_UINT_LEAST8 "i"
#define UNIC_SCNoUINT_LEAST8 UNIC_SCN_UINT_LEAST8 "o"
#define UNIC_SCNuUINT_LEAST8 UNIC_SCN_UINT_LEAST8 "u"
#define UNIC_SCNxUINT_LEAST8 UNIC_SCN_UINT_LEAST8 "x"
#define UNIC_SCNXUINT_LEAST8 UNIC_SCN_UINT_LEAST8 "X"

#ifdef UNIC_FALLBACK

# ifndef __uint_least8_t_defined
#  define __uint_least8_t_defined
typedef unic_uint_least8_t uint_least8_t;
# endif

#ifndef UINT_LEAST8_MAX
# define UINT_LEAST8_MAX UNIC_UINT_LEAST8_MAX
#endif

#ifndef SIZEOF_UINT_LEAST8
# define SIZEOF_UINT_LEAST8 UNIC_SIZEOF_UINT_LEAST8
#endif

#ifndef UINT_LEAST8_WIDTH
# define UINT_LEAST8_WIDTH UNIC_UINT_LEAST8_WIDTH
#endif

#ifndef UINT_LEAST8_TYPE
# define UINT_LEAST8_TYPE UNIC_UINT_LEAST8_TYPE
#endif

#ifndef UINT_LEAST8_C
# define UINT_LEAST8_C UNIC_UINT_LEAST8_C
#endif

#ifndef PRIxUINT_LEAST8
# define PRIiUINT_LEAST8 UNIC_PRIiUINT_LEAST8
# define PRIoUINT_LEAST8 UNIC_PRIoUINT_LEAST8
# define PRIuUINT_LEAST8 UNIC_PRIuUINT_LEAST8
# define PRIxUINT_LEAST8 UNIC_PRIxUINT_LEAST8
# define PRIXUINT_LEAST8 UNIC_PRIXUINT_LEAST8
#endif

#ifndef SCNxUINT_LEAST8
# define SCNiUINT_LEAST8 UNIC_SCNiUINT_LEAST8
# define SCNoUINT_LEAST8 UNIC_SCNoUINT_LEAST8
# define SCNuUINT_LEAST8 UNIC_SCNuUINT_LEAST8
# define SCNxUINT_LEAST8 UNIC_SCNxUINT_LEAST8
# define SCNXUINT_LEAST8 UNIC_SCNXUINT_LEAST8
#endif

#endif /* UNIC_FALLBACK */

#endif
