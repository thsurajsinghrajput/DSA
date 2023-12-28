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
    struct node *ptr;  // creation a ptr
    ptr = head;        // pointing ptr same as head
    head = head->next; // updating head to node 2
    free(ptr);         // free memory of ptr(becouse ptr pointing at node 1 , node 1 will be deleted)
    return head;       // retun head(updated)
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
    struct node *p = head;      // point p to head
    struct node *ptr = p->next; // point ptr to next node of p
    while (ptr->next != NULL)
    {
        p = p->next;     // update p
        ptr = ptr->next; // update ptr
    }
    // now after complition of loop ptr will point to node that we are going to delete , and p will point node before the ptr

    p->next = NULL; // set p -> next to null (Because now it is the last node )
    free(ptr);      // free memory of ptr
}

// Case:4-> deletion with given value

void deleteValue(struct node *head, int data)
{
    struct node *p = head;      // point p as head
    struct node *ptr = p->next; // create a ptr

    while ((ptr->data != data) && (ptr->next != NULL))
    {
        ptr = ptr->next; // update ptr
        p = p->next;     // update p
    }
    if (ptr->data == data)
    {

        p->next = ptr->next; // link p->next and ptr->next ,so link will broke p->next = ptr
        free(ptr);           // free memory of ptr
    }
    else if (ptr->data == NULL)
    {
        printf("\nelement not found  in linked list\n");
    }
    else{
        printf("\n some problem occured\n");
    }
}

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
    third->next = NULL;

    // diplay the liked list;
    printf("\n before deletion\n");
    display(head);
    // head = deletionAtBegining(head);
    // deletionAtEnd(head);
    // deleteValue(head,2);
    //   deletionAtIndex(head,2);

    printf("\n after deletion\n");
    display(head);
}