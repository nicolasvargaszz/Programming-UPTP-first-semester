#include<iostream>

using namespace std;

// class Node represents a single node in the queue
// It contains an integer data and a pointer to the next node
// The Node class is used to create linked nodes for the queue
// The Queue class manages the linked nodes and provides methods to manipulate the queue
// The Queue class provides methods to enqueue, dequeue, peek, display, and find elements in the queue
class Node
{
    public: 
    int data;
    Node* node;
    Node();
};

// Constructor initializes the data to 0 and node pointer to NULL
Node::Node()
{
    data = 0; 
    node = NULL;
}

// class Queue represents a queue data structure
class Queue
{
private:
    Node *front;
    Node *rear;
public:
    Queue();
    bool isEmpty();
    void enqueue(int value);
    int dequeue();
    void peek();
    void display();
    bool find(int value);
};

// Constructor initializes front and rear to NULL
Queue::Queue()
{
    front = NULL;
    rear = NULL;
}

// Method to check if the queue is empty or not.
bool Queue::isEmpty()
{
    return front == nullptr;
}

// Method to add an element to the end of the queue
void Queue::enqueue(int value)
{
    if(isEmpty())
    {
        cout << "Empty list, we are going to insert the first element" << endl;
        cout << "Inserting: " << value << endl;

        Node *newNode = new Node();
        newNode->data = value;
        newNode->node = NULL;
        front = newNode;
        rear = newNode;
    }
    else
    {
        Node *newNode = new Node();
        rear->node = newNode;
        newNode->node = NULL;
        newNode->data = value;
        rear = newNode;
        cout << "Inserting: " << value << endl;
    }
}

// Method to remove and return the front element of the queue
int Queue::dequeue()
{
    int x = 0;
    // First condition checks if the queue is empty
    if(isEmpty())
    {
        cout << "Cannot dequeue, the Queue is empty." << endl;
        return 0;
    }
    // Second condition checks if the queue has only one element
    else if(front == rear)
    {
        x = front->data;
        delete(front);
        front = NULL;
        rear = NULL;
        cout << "Dequeueing: " << x << endl;
        return x;
    }
    // Third condition if the queue has more than one element
    else
    {
        Node *ptr = front;
        front = front->node;
        x = ptr->data;
        delete(ptr);
        cout << "Dequeueing: " << x << endl;
        return x;
    }
}

// Display all elements in the queue
void Queue::display()
{
    if(isEmpty())
    {
        cout << "The queue is empty." << endl;
        return;
    }
    Node *current = front;
    cout << "Queue elements: ";
    while(current != NULL)
    {
        // Print the data of the current node
        cout << current->data << " ";
        // Move to the next node
        current = current->node;
    }
    cout << endl;
}

// Peek at the front element without removing it
void Queue::peek()
{
    if(isEmpty())
    {
        cout << "The queue is empty." << endl;
        return;
    }
    cout << "Front element: " << front->data << endl;
}

// Method to find a specific value in the queue
bool Queue::find(int value)
{
    if(isEmpty())
    {
        cout << "the queue is empty." << endl;
        return false;
    }
    Node *current = front;
    while(current != NULL)
    {
        if(current->data == value)
        {
            cout << "Element found" << endl;
            return true;
        }
        current = current->node;
    }
    cout << "Element not found" << endl;
    return false;
}

// main function serves as the entry point of the program
int main()
{
    // Instantiate a queue Q1 and test its methods
    Queue Q1;
    int choice, value;
    do {
        cout << "\n----- Queue Menu -----\n"
             << "1. Enqueue\n"
             << "2. Dequeue\n"
             << "3. Peek\n"
             << "4. Display\n"
             << "5. Find\n"
             << "0. Exit\n"
             << "Enter your choice: ";
        cin >> choice;
        
        switch (choice) {
            case 1:
                cout << "Enter value to enqueue: ";
                cin >> value;
                Q1.enqueue(value);
                Q1.display();
                break;
            case 2:
                Q1.dequeue();
                Q1.display();
                break;
            case 3:
                Q1.peek();
                Q1.display();
                break;
            case 4:
                Q1.display();
                break;
            case 5: 
                cout << "Enter the value you want to find: ";
                cin >> value;
                Q1.find(value);
                Q1.display();
                break;
            case 0:
                cout << "Exiting..." << endl;
                break;
            default:
                cout << "Invalid choice, try again." << endl;
        }
    } while (choice != 0);
    
    return 0;
}