#include<stdio.h>
int main(){
    int a,b,sum=0;
    printf("Enter the dimensions of the array");
    scanf("%d%d",&a,&b);
    int A[a][b];
    int B[a][b];
    puts("Elements for 1st Matrix");
    for(int i=0;i<a;i++){
        for(int j=0;j<b;j++){
            printf("Enter element %d %d\n",i,j);
            scanf("%d",&A[i][j]);
        }
    }
    puts("Elements for 2nd Matrix");
    for(int i=0;i<a;i++){
        for(int j=0;j<b;j++){
            printf("Enter element %d %d\n",i,j);
            scanf("%d",&B[i][j]);
        }
    }
    puts("Sum of their Elements");
    for(int i=0;i<a;i++){
        for(int j=0;j<b;j++){
            printf("%d\n",A[i][j]+B[i][j]);
        }
}
}