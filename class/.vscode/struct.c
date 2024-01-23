#include<stdio.h>
#include<string.h>
int main(){
struct book{
float noofpages;
float price;
char name[69];
}a;
a.noofpages=347;
a.price=420.69;
strcpy(a.name,"Harry Potter");

printf("page of book is\n %d \n",a.name);
printf("price of book is\n %d \n",a.price);
printf("name of book is\n %s \n",a.name);
}

