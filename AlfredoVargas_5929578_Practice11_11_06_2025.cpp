// // #include <iostream>
// // using namespace std;

// // // Function template for calculating circle area
// // template <typename T>
// // double circleArea(T radius) {
// //     return 3.14 * radius * radius;
// // }

// // int main()
// // {
// //     int intRadius = 5;
// //     double doubleRadius = 2.5;

// //     // Demonstrate the function with an integer argument
// //     cout << "Area of a circle with integer radius " << intRadius 
// //          << " is: " << circleArea(intRadius) << endl;

// //     // Demonstrate the function with a double argument
// //     cout << "Area of a circle with double radius " << doubleRadius 
// //          << " is: " << circleArea(doubleRadius) << endl;

// //     return 0;
// // }

// // #include <iostream>
// // using namespace std;

// // template <typename T>
// // T printasterisk(T element)
// // {
// //     cout << "**********" << element << "**********" << endl;
// //     return element; 
// // }

// // class Employee
// // {
// // private: 
// //     string name;
// //     int id;
// //     int salary;
// // public:
// //     Employee(string name_, int id_, int salary_): name(name_), id(id_), salary(salary_) {}
// //     friend ostream& operator<<(ostream& out, Employee e)
// //     {
// //         out << "Name: " << e.name << ", ID: " << e.id << ", Salary: " << e.salary;
// //         return out;
// //     }

// // };

// // int main()
// // {
// //     int intElement = 10;
// //     double doubleElement = 20.5;

// //     // Demonstrate the function with an integer argument
// //     printasterisk(intElement);

// //     // Demonstrate the function with a double argument
// //     printasterisk(doubleElement);

// //     // Demonstrate the function with a string argument
// //     string strElement = "Hello";
// //     printasterisk(strElement);
// //     // Demonstrate the function with a character argument
// //     char charElement = 'A';
// //     printasterisk(charElement);


// //     cout << "Creating an Employee object..." << endl;
// //     Employee emp("Nicolas Vargas", 5929578, 500000000);
// //     printasterisk(emp);

// //     return 0;
// // }


// #include<iostream>

// using namespace std;

// class HomeWork
// {
//     string className;
//     string assignment;
//     int numberOfMinutes;

// public:
//     void setValues(string n, string a, int m)
//     {
//         className = n;
//         assignment = a;
//         numberOfMinutes = m;
//     }
//     HomeWork operator+(const HomeWork& other) const
//     {
//         HomeWork result;
//         result.className = className + " & " + other.className;
//         result.assignment = assignment + " & " + other.assignment;
//         result.numberOfMinutes = numberOfMinutes + other.numberOfMinutes;
//         return result;
//     }

//     void display() const
//     {
//         cout << "Class: " << className 
//              << ", Assignment: " << assignment 
//              << ", Time Spent: " << numberOfMinutes << " minutes" << endl;
//     }
// };

// template<typename T>
// T addValues(const T& a, const T& b)
// {
//     return a + b;
// }

// int main()
// {
//     int intA = 10, intB = 20;
//     cout << "Sum of integers: " << addValues(intA, intB) << endl;
//     double doubleA = 5.5, doubleB = 2.3;
//     cout << "Sum of doubles: " << addValues(doubleA, doubleB) << endl;
//     string strA = "Hello, ", strB = "World!";
//     cout << "Concatenation of strings: " << addValues(strA, strB) << endl;
//     HomeWork hw1, hw2, hw3;
//     hw1.setValues("Math", "Assignment 1", 30);
//     hw2.setValues("Science", "Lab Report", 45);
//     hw3 = addValues(hw1, hw2);
//     hw3.display();

//     return 0;
// }


//HomeWork 

#include <iostream>
using namespace std;

template <typename T>
T average(const T& a, const T& b) {
    T sum = a + b;
    return static_cast<T>(sum / 2);
}
template <typename T>
T avergae(const T& a, const T& b, const T& c)
{
    T sum = a + b + c;
    return static_cast<T>(sum / 3);
}

class CollegeCourse
{
private:
    int courseID;
    string courseName;
    int credits;
    char grade;
public:
    CollegeCourse(int id, string name, int cr, char gr)
    {   
        courseID = id;
        courseName = name;
        grade = gr;
        credits = cr; 
    }
    
};


int main()
{
    return 0;
}