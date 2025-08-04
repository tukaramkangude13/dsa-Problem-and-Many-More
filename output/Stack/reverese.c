#include <stdio.h>
#include <stdlib.h>

#define MAX 5

struct stack {
    int items[MAX];
    int top;
};

// Function to initialize the stack
void initialize(struct stack *s) {
    s->top = -1;
}

// Function to check if the stack is full
int isFull(struct stack *s) {
    return s->top == MAX - 1;
}

// Function to check if the stack is empty
int isEmpty(struct stack *s) {
    return s->top == -1;
}

// Function to push an element onto the stack
void push(struct stack *s, int value) {
    if (isFull(s)) {
        printf("Stack is full\n");
        return;
    }
    s->items[++(s->top)] = value;
}

// Function to pop an element from the stack
void pop(struct stack *s) {
    if (isEmpty(s)) {
        printf("Stack is empty\n");
        return;
    }
    int poppedValue = s->items[(s->top)--];
}

// Function to peek at the top element of the stack
void top(struct stack *s) {
    if (isEmpty(s)) {
        printf("Stack is empty\n");
        return;
    }
    printf("Top of stack: %d\n", s->items[s->top]);
}

// Function to display the elements of the stack
void display(struct stack *s) {
    if (isEmpty(s)) {
        printf("Stack is empty\n");
        return;
    }
    printf("Stack elements: ");
    for (int i = s->top; i >= 0; i--) {
        printf("%d ", s->items[i]);
    }
    printf("\n");
}

// Function to reverse the stack
void reverse(struct stack *s) {
    if (isEmpty(s)) {
        printf("Stack is empty. Cannot reverse.\n");
        return;
    }

    struct stack temp;
    initialize(&temp);

    // Transfer elements from original stack to temporary stack
    while (!isEmpty(s)) {
        push(&temp, s->items[s->top]);
        pop(s);
    }

    // Transfer elements back to the original stack
    while (!isEmpty(&temp)) {
        push(s, temp.items[temp.top]);
        printf("%d ",temp.items[temp.top]);
        pop(&temp);
    }
}

int main() {
    struct stack s;
    initialize(&s);
    
    push(&s, 10);
    push(&s, 20);
    push(&s, 30);
    push(&s, 40);
    
    printf("Before the reverse:\n");
    display(&s);

    reverse(&s);
    
    printf("After the reverse:\n");
    display(&s);

    return 0;
}
