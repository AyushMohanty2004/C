#include<stdio.h>
int factorial(int n){
    if(n==1 || n==0)
    return 1;
    else 
    return factorial(n-1);
}
int main(){
    int m;
    printf("Enter a number:");
    scanf("%d",&m);
    int fact=factorial(m);
    printf("The required number is %d",fact);

}