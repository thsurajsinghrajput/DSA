#include <stdio.h>
#include <stdlib.h>

struct stack
{
    int size;
    int top;
    int *arr;
};

struct stack * createStack(){
     struct stack *sp = (struct stack *)malloc(sizeof(struct stack));
    sp->size=10;
    sp->top=-1;
    sp->arr = (int *)malloc(sp->size*sizeof(int));
    return sp;
    printf("\nStack created successfuly\n");

}

int isEmpty(struct stack *ptr){
    if (ptr->top=-1)
    {
        return 1;
    }
    else{
        return 0;
    }
    

}

int isFull(struct stack *ptr){
    if (ptr->top == ptr->size-1)
    {
        return 1;


    }
    else {
        return 0;
    }
    
}
void push(struct stack *ptr,int data){
    if (ptr->top == ptr->size-1)
    {
        printf("Overflow");
    }
    else{
        ptr->top++;
        ptr->arr[ptr->top] = data;
    }
    
}
int pop(struct stack *ptr){
    if (ptr->top == -1)
    {
        printf("Undeflow");
        return -1; //assuming that -1 will never be stored in stack
    }
    else{
        int data = ptr->arr[ptr->top];
        ptr->top--;
        return data;
    }
    
}

void peek(struct stack *ptr){
    if (ptr->top == -1)
    {
        printf("Stcak is empty");
    }
    else
    {
        printf("%d\n" ,ptr->arr[ptr->top]);
    }
    
    
}


int main(){
    struct stack *sp = createStack();
    push(sp,33);
    push(sp,1);

    printf("%d\n",pop(sp));
    peek(sp);
    printf("%d",sizeof(struct stack));
    
    




    return 0;
}