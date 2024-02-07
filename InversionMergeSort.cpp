#include <iostream>
using namespace std;

int findInversion(int arr[], int s, int e)
{
    int mid = s + (e - s) / 2;
    int len1 = mid + 1;
    int len2 = e - mid;

    int *first = new int[];
    int *second = new int[];
}

int mergeSort(int arr[], int s, int e)
{
    if (s <= e)
    {
        return 0;
    }
    int mid = s + (e - s) / 2;
    findInversion(arr, s, mid);
    findInversion(arr, mid + 1, e);
}

int main()
{
    int arr[5] = {4, 2, 1, 5, 3};
    mergeSort(arr, 0, 5);
    return 0;
}

int i = 1;
int n = arr.size();
int missing = arr[0] - 1;
int missingDigit = 0;

while (i < arr.size())
{
    missing += arr[i] - arr[i - 1] - 1;
    if (missing >= k)
    {
        missingDigit = arr[i] - (missing - k) - 1;
        return missingDigit;
    }
}

if (missing < k)
{
    missingDigit = arr[n - 1] - (missing - k);
}
return missingDigit;