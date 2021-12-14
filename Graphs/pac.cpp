#include <bits/stdc++.h>
#include <algorithm>
#include <string>
#include <climits>
#include <vector>
#include <stack>
#include <queue>
#include <unordered_map>
using namespace std;
void printBfs(int **edges, int n, int sv)
{
    bool visited1[n] = {false};
    queue<int> q;
    q.push(sv);
    while (!q.empty())
    {
        int currVertex = q.front();
        q.pop();
        cout << currVertex;
        for (int i = 0; i < n; i++)
        {
            if (i == currVertex)
            {
                continue;
            }
            if (edges[currVertex][i] == 1 && !visited1[i])
            {
                q.push(i);
                visited1[i] = true;
            }
        }
    }
}
void printDfs(int **edges, int n, int sv, bool *visited)
{
    cout << sv << endl;
    visited[sv] = true;
    for (int i = 0; i < n; i++)
    {
        if (i == sv)
        {
            continue;
        }
        if (edges[sv][i] == 1)
        {
            if (visited[i] == 1)
            {
                continue;
            }
            printDfs(edges, n, i, visited);
        }
    }
}
int main()
{
    int n;
    int e;
    cin >> n >> e;
    int **edges = new int *[n];
    // matrix creation
    for (int i = 0; i < n; i++)
    {
        edges[i] = new int[n];
        for (int j = 0; j < n; j++)
        {
            edges[i][j] = 0;
        }
    }
    // matrix data input
    for (int i = 0; i < n; i++)
    {
        int f, s;
        cin >> f >> s;
        edges[f][s] = 1;
        edges[s][f] = 1;
    }
    bool visited[n] = {false};
    printDfs(edges, n, 0, visited);
}