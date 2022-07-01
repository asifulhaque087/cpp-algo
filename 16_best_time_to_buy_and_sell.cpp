// https://leetcode.com/problems/best-time-to-buy-and-sell-stock/submissions/
#include <bits/stdc++.h>
using namespace std;

int maxProfit(vector<int> &prices){

    int m = 0;
    int l = 0;
    int r = 1;

    while (r<prices.size()){

        if (prices[r]>prices[l]){
            int diff = prices[r] - prices[l];
            m = max(m, diff);
        }else{
            l = r;
        }
        r++;
    }
    return m;

}

int main(){

    vector<int> v = {7,1,5,3,6,4};
    cout<<maxProfit(v);

}


