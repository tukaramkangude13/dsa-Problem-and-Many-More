#include <stdio.h>
#include <stdlib.h>

// Define the structure of a Node
struct Node {
    int value;
    struct Node* next;
};

// Function to create a new node
struct Node* createnode(int value) {
    struct Node* newnode = (struct Node*)malloc(sizeof(struct Node));
    newnode->value = value;
    newnode->next = NULL;
    return newnode;
}

// Function to insert a node at the end of the list
struct Node* insert(struct Node* head, int value) {
    struct Node* newnode = createnode(value);
    if (head == NULL) {
        return newnode;  // New node becomes the head
    }
    struct Node* temp = head;
    while (temp->next != NULL) {
        temp = temp->next;  // Traverse to the last node
    }
    temp->next = newnode;  // Link the new node at the end
    return head;
}

// Function to display the linked list
void display(struct Node* head) {
    if (head == NULL) {
        printf("The linked list is empty\n");
        return;
    }
    struct Node* temp = head;
    while (temp != NULL) {
        printf("%d -> ", temp->value);
        temp = temp->next;
    }
    printf("NULL\n");
}

// Function to search for a value in the list
void search(struct Node* head, int value) {
    if (head == NULL) {
        printf("The linked list is empty\n");
        return;
    }
    struct Node* temp = head;
    while (temp != NULL) {
        if (temp->value == value) {
            printf("%d is found in the linked list\n", value);
            return;
        }
        temp = temp->next;
    }
    printf("%d is not present in the linked list\n", value);
}

// Function to delete a specific node from the list
struct Node* delete(struct Node* head, int value) {
    if (head == NULL) {
        printf("Nothing to delete\n");
        return head;
    }

    // Special case: if the node to be deleted is the head
    if (head->value == value) {
        struct Node* temp = head;
        head = head->next;  // Update head to the next node
        free(temp);         // Free the old head node
        return head;        // Return new head
    }

    struct Node* temp = head;

    // Traverse the list to find the node to delete
    while (temp->next != NULL) {
        if (temp->next->value == value) {
            struct Node* nodetodelete = temp->next;
            temp->next = temp->next->next;  // Bypass the node to delete
            free(nodetodelete);              // Free the deleted node
            return head;                     // Return unchanged head
        }
        temp = temp->next;
    }

    // If the value was not found
    printf("%d is not present in the linked list\n", value);
    return head;  // Return unchanged head if value not found
}

// Main function to demonstrate linked list operations
int main() {
    struct Node* head = NULL;
    int choice, value;

    // Display menu
    printf("Menu:\n");
    printf("1. Insert a node\n");
    printf("2. Delete a node\n");
    printf("3. Search for a node\n");
    printf("4. Display the linked list\n");
    printf("5. Exit\n");

    // Get user input for choice
    while (1) {
        printf("Enter your choice: ");
        scanf("%d", &choice);

        switch (choice) {
            case 1:
                printf("Enter the value to insert: ");
                scanf("%d", &value);
                head = insert(head, value);
                break;

            case 2:
                printf("Enter the value to delete: ");
                scanf("%d", &value);
                head = delete(head, value);
                break;

            case 3:
                printf("Enter the value to search for: ");
                scanf("%d", &value);
                search(head, value);
                break;

            case 4:
                printf("The linked list is:\n");
                display(head);
                break;

            case 5:
                printf("Exiting the program.\n");
                // Free the linked list before exiting
                while (head != NULL) {
                    struct Node* temp = head;
                    head = head->next;
                    free(temp);
                }
                return 0;

            default:
                printf("Invalid choice! Please try again.\n");
        }
    }

    return 0;  // This line will never be reached
}
