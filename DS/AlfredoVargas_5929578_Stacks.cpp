#include <iostream>
using namespace std;

struct Node {
    int data;
    Node* next;
};

class Stack {
private:
    Node* topPtr; // Points to the top element of the stack

public:
    // Constructor
    Stack() : topPtr(nullptr) {}

    // Push: insert an element at the top
    void push(int value) {
        Node* newNode = new Node();
        newNode->data = value;
        newNode->next = topPtr;
        topPtr = newNode;
        cout << "Pushed " << value << " onto the stack.\n";
    }

    // Pop: remove the top element
    void pop() {
        if (isEmpty()) {
            cout << "Stack is empty. Cannot pop.\n";
            return;
        }
        Node* temp = topPtr;
        cout << "Popped " << topPtr->data << " from the stack.\n";
        topPtr = topPtr->next;
        delete temp;
    }

    // Check if the stack is empty
    bool isEmpty() {
        return (topPtr == nullptr);
    }

    // Display all elements
    void display() {
        if (isEmpty()) {
            cout << "Stack is empty.\n";
            return;
        }
        cout << "Stack elements (top to bottom):\n";
        Node* temp = topPtr;
        while (temp != nullptr) {
            cout << temp->data << "\n";
            temp = temp->next;
        }
    }

    // Find an element in the stack
    void find(int value) {
        Node* temp = topPtr;
        while (temp != nullptr) {
            if (temp->data == value) {
                cout << "Element " << value << " found in the stack.\n";
                return;
            }
            temp = temp->next;
        }
        cout << "Element " << value << " not found in the stack.\n";
    }
};

int main() {
    Stack myStack;
    int choice, value;

    do {
        cout << "\n----- Stack Menu -----\n"
             << "1. Push\n"
             << "2. Pop\n"
             << "3. Display\n"
             << "4. Find\n"
             << "0. Exit\n"
             << "Enter your choice: ";
        cin >> choice;

        switch (choice) {
            case 1:  // Push
                cout << "Enter value to push: ";
                cin >> value;
                myStack.push(value);
                break;
            case 2:  // Pop
                myStack.pop();
                break;
            case 3:  // Display
                myStack.display();
                break;
            case 4:  // Find
                cout << "Enter value to find: ";
                cin >> value;
                myStack.find(value);
                break;
            case 0:  // Exit
                cout << "Exiting...\n";
                break;
            default:
                cout << "Invalid option, try again.\n";
                break;
        }
    } while (choice != 0);

    return 0;
}