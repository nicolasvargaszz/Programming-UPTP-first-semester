#include <iostream>
#include <string>
using namespace std;

// Define the Book structure with title, author, and price
struct Book {
    string title;
    string author;
    double price;
};

// Function to apply a 10% discount to the book's price (passed by reference)
int disccount(Book &myBook){
    myBook.price *= 0.9;  // Apply 10% discount
    cout << "The price with discount is: " << myBook.price << endl; 
    return myBook.price;  // Return new price
}

// Function that takes the book by value (copy) and prints details
int reference(Book myBook){
    // Print the book information (original not modified)
    cout << "Book Title: " << myBook.title << endl;
    cout << "Author: " << myBook.author << endl;
    cout << "Price: $" << myBook.price << endl;
    return 0;
}

// Function that takes the book as a const reference (read-only)
int constant(const Book &myBook){
    // Print the book information (can't modify)
    cout << "Book Title: " << myBook.title << endl;
    cout << "Author: " << myBook.author << endl;
    cout << "Price: $" << myBook.price << endl;
    return 0;
}

int main() {
    // Create a Book object and assign values to its members
    Book myBook;
    myBook.title = "The Great Diego";
    myBook.author = "Mathias Drews";
    myBook.price = 1.50;

    // Call functions demonstrating different parameter passing
    constant(myBook);   // Pass by const reference (read-only)
    reference(myBook);  // Pass by value (copy)
    disccount(myBook);  // Pass by reference (modifies original)

    return 0;
}
