#include <bits/stdc++.h>
using namespace std;

int main()
{
    int a = 10;
    int *aptr; //pointer variable
    aptr = &a; //&gives the location of the variable

    cout << a << endl;
    cout << aptr << endl;
    cout << *aptr + 10 << endl; //pointer derefencing
    cout << ++aptr;             // there is a gap of 4 because int takes 4 bytes
                                //  so the gap will be equal to the size of the data typei
                                // thats we take the pointer as the saem data type as the value
}