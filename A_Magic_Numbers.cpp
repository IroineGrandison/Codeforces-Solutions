#include <iostream>
#include <bits/stdc++.h>

using namespace std;

int main()
{
    string n;
    cin >> n;
    int counta = 0;
    int countb = 0;
    int countc = 0;

    for (int i = 0; i < n.size(); i++)
    {
        if (n[i] != '1' && n[i] != '4')
        {
            counta++;
        }
    }

    if (n[0] == '4')
    {
        countb++;
    }

    if (n.find("444") != n.npos)
    {
        countc++;
    }
    if (counta > 0 || countb > 0 || countc > 0)
    {
        cout << "NO";
    }
    else
    {
        cout << "YES";
    }

    return 0;
}