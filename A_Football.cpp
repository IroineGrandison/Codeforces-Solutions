#include <iostream>
#include <bits/stdc++.h>

using namespace std;

int main()
{
    string s;
    cin >> s;
    string s0 = "0000000";
    string s1 = "1111111";

    size_t found0 = s.find(s0);
    size_t found1 = s.find(s1);

    if ((found0 != string::npos) || (found1 != string::npos))
    {
        cout << "YES" << endl;
    }
    else
    {
        cout << "NO" << endl;
    }

    return 0;
}