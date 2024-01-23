#include<stdio.h>
int main(){
    int a,b,sum=0;
    printf("Enter the dimensions of the array");
    scanf("%d%d",&a,&b);
    int A[a][b];
    for(int i=0;i<a;i++){
        for(int j=0;j<b;j++){
            printf("Enter element %d %d",i,j);
            scanf("%d",&A[i][j]);
        }
    }
    printf("The matrix is:\n");
    for(int i=0;i<a;i++){
        for(int j=0;j<b;j++){
            printf("%d",A[i][j]);
            sum += A[i][j];
        }
        printf("\n");
    }
    printf("sum of all elements is %d",sum);
}