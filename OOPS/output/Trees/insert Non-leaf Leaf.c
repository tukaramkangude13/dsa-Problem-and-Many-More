#include<stdio.h>
#include<stdlib.h>
struct Node {
    int value;
    struct Node* right;
    struct Node* left;

};
struct Node* createnode(int value){
    struct Node* newnode=(struct Node*)malloc(sizeof(struct Node));
    newnode->value=value;
    newnode->right=NULL;newnode->left=NULL;
    return newnode;
}
struct Node* insert(struct Node* root,int value){
    if( root==NULL){
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
int leaf(struct Node* root ){
    if(root==NULL){
        return 0;
    }
if(root->left==NULL && root->right==NULL){
    return 1;
}    
   return leaf(root->left)+leaf(root->right);

}

int nonleaf(struct Node* root ){
    if(root == NULL){
        return 0;

    }
     if(root->left==NULL && root->right==NULL){
        return 0;
     }
     return  nonleaf(root->left)+nonleaf(root->right);
}
int main(){
    struct Node* root=NULL;
     root=insert(root,10);
     root=insert(root,26);
     root=insert(root,43);
     root=insert(root,40);
     root=insert(root,21);
     root=insert(root,13);

   int total = 0;
    int count = 0;

    // Count the leaf and non-leaf nodes
    count = leaf(root);
    printf("%d total Leaf Nodes\n", count);

    total = nonleaf(root);
    printf("%d total Non-Leaf Nodes\n", total);

 return 0;    
}