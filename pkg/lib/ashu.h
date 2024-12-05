#ifndef ASHU_H
#define ASHU_H

#include <stdio.h>
#include <stdlib.h>

int getch(){getchar(); getchar();}



void clrscr() {
    // Use ANSI escape code to clear the screen and reset cursor position
    printf("\033[2J\033[H");
    fflush(stdout); // Ensure the escape codes are flushed to the terminal
}

void ashu_exit(){
    getch();
    ASHU_RED();
    printf("\nPRESS ANY KEY FOR EXIT .....\n");
    ASHU_OFF();
    clrscr();
}

void me(){
    clrscr();
    ASHU_BOLD_RED();
    printf(" █████╗ ███████╗██╗  ██╗██╗   ██╗\n");
    printf("██╔══██╗██╔════╝██║  ██║██║   ██║\n");
    printf("███████║███████╗███████║██║   ██║\n");
    printf("██╔══██║╚════██║██╔══██║██║   ██║\n");
    printf("██║  ██║███████║██║  ██║╚██████╔╝\n");
    printf("╚═╝  ╚═╝╚══════╝╚═╝  ╚═╝ ╚═════╝\n");
    ASHU_BLUE();
    printf("\nWelcome To ASHU-45/PROJECT-CX version 1.0\n\n");
    ASHU_OFF();
}
#endif
