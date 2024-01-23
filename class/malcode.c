#include<stdio.h>
#include<stdlib.h>
int main(){
    int n;
    printf("Enter a number(Size)\n");
    scanf("%d",&n);
    int *p= (int *) malloc(n*sizeof(int));
    int *ptr=p;
    puts("Enter the numbers:\n");
    for(int i=1; i<=n; i++){
        scanf("%d",&(*p));
        p++;
    }
    puts("the numbers are:");
    for (int i = 1; i <= n; i++)
    {
        printf("%d ",*ptr);
        ptr++;
    }
     
}