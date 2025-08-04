#include<stdio.h>
#include<stdlib.h>
struct Node
{
     int value;
     struct Node* left;
      struct Node* rigth;
};
 struct Node* createnode(int value){

struct Node* newnode=(struct Node*)malloc(sizeof(struct  Node));
    newnode->value=value;
    newnode->left=NULL;
    newnode->rigth=NULL;
    return newnode;
 }

 struct Node* insert(struct Node* root,int value){
    if(root==NULL){
        return createnode(value);
    }
    if (root < root->value)
    {
    root->left=insert(root->left,value);
    }
    else{
        root->rigth=insert(root->rigth,value);
    }

    
 }

  struct Node* display(struct Node* root){
  
    if (root!=NULL)
    {
     display(root->left);

    printf("%d",root->value);
    display(root->rigth);
    }
    
  }

int main(){
     struct Node* root=NULL;
     root=insert(root,10);
     root=insert(root,80);
     root=insert(root,20);
     root=insert(root,40);
     root=insert(root,50);
     root=insert(root,60);
     display(root);
     return 0;

}











