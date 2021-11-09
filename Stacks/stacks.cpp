#include <bits/stdc++.h>
#include <algorithm>
#include <string>
#include <climits>
#include <vector>
using namespace std;

class stack1
{
    int *arr;
    int top;
    int n = 100;

public:
    stack1()
    {

        arr = new int[n];
        top = -1;
    }
    void push(int x)
    {
        if (top == n - 1)
        {
            cout << "stack overflow";
            return;
        }
        top++;
        arr[top] = x;
    }
    void pop()
    {
        if (top == -1)
        {
            cout << "Stack Empty";
            return;
        }
        top--;
    }
    int Top()
    {
        if (top == -1)
        {
            return -1;
        }
        return arr[top];
    }
    bool empty()
    {
        return top == -1;
    }
};
int main()
{
    stack1 st;
    st.push(1);
    st.push(2);
    st.push(3);
    st.push(4);
    cout << st.Top() << endl;
}