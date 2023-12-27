#include <stdio.h>

// traversal
void display(int UB, int arr[])
{
    if (UB < 0)
    {
        printf("array is empty");
    }
    else
    {
        for (int i = 0; i <= UB; i++)
        {
            printf("%d\t", arr[i]);
        }
    }
}


void insertion(int arr[], int UB, int element, int size,int index)
{
    if (UB > size)
    {
        printf("OVER FLOW");
    }
    else
    {
       for (int i = UB; i >= index; i--)
       {
            arr[i+1] = arr[i];
       }
       arr[index] = element;
       
        
    }
}

int main()
{
    int arr[10] = {1, 2, 6, 78};
    int UB=3, element=14, size=10,index=2;
  printf("\nbefore inserion\n");
    display(UB,arr);

  


   
    // insertion(arr,UB,element,size,0);     //insertion at begining
    // insertion(arr,UB,element,size,UB);    // insertion at end
    insertion(arr,UB,element,size,index);    // insertion at givin position
    UB++;

  printf("\nafter inserion\n");


    display(UB,arr);
}