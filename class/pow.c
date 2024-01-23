#include<stdio.h>
int powe(int a,int b){
    if(b ==0||a == 1)
    return 1;
    if(a==0)
    return 0;
    int power=1;
    for(int i=1;i<=b;i++){
        power=power*a;
    }
    return power;
}
int main()
{
    int a;
    int b;
    printf("enter a:");
    scanf("%d", &a);
    printf("enter b:");
    scanf("%d", &b);
    int Ans = powe(a,b);
    printf("%d raised to the power %d is: %d",a,b,Ans);
}