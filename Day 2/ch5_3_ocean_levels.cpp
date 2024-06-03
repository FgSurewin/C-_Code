// Chapter 5, Programming Challenge 3: Ocean Levels
#include <iostream>
#include <iomanip>
using namespace std;

int main()
{
    // Constants
    const double RISE_PER_YEAR = 1.5;
    const int YEARS = 25;

    double oceanRise = 0.0; // To hold the rise

    // Set the numeric output formatting.
    cout << setprecision(2) << fixed << showpoint;

    // Display the table heading.
    cout << "Year\t" << "Rise\n"
         << "================\n";

    // Display the table data.
    for (int year = 1; year <= YEARS; year++)
    {
        // Calculate the rise in ocean level.
        oceanRise = RISE_PER_YEAR * year;

        // Display the year and rise in ocean level.
        cout << year << "\t"
             << setw(5) << oceanRise << " mm"
             << "\n----------------\n";
    }

    return 0;
}