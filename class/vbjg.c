#include<stdio.h>
int main(){
  int num1, num2, rem;
  
  //Asking for input
  printf("Enter the dividend: ");
  scanf("%d", &num1);
  printf("Enter the divisor: ");
  scanf("%d", &num2);
  
  rem = num1 % num2;
  printf("Remainder = %d", rem);
  return 0;
}