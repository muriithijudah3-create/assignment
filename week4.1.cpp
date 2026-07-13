//bcs-03-0100/2025 //
//judah Muriithi//
//week 4 task 1//
#include <iostream>
using namespace std;

int main()
{
    string employeeName;
    double basicSalary, bonus, totalSalary;

    for (int i = 1; i <= 5; i++)
    {
        cout << "\nEmployee " << i << endl;

        cout << "Enter employee name: ";
        cin >> employeeName;

        cout << "Enter basic salary: ";
        cin >> basicSalary;

        bonus = basicSalary * 0.05;
        totalSalary = basicSalary + bonus;

        cout << "\n------ Employee Report ------" << endl;
        cout << "Name: " << employeeName << endl;
        cout << "Basic Salary: Ksh " << basicSalary << endl;
        cout << "Bonus: Ksh " << bonus << endl;
        cout << "Total Salary: Ksh " << totalSalary << endl;
    }

    return 0;
}
