#include <iostream>
#include <bits/stdc++.h>
#include <cmath>
using namespace std;

int main()
{
    int n, m;
    cin >> n >> m;
    int a, b;
    int count = 0;
    for (int b = 0; b <= sqrt(m); b++)
    {
        a = m - b * b;
        if (a >= 0 && b == n - a * a)
        {
            count++;
        }
    }
    cout << count << endl;
    return 0;
}