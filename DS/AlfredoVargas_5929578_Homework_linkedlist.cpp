#include<iostream>

using namespace std;

struct Node
{
    int data; 
    Node* next;
};

class SinglyLoinkedList
{
private:
    Node* head;
public:
    void insertAtBeginning(int value)
    {
        Node* newNode = new Node();
        newNode->data = value;
        newNode->next = head;
        head = newNode;
    }
    void insertAtPosition(int value, int position)
    {
        // First, create a brand-new node
        Node* newNode = new Node();
        newNode->data = value;

        // If the desired position is 0, we simply insert at the beginning:
        if (position == 0)
        {
            // 1. Make the new node point to the current head
            newNode->next = head;

            // 2. Update 'head' to become the new node
            head = newNode;
        }
        else
        {
            // 1. Start from the head of the list
            Node* current = head;

            // 2. Move 'current' forward until just before the position where
            //    we want to insert or until 'current' becomes nullptr.
            //    The loop iterates (position - 1) times.
            for (int i = 0; i < position - 1 && current != nullptr; i++)
            {
                current = current->next;
            }

            // 3. Check if we haven’t run out of the list
            if (current != nullptr)
            {
                // 4. Make the new node point to the node that currently
                //    follows 'current'
                newNode->next = current->next;

                // 5. Update 'current->next' to point to the new node
                //    effectively inserting the new node at 'position'
                current->next = newNode;
            }
            else
            {
                // If 'current' is nullptr, 'position' was out of bounds
                cout << "Position out of bounds." << endl;
                delete newNode; // Release the memory we just allocated
            }
        }
    }

    void insertAtEnd(int value)
    {
        Node* newNode = new Node();
        newNode->data = value;
        newNode->next = nullptr;

        if (head == nullptr) // If the list is empty
        {
            head = newNode;
        }
        else
        {
            Node* current = head;
            while (current->next != nullptr) // Traverse to the end of the list
            {
                current = current->next;
            }
            current->next = newNode; // Link the last node to the new node
        }
    }
    void deleteAtPosition(int position)
    {
        if (head == nullptr) // If the list is empty
        {
            cout << "List is empty. Cannot delete." << endl;
            return;
        }

        Node* temp = head;

        // If we want to delete the first node
        if (position == 0)
        {
            head = temp->next; // Move head to the next node
            delete temp; // Free memory of the old head
            return;
        }

        // Find the node just before the one we want to delete
        for (int i = 0; temp != nullptr && i < position - 1; i++)
        {
            temp = temp->next;
        }

        // If 'temp' is nullptr, then position is out of bounds
        if (temp == nullptr || temp->next == nullptr)
        {
            cout << "Position out of bounds. Cannot delete." << endl;
            return;
        }

        // Node 'temp->next' is the node to be deleted
        Node* nextNode = temp->next->next; // Store the next node
        delete temp->next; // Free memory of the node to be deleted
        temp->next = nextNode; // Link to the next node
    }
    void printList()
    {
        Node* current = head;
        while (current != nullptr)
        {
            cout << current->data << " -> ";
            current = current->next;
        }
        cout << "nullptr" << endl; // Indicate the end of the list
    }
    void findElement(int value)
    {
        Node* current = head;
        int position = 0;
        while (current != nullptr)
        {
            if (current->data == value)
            {
                cout << "Element " << value << " found at position: " << position << endl;
                return;
            }
            current = current->next;
            position++;
        }
        cout << "Element " << value << " not found in the list." << endl;
    }

};


int main()
{
    SinglyLoinkedList list;
    list.insertAtBeginning(10);
    list.insertAtBeginning(20);
    list.insertAtEnd(30);
    list.insertAtPosition(25, 2);
    list.printList();
    list.deleteAtPosition(1);
    list.printList();
    list.findElement(25);
    list.findElement(40); // Element not in the list
    return 0;
}