#include <stdio.h>
#include <stdlib.h>

struct queue
{
    int r;
    int f;
    int size;
    int* arr;
};
struct queue *q;

int isFull(struct queue *q){
	if(q->r == q->size){
		return 1;
	}
	else{
		return 0;
	}
}
int isEmpty(struct queue *q){
	if(q->f == q->r){
		return 1;
	}
	else{
		return 0;
	}
}
void traversal(struct queue *q){
	int i;
	if(isEmpty(q)){
		printf("UnderFlow");
	
	}
	else{
		for ( i = q->f; i<=q->r;i++){
		printf("%d\t",q->arr[i]);
	}
		
	}
	
	
}

void enqueue(struct queue *q,int data){
	if(isFull(q)){
		printf("OverFlow");
		
	}
	else{
		q->r++;
		q->arr[q->r] = data;
	}
}

void dequeue(struct queue *q){
	if(isEmpty(q)){
		printf("UnderFlow");
	}
	else{
		q->f++;
	}
}




int main(){
	int ch = 0;
   q->size = 100;
   q->f = q->r =-1;
   q->arr = (int *)malloc(q->size * sizeof(int));
   printf("enter\n 1 for enqueue\n 2 for dequeue\n 3 for traversal");
   if (ch == 1){
   	int n;
   	printf("\enter the element that you want to enqueue\n");
   	scanf("%d",&n);
   	enqueue(q,n);
   	
   }
   else if(ch == 2){
   	
   	dequeue(q);
   }
   else if(ch ==3){
   	traversal(q);
   }
   else{
   	printf("plzzz enter corrrect input");
   }
   
}

