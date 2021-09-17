#include <bits/stdc++.h>
using namespace std;
// cumaltive sum approach
int main()
{
    int n;
    cin >> n;
    int arr[n];
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    int currsum[n + 1];
    currsum[0] = 0;
    // store sum of each step in an array
    for (int i = 1; i <= n; i++)
    {
        currsum[i] = currsum[i - 1] + arr[i - 1];
    }
}