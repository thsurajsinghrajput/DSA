#include <stdio.h>
#include <stdlib.h>

struct node
{
    int data;
    struct node *next;
    struct node *privious;
};

void display(struct node *head)
{
    struct node *ptr = head;
    while (ptr != NULL)
    {
        if (ptr->next == NULL)
        {
            printf(" %d->NULL", ptr->data);
        }
        else
        {
            printf(" %d->", ptr->data);
        }
        ptr = ptr->next; // Traversing the List till end
    }
}

struct node *deletionAtBegining(struct node *head)
{
    struct node *ptr =head;
    
    head = head->next;
    head->privious = NULL;
    free(ptr);
    return head;
}

void deletionAtEnd(struct node *head)
{
    struct node *ptr = head->next;
    struct node *p = head;
    while (ptr->next != NULL)
    {
        // p = p->next;
        ptr = ptr->next;
    }
    // p->next = NULL;
    ptr->privious->next = NULL;
    free(ptr);

}
void deletionByValue(struct node *head,  int data)
{
     
    struct node *ptr =head;
    while ((ptr->data != data) && (ptr->next != NULL))
    {
       ptr = ptr->next;
    }
    if (ptr->data == data)
    {

          ptr->privious->next = ptr->next; 
        //   ptr->next->privious = ptr->privious;

        free(ptr);           // free memory of ptr
    }
    else if (ptr->next == NULL)
    {
        printf("\nelement not found  in linked list\n");
    }
    else{
        printf("\n some problem occured\n");
    }
    
    
    
    


   
}

void deletionAtIndex(struct node *head,int index,int data){
    struct node *ptr = (struct node *)malloc(sizeof(struct node));
    struct node *p = head;
    ptr->data = data;
    int i=0;
    while (i!=index-1)
    {
        p=p->next;
        i++;
        
    }
    ptr->next = p->next;
    ptr->privious = p;
    p->next = ptr;
    
}

int main()
{
    struct node *head = (struct node *)malloc(sizeof(struct node));
    struct node *secound = (struct node *)malloc(sizeof(struct node));
    struct node *third = (struct node *)malloc(sizeof(struct node));
    struct node *fourth = (struct node *)malloc(sizeof(struct node));
    struct node *fifth = (struct node *)malloc(sizeof(struct node));

    head->privious = NULL;
    head->data = 1;
    head->next = secound;

    secound->privious = head;
    secound->data = 2;
    secound->next = third;

    third->privious = secound;
    third->data = 3;
    third->next = fourth;

    fourth->privious = third;
    fourth->data = 4;
    fourth->next = NULL;

    printf("\n before deletion\n");
    display(head);
    printf("\n after deletion\n");
    // head = deletionAtBegining(head);
    // deletionAtEnd(head);
    deletionByValue(head,2);
    // deletionAtIndex(head,1,10);
    // goto done:

    display(head);
   
 
}
