#include<stdio.h>
int main()
{
    int a,b,c;
    printf("enter first number:\n");
    scanf("%d", &a);
    printf("enter second number: \n");
    scanf("%d", &b);
    c=a%b;
    printf("Required modulus is: %d", c);
}