#include <iostream>
using namespace std;

class node {
public:
    int data;
    node* next;
    node() : data(0), next(NULL) {}
    node(int data) : data(data), next(NULL) {}
};

void insertAtHead(node* &head, node* &tail, int data) {
    node* newnode = new node(data);
    if (head == NULL) {
        head = newnode;
        tail = newnode;
    } else {
        newnode->next = head;
        head = newnode;
    }
}

void insertAtTail(node* &head, node* &tail, int data) {
    node* newnode = new node(data);
    if (head == NULL) {
        head = newnode;
        tail = newnode;
    } else {
        tail->next = newnode;
        tail = newnode;
    }
}

void print(node* head) {
    node* temp = head;
    while (temp != NULL) {
        cout << temp->data << " ";
        temp = temp->next;
    }

}

int findLength(node* &head) {
    int len = 0;
    node* temp = head;
    while (temp != NULL) {
        temp = temp->next;
        len++;
    }
    return len;
}

void deleteNode(int position, node* &head, node* &tail) {
    if (head == NULL) {
       
        return head;
    }

   
listNode* temp=head;
while (head!=NULL)
{

 if (head->data == val ) {
        node* temp = head;
        head = head->next;
        temp->next = NULL;
        delete temp;
        if (head == NULL) {
            tail = NULL;  // List is now empty
        }
        return;
}


        

            }

    int len = findLength(head);
    if (position > len) {
        cout << "Position is greater than the length of the list." << endl;
        return;
    }

    node* prev = head;
    for (int i = 1; i < position - 1; i++) {
        prev = prev->next;
    }

    node* temp = prev->next;
    prev->next = temp->next;
    if (temp == tail) {
        tail = prev;  // Update tail if deleting the last node
    }
    delete temp;
    // deleting the middle name 
    // step 1 : find prev

}

int main() {
    node* head = NULL;
    node* tail = NULL;

    insertAtHead(head, tail, 20);
    insertAtHead(head, tail, 50);
    insertAtHead(head, tail, 60);
    insertAtHead(head, tail, 90);
    insertAtHead(head, tail, 77);
    
    print(head);
    cout << endl;

    deleteNode(8, head, tail);
    print(head);
    cout << endl;

    return 0;
}
