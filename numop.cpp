#include <iostream>
using namespace std;
void printNtoOne(int i, int n)
{
    if (i < 1)
    {
        return;
    }
    cout << i << endl;
    printNtoOne(i - 1, n);
}
int main()
{
    int n;
    cin >> n;
    printNtoOne(n, n);
}