// https://www.codingninjas.com/codestudio/problems/bfs-in-graph_973002?topList=love-babbar-dsa-sheet-problems&leftPanelTab=1&utm_source=youtube&utm_medium=affiliate&utm_campaign=Lovebabbar
#include <bits/stdc++.h>
using namespace std;

vector<int> BFS(int vertex, vector<pair<int, int>> edges)
{
    // Write your code here

    unordered_map<int, set<int>> g;

    for (int i = 0; i < edges.size(); i++)
    {
        int u = edges[i].first;
        int v = edges[i].second;

        g[u].insert(v);
        g[v].insert(u);
    }

    vector<int> res;

    vector<int> vis(vertex, 0);

    queue<int> q;

    for (int k = 0; k < vertex; k++)
    {
        if (vis[k])
            continue;

        q.push(k);
        // push node to the queue
        // pop from queue
        // mark that visited
        // go to the neighbours

        while (!q.empty())
        {
            int node = q.front();
            q.pop();

            vis[node] = 1;

            res.push_back(node);

            for (auto i : g[node])
            {
                if (!vis[i])
                {
                    q.push(i);
                    vis[i] = 1;
                }
            }
        }
    }

    return res;
}

int main()
{

    int v, e;
    vector<pair<int, int>> g;

    cin >> v >> e;

    for (int i = 0; i < e; i++)
    {
        int u, v;
        cin >> u >> v;
        g.push_back({u, v});
    }

    for (auto i : BFS(v, g))
    {
        cout << i << endl;
    }
}
