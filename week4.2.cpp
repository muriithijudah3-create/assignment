//bcs-03-0100/2025 //
//judah Muriithi//
//week 4 task 2//
#include <iostream>
using namespace std;

int main()
{
    double balance = 50000;
    double withdrawal;

    cout << "Current Balance: Ksh " << balance << endl;

    while (balance > 0)
    {
        cout << "\nEnter withdrawal amount: ";
        cin >> withdrawal;

        if (withdrawal > balance)
        {
            cout << "Insufficient balance." << endl;
            break;
        }

        balance = balance - withdrawal;

        cout << "Remaining Balance: Ksh " << balance << endl;

        if (balance == 0)
        {
            cout << "Your account balance is zero." << endl;
            break;
        }
    }

    cout << "\nTransaction ended." << endl;

    return 0;
}
