#include<stdio.h>
#include<stdlib.h>
struct Node{
    int value;
    struct Node* next;

};
struct Node* createnode(int value){
    struct Node* newnode=(struct Node*)malloc(sizeof(struct Node));
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
        while (temp->next!=NULL)
        {
        temp=temp->next;
        }
        temp->next=newnode;
        return head;
        
     }
     void display(struct Node* head){
        if(head==NULL){
            printf("ll is Empty");
            return;
        }
        struct Node* temp=head;
        while (temp!=NULL)
        {
        printf("%d->",temp->value);
        temp=temp->next;
        
        }

printf("NULL\n");
        

     }

      struct Node*  reverse(struct Node* head){
        if(head==NULL){
            return NULL;
        }
        struct Node* prev=NULL;
        struct Node* current=head;
        struct Node* next=NULL;
      while (current!=NULL)
      {
     next=current->next;
       current->next=prev;


        prev=current;
        current=next;
      }
      return prev;
      
      }

     int main(){
        struct Node* head=NULL;
        head=insert(head,10);
        head=insert(head,20);
        head=insert(head,30);
        head=insert(head,40);
display(head);

printf(" after the reverse the linked list ");
head=reverse(head);
display(head);
return 0;

     }
// struct Node* reverse(struct Node* head) {
//     struct Node* prev = NULL;
//     struct Node* current = head;
//     struct Node* next = NULL;
    
//     while (current != NULL) {
//         // Store the next node
//         next = current->next;
        
//         // Reverse the current node's pointer
//         current->next = prev;
        
//         // Move pointers one position ahead
//         prev = current;
//         current = next;
//     }
//     return prev;  // New head of the reversed list
// }