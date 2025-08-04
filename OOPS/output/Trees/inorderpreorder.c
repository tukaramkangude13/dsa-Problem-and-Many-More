#include<stdio.h>
#include<stdlib.h>
struct Node{
    int  value;
    struct Node* right;
    struct Node* left;
};
 struct Node* createnode(int value){
    struct Node* newnode=(struct Node*)malloc(sizeof(struct Node));
    newnode->value=value;
    newnode->right=NULL;
    newnode->left=NULL;
    return newnode;
  
 }
 struct Node* insert(struct Node* root,int value){
    if(root==NULL){
        return createnode(value);
    }
    if(value < root->value){
        root->left=insert(root->left,value);
    }
    else
    {
        root->right=insert(root->right,value);
    }
 }
void in(struct Node* root){
    if(root!=NULL){
        in(root->left);
        printf("%d ",root->value);
    in(root->right);

    }

}
void post(struct Node* root){
    if(root!=NULL){
        post(root->left);
        post(root->right);
        printf("%d ",root->value);
    }
}

 int main(){
struct Node* root=NULL;
root=insert(root,10);
root=insert(root,3);
root=insert(root,8);
root=insert(root,1);
root=insert(root,19);
post(root);
printf("\n");
in(root);
return 0;
 }
