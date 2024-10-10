#include<iostream>
using namespace std;
class Node{
    public:
    int data;
    Node* next;
    Node(int data)
    {
        this->data=data;
        this->next=NULL;

    }
};
void print(Node* head)
{
    Node* temp=head;
    while (temp!=NULL)
    {
        cout<<temp->data<< " ";
        temp=temp->next;
        
    }
    
};
Node* getmiddle(Node* &head)
{
    if(head==NULL)
    {
        cout<<" linked list is empty";
        return head;

    }
    if(head->next==NULL)
    {
        return head;
    }// ll is have >1 node 
    Node* slow=head;
    Node* fast=head->next;
    while (slow!=NULL && fast!=NULL)
    {
        fast=fast->next;
        if(fast!=NULL){
            fast=fast->next;
            slow=slow->next;
        }
    }
    return slow;
    
}
int getlength(Node* &head){
    int len=0;
    Node* temp=head;
    while (temp != NULL)
    {
    temp=temp->next;
    len++;
    }
    return len;
    
}
Node* reverseknode(Node* &head,int k)
{
    if(head==NULL)
    {
        cout<<" ll ,is an empty";
        return head;
    }
    int len=getlength(head);
    if(k > len)
    {
      cout<<" enter the valid node for ll";
        cout<<endl;
        return head;
    }
Node* prev=NULL;
Node* curr=head;
Node* forward =curr->next;
  int count=0;
  while(count < k){
forward=curr->next;

curr->next=prev;
prev=curr;
curr=forward;
count++;
  }
  if(forward != NULL)
  {
    cout<<len<<endl;
head->next=reverseknode(forward,k);
cout<<len<<endl;
  }
  return prev;
 
}

int main()
{
Node* head=new Node(10);
Node* second=new Node(20);
Node* third=new Node(30);
Node* fourth=new Node(40);
Node* fifth=new Node(50);
Node* sixth=new Node(60);
head->next=second;
second->next=third;
third->next=fourth;
fourth->next=fifth;
fifth->next=sixth;

print(head);
cout<<endl;

////getmiddle(head);
//cout<<getmiddle(head)->data<<endl;
head=reverseknode(head,4);
print(head);
}