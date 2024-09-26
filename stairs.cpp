#include <iostream>
using namespace std;
int climbingstairs(int n)
{
    if (n < 0)
    {
        return 0;
    }
    if (n == 0)
    {
        return 1;
    }
    int ans = climbingstairs(n - 1) + climbingstairs(n - 2);
    return ans;
}