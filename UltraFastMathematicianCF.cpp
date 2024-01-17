#include <bits/stdc++.h>
#include <iostream>
using namespace std;

int main()
{
    string n1, n2, ans;
    vector<char> v;

    cin >> n1 >> n2;

    for (int i = 0; i < n1.size(); i++)
    {
        if (n1[i] == n2[i])
        {
            v.push_back('0');
        }
        else
        {
            v.push_back('1');
        }
    }

    for (int i = 0; i < v.size(); i++)
    {
        ans += v[i];
    }

    cout << ans;

    return 0;
}