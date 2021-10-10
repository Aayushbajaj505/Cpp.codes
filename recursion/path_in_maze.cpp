#include <bits/stdc++.h>
#include <algorithm>
#include <string>
#include <climits>
using namespace std;
int paths(int n, int i, int j)
{
    if (i == n - 1 && j == n - 1)
    {
        return 1;
    }
    if (i > n || j > n)
    {
        return 0;
    }
    return paths(n, i + 1, j) + paths(n, i, j + 1);
}
int main()
{
    cout << paths(3, 0, 0);
}