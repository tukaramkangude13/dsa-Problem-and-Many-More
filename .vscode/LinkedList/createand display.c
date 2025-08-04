#include<stdio.h>
#include<stdlib.h>
struct Node{
    int value;
struct Node*  next;
};
struct Node* createnode(int value){
    struct Node* newnode=(struct Node*)malloc(sizeof (struct Node));
    newnode->value=value;
    newnode->next=NULL;
    return newnode;
}
 struct Node* inser(struct Node* head,int value){
    struct Node* newnode=createnode(value);
    if(head==NULL){
        return createnode(value);
    }
    struct Node* temp=head;
    while (temp->next!=NULL)
    {
temp=temp->next;
    }
    temp->next=newnode;
    
    return head;
    
 }
void display(struct Node* head){
    if(head==NULL){
        printf("LinkeList Is Empty");
        return;
    }
    struct Node* temp=head;
    while (temp!=NULL){
    printf("%d->",temp->value);
     temp=temp->next;
    }
    
    
}
int main(){
    struct Node* head=NULL;
 head=inser(head,10);
 head=inser(head,10);
 head=inser(head,10);
 head=inser(head,10);
 head=inser(head,10);
 
 display(head);
 return 0;
}