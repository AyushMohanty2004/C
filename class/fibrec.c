#include<stdio.h>
int fib(int x){
    if(x==1||x==2){
        return 1;
    }
    int Ans= fib(x-1)+fib(x-2);
    return Ans;
}
int main(){
    int n;
    puts("Enter a number");
    scanf("%d",&n);
    printf("%d",fib(n));
}