#include <iostream>
using namespace std;

void showArray(int arr[], int SIZE)
{
    for (int i = 0; i < SIZE; i++)
    {
        cout << arr[i] << " ";
    }
    cout << endl;
}

int main()
{
    int *dArr = new int[5];
    for (int i = 0; i < 5; i++)
    {
        dArr[i] = i + 1;
    }
    showArray(dArr, 5);
    delete[] dArr;
    dArr = nullptr;

    return 0;
}
