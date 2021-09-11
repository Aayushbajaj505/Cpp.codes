#include <iostream>
using namespace std;

int main()
{
    int row, col;
    cin >> row >> col;

    for (int x = 1; x <= row; x++)
    {
        for (int y = 1; y <= col; y++)
        {
            if (x == 1 || x == row || y == 1 || y == col)
            {
                cout << "*";
            }
            else
            {
                cout << " ";
            }
        }
        cout << endl;
    }
    return 0;
}