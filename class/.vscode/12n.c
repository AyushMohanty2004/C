#include<stdio.h>
int onen(int n){
    if(n<=1)
    return 1;
    printf("%d",n);
    return onen(n-1);
}
int main(){
    int x;
    printf("enter a number");
    scanf("%d",&x);
    onen(x);
    return;
}