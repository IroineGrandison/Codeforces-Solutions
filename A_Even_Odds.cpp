#include <iostream>
#include <bits/stdc++.h>

using namespace std;

int main()
{
    long long n, k;
    cin >> n >> k;
    long long totalOdd = static_cast<long long>(n/2);

    if (n % 2 == 1)
    {
        totalOdd = static_cast<long long>((n + 1) / 2);
    }
    if (k <= totalOdd)
    {
        cout << ((k * 2) - 1);
    }
    else
    {
        long long x = k - totalOdd;
        cout << (x * 2);
    }
    return 0;
}