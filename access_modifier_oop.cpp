#include <iostream>
using namespace std;

class BankAccount {

private:
    // Private data member
    double balance;

public:
    // Setter function
    void setBalance(double amount) {
        balance = amount;
    }

    // Getter function
    double getBalance() {
        return balance;
    }

    // Display function
    void displayBalance() {
        cout << "Balance: " << balance << endl;
    }
};

int main() {

    // Creating an object
    BankAccount account1;

    // Setting balance using setter
    account1.setBalance(5000);

    // Getting balance using getter
    cout << "Account Balance: "
         << account1.getBalance() << endl;

    account1.displayBalance();

    // Direct access is not allowed:
    // account1.balance = 7000;

    return 0;
}