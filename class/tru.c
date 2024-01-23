#include <stdio.h>

int main() {
  char carName[] = "Volvo";
  int i;
  
  for (i = 5; i >= 0; i--) {
    printf("%c\n", carName[i]);
  }

  return 0;
}