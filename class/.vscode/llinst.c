#include<stdio.h>
#include<stdlib.h>
struct node
{
 int data;
 struct node* prev;
 struct node* next;
};
 
 


void lltraverse(struct node* ptr){


while (ptr != NULL)
{
    printf("%d the element is \n", ptr->data);
    ptr = ptr->next;
}

}

struct node* insatbg(struct node* head,int data){
struct node* ptr = (struct node*)malloc(sizeof(struct node));
ptr->next=head;
head=ptr;
ptr->data=data;
return head;
};

struct node* insatbw(struct node* head,int data,int index){
struct node* ptr = (struct node*)malloc(sizeof(struct node));
struct node* p=head;
int i;
while(i != index-1){
    p= p ->next;
    i++;
}
ptr->data=data;
ptr->next=p->next;
p->next=ptr;
return head;
}

struct node* insatend(struct node* head,int data){
    struct node* ptr = (struct node*)malloc(sizeof(struct node));
    struct node* p=head;
    ptr->data=data;
while(p->next!=NULL){
    p=p->next;
}
p->next=ptr;
ptr->next=NULL;
return head;
};

struct node* insatafte(struct node* head,struct node* prevnode, int data){
struct node* ptr = (struct node*)malloc(sizeof(struct node));
ptr->next=prevnode->next;
prevnode->next=ptr;
ptr->data=data;
return head;
};


int main(){
    struct node* head;
    struct node* first;
    struct node* second;
    
head = (struct node*) malloc (sizeof(struct node));
first = (struct node*) malloc (sizeof(struct node));
second = (struct node*) malloc (sizeof(struct node));

head->data=79;
head ->prev=NULL;
head->next=first;


first->data=99;
first -> prev=head;
first->next=second;


second->data=29;
second -> prev=first;
second->next=NULL;

head=insatbg(head,756);
head=insatbw(head,73,2);
head=insatend(head,769);
head=insatafte(head,second,91);

lltraverse(head);

return 0;
}
