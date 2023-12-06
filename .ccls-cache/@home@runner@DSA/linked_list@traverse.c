/**************************

                            Online C Compiler.
                Code, Compile, Run and Debug C program online.
Write your code in this editor and press "Run" button to compile and execute it.

***************************/

#include <stdio.h>
#include <stdlib.h>
struct node {
  int data;
  struct node *Next;
};
void linkedtraversal(struct node *ptr) {
  ptr = ptr->Next;

  while (ptr != NULL) {
    printf("element=%d,\n", ptr->data);
    ptr = ptr->Next;
  }
}

int main() {
  struct node *head;
  struct node *second;
  struct node *third;
  struct node *fourth;
  head = (struct node *)malloc(sizeof(struct node));
  second = (struct node *)malloc(sizeof(struct node));
  third = (struct node *)malloc(sizeof(struct node));
  fourth = (struct node *)malloc(sizeof(struct node));
  head->data = 7;
  head->Next = second;
  second->data = 11;
  second->Next = third;
  third->data = 14;
  third->Next = fourth;
  fourth->data = 20;
  fourth->Next = NULL;
  linkedtraversal(head);
  return 0;
}