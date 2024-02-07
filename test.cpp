#include <iostream>
#include <bits/stdc++.h>
using namespace std;

int main()
{

    string s = "";
    char chars[] = {'a', 'a', 'b', 'b', 'b'};
    string str = "";
    for (int i = 0; i < 5; i++)
    {
        str.push_back(chars[i]);
    }
    cout << "STR: " << str << endl;

    char temp = chars[0];
    int count = 1;
    s.push_back(temp);

    for (int i = 1; i < 5; i++)
    {
        if (temp == chars[i])
        {
            count++;
        }
        else
        {
            if (count > 1)
            {
                string temp1 = to_string(count);
                s.append(temp1);
                count = 1;
                temp = chars[i];
                s.push_back(temp);
            }
        }
    }
    if (count > 1)
    {
        string temp1 = to_string(count);
        s.append(temp1);
    }
    cout << "String: " << s;

    return 0;
}
