#include <iostream>
using namespace std;

void reverseArray(int arr[], int size)
{
    int start = 0;
    int end = size - 1;
    int temp = 0;

    while (start <= end)
    {
        // temp = arr[start];
        // arr[start] = arr[end];
        // arr[end] = temp;

        swap(arr[start], arr[end]);

        start++;
        end--;
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
    int arr[INT16_MAX];
    int size;
    cout << "Enter the size of array: ";
    cin >> size;
    cout << "Enter the elements of the array: ";

    for (int i = 0; i < size; i++)
    {
        cin >> arr[i];
    }
    reverseArray(arr, size);
    cout << "Reverse of the array is ";
    printArray(arr, size);
    return 0;
}