#include<stdio.h>
void swap(int *x,int *y){
    int temp;
    temp=*x;
    *x = *y;
    *y = temp;
printf("Value of a=%d\n",*x);
printf("Value of b=%d\n",*y);
}
int main(){
    int a;
    int b;
printf("Enter the numbers:");
scanf("%d%d",&a,&b);
printf("numbers before swap:\na=%d\nb=%d\n",a,b);
swap(&a,&b);
}