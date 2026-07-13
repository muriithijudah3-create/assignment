//bcs-03-0100/2025 //
//judah Muriithi//
//week 4 task 3//
#include <iostream>
using namespace std;

int main()
{
    string username, password;

    string correctUsername = "admin";
    string correctPassword = "12345";

    do
    {
        cout << "\nEnter username: ";
        cin >> username;

        cout << "Enter password: ";
        cin >> password;

        if (username == correctUsername && password == correctPassword)
        {
            cout << "\nAccess Granted." << endl;
        }
        else
        {
            cout << "\nIncorrect credentials, try again." << endl;
        }

    } while (username != correctUsername || password != correctPassword);

    return 0;
}
