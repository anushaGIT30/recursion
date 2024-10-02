// reverse of a string using only 1 pointer
/*#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

void stringrev(string &s)
{
    reverse(s.begin(), s.end());
}
int main()
{
    string s;
    cin >> s;
    stringrev(s);
    cout << s;
}*/
#include <iostream>
using namespace std;
void stringrev(string &s, int i)
{
    int n = s.length();
    if (i >= n / 2)

        return;
    swap(s[i], s[n - i - 1]);

    stringrev(s, i + 1);
}
int main()
{
    string s;
    cin >> s;
    stringrev(s, 0);
    cout << s;
}