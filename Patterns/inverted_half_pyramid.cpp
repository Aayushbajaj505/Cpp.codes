#include <iostream>
using namespace std;

int main()
{
    int row;
    cin >> row;
    for (int x = 0; x < row; x++)
    {
        for (int y = x; y < row; y++)
            cout << '*';
        cout << endl;
    }
}