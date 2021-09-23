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
}