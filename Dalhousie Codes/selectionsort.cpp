#include <bits/stdc++.h>
#include <algorithm>
#include <string>
#include <climits>
#include <vector>
#include <stack>
#include <queue>
#include <unordered_map>
using namespace std;
void selectionsort(vector<int> arr, int n)
{
    for (int i = 0; i < n; i++)
    {
        for (int j = i + 1; j < n; j++)
        {
            if (arr[j] < arr[i])
            {
                swap(arr[j], arr[i]);
            }
        }
    }
}
int main()
{
    vector<int> arr = {5, 6, 8, 3, 2, 4, 9, 6, 3, 7, 1, 2, 8, 4, 3354, 565, 56, 685, 4, 64, 654, 68, 6854, 65, 654, 654, 63, 51, 684, 64, 16, 46, 1, 35, 684, 61, 641, 681, 61, 6, 161, 1};
    selectionsort(arr, arr.size());
    for (auto i : arr)
    {
        cout << i << " ";
    }
}