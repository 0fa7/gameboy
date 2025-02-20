#include "gameboy_arch.h"

#include <stdlib.h>

void init_gameboy_arch(GameboyArch* gameboy)
{    
    free_gameboy_arch(gameboy);
}

void free_gameboy_arch(GameboyArch* gameboy)
{
    if(gameboy->game_rom)
    {
        free(gameboy->game_rom);
        gameboy->game_rom = NULL;
    }
}