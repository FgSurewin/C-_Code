// Chapter 20, Programming Challenge 5: Recursive Multiplication
#include <iostream>
using namespace std;

// Function prototype
long multiply(int, int);

int main()
{
    // Let's multiply 7 by 4...
    cout << multiply(7, 4);
    cout << endl;

    return 0;
}

//*******************************************
// Function multiply                        *
// This function uses recursion to multiply *
// x by y. The multiplication is performed  *
// as repetitive addition.                  *
//*******************************************

long multiply(int x, int y)
{
    if (x == 1)
        return y;
    else
        return y + multiply(x - 1, y);
}