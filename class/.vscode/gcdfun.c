#include<stdio.h>
int min(int x,int y){
    if(x>y){
        return x;
    }
    else
    return y;
}
int hcf(int x, int y){
    int hcd;
    for(int i=1;i<=min(x,y);i++){
        if(x%i==0 && y%i==0)
        hcd = i;
    }
    return hcd;
}
int main(){
    int x;
    int y;
    printf("Enter the numbers: ");
    scanf("%d%d",&x,&y);
    int gcd = hcf(x,y);
    printf("%d is the required number",gcd);
}