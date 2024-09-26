// using single pointer
#include <iostream>
using namespace std;
void reversearr(int arr[], int n, int i)
{
    if (i > n / 2)
    {
        return;
    }
    swap(arr[i], arr[n - i - 1]);
    reversearr(arr, n, i + 1);
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
    reversearr(arr, n, 0);
    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }
}