#include <bits/stdc++.h>
#include <algorithm>
#include <string>
#include <climits>
using namespace std;

int main()
{
    string s = "skjdfhvuisdfhvgbiujkdfnbvivfiujsdhbfviu";
    int freq[26] = {0};
    for (int i = 0; i < s.size(); i++)
    {
        //  -'a' to start with index zero
        // for ex if it is a then it will go to index 0
        // bto index 1 and so on
        freq[s[i] - 'a']++;
    }
}