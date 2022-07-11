// https://www.codingninjas.com/codestudio/problems/topological-sort_982938?topList=love-babbar-dsa-sheet-problems&leftPanelTab=1&utm_source=youtube&utm_medium=affiliate&utm_campaign=Lovebabbar
#include <bits/stdc++.h>
using namespace std;

vector<int> topologicalSort(vector<vector<int>> &edges, int v, int e){
    // make graph
    // make indegree vector
    // result vector

    unordered_map<int, list<int> > g;

    for (int i=0; i<e; i++){
        int u = edges[i][0];
        int v = edges[i][1];

        g[u].push_back(v);
    }

    vector<int> indegree(v);

    for(auto i:g){
        for (int j:i.second){
            indegree[j]++;
        }
    }

    vector<int> res;

    queue<int> q;

    for (int i=0; i<v; i++){
        if (indegree[i] == 0){
            q.push(i);
        }
    }

    while(!q.empty()){
        int front = q.front();
        res.push_back(front);
        q.pop();

        for(auto i:g[front]){
            indegree[i]--;
            if (indegree[i] == 0){
                q.push(i);
            }
        }
    }

    return res;
}

int main(){


}

