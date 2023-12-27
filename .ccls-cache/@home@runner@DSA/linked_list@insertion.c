// Deleting the first node            -> Time complexity:  O(1)
// Deleting a node in between   -> Time complexity:  O(n)
// Deleting the last node            -> Time complexity:  O(n)
// Deleting the element with a given value from the linked list     -> Time complexity:  O(n)

#include <stdio.h>
#include <stdlib.h>

struct node {
  int data;
  struct node *next;
};

struct node * insertionAtBeginig(struct node *head){
    struct node *a;

    a= (struct node *)malloc(sizeof(struct node));
    a->next = head;
    a->data = 10;
    return a;

}
// Case 3
struct Node * insertAtEnd(struct Node *head, int data){
    struct Node * ptr = (struct Node *) malloc(sizeof(struct Node));
    ptr->data = data;
    struct Node * p = head;

    while(p->next!=NULL){
        p = p->next;
    }
    p->next = ptr;
    ptr->next = NULL;
    return head;
}



void display(struct node *head) {
  struct node *ptr = head;
  while (ptr != NULL) {
    if (ptr->next == NULL) {
      printf(" %d->NULL", ptr->data);
    } else {
      printf(" %d->", ptr->data);
    }
    ptr = ptr->next; // Traversing the List till end
  }
}




int main() {
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
printf ("\nbefore insertion\n");
  display(head);
  printf("\nafter insertion\n");
//   head =  insertionAtBeginig(head);
    insertAtEnd(head,10);
    display(head);
}