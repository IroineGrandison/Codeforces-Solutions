#include <iostream>
#include <bits/stdc++.h>

int main()
{
    int n;
    std::cin >> n;

    std::vector<int> elementsOfArray(n);
    for (int i = 0; i < n; i++)
    {
        std::cin >> elementsOfArray[i];
    }

    int m;
    std::cin >> m;

    std::vector<int> elementToSearch(m);
    for (int i = 0; i < m; i++)
    {
        std::cin >> elementToSearch[i];
    }

    std::vector<int> reversedElementsOfArray(elementsOfArray);
    int vasya = 0;
    int petya = 0;

    for (int i = 0; i < m; i++)
    {
        int ets = elementToSearch[i];
        for (int j = 1; j < (n + 1); j++)
        {
            if (elementsOfArray[j - 1] == ets)
            {
                vasya += j;
            }
        }
    }

    std::reverse(reversedElementsOfArray.begin(), reversedElementsOfArray.end());

    for (int i = 0; i < m; i++)
    {
        int rets = reversedElementsOfArray[i];

        for (int j = 1; j < (n + 1); j++)
        {
            if (reversedElementsOfArray[j - 1] == rets)
            {
                petya += j;
            }
        }
    }

    std::cout << vasya << " " << petya << std::endl;

    std::cout<< "completed";

    return 0;
}