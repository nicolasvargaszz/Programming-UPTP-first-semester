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
    double honorPoints;
    double gradeToPoints(char grade)
    {
        switch(grade)
        {
            case 'A' : return 4.0;
            case 'B' : return 3.0;
            case 'C' : return 2.0;
            case 'D' : return 1.0;
            case 'F' : return 0.0;
            default: return 0.0; // Handle invalid grade
        }
    }
public:
    CollegeCourse(int id, string name, int cr, char gr)
    {   
        courseID = id;
        courseName = name;
        grade = gr;
        credits = cr; 
        honorPoints = gradeToPoints(grade) * credits;
    }

    //Defual constructor for "summary" object
    CollegeCourse() : courseID(0), courseName(""), credits(0), grade('F'), honorPoints(0.0) {}
    // Overloaded operator to add two CollegeCourse objects

    CollegeCourse operator+(const CollegeCourse& other ) const
    {
        CollegeCourse result;
        result.courseID = courseID + other.courseID;
        result.courseName = courseName + " & " + other.courseName;
        result.credits = credits + other.credits;
        result.honorPoints = honorPoints + other.honorPoints;
        return result;
    }
    // Overloaded operator to subtract two CollegeCourse objects
    CollegeCourse operator/(int divisor) const
    {
        CollegeCourse result(*this);
        if(divisor != 0)
        {
            result.honorPoints /= divisor;
        }
        return result;
    }
    //overload the << operator for output
    friend ostream& operator<<(ostream& out, const CollegeCourse& course)
    {
        out << "Course ID" << course.courseID
            << ", Course Name: " << course.courseName
            << " , Credits: " << course.credits
            << ", Grade: " << course.grade
            << ", Honor Points: " << course.honorPoints;
        return out;
    }

};

//Design a class of your choice where averaging objects makes sense

class AlbirrojaGoals
{
private: 
    int totalGoals;
public:
        // Constructor
    AlbirrojaGoals(int goals = 0) : totalGoals(goals) {}

    // Overload + to sum total goals
    AlbirrojaGoals operator+(const AlbirrojaGoals& other) const {
        return AlbirrojaGoals(this->totalGoals + other.totalGoals);
    }

    // Overload / for dividing total goals by integer
    // (useful in computing average goals per match)
    AlbirrojaGoals operator/(int divisor) const {
        if (divisor == 0) {
            // Avoid division by zero (return unchanged or handle error)
            return *this; 
        }
        return AlbirrojaGoals(this->totalGoals / divisor);
    }

    // Overload << to print total goals
    friend ostream& operator<<(ostream& os, const AlbirrojaGoals& ag) {
        os << ag.totalGoals << " goals";
        return os;
    }
};

int main()
{
   // Demonstrating the average function with different types
    int intA = 10, intB = 20;
    cout << "Average of integers: " << average(intA, intB) << endl;
    double doubleA = 5.5, doubleB = 2.3;
    cout << "Average of doubles: " << average(doubleA, doubleB) << endl;

    CollegeCourse course1(101, "Math", 3, 'A');
    CollegeCourse course2(102, "Science", 4, 'B');
    CollegeCourse summaryCourse = course1 + course2; // Summing two courses
    cout << "Summary Course: " << summaryCourse << endl;
    CollegeCourse averageCourse = summaryCourse / 2; // Averaging the summary course
    cout << "Average Course: " << averageCourse << endl;

    // -----------------------------------------------------------------
    // Demonstrate using the template functions for AlbirrojaGoals
    // -----------------------------------------------------------------
    AlbirrojaGoals match1(3), match2(2), match3(4);
    AlbirrojaGoals totalGoals = match1 + match2 + match3; 
    cout << "\nTotal Goals in three matches: " << totalGoals << endl;

    // Average of two matches
    AlbirrojaGoals avg2Matches = average(match1, match2);
    cout << "Average of match1 and match2: " << avg2Matches << endl;

    // Average of three matches
    AlbirrojaGoals avg3Matches = avergae(match1, match2, match3);
    cout << "Average of match1, match2, and match3: " << avg3Matches << endl;
    // -----------------------------------------------------------------

    return 0;
}