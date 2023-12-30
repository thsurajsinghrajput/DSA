#include <stdio.h>
#include <stdlib.h>

struct node
{
    int data;
    struct node *next; // self referencing
};

// case:1-> deletion at begining

struct node *deletionAtBegining(struct node *head)
{
    struct node *ptr = head,*p=head->next;
    while (p->next != head)
    {
        p = p->next;
    }
    p->next = head ->next;
    free(ptr);
    return p->next;
    

}

// Case:2-> deletion at givin index

void deletionAtIndex(struct node *head, int index)
{
    struct node *p = head; // point p as head
    struct node *ptr;      // create a ptr
    int i = 0;
    while (i != index - 1)
    {
        p = p->next; // update p untill p = index -1
        i++;
    }
    ptr = p->next;       // point the index node(that you whated to delete to ptr)
    p->next = ptr->next; // link p->next and ptr->next ,so link will broke p->next = ptr
    free(ptr);           // free memory of ptr
}

// Case3:-> deleting last node
void deletionAtEnd(struct node *head)
{
   struct node *ptr = head->next;
   struct node *q=head;
   while (ptr->next != head)
   {
    ptr = ptr->next;
    q=q->next;
   }
    q->next = head;
    free(ptr);
   

}

// Case:4-> deletion with given value.

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
        free(ptr);           // free memory of ptr
    }
    else 
    {
        printf("\nelement not found  in linked list\n");
    }
   
}

void display(struct node *head)
{
    struct node *ptr = head;
    do
    {
        printf(" %d->", ptr->data);
        ptr = ptr->next; // Traversing the List till end

    } while (ptr != head);

    //   while (ptr != NULL) {
    //     if (ptr->next == NULL) {
    //       printf(" %d->NULL", ptr->data);
    //     } else {
    //       printf(" %d->", ptr->data);
    //     }
    //     ptr = ptr->next; // Traversing the List till end
    //   }
}

int main()
{
    // creating node;
    struct node *head;
    struct node *secound;
    struct node *third;
    // initializing memory to node from heap;
    head = (struct node *)malloc(sizeof(struct node));
    secound = (struct node *)malloc(sizeof(struct node));
    third = (struct node *)malloc(sizeof(struct node));
    // assigining values to node;
    head->data = 1;
    head->next = secound;

    secound->data = 2;
    secound->next = third;

    third->data = 4;
    third->next = head;

    // diplay the liked list;
    printf("\n before deletion\n");
    display(head);
    // head = deletionAtBegining(head);
    // deletionAtEnd(head);
    deleteValue(head,4);
    //   deletionAtIndex(head,1);

    printf("\n after deletion\n");
    display(head);
    
}