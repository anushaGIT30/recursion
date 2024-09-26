#include <iostream>
using namespace std;

int firstOccurrence(int arr[], int start, int end, int k)
{
    if (start > end)
    {
        return -1; // Element not found
    }

    int mid = (start + end) / 2;
    if (arr[mid] == k)
    {
        if (mid == 0 || arr[mid - 1] != k)
        {
            return mid; // First occurrence found
        }
        else
        {
            return firstOccurrence(arr, start, mid - 1, k); // Search in left half
        }
    }
    else if (arr[mid] > k)
    {
        return firstOccurrence(arr, start, mid - 1, k); // Search in left half
    }
    else
    {
        return firstOccurrence(arr, mid + 1, end, k); // Search in right half
    }
}

int lastOccurrence(int arr[], int start, int end, int k)
{
    if (start > end)
    {
        return -1; // Element not found
    }

    int mid = (start + end) / 2;
    if (arr[mid] == k)
    {
        if (mid == end || arr[mid + 1] != k)
        {
            return mid; // Last occurrence found
        }
        else
        {
            return lastOccurrence(arr, mid + 1, end, k); // Search in right half
        }
    }
    else if (arr[mid] > k)
    {
        return lastOccurrence(arr, start, mid - 1, k); // Search in left half
    }
    else
    {
        return lastOccurrence(arr, mid + 1, end, k); // Search in right half
    }
}
int count_the_occurences(int arr[], int n, int k)
{
    int res1 = firstOccurrence(arr, 0, n - 1, k);
    int res2 = lastOccurrence(arr, 0, n - 1, k);
    if (res1 == -1)
        return 0;
    else

        return res2 - res1 + 1;
}

int main()
{
    int n;
    cin >> n;
    int k;
    cin >> k;
    int arr[n];
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }

    int first = firstOccurrence(arr, 0, n - 1, k);
    int last = lastOccurrence(arr, 0, n - 1, k);

    int count = count_the_occurences(arr, n, k);
    cout << "First Occurrence: " << first << endl;
    cout << "Last Occurrence: " << last << endl;
    cout << " total occurence:" << count << endl;
    return 0;
}
