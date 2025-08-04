#include<stdio.h>
#include<stdlib.h>
#define max 10
struct stack{
    int items[max];
    int top;
};
struct stack* creatstack(){
    struct stack* s=(struct stack*)malloc(sizeof(struct stack));
    s->top=-1;
    return s;
}

int isEmpty(struct stack* s){
    return s->top==-1;
}
int isFUll(struct stack* s){
    return s->top==max-1;
}
 void push(struct stack* s,int value){
    if(isFUll(s)){
        printf(" stack is full");
        return;
    }
s->items[++(s->top)]=value;

 }
 void pop(struct stack* s){
    if(isEmpty(s)){
        printf("stack is empty");
        return;
    }
    int top=s->items[(s->top)--];
    printf("%d pop from stack",top);
 }

void display(struct stack* s){
    if(isEmpty(s)){
        printf("stack is empty");
        return;
    }
    int i;
    for ( i = 0; i < s->top; i++)
    {
        printf("%d ",s->items[i]);
    }
    
}
int main()
{

     struct stack* s=creatstack();
     push(s,10);
        push(s,10);
           push(s,10);
              push(s,10);
                 push(s,10);
display(s);
                 return 0;

}