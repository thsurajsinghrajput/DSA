
// write a c program to enter a new data element to array //not completed
#include <stdio.h>
int main(){
    int arr[10];
    int i,n,x,pos;
    printf("enter the no of elements in array\n");
    scanf("%d",&n);
    printf("enter the array elements\n ");
    for ( i = 0; i < n; i++)
    {
        scanf("%d",&arr[i]);


    }
    printf("enter the new element to be inserted\n");
    scanf("%d",&x);
    printf("enter the position where element to be inserted: \t");
    scanf("%d",&pos);
    for ( i=n-1; i>=pos,i--;){
          arr[i+1] = arr[i];
    }
    arr[pos]=x;
    printf("the array after insertion is: ");
    for(i=0;i<n+1;i++){
        printf("%d\t",arr[i]);

    }

    return 0;




}