// Chapter 3, Programming Challenge 1: Miles per Gallon
#include <iostream>
using namespace std;

int main()
{
    double mileage, // To hold the calculated miles per gallon
        gallons,    // To hold the gas tank capacity (in gallons)
        miles;      // To hold the miles the car can go on 1 tank of gas

    // Get the gas tank capacity.
    cout << "How many gallons of gas can the car hold? ";
    cin >> gallons;

    // Get the miles the car can travel on a full tank.
    cout << "How many miles can you drive on a full tank? ";
    cin >> miles;

    // Calculate the miles per gallon
    mileage = miles / gallons;

    // Display the result
    cout << "\nThis car gets " << mileage << " miles per "
         << "gallon.\n";
    return 0;
}