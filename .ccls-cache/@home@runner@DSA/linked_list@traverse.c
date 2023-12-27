#include <stdio.h>
#include <stdlib.h>

struct node {
  int data;
  struct node *next;
};

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
  display(head);
}