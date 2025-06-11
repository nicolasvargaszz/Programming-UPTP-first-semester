//code 1

// #include<iostream>

// using namespace std;

// template<typename T>
// T findMin(T a, T b)
// {
//     return (a < b) ? a : b;
// }

// //Funtion template to swap two values

// template<typename T>
// void swapValues(T& a, T& b)
// {
//     T temp = a;
//     a = b;
//     b = temp;
// }

// int main()
// {
//     //with int 
//     int int1 = 10, int2 = 20;
//     cout << "The min of " << int1 << " and " << int2 << " is: " << findMin(int1, int2) << endl;
    
//     //with double
//     double double1 = 10.5, double2 = 20.5;
//     cout << "The min of " << double1 << " and " << double2 << " is: " << findMin(double1, double2) << endl;

//     //With Char
//     char char1 = 'A', char2 = 'Z';
//     cout << "The min of " << char1 << " and " << char2 << " is: " << findMin(char1, char2) << endl;

//     //swap two nmbers 
//     cout << "\n ----- Demostrating getMin() -----\n";
//     int num1 = 30, num2 = 40;
//     cout << "Before swap: num1 = " << num1 << ", num2 = " << num2 << endl;
//     swapValues(num1, num2);
//     cout << "After swapping, num1: " << num1 << ", num2: " << num2 << endl;

//     //swap two strings
//     string st1 = "Hello", st2 = "Mathias";
//     cout << "Before swap: st1 = " << st1 << ", st2 = " << st2 << endl;
//     swapValues(st1, st2);
//     cout << "After swapping, st1: " << st1 << ", st2: " << st2 << endl; 


//     return 0;


//code 2

#include<iostream>
#include<string> // Recommended for string operations, though not strictly needed for this part if Part A is separate

using namespace std;

// Assuming findMin from Part A or previous work might be here
template<typename T>
T findMin(T a, T b)
{
    return (a < b) ? a : b;
}

// Part B: Class Template Tasks
// Create a class template Calculator
template<typename T>
class Calculator
{
private:
    T num1;
    T num2;

public:
    // Constructor
    Calculator(T n1, T n2) : num1(n1), num2(n2) {}

    // add() function
    T add()
    {
        return num1 + num2;
    }

    // subtract() function
    T subtract()
    {
        return num1 - num2;
    }

    // multiply() function
    T multiply()
    {
        return num1 * num2;
    }

    // divide() function
    T divide()
    {
        if (num2 == T(0)) // Check for division by zero
        {
            cerr << "Error: Division by zero is not allowed." << endl;
            return T(0); // Return a default value for type T (e.g., 0 for int/float)
        }
        return num1 / num2;
    }
};

int main()
{
    // --- Demonstrating findMin (if you want to keep it from previous parts) ---
    cout << "--- Demonstrating findMin() ---" << endl;
    cout << "Min of 10 and 20 is: " << findMin(10, 20) << endl;
    cout << "Min of 15.5 and 10.2 is: " << findMin(15.5, 10.2) << endl;
    cout << "Min of 'a' and 'Z' is: '" << findMin('a', 'Z') << "'" << endl;


    // --- Demonstrating Calculator Class Template ---
    cout << "\n--- Demonstrating Calculator Class Template ---" << endl;

    // Demonstrate with int
    cout << "\nCalculator with int type:" << endl;
    Calculator<int> intCalc(20, 4);
    cout << "Numbers: 20 and 4" << endl;
    cout << "Addition: " << intCalc.add() << endl;
    cout << "Subtraction: " << intCalc.subtract() << endl;
    cout << "Multiplication: " << intCalc.multiply() << endl;
    cout << "Division: " << intCalc.divide() << endl;

    cout << "\nAttempting division by zero with int:" << endl;
    Calculator<int> intCalcDivByZero(10, 0);
    cout << "10 / 0 = ";
    intCalcDivByZero.divide(); // Error message will be printed by the function

    // Demonstrate with float
    cout << "\nCalculator with float type:" << endl;
    Calculator<float> floatCalc(12.5f, 2.5f);
    cout << "Numbers: 12.5 and 2.5" << endl;
    cout << "Addition: " << floatCalc.add() << endl;
    cout << "Subtraction: " << floatCalc.subtract() << endl;
    cout << "Multiplication: " << floatCalc.multiply() << endl;
    cout << "Division: " << floatCalc.divide() << endl;

    cout << "\nAttempting division by zero with float:" << endl;
    Calculator<float> floatCalcDivByZero(10.0f, 0.0f);
    cout << "10.0 / 0.0 = ";
    floatCalcDivByZero.divide(); // Error message will be printed by the function
    
    return 0;
}