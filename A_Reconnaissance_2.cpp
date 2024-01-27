#include <bits/stdc++.h>
#include <iostream>
#include <cmath>

using namespace std;

int main()
{
    int n;
    cin >> n;
    vector<int> heights(n);

    for (int i = 0; i < n; i++)
    {
        cin >> heights[i];
    }

    int min = abs(heights[0] - heights[n - 1]);
    int idx1 = 1, idx2 = n;

    for (int i = 0; i < n - 1; i++)
    {
        if (abs(heights[i] - heights[i + 1]) < min)
        {
            min = abs(heights[i] - heights[i + 1]);
            idx1 = i + 1;
            idx2 = i + 2;
        }
    }

    cout << idx1 << " " << idx2 << endl;

    return 0;
}
