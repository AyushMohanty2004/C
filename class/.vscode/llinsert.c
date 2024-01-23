#include <stdio.h>
#include <stdlib.h>

struct node
{
    int data;
    struct node *next;
};
struct node* inserth(int data, struct node *head)
{
    struct node* temp = (struct node*) malloc(sizeof(struct node));
    temp->data=data;
    temp->next=head;
    return temp;
}
void traversal(struct node *ptr)
{
    while(ptr!=NULL)
    {
        printf("%d ",ptr->data);
        ptr=ptr->next;
    }
}

int main()
{
    struct node *head;
    struct node *one;
    struct node *two;
    struct node *three;

    head = (struct node *)malloc(sizeof(struct node));
    one = (struct node *)malloc(sizeof(struct node));
    two = (struct node *)malloc(sizeof(struct node));
    three = (struct node *)malloc(sizeof(struct node));

    
    head=one;
    one->data=10;
    two->data=11;
    three->data=12;
    

    one->next=two;
    two->next=three;
    three->next=NULL;
    int data=47;
    traversal(head);
    head=inserth(data,head);
    printf("\nAfter insertion :\n");
    traversal(head);

 return 0;
}