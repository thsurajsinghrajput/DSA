// write a c program to multiply 2 matrices of 4*4
#include <stdio.h>
int main(){
   int A[4][4],B[4][4],C[4][4];
    int i,j,k;
     printf("enter the element of matrix A:\n");
    for ( i = 0; i < 4; i++)
    {
       for ( j = 0; j < 4; j++)
       {
         scanf("%d",&A[i][j]);
       }
       
    }
    printf("\n enter the element of matrix B:\n");
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
            C[i][j] =0;
           for ( k = 0; k < 4; k++)
           {
                C[i][j] = C[i][j]+A[i][j]*B[i][j];
           }
        }
        
       
       
    }
    printf("Multiplication of Matrix A and B is given below\n");
    for ( i = 0; i < 4; i++)
    {
       for ( j = 0; j < 4; j++)
       {
         printf("%d\t",C[i][j]);
       }
       printf("\n");
    }
}