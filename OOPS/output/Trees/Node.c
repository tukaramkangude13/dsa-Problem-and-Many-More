#include<stdio.h>
#include<stdlib.h>
struct Node
{
int data;
  struct Node* left;
  struct Node* right;
};
struct Node* createNode(int data){
    struct Node* node=(struct Node*)malloc(sizeof(struct Node));
   node->left=node->right=NULL;
   node->data=data;
}
struct Node* insertNode(struct Node* root,int data)
{
if(root==NULL){
    root=createNode(data);
}
else if(data<root->data){
    root->left=insertNode(root->left,data);
}
else{
    root->right=insertNode(root->right,data);
}
return root;
}
void inorderTraversal(struct Node* root){
    if(root==NULL) return;
    inorderTraversal(root->left);
        printf("%d ",root->data);
        inorderTraversal(root->right);

}
// pre order traversal 
void preorderTraversal(struct Node* root){
    if(root==NULL) return;
    printf("%d ",root->data);
    preorderTraversal(root->left);
    preorderTraversal(root->right);

} void postordertraversal(struct Node* root){
    if(root==NULL){
        return;
    }
    postordertraversal(root->left);
    postordertraversal(root->right);
    printf(" %d ",root->data);

}
 int countnodes(struct Node* root){

    if(root==NULL) return  0;
    return 1+  countnodes(root->left)+ countnodes(root->right);
 }
struct Node* search(struct Node* root,int key){
    if(root==NULL||root->data ==key) return root;
         
if (key < root->data)
{
    return(search(root->left,key));
}
else{
    return(search(root->right,key));
}}
void searchresult(struct Node* root,int key)
{
 struct Node* result=search(root,key);
 if(result!=NULL)
 {
    printf("node is found in the tree %d",key);
    }
 else
 {
    printf("node is not found in the tree ");
 }

}
int countleafnodes(struct Node* root){
    if(root==NULL) return 0;

if(root->left==NULL && root->right==NULL) return 1;
return countleafnodes(root->left)+ countleafnodes(root->right);
}





int countnonleafnodes(struct Node* root){
    if(root==NULL||root->left==NULL&& root->right==NULL) return 0;
return  1+ countnonleafnodes(root->left)+ countnonleafnodes(root->right);

}

// function to cresate the mirro of the tree
void mirror(struct Node* root){
    if(root==NULL) return;
    // swpaing 
    struct Node* temp=root->left;
    root->left=root->right;
    root->right=temp;
    mirror(root->left);
    mirror(root->right);
}
int minvalues(struct Node* root){
    struct Node* current=root;
    while (current->left!=NULL)
    {
    current=current->left;
    }
    return current->data;
    

}
int maxvalues(struct Node* root){
    struct Node* current=root;
    while (current->right!=NULL)
    {
    current=current->right;
    }
    return current->data;
    
}

int main(){

    struct Node* root=NULL;
    root=insertNode(root,50);
    root=insertNode(root,10);
    root=insertNode(root,14);
    root=insertNode(root,80);
    root=insertNode(root,60);
    printf(" printing the inodee traversal");
    inorderTraversal(root);
    printf("\n");
    printf(" preorder traversal");
    preorderTraversal(root);
        printf("\n");

    printf("post order traversal");
    postordertraversal(root);
        printf("\n");
searchresult(root,50);
printf("\n ");
 printf("minimum value from the tree is=%d\n",minvalues(root));
printf("maximum value from the  tree is =%d\n",maxvalues(root));

searchresult(root,3);
printf("\n");
int totalleaf=countleafnodes(root);
printf("the total leaf nodes in the tree  are =%d",totalleaf);
int non=countnonleafnodes(root);
printf("\n");
printf("the total no leaf nodes=%d",non);

printf(" post order traversal of tree ");
preorderTraversal(root);
        printf("\n");
mirror(root);
printf("post order of traversal of mirro tree");
preorderTraversal(root);

        printf("\n");
    return 0;
 

}