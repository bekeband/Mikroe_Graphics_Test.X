
#include "colors.h"

GFX_COLOR   _color;

#if (COLOR_DEPTH <= 8)
#elif (COLOR_DEPTH == 16)
void SetColor(unsigned int color)
{
  _color = (color);
}
#elif (COLOR_DEPTH == 24)
  void SetColor(unsigned int color)
  {
    DWORD cB, cG, cR;
    cB = (color & 0b00011111) << 3;
    cG = (color & 0b11111100000) << 5;
    cR = (color & 0b1111100000000000) << 8;
    _color = (cB | cG | cR);
  }
#endif

