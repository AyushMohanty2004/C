#include <stdio.h>
#include <stdlib.h>

typedef struct node {
  int row;
  int column;
  int value;
  struct node *next;
} Node;

void createSparseMatrix(Node **head, int rows, int columns) {
  int i, j, value;

  for (i = 0; i < rows; i++) {
    for (j = 0; j < columns; j++) {
      printf("Enter the element at row %d, column %d: ", i, j);
      scanf("%d", &value);

      if (value != 0) {
        Node *new_node = (Node *)malloc(sizeof(Node));
        new_node->row = i;
        new_node->column = j;
        new_node->value = value;
        new_node->next = NULL;

        if (*head == NULL) {
          *head = new_node;
        } else {
          Node *temp = *head;
          while (temp->next != NULL) {
            temp = temp->next;
          }

          temp->next = new_node;
        }
      }
    }
  }
}

void displaySparseMatrix(Node *head) {
  int i;
  int j;

  printf("\nThe sparse matrix is:\n");
  for (i = 0; i < head->row; i++) {
    printf("| ");
    for (j = 0; j < head->column; j++) {
      if (head != NULL && head->row == i && head->column == j) {
        printf("%d ", head->value);
        head = head->next;
      } else {
        printf("0 ");
      }
    }
    printf("|");
    printf("\n");
  }
}

int main() {
  Node *head = NULL;
  int rows, columns;

  printf("Enter the number of rows and columns in the sparse matrix: ");
  scanf("%d %d", &rows, &columns);

  createSparseMatrix(&head, rows, columns);
  displaySparseMatrix(head);

  return 0;
}
