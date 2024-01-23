#include<stdio.h>
void greet(int n){
    int i;
    if(n==0){
        return;
    }
        printf("%d \n",n);
        greet(n-1);
}
int main(){
    int z;
    puts("Enter a number");
    scanf("%d",&z);
    greet(z);
    
    return 0;
}