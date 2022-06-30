#include <bits/stdc++.h>
using namespace std;

vector<vector<int>> merge(vector<vector<int>> &intervals){
    sort(intervals.begin(), intervals.end());

    vector<vector<int>> new_v = {intervals[0]};

    int i = 1;
    while (i<intervals.size()){

        int lastEnd = new_v[new_v.size()-1][1];
        int start = intervals[i][0];
        int end = intervals[i][1];

        if (start<=lastEnd){
            new_v[new_v.size()-1][1] = max(lastEnd, end);
        }else{
            new_v.push_back({start,end});
        }
        i++;
    }
    return new_v;


}

int main(){

    // vector<vector<int>> v = {{15, 18}, {8, 10}, {1, 3} , {2, 6}};
    vector<vector<int>> v = {{1,4}, {0,2}, {3,5}};

    // merge(v);

    for (auto i:merge(v)){
        for (int j:i){
            cout<<j<<endl;
        }
        cout<<endl;
    }


}


