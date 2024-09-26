// print sum of first N numbers if n=3 result=1+2+3=6
//  it can be done by using 2 ways parameterized and functional
// 1st method
#include <iostream>
using namespace std;
int printSum(int n, int sum)
{
    if (n < 1)
    {
        // cout << sum;
        return sum;
    }
    printSum(n - 1, sum + n);
}
int main()
{
    int n;
    cin >> n;
    printSum(n, 0);
}