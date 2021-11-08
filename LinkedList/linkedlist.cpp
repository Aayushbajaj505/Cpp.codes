#include <bits/stdc++.h>
#include <algorithm>
#include <string>
#include <climits>
#include <vector>
using namespace std;
// insert at head
// insert at tail
// delete at head
// deleteionl
// search

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
    while (itr)
    {
        cout << itr->data << "->";
        itr = itr->next;
    }
    cout << endl;
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
    // delete todelist;
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
node *reverseListRecursive(node *&head)
{
    if (head->next = NULL || head == NULL)
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
    // insertAtHead(head, 0);
    // display(head);
    // deleteion(head, 3);
    // display(head);
    node *newhead = reverseListRecursive(head);
    display(newhead);
}