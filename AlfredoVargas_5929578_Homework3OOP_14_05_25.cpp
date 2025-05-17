#include <iostream>
#include <string>
using namespace std;

class Printer {
public:
    // Overloaded display() with no parameters
    void display() {
        cout << "Display with no parameters." << endl;
    }

    // Overloaded display() with one integer parameter
    void display(int number) {
        cout << "Display with an integer: " << number << endl;
    }

    // Overloaded display() with one string parameter
    void display(const string& text) {
        cout << "Display with a string: " << text << endl;
    }
};

int main() {
    Printer printer;

    // Demonstrating overloaded display() functions
    printer.display();                  // Calls display() with no parameters
    printer.display(42);                // Calls display() with an integer parameter
    printer.display("Hello, World!");   // Calls display() with a string parameter

    return 0;
}