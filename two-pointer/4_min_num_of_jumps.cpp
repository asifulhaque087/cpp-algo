#include <bits/stdc++.h>
using namespace std;

int minJumps(vector<int> v){

    int res = 0;
    int l = 0;
    int r = 0;

    int j = 0;
    while(r<v.size()){

        int farthest = 0;

        // loop in current window
        for (int i = l; i<=r; i++){
            farthest = max(farthest, i+v[i]);
        }


        if (r == farthest){
            return -1;
        }

        // make next window
        l = r+1;        // 1 // 4 // 4 // 1
        r = farthest;   // 3 // 3 // 0 // 0

        // cout<<l<<" "<<r<<"\n";
        res++;

    if(j>100){
        break;
    }
    j++;

    }
    return res;

}

int main(){
vector<int> v = {3,2,1,0,4};

cout<<minJumps(v)<<endl;

}

