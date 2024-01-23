#include <stdio.h>
struct Student {
    char name[50];
    int rollNumber;
};

int main() {
    struct Student students[5];

    for (int i = 1; i <= 5; i++) {
        printf("Enter details for student %d:\n", i);
        printf("Name: ");
        scanf("%s", students[i].name);
        printf("Roll Number: ");
        scanf("%d", &students[i].rollNumber);
        
        printf("\n");
    }

    printf("Details of students:\n");
    for (int i = 1; i <= 5; i++) {
        printf("Student %d\n", i);
        printf("Name: %s\n", students[i].name);
        printf("Roll Number: %d\n", students[i].rollNumber);
        
        printf("\n");
    }
     int x = sizeof(struct Student);
    printf("Size of Structure : %d",x);

    return 0;
}