#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n, m;
    int t;
    cin >> n >> m;
    cin >> t;
    int a[n][m];
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            cin >> a[i][j];
        }
    }
    int row = 0;
    int col = m - 1;
    while (row < n && col >= 0)
    {
        if (a[row][col] == t)
        {
            cout << true;
            return 0;
        }
        if (a[row][col] > t)
        {
            col--;
        }
        else
        {
            row++;
        }
    }
    cout << false;
}