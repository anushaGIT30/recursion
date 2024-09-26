#include <iostream>
using namespace std;
void print(int arr[],int n,int low,int high){
    for(int i=low;i<=high;i++){
        cout<<arr[i]<<" ";
    }
}
bool binarySearch(int arr[], int n, int t, int low, int high)
{
    cout<<endl;
    print(arr,n,low,high);
    if (low > high)
    {
        return false;
    }
    int mid = (low + high) / 2;

    if (arr[mid] == t)
    {
        return true;
    }
    else if (arr[mid] < t)
    {
        return binarySearch(arr, n, t, mid + 1, high);
    }
    else
    {
        return binarySearch(arr, n, t, low, mid - 1);
    }
}

int main()
{
    int n, t;

    
    cout << "Enter the number of elements in the array (n): ";
    cin >> n;

    cout << "Enter the target element to search for (t): ";
    cin >> t;

    int arr[n];

    cout << "Enter the elements of the array: ";
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }

    if (binarySearch(arr, n, t, 0, n - 1))
    {
        cout << t << " is found in the array.";
    }
    else
    {
        cout << t << " is not found in the array.";
    }

    return 0;
}
