#include <stdio.h>

#include "disassembler.h"

int main(int argc, char** argv)
{
    printf("disassembler\n\n");

    if(argc != 2)
    {
        print_usage();
    }

    return 0;
}

void print_usage()
{
    printf("usage:\n");
    printf("    disassembler <input_rom.gb>\n");
}