// Chapter 5, Programming Challenge 9: Hotel Occupancy
#include <iostream>
#include <iomanip>
using namespace std;

int main()
{
    int numFloors,         // Number of hotel floors
        numRooms,          // Number of rooms on a given floor
        occupied,          // Number of occupied rooms on a floor
        empty,             // Number of empty rooms on a floor
        totalRooms = 0,    // Total rooms in the hotel
        totalOccupied = 0, // Total number of occupied rooms
        totalEmpty = 0;    // Total number of empty rooms
    double occupancyRate;  // Percentage of rooms occupied

    // Get the number of floors.
    cout << "How many floors does the hotel have? ";
    cin >> numFloors;

    // Validate the number of floors.
    while (numFloors < 1)
    {
        cout << "Please enter a number greater than 0.\n";
        cin >> numFloors;
    }

    // Get room count and occupancy info for each floor.
    for (int count = 1; count <= numFloors; count++)
    {
        // Skip the iteration for the 13th floor.
        if (count == 13)
            continue; // Skip thirteenth floor

        // Get the number of rooms on this floor.
        cout << "\nHow many rooms are on floor " << count << "? ";
        cin >> numRooms;

        // Validate the number of rooms.
        while (numRooms < 10)
        {
            cout << "Please enter 10 or more: ";
            cin >> numRooms;
        }

        // Get the number of occupied rooms on this floor.
        cout << "How many of those rooms are occupied? ";
        cin >> occupied;

        // Validate the number of occupied rooms.
        while (occupied < 0 || occupied > numRooms)
        {
            cout << "The number should be in the range of "
                 << "0 through " << numRooms << ": ";
            cin >> occupied;
        }

        // Calculate the number of empty rooms on this floor.
        empty = numRooms - occupied;

        // Accumulate the total number of rooms.
        totalRooms += numRooms;

        // Accumulate the total number of occupied rooms.
        totalOccupied += occupied;

        // Accumulate the total number of empty rooms.
        totalEmpty += empty;
    }

    // Display the total number of rooms.
    cout << "\n\nThe hotel has a total of "
         << totalRooms << " rooms.\n";

    // Display the total number of occupied rooms.
    cout << totalOccupied << " are occupied.\n";

    // Display the total number of empty rooms.
    cout << totalEmpty << " are empty.\n";

    // Calculate the occupancy rate by dividing the total
    // number of occupied rooms by the total number of rooms.
    occupancyRate =
        static_cast<double>(totalOccupied) / totalRooms;

    // Display the occupancy rate as a percentage.
    cout << fixed << showpoint << setprecision(1);
    cout << "The occupancy rate is "
         << (occupancyRate * 100) << "%" << endl;

    return 0;
}