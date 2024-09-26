// a subsequence is a contiguous or a non contigious order which follow the order
// a sub array can be a subsequence
// for ex: 3,1,2->{},3,1,2,{3,1},{3,2},{1,2},{3,1,2} total= 8  -->2 to the power n
#include <bits/stdc++.h>
#include <vector>
using namespace std;
void findingSubsequence(int arr[], int n, vector<int> ans, int index)
{
    if (index == n)
    {
        for (int i = 0; i < ans.size(); i++)
        {
            cout << ans[i] << " ";
        }
        if (ans.size() == 0)
        {
            cout << "{}";
        }
        cout << endl;
        return;
    }
    ans.push_back(arr[index]);
    findingSubsequence(arr, n, ans, index + 1);
    ans.pop_back();
    findingSubsequence(arr, n, ans, index + 1);
}
int main()
{
    int n;
    cin >> n;
    int arr[n];
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    vector<int> ans;
    findingSubsequence(arr, n, ans, 0);
}