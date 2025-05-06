// #include<iostream>
// using namespace std;

// #define MAX 100


// class Stack{
//     int top;
//     int arr[MAX];


// public: 
//     Stack() {top = -1;}
//     bool isEmpty(){return top == -1; } //this is the constructor
//     bool isFull(){return top == MAX - 1;}

//     void push(int x){
//         if(isFull()){
//             cout << "Stack Overflow." << endl;
//             return;
//         }
//         arr[++top] = x;
//     }

//     void pop(){
//         if(isEmpty()){
//             cout << "Stack UnderFlow.\n";
//             return;
//         }
//         top--;
//     }

//     int peek(){
//         if(isEmpty()){
//             cout << "The stack is empty. \n";
//             return -1;
//         }
//         return arr[top];
//     }
// };


// int main(){
//     Stack s;
//     s.push(10);
//     s.push(20);
//     s.push(30);
//     cout << "The top before the pop is: " << s.peek() << endl; 
//     s.pop();
//     s.pop();


//     cout << "The top after the pop is: " << s.peek() << endl;

//     return 0;
// }


// That was all for the stack, now we are going to see more about queues:

#include <iostream>
using namespace std;

#define MAX 100

class Queue {
    int front, rear;
    int arr[MAX];

public:
    Queue() {
        front = -1;
        rear = -1;
    }

    bool isEmpty() { return front == -1 || front > rear; }
    bool isFull() { return rear == MAX - 1; }

    void enqueue(int x) {
        if (isFull()) {
            cout << "Queue Overflow\n";
            return;
        }
        if (front == -1) front = 0;
        arr[++rear] = x;
    }

    void dequeue() {
        if (isEmpty()) {
            cout << "Queue Underflow\n";
            return;
        }
        front++;
    }

    int peek() {
        if (isEmpty()) {
            cout << "Queue is empty\n";
            return -1;
        }
        return arr[front];
    }
};

int main() {
    Queue q;
    q.enqueue(10);
    q.enqueue(20);
    q.enqueue(30);

    cout << "Elemento en el frente: " << q.peek() << endl;  // 10
    q.dequeue();
    cout << "Elemento en el frente después de dequeue: " << q.peek() << endl;  // 20

    return 0;
}
