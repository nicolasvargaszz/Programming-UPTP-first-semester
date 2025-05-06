#include <iostream>
#define MAX 1000
using namespace std;

int main() {
    int a = 0, b = 1;
    int n;
    int* fibonacci = new int[MAX];

    cout << "How many digits of the Fibonacci series do you want: ";
    cin >> n;

    // Check for invalid input
    if (n <= 0 || n > MAX) {
        cout << "Invalid input. Please enter a number between 1 and " << MAX << endl;
        delete[] fibonacci;
        return 1;
    }

    // Initialize first two Fibonacci numbers
    fibonacci[0] = a;
    fibonacci[1] = b;

    // Generate Fibonacci sequence
    for (int i = 1; i < n - 1; i++) {  // Fix: loop should go up to n-1
        fibonacci[i + 1] = fibonacci[i] + fibonacci[i - 1];
    }

    // Print Fibonacci sequence
    cout << "The first " << n << " numbers of the Fibonacci series are: ";
    for (int i = 0; i < n; i++) {
        cout << fibonacci[i];
        if (i < n - 1) cout << " , ";
    }
    cout << endl;

    // Free allocated memory
    delete[] fibonacci;

    return 0;
}
