#include <bits/stdc++.h>
#include <algorithm>
#include <string>
#include <climits>
#include <vector>
#include <stack>
#include <queue>
// #include <TreeNode.h>
using namespace std;
template <typename T>
class TreeNode
{
public:
    T data;
    vector<TreeNode *> children;
    TreeNode(T data)
    {
        this->data = data;
    }
    ~TreeNode()
    {
        for (int i = 0; i < children.size(); i++)
        {
            delete children[i];
        }
    }
};

void printTree(TreeNode<int> *root)
{
    if (root == NULL)
    {
        return;
    }
    // print root
    cout << root->data << ":";
    // print all the children of the current root node
    for (int i = 0; i < root->children.size(); i++)
    {
        cout << root->children[i]->data << ",";
    }
    cout << endl;
    // recusrsive call for the next node in the tree
    for (int i = 0; i < root->children.size(); i++)
    {
        printTree(root->children[i]);
    }
    // no need orf base condition as we are using for loop
}

TreeNode<int> *takeInput()
{
    cout << "enter data" << endl;
    int rootdata;
    cin >> rootdata;
    TreeNode<int> *root = new TreeNode<int>(rootdata);

    int n;
    cout << "enter num of children : ";
    cin >> n;
    for (int i = 0; i < n; i++)
    {
        TreeNode<int> *child = takeInput();
        root->children.push_back(child);
    }
    return root;
}

TreeNode<int> *takeInputLevelwise()
{

    int rootdata;
    // first get the root node
    cout << "enter root data" << endl;
    cin >> rootdata;
    // make a dynamiclly allocated node
    TreeNode<int> *root = new TreeNode<int>(rootdata);
    // define a queue
    queue<TreeNode<int> *> pendingNodes;
    // push the root node to the queue
    pendingNodes.push(root);
    while (pendingNodes.size() != 0)
    {
        // grab the first node from teh queue
        TreeNode<int> *front = pendingNodes.front();
        // pop the node
        pendingNodes.pop();
        // ask for number of children
        cout << "enter Number oif children of " << front->data << endl;
        int numChild;
        cin >> numChild;
        // get all the children
        for (int i = 0; i < numChild; i++)
        {

            cout << "Enter " << i << " th child of " << front->data << endl;
            int childData;
            cin >> childData;
            // make a new node for each child
            TreeNode<int> *child = new TreeNode<int>(childData);
            // push the children to the parent vector
            front->children.push_back(child);
            // also push the children to the pending nodes queue
            pendingNodes.push(child);
        }
    }
    return root;
}

int countNodes(TreeNode<int> *root)
{
    int count = 1;
    for (int i = 0; i < root->children.size(); i++)
    {
        count += countNodes(root->children[i]);
    }
    return count;
};

void printatLevelK(TreeNode<int> *root, int k)
{
    if (k == 0)
    {
        cout << root->data << endl;
        return;
    }
    for (int i = 0; i < root->children.size(); i++)
    {
        printatLevelK(root->children[i], k - 1);
    }
}

int findHeight(TreeNode<int> *root)
{
    int height = 0;
    for (int i = 0; i < root->children.size(); i++)
    {
        int th = findHeight(root->children[i]);
        height = max(height, th);
    }
    height += 1;
    return height;
}

int leafNodes(TreeNode<int> *root)
{
    int count = 0;
    if (root->children.size() == 0)
    {
        return 1;
    }
    else
    {
        for (int i = 0; i < root->children.size(); i++)
        {
            count += leafNodes(root->children[i]);
        }
    }
    return count;
}

void preorder(TreeNode<int> *root)
{
    if (root == NULL)
        return;
    cout << root->data << " ";
    for (int i = 0; i < root->children.size(); i++)
    {
        preorder(root->children[i]);
    }
}

void postorder(TreeNode<int> *root)
{
    for (int i = 0; i < root->children.size(); i++)
    {
        postorder(root->children[i]);
        cout << root->children[i]->data;
    }
}

// void maxSumUntil(TreeNode<int> *root, TreeNode<int> *resNode, int maxsum)
// {
//     int currsum = root->data;
//     for (int i = 0; i < root->children.size(); i++)
//     {
//         currsum = root->children[i]->data;
//         maxSumUntil(root->children[i], resNode, maxsum);
//         if (currsum > maxsum)
//         {
//             resNode = root;
//             maxsum = currsum;
//         }
//     }
// }
// int maxChildSum(TreeNode<int> *root)
// {
//     TreeNode<int> *resNode;
//     int maxSum = 0;
//     maxSumUntil(root, resNode, maxSum);
//     return resNode->data;
// }

int main()
{
    // 1 3 2 3 4 2 5 6 2 7 8 0 0 0 0 1 9 0
    TreeNode<int> *root = takeInputLevelwise();
    printTree(root);
    // cout << leafNodes(root) << endl;
    // cout << findHeight(root) << endl;
    // preorder(root);
    // cout << endl;
    // postorder(root);
    delete root;
}