// Chapter 3, Programming Challenge 7: Box Office
#include <iostream>
#include <string>
#include <iomanip>
using namespace std;

int main()
{
    // Constants
    const double PERCENTAGE_KEPT = 0.2; // Percentage kept by theater
    const double ADULT_PRICE = 10.0;    // Adult ticket price
    const double CHILD_PRICE = 6.0;     // Child ticket price

    // Variables
    string movieName;   // The name of the movie
    double netProfit;   // The theater's net profit
    double grossProfit; // The theater's gross profit
    double distributor; // The amount paid to distributor
    int adultTickets;   // The number of adult tickets sold
    int childTickets;   // The number of child tickets sold

    // Get the name of the movie.
    cout << "Enter the name of the movie: ";
    getline(cin, movieName);

    // Get the number of adult tickets sold.
    cout << "Enter the number of adult tickets sold: ";
    cin >> adultTickets;

    // Get the number of child tickets sold.
    cout << "Enter the number of child tickets sold: ";
    cin >> childTickets;

    // Calculate gross profit.
    grossProfit = (adultTickets * ADULT_PRICE) +
                  (childTickets * CHILD_PRICE);

    // Calculate the net profit.
    netProfit = PERCENTAGE_KEPT * grossProfit;

    // Calculate the distributor's profit.
    distributor = grossProfit - netProfit;

    // Display the report.
    cout << "\nRevenue Report\n"
         << "==============\n"
         << "Movie Name:                  "
         << "\"" << movieName << "\"" << endl
         << "Adult Tickets Sold:          "
         << setw(8) << adultTickets << endl
         << "Child Tickets Sold:          "
         << setw(8) << childTickets << endl
         << fixed << showpoint << setprecision(2)
         << "Gross Box Office Profit:    $"
         << setw(8) << grossProfit << endl
         << "Net Box Office Profit:      $"
         << setw(8) << netProfit << endl
         << "Amount Paid to Distributor: $"
         << setw(8) << distributor << endl;
    return 0;
}