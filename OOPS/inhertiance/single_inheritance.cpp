#include <bits/stdc++.h>
#include <algorithm>
#include <string>
#include <climits>
#include <vector>
using namespace std;
class A
{
public:
    void func()
    {
        cout << "inherited";
    }
};
class B : public A
{
};
int main()
{
    B b;
    b.func();
}