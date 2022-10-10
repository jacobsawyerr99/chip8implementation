#ifndef gpu_h
#include "chip8.h"

/* 
gpu emulation in chip 8 works by drawing sprites on screen at specific x and y positions.
these spritesa are drawn 8 pixels wide and a variable height. The display is represented
at a 64x32 height so we can use a 2d array to represent.
*/  

BYTE screenData[64][32];

#endif