// https://www.codingninjas.com/codestudio/problems/cycle-detection-in-undirected-graph_1062670?topList=love-babbar-dsa-sheet-problems&leftPanelTab=0&utm_source=youtube&utm_medium=affiliate&utm_campaign=Lovebabbar
#include <bits/stdc++.h>
using namespace std;



bool isCyclicBfs(unordered_map<int,list<int>> &g, unordered_map<int, bool> &vis, int node){

    unordered_map<int,int> parent;
    parent[node] = -1;
    vis[node] = 1;
    queue<int> q;
    q.push(node);
    

    while(!q.empty()){
        int front = q.front();
        q.pop();

        for(auto i:g[front]){
            if (vis[i]==true && i != parent[front]){
              return true;  
            } 
            else if(!vis[i]){
                q.push(i);
                vis[i] = 1;
                parent[i] = front;
                
            }
        }

    }
    return false;

}

string cycleDetection (vector<vector<int>>& edges, int n, int m)
{
    // make graph
    // with parent array track for path cycle using bfs
    unordered_map<int,list<int>> g;

    for (int i = 0; i<m; i++){
        int u = edges[i][0];
        int v = edges[i][1];     

        g[u].push_back(v);
        g[v].push_back(u);

    }

    unordered_map<int,bool> vis;

    for(int i = 0; i<n; i++){
      
      
       if (!vis[i]){
           bool ans = isCyclicBfs(g,vis, i);
           if(ans == 1) {
                return "Yes";
           }
       }
       
    }
    return "No";
    
}



int main()
{

}
