#include <stdio.h>

int fibonacci(int n) {
  if (n <= 1) {
    return n;
  } else {
    return fibonacci(n - 1) + fibonacci(n - 2);
  }
}

int main() {
  int n;

  printf("Enter the number of terms: ");
  scanf("%d", &n);

  printf("The Fibonacci sequence in reverse order is: ");
  for (int i = n ; i >= 1; i--) {
    printf("%d ", fibonacci(i));
  }

  printf("\n");

  return 0;
}