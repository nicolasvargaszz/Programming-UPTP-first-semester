#include<iostream>

using namespace std;

class Stack {
private:
    static const int MAX_SIZE = 10;
    int data[MAX_SIZE];
    int topIndex;

public:
    Stack() : topIndex(-1) {}
    bool isEmpty() { return topIndex == -1; }
    bool isFull() { return topIndex == MAX_SIZE - 1; }
    void push(int value) {
        if (isFull()) {
            cout << "Stack overflow" << endl;
            return;
        }
        data[++topIndex] = value;
        cout << "Pushed " << value << " onto stack." << endl;
    }
    void pop() {
        if (isEmpty()) {
            cout << "Stack underflow" << endl;
            return;
        }
        topIndex--;
    }
    int peek() {
        if (isEmpty()) {
            cout << "Stack is empty" << endl;
            return -1;
        }
        return data[topIndex];
    }
};

int main() {
    Stack st;
    st.push(5);
    st.push(10);
    st.push(15);
    st.push(20);
    st.pop();
    cout << "Top element: " << st.peek() << endl;
    return 0;
}