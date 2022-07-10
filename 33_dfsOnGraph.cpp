#include <bits/stdc++.h>
using namespace std;



void dfs(unordered_map<int,list<int>> &g, vector<int> &component, vector<int> &vis, int node)
{
    vis[node] = 1;
    component.push_back(node);
    for (auto i:g[node]){
        if (vis[i]) continue;
        dfs(g, component, vis, i);
    }
}

vector<vector<int>> depthFirstSearch(int V, int E, vector<vector<int>> &edges)
{
    // Write your code here
    // create graph
    // make a visited array and answer array
    // call dfs
    unordered_map<int, list<int>> g;
    
    for (int i = 0; i<E; i++){
        int u = edges[i][0];
        int v = edges[i][1];
        
        g[u].push_back(v);
        g[v].push_back(u);
        
    }
    
    vector<vector<int>> res; 
    vector<int> vis(V, 0);
    
    for (int i = 0; i<V; i++){
        if (vis[i]) continue;
        vector<int> component;
        dfs(g, component, vis, i);
        res.push_back(component);
    }
    
    
    return res;
 
}


int main()
{


}
