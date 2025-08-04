#include<stdio.h>
#include<stdlib.h>
#define MAX 5
 struct Stack{
    int items[MAX];
    int top;
 };
  void intial(struct Stack *s){
    s->top=-1;
  }
  int  isEmpty(struct Stack *s){
    return s->top==-1;
  }
 int isFull(struct Stack *s){
    return s->top==MAX-1;
 }
 void push(struct Stack* s,int value){
    if(isFull(s)){
        printf("stack is full");
        return;
    }
    

    s->items[++(s->top)]=value;
 }
 void peek(struct Stack *s){
     if (isEmpty(s))
     {
    printf("stack is an empty");
    return;
     }
     printf(" Peak element of the stacj is %d",s->items[(s->top)]);
     
 }
  void pop( struct Stack* s){
    if(isEmpty(s)){
        printf(" stack is  empty ");
        return;
    } 
 int toping=s->items[(s->top)--];
printf("%d",toping);

 }
 void  display( struct Stack *s){
    if(isEmpty(s)){
        printf("stack is empty");
        return;
    }
    int i=s->top;
    for ( ; i >=0; i--)
    {
    printf("%d ",s->items[i]);
    }
    
 }
 int main()
 {
    struct Stack s;
    intial(&s);
    push(&s,10);
    push(&s,20);
    push(&s,50);
    push(&s,90);
    display(&s);
    printf("\n");
    pop(&s);
    printf("\n");

        display(&s);

    return 0;

 }