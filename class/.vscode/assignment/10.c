#include<stdio.h>
#include<stdlib.h>

struct node{
int data;
struct node* next;
};

int commnode(node *a,node *b){
    int con;
for(a && b; a=a->next; b=b->next ){
    if(a=a->data||b=b->data){
        con++;
    }
    return con;
}
}
int maxpal(node *head){
    int res;
    node *prev=NULL,*curr=head;

    while(curr){
        Node* next= curr->next;
        curr->next=prev;
        res = max(res,2*countCommon(prev, next)+1);
        res = max(res,2*countCommon(curr, next));
        prev=curr;
        curr=next;

    }
    return res;
}
node *newNode(int key)
{
    node *temp = newNode;
    temp->data = key;
    temp->next = NULL;
    return temp;
}

int main(){
Node *head = newNode(2);
    head->next = newNode(4);
    head->next->next = newNode(3);
    head->next->next->next = newNode(4);
    head->next->next->next->next = newNode(2);
    head->next->next->next->next->next = newNode(15);
 
    cout << maxPalindrome(head) << endl;
    return 0;
}
