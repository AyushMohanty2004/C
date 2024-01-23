#include<stdio.h>
#include<string.h>
int main(){
    char str[49];
    puts("Enter your string");
    gets(str);
     int size=0;
    int k=0;
    while(str[k]!='\0'){
        size++;
        k++;
    }
    int i;
    int j;
    for(i=0,j=size-1;i<=j;i++,j--){
        char temp = str[i];
        str[i]=str[j];
        str[j]=temp;
    }
    puts("The reverse of your string is:");
    puts(str);
}