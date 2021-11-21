#include <bits/stdc++.h>
#include <algorithm>
#include <string>
#include <climits>
#include <vector>
#include <stack>
#include <queue>
#include <unordered_map>
using namespace std;
class PriorityQueue
{
    vector<int> pq;

public:
    PriorityQueue()
    {
    }
    bool isEmpty()
    {
        return pq.size() == 0;
    }
    int getSize()
    {
        return pq.size();
    }
    int getMin()
    {
        if (pq.size() == 0)
            return 0;
        return pq[0];
    }
    void insert(int element)
    {
        pq.push_back(element);
        int childIndex = pq.size() - 1;
        while (childIndex > 0)
        {
            int parentIndex = (childIndex - 1) / 2;

            if (pq[childIndex] < pq[parentIndex])
                swap(pq[childIndex], pq[parentIndex]);
            else
                break;
            int childIndex = parentIndex;
        }
    }
    int removeMin()
    {
        if (isEmpty())
        {
            return 0;
        }
        int ans = pq[0];
        pq[0] = pq[pq.size() - 1];
        pq.pop_back();
        // down heapify
        int parentIndex = 0;
        int leftchildIndex = 2 * parentIndex + 1;
        int rightchildIndex = 2 * parentIndex + 2;

        while (leftchildIndex < pq.size())
        {
            int minIndex = parentIndex;
            if (pq[minIndex] > pq[leftchildIndex])
            {
                minIndex = leftchildIndex;
            }
            if (pq[minIndex] > pq[rightchildIndex])
            {
                minIndex = rightchildIndex;
            }
            swap(pq[minIndex], pq[parentIndex]);
            parentIndex = minIndex;
            leftchildIndex = 2 * parentIndex + 1;
            rightchildIndex = 2 * parentIndex + 2;
            return ans;
        }
    }
};
int main()
{
}
