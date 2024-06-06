#include <iostream>
#include <string>
#include <map>
#include <unordered_map>

using namespace std;

void bubbleSort(int[], int);
void selectionSort(int[], int);
int binarySearch(int[], int, int);
int binarySearchRecursive(int[], int, int, int);
void printArray(int[], int);

int main()
{

    // unordered_map<int, int> memo;

    // memo.insert({ 5, 10 });

    ////memo.find(5);
    // cout << memo[6];

    /*for (int i = 0; i < 5; i++) {
        for (int j = 0; j <= i; j++) {
            cout << i;
        }
        cout << endl;
    }*/

    int arr[5] = {5, 2, 1, 3, 4};
    cout << "Before sorting: ";
    printArray(arr, 5);
    // bubbleSort(arr, 5);
    selectionSort(arr, 5);
    cout << "After sorting: ";
    printArray(arr, 5);
    cout << "Apply the binary search: " << endl;

    int target = 3;

    // cout << "The index of the target is: " << binarySearch(arr, 5, target) << endl;
    cout << "The index of the target is: " << binarySearchRecursive(arr, 0, 4, target) << endl;

    return 0;
}

// [5, 2, 1, 3, 4]
// [2, 5, 1, 3, 4] -> i = 0; j = 0
// [2, 1, 5, 3, 4] -> i = 0; j = 1
// [2, 1, 3, 5, 4] -> i = 0; j = 2
// [2, 1, 3, 4, 5] -> i = 0; j = 3
// -------------------------------
// [1, 2, 3, 4, 5] -> i = 1; j = 0
// [1, 2, 3, 4, 5] -> i = 1; j = 1

void bubbleSort(int arr[], int size)
{
    for (int i = 0; i < size - 1; i++)
    {
        for (int j = 0; j < size - 1 - i; j++)
        {
            if (arr[j] > arr[j + 1])
            {
                int temp = arr[j];
                arr[j] = arr[j + 1];
                arr[j + 1] = temp;

                cout << "i is: " << i << " | j is " << j << " -> ";
                printArray(arr, size);
            }
        }
    }
}

// [5, 2, 1, 3, 4]
// [1, 2, 5, 3, 4]
// [1, 2, 3, 5, 4]
// [1, 2, 3, 4, 5]

void selectionSort(int arr[], int size)
{
    for (int i = 0; i < size; i++)
    {
        int minIdx = i;
        int minValue = arr[i];
        for (int j = i + 1; j < size; j++)
        {
            if (arr[j] < minValue)
            {
                minIdx = j;
                minValue = arr[j];
            }
        }

        arr[minIdx] = arr[i];
        arr[i] = minValue;

        cout << "i is: " << i << " | minIdx is " << minIdx << " -> ";
        printArray(arr, size);
    }
}

// Requirement: the array must be sorted
//

int binarySearch(int arr[], int size, int target)
{
    int left = 0;
    int right = size - 1;
    int mid;
    int result = -1;

    while (left <= right)
    {
        mid = (left + right) / 2;
        if (arr[mid] == target)
        {
            result = mid;
            break;
        }
        else if (arr[mid] > target)
        {
            right = mid - 1;
        }
        else
        {
            left = mid + 1;
        }
    }

    return result;
}

int binarySearchRecursive(int arr[], int left, int right, int target)
{
    int mid = (left + right) / 2;

    // Base case
    if (left > right)
    {
        return -1;
    }
    else
    {
        if (arr[mid] == target)
        {
            return mid;
        }
        else if (arr[mid] > target)
        {
            return binarySearchRecursive(arr, left, mid - 1, target);
        }
        else
        {
            return binarySearchRecursive(arr, mid + 1, right, target);
        }
    }

    // Recursive case
}

void printArray(int arr[], int size)
{
    for (int i = 0; i < size; i++)
    {
        cout << arr[i] << " ";
    }
    cout << endl;
}