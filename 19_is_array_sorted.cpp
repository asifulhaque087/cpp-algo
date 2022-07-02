
#include <bits/stdc++.h>
using namespace std;

bool isArraySorted(vector<int> v, int n){


    if (n == 0 || n == 1) return true;

    if (v[0]>v[1]){
        return false;
    }else{

        return isArraySorted(vector<int>(v.begin()+1,v.end()),n-1);
    }



    
}


int main(){

    vector<int> v = {20, 20, 39, 119};
    int n = v.size();
    cout<<isArraySorted(v,n);

}

