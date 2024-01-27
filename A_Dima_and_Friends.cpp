#include <iostream>
#include <bits/stdc++.h>

using namespace std;

int main()
{
    int n;
    cin >> n;
    vector<int> fingerShown(n);
    int ansCount = 0;
    for (int i = 0; i < n; i++)
    {
        cin >> fingerShown[i];
    }

    int sum = 0;

    for (int i : fingerShown)
    {
        sum += i;
    }

    int sum1 = sum + 1;
    int sum2 = sum + 2;
    int sum3 = sum + 3;
    int sum4 = sum + 4;
    int sum5 = sum + 5;

    if (sum1 % (n + 1) != 1)
    {
        ansCount++;
    }
    if (sum2 % (n + 1) != 1)
    {
        ansCount++;
    }
    if (sum3 % (n + 1) != 1)
    {
        ansCount++;
    }
    if (sum4 % (n + 1) != 1)
    {
        ansCount++;
    }
    if (sum5 % (n + 1) != 1)
    {
        ansCount++;
    }

    cout << ansCount;

    return 0;
}