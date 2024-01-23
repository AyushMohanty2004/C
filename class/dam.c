#include<stdio.h>
#include<string.h>
int main(){
    int i=0;
    char str[]="I am Batman";
    while(str[i]!='\0'){
        printf("Wha the hell are you?%s",str[i]);
        i++;
    }
}