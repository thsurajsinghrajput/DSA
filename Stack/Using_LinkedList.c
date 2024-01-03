#include <stdio.h>
#include <stdlib.h>

struct node
{
    int data;
    struct node *next;
};
  struct node *top = NULL; // using top as global so we can access modify any where in our code // and we will node repeat same name for our local variable name
  // we used tp i as local variable insted of top becouse so that we dont confuse in global top and local top
  // there is another method that we can make TOP as global and top as local becouse c is case sensitive language  but that will be confusing
  //so top = for gloabl top and tp= for local top


struct node * AVAIL(){
    struct node *n = malloc(sizeof(struct node));
    return n;
}

int isEmpty(struct node *tp){
    if (tp == NULL)
    {
        return 1;
    }
    else{
        return 0;
    }
    
}


int isFull(struct node *tp){
    if (AVAIL()==NULL)
    {
        return 1;
    }
    else{
        return 0;
    }
    
}

struct node *push(struct node *tp,int data){
    struct node *n = AVAIL();
    if (n==NULL)
    {
        printf("overflow");
    }
    else{
        n->data = data;
        n->next = tp;
        tp=n;
        return tp;
    }
    


}
int pop(struct node *tp){
    if (isEmpty(tp))
    {
       printf("under flow");
    }
    else{
        struct node *n=tp;
        top=tp->next;
        int x = n->data;
        free(n);

        return x; 

    }
    
}

void peek(struct node *tp){
    if (isEmpty(tp))
    {
        printf("stack is empty");
    }
    else{
        printf("%d",tp->data);
    }
    
}

void stackTop(struct node *tp){
    if (isEmpty(tp))
    {
        printf("Underflow");
    }
    else{
        printf("%d\n",tp->data);
    }
    
}

void stackBottom(struct node *tp){
    
    while (tp->next != NULL)
    {
        tp = tp->next;
    }
    printf("%d\n",tp->data);
    
}
int main(){
    // printf("%d",isEmpty(top));

    // printf("%d",isFull(top));
    top = push(top,2);
    top = push(top,13);
    top = push(top,14);
    top = push(top,10);
    top = push(top,1);
    // printf("\n%d\n",pop(top));
    // printf("\n%d\n",pop(top));
    // printf("\n%d\n",pop(top));
    // printf("\n%d\n",pop(top));
   stackTop(top);
   stackBottom(top);
   peek(top);



}



