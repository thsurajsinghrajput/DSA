#include <stdio.h>
void SingleDimantionArray(void){
   int size,i;
  printf("\nEnter the size of 1D the array: ");
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
}
void MultiDimantionArray(void){
  int UBC,UBR;
  printf("enter no of Rows and Coulumns in your array\t");
  scanf("%d %d",&UBR,&UBC);
  int arr[UBR][UBC];
  printf("\n Enter Elements of array\n");
  for (int i=0; i< UBR;i++){
    for (int  j = 0; j < UBC; j++)
    {
      scanf("%d",&arr[i][j]);
    }
    
  }
  printf("\nyour array is as follow\n");
  for (int i=0; i< UBR;i++){
    for (int  j = 0; j < UBC; j++)
    {
      printf("%d\t",arr[i][j]);
    }
    printf("\n");
    
  }
  
}


int main(){
  int ch,ch2;
  printf(" Enter 1 for 1D array\n or 2  for 2D array \n");
  scanf("%d",&ch);
  if (ch == 1){
    SingleDimantionArray();
  }
  else{
   MultiDimantionArray();
  }
  
  printf("\n Enter 1 for run again\n or 0 for exit ");
  scanf("%d",&ch2);
  if (ch2 == 1){
    main();
  }
  else  {
     goto exit;
  }
  exit: 
  
  return 0;
}
