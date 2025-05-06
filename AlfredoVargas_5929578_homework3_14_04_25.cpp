// **********************************************************************
// *                                                                    *
// *                   Problem 1: Bank Account System                   *
// **********************************************************************

#include <iostream>
#include <string>
#include <ctime> // For time() and ctime()

using namespace std;

class BankAccount {
private:
    string accountNumber;
    double balance;

    // NEW attributes for the transaction history
    string transactionHistory[5];
    int transactionCount; // Keeps track of the total number of transactions made

public:
    static int totalAccounts;

    // Constructor
    BankAccount(string _accountNumber) {
        accountNumber = _accountNumber;
        balance = 0.0;
        totalAccounts++;

        // Initialize the transaction counter
        transactionCount = 0;
    }

    void deposit() {
        double amount;
        cout << "Enter the amount of money you want to deposit into the account: "
             << accountNumber << endl;
        cin >> amount;

        if (amount > 0) {
            balance += amount;
            cout << "Deposited $" << amount << " successfully. New balance: "
                 << balance << endl;

            // Store in the transaction history
            recordTransaction("DEPOSIT", amount);
        } else {
            cout << "Invalid deposit amount." << endl;
        }
    }

    void withdraw() {
        double extraction;
        cout << "Enter the amount of money you want to withdraw from the account: "
             << accountNumber << endl;
        cin >> extraction;

        if (extraction > 0 && extraction <= balance) {
            balance -= extraction;
            cout << "Withdrawal of $" << extraction << " successful. Remaining balance: "
                 << balance << endl;

            // Store in the transaction history
            recordTransaction("WITHDRAW", extraction);
        } else {
            cout << "Insufficient funds or invalid amount." << endl;
        }
    }

    void displayBalance() {
        cout << "The total amount of money in the account " << accountNumber
             << " is $" << balance << endl;
    }

    // NEW: Print the history of up to the last 5 transactions
    void printHistory() {
        cout << "\nTransaction history for account " << accountNumber << ":\n";
        // Show up to 5 transactions (or fewer if there aren't 5 yet)
        int limit = (transactionCount < 5) ? transactionCount : 5;

        for(int i = 0; i < limit; i++) {
            cout << transactionHistory[i] << endl;
        }
        if (limit == 0) {
            cout << "No transactions recorded yet.\n";
        }
        cout << endl;
    }

private:
    // Helper function to record each transaction
    void recordTransaction(const string &type, double amount) {
        // Get the (circular) storage index
        int index = transactionCount % 5;
        transactionCount++;

        // Get the current timestamp
        time_t now = time(0);
        char* dt = ctime(&now); // ctime() includes a newline at the end

        // Create the string for the history
        // Note: You can remove the newline in dt if you want a cleaner output
        string transactionInfo = type + ": $" + to_string(amount) + " on " + string(dt);

        // Store it in the array
        transactionHistory[index] = transactionInfo;
    }
};

// Static attribute initialization
int BankAccount::totalAccounts = 0;

// Example usage for Problem 1
int main() {
    BankAccount bank1("Ac001");
    BankAccount bank2("Ac002");

    // Bank 1
    bank1.deposit();
    bank1.withdraw();
    bank1.deposit();
    bank1.withdraw();
    bank1.displayBalance();
    bank1.printHistory(); // Print the transaction history

    // Bank 2
    bank2.deposit();
    bank2.withdraw();
    bank2.withdraw(); // Test insufficient funds
    bank2.displayBalance();
    bank2.printHistory(); // Print the transaction history

    cout << "Total accounts created: " << BankAccount::totalAccounts << endl;
    return 0;
}
