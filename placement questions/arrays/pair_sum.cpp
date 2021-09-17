#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n, k;
    cin >> n >> k;
    int arr[n];
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }

    int low = 0;
    int high = n - 1;

    while (low < high)
    {
        int sum = arr[low] + arr[high];
        if (sum == k)
        {
            cout << low << high << endl;
            return 1;
        }
        if (sum < k)
        {
            low++;
        }
        if (sum > high)
        {
            high--;
        }
        return 0;
    }