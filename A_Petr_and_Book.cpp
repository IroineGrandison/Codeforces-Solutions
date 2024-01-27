#include <iostream>
#include <vector>

using namespace std;

int main()
{
    int n;
    vector<int> pages(7);
    vector<int> day = {1, 2, 3, 4, 5, 6, 7};

    cin >> n;
    for (int i = 0; i < 7; i++)
    {
        cin >> pages[i];
    }

    int sum = 0;
    int i = 0;

    while (sum < n)
    {
        sum += pages[i];
        if (sum >= n)
        {
            break;
        }
        i++;

        if (i == 7)
        {
            i = 0;
        }
    }

    cout << day[i];
    return 0;
}
