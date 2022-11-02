// insert an element from unsorted array
// to its correct position in the sorted array
#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin >> n;
    int arr[n];
    // Input
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    // Main Algorithm
    for (int i = 1; i < n; i++)
    {
        int current = arr[i];
        int j = i - 1;
        while (arr[j] > current && j >= 0)
        {
            arr[j + 1] = arr[j];
            j--;
        }
        arr[j + 1] = current;
    }
    // Output
    for (int i = 0; i < n; i++)
    {
        cout << arr[i];
    }
}