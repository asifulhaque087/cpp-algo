// https://practice.geeksforgeeks.org/problems/count-pairs-with-given-sum5022/1

#include <bits/stdc++.h>
using namespace std;


int getPairsCount(vector<int> arr, int k ){

    unordered_map<int,int> m;

    for (int i:arr){
        m[i]++;

        cout<<i<<":"<<m[i]<<"\n";
    }

    int res = 0;
    for (int i:arr){
        res += m[k-i];
        if (i == k-i){
            res--;
        }
    }
    return res/2;
}


int main(){
    // vector<int> arr = {1,5,7,1};
    vector<int> arr = {1,1,1,1};
    cout<<getPairsCount(arr, 2);


}

