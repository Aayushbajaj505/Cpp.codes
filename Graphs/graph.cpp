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
void printDFS(int **edges, int n, int sv, bool *visited)
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
            printDFS(edges, n, i, visited);
        }
    }
}
void DFS(int **edges, int n)
{
    bool *Dvisited = new bool[n];
    for (int i = 0; i < n; i++)
    {
        Dvisited[i] = false;
    }
    for (int i = 0; i < n; i++)
    {
        if (!Dvisited[i])
        {
            printDFS(edges, n, i, Dvisited);
        }
    }
    delete[] Dvisited;
}
void BFS(int **edges, int n)
{
    bool *Bvisited = new bool[n];
    for (int i = 0; i < n; i++)
    {
        Bvisited[i] = false;
    }
    for (int i = 0; i < n; i++)
    {
        if (!Bvisited[i])
        {
            printBFS(edges, n, i, Bvisited);
        }
    }
    delete[] Bvisited;
}
bool hasPath(int **edges, int n, int sv, int ev, bool *visited)
{
    if (sv == ev)
    {
        return true;
    }
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
            hasPath(edges, n, i, ev, visited);
        }
    }
    return false;
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
    cout << "DFS" << endl;
    DFS(edges, n);
    cout << "BFS" << endl;
    BFS(edges, n);
}