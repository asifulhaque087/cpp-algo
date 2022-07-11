// https://www.codingninjas.com/codestudio/problems/detect-cycle-in-a-directed-graph_1062626?leftPanelTab=1&utm_source=youtube&utm_medium=affiliate&utm_campaign=Lovebabbar
#include <bits/stdc++.h>
using namespace std;

int detectCycleInDirectedGraph(int n, vector<pair<int, int>> &edges)
{
    // Write your code here.
    // make graph
    // make indegree vector

    // count toplogical item

    unordered_map<int, list<int>> g;

    for (int i = 0; i < edges.size(); i++)
    {
        int u = edges[i].first - 1;
        int v = edges[i].second - 1;

        g[u].push_back(v);
    }

    vector<int> indegree(n);

    for (auto i : g)
    {
        for (int j : i.second)
        {
            indegree[j]++;
        }
    }

    queue<int> q;

    for (int i = 0; i < n; i++)
    {
        if (indegree[i] == 0)
        {
            q.push(i);
        }
    }

    int count = 0;
    while (!q.empty())
    {
        int front = q.front();
        count++;
        q.pop();

        for (auto i : g[front])
        {
            indegree[i]--;
            if (indegree[i] == 0)
            {
                q.push(i);
            }
        }
    }

    if (count == n)
    {
        return false;
    }
    return true;
}

int main()
{
}
