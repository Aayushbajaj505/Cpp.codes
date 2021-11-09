#include <bits/stdc++.h>
#include <algorithm>
#include <string>
#include <climits>
#include <vector>
#include <stack>
using namespace std;
class queue1
{
    int front;
    int back;
    int *arr;
    int n = 100;

public:
    queue1()
    {
        front = -1;
        back = -1;
        arr = new int[n];
    };
    void push(int x)
    {
        if (back == n - 1)
        {
            cout << "Queue overflow";
        }
        back++;
        arr[back] = x;
        if (front == -1)
        {
            front++;
        }
    }
    void pop(int x)
    {
        if (front == -1 || front > back)
        {
            cout << "empty queue";
        }
        front++;
    }
    int peek()
    {
        if (front == -1 || front > back)
        {
            cout << "empty queue";
            return -1;
        }
        return arr[front];
    }
};
int main()

{
}