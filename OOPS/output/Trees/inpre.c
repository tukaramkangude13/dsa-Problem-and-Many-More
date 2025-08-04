#include<stdio.h>
#include<stdlib.h>
struct Node{
    int value;
    int left,right;
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
 void pre( struct Node* root){
    if(root!=NULL){
        printf("%d ", root->value);
        pre(root->left);
        pre(root->right);
    }
 }
 int main(){



    struct Node* root=NULL;
 root=insert(root,87);
 root=insert(root,12);
 root=insert(root,32);
 root=insert(root,23);
 root=insert(root,45);
 root=insert(root,80);
 root=insert(root,89);

pre(root);
printf("\n");
in(root);
return 0;

 }