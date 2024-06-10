#include <iostream>
using namespace std;

// Prototype
int *reverseArray(int[], int);
void showArray(int[], int);

int main()
{
    int test[5] = {1, 2, 3, 4, 5};
    int *reArr = reverseArray(test, 5);
    showArray(reArr, 5);

    return 0;
}

int *reverseArray(int arr[], int SIZE)
{
    if (SIZE <= 0)
    {
        return nullptr;
    }
    else
    {
        int *reverseArr = new int[SIZE];
        for (int i = 0; i < SIZE; i++)
        {
            reverseArr[i] = arr[SIZE - i - 1];
        }
        return reverseArr;
    }
}

void showArray(int arr[], int SIZE)
{
    for (int i = 0; i < SIZE; i++)
    {
        cout << arr[i] << " ";
    }
    cout << endl;
}