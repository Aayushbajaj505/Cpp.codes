#include <bits/stdc++.h>
using namespace std;
// whenever we write any code it si stored in the stack,
// but if our code requires a lot of memmory it sometimes reuslt in stack overflow errors
// to mitigate that we use Heap
// Heap is also called free storage
int main()
{
    int a = 10;
    // *new* keyword is used whenevr we want to use Heap
    int *p = new int();
    *p = 10;
    // p is a pointer which is pointing to the memory address of the heap
    // heap is allocated mannually and deallocate memory
    delete (p);
    p = new int[4];
    // if we do not delete pointer p from the stack it is called a dangling pointer,
    // the dangling pointer also needs to be deleted or reused.
    delete[] p;
    p = NULL;
}