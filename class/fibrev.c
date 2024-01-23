#include <stdio.h>

int main() {
  int n, i, a, b, c;

  printf("Enter the number of terms: ");
  scanf("%d", &n);

  a = 0;
  b = 1;

  printf("The Fibonacci sequence in reverse order is: ");
  for (i = n - 1; i >= 0; i--) {
    c = a + b;
    printf("%d ", c);
    a = b;
    b = c;
  }

  printf("\n");

  return 0;
}