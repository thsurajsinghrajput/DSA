#include <stdio.h>
int main(){
  int size;
  printf("\nEnter the size of the array: ");
  scanf(" %d", &size);
  int arr[size];
  printf("\nenter array elements\n");
  for(int i=0; i<size; i++){
    scanf("%d" , &arr[i]);
  }
  printf("\nyour array is: ");
  for(int i=0; i<size; i++){
    printf("%d\t" , arr[i]);
  }
  return 0;
}