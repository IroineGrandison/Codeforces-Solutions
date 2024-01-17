#include <iostream>
#include <bits/stdc++.h>

using namespace std;

int isPrimeNO(int x);

int main()
{

    int n, m;
    cin >> n >> m;
    n = n + 1;
    while (isPrimeNO(n) != 1)
    {
        n++;
    }
    if (n == m)
    {
        cout << "YES";
    }
    else
    {
        cout << "NO";
    }

    return 0;
}

int isPrimeNO(int x)
{
    vector<int> factors;
    for (int i = 1; i <= x; i++)
    {
        if (x % i == 0)
        {
            factors.push_back(i);
        }
    }
    if (factors.size() == 2)
    {
        return 1;
    }
    else
    {
        return 0;
    }
}