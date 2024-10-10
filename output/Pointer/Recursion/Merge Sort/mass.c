#include<stdio.h>
#include<stdlib.h>
struct Node{
	int data;
	struct Node* prev;
	struct Node* next;
};
 struct Node* createnode(int data){
 	struct Node* newnode=(struct Node*)malloc(sizeof(struct Node));
 	newnode->data=data;
	 newnode->next=NULL;
 	newnode->prev=NULL;
 	return newnode;
 }
   void insertathead( struct Node** head,int data){
   	struct Node* newnode=createnode(data);
	   if(*head==NULL){
   	       
   	       *head=newnode;
   	       return;
	   }
	   newnode->next= *head;
	   printf("good ");
	   (*head)->prev   =  newnode;
	   printf("bad");
	   *head=newnode;
   }
   void display(struct Node* head){
   	if(head==NULL){
   		printf(" linked list is empty");
   		return;
	   }
	   struct Node* temp=head;
	   while(temp != NULL){
	   	printf("%d->",temp->data);
	   	temp=temp->next;
	   }
	   
   }
   void deletenode(struct Node** head,int position){
   	if(*head==NULL){
   		printf("linked list is the empty");
   		return;
	   }
	    	struct Node* temp=*head;
	    	
	    	
	    	if(position==1){
	    		*head=temp->next;
	    		if(*head != NULL){
	    			(*head)->prev=NULL;
				}
				
			}
			int i=0;
			 for(i=0; temp!=NULL && i<position;i++){
			 	temp=temp->next;
			 }
			 if(temp==NULL){
			 	printf(" position out of bond");
			  return;
			 }
			if(temp->prev != NULL){
				temp->prev->next=temp->next;
				
			}
			 if(temp->next != NULL){
			 	temp->next->prev=temp->prev;
			 }
			 free(temp);
			 
  }
int  main()
{
	struct Node* head=NULL;
	 insertathead(&head,10);
	 insertathead(&head,20);
	 insertathead(&head,30);
printf("  node before the delete node");
display(head);
printf("node after the delete node");
 deletenode(&head,3);
 display(head);
return 0;

}