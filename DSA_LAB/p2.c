// write a c program to find location of any element from givin array
#include <stdio.h>
int main(){
    int arr[10];
    int i,loc,data;
    printf("enter the element of the array\n");
    for ( i = 0; i < 10; i++)
    {
        scanf("%d",&arr[i]);

    }
    printf("enter the element which is to be located: \t");
    scanf("%d",&data);
    for ( i = 0; i < 10; i++)
    {
        if(arr[i]==data){
            loc=i;
            break;
        }
    }
    printf("the element %d found at location %d",data,loc);
    return 0;
    
    
}