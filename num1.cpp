// printing 1 to n using backtracking without using n+1 method and writing the output after the function call
#include <iostream>
using namespace std;
void printNum(int i, int n)
{
    if (i < 1)
    {
        return;
    }
    printNum(i - 1, n);
    cout << i << endl;
}
int main()
{
    int n;
    cin >> n;
    printNum(n, n);
}