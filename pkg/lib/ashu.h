#ifndef ASHU_H
#define ASHU_H

#include <stdio.h>
#include <stdlib.h>

int getch(){getchar(); getchar();}

int get_matrix(int arrayn, int arraym, float ARRAY[arrayn][arraym]){
    int i,j;
    printf("Enter the elements of the matrix: \n");
    for(i=0;i<arrayn;i++){
        for(j=0;j<arraym;j++){
            printf("\n A(%d)(%d): ",i+1,j+1);
            scanf("%f",&ARRAY[i][j]);
        }
    }
    return 0;
}

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
    /*
    THIS ALL ASCII CODE I GENERATE FROM HERE 
    https://instafonts.io/font-changer
    */
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
