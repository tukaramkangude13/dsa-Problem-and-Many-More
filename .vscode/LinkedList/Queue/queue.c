#include<stdio.h>
#include<stdlib.h>
#define max 5
struct Queue{
	int items[max];
	int front;
	int rear;
};

  struct Queue* create(){
  	struct Queue* q=(struct Queue*)malloc(sizeof(struct Queue));
  	q->front=-1;
  	q->rear=-1;
  	return q;
  }
  int isFull(struct Queue* q){
  	return  q->rear==max - 1;
  }
  int isEmpty(struct Queue* q){
  	return q->front==-1;
  }
   void insert(struct Queue* q,int value){
   	if(isFull(q)){
   		printf("Queue Is full ");
   		return;
	   }
	   if(q->front==-1){
	   
	   q->front=0;
}
	   q->rear++;
	   q->items[q->rear]=value;
	   printf("Is added in the Queue");
	   
	   
   }
   
     void  delete(struct Queue* q){
    	if(isEmpty(q)){
    		printf("q is empty");
    		return ;
		}
		int del=q->items[q->front];
		q->front++;
		if(q->front > q->rear){
			q->front = q->rear=-1;
		}
	}
	
	int peek(struct Queue* q){
		if(isEmpty(q)){
			printf("Queue is empty");
			return -1;
		}
		return q->items[(q->front)];
	}
	void display(struct Queue* q){
		if(isEmpty(q)){
			printf(" queue is empty");
			return ;
		}
		 int i=0;
		 for(i=q->front;i<=q->rear;i++){
		 printf("%d ",q->items[i]);}
	}

int main()
{
	struct Queue* q=create();

insert(q,10);
insert(q,20);
insert(q,30);
insert(q,40);

   display(q);
return 0;   
}