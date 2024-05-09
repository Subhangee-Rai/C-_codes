// Suppose you are designing a simple banking system. Define an abstract class `Account` with the following specifications:

// - It should have a pure virtual function `withdraw()` to withdraw money from the account.
// - It should have a member variable `balance` to store the current balance.
// - It should have a virtual function `displayBalance()` to display the current balance.
// - It should have a virtual destructor.

// Then, create two derived classes `SavingsAccount` and `CurrentAccount` from the `Account` class with the following specifications:

// 1. `SavingsAccount`:
//    - Inherits from `Account`.
//    - Overrides the `withdraw()` function to apply a minimum balance constraint (e.g., minimum balance should be maintained in the account).
//    - Overrides the `displayBalance()` function to display the balance along with the account type.

// 2. `CurrentAccount`:
//    - Inherits from `Account`.
//    - Overrides the `withdraw()` function to apply an overdraft limit (e.g., maximum negative balance allowed).
//    - Overrides the `displayBalance()` function to display the balance along with the account type.

// Implement the classes and demonstrate their usage in a simple program. Ensure that the destructor of the `Account` class is called appropriately.

#include <iostream>
using namespace std;
using std::string;
class Banking
{
protected:
    float balance;

public:
    virtual void display_balance()
    {
        cout << "Balance: " << balance << endl;
    }
    virtual void withdraw(float amount) = 0;
    virtual void deposit(float amount) = 0;
    virtual ~Banking() { cout << "base class destructor" << endl; };
};
class SavingsAccount : public Banking
{
public:
    void deposit(float amount) override
    {
        balance += amount;
    }
    void withdraw(float amount) override
    {
        if ((balance - amount) < 2000)
        {
            cout << "Minimum limit reached" << endl;
            return;
        }
        balance -= amount;
    }
    void display_balance() override
    {
        cout << "SavingsAccount" << endl;
        cout << "Balance: " << balance << endl;
    }
    ~SavingsAccount() { cout << "Savings account destructor" << endl; }
};
class CurrentAccount : public Banking
{
public:
    void deposit(float amount) override
    {
        balance += amount;
    }
    void withdraw(float amount) override
    {
        if ((balance - amount) < (-500))
        {
            cout << "Maximum overdraft limit reached" << endl;
            return;
        }
        balance -= amount;
    }
    void display_balance() override
    {
        cout << "CurrentAccount" << endl;
        cout << "Balance: " << balance << endl;
    }
    ~CurrentAccount() { cout << "Current account destructor" << endl; }
};
int main()
{
    // Create objects of SavingsAccount and CurrentAccount
    SavingsAccount savings;
    CurrentAccount current;

    // Deposit some initial amount
    savings.deposit(5000);  // Deposit 5000 in savings account
    current.deposit(10000); // Deposit 10000 in current account

    // Display balances
    cout << "After initial deposits:" << endl;
    savings.display_balance(); // Display savings account balance
    current.display_balance(); // Display current account balance

    // Withdraw some amount
    savings.withdraw(2000); // Withdraw 2000 from savings account
    current.withdraw(3000); // Withdraw 3000 from current account

    // Display balances after withdrawal
    cout << "After withdrawal:" << endl;
    savings.display_balance(); // Display savings account balance
    current.display_balance(); // Display current account balance

    // Attempt to withdraw more than available balance
    savings.withdraw(4000);  // Attempt to withdraw 4000 from savings account
    current.withdraw(15000); // Attempt to withdraw 15000 from current account

    // Display balances after unsuccessful withdrawal
    cout << "After unsuccessful withdrawal:" << endl;
    savings.display_balance(); // Display savings account balance
    current.display_balance(); // Display current account balance

    return 0;
}