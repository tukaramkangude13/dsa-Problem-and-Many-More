#include<stdio.h>
#include<stdlib.h> 
 struct Node {
 	int data;
 	struct Node* next;
 	struct Node* prev;
 };
 struct Node* createNode(int data){
 	struct Node* newnode= (struct Node*)  malloc(sizeof(struct Node));
newnode->data=data;
newnode->next=NULL;
newnode->prev=NULL;
return newnode;  
 }
 void display(struct Node* head){
 	if(head== NULL){
 		printf(" linked list is empty");
 		
	 }
	 struct Node* temp=head;
	 while(temp != NULL){
	 	printf("%d->",temp->data);
	 	temp=temp->next;
	 }
		
 }
  void insertAtHead(struct Node** head,int data){
  	 struct Node* newnode=createNode(data);
	  if(*head == NULL){
  	    *head=newnode;
  	    return;
	  }
	newnode->next=*head;
	(*head)->prev=newnode;
	*head=newnode;
	  
  }
 void insertatend(struct Node** head,int data){
 	struct Node* newnode=createNode(data);
 	if(head == NULL){
 		head=newnode;
 		return;
	 }
struct Node* temp=*head;
	 while(temp->next != NULL){
	 temp=temp->next;
	 
	 }
	  temp->next=newnode;
	  newnode->prev=temp;
 }
void deletenode(struct Node** head,int position){
   if(*head == NULL){
    printf("Linked list is empty");
    return;
   }
       struct Node* temp = *head;

   if (position==1)
   {
    *head=temp->next;
    if (*head != NULL)
    {
    (*head)->prev=NULL;

    }
    free(temp); return;
    
   }
   
   
   int i;
    for ( i = 1; temp!=NULL  && i < position; i++)
    {
        temp=temp->next;    

    }
    if (temp==NULL)
    {
        printf("position out of the bond");
        return;
    }
    
     *head=temp->next;
    (*head)->prev=NULL;
   free(temp);

   if(temp->next !=NULL){
    temp->next->prev=temp->prev;
   }
   if(temp->prev !=NULL){
    temp->prev->next=temp->next;
   }
   free(temp);
   }

int main()
{
	struct Node* head=NULL;
	insertAtHead(&head, 10);
    insertAtHead(&head, 20);
    insertAtHead(&head, 30);
    insertAtHead(&head, 40);
    insertAtHead(&head, 50);
    insertAtHead(&head, 60);
display(head);
insertatend(&head,80);
printf("\n");


insertatend(&head,80);
display(head);
deletenode(&head,);
printf("\n");

display(head);

return 0;
	
}