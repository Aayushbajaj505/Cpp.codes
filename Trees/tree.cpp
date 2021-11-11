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
};

void printTree(TreeNode<int> *root)
{
    if (root == NULL)
    {
        return;
    }
    cout << root->data << " : ";
    for (int i = 0; i < root->children.size(); i++)
    {
        cout << root->children[i]->data << ",";
    }
    cout << endl;
    for (int i = 0; i < root->children.size(); i++)
    {
        printTree(root->children[i]);
    }
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
int main()
{
    // TreeNode<int> *root = new TreeNode<int>(1);
    // TreeNode<int> *node1 = new TreeNode<int>(2);
    // TreeNode<int> *node2 = new TreeNode<int>(3);
    // root->children.push_back(node1);
    // root->children.push_back(node2);
    // printTree(root);
    TreeNode<int> *root = takeInputLevelwise();
    printTree(root);
}