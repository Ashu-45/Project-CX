#ifndef ASHU_H
#define ASHU_H

#include <stdio.h>
#include <stdlib.h>

int getch(){getchar(); getchar();}

void me(){
    ASHU_BOLD_RED();
    printf(" █████╗ ███████╗██╗  ██╗██╗   ██╗\n");
    printf("██╔══██╗██╔════╝██║  ██║██║   ██║\n");
    printf("███████║███████╗███████║██║   ██║\n");
    printf("██╔══██║╚════██║██╔══██║██║   ██║\n");
    printf("██║  ██║███████║██║  ██║╚██████╔╝\n");
    printf("╚═╝  ╚═╝╚══════╝╚═╝  ╚═╝ ╚═════╝\n");
    ASHU_BLUE();
    printf("welcome to my 1st version 1.0\n");
    ASHU_OFF();
}

void clrscr() {
    // Use ANSI escape code to clear the screen and reset cursor position
    printf("\033[2J\033[H");
    fflush(stdout); // Ensure the escape codes are flushed to the terminal
}

#endif
