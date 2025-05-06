/*#include <iostream>
using namespace std;

int main() {
    const int SIZE = 5;  // Fixed size (static allocation)
    int numbers[SIZE] = {23, 22, 42, 64, 12};  // Static array

    // Accessing elements
    cout << "Array elements: ";
    for (int i = 0; i < SIZE; i++) {
        cout << numbers[i] << " ";
    }
    cout << endl;

    return 0; // Summary: An example of a datastructure is an array.
}*/


//Static 2D Array:
// #include<iostream>
// using namespace std;

// int main()
// {
//  const int ROWS=3, COLS = 3;

//  int matrix[ROWS][COLS] = {
//     {1,2,3},
//     {4,5,6},
//     {7,8,9}
//  };

//  cout << "Matrix: " << endl;

//  for(int i=0;i<ROWS;i++){
//     for(int j=0;j<COLS;j++){
//         cout<<matrix[i][j]<< " ";
//     };
//     cout << endl;
//  };
// return 0;
// }


#include <iostream>
using namespace std;

class Stack {
private:
    static const int SIZE = 5;  // Fixed size
    int arr[SIZE];  // Static array
    int top;  // Index of the top element

public:
    Stack() { top = -1; }  // Initialize stack

    // Push operation
    void push(int value) {
        if (top == SIZE - 1) {
            cout << "Stack Overflow!" << endl;
            return;
        }
        arr[++top] = value;
    }

    // Pop operation
    void pop() {
        if (top == -1) {
            cout << "Stack Underflow!" << endl;
            return;
        }
        top--;
    }

    // Display stack contents
    void display() {
        if (top == -1) {
            cout << "Stack is empty." << endl;
            return;
        }
        cout << "Stack elements: ";
        for (int i = top; i >= 0; i--) {
            cout << arr[i] << " ";
        }
        cout << endl;
    }
};

int main() {
    Stack s;
    s.push(10);
    s.push(20);
    s.push(30);
    s.display();
    s.pop();
    s.display();

    return 0;
}
