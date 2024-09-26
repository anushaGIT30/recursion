#include <iostream>
using namespace std;
bool palindrome(string s, int i)
{
    if (i >= s.length() / 2)
        return true;

    if (s[i] != s[s.size() - i - 1])
    {
        return false;
    }
    return palindrome(s, i + 1);
}
int main()
{
    string s;
    cin >> s;
    cout << palindrome(s, 0);
}