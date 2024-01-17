#include <iostream>
#include <string>
#include <bits/stdc++.h>

int main()
{
    int count = 0;
    std::string s1, s2, s3;
    std::unordered_set<char> charSet;

    std::cin >> s1;
    std::cin >> s2;
    std::cin >> s3;

    for (char i : s1)
    {
        charSet.insert(i);
    }
    for (char j : s2)
    {
        charSet.insert(j);
    }

    for (char i : charSet)
    {
        int a = std::count(s1.begin(), s1.end(), i);
        int b = std::count(s2.begin(), s2.end(), i);
        int c = std::count(s3.begin(), s3.end(), i);

        if (a + b == c)
        {
            count++;
        }
    }

    if ((count == charSet.size()) && (s1.size() + s2.size() == s3.size()))
    {
        std::cout << "YES";
    }
    else
    {
        std::cout << "NO";
    }

    return 0;
}