#include <bits/stdc++.h>
#include <algorithm>
#include <string>
#include <climits>
#include <vector>
#include <stack>
#include <queue>
#include <unordered_map>
using namespace std;
int main()
{
    // by default max priority queue
    priority_queue<int> pq;
    cout << pq.empty() << endl;
    pq.push(5);
    pq.push(6);
    pq.push(1);
    pq.push(10);
    pq.push(18);
    cout << pq.top() << endl;
    cout << pq.size();
}