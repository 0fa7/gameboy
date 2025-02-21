#include <stdio.h>

#include "disassembler.h"
#include "gameboy_utils.h"

int main(int argc, char** argv)
{
    printf("disassembler\n\n");

    if(argc != 2)
    {
        print_usage();
    }

    GameboyArch gameboy;
    read_game_rom(&gameboy, argv[1]);
    
    return 0;
}

void print_usage()
{
    printf("usage:\n");
    printf("    disassembler <input_rom.gb>\n");
}