#include <iostream>
using namespace std;

long long int mySqrt(int x)
{

    int s = 0;
    int e = x;
    long long int mid = s + (e - s) / 2;
    long long int ans = -1;

    while (s <= e)
    {
        long long int square = mid * mid;
        if (square == x)
        {
            return mid;
        }
        else if (square < x)
        {
            ans = mid;
            s = mid + 1;
        }
        else
        {
            e = mid - 1;
        }
        mid = s + (e - s) / 2;
    }
    return ans;
}

double morePrecision(int x, int precise, int tempSol)
{
    double ans = tempSol;
    double factor = 1;
    for (int i = 0; i < precise; i++)
    {
        factor = factor / 10;
        for (double j = ans; j * j < x; j = j + factor)
        {
            ans = j;
        }
    }
    return ans;
}

int main()
{
    int num;
    cout << "Enter number: ";
    cin >> num;

    long long int tempSol = mySqrt(num);
    cout << "\nExact square root of " << num << " is " << morePrecision(num, 3, tempSol);
    return 0;
}
