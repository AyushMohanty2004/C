#include<stdio.h>
int powe(int a,int b){
if(b==0)
return 1;
int Res=a*powe(a,b-1);
return Res;
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