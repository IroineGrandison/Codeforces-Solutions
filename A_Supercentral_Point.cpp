#include <iostream>
#include <bits/stdc++.h>

using namespace std;

int main()
{
    int n;
    int count = 0;
    cin >> n;
    vector<pair<int, int>> cords;

    for (int i = 0; i < n; i++)
    {
        int a, b;
        cin >> a >> b;
        cords.emplace_back(a, b);
    }

    for (int i = 0; i < n; i++)
    {
        int x = cords[i].first;
        int y = cords[i].second;
        int t(0), r(0), b(0), l(0);

        for (int j = 0; j < n; j++)
        {
            if (x == cords[j].first && y > cords[j].second)
            {
                t++;
            }
            if (x > cords[j].first && y == cords[j].second)
            {
                r++;
            }
            if (x == cords[j].first && y < cords[j].second)
            {
                b++;
            }
            if (x < cords[j].first && y == cords[j].second)
            {
                l++;
            }
        }
        if (t > 0 && r > 0 && b > 0 && l > 0)
        {
            count++;
        }
    }
    cout << count;
    return 0;
}