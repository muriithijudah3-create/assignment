//bcs-03-0100/2025 //
//judah Muriithi//
//week 5//
#include <iostream>
#include <cstdlib>
#include <ctime>

using namespace std;

int main()
{
    // 1D Array - Weekly Revenue
    double revenue[7];
    double totalRevenue = 0;
    double averageRevenue;

    cout << "===== WEEKLY REVENUE =====" << endl;

    for (int i = 0; i < 7; i++)
    {
        cout << "Enter revenue for Day " << i + 1 << ": ";
        cin >> revenue[i];

        totalRevenue += revenue[i];
    }

    averageRevenue = totalRevenue / 7;

    cout << "\nTotal Weekly Revenue: Ksh " << totalRevenue << endl;
    cout << "Average Daily Revenue: Ksh " << averageRevenue << endl;


    // 2D Array - Room Occupancy
    int occupancy[5][10];

    srand(time(0));

    cout << "\n===== ROOM OCCUPANCY =====" << endl;

    for (int floor = 0; floor < 5; floor++)
    {
        int occupied = 0;
        int vacant = 0;

        for (int room = 0; room < 10; room++)
        {
            occupancy[floor][room] = rand() % 2;

            if (occupancy[floor][room] == 1)
                occupied++;
            else
                vacant++;
        }

        cout << "Floor " << floor + 1
             << " -> Occupied: " << occupied
             << " | Vacant: " << vacant << endl;
    }


    // 3D Array - Hotel Chain
    int chain[3][5][10];
    int totalOccupied = 0;

    cout << "\n===== HOTEL CHAIN REPORT =====" << endl;

    for (int branch = 0; branch < 3; branch++)
    {
        for (int floor = 0; floor < 5; floor++)
        {
            for (int room = 0; room < 10; room++)
            {
                chain[branch][floor][room] = rand() % 2;

                if (chain[branch][floor][room] == 1)
                {
                    totalOccupied++;
                }
            }
        }
    }

    cout << "Total Occupied Rooms in all Branches: "
         << totalOccupied << endl;

    return 0;
}
