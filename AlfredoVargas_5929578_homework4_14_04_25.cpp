
// **********************************************************************
// *                                                                    *
// *                   Problem 2: Student Record                        *
// **********************************************************************

#include <iostream>
#include <string>

using namespace std;

class Student {
private:
    string name;
    double grades[5] = {0,0,0,0,0};

public:
    // Adjust the constructor to receive an array
    Student(string, const double[]);

    void calculateAverage() {
        double average = 0;
        for(int i = 0; i < 5; i++) {
            average += grades[i];
        }
        average /= 5;
        cout << "The average grade of student " << name << " is " << average << endl;
    }

    void findHighestGrade() {
        double max = grades[0];
        for(int i = 1; i < 5; i++) {
            if(max < grades[i]) {
                max = grades[i];
            }
        }
        cout << "The highest grade of the student " << name << " is: " << max << endl;
    }

    void displayInfo() {
        cout << "Name: " << name << endl;
        cout << "Grades: ";
        for(int i = 0; i < 5; i++) {
            cout << grades[i] << (i < 4 ? ", " : "\n");
        }
        calculateAverage();
        findHighestGrade();
    }
};

// Constructor definition
Student::Student(string _name, const double _grades[]) {
    name = _name;
    for(int i = 0; i < 5; i++) {
        grades[i] = _grades[i];
    }
};

int main() {
    double gradesArray[] = {3, 4, 3, 4, 5};
    Student student1("Nicolas", gradesArray);
    student1.displayInfo();

    return 0;
}

