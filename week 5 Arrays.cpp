/*ROBINSON NYANGENA CT101/G/26684/25*/
#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;

int main() {

    // 1D ARRAY - WEEKLY REVENUE TRACKER
    double revenue[7];
    double totalRevenue = 0, averageRevenue;

    cout << "===== WEEKLY REVENUE TRACKER =====" << endl;

    for (int i = 0; i < 7; i++) {
        cout << "Enter revenue for day " << i + 1 << ": ";
        cin >> revenue[i];

        totalRevenue += revenue[i];
    }

    averageRevenue = totalRevenue / 7;

    cout << "\nTotal Weekly Revenue: " << totalRevenue << endl;
    cout << "Average Daily Revenue: " << averageRevenue << endl;


    // 2D ARRAY - ROOM OCCUPANCY (ONE BRANCH)
    int occupancy[5][10];
    int occupied, vacant;

    cout << "\n===== ROOM OCCUPANCY =====" << endl;

    srand(time(0));

    for (int i = 0; i < 5; i++) {
        occupied = 0;
        vacant = 0;

        for (int j = 0; j < 10; j++) {
            occupancy[i][j] = rand() % 2;

            if (occupancy[i][j] == 1) {
                occupied++;
            } else {
                vacant++;
            }
        }

        cout << "Floor " << i + 1 << endl;
        cout << "Occupied Rooms: " << occupied << endl;
        cout << "Vacant Rooms: " << vacant << endl;
    }


    // 3D ARRAY - MULTIPLE HOTEL BRANCHES
    int chain[3][5][10];
    int totalOccupied = 0;

    cout << "\n===== HOTEL CHAIN OCCUPANCY =====" << endl;

    for (int b = 0; b < 3; b++) {
        for (int f = 0; f < 5; f++) {
            for (int r = 0; r < 10; r++) {

                chain[b][f][r] = rand() % 2;

                if (chain[b][f][r] == 1) {
                    totalOccupied++;
                }
            }
        }
    }

    cout << "Total Occupied Rooms Across All Branches: "
         << totalOccupied << endl;

    cout << "Total Rooms in Hotel Chain: 150" << endl;

    return 0;
}
