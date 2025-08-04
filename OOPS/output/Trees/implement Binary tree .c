#include<stdio.h>
#include<stdlib.h>
struct Node{
    int value;
    struct Node* left;
    struct Node* right;

};
struct Node*  createnode(int value){
    struct Node* newnode=(struct Node*)malloc(sizeof(struct Node));
    newnode->value=value;
    newnode->left=NULL;
    newnode->right=NULL;
    return newnode;
}
  struct Node* insert(struct Node* root,int value){
     struct Node* newnode=createnode(value);
     if(root==NULL){
        return createnode(value);
     }
      if(value < root->value){
        root->left=insert(root->left,value);
      }
      else{
        root->right=insert(root->right,value);
      }
  
  return root;
}
 void find(struct Node* root,int value){
   if(root==NULL){
    printf("%d is not present \n",value);
    return ;
   }
    if(root->value==value){
        printf("%d is present in the  tree",value);
        return ;
    }
    if(value < root->value )
    {
        find(root->left,value);
    }
    else{
        find(root->right,value);
    }
   
 };
 void mirro(struct Node* root){
     if(root==NULL){
        return;

     }
 struct Node* temp=root->left;
 root->left=root->right;
 root->right=temp;

mirro(root->left);
mirro(root->right);
 }
 
 void inorder(struct Node* root){
    if(root!=NULL){
        inorder(root->left);
        printf("%d ",root->value);
        inorder(root->right);
    }
 }

 int main(){
    struct Node* root=NULL;
     root=insert(root,11);
     root=insert(root,2);
     root=insert(root,31);
     root=insert(root,25);
     root=insert(root,5);
    

 find(root,10);
printf(" Before swapping the tree in inoreder traversal\n ");
inorder(root);
 mirro(root);
  printf(" Inordered TRaversal of   mirrored tree:\n");
  inorder(root);



return 0;

 }