// #include <iostream>

// using namespace std;

// int main() {
//     const int SIZE = 9; // Number of earning ranges
//     int frequency[SIZE] = {0}; // Array to count how many salespeople fall into each range
//     int numSalespeople;

//     // Ask user how many salespeople to process
//     cout << "How many salespeople? ";
//     cin >> numSalespeople;

//     // Loop to input sales for each salesperson
//     for (int i = 0; i < numSalespeople; ++i) {
//         double sales;
//         cout << "Enter sales for salesperson #" << (i + 1) << ": ";
//         cin >> sales;

//         // Calculate earnings based on formula
//         double earnings = 200.0 + (0.09 * sales);

//         // Print the earnings for this salesperson (rounded down to integer)
//         cout << "Salesperson " << (i + 1) << ": $" << (int)earnings << endl;

//         // Determine the index in the frequency array
//         int index;
//         if (earnings >= 1000)
//             index = 8; // Last index for $1000 and above
//         else
//             index = (int)((earnings - 200) / 100); // Each range covers $100

//         // Increment the appropriate range
//         frequency[index]++;
//     }

//     // Labels for each earnings range
//     const char* ranges[SIZE] = {
//         "$200–299", "$300–399", "$400–499", "$500–599", "$600–699",
//         "$700–799", "$800–899", "$900–999", "$1000 and above"
//     };

//     // Output the frequency table
//     cout << "\nEarnings Range   : Number of Salespeople\n";
//     for (int i = 0; i < SIZE; ++i) {
//         cout << ranges[i] << "   : " << frequency[i] << endl;
//     }

//     return 0;
// }


#include <iostream>
using namespace std;

int main() {
    double celsius = 36.6;
    double fahrenheit;

    //declare the pointer
    double *tempPtr;

    // give a value to the pointer
    tempPtr = &celsius;

    // print the value of the pointer
    cout << "Value (Celsius) via pointer: " << *tempPtr << endl;

    // use the formula for the convertion and use the the pointer insted of the variable
    fahrenheit = (*tempPtr * 9.0 / 5.0) + 32.0;

    //  Print the new value
    cout << "Converted to Fahrenheit: " << fahrenheit << endl;

    // print the memory addres once again
    cout << "Memory address of celsius: " << &celsius << endl;

    return 0;
}
