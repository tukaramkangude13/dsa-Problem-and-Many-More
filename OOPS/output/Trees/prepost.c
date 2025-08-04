#include<stdio.h>
#include<stdlib.h>

struct Node {
int value;
struct Node* left;
struct Node* right;
};
struct Node* createnode(int value){

    struct Node* newnode=(struct Node*)malloc(sizeof(struct Node));
    newnode->value=value;
    newnode->right=newnode->left=NULL;
    return newnode;
}
 struct  Node* insert(struct Node* root,int value) {

    if(root==NULL){

        return createnode(value);
        }
        if( value <  root->value){

            root->left=insert(root->left,value);
        }
        else{
            root->right=insert(root->right,value);
        }
        return root;
    
  }
void  post(struct Node* root ){
    if(root!=NULL){
        post(root->left  );
        post(root->right);
        printf("%d ",root->value);
    }
}

struct Node*  pre(struct Node* root ){
    if(root!=NULL){
                printf("%d ",root->value);

        pre(root->left  );
        pre(root->right);
    }
}
int main()
{

    struct Node* root=NULL;


    root=insert(root,10);
    insert(root,14);
    insert(root,98);
    insert(root,78);
    insert(root,60);
    insert(root,40);
    insert(root,20);
    insert(root,50);
    printf(" postorder trvaersal is :\n");
    post(root);
printf(" PreOrdered Traversal is:\n");
    pre(root);

return 0;
}