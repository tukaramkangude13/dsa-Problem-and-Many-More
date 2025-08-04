#include<stdio.h>
#include<stdlib.h>
struct Node{
    int value;
     struct Node* next;
};
struct Node*  createnode(int value){
    struct Node* newnode=(struct Node*)malloc(sizeof(struct Node));
    newnode->value=value;
    newnode->next=NULL;
} struct Node* insert(struct Node* head,int value){
    struct  Node* newnode=createnode(value);
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
int length(struct Node* head){
    int count=0;
    if(head==NULL){
        return 0;
    }
     struct Node* temp=head; 
 while (temp!=NULL)
 {
 temp=temp->next;
 count++;
 }
 
     return count;
}
 int main()
 {
     struct Node* head=NULL;
 
 head=insert(head,10);
 head=insert(head,10);
 head=insert(head,10);
 head=insert(head,10);
 head=insert(head,10);
 head=insert(head,10);
 head=insert(head,10);
 head=insert(head,10);
 int count=0;
count=length(head);
 printf("total length of linked list %d",count);
 return 0;
 }
  