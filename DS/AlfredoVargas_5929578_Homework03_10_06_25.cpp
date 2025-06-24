// //code number 1.

// #include<iostream>

// using namespace std;

// class Stack
// {
// private:
//     int* arr;
//     int top;
//     int capacity;   

// public:
//     Stack(int size = 10) : capacity(size), top(-1)
//     {
//         arr = new int[capacity];
//     }

//     ~Stack()
//     {
//         delete[] arr;
//     }

//     void push(int x)
//     {
//         if (top == capacity - 1)
//         {
//             cout << "Stack overflow\n";
//             return;
//         }
//         arr[++top] = x;
//     }

//     int pop()
//     {
//         if (top == -1)
//         {
//             cout << "Stack underflow\n";
//             return -1; // Indicating stack is empty
//         }
//         return arr[top--];
//     }

//     bool isEmpty() const
//     {
//         return top == -1;
//     }

//     int peek() const
//     {
//         if (top == -1)
//         {
//             cout << "Stack is empty\n";
//             return -1; // Indicating stack is empty
//         }
//         return arr[top];
//     }
//     void display() const
//     {
//         if (isEmpty())
//         {
//             cout << "Stack is empty\n";
//             return;
//         }
//         cout << "Stack elements: ";
//         for (int i = 0; i <= top; ++i)
//         {
//             cout << arr[i] << " ";
//         }
//         cout << endl;
//     }
// };

// int main()
// {
//     Stack stack(5); // Create a stack of capacity 5
//     stack.push(10);
//     stack.push(20);
//     stack.push(30);
//     stack.display(); // Display stack elements
//     cout << "Top element is: " << stack.peek() << endl; // Peek at the top element
//     cout << "Popped element: " << stack.pop() << endl; // Pop the top element
//     stack.display(); // Display stack elements after pop
//     stack.push(40);
//     stack.push(50);
//     stack.push(60); // This will cause stack overflow
//     return 0;
// }

// code 2
// #include <iostream>
// using namespace std;

// // Node structure for a linked-list-based stack
// struct Node {
//     int data;
//     Node* next;
    
//     // Constructor
//     Node(int val) : data(val), next(nullptr) {}
// };

// // LinkedList-based Stack
// class LinkedStack {
// private:
//     Node* top;  // Points to the top element of the stack

//     public:
//     // Constructor
//     LinkedStack() : top(nullptr) {}

//     // Push: Insert an element at the top of the stack
//     void push(int value) {
//         Node* newNode = new Node(value);
//         newNode->next = top;
//         top = newNode;
//         cout << "Pushed " << value << " onto the stack.\n";
//     }

//     // Pop: Remove the top element and return its value
//     int pop() {
//         if (isEmpty()) {
//             cout << "Stack underflow (empty). Cannot pop.\n";
//             return -1; // Indicating stack is empty
//         }
//         Node* temp = top;
//         int poppedValue = temp->data;
//         top = top->next;
//         delete temp;
//         cout << "Popped " << poppedValue << " from the stack.\n";
//         return poppedValue;
//     }

//     // Check if the stack is empty
//     bool isEmpty() const {
//         return (top == nullptr);
//     }

//     // Display all elements in the stack (top to bottom)
//     void display() const {
//         if (isEmpty()) {
//             cout << "Stack is empty.\n";
//             return;
//         }
//         cout << "Current stack (top to bottom): ";
//         Node* temp = top;
//         while (temp != nullptr) {
//             cout << temp->data << " ";
//             temp = temp->next;
//         }
//         cout << endl;
//     }
// };

// int main() {
//     LinkedStack myStack;

//     // Perform at least 3 pushes
//     myStack.push(10);
//     myStack.push(20);
//     myStack.push(30);

//     // Perform 2 pops
//     myStack.pop();
//     myStack.pop();

//     // Display the final stack
//     myStack.display();

//     return 0;
// }




// code number 4:

// #include <iostream>
// using namespace std;

// // Node structure for a linked-list-based queue
// struct Node {
//     int data;
//     Node* next;

//     // Constructor
//     Node(int val) : data(val), next(nullptr) {}
// };

// // LinkedQueue class
// class LinkedQueue {
// private:
//     Node* front;   // Points to the first node in the queue
//     Node* rear;    // Points to the last node in the queue

