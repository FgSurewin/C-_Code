// Chapter 20, Programming Challenge 4: Recursive Array Sum
#include <iostream>
using namespace std;

// Function prototype
int arraySum(int[], int);

int main()
{
    // Create an array with some values in it.
    int array[] = {1, 2, 3, 4, 5, 6};

    // Display the sum of the values.
    cout << arraySum(array, 6) << endl;

    return 0;
}

//***********************************************
// arraySum function                            *
// This function recursively calculates the sum *
// of all the numbers in the arr argument.      *
// The elements parameter holds the number of   *
// elements that are in the array.              *
//***********************************************

int arraySum(int arr[], int elements)
{
    if (elements == 1)
    {
        // Base case:
        // If there is only 1 element, it is element 0.
        // Return the value in that element.
        return arr[0];
    }
    else
    {
        // Recursive case:
        // Return the sum of all the elements except the
        // last one, plus the last one.
        return arraySum(arr, elements - 1) + arr[elements - 1];
    }
}