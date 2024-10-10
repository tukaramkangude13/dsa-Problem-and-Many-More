#include<iostream>
using namespace std;

class Stack {
public:
    int *arr;
    int top1;
    int top2;
    int size;

    // Constructor
    Stack(int size) {
        this->size = size;
        arr = new int[size];
        top1 = -1;        // Stack 1 starts from the left
        top2 = size;      // Stack 2 starts from the right
    }

    // Function to push into Stack 1
    void push1(int data) {
        if (top2 - top1 == 1) {
            cout << "Stack is overflow1" << endl;
        } else {
            top1++;
            arr[top1] = data;
        }
    }

    // Function to pop from Stack 1
    void pop1() {
        if (top1 == -1) {
            cout << "Stack 1 is empty" << endl;
        } else {
            top1--;
        }
    }

    // Function to push into Stack 2
    void push2(int data) {
        if (top2 - top1 == 1) {
            cout << "Stack is overflow2" << endl;
        } else {
            top2--;
            arr[top2] = data;
        }
    }

    // Function to pop from Stack 2
    void pop2() {
        if (top2 == size) {
            cout << "Stack 2 is empty" << endl;
        } else {
            top2++;
        }
    }

    // Destructor to release the allocated memory
  
};

int main() {
    Stack s(6);  // Fixed the typo here

    s.push1(10);
    s.print();
    s.push1(20);
    s.push1(30);
    s.push2(40);
    s.pop1();
    s.pop2();

    return 0;
}
