#include <iostream>
#include <bits/stdc++.h>
#include <cmath>

int main()
{
    std::vector<std::vector<int>> v;
    int n;
    int pass = 0;
    std::vector<int> state;
    std::cin >> n;

    for (int i = 0; i < n; i++)
    {
        std::vector<int> temp;
        int a, b;
        std::cin >> a >> b;
        temp.push_back(a);
        temp.push_back(b);
        v.push_back(temp);
    }


    for (int i = 0; i < (n); i++)
    {
        int x = v[i][1] -  v[i][0];
        pass = pass + x;
        state.push_back(pass);

    }

    auto ans = std::max_element(state.begin(), state.end());

    std::cout << *ans;

    return 0;
}