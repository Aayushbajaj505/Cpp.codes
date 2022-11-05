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
    bnode(T val)
    {
        data = val;
        left = NULL : right = NULL;
    }
    ~bnode(
        delete left;
        delete right;)
};

bnode<int> *takeinputlevelwise()
{
    int rootdata;
    cout << "Enter root value";
    cin >> rootdata;
    queue<bnode<int> *> pendingnodes;
    if (rootdata == -1)
    {
        return NULL;
    }
    bnode<int> *root = new bnode<int>(rootdata);
    pendingnodes.push(root);
    while (pendingnodes.size() != 0)
    {
        bnode<int> *front = pendingnodes.front();
        pendingnodes.pop();
        int leftdata;
        cout << "enter left child of " << front->data;
        cin >> leftdata;
        if (leftdata != -1)
        {
            bnode<int> *leftchild = new bnode<int>(leftdata);
            front->left = leftchild;
            pendingnodes.push(front->left);
        }
        int rightdata;
        cout << "enter right child of " << front->data;
        cin >> rightdata;
        if (rightdata != -1)
        {
            bnode<int> *rightchild = new bnode<int>(rightdata);
            front->right = rightchild;
            pendingnodes.push(front->right);
        }
    }
    return root;
}


int main()
{
}