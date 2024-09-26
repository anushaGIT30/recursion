#include <iostream>
using namespace std;

void printNames(int times, string name)
{
    if (times == 0)
    {
        return; // Base case: stop recursion when no more times left
    }
    cout << name << endl;        // Print the name
    printNames(times - 1, name); // Recursive call with reduced count
}

int main()
{
    int times;
    cin >> times; // Number of times to print the name
    string name;
    cin >> name;             // Name to print
    printNames(times, name); // Initial recursive call
}
