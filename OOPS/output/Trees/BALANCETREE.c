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
        return createnode(value);
    }
    if(value< root->value){
        root->left=insert(root->left,value);
    }
    else{
        root->right=insert(root->right,value);
    }
}

void pre(struct Node* root){
    if(root!=NULL){
        printf("%d ",root->value);
        pre(root->left);
        pre(root->right);
    }
}
int main(){
     struct Node* root=NULL;

    root=insert(root,10);
    root=insert(root,10);
    root=insert(root,10);
    root=insert(root,10);
    root=insert(root,10);
    root=insert(root,10);

pre(root);
return 0;
}