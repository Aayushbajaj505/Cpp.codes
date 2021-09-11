// Tags - KickStart
#include <bits/stdc++.h>
#include <climits>
using namespace std;

int main()
{
    int n;
    cin >> n;
    int a[n];
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
    }
    int ans = 2;          //longest sub array length
    int pd = a[1] - a[0]; //previous diffrence
    int current = 2;      //current sub array length
    int j = 2;            //position
    while (j < n)
    {
        // if pd is equal top curretn diffrence add one
        if (pd == a[j] - a[j - 1])
        {
            current++;
        }
        else
        {
            pd = a[j] - a[j - 1]; //update pd
            current = 2;          //set current to 2
        }
        ans = max(ans, current);
        j++;
    }
    cout << ans;
    return 0; //
}