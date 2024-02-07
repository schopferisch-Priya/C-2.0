#include <iostream>
using namespace std;

int uniqueNum(int arr[], int size)
{
    int i = 1;
    int ans = 0;

    for (int i = 0; i < size; i++)
    {
        ans = ans ^ arr[i];
    }

    return ans;
}

int main()
{
    int arr[INT16_MAX];
    int size;
    cout << "Enter size of the array: ";
    cin >> size;

    cout << "Enter the elements of an array: ";
    for (int i = 0; i < size; i++)
    {
        cin >> arr[i];
    }

    cout << "Unique elements of the array is " << uniqueNum(arr, size);

    return 0;
}