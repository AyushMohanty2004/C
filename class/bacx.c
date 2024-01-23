#include <stdio.h>
void PrintArray(int a[],int len);
void first_fill(int arr[],int occupants, int n);


int main(){
    int r, empty=0, occu;
    printf("Enter no. of elements: ");
    scanf("%d",&r);
    int arr[r];
    printf("Enter the occupants '0' and vacancies '1' : ");
    for(int i=0;i<r;i++){
        printf("Index %d:",i+1);
        scanf("%d",&arr[i]);
    }
    printf("Occupancy overview:\n");
    for(int i=0;i<r;i++){
        if (arr[i]==0){
            empty++;
        }
    }
    printf("Initial array filling:\n");
    PrintArray(arr,r);

    printf("\n Number of new occupants ( equal to or less than %d )",empty);
    scanf("%d",&occu);
    if(occu>empty){
        printf("Not enough vacancy");
        return 0;
    } else {
        first_fill(arr,occu,r);
    }
    return 0;
}


void PrintArray(int a[],int len){
    printf("[ ");
    for(int i=0;i<len;i++){
        printf("%d ",a[i]);
    }
    printf("]\n");
}

void first_fill(int arr[],int occupants, int n){
    for(int i = 0; i<n; i++){
        if(occupants == 0){
            break;
        }
        if(arr[i] == 0){
            arr[i] = 1;
            occupants--;
        }
    }
    printf("The array after occupation:\n");
    PrintArray(arr,n);
}