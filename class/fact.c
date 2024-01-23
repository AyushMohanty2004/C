#include<stdio.h>
int fact(int n){
if(n==0||n==1){
    return 1;
}
else
{
    int res = n*fact(n-1);
    return res; 
}

}
int main(){
    int a;
puts("Enter the number whose factorial is to be found:");
scanf("%d",&a);
int factorial = fact(a);
printf("%d",factorial);
return 0;
}