// public:
//     // Constructor
//     LinkedQueue() : front(nullptr), rear(nullptr) {}

//     // Check if the queue is empty
//     bool isEmpty() const {
//         return (front == nullptr);
//     }

//     // Enqueue: Insert an element at the rear of the queue
//     void enqueue(int value) {
//         Node* newNode = new Node(value);

//         if (isEmpty()) {
//             front = newNode;
//             rear = newNode;
//         } else {
//             rear->next = newNode;
//             rear = newNode;
//         }

//         cout << "Enqueued: " << value << endl;
//     }

//     // Dequeue: Remove the front element and return its value
//     int dequeue() {
//         if (isEmpty()) {
//             cout << "Queue underflow (empty). Cannot dequeue." << endl;
//             return -1; // Indicating no valid data
//         }

//         Node* temp = front;
//         int value = temp->data;
//         front = front->next;

//         // If the queue becomes empty, rear must be set to nullptr
//         if (front == nullptr) {
//             rear = nullptr;
//         }

//         delete temp;
//         cout << "Dequeued: " << value << endl;
//         return value;
//     }

//     // Display all elements in the queue (front to rear)
//     void display() const {
//         if (isEmpty()) {
//             cout << "Queue is empty." << endl;
//             return;
//         }

//         cout << "Queue elements: ";
//         Node* current = front;
//         while (current != nullptr) {
//             cout << current->data << " ";
//             current = current->next;
//         }
//         cout << endl;
//     }
// };

// int main() {
//     LinkedQueue myQueue;

//     // Perform at least 5 insertions
//     myQueue.enqueue(10);
//     myQueue.display();

//     myQueue.enqueue(20);
//     myQueue.display();

//     myQueue.enqueue(30);
//     myQueue.display();

//     myQueue.enqueue(40);
//     myQueue.display();

//     myQueue.enqueue(50);
//     myQueue.display();

//     // Perform 2 deletions
//     myQueue.dequeue();
//     myQueue.display();

//     myQueue.dequeue();
//     myQueue.display();

//     // End of program
//     return 0;
// }



//code 5

#include <iostream>
using namespace std;

class CircularQueue {
private:
    int arr[5];      // Fixed-size array (capacity = 5)
    int front;       // Index of the front element
    int rear;        // Index of the rear element
    int itemCount;   // Number of elements currently stored

public:
    CircularQueue() : front(0), rear(0), itemCount(0) {}

    bool isEmpty() const {
        return (itemCount == 0);
    }

    bool isFull() const {
        return (itemCount == 5);
    }

    // Enqueue: Insert an element at the rear of the circular queue
    void enqueue(int value) {
        if (isFull()) {
            cout << "Queue Overflow (full). Cannot enqueue " << value << ".\n";
            return;
        }
        arr[rear] = value;
        rear = (rear + 1) % 5; // Wrap around when reaching end
        itemCount++;
        cout << "Enqueued: " << value << endl;
        display();
    }

    // Dequeue: Remove the front element from the circular queue
    void dequeue() {
        if (isEmpty()) {
            cout << "Queue Underflow (empty). Cannot dequeue.\n";
            return;
        }
        cout << "Dequeued: " << arr[front] << endl;
        front = (front + 1) % 5; // Wrap around when front reaches end
        itemCount--;
        display();
    }

    // Display all elements from front to rear in circular fashion
    void display() {
        if (isEmpty()) {
            cout << "Queue is empty.\n";
            return;
        }
        cout << "Queue elements: ";
        int index = front;
        for (int i = 0; i < itemCount; i++) {
            cout << arr[index] << " ";
            index = (index + 1) % 5; // Move to next position circularly
        }
        cout << endl;
    }
};

int main() {
    CircularQueue cq;

    // Enqueue elements to show wrapping
    cq.enqueue(10);
    cq.enqueue(20);
    cq.enqueue(30);
    cq.enqueue(40);
    cq.enqueue(50); // Now queue should be full

    // Attempt to enqueue when the queue is full
    cq.enqueue(60);

    // Dequeue some elements
    cq.dequeue();
    cq.dequeue();

    // Now there's room: enqueuing more should wrap around
    cq.enqueue(60);
    cq.enqueue(70);

    return 0;
}

