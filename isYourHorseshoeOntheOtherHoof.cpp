#include <iostream>
#include <bits/stdc++.h>

int main()
{
    int s1, s2, s3, s4;
    std::unordered_set<int> colors;

    std::cin >> s1 >> s2 >> s3 >> s4;

    colors.insert(s1);
    colors.insert(s2);
    colors.insert(s3);
    colors.insert(s4);

    std::cout << (4 - colors.size());

    return 0;
}