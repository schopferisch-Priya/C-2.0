#include <iostream>
using namespace std;

int firstOccurence(int arr[], int size, int k)
{
    int s = 0;
    int e = size - 1;
    int mid = s + (e - s) / 2;
    int ans = -1;
    while (s <= e)
    {
        if (arr[mid] == k)
        {
            ans = mid;
            e = mid - 1;
        }
        else if (arr[mid] > k)
        {
            e = mid - 1;
        }
        else
        {
            s = mid + 1;
        }
        mid = s + (e - s) / 2;
    }
    return ans;
}

int lastOccurence(int arr[], int size, int k)
{
    int s = 0;
    int e = size - 1;
    int mid = s + (e - s) / 2;
    int ans = 0;
    while (s <= e)
    {
        if (arr[mid] == k)
        {
            ans = mid;
            s = mid + 1;
        }
        else if (arr[mid] > k)
        {
            e = mid - 1;
        }
        else
        {
            s = mid + 1;
        }
        mid = s + (e - s) / 2;
    }
    return ans;
}

int main()
{

    int even[10] = {1, 2, 3, 3, 3, 3, 3, 3, 3, 5};
    cout << "First Occurence of array is " << firstOccurence(even, 10, 3);
    cout << "\nLast Occurence of array is " << lastOccurence(even, 10, 3);

    return 0;
}