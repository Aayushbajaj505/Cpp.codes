#include <bits/stdc++.h>
#include <algorithm>
#include <string>
#include <climits>
#include <vector>
#include <stack>
#include <queue>
using namespace std;
template <typename T>
class BTNode
{
public:
    T data;
    BTNode *left;
    BTNode *right;
    BTNode(T data)
    {
        this->data = data;
        left = right = NULL;
    }
    ~BTNode()
    {
        delete left;
        delete right;
    }
};
BTNode<int> *search(BTNode<int> *root, int key)
{
    if (root == NULL)
        return NULL;
    if (root->data == key)
    {
        return root;
    }
    if (root->data > key)
    {
        return search(root->right, key);
    }
    if (root->data < key)
    {
        return search(root->left, key);
    }
}

int main()
{
}