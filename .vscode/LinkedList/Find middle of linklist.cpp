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
sixth->next=NULL;
//print(head);

///getmiddle(head);
cout<<"middle of the ll:"<<getmiddle(head)->data<<endl;
print(head);
}