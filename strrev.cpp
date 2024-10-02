#include <iostream>
using namespace std;
void reverseString(string &s, int i, int j)
{
    if (i > j)
    {
        return;
    }
    swap(s[i], s[j]);
    i++;
    j--;
    reverseString(s, i, j);
}
int main()
{
    string s;
    cin >> s;
    reverseString(s, 0, s.length() - 1);
    cout << s;
}
