#include<iostream>
using namespace std;

const int MAX = 1000;  // Const variable

int main()
{
    int array[MAX];
    int n, a, b;
    a=0;
    b=1;
    array[0] = a;
    array[1] = b;
    cout << "How many digits of the fibonacci sequence do you want: ";
    cin >> n;
    if(n > 1000)
    {
        cout << "Pick a smaller number: " << endl;
    }
    else
    {
        for(int i = 1; i < n; i++){
            array[i + 1] = array[i] + array[i -1];
        }
            for(int i =1; i < n; i++){
                cout << array[i] << ", " << endl;
            }
    }
    
    
    return 0;
}   



// Implementing Fibonacci using recursion. 
#include<iostream>
using namespace std;

int fibonacci(int n) {
    if (n == 0 || n == 1) {
        return n;  // Use 0 and 1 as base values
    } else {
        return fibonacci(n - 1) + fibonacci(n - 2);
    }
}

int main() {
    int number;
    cout << "How many digits of the Fibonacci sequence do you want? ";
    cin >> number;

    cout << "Fibonacci sequence:" << endl;
    for (int i = 0; i < number; i++) {
        cout << fibonacci(i);
        if (i != number - 1) cout << ", ";
    }
    cout << endl;
    int result = fibonacci(number);
    cout << "The final element is: " << result << endl;
    
    return 0;
}

