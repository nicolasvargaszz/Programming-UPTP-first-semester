// #include<iostream>

// using namespace std;

// class Stack
// {
//     int* array;
//     int top;
//     int capacity;

// public: 
//     Stack(int size = 10) : capacity(size), top(-1)
//     {
//         array = new int[capacity];
//     }

//     ~Stack()
//     {
//         delete[] array;
//     }

//     void push(int x)
//     {
//         if(top == capacity - 1)
//         {
//             cout << "Stack overflow " << endl;
//             return;
//         }
//         cout << "Element: " << x << " Pushed into the stack" << endl;
//         array[++top] = x;
//     }
//     int pop()
//     {
//         if(top == -1)
//         {
//             cout << "Stack UnderFlow" << endl;
//             return -1;
//         }
//         cout << "element: " << array[top] << " poped out of the stack" << endl;
//         return array[top--];
//     }

//     bool isEmpty() const
//     {
//         return top == -1;
//     }
    
//     int peek()
//     {
//         if(top == -1)
//         {
//             cout << "Stack is empty." << endl;
//             return -1;  
//         }
//         cout << "The peek element of the stack is: " << array[top] <<endl;
//         return array[top];
//     }

//     void display() const
//     {
//         if(isEmpty())
//         {
//             cout << "Array is empty" << endl;
//         }
//         cout << "Stack elements: " << endl; 
//         for(int i = 0; i <= top; ++i)
//         {
//             cout<< array[i] << " ";
//         }
//         cout << endl;
//     }
// };


// int main()
// {
//     Stack stack;
//     stack.push(10);
//     stack.push(20);
//     stack.push(30);
//     stack.pop();
//     stack.peek();
//     stack.display();
//     return 0;
// }


//code number 2, basically the same but with stacks

#include<iostream>

using namespace std;

struct Node
{
    int data;
    Node* next;

    //constructor
    Node(int val) : data(val), next(nullptr){}
};

class linkedStack
{
private:
    Node* top;

public: 
    linkedStack() : top(nullptr) {}

    void push(int value)
    {
        Node* newNode = new Node(value);
        newNode->next = top;
        top = newNode;
        cout << "Pushed the value of: " << value << endl;
    }

    bool isEmpty() const
    {
        return (top == nullptr);
    }

    void display()
    {
        if(isEmpty())
        {
            cout << "Nothing to display, stack is empty" << endl;
            return;
        }
        Node* temp = top;        
        while(temp != nullptr)
        {
            cout << temp->data << " ";
            temp = temp->next;
        }
        cout << endl;
    }


    void pop()
    {
        if(isEmpty())
        {
            cout << "The Stack is empty, nothing to pop." << endl;
        }
    }
};


int main() {
    linkedStack myStack;

    // Perform at least 3 pushes
    myStack.push(10);
    myStack.push(20);
    myStack.push(30);

    // Perform 2 pops
    myStack.pop();
    myStack.pop();

    // Display the final stack
    myStack.display();

    return 0;
}
