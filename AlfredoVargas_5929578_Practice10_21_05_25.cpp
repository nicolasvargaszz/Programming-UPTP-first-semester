// #include<iostream>

// using namespace std;    

// class BankAccount
// {
// private:
//     int accountNumber;
//     double balance;
// public:
//     BankAccount(int _accountNumber, double _balance)
//     {
//         accountNumber = _accountNumber;
//         balance = _balance;
//     }

//     void display() // Define a method display() that prints the account number and balance
//     {
//         cout << "Account Number: " << accountNumber << endl;
//         cout << "Balance: $" << balance << endl;
//     }

//     BankAccount merge(BankAccount other) // Define a method BankAccount merge(BankAccount other) that returns a new BankAccount object 
//     {
//         BankAccount mergedAccount(999, balance + other.balance);
//         return mergedAccount;
//     }
//     //Define a friend function bool hasMoreBalance(BankAccount a,
//     //BankAccount b) that returns true if a has a greater balance than b
//     friend bool hasMoreBalance(BankAccount a, BankAccount b)
//     {
//         return a.balance > b.balance;
//     }
// };

// int main()
// {
//     BankAccount account1(123, 1000.50);
//     BankAccount account2(456, 2000.75);

//     BankAccount merge = account1.merge(account2); // Merge account1 and account2
//     cout << "Merged Account:" << endl;
//     merge.display(); // Display the merged account
//     cout << endl;

//     bool result = hasMoreBalance(account1, account2); // Check if account1 has more balance than account2
//     cout << "Account 1 has more balance than Account 2 ? " << (result ? "True" : "False") << endl;
//     cout << endl;
//     return 0;
// }

// code number 2

// Create a class called Point with the following private attributes: x (double) y (double)

// #include <iostream>
// #include <cmath>
// using namespace std;

// class Point
// {
// private:
//     double x;
//     double y;
// public:

// Point(double _x, double _y)
//     {
//         x = _x;
//         y = _y;
//     }

//     void display() // Define a method display() that prints the x and y coordinates
//     {
//         cout << "X: " << x << endl;
//         cout << "Y: " << y << endl;
//     }

//     Point add(Point other) // Define a method Point add(Point other) that returns a new Point object 
//     {
//         Point addedPoint(x + other.x, y + other.y);
//         return addedPoint;
//     }
//     friend double distance(Point a, Point b) // Define a friend function double distance(Point a, Point b) that returns the distance between two points
//     {
//         return sqrt(pow(b.x - a.x, 2) + pow(b.y - a.y, 2));
//     }
// };

// int main()
// {
//     Point p1(1.0, 2.0);
//     Point p2(4.0, 6.0);
//     Point addedPoint = p1.add(p2); // Add p1 and p2

//     cout << "Added Point:" << endl;
//     addedPoint.display(); // Display the added point
//     cout << endl;

//     double distan = distance(p1, p2); // Calculate the distance between p1 and p2
//     cout << "Distance between p1 and p2: " << distan << endl; // Display the distance
//     cout << endl;
//     return 0;
// }

#include <iostream>
#include <cmath>

using namespace std;

class Student
{
private:
    string name;
    double grade1;
    double grade2;
public:
    Student(string _name, double _grade1, double _grade2)
    {
        name = _name;
        grade1 = _grade1;
        grade2 = _grade2;
    }

    void display() // Define a method display() that prints the name and grades
    {
        cout << "Name: " << name << endl;
        cout << "Grade 1: " << grade1 << endl;
        cout << "Grade 2: " << grade2 << endl;
    }

    double average() // Define a method double average() that returns the average of the two grades
    {
        return (grade1 + grade2) / 2.0;
    }
    Student Boost(double amount) // Define a method Student Boost(double amount) that returns a new Student object with boosted grades
    {
        Student boostedStudent(name, grade1 + amount, grade2 + amount);
        return boostedStudent;
    }

    friend Student betterStudent(Student a, Student b) // Define a friend function bool betterStudent(Student a, Student b) that returns true if a has a higher average than b
    {
        return (a.average() > b.average()) ? a : b;
    }
};


int main()
{
    Student student1("Nicolas", 100, 90.0);
    Student student2("Alfredo", 80.0, 85.0);

    Student boostedStudent = student1.Boost(5.0); // Boost student1's grades by 5.0
    cout << "Boosted Student:" << endl;

    boostedStudent.display(); // Display the boosted student
    cout << endl;

    Student better = betterStudent(student1, student2); // Find the better student
    cout << "Better Student:" << endl;
    better.display(); // Display the better student
    cout << endl;
    return 0;   
}