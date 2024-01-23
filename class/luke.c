#include <stdio.h>

int main() {
  char carName[] = "May the force be with you";
  int i;
  
  for (i = 0; carName[i] != '\0' ; i++) {
    printf("%c", carName[i]);
  }

  return 0;
}