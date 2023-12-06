// write a c program to find greatest common divisor of a,b by using recursion.
#include <stdio.h>
int gcd(int a, int b){
    int rem = a%b;
    if (rem == 0){
        return b;
        
    }
    else{
        return gcd(b,rem);
    }
}

int main(){
    int a,b;
    printf("enter the value of A and B:\t");
    scanf("%d %d",&a,&b);
    printf("%d",gcd(a,b));
    return 0;
}