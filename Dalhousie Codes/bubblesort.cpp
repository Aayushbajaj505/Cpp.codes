#include <bits/stdc++.h>
#include <algorithm>
#include <string>
#include <climits>
#include <vector>
#include <stack>
#include <queue>
#include <unordered_map>
using namespace std;
void bubblesort(vector<int> arr)
{
    int c = 1;
    while (c < arr.size())
    {
        for (int i = 0; i < arr.size(); i++)
        {
            if (arr[i] > arr[i + 1])
                swap(arr[i], arr[i + 1]);
        }
    }
}
int main()
{
    int arr[] = {5, 6, 8, 3, 2, 4, 9, 6, 3, 7, 1, 2, 8, 4, 3354, 565, 56, 685, 4, 64, 654, 68, 6854, 65, 654, 654, 63, 51, 684, 64, 16, 46, 1, 35, 684, 61, 641, 681, 61, 6, 161, 1};
    int n = sizeof(arr) / sizeof(1);
    cout << n;
}