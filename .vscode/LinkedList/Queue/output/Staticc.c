#include<stdio.h>
#include<stdlib.h>
#include<limits.h>
#define MAX 5
  typedef struct Queue{
int items[MAX];
int front;
int rear;

}Queue;

// function to create the view 
struct Queue* createQueue(){
    Queue* queue=(Queue*)malloc(sizeof(Queue));
    queue->front= -1;
    queue->rear= -1;
    return queue;

}
// check is thee queue is  full
int isFull(Queue* queue)
{
    return queue->rear==MAX-1;
}
// check  if the queue is empty
int isEmpty(Queue* queue){
    return queue->front==-1|| queue->front > queue->rear;
}
// enqueue in the element menas(push)
struct Queue* enqueue(Queue* queue,int value){
    // check if the queue is full or not 
    if (isFull(queue))
    {
        printf(" queue is full  to get number %d",value);
        return;
    }
    // if this is the first element being added
    if(queue->front==-1){
        queue->front=0;

    }
    queue->rear++;
    queue->items[queue->rear]=value;
    printf("%d is push in the queue",value);

    
}

void dequeue(Queue* queue){
    if(isEmpty(queue)){
        printf(" queue is empty");
        return;

    }
    int dequeuevalue=queue->items[queue->front];
    queue->front++;
if (queue->front > queue->rear){
    queue->front=queue->rear=-1;
}
printf("%d dequeued value from queue\n",dequeuevalue);



}
int peak(Queue *queue){
    if(isEmpty(queue)){
        printf(" queue is emptry" );
        return INT_MIN;
    }
    return queue->items[queue->front];
}
int end(Queue* queue){
    if(isEmpty(queue)){
        printf("queue is empty");
        return INT_MAX;
    }
    return queue->items[queue->rear];
}
// seze of que
int size(Queue* queue)
{
    if (isEmpty(queue))
    {
        printf(" queue is an empty");
        return INT_MAX;
    }
    return queue->rear-queue->front;
    
}
// void display the queue;
void display(Queue* queue){
    if(isEmpty(queue)){
        printf(" queuse is an empty cannot to show anything" );
return ;}
    for (int i = queue->front; i <=queue->rear; i++)
    {
    printf("%d ",queue->items[i]);
    }
    

}

int main()
{
    Queue* queue=createQueue();
    enqueue(queue,10);printf("\n");
    enqueue(queue,20);printf("\n");
    enqueue(queue,10);printf("\n");
    enqueue(queue,20);printf("\n");
    enqueue(queue,10);printf("\n");
    enqueue(queue,20);printf("\n");
    enqueue(queue,30);printf("\n");
    enqueue(queue,40);printf("\n");
    display(queue);printf("\n");
    printf("front element of the queue: %d\n",peak(queue));printf("\n");
    dequeue(queue);printf("\n");
    display(queue);printf("\n");
    printf("size of queue%d",size(queue)+1); printf("\n");
     dequeue(queue);

     printf("\n");
         printf("size of queue%d",size(queue)+1);
         if (isEmpty(queue))
         {
            printf(" empty");

         }
         else printf(" not  empty");
         if(isFull(queue)){
            printf(" printf  queue is ");

         }
         display(queue);
              printf("\n");    printf(" first eleemnt of queue is the %d",peak(queue));

     printf("\n");

         printf(" last eleemnt of queue is the %d",end(queue));

    return 0;
}

    
