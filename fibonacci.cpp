#include <iostream>
using namespace std;
int fibonacci(int n)
{
    if (n <= 1)
    {
        return n;
    }
    int l = fibonacci(n - 1);
    int sl = fibonacci(n - 2);
    return l + sl;
}
int main()
{
    int n;
    cin >> n;
    cout << fibonacci(n);
}
// tc: exponential 2 to the power n