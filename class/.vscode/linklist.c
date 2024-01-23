#include<stdio.h>
#include<stdlib.h>

s   int data;
    struct Node * next;
};

void LinkedListTraversal(struct Node* ptr){
    while(ptr!=NULL)
    {
    printf("Element: %d\n", ptr->data);
    ptr = ptr->next;
    }
}

int main(){
    struct Node * head;
    struct Node * second;
    struct Node * third;
    struct Node * fourth;
    struct Node * fifth;
    head = (struct Node*) malloc(sizeof(struct Node));
    second = (struct Node*) malloc(sizeof(struct Node));
    third = (struct Node*) malloc(sizeof(struct Node));
    fourth = (struct Node*) malloc(sizeof(struct Node));
    fifth = (struct Node*) malloc(sizeof(struct Node));
    
    head->data = 7;
    head->next = second;

    second->data = 11;
    second->next = third;

    third->data = 18;
    third->next = fourth;

    fourth->data = 29;
    fourth->next = fifth;

    fifth->data = 47;
    fifth->next = NULL;

    LinkedListTraversal(head);

return 0;
}truct Node{
 