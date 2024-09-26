#include <iostream>
#include <string>
using namespace std;

void findingSubsequence(string s, string ans, int index)
{
    if (index == s.length()) // Base case: when index reaches the length of the string
    {
        if (!ans.empty()) // Only print if the subsequence is not empty
            cout << ans << endl;
        return;
    }

    // Include the current character in the subsequence
    findingSubsequence(s, ans + s[index], index + 1);

    // Exclude the current character from the subsequence
    findingSubsequence(s, ans, index + 1);
}

int main()
{
    string s;
    cin >> s;

    string ans = "";
    findingSubsequence(s, ans, 0); // Call the function to find subsequences

    return 0;
}
