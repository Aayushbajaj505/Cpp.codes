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
class B : public A
{
public:
    void Bfunc()
    {
        cout << "fun b";
    }
};
class C : public B
{
};
int main()
{
    C c;
    c.Afunc();
}