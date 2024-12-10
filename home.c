#include <stdio.h>
#include "pkg/lib/color.h"
#include "pkg/lib/ashu.h"
#include "pkg/matrix-calculator_v1.0.c"

int main(){
    me();
    char x_ashu;
    printf("❏ 1 > Fro Normale Calculater\n");
    printf("❏ 2 > For Matrix Calculater\n");
    printf("❏ >> ");
    scanf("%s",&x_ashu);

    switch (x_ashu){
        case '1':
            main();
            break;
        case '2':
            ashu_matrix();
            break;
        default:
        printf("\nPlease enter a correct option.\n");
        main();
        break;
    }
    
return 0;
}