#include <iostream>   // For input-output operations
#include <string>     // For using std::string

using namespace std;  // Using the standard namespace

// -------------------------
// Base Class: Employee
// -------------------------
class Employee
{
protected:
    // Protected members can be accessed by derived classes
    string name;
    string SocialSecurityNumber;
    int id;

public:
    // Sets the Employee's name
    void setName(const string& _name)
    {
        name = _name;
    }

    // Sets the Employee's Social Security Number
    void setSSN(const string& _SSN)
    {
        SocialSecurityNumber = _SSN;
    }

    // Sets the Employee's ID
    void setID(const int& _id)
    {
        id = _id;
    }

    // Displays basic Employee information
    void displayInfo()
    {
        cout << "The name of the employee is: " << name << endl;
        cout << "The Social Security Number of the employee is: " << SocialSecurityNumber << endl;
        cout << "The employee ID is: " << id << endl;
    }
};

// -------------------------
// Derived Class: HorlyEmployee
// Inherits from Employee
// -------------------------
class HorlyEmployee : public Employee
{
private:
    // Stores hourly wage
    double hourlyWage;
public:
    // Sets the hourly wage
    void setHourlyWage(double _hourlyWage)
    {
        hourlyWage = _hourlyWage;
    }

    // Displays the employee's hourly wage
    void displaySalary()
    {
        cout << "The hourly Wage is " << hourlyWage << " $" << endl;
    }
};

// -------------------------
// Derived Class: SalariedEmployee
// Inherits from Employee
// -------------------------
class SalariedEmployee : public Employee
{
private:
    // Stores monthly salary
    double mounthSalary;
public:
    // Sets the monthly salary
    void setMounthSalary(double _mounthSalary)
    {
        mounthSalary = _mounthSalary;
    }

    // Displays the employee's monthly salary
    void displaySalary()
    {
        cout << "The monthly Salary is " << mounthSalary << " $" << endl;
    }
};

// -------------------------
// Main Function
// -------------------------
int main()
{
    // Create an Hourly Employee
    HorlyEmployee employee1;
    employee1.setName("Alfredo Vargas");         // Set name
    employee1.setSSN("123-45-6789");             // Set SSN
    employee1.setID(5929578);                    // Set ID
    employee1.setHourlyWage(20.0);               // Set hourly wage
    cout << "Hourly employee information:" << endl;
    employee1.displayInfo();                     // Display base info
    employee1.displaySalary();                   // Display wage

    cout << endl;

    // Create a Salaried Employee
    SalariedEmployee employee2;
    cout << "Monthly employee information: " << endl;

    employee2.setName("John doecl ");               // Set name
    employee2.setSSN("987-65-4321");             // Set SSN
    employee2.setID(234235);                    // Set ID
    employee2.setMounthSalary(3000.0);           // Set monthly salary
    employee2.displayInfo();                     // Display base info
    employee2.displaySalary();                   // Display salary

    return 0; // End of main
}