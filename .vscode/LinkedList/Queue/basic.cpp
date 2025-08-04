#include <stdio.h>
#include <stdlib.h>
#include <limits.h>

// Node structure for linked list
typedef struct Node {
    int data;
    struct Node* next;
} Node;

// Queue structure
typedef struct Queue {
    Node* front;
    Node* rear;
} Queue;

// Function to create a queue and initialize its properties
Queue* createQueue() {
    Queue* queue = (Queue*)malloc(sizeof(Queue));
    queue->front = NULL;
    queue->rear = NULL;
    return queue;
}

// Check if the queue is empty
int isEmpty(Queue* queue) {
    return queue->front == NULL;
}

// Enqueue an element into the queue
void enqueue(Queue* queue, int value) {
    Node* newNode = (Node*)malloc(sizeof(Node));
    newNode->data = value;
    newNode->next = NULL;

    if (isEmpty(queue)) {
        queue->front = newNode; // First element
    } else {
        queue->rear->next = newNode; // Link the new node
    }
    queue->rear = newNode; // Update rear to the new node
    printf("%d enqueued to queue.\n", value);
}

// Dequeue an element from the queue
int dequeue(Queue* queue) {
    if (isEmpty(queue)) {
        printf("Queue is empty. Cannot dequeue.\n");
        return INT_MIN; // Return an indicator for empty queue
    }

    Node* temp = queue->front; // Get the front node
    int dequeuedValue = temp->data;
    queue->front = queue->front->next; // Move front to the next node

    if (queue->front == NULL) {
        queue->rear = NULL; // Reset rear if the queue is now empty
    }

    free(temp); // Free memory of dequeued node
    printf("%d dequeued from queue.\n", dequeuedValue);
    return dequeuedValue;
}

// Peek at the front element of the queue without removing it
int peek(Queue* queue) {
    if (isEmpty(queue)) {
        printf("Queue is empty. Nothing to peek.\n");
        return INT_MIN; // Return an indicator for empty queue
    }
    return queue->front->data;
}

// Display the elements of the queue
void display(Queue* queue) {
    if (isEmpty(queue)) {
        printf("Queue is empty.\n");
        return;
    }
    printf("Queue elements: ");
    Node* current = queue->front;
    while (current != NULL) {
        printf("%d ", current->data);
        current = current->next;
    }
    printf("\n");
}

// Main function to test the queue operations
int main() {
    Queue* queue = createQueue();

    enqueue(queue, 10);
    enqueue(queue, 20);
    enqueue(queue, 30);
    display(queue); // Display queue elements

    printf("Front element: %d\n", peek(queue)); // Peek at front element

    dequeue(queue);
    display(queue); // Display queue elements after dequeue

    enqueue(queue, 40);
    enqueue(queue, 50);
    display(queue); // Display queue elements after enqueue

    dequeue(queue);
    dequeue(queue);
    display(queue); // Display queue elements after all dequeues

    // Clean up
    while (!isEmpty(queue)) {
        dequeue(queue); // Dequeue remaining elements
    }
    free(queue);
    return 0;
}
