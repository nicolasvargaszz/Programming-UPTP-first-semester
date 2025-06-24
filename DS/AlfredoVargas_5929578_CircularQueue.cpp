// #include<iostream>

// using namespace std;

// #define MAX 10

// class CircularQueue
// {
// private:
//     int arr[MAX];
//     int front;
//     int rear;
//     int count;
// public: 
//     CircularQueue() : front(0), rear(0), count(0) {} // Constructor to initialize the circular queue

//     // function to check if the queue is empty
//     bool isEmpty(){
//         return front == -1 && rear == -1;
//     }
//     // function to check if the queue is full
//     bool isFull(){
//         return (rear + 1) % MAX == front;
//     }
    
//     //function to add an element into the queue

//     void enqueue(int value)
//     {
//         if(isFull())
//         {
//             cout << "Queue is full. Cannot insert any element." << endl;
//             return;
//         }
//         arr[rear] = value;
//         rear = (rear + 1) % MAX; // Circular increment
//         count++;
//         cout << "Enqueued: " << value << endl;   
//     }
//     // function to dequeue an element from the queue
//     void dequeue()
//     {
//         if(isEmpty())
//         {
//             cout << "The queue is empty, cannot dequeue." << endl;
//             return;
//         }
//         cout << "Dequeued" << arr[front] << endl;
//         front = (front + 1) % MAX; // Circular increment
//         count--;
//         if(count == 0) // Reset the queue if it becomes empty
//         {
//             front = rear = 0;
//         }
//     }
//         void display()
//         {
//             if(isEmpty())
//             {
//                 cout << "The queue is empty." << endl;
//                 return;
//             }
//             cout << "Queue elements: " << endl;
//             int index = front;
//             for(int i = 0; i < count; i++)
//             {
//                 cout << arr[index] << " ";
//                 index = (index + 1) % MAX;
//             }
//             cout << endl;
//         }
// };

// int main()
// {
//     CircularQueue cq; // Create a circular queue object
//     int choice, value;
//     do
//     {
//         cout << "Circular Queue MENU " << endl;
//         cout << "1. Enqueue" << endl;
//         cout << "2. Dequeue" << endl;
//         cout << "3. Display" << endl;
//         cout << "0. Exit" << endl;
//         cout << "Enter your Choice: "; 
//         cin >> choice;
//         switch(choice)
//         {
//             case 1: 
//                 cout << "Enter the value to enqueue: ";
//                 cin >> value;
//                 cq.enqueue(value);
//                 break;
//             case 2:
//                 cq.dequeue();
//                 break;
//             case 3:
//                 cq.display();
//                 break;
//             case 0:
//                 cout << "Exiting the program." << endl;
//                 break;
//             default:
//                 cout << "Invalid choice. Please try again." << endl;
//         }
//     }while (choice != 0);
    
//     cout << "Thank you for using the Circular Queue program!" << endl;
//     return 0;
// }


//implementations of a circular queue using linked list implementation.


#include <iostream>
using namespace std;

// Node structure for circular linked list
struct Node {
    int data;
    Node* next;
    Node(int val) : data(val), next(nullptr) {}
};

class CircularQueue {
private:
    Node* rear; // Points to the last node (rear)
    int count;  // Number of elements

public:
    CircularQueue() : rear(nullptr), count(0) {}

    // Check if the queue is empty
    bool isEmpty() {
        return rear == nullptr;
    }

    // Enqueue: Insert at rear
    void enqueue(int value) {
        Node* newNode = new Node(value);
        if (isEmpty()) {
            rear = newNode;
            rear->next = rear; // Points to itself
        } else {
            newNode->next = rear->next; // Point to front
            rear->next = newNode;
            rear = newNode;
        }
        count++;
        cout << "Enqueued: " << value << endl;
    }

    // Dequeue: Remove from front
    void dequeue() {
        if (isEmpty()) {
            cout << "The queue is empty, cannot dequeue." << endl;
            return;
        }
        Node* front = rear->next;
        int value = front->data;
        if (rear == front) { // Only one node
            delete front;
            rear = nullptr;
        } else {
            rear->next = front->next;
            delete front;
        }
        count--;
        cout << "Dequeued: " << value << endl;
    }

    // Display all elements
    void display() {
        if (isEmpty()) {
            cout << "The queue is empty." << endl;
            return;
        }
        cout << "Queue elements: ";
        Node* temp = rear->next; // Start from front
        do {
            cout << temp->data << " ";
            temp = temp->next;
        } while (temp != rear->next);
        cout << endl;
    }
};

int main() {
    CircularQueue cq;
    int choice, value;
    do {
        cout << "Circular Linked Queue MENU\n";
        cout << "1. Enqueue\n";
        cout << "2. Dequeue\n";
        cout << "3. Display\n";
        cout << "0. Exit\n";
        cout << "Enter your Choice: ";
        cin >> choice;
        switch (choice) {
            case 1:
                cout << "Enter the value to enqueue: ";
                cin >> value;
                cq.enqueue(value);
                break;
            case 2:
                cq.dequeue();
                break;
            case 3:
                cq.display();
                break;
            case 0:
                cout << "Exiting the program." << endl;
                break;
            default:
                cout << "Invalid choice. Please try again." << endl;
        }
    } while (choice != 0);

    cout << "Thank you for using the Circular Linked Queue program!" << endl;
    return 0;
}