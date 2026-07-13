//bcs-03-0100/2025 //
//judah Muriithi//
//week 3 task 1//
#include <iostream>
using namespace std;

string customerName;
double units;
double ratePerUnit = 50;
double totalBill;
double discount;
double finalBill;

void getCustomerDetails()
{
    cout << "Enter customer name: ";
    getline(cin, customerName);

    cout << "Enter units consumed: ";
    cin >> units;
}

double calculateBill()
{
    return units * ratePerUnit;
}

double applyDiscount(double bill)
{
    if (units > 100)
    {
        discount = bill * 0.10;
    }
    else
    {
        discount = 0;
    }

    return bill - discount;
}

void displayBill()
{
    cout << "\n========== WATER BILL ==========\n";
    cout << "Customer Name : " << customerName << endl;
    cout << "Units Used    : " << units << endl;
    cout << "Total Bill    : Ksh " << totalBill << endl;
    cout << "Discount      : Ksh " << discount << endl;
    cout << "Amount Payable: Ksh " << finalBill << endl;
    cout << "===============================\n";
}

int main()
{
    getCustomerDetails();

    totalBill = calculateBill();

    finalBill = applyDiscount(totalBill);

    displayBill();

    return 0;
}
