#include <bits/stdc++.h>
#include <algorithm>
#include <string>
#include <climits>
using namespace std;
// algorithm used is backstracking
// BackTracking is an algorithmic technique for solving
// recursive problems by trying top build every
// possible solution incrementally, and removing
// those solutions tha tfail to satisfy the constraints of the problem\
// at any point of time.
bool isSafe(int **arr, int x, int y, int n)
{
    if (x < n && y < n && arr[x][y] == 1)
    {
        return true;
    }
    return false;
}
bool ratinmaze(int **arr, int x, int y, int n, int **solArr)
{
    if (x == n - 1 && y == n - 1)
    {
        solArr[x][y] = 1;
        return true;
    }
    if (isSafe(arr, x, y, n))
    {
        solArr[x][y] = 1;
        if (ratinmaze(arr, x + 1, y, n, solArr))
        {
            return true;
        }
        if (ratinmaze(arr, x, y + 1, n, solArr))
        {
            return true;
        }
        solArr[x][y] = 0; // backtracking
        return false;
    }
    return false;
}
int main()
{
    int n;
    cin >> n;
    int **arr = new int *[n]; //dynamic memory allocation
    for (int i = 0; i < n; i++)
    {
        arr[i] = new int[n];
    }
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            cin >> arr[i][j];
        }
    }
    int **solarr = new int *[n]; //dynamic memory allocation
    for (int i = 0; i < n; i++)
    {
        arr[i] = new int[n];
        for (int j = 0; j < n; j++)
        {
            solarr[i][j] = 0;
        }
    }
    if (ratinmaze(arr, 0, 0, n, solarr))
    {
        for (int i = 0; i < n; i++)
        {
            arr[i] = new int[n];
            for (int j = 0; j < n; j++)
            {
                cout << solarr[i][j];
            }
            cout << endl;
        }
    }
}