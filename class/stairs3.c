//Wap to find the number of ways to climb a set of stairs where no more than 3 steps can be taken once// 

#include<stdio.h>
int fib(int x){
    if(x==1||x==2){
        return x;
    }
    int Ans= fib(x-1)+fib(x-2)+fib(x-3);
    return Ans;
}
int main(){
    int n;
    puts("Enter number of stairs:");
    scanf("%d",&n);
    printf("The number of ways to climb the stairs are:%d",fib(n));
}