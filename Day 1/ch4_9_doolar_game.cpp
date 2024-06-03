// Chapter 4, Programming Challenge 9: Change for a Dollar Game
#include <iostream>
using namespace std;

int main()
{
    // Constants
    const double PENNY = 0.01;
    const double NICKLE = 0.05;
    const double DIME = 0.10;
    const double QUARTER = 0.25;
    const double DOLLAR = 1.00;

    int numPennies;  // To hold the number of pennies
    int numNickles;  // To hold the number of nickles
    int numDimes;    // To hold the number of dimes
    int numQuarters; // To hold the number of quarters
    double total;    // To hold the total

    // Display the objective of the game.
    cout << "Let's play a change-counting game.\n\n"
         << "Enter the number of coins needed to make "
         << "exactly one dollar.\n\n";

    // Get the number of pennies.
    cout << "Enter the number of pennies: ";
    cin >> numPennies;

    // Get the number of nickles.
    cout << "Enter the number of nickles: ";
    cin >> numNickles;

    // Get the number of dimes.
    cout << "Enter the number of dimes: ";
    cin >> numDimes;

    // Get the number of quarters.
    cout << "Enter the number of quarters: ";
    cin >> numQuarters;

    // Calculate the total.
    total = numPennies * PENNY +
            numNickles * NICKLE +
            numDimes * DIME +
            numQuarters * QUARTER;

    // Determine the results.
    if (total > DOLLAR)
        cout << "\nSorry, that's more than one dollar.\n";
    else if (total < DOLLAR)
        cout << "\nSorry, that's less than one dollar.\n";
    else
        cout << "\nCongratulations! You win!\n";

    return 0;
}