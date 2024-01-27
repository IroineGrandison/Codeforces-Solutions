#include <iostream>
#include <bits/stdc++.h>

using namespace std;

int main()
{
    int n;

    cin >> n;
    vector<int> digits(n);
    for (int i = 0; i < n; i++)
    {
        cin >> digits[i];
    }

    int countOf5 = count(digits.begin(), digits.end(), 5);
    int countOf0 = count(digits.begin(), digits.end(), 0);
    
    if (countOf0 == 0)
    {
        cout << -1;
    }
    else if (countOf5 < 9)
    {
        cout << 0;
    }
    else
    {
        int x = ((n - countOf0) - (n - countOf0) % 9);
        string result = string(x, '5') + string(countOf0, '0');
        cout << result;
    }
    return 0;
}