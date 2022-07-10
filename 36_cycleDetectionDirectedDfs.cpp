// https://www.codingninjas.com/codestudio/problems/detect-cycle-in-a-directed-graph_1062626?leftPanelTab=0&utm_source=youtube&utm_medium=affiliate&utm_campaign=Lovebabbar

#include <bits/stdc++.h>
using namespace std;

bool isCyclicDfs(unordered_map<int, list<int> > &g, unordered_map<int,bool> & visited, unordered_map<int,bool> & cycle, int node ){

    // mark as visited
    // mark as visited in cycle
    // explore neighbours
    // if any neighbours exist on cycle return true

    visited[node] = 1;
    cycle[node] = 1;

    for(auto i:g[node]){
        if (!visited[i]) {
            bool ans = isCyclicDfs(g, visited, cycle, i);
            if (ans){
                return true;
            }
        }
        else if (cycle[i]){
            return true;
        }
    }
    cycle[node] = 0;
    return false;

}


int detectCycleInDirectedGraph(int n, vector < pair < int, int >> & edges) {

    // make graph

    unordered_map<int, list<int> > g;

    for (int i = 0; i<edges.size(); i++){
        int u = edges[i].first;
        int v = edges[i].second;

        g[u].push_back(v);
    }

    // visited map
    // cycle map
    // need a source node
    
    unordered_map<int, bool> visited;
    unordered_map<int, bool> cycle;

    for (int i = 0; i<n; i++){
        if (!visited[i]){
            bool ans = isCyclicDfs(g, visited, cycle, i);
            if (ans){
                return true;
            }
        }
    }
    return false;




}


int main(){



}

