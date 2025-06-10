#include <iostream>
using namespace std;

// Node structure for a singly linked list
struct Node {
    int data;
    Node* next;
    // "previous" isn't used by a singly linked list, so you can remove it if not needed.
    // Node* previous;
};

class singlyLinkedList {
private:
    Node* head;

    // Private helper to display the list in reverse using recursion
    void displayReverseHelper(Node* current) {
        if (current == nullptr) {
            return;
        }
        displayReverseHelper(current->next);
        cout << current->data << " ";
    }

public:
    // Constructor
    singlyLinkedList() : head(nullptr) {}

    // Insert a new node at the end
    void insert(int data) {
        Node* newNode = new Node();
        newNode->data = data;
        newNode->next = nullptr;

        if (head == nullptr) {
            head = newNode;
        } else {
            Node* temp = head;
            while (temp->next != nullptr) {
                temp = temp->next;
            }
            temp->next = newNode;
        }
    }

    // Display the list in normal order
    void display() {
        Node* temp = head;
        while (temp != nullptr) {
            cout << temp->data << " ";
            temp = temp->next;
        }
        cout << endl;
    }

    // Public function to display the list in reverse order
    void displayReverse() {
        displayReverseHelper(head);
        cout << endl;
    }
};

int main() {
    singlyLinkedList Mylist; 
    Mylist.insert(12);
    Mylist.insert(10);
    Mylist.insert(8);
    Mylist.insert(6);
    Mylist.insert(4);
    Mylist.insert(2);

    cout << "The elements of the list are: ";
    Mylist.display();

    cout << "The elements of the list in reverse order are: ";
    // No need to access 'Mylist.head' externally
    Mylist.displayReverse();

    return 0;
}