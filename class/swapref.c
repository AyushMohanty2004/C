#include<stdio.h>
void swap(int *x, int *y){
    int temp;
    temp = *x;
    *x=*y;
    *y = temp;
}
int main(){
    int a;
    int b;
    puts("Enter the numbers to be swapped:");
    scanf("%d%d",&a,&b);
    swap(&a,&b);
    puts("The swapped values are:");
    printf("%d\n%d",a,b);
}