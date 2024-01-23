#include<stdio.h>
void swap(int *a, int *b){
    int temp = *a;
    *a = *b;
    *b = temp;
    return;
}
int main(int x,int y){
    printf("Enter 2 numbers:");
    scanf("%d%d",&x,&y);
    swap(&x,&y);
    printf("%d%d",x,y);
    return 0;
}