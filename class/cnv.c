#include<stdio.h>
int a(int i);
int main(){
    int number;
puts("The number whose factorial is to be found:");
scanf("%d",&number); 
printf("The factorial of %d is: %d",number,a(number));
}
int a(int i){
    if(i>=1){
        return i*a(i-1);
    }
    else{
        return 1;
    }
}