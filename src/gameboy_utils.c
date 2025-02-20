#include "gameboy_utils.h"

#include <stdio.h>
#include <stdlib.h>

void read_game_rom(GameboyArch* gameboy, char* file_path)
{
    FILE* fp = NULL;
    fp = fopen(file_path, "r");

    if(!fp)
    {
        printf("failed to open file: %s", file_path);
        return;
    }

    fseek(fp, 0L, SEEK_END);
    size_t file_sz = ftell(fp);
    rewind(fp);

    gameboy->game_rom = (uint8_t*)malloc(sizeof(uint8_t) * file_sz);
    size_t bytes_read = fread(gameboy->game_rom, file_sz, 1, fp);

    if(bytes_read != file_sz)
    {
        printf("failed to read entire file: %s", file_path);
    }
}