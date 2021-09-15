// tags - google,amazon,visa,facebook
#include <bits/stdc++.h>
#include <climits>
using namespace std;

int main()
{
    int n;
    int s;
    cin >> n >> s;
    int arr[n];
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    int st, end = -1;
    int i, j = 0;
    int currsum = 0;
    // while loop only for second pointer
    while (j < n && currsum + arr[j] <= s)
    {
        currsum += arr[j];
        j++;
    }
    if (currsum == s)
    {
        cout << i + 1 << j;
        return 0;
    }
    // while loop for increasign first pointer
    while (j < n)
    {
        // adding the last read element to currsunm
        currsum += arr[j];
        while (currsum > s)
        {
            currsum -= arr[i];
            i++;
        }
        if (currsum == s)
        {
            st = i + 1;
            end = j + 1;
            break;
        }
        j++;
    }
    cout << st << end;
}