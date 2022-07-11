// https://www.codingninjas.com/codestudio/problems/shortest-path-in-an-unweighted-graph_981297?leftPanelTab=0&utm_source=youtube&utm_medium=affiliate&utm_campaign=Lovebabbar
#include <bits/stdc++.h>
using namespace std;

vector<int> shortestPath( vector<pair<int,int>> edges , int n , int m, int s , int t){
	

    // create graph
    // make a parent map using bfs

    unordered_map<int,list<int> > g;

    for(int i=0; i<m; i++){
        int u = edges[i].first;
        int v = edges[i].second;

        g[u].push_back(v);
        g[v].push_back(u);
    }


    unordered_map<int, int> parent;
    unordered_map<int, bool> visited;
    queue<int> q;

    q.push(s);
    visited[s] = 1;

    while(!q.empty()){
        int front = q.front();
        q.pop();    

        for (auto i:g[front]){
            if(!visited[i]){
                q.push(i);
                visited[i] = 1;
                parent[i] = front;
            }
        }
    }

    vector<int> res;

    int current = t;
    res.push_back(current);

    while(current != s){
        current = parent[current];
        res.push_back(current);
    }

    reverse(res.begin(),res.end()); 

    return res;
	
}


int main(){


}

