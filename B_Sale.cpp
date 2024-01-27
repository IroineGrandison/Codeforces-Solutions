#include <iostream>
#include <bits/stdc++.h>

using namespace std;

int main()
{
    int n, m;
    cin >> n >> m;
    vector<int> prices(n);
    for (int i = 0; i < n; i++)
    {
        cin >> prices[i];
    }
    vector<int> v;
    for (int i = 0; i < n; i++)
    {
        if (prices[i] < 0)
        {
            v.push_back((-1) * prices[i]);
        }
    }

    sort(v.begin(), v.end());

    int length = v.size();
    int sum = 0;

    if (length < m)
    {
        for (int i = 0; i < length; i++)
        {
            sum += v[i];
        }
    }
    else
    {
        reverse(v.begin(), v.end());
        for (int i = 0; i < m; i++)
        {
            sum += v[i];
        }
    }

    cout << sum;
    return 0;
}