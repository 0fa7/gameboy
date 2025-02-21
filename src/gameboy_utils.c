#include "gameboy_utils.h"

#include <stdio.h>
#include <stdlib.h>
#include <sys/stat.h>

void read_game_rom(GameboyArch* gameboy, char* file_path)
{
    FILE* fp = NULL;
    fp = fopen(file_path, "rb");

    if(!fp)
    {
        printf("failed to open file: %s", file_path);
        return;
    }

    fseek(fp, 0L, SEEK_END);
    size_t file_sz = ftell(fp);
    fseek(fp, 0L, SEEK_SET);

    gameboy->game_rom = (uint8_t*)malloc(sizeof(uint8_t) * file_sz + 1);
    size_t bytes_read = fread(gameboy->game_rom, sizeof(uint8_t), file_sz, fp);

    if(bytes_read != file_sz)
    {
        printf("failed to read entire file: %s\n", file_path);
        printf("bytes expected: %zd\n", file_sz);
        printf("bytes read: %zd\n", bytes_read);
    }

    fclose(fp);
}