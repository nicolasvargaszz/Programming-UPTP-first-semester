// //Name: Alfredo Nicolas Vargas Oviedo
// // Student ID: 5929578
// // Code number 1: Credit Limit.

// #include <iostream>
// #include<string>
// using namespace std;

// class Customer {
// private:
//     int ID;
//     string lastName;
//     string firstName;
//     double creditLimit;

// public:
//     // Default constructor
//     Customer() {
//         lastName = "";
//         firstName = "";
//         creditLimit = 0;
//     }

//     // Parameterized constructor
//     Customer(string _lastname, string _firstname, double _creditLimit) {
//         lastName = _lastname;
//         firstName = _firstname;
//         if (_creditLimit >= 10000) {
//             cout << "Cannot have more than 9999 dollars as credit limit." << endl;
//             creditLimit = 9999;
//         } else {
//             creditLimit = _creditLimit;
//         }
//     }

//     // Input function to set data
//     void inputData() {
//         cout << "Enter last name: ";
//         cin >> lastName;
//         cout << "Enter first name: ";
//         cin >> firstName;
//         cout << "Enter credit limit (max 9999): ";
//         cin >> creditLimit;
//         if (creditLimit >= 10000) {
//             cout << "Cannot have more than 9999 dollars as credit limit. Setting to 9999." << endl;
//             creditLimit = 9999;
//         }
//     }

//     // Display function
//     void displayData() {
//         cout << "The name of the user is: " << lastName << " " << firstName << endl;
//         cout << "The credit limit of: " << lastName << " " << firstName << " is " << creditLimit << " US Dollars" << endl;
//     }
// };

// int main() {
//     Customer customersArray[5];

//     // Input for each customer
//     for (int i = 0; i < 5; ++i) {
//         cout << "\nEnter details for Customer #" << (i + 1) << ":\n";
//         customersArray[i].inputData();
//     }

//     // Display all customers
//     cout << "\nDisplaying all customer data:\n";
//     for (int i = 0; i < 5; ++i) {
//         cout << "\nCustomer #" << (i + 1) << ":\n";
//         customersArray[i].displayData();
//     }

//     return 0;
// }



// Code number 2: Dog Class:

// #include <iostream>
// #include <string>
// using namespace std;

// class Dog {
// private:
//     string name;
//     string breed;
//     int age;
//     const double licenseFee = 12.25;  // constant license fee

// public:
//     // Function to set data
//     void setData(string _name, string _breed, int _age) {
//         name = _name;
//         breed = _breed;
//         age = _age;
//     }

//     // Function to display data
//     void displayData() {
//         cout << "Dog's Name: " << name << endl;
//         cout << "Breed: " << breed << endl;
//         cout << "Age: " << age << " years" << endl;
//         cout << "License Fee: $" << licenseFee << endl;
//     }
// };

// int main() {
//     Dog myDog;

//     // Set dog data
//     string name, breed;
//     int age;

//     cout << "Enter dog's name: ";
//     getline(cin, name);
//     cout << "Enter dog's breed: ";
//     getline(cin, breed);
//     cout << "Enter dog's age: ";
//     cin >> age;

//     myDog.setData(name, breed, age);

//     // Display dog data
//     cout << "\nDog's Information:\n";
//     myDog.displayData();

//     return 0;
// }


// Code number 3: book

// #include<iostream>
// #include<string>

// using namespace std;

// class Book
// {
// private:
//     string name;
//     string author;
//     bool isCheckOut;

// public:
//     void setBook(string _name, string _author)  //→ sets the attributes of a Book
//     {
//         name = _name;
//         author = _author;
//     } 
//     void checkOut() //→ sets isCheckedOut to true
//     {
//         isCheckOut = 1;
//     } 
//     void returnBook()   //→ sets isCheckedOut to false
//     {
//         isCheckOut = 0;
//     } 
//     void displayStatus()    // → Display the informatip
//     {
//         cout << "The name of the book is: " << name << " The autor is: " << author << endl;
//         if(isCheckOut)
//         {
//             cout << "The book is already check out." << endl;
//         }
//         else
//         {
//             cout << "The book is not check out." << endl;
//         }
//     } 

// };



// int main()
// {
//     Book harrypotter;
//     harrypotter.setBook("Harry Potter","JK Rowling");
//     harrypotter.checkOut();
//     harrypotter.displayStatus();

//     cout << "few days later: " << endl;

//     harrypotter.returnBook();
//     harrypotter.displayStatus();
//     return 0;
// }

//Code number 4 rectangle.
// #include<iostream>
// #include<string>

// using namespace std;

// class Rectangle
// {
// private:
//     float length;
//     float  width;

// public:
//     void setRectangle(float _length, float _width) // that sets the values for length and width.
//     {
//         length = _length;
//         width = _width;
//     }  
//     float calculateArea()    //that returns the area of the rectangle
//     {
//         return length * width;
//     }  
//     void display()
//     {
//         cout << "The length of the rectangle is: " << length << "\n" << "The width is: " << width << "\n" << "The Area is: " << this->calculateArea() << endl;
//     }
// };

// int main()
// {
//     Rectangle rectangle;
//     float width, length;
//     cout << "Tell me the width of the rectangle" << endl;
//     cin >> width;
//     cout << "Tell me the length of the rectangle" << endl;
//     cin >> length;
    
//     rectangle.setRectangle(length, width);
//     rectangle.calculateArea();
//     rectangle.display();
//     return 0;
// }


//Code number 5: Student.
#include <iostream>
#include <string>
using namespace std;

class Student {
private:
    string name;
    float scores[3];  // fixed-size array for 3 scores

public:
    // Function to input student data
    void inputData() {
        cout << "Enter student name: ";
        getline(cin, name);
        for (int i = 0; i < 3; i++) {
            cout << "Enter score " << (i + 1) << ": ";
            cin >> scores[i];
        }
        cin.ignore(); // clear input buffer in case of multiple students
    }

    // Calculate average of scores
    float calculateAverage() {
        float avg = 0.0;
        for (int i = 0; i < 3; i++) {
            avg += scores[i];
        }
        return avg / 3;
    }

    // Display student name and average
    void display() {
        cout << "The name of the student is: " << name << endl;
        cout << "The average score is: " << calculateAverage() << endl;
    }
};

int main() {
    Student student;

    // Input student info
    student.inputData();

    // Display student info
    cout << "\nStudent Information:\n";
    student.display();

    return 0;
}
