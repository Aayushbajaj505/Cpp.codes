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
    cout << ++aptr << endl;     // there is a gap of 4 because int takes 4 bytes
                                //  so the gap will be equal to the size of the data typei
                                // thats we take the pointer as the saem data type as the value
    // array to pointer
    int arr[] = {10, 20, 30};
    cout << *arr << '*arr' << endl;
    int *ptr = arr; //arr and *ptr both store the location of the first value of the array
    for (int i = 0; i < 3; i++)
    {
        // that is why we can increase teh pointer because arrays are continous
        cout << *ptr << endl;
        ptr++;
    }
    // pointer to opointer
    int b = 11;
    int *p = &b;
    cout << "p " << p << " *p " << *p << endl;
    int **q = &p;
    cout << "*q " << *q << endl;
    cout << "**q " << **q << endl;
}