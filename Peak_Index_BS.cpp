#include <iostream>
#include <vector>
using namespace std;

int peakIndexInMountainArray(int arr[], int size)
{
    int s = 0;
    int e = size - 1;
    int mid = s + (e - s) / 2;

    while (s <= e)
    {
        if (arr[mid - 1] < arr[mid] && arr[mid + 1] < arr[mid])
        {
            return mid;
        }
        else if (arr[mid - 1] < arr[mid])
        {
            s = mid + 1;
        }
        else
        {
            e = mid;
        }
        int mid = s + (e - s) / 2;
    }
    return s;
}

int main()
{

    // vector<int> arr;
    // arr.push_back(3);
    // arr.push_back(4);
    // arr.push_back(5);
    // arr.push_back(1);

    int arr[4] = {3, 4, 5, 1};

    cout << "Peak Index in Mountain array is " << peakIndexInMountainArray(arr, 4);

    return 0;
}