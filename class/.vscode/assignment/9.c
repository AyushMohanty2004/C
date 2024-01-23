#include<stdio.h>
#include<stdlib.h>
struct node{
    int data;
    struct node* next;
    struct node* arb;
};
void lltraversal(struct node* pointer){
    while(pointer!=NULL){
    printf("Element is %d \n", pointer->data);
    pointer = pointer->next;
}
}

struct node* llarb(struct node* arbitrary,struct node*point){
    if(arbitrary==NULL||point->data<<point->next->data){
        arbitrary=point->next;
        return point;
    }
}
int main(){
    struct node* head;
    struct node* second;
    struct node* third;
    struct node* arb;


    head= (struct node*) malloc (sizeof(struct node));
    second= (struct node*) malloc (sizeof(struct node));
    third= (struct node*) malloc (sizeof(struct node));

    head->data=7;
    head->next=second;
    head->arb=NULL;

    second->data=69;
    second->next=third;
second->arb=NULL;

    third->data=96;
    third->next=NULL;
third->arb=NULL;

if(arb==NULL){
    printf("The arbitrary pointer points to NULL");
}
  
head= llarb(arb,head);
    lltraversal(head);
}