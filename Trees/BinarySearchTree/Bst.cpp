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

class isBSTReturn
{
public:
    bool isBST;
    int minimum;
    int maximum;
};

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

int minimum(BTNode<int> *root)
{
    if (root == NULL)
        return INT_MAX;
    return min(root->data, min(minimum(root->right), minimum(root->left)));
}

int maximum(BTNode<int> *root)
{
    if (root == NULL)
        return INT_MIN;
    return max(root->data, max(maximum(root->right), maximum(root->left)));
}

bool isBST(BTNode<int> *root)
{
    if (root == NULL)
        return true;
    int leftMax = maximum(root->left);

    int rightmin = minimum(root->right);

    bool output = (root->data > leftMax) && (root->data <= rightmin) && isBST(root->right) && isBST(root->left);
    return output;
}
//  bottom to top approach
isBSTReturn isBST2(BTNode<int> *root)
{
    if (root == NULL)
    {
        isBSTReturn output;
        output.isBST = true;
        output.minimum = INT_MAX;
        output.maximum = INT_MIN;
        return output;
    }
    isBSTReturn leftOutput = isBST2(root->left);
    isBSTReturn rightOutput = isBST2(root->right);
    int minimum = min(root->data, min(leftOutput.minimum, rightOutput.minimum));
    int maximum = max(root->data, max(leftOutput.maximum, rightOutput.maximum));
    bool isBSTFinal = (root->data > leftOutput.maximum) && (root->data < rightOutput.minimum) && leftOutput.isBST && rightOutput.isBST;
    isBSTReturn output;
    output.isBST = isBSTFinal;
    output.minimum = minimum;
    output.maximum = maximum;
    return output;
}
// top to bottom approach
// we push the constraints down
bool isBST3(BTNode<int> *root, int min = INT_MIN, int max = INT_MAX)
{
    if (root == NULL)
        return NULL;
    if (root->data < min || root->data > max)
    {
        return false;
    }
    bool isleftok = isBST3(root->left, min, root->data - 1);
    bool isrightok = isBST3(root->right, root->data, max);
    return isleftok && isrightok;
}

BTNode<int> *makeBST(int *arr, int l, int r)
{
    if (l > r)
    {
        return NULL;
    }
    int mid = (l + r) / 2;
    BTNode<int> *root = new BTNode<int>(arr[mid]);
    root->left = makeBST(arr, l, mid - 1);
    root->right = makeBST(arr, mid + 1, r);
    return root;
}

int main()
{
    // 1 2 3 4 5 6 7 -1 -1 8 9 -1 -1 -1 -1 -1 -1 -1 -1
    BTNode<int> *root = takeInputLevelwise();
    cout << isBST3(root);
}