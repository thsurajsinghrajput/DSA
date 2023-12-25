#include <stdio.h>

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

void deletion(int arr[], int UB, int size, int index)
{
    if (UB < 0)
    {
        printf("Under flow");
    }
    else
    {
        for (int i = index; i <= UB; i++)
        {
            arr[i] = arr[i + 1];
        }
    }
}

int main()
{
    int arr[10] = {1, 2, 3, 4, 5};
    int UB = 4, size = 11, index = 2;
    printf("\nbefore deletion\n");

    display(UB, arr);
    // deletion(arr, UB, size, index); // deletion at givin index;
    // deletion(arr, UB, size, 0);     // deletion from Beginning ;
    // deletion(arr, UB, size, UB);    // deletion from end ;

    UB--;
    printf("\nafter deletion\n");
    display(UB, arr);
}