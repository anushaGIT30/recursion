/* #include <bits/stdc++.h>
using namespace std;
void printname(string s, int n)
{
    for (int i = 0; i < n; i++)
    {
        cout << s << endl;
    }
}
int main()
{

    string s;
    int n;
    // cout << "Enter your name: ";
    cin >> s;
    // cout << "Enter how many times to print: ";
    cin >> n;
    printname(s, n);
}
*/
// RECURSION
#include <iostream>
using namespace std;

void printNames(int i, int times, string n)
{
    if (i >= times)
    {
        return;
    }
    cout << n << endl;
    printNames(i + 1, times, n);
}

int main()
{
    int times;
    cin >> times; // Number of times to print the name
    string n;
    cin >> n; // Name to print
    printNames(0, times, n);
}
