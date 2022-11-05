#include <bits/stdc++.h>
#include <algorithm>
#include <string>
#include <climits>
#include <vector>
#include <stack>
#include <queue>
#include <unordered_map>
using namespace std;
bool hasoddint(int *arr)
{
    for (int i = 0; i < sizeof(arr) / sizeof(1); i++)
    {
        if (arr[i] % 2 != 1)
            return false;
    }
    return true;
}
int main()
{
    int arr[] = {1, 3, 5, 7};
    cout << hasoddint(arr);
}