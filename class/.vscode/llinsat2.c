#include<stdio.h>
#include<stdlib.h>
struct node{
    int data;
    struct node* next;
};

void linlistrav(struct node*ptr){
    while (ptr!=NULL)
    {
        printf("The element is : %d\n",ptr->data);
    ptr=ptr->next;
    }
}

struct node* insatbg(struct node*head,int data){
    struct node* ptr= (struct node*)malloc(sizeof(struct node));
    ptr->next=head;
    head=ptr;
    ptr->data=data;
    return head;
}

struct node* insatbw(struct node*head,int data,int index){
    struct node* ptr= (struct node*)malloc(sizeof(struct node));
    struct node*p=head;
    int i;
    while(i!=index-1){
        p=p->next;
        i++;
    }
    ptr->next=p->next;
    p->next=ptr;
    ptr->data=data;
}

int main(){
    struct node* head=(struct node*)malloc(sizeof(struct node));
struct node* first=(struct node*)malloc(sizeof(struct node));
struct node* second=(struct node*)malloc(sizeof(struct node));
struct node* third=(struct node*)malloc(sizeof(struct node));

head->data=420;
head->next=first;

first->data=20;
first->next=second;

second->data=40;
second->next=third;

third->data=42;
third->next=NULL;

printf("the elements before insertion :\n");
linlistrav(head);

printf("the elements after insertion :\n");
head=insatbg(head,79);
head=insatbw(head,28,2);
linlistrav(head);

return 0;
}