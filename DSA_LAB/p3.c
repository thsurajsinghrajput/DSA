// write a c program to add to matrices of size 4*4
#include <stdio.h>
int main(){
    int A[4][4],B[4][4],C[4][4];
    int i,j;
    printf("enter the element of matrix A:\n");
    for ( i = 0; i < 4; i++)
    {
       for ( j = 0; j < 4; j++)
       {
         scanf("%d",&A[i][j]);
       }
       
    }
    printf("\nenter the element of matrix B:\n");
    for ( i = 0; i < 4; i++)
    {
       for ( j = 0; j < 4; j++)
       {
         scanf("%d",&B[i][j]);
       }
       
    }
    for ( i = 0; i < 4; i++)
    {
       for ( j = 0; j < 4; j++)
       {
         C[i][j] = A[i][j] + B[i][j];
       }
       
    }
    printf("Addition of Matrix A and B is given below\n");
    for ( i = 0; i < 4; i++)
    {
       for ( j = 0; j < 4; j++)
       {
         printf("%d\t",C[i][j]);
       }
       printf("\n");
    }
    return 0;
    
}