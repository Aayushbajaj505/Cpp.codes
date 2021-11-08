#include <bits/stdc++.h>
#include <algorithm>
#include <string>
#include <climits>
#include <vector>
using namespace std;
class node
{
public:
    int data;   //value
    node *next; //pointer to the next node

    node(int val)
    {
        data = val;
        next = NULL;
    }
};
// taking head by pointer because we have to modify the list
void insertAtTail(node *&head, int val)
{

    node *n = new node(val);
    if (head == NULL)
    {
        head = n;
    }
    else
    {
        node *itr = head;
        while (itr->next != NULL)
        {
            itr = itr->next;
        }
        itr->next = n;
    }
}
bool search(node *&head, int key)
{
    node *itr = head;
    while (itr->next != NULL)
    {
        if (itr->data == key)
        {
            return true;
        }
        itr = itr->next;
    }
    return false;
}
void insertAtHead(node *&head, int val)
{
    node *n = new node(val);
    if (head == NULL)
    {
        head = n;
    }
    else
    {
        n->next = head;
        head = n;
    }
}
// takking head by value
void display(node *head)
{
    node *itr = head;
    while (itr->next)
    {
        cout << itr->data << "->";
        itr = itr->next;
    }
}
int main()
{
    node *head = NULL;
    insertAtTail(head, 1);
    insertAtTail(head, 2);
    insertAtTail(head, 3);
    insertAtTail(head, 4);
    display(head);
    cout << endl;
    insertAtHead(head, 0);
    display(head);
}