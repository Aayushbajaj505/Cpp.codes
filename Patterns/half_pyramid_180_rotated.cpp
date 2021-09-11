#include <iostream>
using namespace std;

int main()
{
    int row;
    cin >> row;

    for (int x = 1; x <= row; x++)
    {
        for (int y = 1; y <= row; y++)
        {
            if (y <= row - x)
            {
                cout << " ";
            }
            else
            {
                cout << '*';
            }
        }
        cout << endl;
    }
}