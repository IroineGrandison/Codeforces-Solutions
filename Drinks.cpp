#include <iostream>
#include <vector>

using namespace std;

int main()
{
    int n;
    cin >> n;

    vector<int> drinks(n); 

    for (int i = 0; i < n; i++)
    {
        cin >> drinks[i];
    }

    int sum = 0;
    for (int i = 0; i < n; i++)
    {
        sum += drinks[i];
    }

    double ans = static_cast<double>(sum) / n;
    cout << ans;

    return 0;
}
 