#include "chip8.h"


// variable for game
FILE *game;

void gameStart()
{
    char gameName[50];

    printf("Enter name of game you would like to play: ");
    scanf("%s", gameName);

    // function to prepare game to be played
}

void cpuPrepare()
{
    chip8def.indexRegister = 0;
    chip8def.programCounter = 0x200; // chip 8 reserves first 512 bytes of memory for interpreter
    memset(chip8def.registers, 0, sizeof(chip8def.registers)); // setting register to 0   


    /* loading game
    FILE *gameIn;
    gameIn = fopen ("/home/jacobsawyer/projects/chip8implementation/roms/test_opcode.ch8", "rb");
    fread (&chip8def.gameMemory[0x200], 0xfff, 1, gameIn);
    fclose(gameIn);
    */
}  
