// Chapter 6, Programming Challenge 1: Markup
#include <iostream>
#include <iomanip>
using namespace std;

// Function prototype
double calculateRetail(double, double);

int main()
{
    double wholesale; // To hold the wholesale cost
    double markup;    // To hold the markup percentage

    // Get the wholesale cost.
    cout << "Enter the item's wholesale cost: ";
    cin >> wholesale;

    // Validate the wholesale cost.
    while (wholesale < 0)
    {
        cout << "Enter a positive value for "
             << "the wholesale cost: ";
        cin >> wholesale;
    }

    // Get the markup percentage.
    cout << "Enter the item's markup percentage: ";
    cin >> markup;

    // Validate the markup percentage.
    while (markup < 0)
    {
        cout << "Enter a positive value for "
             << "the markup percentage: ";
        cin >> markup;
    }

    // Display the item's retial price.
    cout << "The item's retail price is $"
         << setprecision(2) << fixed << showpoint
         << calculateRetail(wholesale, markup)
         << ".\n";

    return 0;
}

// ********************************************************
// The calculateRetail function receives the wholesale    *
// cost and the markup percentage as arguments, and       *
// returns the retail price of the item.                  *
// ********************************************************
double calculateRetail(double wholesale, double markup)
{
    return wholesale + wholesale * markup * 0.01;
}