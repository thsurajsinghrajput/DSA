// #include<stdio.h>

// int main(){
//   int a=10;
//   int *ptr = &a;
//   int **ptr2;
//   ptr2 = & ptr;
//   **ptr2 = 50;
//   printf("%d",a);
//   return 0;




//     int a = 10;
//     int *p;
//     int **q;

//     p= &a;
//     q=&p;
//     printf("%p %p",p,&a);
//     printf("\t");
//     printf("%d",*p);
//   printf("\t");

//     printf("%p",*q);
//     return 0;
// }




// #include<stdio.h>

// void test(int n){
   
// }

// int main(){
//     // int n = 20;
//     // test(n);
//     // printf("%d",n);
//     int UB = 30;
//     for (int i = UB-10; i < 25; i++)

//     {
//         printf("%d\t",UB--);
//     }
//     printf("\n%d",UB);
    
//     return 0;


// }


#include <stdio.h>
void test(int n, int arr[]){
    n = n+10;
  arr[0] = 12;
    // printf("%d",n);
}
int main(){
    int n = 20;
    int arr[2] = {1,2,3};
    test(n,arr);
    printf("%d",arr[0]);
}