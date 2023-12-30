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
    do
  {
    printf(" %d->", ptr->data);
    ptr = ptr->next; // Traversing the List till end

    
  } while (ptr!=head);
    
}
// this function is not working 
struct node *deletionAtBegining(struct node *head)
{
  
    struct node *ptr = head,*p=head->privious;
    head = head->next;
    head->privious =p;
    
    
    
  
   free(ptr);
    return head;
}

void deletionAtEnd(struct node *head)
{
    struct node *ptr = head->privious;
    head->privious=ptr->privious;
    ptr->privious->next = head;
    // struct node *p = ptr->privious;
    // p->next = head;
    // head ->privious = p;
    free(ptr);
}
void deleteValue(struct node *head, int data)
{
    struct node *p = head;      // point p as head
    struct node *ptr = p->next; // create a ptr

    while ((ptr->data != data) && (ptr->next != head))
    {
        ptr = ptr->next; // update ptr
        p = p->next;     // update p
    }
    if (ptr->data == data)
    {

        p->next = ptr->next; // link p->next and ptr->next ,so link will broke p->next = ptr
        ptr->privious = p;
        free(ptr);           // free memory of ptr
    }
    else 
    {
        printf("\nelement not found  in linked list\n");
    }
   
}


void deletionAtIndex(struct node *head, int index)
{
   struct node * ptr;
    struct node *p = head;
    int i = 0;
    while (i != index - 1)
    {
        p = p->next;
        i++;
    }
    ptr = p->next;
    p->next = ptr->next;
    ptr->privious = p;
    free(ptr);
}

int main()
{
    struct node *head = (struct node *)malloc(sizeof(struct node));
    struct node *secound = (struct node *)malloc(sizeof(struct node));
    struct node *third = (struct node *)malloc(sizeof(struct node));
    struct node *fourth = (struct node *)malloc(sizeof(struct node));
    struct node *fifth = (struct node *)malloc(sizeof(struct node));

    head->privious = fourth;
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
    fourth->next = head;

    printf("\n before deletion\n");
    display(head);
    printf("\n after deletion\n");
    // head = deletionAtBegining(head);
    // deletionAtEnd(head);
    // deleteValue(head,3);
    deletionAtIndex(head,0);
    // goto done:

    display(head);
}
