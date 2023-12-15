#include <iostream>
using namespace std;

int factorial(int n)
{
    int C = 1;
    for (int i = 1; i <= n; i++)
        C = i * C;
    return C;
}

int nCr(int n, int r)
{
    int num = factorial(n);
    int denom = factorial(r) * factorial(n - r);
    int ans = num / denom;
    return ans;
}

int main()
{
    int n, r;
    cout << "Enter n & r for calculating nCr: ";
    cin >> n;
    cin >> r;
    if (r > n)
    {
        cout << "r can't be greter than n.";
    }
    else
        cout << "Answer of nCr is " << nCr(n, r);

    return 0;
}