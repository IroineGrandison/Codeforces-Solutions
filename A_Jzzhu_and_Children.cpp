#include <iostream>
#include <bits/stdc++.h>

using namespace std;

int main()
{
    int n, m;
    cin >> n >> m;
    vector<int> toffeeWants(n);

    for (int i = 0; i < n; i++)
    {
        cin >> toffeeWants[i];
    }

    vector<int> line;

    for (int i = 1; i <= n; i++)
    {
        line.push_back(i);
    }


    while (line.size() != 1)
    {
        if (toffeeWants[0] <= m)
        {
            line.erase(line.begin() + 0);
            toffeeWants.erase(toffeeWants.begin() + 0);
        }
        else
        {
            toffeeWants[0] -= m;
            toffeeWants.push_back(toffeeWants[0]);
            toffeeWants.erase(toffeeWants.begin() + 0);
            line.push_back(line[0]);
            line.erase(line.begin() + 0);
        }
    }

    for (int i = 0; i < line.size(); i++)
    {
        cout << line[i] << endl;
    }


    return 0;
}