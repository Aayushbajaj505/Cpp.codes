#include <bits/stdc++.h>
#include <algorithm>
#include <string>
#include <climits>
#include <vector>
using namespace std;
int main()
{
    // dynamically allocated - you will have to delete it yourself otherwise chance of a memory leak.
    vector<int> *vp = new vector<int>();

    // static allocation - deleted automatically after the scope of the object ends
    vector<int> v;
    // vectors are dynamic size arrays with the ability to resize itself
    // with push back the elements get added to the last of the vector
    //
    v.push_back(1);
    v.push_back(2);
    v.push_back(3);
    // Iterate over a vector
    for (int i = 0; i < v.size(); i++)
    {
        cout << v[i];
    }
    cout << endl;
    vector<int>::iterator it;
    for (it = v.begin(); it != v.end(); it++)
    {
        cout << *it;
    }
    cout << endl;
    for (auto element : v)
    {
        cout << element;
    }
    cout << endl;
    v.pop_back();          // 1 2
    vector<int> v2(3, 50); // 50 50 50
    // 3 represents the size of vector and 50 is the element to be filled in all the spaces.

    // swap values of two vectors
    swap(v, v2);
    for (auto element : v)
    {
        cout << element;
    }
    cout << endl;
    for (auto element : v2)
    {
        cout << element;
    }
    cout << endl;
    // iterator
    vector<int>::iterator it1 = v.begin();
    cout << "iterator";
    while (it1 != v.end())
    {
        cout << *it1 << endl;
        it1++;
    }
    // sort a vector
    sort(v.begin(), v.end());
}