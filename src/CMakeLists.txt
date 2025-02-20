cmake_minimum_required(VERSION 3.20)

set(GAMEBOY_DISASSEMBLER_SOURCES
    disassembler.c
    gameboy_arch.c
    gameboy_utils.c)

add_executable(disassembler ${GAMEBOY_DISASSEMBLER_SOURCES})
add_executable(gameboy gameboy.c)