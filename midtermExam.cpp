// #include<iostream>

// using namespace std;
// const int MAX =0;

// int main()
// {
//     int SalespeopleFrequency[MAX] = {};
//     int totalSales[MAX] = {};
//     int 
//     int numberOfSalesPerson;

//     cout << "How many sales people do you have: " << endl;
//     cin >> numberOfSalesPerson;



//     return 0;
// }


#include <iostream>
using namespace std;

int main() {
    const int baseSalary = 200;
    const double commissionRate = 0.09;

    int counter1 = 0; // $200–299
    int counter2 = 0; // $300–399
    int counter3 = 0; // $400–499
    int counter4 = 0; // $500–599
    int counter5 = 0; // $600–699
    int counter6 = 0; // $700–799
    int counter7 = 0; // $800–899
    int counter8 = 0; // $900–999
    int counter9 = 0; // $1000 and above

    int sales;
    cout << "Enter sales amounts for each salesperson (enter -1 to finish):\n";

    while (true) {
        cout << "Sales amount: ";
        cin >> sales;

        if (sales == -1) {
            break;
        }

        double totalEarnings = baseSalary + commissionRate * sales;
        int earnings = static_cast<int>(totalEarnings);

        if (earnings >= 200 && earnings <= 299) {
            ++counter1;
        }
        else if (earnings >= 300 && earnings <= 399) {
            ++counter2;
        }
        else if (earnings >= 400 && earnings <= 499) {
            ++counter3;
        }
        else if (earnings >= 500 && earnings <= 599) {
            ++counter4;
        }
        else if (earnings >= 600 && earnings <= 699) {
            ++counter5;
        }
        else if (earnings >= 700 && earnings <= 799) {
            ++counter6;
        }
        else if (earnings >= 800 && earnings <= 899) {
            ++counter7;
        }
        else if (earnings >= 900 && earnings <= 999) {
            ++counter8;
        }
        else if (earnings >= 1000) {
            ++counter9;
        }
        else {
            cout << "Earnings less than $200 are not categorized.\n";
        }
    }

    // Display results
    cout << "\nEarnings distribution:\n";
    cout << "$200–299: " << counter1 << endl;
    cout << "$300–399: " << counter2 << endl;
    cout << "$400–499: " << counter3 << endl;
    cout << "$500–599: " << counter4 << endl;
    cout << "$600–699: " << counter5 << endl;
    cout << "$700–799: " << counter6 << endl;
    cout << "$800–899: " << counter7 << endl;
    cout << "$900–999: " << counter8 << endl;
    cout << "$1000 and above: " << counter9 << endl;

    return 0;
}
