#include<stdio.h>
int main()

{
    int num;
    printf("enter a number \n");
    scanf("%d", &num);
    (num%2 == 0) ? printf("number is even") : printf("number is odd");
    }
