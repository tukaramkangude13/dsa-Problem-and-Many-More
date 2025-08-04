#include<stdio.h>
#include<stdlib.h>
struct Node{
    int value;
    struct Node* prev;
    struct Node* next;
};
 struct Node* createnode(int value){    
    struct Node* newnode=(struct Node*)malloc(sizeof(struct Node));
       newnode->value=value;
       newnode->prev=NULL;
       newnode->next=NULL;
       return newnode;
 }
 struct Node* insert(struct Node* head,int value){
     struct Node* newnode=createnode(value);
     if(head==NULL){
        return  createnode(value);
     }
     struct Node* temp=head;
     while (temp->next!=NULL)
     {
    temp=temp->next;
     }
     temp->next=newnode;
     newnode->prev=temp;

     return head;
     
 }


 void display(struct Node* head){
    if(head==NULL){
        printf(" ll is empty");
        return;
    }
    struct Node* temp=head;
    while (temp!=NULL)
    {
    printf("%d->",temp->value);
    temp=temp->next;
    }

    
 }
int main()
 {   struct Node* head=NULL;
    head=insert(head,10);
    head=insert(head,40);
    head=insert(head,50);
    head=insert(head,25);
    head=insert(head,15);
        display(head);
        return 0;
}

