// #include <iostream>
// #include <string>
// using namespace std;

// // Template class that holds an object of type T
// template <typename T>
// class Holder {
// private:
//     T data;
// public:
//     void inputData()
//     {
//         cout << "Warning: Insert the data, be careful with the type! " << endl;
//         cin >> data;
//     }

//     void outputData()
//     {
//         cout << "Here is the data you have requested: " << data << endl; // for a better understanding this data that you see there, can be any data type available in C++s
//     }
// };

// // Now the tast ask you to provide 2 programmer-designed Classes: 

// class Futbool_Team
// {
// private: 
//     string team_Name;
//     int trophies; 

// public: 
//     Futbool_Team(string _team_Name = "", int _trophies = 0) // this is my paramitezed constructor.
//     {
//         team_Name = _team_Name;
//         trophies = _trophies;
//     }
//     friend ostream& operator<<(ostream& out, Futbool_Team& T)
//     {
//         out << "The Team name is: " << T.team_Name << " , and the team has: " << T.trophies;
//         return out; 
//     }

//     friend istream& operator>>(istream& in,Futbool_Team& T)
//     {
//         cout << "Enter the name of the team: "; 
//         in >> ws;
//         getline(in, T.team_Name);
//         cout << "Enter the number of Trophies: "; 
//         in >> T.trophies;
//         return in;
//     }
// };

// class Cars
// {
// private: 
//     string brand; 
//     int kilometers;
// public: 
//     Cars(string _brand = "", int _kilometers = 0) // parametized constructor.
//     {
//         brand = _brand;
//         kilometers = _kilometers;
//     }

//     friend ostream& operator<<(ostream& out, const Cars& C)
//     {
//         out << "The car brand is: " << C.brand << " And the car has: " << C.kilometers << endl;
//         return out;
//     }

//     friend istream& operator>>(istream& in, Cars& C)
//     {
//         cout << "Enter the name of the Car: "; 
//         in >> ws;
//         getline(in, C.brand);
//         cout << "Enter the number of Kilometers: "; 
//         in >> C.kilometers;
//         return in;
//     } 
// };

// //main function:
// int main()
// {
//     // Test with int.
//     Holder<int> intHolder;
//     intHolder.inputData(); 
//     intHolder.outputData();

//     //test with Futbool_team
//     Holder<Futbool_Team> futboolHolder;
//     futboolHolder.inputData();
//     futboolHolder.outputData();

//     //test with the car class
//     Holder<Cars> carsHolder;
//     carsHolder.inputData();
//     carsHolder.outputData();


//     return 0;
// }

//code 2: create a class template to perform addition

// #include<iostream>

// using namespace std; 

// template<typename T>
// class calculator
// {
// private: 
//     T dataA, dataB;
// public: 
//     calculator(T _dataA = 0, T _dataB = 0)
//     {
//         dataA = _dataA;
//         dataB = _dataB;
//     }
//     T addition() const
//     {
//         return dataA + dataB;
//     }
//     T substraction() const
//     {
//         return dataA - dataB;
//     }
//     T multiplication() const
//     {
//         return dataA * dataB; 
//     }
//     T division() const
//     {
//         if (dataB == 0)
//         {
//             cout << "Error, division by zeroError. " << endl;
//             return T();
//         }
//         return dataA / dataB;
//     }
// };


// int main()
// {
//     calculator<int> intCalc(10,5);
//     cout << "\n Calculator<int>: " << endl;
//     cout << "Addition is equal to : " <<  intCalc.addition() << endl;
//     cout << "Substraction is equal to : " <<  intCalc.substraction() << endl;
//     cout << "Multiplication is equal to : " <<  intCalc.multiplication() << endl;
//     cout << "division is equal to : " <<  intCalc.division() << endl;
//     // Test Calculator with float
//     calculator<float> floatCalc(7.5f, 2.5f);
//     cout << "\nCalculator<float>:" << endl;
//     cout << "Add: " << floatCalc.addition() << endl;
//     cout << "Subtract: " << floatCalc.substraction() << endl;
//     cout << "Multiply: " << floatCalc.multiplication() << endl;
//     cout << "Divide: " << floatCalc.division() << endl;
//     return 0;   
// }

#include<iostream>
#include<string>

using namespace std;

template<typename T>
class Holder
{
private:
    int numberOfElements;
    T data;
public:
    Holder(int n = 1) // holder constructor, with parameters but with a default value
    {
        numberOfElements = n;
    }
    void getInputData()
    {
        cout << "Be careful, you are going to be ask to insert: " << numberOfElements << " Element(s): "<< endl;
        cin >> data; // store the input of the user in the data variable.
    }
    void outputData()
    {
        cout << "Here is the data that you inserted: " << data << endl; //cout the data that the user inserted.
    }
};


class Employee // this is a class with 2 data, the Employee ID and the employee salary
{
private: 
    int employeeID;
    double salary;

public: 
    Employee(int _empoloyeeID = 0, int _salary = 0.0)
    {
        employeeID = _empoloyeeID;
        salary = _salary;
    }
    // We have to overload the >> operator
    friend istream& operator>>(istream& in, Employee& E)
    {
        cout << "Please enter the Employee ID: " << endl;
        in >> E.employeeID;
        cout << "Please enter the Employee Salary: " << endl;
        in >> E.salary;
        return in;
    }

    // in here we overload the << operator, in that way the class template will work
    friend ostream& operator<<(ostream& out, const Employee& E)
    {
        out << "The ID of the employee is: " << E.employeeID << " The salary of the employee is: " << E.salary << endl;
        return out;
    }
};


//second class
class Student
{
private: 
    string studentName;
    int grades[12];

public: 
    Student(string _studentName = "")
    {
        studentName = _studentName;
        for(int i = 0; i < 12 ; i++)
        {
            grades[i] = 0;
        }
    }
    // now we have to overload the. << and the >> operators.
    friend istream& operator>>(istream& in, Student& S)
    {
        cout << "\n Please enter the name of the student" << endl;
        in >> ws;
        getline(in, S.studentName);
        for(int i = 0 ; i < 12 ; i++)
        {
            cout << "Enter the grade number: " << (i + 1) << ": ";
            in >> S.grades[i];
        }
        cout << endl;
        return in;
    }

    friend ostream& operator<<(ostream& out, Student& S)
    {
        out << "The Student name is: " << S.studentName << ", Grades: "<<endl;
        for(int i = 0; i < 12; i++)
        {
            out << S.grades[i];
            if(i < 11) out << ", ";
        }
        return out;
    }
};


// main function
int main()
{
    // now we initialize our templated class
    Holder<int> intHolder;
    intHolder.getInputData();
    intHolder.outputData();

    // now let's create the employee object but using the template:
    Holder<Employee> employeeHolder(2);
    employeeHolder.getInputData();
    employeeHolder.outputData();

    //finally we have the Student class using templates.
    Holder<Student> studentHolder(13);
    studentHolder.getInputData();
    studentHolder.outputData();
    return 0;
}