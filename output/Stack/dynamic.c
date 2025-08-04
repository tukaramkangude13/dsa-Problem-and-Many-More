#include <stdio.h>
#include <stdlib.h>

#define SIZE 5  // Define the size of the stack

// Define the structure of the stack
struct Stack {
    int arr[SIZE];  // Fixed-size array for stack elements
    int top;        // Index of the top element in the stack
};

// Function to create and initialize a stack
struct Stack* createStack() {
    struct Stack* stack = (struct Stack*)malloc(sizeof(struct Stack));  // Allocate memory for the stack
    stack->top = -1;  // Initialize the top to -1 (indicating stack is empty)
    return stack;  // Return the created stack
}

// Function to check if the stack is full
int isFull(struct Stack* stack) {
    return stack->top == SIZE - 1;  // Stack is full if top is at the last index
}

// Function to check if the stack is empty
int isEmpty(struct Stack* stack) {
    return stack->top == -1;  // Stack is empty if top is -1
}

// Function to push an element onto the stack
void push(struct Stack* stack, int value) {
    if (isFull(stack)) {
        printf("Stack Overflow! Cannot push %d\n", value);
        return;
    }
    stack->arr[++stack->top] = value;  // Increment top and add the value to the stack
    printf("Pushed %d onto the stack\n", value);
}

// Function to pop an element from the stack
int pop(struct Stack* stack) {
    if (isEmpty(stack)) {
        printf("Stack Underflow! Cannot pop\n");
        return -1;  // Return an invalid value if stack is empty
    }
    return stack->arr[stack->top--];  // Return the top element and decrement top
}

// Function to peek at the top element without removing it
int peek(struct Stack* stack) {
    if (isEmpty(stack)) {
        printf("Stack is empty! Cannot peek\n");
        return -1;  // Return an invalid value if stack is empty
    }
    return stack->arr[stack->top];  // Return the top element
}

// Function to display the elements of the stack
void display(struct Stack* stack) {
    if (isEmpty(stack)) {
        printf("Stack is empty! Nothing to display\n");
        return;
    }
    printf("Stack elements: ");
    for (int i = 0; i <= stack->top; i++) {
        printf("%d ", stack->arr[i]);
    }
    printf("\n");
}

int main() {
    struct Stack* stack = createStack();  // Create the stack

    // Demonstrate stack operations
    push(stack, 10);  // Push 10
    push(stack, 20);  // Push 20
    push(stack, 30);  // Push 30
    push(stack, 40);  // Push 40
    push(stack, 50);  // Push 50
    push(stack, 60);  // Overflow example

    display(stack);  // Display the stack

    printf("Top element is: %d\n", peek(stack));  // Peek the top element

    printf("Popped element: %d\n", pop(stack));  // Pop an element
    display(stack);  // Display the stack after popping

    printf("Top element is now: %d\n", peek(stack));  // Peek after popping

    return 0;
}
