#include <iostream>

int main()
{
    int n;
    std::cin >> n;
    int x = 0;

    for (int i = 0; i < n; i++)
    {
        std::string s;
        std::cin >> s;
        if (s == "X++" || s == "++X")
        {
            x++;
        }
        else
        {
            x--;
        }
    }

    std::cout << x;

    return 0;
}