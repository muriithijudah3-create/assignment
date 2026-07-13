//bcs-03-0100/2025 //
//judah Muriithi//
//week 8 task2//
#include <iostream>
using namespace std;

class RoomBooking
{
private:
    string guestName;
    int roomNumber;
    int daysBooked;

public:
    // Constructor
    RoomBooking(string name, int room, int days)
    {
        guestName = name;
        roomNumber = room;
        daysBooked = days;

        cout << "Room booking confirmed." << endl;
    }

    void displayBooking()
    {
        cout << "\n------ Booking Details ------" << endl;
        cout << "Guest Name : " << guestName << endl;
        cout << "Room Number: " << roomNumber << endl;
        cout << "Days Booked: " << daysBooked << endl;
    }

    // Destructor
    ~RoomBooking()
    {
        cout << "\nBooking ended, room released." << endl;
    }
};

int main()
{
    RoomBooking booking("Mary Wanjiku", 205, 4);

    booking.displayBooking();

    return 0;
}
