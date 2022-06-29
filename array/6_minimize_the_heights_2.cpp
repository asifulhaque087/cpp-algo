#include <bits/stdc++.h>
using namespace std;

int getMinDiff(vector<int> v, int k){

    sort(v.begin(),v.end());

    int diff = v[v.size()-1] - v[0];
    int maxi = 0;
    int mini = 0;

    int i = 1;
    while (i<v.size()){
        
        if (v[i]-k<0) continue;

        maxi = max(v[i]+k,v[v.size()-1]-k);
        mini = min(v[0]+k, v[i]-k);

        diff = min(diff, maxi-mini);

        i++;
    }
    return diff;

}

int main(){

    vector<int> v = {3, 9, 12, 16, 20};
    cout<<getMinDiff(v,3)<<endl;



}

