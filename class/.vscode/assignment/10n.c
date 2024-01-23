#include <stdio.h>
#include <stdlib.h>

struct node {
  int data;
  struct node *next;
};

int commnode(struct node *a, struct node *b) {
  int con = 0;
  for (a && b; a = a->next; b = b->next) {
    if (a->data == b->data) {
      con++;
    }
  }
  return con;
}

int my_max(int a, int b) {
  return (a > b) ? a : b;
}

int maxpal(struct node *head) {
  int res = 1;
  struct node *prev = NULL, *curr = head;

  while (curr) {
    struct node *next = curr->next;
    curr->next = prev;
    res = my_max(res, 2 * commnode(prev, next) + 1);
    res = my_max(res, 2 * commnode(curr, next));
    prev = curr;
    curr = next;
  }

  return res;
}

struct node *newNode(int key) {
  struct node *temp = (struct node *)malloc(sizeof(struct node));
  temp->data = key;
  temp->next = NULL;
  return temp;
}

int main() {
  struct node *head = newNode(2);
  head->next = newNode(4);
  head->next->next = newNode(3);
  head->next->next->next = newNode(4);
  head->next->next->next->next = newNode(2);
  head->next->next->next->next->next = newNode(15);

  printf("The maximum palindrome length is %d\n", maxpal(head));

  return 0;
}
