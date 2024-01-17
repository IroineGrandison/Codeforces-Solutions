#include <bits/stdc++.h>
#include <iostream>
#include <cmath>
#include <vector>

int main()
{
    int n;
    std::vector<std::vector<int>> gates;
    std::vector<int> left;
    int leftOpen;
    int leftClosed;
    int rightOpen;
    int rightClosed;
    int timeLeft;
    int timeRight;
    std::vector<int> right;

    std::cin >> n;

    for (int i = 0; i < n; i++)
    {
        int l, r;
        std::vector<int> temp;
        std::cin >> l >> r;
        temp.push_back(l);
        temp.push_back(r);
        gates.push_back(temp);
    }

    for (int i = 0; i < n; i++)
    {
        left.push_back(gates[i][0]);
        right.push_back(gates[i][1]);
    }

    leftOpen = std::count(left.begin(), left.end(), 1);
    leftClosed = std::count(left.begin(), left.end(), 0);
    rightOpen = std::count(right.begin(), right.end(), 1);
    rightClosed = std::count(right.begin(), right.end(), 0);

    if (leftOpen > leftClosed)
    {
        timeLeft = leftClosed;
    }
    else if (leftClosed > leftOpen)
    {
        timeLeft = leftOpen;
    }
    else
    {
        timeLeft = leftClosed;
    }

    if (rightOpen > rightClosed)
    {
        timeRight = rightClosed;
    }
    else if (rightClosed > rightOpen)
    {
        timeRight = rightOpen;
    }
    else
    {
        timeRight = rightOpen;
    }

    int totalTime = (timeLeft + timeRight);

    std::cout << totalTime;

    return 0;
}