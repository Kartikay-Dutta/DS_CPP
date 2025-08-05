#include <iostream>
using namespace std;

class BankAccount {
private:
    double balance;  // Private variable
public:
    BankAccount() {
        balance = 0;
    }
    void deposit(double amount) {
        if (amount > 0) {
            balance += amount;
        } else {
            cout << "Invalid deposit amount!" << endl;
        }
    }
    void withdraw(double amount) {
        if (amount > 0 && amount <= balance) {
            balance -= amount;
        } else {
            cout << "Invalid withdraw amount or insufficient balance!" << endl;
        }
    }
    double getBalance() {
        return balance;
    }
};
int main() {
    BankAccount acc1, acc2;

    // 1. Deposit amounts
    acc1.deposit(1000);
    acc2.deposit(500);

    // 2. Withdraw 200 from both
    acc1.withdraw(200);
    acc2.withdraw(200);

    // 3. Print both balances
    cout << "Account 1 Balance: " << acc1.getBalance() << endl;
    cout << "Account 2 Balance: " << acc2.getBalance() << endl;

    // 4. This would cause an error (Uncommenting this will fail)
    // acc1.balance = 5000;  // Not allowed, balance is private

    return 0;
}
