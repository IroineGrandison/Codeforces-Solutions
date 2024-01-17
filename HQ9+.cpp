#include <iostream>
#include <vector>
#include <bits/stdc++.h>

int main()
{
    std::vector<char> v;
    int countH, countQ, count9;
    std::string ui;
    std::cin >> ui;

    for (int i = 0; i < ui.size(); i++)
    {
        v.push_back(ui[i]);
    }

    countH = count(v.begin(), v.end(), 'H');
    countQ = count(v.begin(), v.end(), 'Q');
    count9 = count(v.begin(), v.end(), '9');

    if (countH > 0 || countQ > 0 || count9 > 0)
    {
        std::cout << "YES";
    }
    else
    {
        std::cout << "NO";
    }
    return 0;
}
