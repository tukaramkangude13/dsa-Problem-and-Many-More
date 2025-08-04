#include<stdio.h>
#define max 50
struct stack{
    int items[max];
    int top;
};


 struct stack* intila(struct stack* s){
     s->top=-1;
 }
 int isempty(struct stack* s){
     return s->top==-1;
 }
 int isFUll(struct stack* s)
 {
 return s->top==max-1;
 };
 void push( struct stack* s,int value){
    if(isFUll(s)){
        printf(" Stack Is Full");
        return;
    }
    s->items[++(s->top)]=value;
 }
 void pop(struct stack* s){
    if(isempty(s)){
        printf(" stack is empty");
        return;   
    }
    int top=s->items[(s->top)--];
     printf(" %d is poped",top);
 }
  void display(struct stack* s){
    if(isempty(s)){
        printf(" stack is empty");
        return;
    }
    for (int  i = 0; i <= s->top; i++)
    {
     printf("%d",s->items[i]);
    }
    return;
    

  }

 
 int  main()
 {

 
 
 
    struct stack* s;
 intila(s);
 push(&s,10);
 push(&s,10); push(&s,10); push(&s,10); push(&s,10); push(&s,10);
 display(&s);
 return 0;
 
 }