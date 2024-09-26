#include <bits/stdc++.h>
using namespace std;
void print(int count)
{

    if (count == 9)
    {
        return;
    }
    cout << count;
    count++;
    print(count);
}
int main()
{
    print(0);
}