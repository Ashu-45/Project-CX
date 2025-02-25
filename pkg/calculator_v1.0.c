#include <stdio.h>
#include "lib/ashu.h"
#include "lib/color.h"

int main();
int loop();
int one();

void calc(){
    me();
    char x_calc;
    printf("Choose One Option:\n");
    printf("1> one opration\n");
    printf("2> Loop (same opraton but unlimated time)\n");
    printf("0> Back \n>> ");
    scanf("%s",&x_calc);
    switch (x_calc){
        case '1':
            one();
            break;
        case '2':
            loop();
            break;
        case '0':
            main();
            break;
        default:
            printf("\nPlease enter a correct option.\n");
            calc();
            break;
    }
}

int one(){
    char opr;
    float num1,num2,ans;
    me();
    printf("Choose One Option:\n");
    printf("1> Addition\n");
    printf("2> Subtraction\n");
    printf("3> Multiplication\n");
    printf("4> Division\n");
    printf(">> ");
    scanf("%s",&opr);
    me();
    printf("Enter 1st Number: ");
    scanf("%f",&num1);
    printf("Enter 2nd Number: ");
    scanf("%f",&num2);

    switch (opr)
    {
    case '1':
        ans = num1 + num2;
        printf("%.2f + %.2f = %.2f\n",num1,num2,ans);
        break;
    case '2':
        ans = num1 - num2;
        printf("%.2f - %.2f = %.2f\n",num1,num2,ans);
        break;
    case '3':
        ans = num1 * num2;
        printf("%.2f * %.2f = %.2f\n",num1,num2,ans);
        break;
    case '4':
        ans = num1 / num2;
        printf("%.2f / %.2f = %.2f\n",num1,num2,ans);
        break;
    
    default:
        break;
    }
    ashu_exit();
    calc();
}

int loop(){
    
}