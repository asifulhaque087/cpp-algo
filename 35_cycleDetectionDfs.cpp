// https://www.codingninjas.com/codestudio/problems/cycle-detection-in-undirected-graph_1062670?topList=love-babbar-dsa-sheet-problems&leftPanelTab=0&utm_source=youtube&utm_medium=affiliate&utm_campaign=Lovebabbar
#include <bits/stdc++.h>
using namespace std;

bool isCyclicDfs(unordered_map<int, list<int>> &g, unordered_map<int, bool> &vis, int node, int parent)
{

    // mark it visited
    // go to the neighbours
    // check if the neighbours is visited and  the parent
    // if visited but not parent return true

    vis[node] = 1;

    for (auto i : g[node])
    {
        if (!vis[i])
        {
            bool ans = isCyclicDfs(g, vis, i, node);
            if (ans){
                return true;
            }
        }
        else if (vis[i] && i != parent){
            return true;
        }
    }
    return false;
}

string cycleDetection(vector<vector<int>> &edges, int n, int m)
{
    // make graph

    unordered_map<int, list<int>> g;

    for (int i = 0; i < m; i++)
    {
        int u = edges[i][0];
        int v = edges[i][1];

        g[u].push_back(v);
        g[v].push_back(u);
    }

    unordered_map<int, bool> vis;

    for (int i = 0; i < n; i++)
    {

        if (!vis[i])
        {
            bool ans = isCyclicDfs(g, vis, i, -1);
            if (ans == 1)
            {
                return "Yes";
            }
        }
    }
    return "No";
}

int main()
{
}
