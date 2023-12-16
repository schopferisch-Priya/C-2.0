#include <iostream>
using namespace std;

int findDuplicates(int arr[], int size)
{
    int ans = 0;
    // XOR ing all array elements
    for (int i = 0; i < size; i++)
    {
        ans = ans ^ arr[i];
    }

    // XOR [1, n-1]
    for (int i = 1; i < size; i++)
    {
        ans = ans ^ i;
    }
    return ans;
}

int main()
{
    int arr[1000];
    int size;
    cout << "Enter size of the array: ";
    cin >> size;

    cout << "Enter the elements of an array: ";
    for (int i = 0; i < size; i++)
    {
        cin >> arr[i];
    }

    cout << "Duplicate number of the array is " << findDuplicates(arr, size);

    return 0;
}