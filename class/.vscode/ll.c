#include<stdio.h>
#include<stdlib.h>
struct node{
    int data;
    struct node* next;
};
void lltraversal(struct node* pointer){
    while(pointer!=NULL){
    printf("Element is %d \n", pointer->data);
    pointer = pointer->next;
}
}
int main(){
    struct node* head;
    struct node* second;
    struct node* third;

    head= (struct node*) malloc (sizeof(struct node));
    second= (struct node*) malloc (sizeof(struct node));
    third= (struct node*) malloc (sizeof(struct node));

    head->data=7;
    head->next=second;

    second->data=69;
    second->next=third;

    third->data=96;
    third->next=NULL;

    lltraversal(head);
}