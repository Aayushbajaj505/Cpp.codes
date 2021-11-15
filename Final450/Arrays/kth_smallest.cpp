#include <bits/stdc++.h>
#include <algorithm>
#include <string>
#include <climits>
#include <vector>
#include <stack>
#include <queue>
using namespace std;
// Two ways to solve the problem
// first is to sort the array and return the k-1 index - O(nLog n)
// to improve time complexity we can use set
// set is implemented using binary search tree in STD c++ library and the
// average time complexity of a search in BST is O(Log n)

int main()
{
    int arr[] = {12, 3, 5, 7, 19};
    int n = 5;
    int k = 4;
    set<int> s(arr, arr + n);
    set<int>::iterator itr = s.begin();
    advance(itr, k - 1);
    cout << *itr << endl;
}