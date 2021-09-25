#include <bits/stdc++.h>
#include <algorithm>
#include <string>
using namespace std;

int main()
{
    string str = "aayush";
    // str.clear();
    cout << str << endl;
    string str1(5, 'a');
    cout << str1 << endl;
    if (!str.compare(str1))
    {
        cout << 'hello';
    }
    str.erase(3, 3);
    cout << str << endl;
    cout << str.find('aa') << endl;
    cout << str.insert(2, "mmm") << endl;
    cout << str.size() << endl;
    cout << str.substr(2, 4) << endl;
    string s1 = "786";
    cout << stoi(s1) + 2 << endl;
    string s2 = "skjfhbvgniukh";
    // sort(s2.begin(), s1.end());
    transform(s2.begin(), s2.end(), s2.begin(), ::toupper);
    cout << s2 << endl;
    transform(s2.begin(), s2.end(), s2.begin(), ::tolower);
    cout << s2 << endl;
    string s = "653468536";
    sort(s.begin(), s.end(), greater<int>());
    cout << s << endl;
}
