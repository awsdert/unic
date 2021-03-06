#if !defined( UNIC_UINT_FAST32_C ) && UNIC_CAN_MAP_AT_LEAST_32BIT
#include "_.h"

/* Since these macros can function as fallbacks check for originals 1st */

#ifdef UINT_FAST32_MAX
# define UNIC_UINT_FAST32_MAX UINT_FAST32_MAX
#elif UNIC_INT_WIDTH >= 32
# define UNIC_UINT_FAST32_MAX UNIC_UINT_MAX
#else
# define UNIC_UINT_FAST32_MAX UNIC_ULONG_MAX
#endif

#ifdef UINT_FAST32_END_BIT
# define UNIC_UINT_FAST32_END_BIT UINT_FAST32_END_BIT
#else
# define UNIC_UINT_FAST32_END_BIT (~(UNIC_UINT_MAX>>1))
#endif

#ifdef SIZEOF_UINT_FAST32
# define UNIC_SIZEOF_UINT_FAST32 SIZEOF_UINT_FAST32
#else
# define UNIC_SIZEOF_UINT_FAST32 SIZEOF_BY_UMAX(UNIC_UINT_FAST32_MAX)
#endif

#ifdef UINT_FAST32_WIDTH
# define UNIC_UINT_FAST32_WIDTH UINT_FAST32_WIDTH
#else
# define UNIC_UINT_FAST32_WIDTH (UNIC_SIZEOF_UINT_FAST32 * UNIC_CHAR_BIT)
#endif

#ifdef UINT_FAST32_TYPE
# define UNIC_UINT_FAST32_TYPE UINT_FAST32_TYPE
#elif UNIC_INT_WIDTH >= 32
# define UNIC_UINT_FAST32_TYPE unsigned int
#else
# define UNIC_UINT_FAST32_TYPE unsigned long int
#endif

typedef UNIC_UINT_FAST32_TYPE unic_uint_fast32_t;

#ifdef UINT_FAST32_C
# define UNIC_UINT_FAST32_C UINT_FAST32_C
#elif UNIC_INT_WIDTH >= 32
# define UNIC_UINT_FAST32_C(VAL) VAL
#else
# define UNIC_UINT_FAST32_C(VAL) VAL##UL
#endif

#ifdef PRI_UINT_FAST32
# define UNIC_PRI_UINT_FAST32 PRI_UINT_FAST32
#elif UNIC_INT_WIDTH >= 32
# define UNIC_PRI_UINT_FAST32
#else
# define UNIC_PRI_UINT_FAST32 "l"
#endif

#ifdef SCN_UINT_FAST32
# define UNIC_SCN_UINT_FAST32 SCN_UINT_FAST32
#elif UNIC_INT_WIDTH >= 32
# define UNIC_SCN_UINT_FAST32
#else
# define UNIC_SCN_UINT_FAST32 "l"
#endif

#define UNIC_PRIiUINT_FAST32 UNIC_PRI_UINT_FAST32 "i"
#define UNIC_PRIoUINT_FAST32 UNIC_PRI_UINT_FAST32 "o"
#define UNIC_PRIuUINT_FAST32 UNIC_PRI_UINT_FAST32 "u"
#define UNIC_PRIxUINT_FAST32 UNIC_PRI_UINT_FAST32 "x"
#define UNIC_PRIXUINT_FAST32 UNIC_PRI_UINT_FAST32 "X"

#define UNIC_SCNiUINT_FAST32 UNIC_SCN_UINT_FAST32 "i"
#define UNIC_SCNoUINT_FAST32 UNIC_SCN_UINT_FAST32 "o"
#define UNIC_SCNuUINT_FAST32 UNIC_SCN_UINT_FAST32 "u"
#define UNIC_SCNxUINT_FAST32 UNIC_SCN_UINT_FAST32 "x"
#define UNIC_SCNXUINT_FAST32 UNIC_SCN_UINT_FAST32 "X"

#ifdef UNIC_FALLBACK

/* include int_fast32_t.h instead for this typedef */

#ifndef UINT_FAST32_MAX
# define UINT_FAST32_MAX UNIC_UINT_FAST32_MAX
#endif

#ifndef SIZEOF_UINT_FAST32
# define SIZEOF_UINT_FAST32 UNIC_SIZEOF_UINT_FAST32
#endif

#ifndef UINT_FAST32_WIDTH
# define UINT_FAST32_WIDTH UNIC_UINT_FAST32_WIDTH
#endif

#ifndef UINT_FAST32_TYPE
# define UINT_FAST32_TYPE UNIC_UINT_FAST32_TYPE
#endif

#ifndef UINT_FAST32_C
# define UINT_FAST32_C UNIC_UINT_FAST32_C
#endif

#ifndef PRIxUINT_FAST32
# define PRIiUINT_FAST32 UNIC_PRIiUINT_FAST32
# define PRIoUINT_FAST32 UNIC_PRIoUINT_FAST32
# define PRIuUINT_FAST32 UNIC_PRIuUINT_FAST32
# define PRIxUINT_FAST32 UNIC_PRIxUINT_FAST32
# define PRIXUINT_FAST32 UNIC_PRIXUINT_FAST32
#endif

#ifndef SCNxUINT_FAST32
# define SCNiUINT_FAST32 UNIC_SCNiUINT_FAST32
# define SCNoUINT_FAST32 UNIC_SCNoUINT_FAST32
# define SCNuUINT_FAST32 UNIC_SCNuUINT_FAST32
# define SCNxUINT_FAST32 UNIC_SCNxUINT_FAST32
# define SCNXUINT_FAST32 UNIC_SCNXUINT_FAST32
#endif

#endif /* UNIC_FALLBACK */

#endif
