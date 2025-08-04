#include<stdio.h>
#include<stdlib.h>
struct Node{
    int data;
    struct Node* next;
};
struct Node* createnode(int value){
    struct Node* newnode=(struct Node*)malloc(sizeof(struct Node));
    newnode->data=value;
    newnode->next=NULL;
    return newnode;
}
 struct Node* insert(struct Node* head,int value){
     struct Node* newnode=createnode(value);
     if(head==NULL){
        return newnode;
     }
     newnode->next=head;
     head=newnode;
     return head;

 }
  int length(struct Node* head){
     int count=0;
    if(head==NULL){
        printf("LL is Empty");
        return 0;
    }
    struct Node* temp=head;
    while (temp!=NULL)
    {
       temp=temp->next;
       count++;
    }
   
    return  count;
  }
  int main()
  {
    struct Node* head=NULL;
    head=insert(head,10);
    int le=length(head);
    printf("%d",le);
    return 0;
  }