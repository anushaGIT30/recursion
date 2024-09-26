// printing the numbers from n to 1 using backtracking
#include <iostream>
using namespace std;
void printingNtoOne(int n, int i)
{
    if (i > n)
    {
        return;
    }
    printingNtoOne(n, i + 1);
    cout << i << endl;
}
int main()
{
    int n;
    cin >> n;
    printingNtoOne(n, 1);
}
