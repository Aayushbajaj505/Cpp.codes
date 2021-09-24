// pass-by reference
#include <bits/stdc++.h>
using namespace std;

void swapbyvalue(int a, int b)
{
    int temp = a;
    a = b;
    b = temp;
}
void swapbyrefrence(int *a, int *b)
{
    int temp = *a;
    *a = *b;
    *b = temp;
}
int main()
{
    int a = 2;
    int b = 4;

    int *aptr = &a;
    int *bptr = &b;
    swapbyvalue(a, b);
    cout << a << " " << b << endl;
    //this function only passses the value not the actual variable so a and b remain the same
    // but if we pass by refrence then the value chanegs
    swapbyrefrence(aptr, bptr);
    cout << a << " " << b << endl;
}