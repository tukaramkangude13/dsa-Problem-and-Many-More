#include<stdio.h>

#include<stdlib.h>
# define MAX 5
 struct stack{
    int items[MAX];
    int top;

 };
 void intial(struct stack *s){
    s->top=-1;
 }
  int isFull(struct stack *s){
    return s->top==MAX-1;

  }
  int isEmpty(struct stack *s){
    return s->top==-1;
  }
  void push(struct stack *s,int value){
    if(isFull(s)){
        printf(" stack is full \n");
        return;
    }
    s->items[++(s->top)]=value;
  }
  void pop(struct stack *s){
    if(isEmpty(s)){
        printf("stack is empty\n");
        return;
    }
    int pop=s->items[(s->top)--];
    printf("%d is poped from stack \n",pop);

  }
  void top (struct stack *s){
    if(isEmpty(s)){
        printf("stack is empty");
        return;
    }
    printf("peek of stack %d",s->items[(s->top)]);
  }
   void display(struct stack *s){
    if(isEmpty(s)){
        printf(" stack is empty");
        return;
    }
    int i=0;
    for ( i = s->top; i >= 0; i--)
    {
    printf("%d ",s->items[i]);
    }
    
   }
   void reverse (struct stack *s){

    if(isEmpty(s)){
        printf(" stack is empty");
        return;
    }
    struct stack  temp;
    intial(&temp);
      while (!isEmpty(s))
      {
        push(&temp,s->items[(s->top)]);
        pop(s);
      }
      while (!isEmpty(&temp))
      {
        push(s,temp.items[temp.top]);
        pop(&temp);
      }
      
      
   }
 int main(){
     struct stack s;
     intial(&s);
     push(&s,10);
     push(&s,20);
     push(&s,30);
     push(&s,40);
     printf(" before the reverse ");
     display(&s);

     reverse(&s);
     printf("after the reverse ");
     display(&s);
    
return 0;
    

 }