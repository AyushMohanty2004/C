#include<stdio.h>
void reverse(int A[],int n){
    for(int i=0,j=n;i<j;i++,j--){
    int temp= A[i];
    A[i]=A[j];
    A[j]=temp;
    }
}
int main(){
    int n;
    puts("Enter the size of array:");
    scanf("%d",n);
int A[n];
puts("Enter elements of array:");
for(int i=0;i<n;i++){
    scanf("%d",&A[i]);
}
reverse(A,n);
printf("%d",A[n]);
}