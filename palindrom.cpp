#include <iostream>
using namespace std;
bool isStringisPalindrome(string &k, int i, int j)
{
    if (i >= j)
    {
        return true;
    }
    if (k[i] != k[j])
    {
        return false;
    }
    else
        return isStringisPalindrome(k, i + 1, j - 1);
}
int main()
{
    string a;
    cin >> a;
    bool l = isStringisPalindrome(a, 0, a.length() - 1);
    if (l)
    {
        cout << "it is a palindrome";
    }
    else
        cout << "not a palindrome";
}