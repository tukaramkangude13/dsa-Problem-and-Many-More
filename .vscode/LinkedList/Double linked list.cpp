#include<iostream>
using namespace std;
class Node{
    public:
    int data;
    Node* prev;
    Node* next;
    Node()
    {
this ->data=0;
this->prev=NULL;
this->next=NULL;


    }
    Node(int data)
    {
        this->data=data;
        this->prev=NULL;
        this->next=NULL;

    }
    ~Node(){
        cout<<" Node With Value: "<<this->data<<" deleted";
    }
};
void print(Node* &head)
{
    Node* temp=head;
    while(temp!=NULL)
    {
        cout<<temp->data<<" ";
       // cout<<"this is th egood";
        temp=temp->next;
    }
}
int getlength(Node* head)
{
    int len=0;
    Node* temp=head;
    while(temp!=NULL)
    {
        temp=temp->next;
        len++;
    }
    return len;
}


void insertAthead(Node* &head,Node* &tail,int data)
{
    if(head==NULL)
    {
Node* newnode=new Node(data);
head=newnode;
tail=newnode;


    }
    else{
      Node* newnode=new Node(data);
      //step 2:
      newnode->next=head;
      head->prev=newnode;
      head=newnode; 
    }
}


void insertAtTail(Node* &head,Node* &tail,int data)
{
    if(head==NULL)
    {
        // ll is empty
       Node* newnode= new Node(data);
       head=newnode;
       tail=newnode;  
    }
    else{
        Node* newnode=new Node(data);
        tail->next=newnode;
        newnode->prev=tail; 
       tail= newnode;
    }

    }
void insertAtPosition(Node* &head,Node* &tail,int data ,int position)
{
      if(head==NULL)
    {
Node* newnode=new Node(data);
head=newnode;
tail=newnode;


    }
    else {
if(position==1)
{
    insertAthead(head,tail,data);
    return;
}
int len=getlength(head);
if(position > len)
{
    insertAtTail(head,tail,data);
    return;
}

//insertation at middle 
int i=1;
Node* prevnode=head;
while (i< position-1)
{
prevnode=prevnode->next;   
i++; /* code */
}
Node* curr=prevnode;
// step2 : create a node
Node* newNode=new Node(data);
// step 3: 
prevnode-> next=newNode;
newNode->prev=prevnode;
curr->prev=newNode;
newNode->next=curr;
    }
}
//delation  
 void deleateFromPos(Node* &head,Node* &tail,int position)
{
if(head==NULL)
{
    cout<<" Linked list is empty";
return;
}
if(head->next==NULL){
    Node* temp=head;
    head=tail=NULL;
    head=NULL;
    delete temp;
    return;
}
if(position==1)
{
//want to delete the first node
    Node*temp=head;
    head=head->next;
    head ->prev=NULL;
    temp->next=NULL;
    delete temp;
    return;
}
// delate from middle of linked list 
// step 1: find left curr right 
int i=1;
Node* left=head;
while (i< position-1)
{
    left=left->next;
    i++;/* code */
}
Node* curr=left->next;
Node* right=curr->next;
 //  step 2: 
 left ->next=right;
 right->prev=left;
 curr->next=NULL;
 curr->prev=NULL;
 delete curr;
 return;
}

Node* reverse(Node* &prev, Node* &curr)
{
    //base case
    if(curr==NULL)
    {
        return prev;
    }
    // ek case solve 
    Node* forward=curr->next;
    curr ->next=prev;
    reverse(curr,forward);
}
Node* reverseusingLoop(Node* &head){ 
    Node* prev=NULL;
    Node* curr=head;
    while (curr!=NULL)
    {
       Node* temp=curr->next;
       curr->next=prev;
       prev=curr;
       curr=temp;
    }
    return prev;
    
}
Node* reverseusingrecursion(Node* prev,Node* curr)
{
    //base case
    if(curr==NULL)
    {
        return prev;

    }
    Node* temp=curr->next;
    curr->next=prev;
    prev=curr;
    curr=temp;
    //recursion samhal lega
    return reverseusingrecursion( prev, curr);

}
int main()

{/// to solving double lindlw list you nedd to the unsetatnd the first the basic of the linked list ok let's start
 
 
 
 
 /*
 
 Node* first=new Node(10);
Node* second=new Node(20);
Node* third=new Node(30);
//Node* first=new Node(10);  first->next=second;
    //second->next=third;*/
    //third->prev=second;
    
Node* head=NULL;
Node* tail=NULL;
  
   // print(first);
  cout<<endl;
 //   insertAthead(head,tail,101);
   // print(head);
 //   cout<<endl;

   // insertAtTail(head,tail,59);
   // print(head);
//cout<<endl;
//insertAtPosition(head,tail,401,15);
//print(head);

//cout<<endl;
//deleateFromPos(head,tail,5);
//print(head);
//cout<<endl;
insertAthead(head,tail,10);
insertAthead(head,tail,20);
insertAthead(head,tail,30);
insertAthead(head,tail,40);
insertAthead(head,tail,50);
Node* prev=NULL;
Node* curr=head;
 head= reverseusingrecursion(prev,curr);

print(head);

cout<<endl;
return 0;
}



















/*
 single linked list me tum agar aage jaoge to piche nahi aaoge  
=> tail ke next ko head par lagna hi circular linked list hai 
-circular linked list ke aandar koi start nahi hai koi end nahi hai

*/