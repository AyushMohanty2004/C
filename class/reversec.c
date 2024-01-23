#include<stdio.h>
int main(){
    int c=0;
    char str[]="ABCD XYZ";
    for(int i=0; str[i]!='\0';i++ ){
        c++;
    }
    for(int i=c--; str[i]!=' ';i){
        printf("%c",str[i]);
    }
     for(int i=0; str[i]!=' ';i++ ){
        printf("%c",str[i]);
    }
printf("%s",str);
}