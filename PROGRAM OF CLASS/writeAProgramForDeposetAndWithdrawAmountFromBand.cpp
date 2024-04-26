#include <iostream>
#include <string>

class Account {
private:
    std::string accountNumber;
    double balance;

public:
    // Constructor
    Account(std::string accNumber, double initialBalance) {
        accountNumber = accNumber;
        balance = initialBalance;
    }

    // Member function to deposit  money
    void deposit(double amount) {
        balance += amount;
        std::cout << "Amount " << amount << " deposited successfully." << std::endl;
    }

    // Member function to withdraw money
    void withdraw(double amount) {
        if (amount > balance) {
            std::cout << "Insufficient balance." << std::endl;
        } else {
            balance -= amount;
            std::cout << "Amount " << amount << " withdrawn successfully." << std::endl;
        }
    }

    // Member function to display account details
    void display() {
        std::cout << "Account Number: " << accountNumber << std::endl;
        std::cout << "Balance: " << balance << std::endl;
    }
};

int main() {
    // Creating an object of class Account
    Account myAccount("123456789", 1000.0);

    // Trying to access private data members directly
    // This will generate a compile-time error
    // myAccount.balance = 5000;  // Error: 'double Account::balance' is private within this context

    // Accessing data members and member functions using public member functions
    myAccount.deposit(500);
    myAccount.display();
    myAccount.withdraw(200);
    myAccount.display();

    return 0;
}
