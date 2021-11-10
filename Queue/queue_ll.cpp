#include <bits/stdc++.h>
#include <algorithm>
#include <string>
#include <climits>
#include <vector>
#include <stack>
using namespace std;
class node
{
public:
    int data;
    node *next;

    node(int val)
    {
        data = val;
        next = NULL;
    }
};

class queue1
{
    node *front;
    node *back;

public:
    queue1()
    {
        front = NULL;
        back = NULL;
    }
    void push(int val)
    {
        node *n = new node(val);
        if (front == NULL)
        {
            back = n;
            front = n;
        }
        back->next = n;
        back = n;
    }
    void pop()
    {
        if (front == NULL)
        {
            cout << "queue empty";
            return;
        }
        node *todelete = front;
        front = front->next;
        delete todelete;
    }
    int peek()
    {
        if (front == NULL)
        {
            cout << "queue empty";
            return -1;
        }
        return front->data;
    }
};
int main()
{
}