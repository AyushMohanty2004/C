#include<stdio.h>
int summation(int x){
    int sum=0;
    if(x==0){
        return 0;
    }
    else{
        sum = x+summation(x-1);
        return sum;
    }
}
int main(){
    int n;
    puts("Enter a number:");
    scanf("%d",&n);
    printf("The sum is %d",summation(n));
}