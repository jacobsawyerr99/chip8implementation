#ifndef chip8_H
#define chip8_H

/* 
chip 8 requires sizes of 1 byte and 2 bytes. 
the typedefs are unsigned so we can hold values from 0 - 255 for BYTES and 0 - 66535 for TWOBYTES.
*/

typedef unsigned char BYTE;
typedef unsigned short int TWOBYTES;

// all specs are referenced in wikipedia for chip8 emulation.

struct chip8_defs
{
    // memory
    BYTE gameMemory[4096]; // chip-8 use 4096 bytes of memory (0x000 - 0xFFF)
    TWOBYTES stack[16]; // 1 16 bit stack

    // registers
    BYTE registers[16]; // 16 registers, each of size 1 byte. VF doubles as a flag
    TWOBYTES indexRegister; // 1 16 bit index register
    TWOBYTES programCounter; // 1 16 bit pc register
    TWOBYTES stackPointer; // pointer register for stack
} chip8def;



#endif