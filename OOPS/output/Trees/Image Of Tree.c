#include<stdio.h>
#include<stdlib.h>
struct Node{
    int value;
     struct Node* left;
     struct Node* right;
};
struct Node* createnode(int value){
    struct Node* newnode=(struct Node*)malloc(sizeof(struct Node));
newnode->value=value;
newnode->left=newnode->right=NULL;
return newnode;
}
   struct Node* insert(struct Node* root,int value){
    if(root==NULL){
        return createnode(root);
    }
    if(value <   root->value){
        root->left=insert(root->left,value);

    }
    else{
        root->right=insert(root->right,value);
    }
   }
 struct Node* search(struct Node* root,int value){
    if(root==NULL){
        printf("value %d not found in the tree \n",value);
    }
    if(root->value==value){
        printf(" Value %d is found in the tree \n",value);

    }
     if(value< root-value){
        search(root->left,value);

     }
     else{
        search(root->right,value);
     }
 }
  int small(struct Node* root){
    if(root==NULL){
        printf(" tree is empty");
        return;
    }
    struct Node* cureent=root;
    while (cureent->left!=NULL)
    {
     cureent=cureent->left;
    }
    return cureent;
    
    
  } 
  int large(struct Node* root){
    if(root==NULL){
        printf(" tree is empty");
        return;
    }
    struct Node* cureent=root;
    while (cureent->right!=NULL)
    {
     cureent=cureent->right;
    }
    return cureent;
    
    
  }
 struct Node* in(struct Node* root){
    if(root!NULL){
        in(root->left);
        printf("%d ",root->value);
        in(root->right);
    }
 }


  int  main(){
    struct Node* root=NULL;
    insert=insert(root,32);
    insert(root,29);
    insert(root,82);
    insert(root,52);
    insert(root,42);
    insert(root,22);
    insert(root,12);
    insert(root,32);
       int l=large(root);
       printf(" large Element Of the tree is%d",l);
       int s=small(root);

printf("Large Elemtn  of the tree is%d",s);


  }