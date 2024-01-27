#include <iostream>
#include <bits/stdc++.h>

using namespace std;

int main()
{
    int k;
    vector<int> months(12);
    cin >> k;
    for (int i = 0; i < 12; i++)
    {
        cin >> months[i];
    }

    sort(months.begin(), months.end());
    reverse(months.begin(), months.end());
    int s = 0;

    for (int i = 0; i < 12; i++)
    {
        s += months[i];
    }
    if (k == 0)
    {
        cout << 0;
    }
    else if (s < k)
    {
        cout << -1;
    }
    else
    {
        int sum = 0;
        int count = 0;
        for (int i = 0; i < 12; i++)
        {
            sum += months[i];
            count++;
            if (sum >= k)
            {
                cout << count << endl;
                break;
            }
        }
    }
    return 0;
}