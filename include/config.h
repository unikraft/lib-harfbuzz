/* Generated by upstream v8.1.1 on Linux x86_64, with Unikraft modifications */
/* Entries marked with 'UNIKRAFT' are purposely changed from default values */

/*
 * Autogenerated by the Meson build system.
 * Do not edit, your changes will be lost.
 */

#pragma once

#include <uk/config.h>

#define HAVE_ATEXIT 1

/* UNIKRAFT */
#if CONFIG_LIBCAIRO
#define HAVE_CAIRO 1

#define HAVE_CAIRO_FONT_OPTIONS_GET_CUSTOM_PALETTE_COLOR 1

#define HAVE_CAIRO_FT 1

#define HAVE_CAIRO_USER_FONT_FACE_SET_RENDER_COLOR_GLYPH_FUNC 1

#define HAVE_CAIRO_USER_SCALED_FONT_GET_FOREGROUND_SOURCE 1
#endif

/* UNIKRAFT */
#if CONFIG_LIBFREETYPE
#define HAVE_FREETYPE 1

#define HAVE_FT_DONE_MM_VAR 1

#define HAVE_FT_GET_TRANSFORM 1

#define HAVE_FT_GET_VAR_BLEND_COORDINATES 1

#define HAVE_FT_SET_VAR_BLEND_COORDINATES 1
#endif

#define HAVE_GETPAGESIZE 1

/* UNIKRAFT */
/* #define HAVE_GLIB 1

#define HAVE_GOBJECT 1

#define HAVE_ICU 1 */

#define HAVE_ISATTY 1

#define HAVE_MMAP 1

#define HAVE_MPROTECT 1

#define HAVE_NEWLOCALE 1

/* UNIKRAFT */
#if CONFIG_MUSL_THREAD
#define HAVE_PTHREAD 1
#endif

/* UNIKRAFT */
#if (CONFIG_LIBNEWLIBC || CONFIG_LIBMUSL_MATH)
#define HAVE_SINCOSF 1
#endif

#define HAVE_STDBOOL_H 1

#define HAVE_SYSCONF 1

#define HAVE_SYS_MMAN_H 1

#define HAVE_UNISTD_H 1

#define HAVE_USELOCALE 1

#define PACKAGE_NAME "HarfBuzz"

#define PACKAGE_VERSION "8.1.1"

