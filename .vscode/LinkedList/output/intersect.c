#include <stdio.h>
#include <stdlib.h>

// Node structure for linked list
struct Node {
    int data;
    struct Node* next;
};

// Function to create a new node
struct Node* createNode(int data) {
    struct Node* newNode = (struct Node*)malloc(sizeof(struct Node));
    newNode->data = data;
    newNode->next = NULL;
    return newNode;
}

// Function to append a node at the end of a list
struct Node* append(struct Node* head, int data) {
    struct Node* newNode = createNode(data);
    if (head == NULL) {
        return newNode;
    }

    struct Node* temp = head;
    while (temp->next != NULL) {
        temp = temp->next;
    }
    temp->next = newNode;
    return head;
}

// Function to display a linked list
void display(struct Node* head) {
    struct Node* temp = head;
    while (temp != NULL) {
        printf("%d -> ", temp->data);
        temp = temp->next;
    }
    printf("NULL\n");
}

// Function to find the intersection of two linked lists
struct Node* findIntersection(struct Node* head1, struct Node* head2) {
    struct Node* intersect = NULL; // The list to store intersection nodes
    struct Node* temp1 = head1;
    struct Node* temp2 = head2;

    while (temp1 != NULL) {
        temp2 = head2;
        while (temp2 != NULL) {
            if (temp1->data == temp2->data) {
                // Append the common node to the intersection list
                intersect = append(intersect, temp1->data);
                break; // Break the inner loop if a match is found
            }
            temp2 = temp2->next;
        }
        temp1 = temp1->next;
    }

    return intersect;
}

// Main function
int main() {
    struct Node* head1 = NULL;
    struct Node* head2 = NULL;
    struct Node* intersection = NULL;

    // Create first linked list
    head1 = append(head1, 10);
    head1 = append(head1, 20);
    head1 = append(head1, 30);
    head1 = append(head1, 40);
    head1 = append(head1, 50);

    // Create second linked list
    head2 = append(head2, 15);
    head2 = append(head2, 20);
    head2 = append(head2, 30);
    head2 = append(head2, 45);
    head2 = append(head2, 50);

    // Display the first linked list
    printf("List 1: ");
    display(head1);

    // Display the second linked list
    printf("List 2: ");
    display(head2);

    // Find and display the intersection of the two lists
    intersection = findIntersection(head1, head2);
    printf("Intersection of List 1 and List 2: ");
    display(intersection);

    return 0;
}
