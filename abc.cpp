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
        return;
    cout << root->data << ":";
    if (root->left != NULL)
        cout << "L" << root->left->data;
    if (root->right != NULL)
        cout << "R" << root->right->data;
    printtree(root->left);
    printtree(root->right);
}

void inorder(bnode<int> *root)
{
    inorder(root->left);
    cout << root->data;
    inorder(root->right);
}

void preorder(bnode<int> *root)
{
    cout << root->data;
    preorder(root->left);
    preorder(root->right);
}

void postorder(bnode<int> *root)
{
    postorder(root->left);
    postorder(root->right);
    cout << root->data;
}

void printtreelevel(bnode<int> *root)
{
    queue<bnode<int> *> pendingnodes;
    pendingnodes.push(root);
    while (pendingnodes.size() != 0)
    {
        int count = pendingnodes.size();

        while (count > 0)
        {
            bnode<int> *front = pendingnodes.front();
            cout << front->data << ":";
            pendingnodes.pop();
            if (front->left != NULL)
            {
                cout << "L" << front->left->data;
                pendingnodes.push(front->left);
            }
            if (front->right != NULL)
            {
                cout << "R" << front->right->data;
                pendingnodes.push(front->right);
            }
            count = count - 1;
        }
        cout << endl;
    }
}

int countnode(bnode<int> *root)
{
    return countnode(root->left) + countnode(root->right) + 1;
}

int height(bnode<int> *root)
{
    return max(height(root->left), height(root->right)) + 1;
}
int main()
{
}