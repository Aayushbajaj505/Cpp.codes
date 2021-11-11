#include <bits/stdc++.h>
#include <algorithm>
#include <string>
#include <climits>
#include <vector>
#include <stack>
#include <queue>
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
TreeNode<int> *takeInputLevelwise()
{
    // gett root data
    int rootdata;
    cout << "Enter root data" << endl;
    cin >> rootdata;
    // make a root node
    TreeNode<int> *root = new TreeNode<int>(rootdata);
    // push it to pending queue
    queue<TreeNode<int> *> pendingNodes;
    pendingNodes.push(root);

    while (pendingNodes.size() != 0)
    {
        TreeNode<int> *front = pendingNodes.front();
        pendingNodes.pop();
        int numChild;
        cout << "Enter Number of children of " << front->data << endl;
        cin >> numChild;
        for (int i = 0; i < numChild; i++)
        {
            int childData;
            cout << "Enter " << i << " th child of" << front->data << endl;
            cin >> childData;
            TreeNode<int> *child = new TreeNode<int>(childData);
            front->children.push_back(child);
            pendingNodes.push(child);
        }
    }
    return root;
}
int main()
{
    TreeNode<int> *root = new TreeNode<int>(1);
    TreeNode<int> *node1 = new TreeNode<int>(2);
    TreeNode<int> *node2 = new TreeNode<int>(3);
    root->children.push_back(node1);
    root->children.push_back(node2);
    printTree(root);
}