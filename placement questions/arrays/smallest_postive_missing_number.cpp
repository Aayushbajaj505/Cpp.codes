// tags - samsung,amazon,snapdeal,accolite
#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin >> n;
    int arr[n];
    bool check[n + 1] = {false};
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }

    for (int i = 0; i < n; i++)
    {
        if (arr[i] >= 0)
        {
            check[arr[i]] = true;
        }
    }
    for (int i = 0; i < n; i++)
    {
        if (check[i] == false)
        {
            cout << i;
            break;
        }
    }
}