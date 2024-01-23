#include<stdio.h>
int main(){
int a, b;
printf("Enter values of rows and columns:\n");
scanf("%d %d", &a, &b);
int arr[a][b];
for(int i=0;i<a;i++){
    for(int j=0;j<b;j++){
        printf("Enter the element %d%d\n", i, j);
        scanf("%d%d", &arr[i][j]);
    }
}

    return 0;
}