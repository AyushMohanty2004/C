#include<stdio.h>
int main()
{
    char a;
    puts("enter a character");
    scanf("%c",&a);
    if((a>='a'&& a<='z')||(a>='A'&& a<='Z')){
        printf("You entered an alphabet");
    }
        else if (a>='1'&& a<='9')
        {
            puts("You entered a number");
        }
        else{
            puts("You entered a special character");
        }
    }
