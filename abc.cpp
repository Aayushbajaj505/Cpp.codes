#include <bits/stdc++.h>
#include <algorithm>
#include <string>
#include <climits>
#include <vector>
#include <stack>
#include <queue>
#include <unordered_map>
using namespace std;
template <typename T>
class bnode
{
public:
    T data;
    bnode *left;
    bnode *right;

    bnode(value)
    {
        data = value;
        left = NULL;
        right = NULL;
    }
    ~bnode()
    {
        delete left;
        delete right;
    }
};
void printtree(bnode<int> *root)
{
    if (root == NULL)
    {
        return;
    }
    cout << root->data << endl;
    if (root->left != NULL)
        cout << "L" << root->left->data;
    if (root->right != NULL)
        cout << "R" << root->right->data;
    cout << endl;
    printtree(root->left);
    printtree(root->right);
}
void printtreelevel(bnode<int> *root)
{
    if (root == NULL)
    {
        return;
    }
    queue<bnode<int> *> pendingnodes;
    pendingnodes.push(root);
    while (pendingnodes.size() != 0)
    {
        int n = pendingnodes.size();
        while (n >= 0)
        {
            bnode<int> *front = pendingnodes.front();
            cout << front->data << ":";
            pendingnodes.pop();
            if (front->left)
            {
                cout << front->left->data;
                pendingnodes.push(front->left);
            }
            if (front->right)
            {
                cout << front->right->data;
                pendingnodes.push(front->right);
            }
            n--;
        }
        cout << endl;
    }
}
int main()
{
}