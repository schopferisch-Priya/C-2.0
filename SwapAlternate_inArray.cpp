#include <iostream>
using namespace std;

void swapAlternate(int arr[], int size)
{
    for (int i = 0; i < size; i += 2)
    {
        if ((i + 1) < size)
        {
            swap(arr[i], arr[i + 1]);
        }
    }
}

void printArray(int arr[], int size)
{
    for (int i = 0; i < size; i++)
    {
        cout << arr[i] << '\t';
    }
}

int main()
{
    int arr[100];
    int size;
    cout << "Enter the size of array: ";
    cin >> size;
    cout << "Enter the elements of the array: ";

    for (int i = 0; i < size; i++)
    {
        cin >> arr[i];
    }
    swapAlternate(arr, size);
    cout << "Alternate Swaping of the array  is ";
    printArray(arr, size);
    return 0;
}