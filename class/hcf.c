#include<stdio.h>
int min(int a,int b){
    if(a>b){
        return b;
    }
    else
    {
        return a;
    }
    
}
int gcd(int a, int b){
    int hcf;
    for(int i=1;i<=min(a,b);i++){
    if(a%i==0 && b%i==0){
        hcf=i;
    }
}
return hcf;
}
int main(){
    int a;
    int b;
    puts("Enter the numbers:");
    scanf("%d%d",&a,&b);
    int hcf= gcd(a,b);
printf("The hcf of %d and %d is %d",a,b,hcf);
}