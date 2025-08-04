#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>

#define MAX 100

// Stack structure definition
struct Stack {
    int items[MAX];
    int top;
};

// Function to initialize the stack
void initialize(struct Stack *s) {
    s->top = -1;
}

// Function to check if the stack is empty
int isEmpty(struct Stack *s) {
    return s->top == -1;
}

// Function to push an element onto the stack
void push(struct Stack *s, int value) {
    if (s->top == MAX - 1) {
        printf("Stack is full\n");
        return;
    }
    s->items[++(s->top)] = value;
}

// Function to pop an element from the stack
int pop(struct Stack *s) {
    if (isEmpty(s)) {
        printf("Stack is empty\n");
        return -1; // Return -1 to indicate stack is empty
    }
    return s->items[(s->top)--];
}

// Function to evaluate a postfix expression
int evaluatePostfix(char *expression) {
    struct Stack s;
    initialize(&s);

    for (int i = 0; expression[i] != '\0'; i++) {
        char current = expression[i];

        // If the current character is a digit, push it to the stack
        if (isdigit(current)) {
            push(&s, current - '0'); // Convert char to int
        } 
        // If the current character is an operator
        else if (current == '+' || current == '-' || current == '*' || current == '/') {
            int operand2 = pop(&s); // Pop the top two operands
            int operand1 = pop(&s);

            switch (current) {
                case '+':
                    push(&s, operand1 + operand2);
                    break;
                case '-':
                    push(&s, operand1 - operand2);
                    break;
                case '*':
                    push(&s, operand1 * operand2);
                    break;
                case '/':
                    if (operand2 != 0) {
                        push(&s, operand1 / operand2);
                    } else {
                        printf("Error: Division by zero\n");
                        return -1;
                    }
                    break;
                default:
                    printf("Error: Unknown operator %c\n", current);
                    return -1;
            }
        }
    }

    return pop(&s); // The result will be the last item on the stack
}

int main() {
    char expression[MAX];

    printf("Enter a postfix expression (e.g., 84*5+): ");
    fgets(expression, MAX, stdin); // Read input expression

    int result = evaluatePostfix(expression);
    if (result != -1) {
        printf("Result: %d\n", result);
    }

    return 0;
}
