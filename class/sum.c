#include<stdio.h>
int sum(int n){
    if(n ==0||n == 1)
    return 1;
    int suma=n+sum(n-1);
    return suma;
}
int main()
{
    int x;
    printf("enter a number:");
    scanf("%d", &x);
    int Ans = sum(x);
    printf("%d",Ans);
}