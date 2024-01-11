#include <bits/stdc++.h>
#include <iostream>
using namespace std;

int main()
{
    vector<char> result;
    string ans;
    string Borze;
    cin >> Borze;

    for (int i = 1; i < (Borze.size() + 1); i++)
    {
        if (Borze[i - 1] == '-' && Borze[i] == '.')
        {
            result.push_back('1');
            i++;
        }
        else if (Borze[i - 1] == '-' && Borze[i] == '-')
        {
            result.push_back('2');
            i++;
        }
        else
        {
            result.push_back('0');
        }
    }

    for (int i = 0; i < result.size(); i++)
    {
        ans += result[i];
    }

    cout << ans;

    return 0;
}