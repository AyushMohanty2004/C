#include<stdio.h>
int sum(int a);
int main(){
    int k;
    puts("Enter number until which sum is to be found:");
    scanf("%d",&k);
    int result = sum(k);
    printf("The sum is:%d", result);
}
int sum(int a){
    if (a>0){
        // printf("%d ", a);
        return a+sum(a-1);
    }
    else {
    return 0;
}
}