//bcs-03-0100/2025 //
//judah Muriithi//
//week 6 task2//
#include <iostream>
using namespace std;

class Student
{
private:
    string name;
    string admissionNo;
    double feeBalance;

public:
    void inputStudent()
    {
        cout << "Enter student name: ";
        getline(cin, name);

        cout << "Enter admission number: ";
        getline(cin, admissionNo);

        cout << "Enter fee balance: ";
        cin >> feeBalance;
    }

    void makePayment()
    {
        double amount;

        cout << "\nEnter payment amount: ";
        cin >> amount;

        if (amount <= feeBalance)
        {
            feeBalance = feeBalance - amount;
        }
        else
        {
            cout << "Payment cannot be greater than the balance." << endl;
        }
    }

    void displayStatus()
    {
        cout << "\n------ Student Details ------" << endl;
        cout << "Name: " << name << endl;
        cout << "Admission Number: " << admissionNo << endl;
        cout << "Remaining Fee Balance: Ksh " << feeBalance << endl;
    }
};

int main()
{
    Student student;

    student.inputStudent();
    student.makePayment();
    student.displayStatus();

    return 0;
}
