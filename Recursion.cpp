#include <iostream>
using namespace std;
int sumArray(int arr[], int n)
{
    if (n == 0)
    {
        return 0;
    }
    return arr[n - 1] + sumArray(arr, n - 1);
}

bool isPresent(int *arr, int n, int key)
{
    if (n <= 0)
    {
        return false;
    }
    if (arr[n - 1] == key)
    {
        return true;
    }
    return isPresent(arr, n - 1, key);
}

int power(int base, int p)
{
    if (p == 0)
    {
        return 1;
    }
    if (p % 2 == 0)
    {
        p = p / 2;
        return power(base, p) * power(base, p);
    }
    return base * power(base, (p - 1) / 2) * power(base, (p - 1) / 2);
}

void bubbleSort(int *arr, int size)
{
    if (size < 0)
    {
        return;
    }
    for (int i = 0; i < size; i++)
    {
        if (arr[i] > arr[i + 1])
        {
            swap(arr[i], arr[i + 1]);
        }
    }
    bubbleSort(arr, --size);
}

void print(int *arr, int size)
{
    for (int i = 0; i < size; i++)
    {
        cout << arr[i] << "\t";
    }
}

int main()
{
    int arr[5] = {3, 2, 5, 1, 7};
    // cout << "Sum of the elements of an array is " << sumArray(arr, 5);
    // cout << "\nElement 6 is present or not: " << isPresent(arr, 5, 6);

    // cout << "Answer is " << power(3,10);

    bubbleSort(arr, 5);
    print(arr, 5);
    return 0;
}