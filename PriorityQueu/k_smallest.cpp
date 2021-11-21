#include <bits/stdc++.h>
#include <algorithm>
#include <string>
#include <climits>
#include <vector>
#include <stack>
#include <queue>
#include <unordered_map>
using namespace std;
void kSmallest(int *arr, int n, int k)
{
    priority_queue<int> pq;
    for (int i = 0; i < k; i++)
    {
        pq.push(arr[i]);
    }
    for (int i = k; i < n; i++)
    {
        if (pq.top() > arr[i])
        {
            pq.pop();
            pq.push(arr[i]);
        }
    }
    while (!pq.empty())
    {
        cout << pq.top() << endl;
        pq.pop();
    }
}
int main()
{
    int arr[] = {10, 12, 5, 0, 6, 20};
    kSmallest(arr, 6, 4);
}