#include <iostream>
#include <bits/stdc++.h>
#include <cmath>

using namespace std;

int main()
{
    int n;
    int m;
    cin >> n;
    vector<int> a(n);
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
    }
    cin >> m;
    vector<int> b(m);
    for (int i = 0; i < m; i++)
    {
        cin >> b[i];
    }

    vector<pair<int, int>> v;

    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            if (b[j] % a[i] == 0)
            {
                v.emplace_back(b[j], a[i]);
            }
        }
    }

    vector<int> pairs;

    for (int i = 0; i < v.size(); i++)
    {
        int x = (v[i].first / v[i].second);
        pairs.push_back(x);
    }

    int maxV = *max_element(pairs.begin(), pairs.end());

    int ans = count(pairs.begin(), pairs.end(), maxV);

    cout << ans;

    return 0;
}