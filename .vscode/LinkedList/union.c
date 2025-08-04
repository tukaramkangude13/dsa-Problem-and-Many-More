#include<stdio.h>
#include<stdlib.h>
struct Node{
    int value;
    struct Node* next;
};
struct Node*  createNode(int value){
    struct Node* newnode=(struct Node*)malloc(sizeof(struct Node));
    newnode->value=value;
    newnode->next=NULL;
    return newnode;
}
struct Node*  insert(struct Node* head,int value){
    struct Node* newnode=createNode(value);
    if(head==NULL){
return newnode;
    }
    struct Node* temp=head;
    while (temp->next!=NULL)
    {
    temp=temp->next;
    }
    temp->next=newnode;
    return head;
    
}
void  display(struct Node* head){
    if(head==NULL){
        printf("ll is empty");
        return;
    }
    struct Node* temp=head;
    while (temp!=NULL)
    {
        printf("%d->",temp->value);
        temp=temp->next;
    }
    printf("\n");
    
}
void intersect(struct Node* head1,struct Node* head2){
struct Node* left=head1;
struct Node* right=head2;
while (left!=NULL)
{
    right=head1;
     while(right!=NULL){
          if(left->value==right->value){
        printf("%d intersect ",left->value);
        return;
    }
    right=right->next;
    }
    left=left->next;
  

}
printf("  union not found");
return;

}

int main()
{
     struct Node* list1=NULL;
     struct Node* list2=NULL;
     list1=insert(list1,10);
     list1=insert(list1,30);
     list1=insert(list1,40);
     display(list1);
     list2=insert(list2,50);
     list2=insert(list2,30);
     list2=insert(list2,60);
     display(list2);
     intersect(list1,list2);
return 0;
}