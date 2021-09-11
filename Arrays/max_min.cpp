#include <bits/stdc++.h>
#include <climits>
using namespace std;

int main()
{
    int n;
    cin >> n;
    int arr[n];
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    int MaxNo = INT_MIN;
    int MinNo = INT_MAX;
    for (int x = 0; x < n; x++)
    {
        MaxNo = max(MaxNo, arr[x]);
        MinNo = min(MinNo, arr[x]);
    }

    cout << MaxNo << MinNo;
}