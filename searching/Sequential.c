#include <stdio.h>
    int arr[9] = {1, 2, 3, 4, 5, 6, 7, 8, 9};


void Sequential_search(int arr[], int n,int size)
{
    int   flag = 0;
    for (int i = 0; i < size; i++)
    {
        if (arr[i] == n)
        {
            printf("element %d found at postion %d",n,i);
            flag = 1;
            break;
        }
        
        
    }
    if (!flag)
    {
        printf("element not found");
    }
    // for (int i = 0; i < 9; i++)
    // {
    //     printf("%d",arr[i]);
    // }
    
   
    

}

int main()
{

    int n;
    printf("<---------Sequential-------->\n");
    printf("enter the number that you what to find\n");
    scanf("%d", &n);
    Sequential_search(arr,n,9);
    return 0;
}