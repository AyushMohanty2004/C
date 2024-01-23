#include<stdio.h>
int main(){
char name[20];
printf("Please enter your name:");
scanf("%[^\n]s", name);
printf("I am: %s",name);
return 0;
}