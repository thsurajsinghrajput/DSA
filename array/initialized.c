#include <stdio.h>
int main(){
  int size,i;
  printf("\nEnter the size of the array: ");
  scanf(" %d", &size);
  int arr[size];
  printf("\nenter array elements\n");
  for( i=0; i<size; i++){
    scanf("%d" , &arr[i]);
  }
  printf("\nyour array is: ");
  for( i=0; i<size; i++){
    printf("%d\t" , arr[i]);
  }
  return 0;
}
