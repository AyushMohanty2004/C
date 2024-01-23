#include<stdio.h>
int main(){
    int n;
    float sum=0;
    puts("Enter the numbers:");
    scanf("%d",&n);
    for(int i=0;i<=n;i++){
        sum=sum+i;
    }
    float avg=sum/n;
    printf("The average of %d numbers is:\n %f",n,avg);
}