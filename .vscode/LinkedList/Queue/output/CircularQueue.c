#include<stdio.h>
#include<stdlib.h>
#include<limits.h>
#define MAX 5
typedef struct Queue
{
int items[MAX];
int front;
int rear;
} Queue;

Queue* createqueue(){
    Queue* circularqueue=(Queue*)malloc(sizeof(Queue));
   
    circularqueue->front=-1;
    circularqueue->rear=-1;
    return circularqueue;
}
int isEmpty(Queue* circularqueue){
    return circularqueue->front==-1|| circularqueue->front>circularqueue->rear;

    
}
int isFull(Queue* circularqueue){
  return (circularqueue->rear + 1 ==MAX && circularqueue->front==0 )|| (circularqueue->front==circularqueue->rear+1);
}


int totlasize(Queue* circularqueue)
{
    if (isEmpty(circularqueue))
    {
    printf(" queue is empty");
    return;
    }
    return circularqueue->rear-circularqueue->front+1;
    
  }
int  enqueue(Queue* circularqueue, int value){
    if(isFull(circularqueue)){
        printf(" queee is fulll");
    }
    else if (circularqueue->front==-1)
    {
           circularqueue->rear= circularqueue->front=0;
              circularqueue->items[circularqueue->rear]=value;
    }
    else if (circularqueue->rear==MAX-1 && circularqueue->front !=0)

    {
        circularqueue->rear=0;
        circularqueue->items[circularqueue->rear]=value;
    }
    
  else  
  {
    circularqueue->rear++;
    circularqueue->items[circularqueue->rear]=value;
  }
  
 

    
}
int dequeue(Queue* circularqueue){
    if (isEmpty(circularqueue))
    {
    printf(" queue is empty");
    }
    int new=circularqueue->items[circularqueue->front];


   if (circularqueue->front==circularqueue->rear)
   {
    circularqueue->front=circularqueue->rear=-1;
   }
   
    // circular nature 

     else if(circularqueue->front==MAX-1)
     {
    circularqueue->front=0;
     }
     else{
        circularqueue->front++;
     }
     return new;
    
}
int peek(Queue* circularqueue)
{
    if(isEmpty(circularqueue)){
        printf(" queue is an empty");
return INT_MAX;
    }
   
   
    return circularqueue->items[circularqueue->front];
   }

void display(Queue* circularqueue){
    if (isEmpty(circularqueue)){
        printf(" queue is empty ");
    return ;
    }
    int i=circularqueue->front;
    while (i!=circularqueue->rear)
    {
    printf(" %d  ",circularqueue->items[i]);
    if (i==MAX-1)
    {
    i=0;
    }
    else  
    {
    i++;
    }

    
    
    }
    printf(" %d  ",circularqueue->items[circularqueue->rear]);

    
}

int main()
{


 Queue* circularqueue = createqueue(); // Create the circular queue

    // Perform enqueue operations
 
    enqueue(circularqueue, 40);
    enqueue(circularqueue, 50); // This should fill the queue

    // Display the queue
    display(circularqueue);

    // Peek at the front element
    printf("Peek of the queue: %d\n", peek(circularqueue));

    // Dequeue some elements
    dequeue(circularqueue);
    dequeue(circularqueue);

    // Display the queue again
    display(circularqueue);

    // Check if the queue is empty
    if (isEmpty(circularqueue)) {
        printf("Queue is empty.\n");
    } else {
        printf("Queue is not empty.\n");
    }

    // Check if the queue is full
    if (isFull(circularqueue)) {
        printf("Queue is full.\n");
    } else {
        printf("Queue is not full.\n");
    }

    // Enqueue more elements to test circular nature
    enqueue(circularqueue, 60);
    enqueue(circularqueue, 70);
    enqueue(circularqueue, 70);
    enqueue(circularqueue, 70);

    // Final display of the queue
    display(circularqueue);
    display(circularqueue);
    display(circularqueue);

    // Clean up (free memory)
    free(circularqueue);
    
    return 0;

}