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

void printTree(BTNode<int> *root)
{
    if (root == NULL)
    {
        return;
    }
    cout << root->data << ":";
    if (root->left != NULL)
    {
        cout << "L" << root->left->data;
    }
    if (root->right != NULL)
    {
        cout << "R" << root->right->data;
    }
    cout << endl;
    printTree(root->left);
    printTree(root->right);
}

void printTreeLevelwise(BTNode<int> *root)
{
    if (root == NULL)
    {
        return;
    }

    queue<BTNode<int> *> pendingNodes;
    pendingNodes.push(root);
    while (pendingNodes.size() != 0)
    {
        int nodecount = pendingNodes.size();
        while (nodecount > 0)
        {

            BTNode<int> *front = pendingNodes.front();
            cout << front->data << ":";
            pendingNodes.pop();
            if (front->left != NULL)
            {
                cout << "L" << front->left->data;
                pendingNodes.push(front->left);
            }
            if (front->right != NULL)
            {
                cout << "R" << front->right->data;
                pendingNodes.push(front->right);
            }
            nodecount--;
        }
        cout << endl;
    }
}

BTNode<int> *takeInputLevelwise()
{
    int rootdata;
    cout << "Enter root data" << endl;
    cin >> rootdata;
    if (rootdata == -1)
    {
        return NULL;
    }
    BTNode<int> *root = new BTNode<int>(rootdata);
    queue<BTNode<int> *> pendingNodes;
    pendingNodes.push(root);
    while (pendingNodes.size() != 0)
    {
        BTNode<int> *front = pendingNodes.front();
        pendingNodes.pop();
        cout << "Enter Left child of" << front->data << endl;
        int leftchilddata;
        cin >> leftchilddata;
        if (leftchilddata != -1)
        {
            BTNode<int> *child = new BTNode<int>(leftchilddata);
            front->left = child;
            pendingNodes.push(child);
        }
        cout << "Enter right child of" << front->data << endl;
        int rightchilddata;
        cin >> rightchilddata;
        if (rightchilddata != -1)
        {
            BTNode<int> *child = new BTNode<int>(rightchilddata);
            front->right = child;
            pendingNodes.push(child);
        }
    }
    return root;
}

int countNodes(BTNode<int> *root)
{
    if (root == NULL)
        return 0;
    return countNodes(root->right) + countNodes(root->left) + 1;
}

void inorder(BTNode<int> *root)
{
    if (root == NULL)
    {
        return;
    }
    inorder(root->left);
    cout << root->data << " ";
    inorder(root->right);
}

int main()
{
    // 1 2 3 4 5 6 7 -1 -1 8 9 -1 -1 -1 -1 -1 -1 -1 -1
    BTNode<int> *root = takeInputLevelwise();
    // printTreeLevelwise(root);
    // cout << countNodes(root);
    inorder(root);
}