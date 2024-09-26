#include <iostream>
using namespace std;
int trribonacci(int n)
{
    if (n == 0)
    {
        return 0;
    }
    if (n == 1)
    {
        return 1;
    }
    if (n == 2)
    {
        return 1;
    }
    int ans = trribonacci(n - 1) + trribonacci(n - 2) + trribonacci(n - 3);
    return ans;
}
int main()
{
    int n;
    cin >> n;
    cout << trribonacci(n);
}
/*we can also do using for loop
if(n==0)
return 0
if(n==1 || n==2)
return 1
int t1=0,t2=1;t3=1;
for(int i=3;i<=n;i++)
int t=t1+t2+t3
t1=t2;
t2=t3;
t3=t;
cout t3;
*/