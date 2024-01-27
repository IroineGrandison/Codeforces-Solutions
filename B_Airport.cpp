#include <iostream>
#include <vector>
#include <algorithm>

int maxPrice(int n, int m, std::vector<int> price)
{
    int sum = 0;

    for (int i = 0; i < n; i++)
    {
        auto maxIt = std::max_element(price.begin(), price.end());
        int nowMax = *maxIt;
        sum += nowMax;

        for (auto it = price.begin(); it != price.end(); ++it)
        {
            if (*it == nowMax)
            {
                if ((*it - 1) == 0)
                {
                    price.erase(it);
                    break;
                }
                else
                {
                    *it -= 1;
                }
                break;
            }
        }
    }

    return sum;
}

int minPrice(int n, int m, std::vector<int> price)
{
    int sum = 0;

    for (int i = 0; i < n; i++)
    {
        auto minIt = std::min_element(price.begin(), price.end());
        int nowMin = *minIt;
        sum += nowMin;

        for (auto it = price.begin(); it != price.end(); ++it)
        {
            if (*it == nowMin)
            {
                if ((*it - 1) == 0)
                {
                    price.erase(it);
                    break;
                }
                else
                {
                    *it -= 1;
                }
                break;
            }
        }
    }

    return sum;
}

int main()
{
    int n, m;
    std::cin >> n >> m;
    std::vector<int> price(m);

    for (int i = 0; i < m; i++)
    {
        std::cin >> price[i];
    }

    int a = maxPrice(n, m, price);
    int b = minPrice(n, m, price);

    std::cout << a << " " << b;

    return 0;
}