#include <stdio.h>
#include <stdlib.h>

struct node
{
    int data;
    struct node *next;
};

// insertion at begining

struct node *insertionAtBegining(struct node *head, int data)
{
    // creating a node
    struct node *ptr = (struct node *)malloc(sizeof(struct node));
    ptr->data = data;

    // traversion p to last node
    struct node *p = head->next;
    while (p->next != head)
    {
        p = p->next;
    }
    p->next = ptr;
    ptr->next = head;

    return ptr;
}

// insertion at end

void insertionAtEnd(struct node *head, int data)
{
    struct node *ptr = (struct node *)malloc(sizeof(struct node));
    ptr->data = data;
    struct node *p = head->next;
    while (p->next != head)
    {
        p = p->next;
    }
    p->next = ptr;
    ptr->next = head;

    
}
// insertion after a node
void insertionAfterNode(struct node *head, struct node *previousNode, int data)
{
    struct node *ptr = (struct node *)malloc(sizeof(struct node));
    ptr->next = previousNode->next;
    previousNode->next = ptr;
    ptr->data = data;
}

// insertion at givin index

void insertionAtIndex(struct node *head, int index, int data)
{
    struct node *ptr = (struct node *)malloc(sizeof(struct node));
    struct node *p = head;
    int i = 0;
    while (i != index - 1)
    {
        p = p->next;
        i++;
    }
    ptr->next = p->next;
    ptr->data = data;
    p->next = ptr;
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
s
    // diplay the liked list;
    printf("\n before insertion\n");
    display(head);
    // head = insertionAtBegining(head, 5);
    // insertionAtEnd(head,5);
    // insertionAfterNode(head,secound,5);
      insertionAtIndex(head,2,5);

    printf("\n after insertion\n");
    display(head);
}