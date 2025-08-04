#include<stdio.h>
#include<stdlib.h>
struct Node{
     int value;
     struct Node* next;
};

struct Node* createnode(int value){
    struct Node* newnode=(struct Node*)malloc(sizeof (struct Node));
newnode->value=value;
newnode->next=NULL;
return newnode;

}









 struct Node* insert(struct Node* head,int value){

struct Node* newnode=createnode(value);

    if(head==NULL){
        return createnode(value);
    }
struct Node* temp=head;
while (temp->next!=NULL){
     temp=temp->next;
}
temp->next=newnode;
return head;

 }

  struct Node* concanate(struct Node* head1,struct Node* head2)
{

if(head1==NULL)
return head1=head2;

struct Node* temp=head1;
while (temp->next!=NULL)
{
    temp=temp->next;
}
 temp->next=head2;
 

}
void display(struct Node* head)
{
    if(head==NULL){
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

int main(){

    struct Node* link1=NULL;
    struct Node* link2=NULL;
link1=insert(link1,10);
link1=insert(link1,20);
link1=insert(link1,30);
link1=insert(link1,40);
link2=insert(link2,50);
link2=insert(link2,50);
link2=insert(link2,50);
link2=insert(link2,50);
display(link1);

concanate(link1,link2);
display(link1);
return 0;
  
}