#include<stdio.h>
void greet(int n){
    int i;
    for(i=1;i<=n;i++){
        puts("hello There");
    }
}
int main(){
    int z;
    puts("Enter a number");
    scanf("%d",&z);
    greet(z);
    
    return 0;
}