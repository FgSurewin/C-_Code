// Chapter 4, Programming Challenge 14: Bank Charges
#include <iostream>
#include <iomanip>
using namespace std;

int main()
{
    // Constants
    const double MONTHLY_FEE = 10.00; // Base monthly fee
    const double MIN_BAL = 400.00;    // minimum balance
    const double LOW_BAL_FEE = 15.00; // extra fee for low balance

    int numChecks;      // Number of checks written for the month
    double acctBalance; // Account balance before subtracting check fees
    double checkFee;    // Fee based on number of checks written
    double totalFees;   // Total monthly bank fees

    cout << "Enter the following information about your checking account.\n";

    // Get the beginning balance for the account.
    cout << "Beginning balance: $";
    cin >> acctBalance;

    // Get the number of checks that were written.
    cout << "Number of checks written: ";
    cin >> numChecks;

    // Determine whether the account is overdrawn.
    if (acctBalance < 0.00)
        cout << "\nYour account is overdrawn!";

    // Validate number of checks written.
    if (numChecks < 0)
        cout << "\nNumber of checks must be zero or more.\n";
    else
    { // numChecks is valid, so we can calulate the fees.
        // Calculate checkFee
        if (numChecks < 20)
            checkFee = numChecks * 0.10;
        else if (numChecks <= 39)
            checkFee = numChecks * 0.08;
        else if (numChecks <= 59)
            checkFee = numChecks * 0.06;
        else
            checkFee = numChecks * 0.04;

        // Calculate totalFees
        totalFees = MONTHLY_FEE + checkFee;
        if (acctBalance < MIN_BAL)
            totalFees += LOW_BAL_FEE;

        // Display results
        cout << fixed << showpoint << setprecision(2);
        cout << "\nThe bank fee this month is $"
             << totalFees << endl
             << endl;
    }

    return 0;
}