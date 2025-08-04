#include<stdio.h>
#include<stdlib.h>
struct  Node{
    int value;
     struct Node* right;
     struct Node* left;
};

struct Node* createnode(int value){
    struct Node* newnode=(struct Node*)malloc(sizeof(struct Node));
    newnode->value=value;
    newnode->right=newnode->left=NULL;
    return newnode;
}
struct Node* insert(struct Node* root,int value){
struct Node* newnode=createnode(value);
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

void in(struct Node* root){
    if(root!=NULL){
        in(root->left);
        printf("%d ",root->value);
        in(root->right);
    }

}
 int main(){

    struct Node* root=NULL;

        root=insert(root,10);
        root=insert(root,1);
        root=insert(root,60);
        root=insert(root,80);
        root=insert(root,4);
        root=insert(root,16);
        root=insert(root,18);
        in(root);
        return 0;

 }