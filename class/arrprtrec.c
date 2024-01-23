#include<stdio.h>
void array(int A[],int x){
    if(x==0){
        return;
    }
    else{
        return array(A,x-1);
        printf("The elements of the array are %d",A[x-1]);
    }
}
int main(){
    int n;
    int A[n];
    printf("Enter the size of array:\n");
    scanf("%d",&n);
    puts("Enter the elements of the array:");
    for(int i=1;i<=n;i++){
        scanf("%d",&A[i]);
    }
    array(A,n);
}