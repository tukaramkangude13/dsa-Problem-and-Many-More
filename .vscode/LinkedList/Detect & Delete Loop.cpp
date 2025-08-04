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
bool checkforloop(Node* &head){
    if(head==NULL){
        cout<<" LL is empty";
        return false;
    }
    Node* fast=head;
    Node* slow=head;
    while (fast != NULL){
        fast=fast->next;
        if(fast != NULL)
        {
            fast=fast->next;
            slow=slow->next;
        }
        if(slow== fast)
        {
            return true;
        }

    }
    return false;
     

}
Node* startingPoint(Node* &head){
    if(head==NULL){
        cout<<" LL is empty";
        return NULL;
    }
    Node* fast=head;
    Node* slow=head;
    while (fast != NULL){
        fast=fast->next;
        if(fast != NULL)
        {
            fast=fast->next;
            slow=slow->next;
        }
        if(slow== fast)
        {
        slow=head;  
        break; 
        }

    }
 //   return false;
    while (slow!=fast)
    {
    slow=slow->next;
    fast=fast->next;
    }
      return slow;

}
Node* removeloop(Node* &head){
    if(head==NULL){
        cout<<" LL is empty";
        return NULL;
    }
    Node* fast=head;
    Node* slow=head;
    while (fast != NULL){
        fast=fast->next;
        if(fast != NULL)
        {
            fast=fast->next;
            slow=slow->next;
        }
        if(slow== fast)
        {
        slow=head;  
        break; 
        }


    }
 //   return false;
 Node* prev=fast;
    while (slow != fast)
    {
        prev=fast;
    slow=slow->next;
    fast=fast->next;

    }
    prev->next=NULL;

      return slow;

}

int main()
{
    Node* head=new Node(10);

   Node* second=new Node(20);
      Node* third=new Node(30);
       Node* fourth=new Node(40);
        Node* fifth=new Node(50);
         Node* sixth =new Node(60);
          Node* seventh=new Node(70);
           Node* eighth=new Node(80);
            Node* ninth=new Node(90);
        
            head->next=second;
             second->next=third;
             third->next=fourth;
             fourth->next=fifth;
             fifth->next=sixth;
             sixth->next=seventh;
             seventh->next=eighth;
             eighth->next=ninth;
             ninth->next=fifth;
            // print(head);
//             cout<<" loop is present or not"<<checkforloop(head);


             if(checkforloop(head)==1)
             {
                cout<<" loop is present ";
 
             }
             else{
                cout<<"loop is not present";
             }
             cout<<endl;
             cout<<"starting point of loop"<<startingPoint(head)->next<<endl;
             removeloop(head);
             print(head);
             return 0;
}