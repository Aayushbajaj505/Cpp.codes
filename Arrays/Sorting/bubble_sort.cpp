// repeteadly swap two adjacent elemnts
// if they are in wrong order(L>R)

#include <bits/stdc++.h>
using namespace std;

int main()
{
    int arr[6] = {12, 45, 23, 57, 19, 8};
    int n = 6;
    int counter = 1;
    while (counter < n)
    {
        for (int i = 0; i < 6; i++)
        {
            if (arr[i] > arr[i + 1])
            {
                int temp = arr[i];
                arr[i] = arr[i + 1];
                arr[i + 1] = temp;
            }
        }
        counter++;
    }
    for (int i = 0; i < 6; i++)
    {
        cout << arr[i] << " ";
    }
}
