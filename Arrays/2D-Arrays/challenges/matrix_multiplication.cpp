#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n1, n2, n3;
    cin >> n1 >> n2 >> n3;
    int a1[n1][n2]; //arr1
    int a2[n2][n3]; //arr2
    int ans[n1][n3];
    // input of arr1
    for (int i = 0; i < n1; i++)
    {
        for (int j = 0; j < n2; j++)
        {
            cin >> a1[i][j];
        }
    }
    // input of arr2
    for (int i = 0; i < n2; i++)
    {
        for (int j = 0; j < n3; j++)
        {
            cin >> a2[i][j];
        }
    }
    // making ans array zero
    for (int i = 0; i < n1; i++)
    {
        for (int j = 0; j < n3; j++)
        {
            ans[i][j] = 0;
        }
    }
    // matrix multiplication
    // loop1 for rows of matrix1-a1
    for (int i = 0; i < n1; i++)
    {
        // loop2 for columns of matrix2-a2
        for (int j = 0; j < n3; j++)
        {
            // multiplying and adding them
            for (int k = 0; k < n2; k++)
            {
                ans[i][j] += a1[i][k] * a2[k][j];
            }
        }
    }
    for (int i = 0; i < n1; i++)
    {
        for (int j = 0; j < n3; j++)
        {
            cout << ans[i][j] << " ";
        }
    }
}