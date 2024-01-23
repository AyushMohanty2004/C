#include <stdio.h>
#include <stdlib.h>

struct node
{
    int data;
    struct node *prev;
    struct node *next;
};

struct node *head=NULL;

struct node * CreateNode(int x)
{
    struct node *temp = (struct node *) malloc(sizeof(struct node));
    temp->data = x;
    temp->next = NULL;
    temp->prev = NULL;
    return temp;

}

void InsertAtPosition(int index,int val)
{
    struct node *temp=head;
    for(int i=0; i<index-1;i++)
    {
        temp=temp->next;
    
    }
    struct node* temp1=CreateNode(val);

    

}
void print()
{
    printf("The elements in the LinkedList after insetion: \n\t");
    struct node *temp=head;
    while(temp!=NULL)
    {
        printf("%d ",temp->data);
        temp=temp->next;
    }
    printf("\n\n");
    
}
int main()
{
    int n,e,index,val;
    printf("Enter the number of nodes:");
    scanf("%d",&n);
    
    printf("Enter the value of the node 1: ");
    scanf("%d",&e);
    head=CreateNode(e);
    struct node *temp=head;
    for(int i=0;i<n-1;i++)
    {   
    
        struct node *temp1=NULL;
        printf("Enter the value of the node %d: ",i+2);
        scanf("%d",&e);
        temp1=CreateNode(e);
        temp->next=temp1;
        temp1->prev=temp;
        temp=temp->next;

    }

    print();

    printf("Enter the position of the element: " );
    scanf("%d",&index);
    printf("Enter the value of the element: " );
    scanf("%d",&val);

     return 0;
}