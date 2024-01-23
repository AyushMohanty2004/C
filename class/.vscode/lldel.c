#include<stdio.h>
#include<stdlib.h>
struct node
{
 int data;
 struct node* next;
};

void lltraverse(struct node* ptr){

while (ptr != NULL)
{
    printf("%d the element is \n", ptr->data);
    ptr = ptr->next;
}

}

struct node* delfir(struct node* head){
struct node* ptr=head;
head=head->next;
free(ptr);
return head;
}
int main(){
    struct node* head;
    struct node* first;
    struct node* second;
    
head = (struct node*) malloc (sizeof(struct node));
first = (struct node*) malloc (sizeof(struct node));
second = (struct node*) malloc (sizeof(struct node));

head->data=79;

head->next=first;


first->data=99;

first->next=second;


second->data=29;

second->next=NULL;

printf("The list before deletion:\n");
lltraverse(head);

printf("The list after deletion:\n");
head=delfir(head);
lltraverse(head);
return 0;
}