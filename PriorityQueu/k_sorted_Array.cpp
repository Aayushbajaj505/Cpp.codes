#include <bits/stdc++.h>
#include <algorithm>
#include <string>
#include <climits>
#include <vector>
#include <stack>
#include <queue>
#include <unordered_map>
using namespace std;
// time complexity O(N) because it is a special array
void kSortedArray(int *arr, int n, int k)
{
    // push the first k elements to the priority queue
    priority_queue<int> pq;
    for (int i = 0; i < k; i++)
    {
        pq.push(arr[i]);
    }
    // now replace the first k elements in the the array with the elements from the priority queue
    int j = 0;
    for (int i = k; i < n; i++)
    {
        arr[i] = pq.top();
        pq.pop();
        pq.push(arr[i]);
        j++;
    }
    // put the remaining k elemets from the priority queue into the array
    while (pq.size() != 0)
    {
        arr[j] = pq.top();
        pq.pop();
    }
}
int main()
{
}