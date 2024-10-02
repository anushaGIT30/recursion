/*#include <iostream>
using namespace std;
int findingpower(int a, int b)
{
    if (b == 0)
    {
        return 1;
    }
    if (b == 1)
    {
        return a;
    }
    return a * findingpower(a, b - 1);
}
int main()
{
    int a, b;
    cin >> a >> b;
    int ans = findingpower(a, b);
    cout << ans;
}
*/
// we know that a to the power b means consists of 2 cases --b is a even -a to the power b/2+a to the powe b/2
// b is odd - a*a to the power b/2 + a to  the power b/2
#include <iostream>
using namespace std;
int finding_powers(int a, int b)
{
    if (b == 0)
    {
        return 1;
    }
    if (b == 1)
    {
        return a;
    }
    // recursive call
    int ans = finding_powers(a, b / 2);
    // if b is even
    if (b % 2 == 0)
    {
        return ans * ans;
    }
    // b  is odd
    else
        return a * ans * ans;
}
int main()
{
    int a, b;
    cin >> a >> b;
    int ans = finding_powers(a, b);
    cout << ans;
}