#ifndef GAMEBOY_ARCH_H
#define GAMEBOY_ARCH_H

#include <stdint.h>

// define max gameboy cartirige size of 8MB in bytes
#define GAMEBOY_MAX_CARTRIGE_SIZE_BYTES 8388608

struct gameboy_arch
{
    uint8_t* game_rom;
};

typedef struct gameboy_arch GameboyArch;

void init_gameboy_arch(GameboyArch* gameboy);
void free_gameboy_arch(GameboyArch* gameboy);

#endif // #ifndef GAMEBOY_CPU_H