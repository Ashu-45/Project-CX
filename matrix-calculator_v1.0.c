#include <stdio.h>
#include "lib/color.h"
#include "lib/ashu.h"


void sum(){
    int m1,n1,m2,n2;
    /*
    here m for row and n for column
    of our matric . :)
    */
    printf(YELLOW("\nEnter (m) Row & (n) Column of (a) Matrix: "));
    scanf("%d %d",&m1,&n1);
    /*
    that one store a matrix order
    */
    printf(YELLOW("\nEnter (m) Row & (n) Column of (b) Matrix: "));
    scanf("%d %d",&m2,&n2);
    /*
    this one store b matrix order
    */

    if(m1 == m2 && n1 == n2){ 
    /*this one for check the a and b matrix are in same ordar or not*/ 

        float a[m1][n1],b[m2][n2],c[m2][n2];
        /*this one for make 2 array for store 2 matrxi with a & b order
        */
        int i,j;
        ASHU_YELLOW();
        printf("\nEnter The Value Of (a) Matrix\n");
            for(i=0;i<m1;i++){
                for(j=0;j<n1;j++){
                printf("\n A(%d)(%d): ",i+1,j+1);
                scanf("%f",&a[i][j]);
                }
            }
        /*
        this one for store all value of a
        matrix one by one in a array
        */
        printf("\nEnter The Value Of (b) Matrix\n");
            for(i=0;i<m2;i++){
                for(j=0;j<n2;j++){
                printf("\n B(%d)(%d): ",i+1,j+1);
                scanf("%f",&b[i][j]);
                }
            }
        /*
        this one for store all value of b
        matrix one by one in b array
        */
        ASHU_GREEN();
        printf("\nThe Sum Of (a) matrix & (b) matrix Is \n");
            for(i=0;i<m1;i++){
                for(j=0;j<n2;j++){
                c[i][j] = a[i][j]+b[i][j];
                printf("\nC(%d)(%d) =  %.2f",i+1,j+1,c[i][j]);
                }
            }
        ASHU_OFF();
        /*
        this one direct print sum of a matrix and b matrix 
        sorry i dont use one more array to store sum....

        becose its version 1.0 ..

        */
    }
    
    else{
        ASHU_BOLD_RED();
        printf("\nA Matrix Can Be Added if Thay Both Are In Same Order...");
        ASHU_OFF();
        
    }
}


void sub(){
    int m1,n1,m2,n2;
    /*
    here m for row and n for column
    of our matric . :)
    */
    printf(YELLOW("\nEnter (m) Row & (n) Column of (a) Matrix: "));
    scanf("%d %d",&m1,&n1);
    /*
    that one store a matrix order
    */
    printf(YELLOW("\nEnter (m) Row & (n) Column of (b) Matrix: "));
    scanf("%d %d",&m2,&n2);
    /*
    this one store b matrix order
    */

    if(m1 == m2 && n1 == n2){ 
    /*this one for check the a and b matrix are in same ordar or not*/ 

        float a[m1][n1],b[m2][n2],c[m2][n2];
        /*this one for make 2 array for store 2 matrxi with a & b order
        */
        int i,j;
        ASHU_YELLOW();
        printf("\nEnter The Value Of (a) Matrix\n");
            for(i=0;i<m1;i++){
                for(j=0;j<n1;j++){
                printf("\n A(%d)(%d): ",i+1,j+1);
                scanf("%f",&a[i][j]);
                }
            }
        /*
        this one for store all value of a
        matrix one by one in a array
        */
        printf("\nEnter The Value Of (b) Matrix\n");
            for(i=0;i<m2;i++){
                for(j=0;j<n2;j++){
                printf("\n B(%d)(%d): ",i+1,j+1);
                scanf("%f",&b[i][j]);
                }
            }
        /*
        this one for store all value of b
        matrix one by one in b array
        */
        ASHU_GREEN();
        printf("\nThe Subtracted Of (a) matrix & (b) matrix Is \n");
            for(i=0;i<m1;i++){
                for(j=0;j<n2;j++){
                c[i][j] = a[i][j]-b[i][j];
                printf("\nC(%d)(%d) =  %.2f",i+1,j+1,c[m2][n2]);
                }
            }
        ASHU_OFF();
        /*
        this one direct print Subtracted of a matrix and b matrix 
        sorry i dont use one more array to store Subtracted....

        becose its version 1.0 ..

        */
    }
    
    else{
        ASHU_BOLD_RED();
        printf("\nA Matrix Can Be Subtracted if Thay Both Are In Same Order...");
        ASHU_OFF();
        
    }
}

int mult(){
    int m1,n1,m2,n2;
    /*
    here m for row and n for column
    of our matric . :)
    */
    printf(YELLOW("\nEnter (m) Row & (n) Column of (a) Matrix: "));
    scanf("%d %d",&m1,&n1);
    /*
    that one store a matrix order
    */
    printf(YELLOW("\nEnter (m) Row & (n) Column of (b) Matrix: "));
    scanf("%d %d",&m2,&n2);


    if (n1 == m2 ){ 
        float a[m1][m2];
        float b[n1][n2];
        float c[m1][n2];
        int i,j,k; // i,j,k for loop
    //this one store the 1st matric
    ASHU_YELLOW();
    for(i=0;i<m1;i++){
        for(j=0;j<n1;j++){
            printf("\nEnter a[%d][%d]",i+1,j+1);
            scanf("%f",&a[i][j]);
        }
    }
    // this one store the 2st matric
    for(i=0;i<m2;i++){
        for(j=0;j<n2;j++){
            printf("\nEnter b[%d][%d]",i+1,j+1);
            scanf("%f",&b[i][j]);
        }
    }
    ASHU_GREEN();
    for(i=0;i<m1;i++){ // this one loop for row of c & a matric
        for(j=0;j<n2;j++){ // this one for column of c & b matric
            for(k=0;k<m2;k++) // this one loop for a column & a row
            c[i][j] = a[i][k] * b[k][j]; // this one store axy * byx in cxy
            printf("\nc[%d][%d] = %f",i+1,j+1,c[i][j]);
        }
    }
    ASHU_OFF();
    }
    else{
        ASHU_RED();
        printf("\nMatrix multiplication requires that the number of columns in the first matrix matches the number of rows in the second matrix\n");
        ASHU_OFF();
    }

}

void ashu_matrix(){
    char XM_VAR;
    printf("\n1> Sum of two matrices");
    printf("\n2> Subtraction of two matrices");
    printf("\n3> Multiplication of two matrices");
    printf("\n\tCtrl+A");
    printf("\nEnter your choice: ");
    scanf("%c",&XM_VAR);

    if (XM_VAR == '1') {
        clrscr();
        sum();
    } else if (XM_VAR == '2') {
        clrscr();
        sub();
    } else if (XM_VAR == '3') {
        clrscr();
        mult();
    }else if(XM_VAR == 1){
        break;
    }else {
        printf("\nPlease enter a correct option.\n");
        ashu_matrix();  
    }
}
