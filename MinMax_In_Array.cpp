#include <iostream>
using namespace std;

int getMax(int arr[], int size)
{

    int maxi = INT8_MIN;
    for (int i = 0; i < size; i++)
    {
        // if (arr[i] > Max)
        // Max = arr[i];

        maxi = max(maxi, arr[i]);
    }
    return maxi;
}

int getMin(int arr[], int size)
{

    int mini = INT8_MAX;
    for (int i = 0; i < size; i++)
    {
        // if (arr[i] > Max)
        // Max = arr[i];

        mini = min(mini, arr[i]);
    }
    return mini;
}

int main()
{

    int a[100];
    int size;
    cout << "Enter size of the array: ";
    cin >> size;
    for (int i = 0; i <= size; i++)
    {
        cin >> size;
    }
    cout << "Maximum of array is " << getMax(a, size) << endl;
    cout << "Minimum of array is " << getMin(a, size);

    return 0;
}