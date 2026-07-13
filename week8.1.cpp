//bcs-03-0100/2025 //
//judah Muriithi//
//week 8 task1//
#include <iostream>
using namespace std;

class BankAccount
{
private:
    string accountHolder;
    int accountNumber;
    double accountBalance;

public:
    // Constructor
    BankAccount(string name, int number, double balance)
    {
        accountHolder = name;
        accountNumber = number;
        accountBalance = balance;

        cout << "Account successfully created." << endl;
    }

    void displayAccount()
    {
        cout << "\n------ Account Details ------" << endl;
        cout << "Account Holder : " << accountHolder << endl;
        cout << "Account Number : " << accountNumber << endl;
        cout << "Account Balance: Ksh " << accountBalance << endl;
    }

    // Destructor
    ~BankAccount()
    {
        cout << "\nAccount closed successfully." << endl;
    }
};

int main()
{
    BankAccount account("John Mwangi", 12345678, 50000);

    account.displayAccount();

    return 0;
}
