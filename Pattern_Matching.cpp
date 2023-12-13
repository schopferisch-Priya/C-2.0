#include <iostream>
using namespace std;
int main()
{
    int i = 1;
    int j, n;
    cout << "Enter number: ";
    cin >> n;

    // int count = 0;
    // while (i <= n)
    // {
    //     j = 1;
    //     while (j <= n)
    //     {
    //         cout << ++count << "\t";
    //         j++;
    //     }
    //     cout << endl;
    //     i++;
    // }

    // while (i <= n)
    // {
    //     j = 1;
    //     while (j <= i)
    //     {
    //         cout << "* ";
    //         j++;
    //     }
    //     cout << endl;
    //     i++;
    // }

    // while (i <= n)
    // {
    //     j = 1;
    //     while (j <= i)
    //     {
    //         cout << i + j - 1 << "\t";
    //         j++;
    //     }
    //     cout << endl;
    //     i++;
    // }

    // while (i <= n)
    // {
    //     j = 1;
    //     while (j <= i)
    //     {
    //         cout << i - j + 1 << "\t";
    //         j++;
    //     }
    //     cout << endl;
    //     i++;
    // }

    // char c = 'A';
    // char d;
    // while (i <= n)
    // {
    //     j = 1;
    //     while (j <= i)
    //     {
    //         d = c++;
    //         cout << d << "\t";
    //         j++;
    //     }
    //     cout << endl;
    //     i++;
    // }

    // char c = 'A';
    // char d;
    // while (i <= n)
    // {
    //     j = 1;

    //     while (j <= i)
    //     {
    //         d = c + n - i + j - 1;
    //         cout << d << "\t";
    //         j++;
    //     }
    //     cout << endl;
    //     i++;
    // }

    // while (i <= n)
    // {
    //     j = 1;
    //     while (j < i)
    //     {
    //         cout << " ";
    //         j++;
    //     }
    //     while (j <= n)
    //     {
    //         cout << "*";
    //         j++;
    //     }

    //     cout << endl;
    //     i++;
    // }

    // int k, l;
    // while (i <= n)
    // {
    //     j = n - i;
    //     while (j >= 1)
    //     {
    //         cout << " ";
    //         j--;
    //     }
    //     k = 1;
    //     while (k <= i)
    //     {
    //         cout << k;
    //         k++;
    //     }
    //     l = i - 1;
    //     while (l >= 1)
    //     {
    //         cout << l;
    //         l--;
    //     }
    //     cout << endl;
    //     i++;
    // }

    int k, l, m;
    while (i <= n)
    {
        j = 1;
        while (j <= (n - i + 1))
        {
            cout << j;
            j++;
        }
        k = 1;
        while (k < i)
        {
            cout << "*";
            k++;
        }
        l = 1;
        while (l < i)
        {
            cout << "*";
            l++;
        }
        m = n - i + 1;
        while (m >= 1)
        {
            cout << m;
            m--;
        }
        cout << endl;
        i++;
    }
}