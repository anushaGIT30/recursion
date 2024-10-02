#include <iostream>
#include <vector>

using namespace std;

void merge2SortedArrays(vector<int> &arr1, vector<int> &arr2, vector<int> &mergedArr)
{
    int first = 0; // Start index for arr1
    int last = 0;  // Start index for arr2
    int k = 0;     // Start index for mergedArr

    // Merge the two sorted arrays
    while (first < arr1.size() && last < arr2.size())
    {
        if (arr1[first] <= arr2[last])
        {
            mergedArr[k++] = arr1[first++];
        }
        else
        {
            mergedArr[k++] = arr2[last++];
        }
    }

    // If there are any remaining elements in arr1
    while (first < arr1.size())
    {
        mergedArr[k++] = arr1[first++];
    }

    // If there are any remaining elements in arr2
    while (last < arr2.size())
    {
        mergedArr[k++] = arr2[last++];
    }
}

int main()
{
    int n1, n2;
    cout << "Enter the number of elements in the first sorted array: ";
    cin >> n1;

    vector<int> arr1(n1);
    cout << "Enter the elements of the first sorted array: ";
    for (int i = 0; i < n1; i++)
    {
        cin >> arr1[i];
    }

    cout << "Enter the number of elements in the second sorted array: ";
    cin >> n2;

    vector<int> arr2(n2);
    cout << "Enter the elements of the second sorted array: ";
    for (int i = 0; i < n2; i++)
    {
        cin >> arr2[i];
    }

    // Merged array with sufficient size
    vector<int> mergedArr(n1 + n2);

    // Merge the two sorted arrays
    merge2SortedArrays(arr1, arr2, mergedArr);

    // Print the merged array
    cout << "Merged Array: ";
    for (int i = 0; i < mergedArr.size(); i++)
    {
        cout << mergedArr[i] << " ";
    }
    cout << endl;

    return 0;
}
