#include <iostream>
using namespace std;

class BankAccount {
private:
    int accountNumber;
    string accountHolderName;
    double balance;

public:
    // Constructor to initialize account details
    BankAccount(int accNum, string name, double initialBalance) {
        accountNumber = accNum;
        accountHolderName = name;
        balance = initialBalance;
    }

    // Deposit money
    void deposit(double amount) {
        balance += amount;
        cout << "Deposited: " << amount << " New Balance: " << balance << endl;
    }

    // Withdraw money (checking if balance is sufficient)
    void withdraw(double amount) {
        if (amount > balance) {
            cout << "Insufficient balance!" << endl;
        } else {
            balance -= amount;
            cout << "Withdrawn: " << amount << " Remaining Balance: " << balance << endl;
        }
    }

    // Display account details
    void display() {
        cout << "Account Number: " << accountNumber << endl;
        cout << "Account Holder: " << accountHolderName << endl;
        cout << "Balance: " << balance << endl;
    }
};

// Main function to test the class
int main() {
    BankAccount acc1(101, "Tushar Bisht", 5000.0);

    acc1.display();
    acc1.deposit(2000);
    acc1.withdraw(3000);
    acc1.withdraw(5000); // Should not allow this

    return 0;
}
