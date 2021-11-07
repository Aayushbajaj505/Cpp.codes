#include <bits/stdc++.h>
#include <algorithm>
#include <string>
#include <climits>
#include <vector>
using namespace std;
class A
{
public:
    void Afunc()
    {
        cout << "fun a";
    }
};
class B
{
public:
    void Bfunc()
    {
        cout << "fun b";
    }
};
class C : public A, public B
{
};
int main()
{
    C c;
    c.Afunc();
}