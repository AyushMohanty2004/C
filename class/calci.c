#include<stdio.h>
int main(){
    int n1;
    int n2;
    char operation;
    puts("This is a calculator");
     printf("Input the required operation:");
    scanf("%c", &operation);
    puts("Input your values upon which calculation is supposed tobe done:");
    scanf("%d%d",&n1,&n2);
   

    switch (operation)
    {
    case '+':
        printf("The sum of %d %d is: %d",n1,n2,n1+n2);
        break;
    
    case '-':
        printf("The difference of %d %d is: %d",n1,n2,n1-n2);
        break;
        
    case '*':
        printf("The product of %d %d is: %d",n1,n2,n1*n2);
        break;
        
    case '/':
        printf("The divison of %d %d is: %d",n1,n2,n1/n2);
        break;



    default:
        break;
    }
}