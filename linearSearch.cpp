#include <iostream>
using namespace std;
bool linearSearch(int arr[], int n, int k)
{
    if (n == 0)
    {
        return false;
    }
    if (arr[0] == k)
    {
        return true;
    }
    return linearSearch(arr + 1, n - 1, k);
}
int main()
{
    int n, k;
    cin >> n >> k;
    int arr[n];
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    if (linearSearch(arr, n, k))
    {
        cout << "is found";
    }
    else
        cout << "not found";
}