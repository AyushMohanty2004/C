#include<stdio.h>
    struct student
    {
        int rollno;
        char name[10];
    };
    int main{
        struct student *s
    printf("Enter your Roll number:");
    scanf("%d",&*s.rollno);
    printf("Enter Your name:");
    scanf("%s",&*s.name);
    puts("Required Information");
    printf("Roll number is %d\n",*s.rollno);
    printf("Name is %s \n",*s.name);
    return 0;
}