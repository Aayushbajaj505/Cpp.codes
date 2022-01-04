#include <bits/stdc++.h>
#include <algorithm>
#include <string>
#include <climits>
#include <vector>
#include <stack>
#include <queue>
#include <unordered_map>
using namespace std;
class Edge
{
public:
    int source;
    int dest;
    int weight;
};
int findParent(int v, int *parent)
{
    // if the number is itselfs parent then we return the number
    if (parent[v] == v)
    {
        return v;
    }
    // else we call it again utill wer get the
    // top most parent so that we can check
    // if a cyce is being introduced
    return findParent(parent[v], parent);
}
bool compare(Edge e1, Edge e2)
{
    return e1.weight < e2.weight;
}
void kruskals(Edge *input, int n, int E)
{
    // sort the input array based on weights
    sort(input, input + E, compare);

    Edge *output = new Edge[n - 1]; //output array

    int *parent = new int[n]; //parent array
    for (int i = 0; i < n; i++)
    {
        parent[i] = i;
    }

    int count = 0;
    int i = 0;
    while (count != n - 1)
    {
        Edge current = input[i];

        // check if we can add the curretn edge in mst or Not
        int sourceParent = findParent(current.source, parent);
        int destParent = findParent(current.dest, parent);

        if (sourceParent != destParent)
        {
            // add to output array
            output[count++] = current;
            // change the parent of any one of teh added edge
            parent[sourceParent] = destParent;
        }
        i++;
    }
    // printing
    for (int i = 0; i < n - 1; i++)
    {
        if (output[i].source < output[i].dest)
            cout << output[i].source << " " << output[i].dest << " " << output[i].weight << endl;
        else
            cout << output[i].dest << " " << output[i].source << " " << output[i].weight << endl;
    }
}
int main()
{
    int n, E;
    cin >> n >> E;
    Edge *input = new Edge[E]; //input array

    for (int i = 0; i < E; i++)
    {
        int s, d, w;
        cin >> s >> d >> w;
        input[i].source = s;
        input[i].dest = d;
        input[i].weight = w;
    }
    cout << "Out of kruskals MST is " << endl;
    kruskals(input, n, E);
}