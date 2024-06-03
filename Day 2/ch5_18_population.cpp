// Chapter 5, Programming Challenge 18: Population Bar Chart
#include <iostream>
#include <fstream>
using namespace std;

int main()
{
    int population;     // To hold the population
    ifstream inputFile; // Input file

    // Open the file.
    inputFile.open("People.txt");

    // Display the table headings.
    cout << "PRAIRIEVILLE POPULATION GROWTH\n";
    cout << "(each * represents 1000 people)\n\n";

    // Display the table data.
    for (int year = 1900; year <= 2000; year += 20)
    {
        // Get a value from the file.
        inputFile >> population;

        // Dispaly the year.
        cout << year << "  ";

        // Display the bar chart.
        for (int star = 1; star <= (population / 1000); star++)
        {
            cout << "*";
        }
        cout << endl;
    }

    // Close the file.
    inputFile.close();

    return 0;
}