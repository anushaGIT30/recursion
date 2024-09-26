#include <iostream>
using namespace std;
int findingPower(int n)
{
    if (n == 0)
    {
        return 1;
    }
    return 2 * findingPower(n - 1);
}
int main()
{
    int n;
    cin >> n;
    cout << findingPower(n);
}