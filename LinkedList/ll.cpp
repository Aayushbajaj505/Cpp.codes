#include <bits/stdc++.h>
#include <algorithm>
#include <string>
#include <climits>
#include <vector>
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
void deleteAtHead(node *&head)
{
    node *todelist = head;
    head = NULL;
    delete todelist;
}
void deleteion(node *&head, int val)
{
    if (head == NULL)
    {
        return;
    }
    if (head->next == NULL)
    {
        deleteAtHead(head);
    }
    node *itr = head;
    while (itr->next->data != val)
    {
        itr = itr->next;
    }
    node *todelist = itr->next;
    itr->next = itr->next->next;
    delete todelist;
}

void insertAtHead(node *head, int val)
{
    node *n = new node(val);
    if (head == NULL)
    {
        head = n;
    }
    else
    {
        n->next = head; // first we need to make the link then
        n = head;       // rename the new node as head
    }
}
node *reverseList(node *&head)
{
    // iterator method
    node *prev = NULL;
    node *curr = head;
    node *next;
    while (curr != NULL)
    {
        next = curr->next;
        curr->next = prev;

        prev = curr;
        curr = next;
    }
    return prev;
}
void display(node *head)
{
    node *itr = head;
    while (itr->next)
    {
        cout << itr->data << "->";
        itr = itr->next;
    }
    cout << endl;
}
node *reverseListRecursive(node *&head)
{
    if (head->next == NULL || head == NULL)
    {
        return head;
    }
    node *newhead = reverseListRecursive(head->next);
    head->next->next = head;
    head->next = NULL;

    return newhead;
}
int main()
{
    node *head = NULL;

    insertAtTail(head, 1);
    insertAtTail(head, 2);
    insertAtTail(head, 3);
    insertAtTail(head, 4);
    display(head);
    insertAtHead(head, 0);
    display(head);
    node *newhead = reverseListRecursive(head);
    display(newhead);
}