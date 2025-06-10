#include<iostream>

#define MAX_SIZE 5

using namespace std;

class Queue
{
private:
    int front;
    int rear;
    int arr[MAX_SIZE];

public: 
    Queue()
    {
        front = -1;
        rear = -1;
    }

    bool isFull()
    {
        return (rear == MAX_SIZE - 1);
    }

    bool isEmpty()
    {
        return (front == -1 || front > rear);
    }

    void enqueue(int value)
    {
        if (isFull())
        {
            cout << "Queue is full! Overflow" << endl;
            return;
        }
        if (front == -1) // if queue is empty
        {
            front = 0;
        }
        rear++; // move the rear index forward
        arr[rear] = value; // give the value to the rear index
        cout << "Enqueued: " << value << endl;
    }

    void dequeue()
    {
        if (isEmpty())
        {
            cout << "Queue is empty! Underflow" << endl;
            return;
        }
        if(front == rear) // if there is only one element
        {
            front = -1; // reset front and rear
            rear = -1;
        }
        else
        {
            front++; // move the front index forward
        }

        cout << "Dequeued: " << arr[front] << endl;
    }   

};

int main()
{
    Queue queue;
    queue.enqueue(10);
    queue.enqueue(20);
    queue.enqueue(30);
    queue.enqueue(40);
    queue.dequeue();

    return 0;
}