// write a c program to find the factorial of a given no. by using recursion
#include <stdio.h>
int fact(int n){
    if (n==0)
    {
        return 1;
    }
    else{
        return (n*fact(n-1));
    }
    
}
int main(){
    int x,n;
    printf("enter the number to find factorial: ");
    scanf("%d",&n);
    x = fact(n);
    printf("factorial of  %d is %d ",n,x);
    return 0;

    
}