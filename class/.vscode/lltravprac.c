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

lltraverse(head);

return 0;
}
