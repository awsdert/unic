#if !defined( UNIC_UINT_FAST8_C ) && UNIC_CAN_MAP_AT_LEAST_8BIT
#include "_.h"

/* Since these macros can function as fallbacks check for originals 1st */

#ifdef UINT_FAST8_MAX
# define UNIC_UINT_FAST8_MAX UINT_FAST8_MAX
#else
# define UNIC_UINT_FAST8_MAX UCHAR_MAX
#endif

#ifdef UINT_FAST8_END_BIT
# define UNIC_UINT_FAST8_END_BIT UINT_FAST8_END_BIT
#else
# define UNIC_UINT_FAST8_END_BIT (~(UNIC_UINT_MAX>>1))
#endif

#ifdef SIZEOF_UINT_FAST8
# define UNIC_SIZEOF_UINT_FAST8 SIZEOF_UINT_FAST8
#else
# define UNIC_SIZEOF_UINT_FAST8 UNIC_SIZEOF_CHAR
#endif

#ifdef UINT_FAST8_WIDTH
# define UNIC_UINT_FAST8_WIDTH UINT_FAST8_WIDTH
#else
# define UNIC_UINT_FAST8_WIDTH (UNIC_SIZEOF_UINT_FAST8 * UNIC_CHAR_BIT)
#endif

#ifdef UINT_FAST8_TYPE
# define UNIC_UINT_FAST8_TYPE UINT_FAST8_TYPE
#else
# define UNIC_UINT_FAST8_TYPE unsigned char
#endif

typedef UNIC_UINT_FAST8_TYPE unic_uint_fast8_t;

#ifdef UINT_FAST8_C
# define UNIC_UINT_FAST8_C UINT_FAST8_C
#else
# define UNIC_UINT_FAST8_C(VAL) VAL
#endif

#ifdef PRI_UINT_FAST8
# define UNIC_PRI_UINT_FAST8 PRI_UINT_FAST8
#else
# define UNIC_PRI_UINT_FAST8
#endif

#ifdef SCN_UINT_FAST8
# define UNIC_SCN_UINT_FAST8 SCN_UINT_FAST8
#else
# define UNIC_SCN_UINT_FAST8 "hh"
#endif

#define UNIC_PRIiUINT_FAST8 UNIC_PRI_UINT_FAST8 "i"
#define UNIC_PRIoUINT_FAST8 UNIC_PRI_UINT_FAST8 "o"
#define UNIC_PRIuUINT_FAST8 UNIC_PRI_UINT_FAST8 "u"
#define UNIC_PRIxUINT_FAST8 UNIC_PRI_UINT_FAST8 "x"
#define UNIC_PRIXUINT_FAST8 UNIC_PRI_UINT_FAST8 "X"

#define UNIC_SCNiUINT_FAST8 UNIC_SCN_UINT_FAST8 "i"
#define UNIC_SCNoUINT_FAST8 UNIC_SCN_UINT_FAST8 "o"
#define UNIC_SCNuUINT_FAST8 UNIC_SCN_UINT_FAST8 "u"
#define UNIC_SCNxUINT_FAST8 UNIC_SCN_UINT_FAST8 "x"
#define UNIC_SCNXUINT_FAST8 UNIC_SCN_UINT_FAST8 "X"

#ifdef UNIC_FALLBACK

# ifndef __uint_fast8_t_defined
#  define __uint_fast8_t_defined
typedef unic_uint_fast8_t uint_fast8_t;
# endif

#ifndef UINT_FAST8_MAX
# define UINT_FAST8_MAX UNIC_UINT_FAST8_MAX
#endif

#ifndef SIZEOF_UINT_FAST8
# define SIZEOF_UINT_FAST8 UNIC_SIZEOF_UINT_FAST8
#endif

#ifndef UINT_FAST8_WIDTH
# define UINT_FAST8_WIDTH UNIC_UINT_FAST8_WIDTH
#endif

#ifndef UINT_FAST8_TYPE
# define UINT_FAST8_TYPE UNIC_UINT_FAST8_TYPE
#endif

#ifndef UINT_FAST8_C
# define UINT_FAST8_C UNIC_UINT_FAST8_C
#endif

#ifndef PRIxUINT_FAST8
# define PRIiUINT_FAST8 UNIC_PRIiUINT_FAST8
# define PRIoUINT_FAST8 UNIC_PRIoUINT_FAST8
# define PRIuUINT_FAST8 UNIC_PRIuUINT_FAST8
# define PRIxUINT_FAST8 UNIC_PRIxUINT_FAST8
# define PRIXUINT_FAST8 UNIC_PRIXUINT_FAST8
#endif

#ifndef SCNxUINT_FAST8
# define SCNiUINT_FAST8 UNIC_SCNiUINT_FAST8
# define SCNoUINT_FAST8 UNIC_SCNoUINT_FAST8
# define SCNuUINT_FAST8 UNIC_SCNuUINT_FAST8
# define SCNxUINT_FAST8 UNIC_SCNxUINT_FAST8
# define SCNXUINT_FAST8 UNIC_SCNXUINT_FAST8
#endif

#endif /* UNIC_FALLBACK */

#endif
