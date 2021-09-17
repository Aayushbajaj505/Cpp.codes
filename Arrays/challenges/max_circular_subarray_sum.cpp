#include <bits/stdc++.h>
using namespace std;

int kadane(int arr[], int n)
{
    int currsum = 0;
    int maxsum = 0;
    for (int i = 0; i < n; i++)
    {
        currsum += arr[i];
        if (currsum < 0)
        {
            currsum = 0;
        }
        maxsum = max(maxsum, currsum);
    }
    return maxsum;
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
    int wrapsum;
    int nonwrapsum;

    nonwrapsum = kadane(arr, n);
    int totalsum = 0;
    for (int i = 0; i < n; i++)
    {
        // calcuate total sum
        totalsum += arr[i];
        // reverse the sign of all the elements
        arr[i] = -arr[i];
    }
    wrapsum = totalsum + kadane(arr, n);

    cout << max(wrapsum, nonwrapsum);
}