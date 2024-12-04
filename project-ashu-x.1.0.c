#include <stdio.h>
#include "lib/color.h"
#include "lib/ashu.h"
#include "matrix-calculator_v1.0.c"

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
    printf("welcome to my 1st version 1.0\n");
    ASHU_OFF();
}

void main(){
    me();
    int x_ashu;
    
    ashu();
    getch();
    clrscr();
}