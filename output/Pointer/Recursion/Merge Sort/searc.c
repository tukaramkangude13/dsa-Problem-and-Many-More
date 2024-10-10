#include<stdio.h>
#include<stdlib.h>
struct Node{
	int  data;
	struct Node* next;
	
};
  
  struct Node* createNode(int data){
  	struct Node* newnode=(struct Node* )malloc(sizeof(struct Node));
  	newnode->data=data;
  	newnode->next=NULL;
  	return newnode;
  }
   void  create(struct Node** head,int data){
   	struct Node* newnode=createNode(data);
   	if(* head==NULL){
   		*head=newnode;
   		newnode->next=*head;
	   }else{
	   	struct Node* temp=*head;
	   	while(temp->next != *head){
	   		temp=temp->next;
		   }
		   temp->next=newnode;
		   newnode->next=*head;
	   }
	   
	
   }
      void display(struct Node* head){
	   	if(head == NULL){
	   		printf(" ll is empty");
	   		return ;
		   }
		   
		   struct Node* temp=head;
		do{
			printf("%d ->",temp->data);
			temp=temp->next;
		}while(temp!=head);
	   }
	   
int main()
{
 struct Node* head=NULL;
 create(&head,10);
 display(head);
 return 0;
}