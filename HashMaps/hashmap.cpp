#include <bits/stdc++.h>
#include <algorithm>
#include <string>
#include <climits>
#include <vector>
#include <stack>
#include <queue>
#include <unordered_map>
using namespace std;
int main()
{
    unordered_map<string, int> ourmap;
    // insert
    pair<string, int> p("abc", 1);
    ourmap.insert(p);
    ourmap["def"] = 1;

    // find or access
    cout << ourmap["def"] << endl;
    cout << ourmap.at("abc") << endl;
    cout << ourmap["ghi"] << endl;
    // if we use .at() and put a key which does not exist
    // it will give an error but if we try to access through square brackets then
    // it will first insert the key and initialize the value by 0 mand return 0

    // check presence
    if (ourmap.count("ghi") > 0)
    {
        cout << "ghi is present" << endl;
    }

    // size
    cout << ourmap.size() << endl;

    // erase an element
    ourmap.erase("ghi");
    cout << ourmap.size() << endl;
}
