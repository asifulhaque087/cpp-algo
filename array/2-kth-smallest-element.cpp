#include <bits/stdc++.h>
using namespace std;

int kthSmallest(vector<int> arr, int l, int r, int k){
    priority_queue<int> q;

    for (auto i:arr){
        q.push(i);
        if (q.size()>k) q.pop();
    }
    return q.top();
}

int main(){

int n,k;
cin>>n;

vector<int> v;

for (int i=0; i<n; i++){
    int item;
    cin>>item;
    v.push_back(item);
}
cin>>k;

cout<<kthSmallest(v,0,n,k);



}