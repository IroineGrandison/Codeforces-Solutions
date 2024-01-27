#include <iostream>
#include <bits/stdc++.h>
#include <cmath>

typedef long long ll;
 
using namespace std;
 
int main()
{
    ll n;
    cin >> n;
    vector<ll> v(n);
    for (ll i = 0; i < n; i++)
    {
        cin >> v[i];
    }

    ll min = *min_element(v.begin(), v.end());

    int count1 = count(v.begin(), v.end(), min);

    if (count1 > 1)
    {
        cout << "Still Rozdil";
    }
    else
    {
        for (ll i = 0; i < n; i++)
        {
            if (min == v[i])
            {
                cout << (i+1);
            }
        }
    }

    return 0;
}