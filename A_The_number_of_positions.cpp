#include <iostream>
using namespace std;
int main()
{
    int n, a, b;
    cin >> n >> a >> b;
    if ((n - a) <= b)
    {
        cout << (n - a);
    }
    else
    {
        cout << (b + 1);
    }
    return 0;
}