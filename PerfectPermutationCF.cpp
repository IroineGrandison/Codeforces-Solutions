#include <bits/stdc++.h>
#include <iostream>
using namespace std;

int main()
{
    vector<int> v;
    int n;
    cin >> n;
    if (n % 2 == 1)
    {
        cout << -1;
    }
    else
    {
        for (int i = n; i > 0; i--)
        {
            v.push_back(i);
        }
    }
    for (int i = 0; i < v.size(); i++)
    {
        cout << v[i] << " ";
    }

    return 0;
}