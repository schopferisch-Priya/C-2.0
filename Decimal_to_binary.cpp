#include <iostream>
#include <math.h>
using namespace std;
int main()
{
    int n;
    // cout << "Conversion of decimal into binary" << endl;
    // cout << "Enter number:";
    // cin >> n;

    // int ans = 0;
    // int i = 0;

    // while (n != 0)
    // {
    //     int bit = n & 1;
    //     ans = (bit * pow(10, i)) + ans;
    //     n = n >> 1;
    //     i++;
    // }
    // cout << "Answer: " << ans;

    cout << "Conversion of binary to decimal" << endl;
    cout << "Enter number:";
    cin >> n;

    int ans = 0;
    int i = 0;
    while (n != 0)
    {
        int digit = n % 10;
        ans = ans + (digit * pow(2, i));
        n = n / 10;
        i++;
    }
    cout << "Answer: " << ans;
}