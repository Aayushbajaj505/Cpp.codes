#include <bits/stdc++.h>
#include <algorithm>
#include <string>
#include <climits>
#include <vector>
#include <stack>
#include <queue>
#include <unordered_map>
using namespace std;
void printBFS(int **edges, int n, int sv, bool *visited)
{
    queue<int> pendingVertices;
    // bool visited[n] = {false};
    pendingVertices.push(sv);
    visited[sv] = true;
    while (!pendingVertices.empty())
    {
        int currvertex = pendingVertices.front();
        pendingVertices.pop();
        cout << currvertex << endl;
        for (int i = 0; i < n; i++)
        {
            if (i == currvertex)
            {
                continue;
            }
            if (edges[currvertex][i] == 1 && !visited[i])
            {
                pendingVertices.push(i);
                visited[i] = true;
            }
        }
    }
}
void print(int **edges, int n, int sv, bool *visited)
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
            if (visited[i] == true)
            {
                continue;
            }
            print(edges, n, i, visited);
        }
    }
}
int main()
{
    int n;
    int e;
    cin >> n >> e;
    int **edges = new int *[n];
    for (int i = 0; i < n; i++)
    {
        edges[i] = new int[n];
        for (int j = 0; j < n; j++)
        {
            edges[i][j] = 0;
        }
    }
    for (int i = 0; i < e; i++)
    {
        int f, s;
        cin >> f >> s;
        edges[f][s] = 1;
        edges[s][f] = 1;
    }
    bool visited[n] = {false};
    // cout << "DFS";
    // print(edges, n, 0, visited);
    cout << "BFS";
    printBFS(edges, n, 0, visited);
    // delete[] edges;
    // delete[] visited;
}