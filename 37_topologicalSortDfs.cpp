// https://www.codingninjas.com/codestudio/problems/topological-sort_982938?topList=love-babbar-dsa-sheet-problems&leftPanelTab=1&utm_source=youtube&utm_medium=affiliate&utm_campaign=Lovebabbar
#include <bits/stdc++.h>
using namespace std;

void topologicalDfs(unordered_map<int, list<int> > &g, unordered_map<int,bool> &visited, stack<int> &st, int node ){

    // make it visited
    // go to the neighbours
    // push it to the stack

    visited[node] = 1;

    for (auto i:g[node]){
        if (!visited[i]){
            topologicalDfs(g,visited, st, i);
        }
    }
    st.push(node);


}

vector<int> topologicalSort(vector<vector<int>> &edges, int v, int e)
{
    // make a graph
    // visited map
    // stack
    unordered_map<int, list<int> > g;

    for(int i=0; i<e; i++){
        int u = edges[i][0];
        int v = edges[i][1];
    
        g[u].push_back(v);
    }

    unordered_map<int, bool> visited;
    stack<int> st;

    for(int i = 0; i<v; i++){
        if (!visited[i]){
            topologicalDfs(g, visited, st, i);
        }
    }

    vector<int> res;

    while(!st.empty()){
        int top = st.top();
        res.push_back(top);
        st.pop();
    }

    return res;
}

int main()
{
}
