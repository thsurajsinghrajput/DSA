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

struct node *insertionAtBegining(struct node *head, int data)
{
    struct node *ptr = (struct node *)malloc(sizeof(struct node));
    ptr->data = data;
    ptr->next = head;
    ptr->privious = NULL;
    return ptr;
}

void insertionAtEnd(struct node *head, int data)
{
    struct node *ptr = (struct node *)malloc(sizeof(struct node));
    ptr->data = data;
    struct node *p = head;
    while (p->next != NULL)
    {
        p = p->next;
    }
    p->next = ptr;
    ptr->next = NULL;
    ptr->privious = p;

}
void insertionAfterNode(struct node *n,  int data)
{
    // if (n->next == NULL)
    // {
    //     insertionAtEnd(head,data);
    //     goto done;
    // }
    
    struct node *ptr = (struct node *)malloc(sizeof(struct node));
    ptr->data = data;
    


    ptr->next = n->next;
    ptr ->privious = n;
    n->next =ptr;
}

void insertionAtIndex(struct node *head,int index,int data){
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

    printf("\n before insertion\n");
    display(head);
    printf("\n after insertion\n");
    // head = insertionAtBegining(head,10);
    // insertionAtEnd(head,10);
    // insertionAfterNode(secound,10);
    // insertionAtIndex(head,1,10);
    // goto done:

    display(head);
}
