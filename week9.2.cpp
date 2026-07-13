//bcs-03-0100/2025 //
//judah Muriithi//
//week 9 task2//
#include <iostream>
using namespace std;

class Vehicle
{
protected:
    string brand;
    int year;

public:
    void inputVehicle()
    {
        cout << "Enter vehicle brand: ";
        getline(cin, brand);

        cout << "Enter year of manufacture: ";
        cin >> year;
        cin.ignore();
    }

    void displayVehicle()
    {
        cout << "Brand: " << brand << endl;
        cout << "Year: " << year << endl;
    }
};

class Car : public Vehicle
{
private:
    int numberOfDoors;
    double engineCapacity;

public:
    void inputCar()
    {
        inputVehicle();

        cout << "Enter number of doors: ";
        cin >> numberOfDoors;

        cout << "Enter engine capacity (cc): ";
        cin >> engineCapacity;
    }

    void displayCar()
    {
        cout << "\n===== Car Details =====" << endl;

        displayVehicle();

        cout << "Number of Doors: " << numberOfDoors << endl;
        cout << "Engine Capacity: " << engineCapacity << " cc" << endl;
    }
};

int main()
{
    Car car;

    car.inputCar();
    car.displayCar();

    return 0;
}
