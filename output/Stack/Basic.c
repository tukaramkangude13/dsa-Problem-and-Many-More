#include<stdio.h>
#include<stdlib.h>
#define MAX 5
  struct Stack
  {
    int  items[MAX];
    int top;
    
  };
   void intilize(struct Stack* s)
   {
    s->top=-1;
   }
    int isFull(struct Stack* s){
        return s->top==MAX-1;
    }

  int isEmpty(struct Stack* s){
    return s->top == -1;
  }
  void  push(struct Stack* s,int value){
if(isFull(s)){
printf(" stack is fuul can not add element \n");
return;
}
s->items[++(s->top)]=value;

  }

  int pop(struct Stack* s){
    if(isEmpty(s))
    {
        printf(" stack is empty cananot pop element \n");
        return -1;
    }
    int popelement =s->items[(s->top)--];
printf(" %d number will be removed from the stack",popelement);
return popelement;

  }
  int peek(struct Stack* s ){
    if(isEmpty(s)){
        printf(" stack is empty can't peek element from thee stack");

    }
    return  s->items[s->top];
  }
  void display(struct Stack* s){
     if(isEmpty(s)){
printf(" stack is an empty ");
return;
     }
      for( int i=0;i<=s->top;i++)
      {
        printf("%d ",s->items[i]);

      }
      printf("\n");
    
  }
  int main(){
  struct Stack s;
  intilize(&s);
  push(&s,10);
  push(&s,20);
  push(&s,30);
  push(&s,40);
  
display(&s);
  return 0 ;

  }