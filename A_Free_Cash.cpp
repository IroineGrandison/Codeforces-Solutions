#include <iostream>
#include <bits/stdc++.h>
#include <cmath>

using namespace std;

int main()
{
    int n;
    cin >> n;
    int max1 = INT32_MIN;
    int cash = 1;
    int preH, preM;
    cin >> preH >> preM;

    for (int i = 0; i < n - 1; i++)
    {
        int h, m;
        cin >> h >> m;
        if (h == preH && m == preM)
        {
            cash++;
        }
        else
        {
            cash = 1;
        }

        max1 = max(cash, max1);
        preH = h;
        preM = m;
    }
    max1 = max(cash, max1);
    cout << max1 << endl;
    return 0;
}