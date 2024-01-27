#include <iostream>
#include <bits/stdc++.h>
#include <cmath>

using namespace std;

int main()
{
    int areaF, areaT, areaS;
    cin >> areaF >> areaT >> areaS;

    int a, b, c;

    b = sqrt((areaF * areaT) / areaS);
    a = areaF / b;
    c = areaT / b;

    cout << 4 * (a + b + c);

    return 0;
}