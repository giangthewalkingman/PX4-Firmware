#include <nuttx/config.h>

#include <stdint.h>

#include <nuttx/video/rgbcolors.h>
#include <nuttx/nx/nxcursor.h>

#if CONFIG_NXWIDGETS_BPP == 8
#  define FGCOLOR1             RGB8_WHITE
#  define FGCOLOR2             RGB8_BLACK
#  define FGCOLOR3             RGB8_GRAY
#elif CONFIG_NXWIDGETS_BPP == 16
#  define FGCOLOR1             RGB16_WHITE
#  define FGCOLOR2             RGB16_BLACK
#  define FGCOLOR3             RGB16_GRAY
#elif CONFIG_NXWIDGETS_BPP == 24 || CONFIG_NXWIDGETS_BPP == 32
#  define FGCOLOR1             RGB24_WHITE
#  define FGCOLOR2             RGB24_BLACK
#  define FGCOLOR3             RGB24_GRAY
#else
#  error "Pixel depth not supported (CONFIG_NXWIDGETS_BPP)"
#endif

static const uint8_t g_resizeCursorImage[] =
{
  0x00, 0x00, 0x00, 0x0a, 0x00, 0x00, 0x00, 0x00,    /* Row 0 */
  0x00, 0x00, 0x00, 0x2f, 0x80, 0x00, 0x00, 0x00,    /* Row 1 */
  0x00, 0x00, 0x00, 0xb5, 0xe0, 0x00, 0x00, 0x00,    /* Row 2 */
  0x00, 0x00, 0x02, 0xd5, 0x78, 0x00, 0x00, 0x00,    /* Row 3 */
  0x00, 0x00, 0x0b, 0x55, 0x5e, 0x00, 0x00, 0x00,    /* Row 4 */
  0x00, 0x00, 0x2d, 0x55, 0x57, 0x80, 0x00, 0x00,    /* Row 5 */
  0x00, 0x00, 0xaa, 0x95, 0x6a, 0xa0, 0x00, 0x00,    /* Row 6 */
  0x00, 0x00, 0x00, 0x95, 0x60, 0x00, 0x00, 0x00,    /* Row 7 */
  0x00, 0x08, 0x00, 0x95, 0x60, 0x02, 0x00, 0x00,    /* Row 8 */
  0x00, 0x28, 0x00, 0x95, 0x60, 0x02, 0x80, 0x00,    /* Row 9 */
  0x00, 0xb8, 0x00, 0x95, 0x60, 0x02, 0xe0, 0x00,    /* Row 10 */
  0x02, 0xd8, 0x00, 0x95, 0x60, 0x02, 0x78, 0x00,    /* Row 11 */
  0x0b, 0x5a, 0xaa, 0x95, 0x6a, 0xaa, 0x5e, 0x00,    /* Row 12 */
  0x2d, 0x55, 0x55, 0x55, 0x55, 0x55, 0x57, 0x80,    /* Row 13 */
  0xb5, 0x55, 0x55, 0x55, 0x55, 0x55, 0x55, 0xe0,    /* Row 14 */
  0x2d, 0x55, 0x55, 0x55, 0x55, 0x55, 0x57, 0x80,    /* Row 15 */
  0x0b, 0x5a, 0xaa, 0x95, 0x6a, 0xaa, 0x5e, 0x00,    /* Row 16 */
  0x02, 0xd8, 0x00, 0x95, 0x60, 0x02, 0x78, 0x00,    /* Row 17 */
  0x00, 0xb8, 0x00, 0x95, 0x60, 0x02, 0xe0, 0x00,    /* Row 18 */
  0x00, 0x28, 0x00, 0x95, 0x60, 0x02, 0x80, 0x00,    /* Row 19 */
  0x00, 0x08, 0x00, 0x95, 0x60, 0x02, 0x00, 0x00,    /* Row 20 */
  0x00, 0x00, 0x00, 0x95, 0x60, 0x00, 0x00, 0x00,    /* Row 21 */
  0x00, 0x00, 0x00, 0x95, 0x60, 0x00, 0x00, 0x00,    /* Row 22 */
  0x00, 0x00, 0xaa, 0x95, 0x6a, 0xa0, 0x00, 0x00,    /* Row 23 */
  0x00, 0x00, 0x2d, 0x55, 0x57, 0x80, 0x00, 0x00,    /* Row 24 */
  0x00, 0x00, 0x0b, 0x55, 0x5e, 0x00, 0x00, 0x00,    /* Row 25 */
  0x00, 0x00, 0x02, 0xd5, 0x78, 0x00, 0x00, 0x00,    /* Row 26 */
  0x00, 0x00, 0x00, 0xb5, 0xe0, 0x00, 0x00, 0x00,    /* Row 27 */
  0x00, 0x00, 0x00, 0x2f, 0x80, 0x00, 0x00, 0x00,    /* Row 28 */
  0x00, 0x00, 0x00, 0x0a, 0x00, 0x00, 0x00, 0x00,    /* Row 29 */
};

const struct nx_cursorimage_s g_resizeCursor =
{
  .size =
  {
    .w = 30,
    .h = 30
  },
  .color1 =
  {
    FGCOLOR1
  },
  .color2 =
  {
    FGCOLOR1
  },
  .color3 =
  {
    FGCOLOR3
  },
  .image  = g_resizeCursorImage
};

