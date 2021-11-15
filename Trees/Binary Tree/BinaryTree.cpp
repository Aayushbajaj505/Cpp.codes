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

BTNode<int> *buildTreeHelper(int *in, int *pre, int inS, int inE, int preS, int preE)
{
    if (inS > inE)
    {
        return NULL;
    }
    int rootData = pre[preS];
    int rootIndex = -1;
    for (int i = inS; i <= inE; i++)
    {
        if (in[i] == rootData)
        {
            rootIndex = i;
            break;
        }
    }
    int lPreS = preS + 1;     //Left Pre Order start
    int lPreE;                //Left Pre Order end
    int lInS = inS;           //Left In Order start
    int lInE = rootIndex - 1; //Left In In Order end
    int rPreS;                //right pre Order start
    int rPreE = preE;         //right pre Order end
    int rInS;                 // right in order start
    int rInE = inE;           //right in order end
    BTNode<int> *root = new BTNode<int>(rootData);
    root->left = buildTreeHelper(in, pre, lInS, lInE, lPreS, lPreE);
    root->right = buildTreeHelper(in, pre, rInS, rInE, rPreS, rPreE);
    return root;
}

BTNode<int> *buildtree(int *in, int *pre, int size)
{
    return buildTreeHelper(in, pre, 0, size - 1, 0, size - 1);
}

int height(BTNode<int> *root)
{
    if (root == NULL)
        return 0;
    return max(height(root->left), height(root->right)) + 1;
}

int diameter(BTNode<int> *root)
{
    if (root == NULL)
        return 0;
    int option1 = height(root->left) + height(root->right);
    int option2 = diameter(root->left);
    int option3 = diameter(root->right);
    return max(option1, option2, option3);
}

pair<int, int> DiaHeight(BTNode<int> *root)
{
    if (root == NULL)
    {
        pair<int, int> p;
        p.first = 0;
        p.second = 0;
        return p;
    }
    pair<int, int> leftans = DiaHeight(root->left);
    pair<int, int> rightans = DiaHeight(root->right);
    int ld = leftans.second;
    int lh = leftans.first;
    int rd = rightans.second;
    int rh = rightans.first;
    pair<int, int> output;
    output.first = max(ld, rd);
    output.second = max(lh, rh);
    return output;
}

int main()
{
    // 1 2 3 4 5 6 7 -1 -1 8 9 -1 -1 -1 -1 -1 -1 -1 -1
    BTNode<int> *root = takeInputLevelwise();
    // printTreeLevelwise(root);
    // cout << countNodes(root);
    inorder(root);
}