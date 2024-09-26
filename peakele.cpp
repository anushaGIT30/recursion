// ip: 0,10,5,2
// op: 1
#include <iostream>
using namespace std;
/*int findingpeakElement(int arr[], int n)
{
    int start = 0;
    int end = n - 1;
    int mid = (start + end) / 2;
    while (start < end)
    {
        if (arr[mid] < arr[mid + 1])
        {
            start = mid + 1;
        }
        else
            end = mid;
        mid = (start + end) / 2;
    }
    return start;
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
    int ans = findingpeakElement(arr, n);
    cout << ans;
}
*/
#include <iostream>
using namespace std;

int peakElement(int arr[], int s, int e, int n)
{
    if (s == e)
    {
        return s;
    }
    int mid = (s + e) / 2;
    if (arr[mid] < arr[mid + 1])
    {
        return peakElement(arr, mid + 1, e, n);
    }
    else
        return peakElement(arr, s, mid, n);
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

    int peakIndex = peakElement(arr, 0, n - 1, n);
    cout << "Peak Element Index: " << peakIndex << endl;
    cout << "Peak Element: " << arr[peakIndex] << endl;

    return 0;
}
