#include<stdio.h>
#include<stdlib.h>
struct Node
{
    int values;
    struct Node* left;
    struct Node* right;
};
struct Node*  createnode(int value){
    struct Node* newnode=(struct Node*)malloc(sizeof(struct Node));
    newnode->values=value;
    newnode->right=newnode->left=NULL;
    return newnode;
}
struct Node* insert(struct Node* root,int value){
    if(root==NULL){
        return createnode(value);
    }
    if(value< root->values){
        root->left=insert(root->left,value);
    }
    else{
        root->right=insert(root->right,value);
    }
    return root;

}
 int  leafnode(struct Node* root){
    if (root==NULL){
        return 0;
    }
    
    if(root->left==NULL && root->right==NULL){
        return 1;
    }
    return leafnode(root->left) + leafnode(root->right);
    
 }
 int  nonleafnode(struct Node* root){
    if(root==NULL|| root->left==NULL&& root->right==NULL){
        return 0;
    }
    return 1+ nonleafnode(root->left)+nonleafnode(root->right);
 }
int totalnode(struct Node* root){
    if(root==NULL){
        return 0;
    }
    return 1+totalnode(root->left)+totalnode(root->right);
 }

 struct Node* in(struct Node* root){
    if(root!=NULL){
        in(root->left);
        printf("%d ",root->values);
        in(root->right);
    }
 }

int main()
{


    struct Node* root=NULL;
    root=insert(root,10);
    insert(root,10);
    insert(root,70);
    insert(root,25);
    insert(root,36);
    insert(root,51);
    insert(root,33);
    insert(root,62);
    in(root);
    int le=leafnode(root);
    printf("total LeafNode are:%d\n",le);
    int non=nonleafnode(root);
    printf("total NonLeaf Node are:%d\n",non);
    int to=totalnode(root);
    printf("Total Node are:%d\n",to);
    return 0;

    
}