#include <iostream>
#include <bits/stdc++.h>
using namespace std;

int Check(vector<int> A)
{
    int ans = 0;
    for (int i = 0; i < A.size(); i++)
    {
        A[i] = A[i] >> 2;
        ans = A[i] + ans;
    }
    return ans;
}

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
    // cin >> size;
    // vector<int> arr(size);
    cout << "Enter size of the array: ";
    cin >> size;

    cout << "Enter the elements of an array: ";
    for (int i = 0; i < size; i++)
    {
        cin >> arr[i];
    }

    // cout << "Duplicate number of the array is " << findDuplicates(arr, size);
    int result = Check(arr, size);
    cout << Check(arr, size);

    return 0;
}