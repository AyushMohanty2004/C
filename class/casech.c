
#include <stdio.h>

int main() {
  char str[100];
  int i;

  printf("Enter a string: ");
  gets(str);

  for (i = 0; str[i] != '\0'; i++) {
    if (str[i] >= 65 && str[i] <= 90) {
      str[i] += 32;
    } else if (str[i] >= 97 && str[i] <= 122) {
      str[i] -= 32;
    }
  }

  printf("The string in changed case is: %s\n", str);

  return 0;
}