#include <iostream>

using namespace std;

// Node structure
struct Node {
    char data;
    Node* next;

    Node(char val) : data(val), next(nullptr) {}
};

// LinkedList class
class LinkedList {
public:
    Node* head;

    LinkedList() : head(nullptr) {}

    // Insert a node at the end of the list
    void insertAtEnd(char data) {
        Node* newNode = new Node(data);
        if (head == nullptr) {
            head = newNode;
            return;
        }
        Node* temp = head;
        while (temp->next != nullptr) {
            temp = temp->next;
        }
        temp->next = newNode;
    }

    // Insert a node at the beginning of the list
    void insertAtBeginning(char data) {
        Node* newNode = new Node(data);
        newNode->next = head;
        head = newNode;
    }

    // Insert a node at a specific position (0-indexed)
    void insertAtPosition(char data, int position) {
        if (position < 0) {
            cout << "Invalid position!" << endl;
            return;
        }
        if (position == 0) {
            insertAtBeginning(data);
            return;
        }

        Node* newNode = new Node(data);
        Node* temp = head;
        int currentPosition = 0;

        // Traverse to the node just before the desired position
        while (temp != nullptr && currentPosition < position - 1) {
            temp = temp->next;
            currentPosition++;
        }

        if (temp == nullptr) { // Position is out of bounds (greater than list size)
            cout << "Position out of bounds. Cannot insert." << endl;
            delete newNode; // Avoid memory leak
            return;
        }

        newNode->next = temp->next;
        temp->next = newNode;
    }

    // Delete a node at a specific position (0-indexed)
    void deleteAtPosition(int position) {
        if (head == nullptr) {
            cout << "List is empty. Cannot delete." << endl;
            return;
        }
        if (position < 0) {
            cout << "Invalid position!" << endl;
            return;
        }

        Node* temp = head;
        if (position == 0) {
            head = head->next;
            delete temp;
            return;
        }

        Node* prev = nullptr;
        int currentPosition = 0;
        // Traverse to the node at the desired position
        while (temp != nullptr && currentPosition < position) {
            prev = temp;
            temp = temp->next;
            currentPosition++;
        }

        if (temp == nullptr) { // Position is out of bounds
            cout << "Position out of bounds. Cannot delete." << endl;
            return;
        }

        prev->next = temp->next;
        delete temp;
    }

    // Display the linked list
    void display() {
        if (head == nullptr) {
            cout << "List is empty." << endl;
            return;
        }
        Node* temp = head;
        while (temp != nullptr) {
            cout << temp->data << " -> ";
            temp = temp->next;
        }
        cout << "nullptr" << endl;
    }

    // Destructor to free memory
    ~LinkedList() {
        Node* current = head;
        Node* nextNode = nullptr;
        while (current != nullptr) {
            nextNode = current->next;
            delete current;
            current = nextNode;
        }
        head = nullptr;
    }
};

int main() {
    LinkedList list;

    // 1. Create a linked list with the vowels.
    cout << "1. Initial list with vowels:" << endl;
    list.insertAtEnd('a');
    list.insertAtEnd('e');
    list.insertAtEnd('i');
    list.insertAtEnd('o');
    list.insertAtEnd('u');
    list.display();
    cout << "------------------------------------" << endl;

    // 2. Insert 'b' at the beginning.
    cout << "2. Insert 'b' at the beginning:" << endl;
    list.insertAtBeginning('b');
    list.display();
    cout << "------------------------------------" << endl;

    // 3. Insert 'z' at the end.
    cout << "3. Insert 'z' at the end:" << endl;
    list.insertAtEnd('z');
    list.display();
    cout << "------------------------------------" << endl;

    // 4. Insert 'm' at the fourth position (0-indexed position 3, between 'e' and 'i').
    // Current list: b -> a -> e -> i -> o -> u -> z
    // Positions:    0    1    2    3    4    5    6
    // "fourth position" implies it becomes the new 4th element.
    // If 1-indexed: 1st=b, 2nd=a, 3rd=e. Insert m before i (current 4th).
    // This means inserting at 0-indexed position 3.
    cout << "4. Insert 'm' at the fourth position (index 3):" << endl;
    list.insertAtPosition('m', 3); // b(0) a(1) e(2) m(3) i(4) ...
    list.display();
    cout << "------------------------------------" << endl;

    // 5. Delete the node containing 'b' (position 0).
    // Current list: b -> a -> e -> m -> i -> o -> u -> z
    cout << "5. Delete 'b' (position 0):" << endl;
    list.deleteAtPosition(0);
    list.display();
    cout << "------------------------------------" << endl;

    // 6. Delete the node containing 'z' (now at the end).
    // Current list: a -> e -> m -> i -> o -> u -> z
    // Positions:    0    1    2    3    4    5    6
    // 'z' is at position 6.
    cout << "6. Delete 'z' (position 6):" << endl;
    list.deleteAtPosition(6);
    list.display();
    cout << "------------------------------------" << endl;

    // 7. Delete the node containing 'm' (find its new position).
    // Current list: a -> e -> m -> i -> o -> u
    // Positions:    0    1    2    3    4    5
    // 'm' is at position 2.
    cout << "7. Delete 'm' (position 2):" << endl;
    list.deleteAtPosition(2);
    list.display();
    cout << "------------------------------------" << endl;

    return 0;
}