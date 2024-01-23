#include<stdio.h>
#include<stdlib.h>
int main(){
    int *ptr=(int*) calloc(25,sizeof(int));
    printf("%d",*ptr);
}