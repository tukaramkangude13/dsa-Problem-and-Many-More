#include<stdio.h>
#include<stdlib.h>
#define max 5
struct stack{
    int arr[max];
    int top;
};



struct stack* createstack(){
    struct stack* nestack=(struct stack*)malloc(sizeof(struct stack));
nestack->top=-1;
return nestack;
}


int isFUll(struct stack* stack){
    return stack->top==max-1;
}
int isEmpty(struct stack* stack){
    return stack->top==-1;
}
 void push(struct stack* stack,int value){
if(isFUll(stack)){
    printf(" stack is full");
    return;
} 

stack->arr[++(stack->top)]=value;
 }

 void pop(struct stack* stack){
    if(isEmpty(stack)){
        printf("stack is empty");
        return;
    }
    int pop;
    pop=stack->arr[(stack->top)--];
 printf("%d poped from the stack");

 }

void display(struct stack* stack){
    if(isEmpty(stack)){
        printf(" stack is empty");
        return;
    }
    int i=0;
    for ( i = 0; i < stack->top; i++)
    {
    printf("%d ",stack->arr[i]);
    }
    printf("\n");
    
}

int main(){
    struct stack* stack=createstack();

    push(stack,10);
    push(stack,10);
    push(stack,10);
    push(stack,10);
    push(stack,10);
 display(stack);
 pop(stack);
 
    return 0;
}