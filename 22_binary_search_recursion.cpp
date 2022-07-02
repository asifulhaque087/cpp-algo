#include <bits/stdc++.h>
using namespace std;

bool binaryS(int s, int e, vector<int> v, int k){

    if (s>e || e == 0)return false;

    int mid = s+(e-s)/2;


    // cout<<v[mid]<< " "<<k<<endl;
    if (v[mid] == k) return true;

    if(v[mid]<k){
        return binaryS(mid+1, e, v, k);
    }

    return binaryS(s, mid-1, v, k);

}

int main(){

    vector<int> v = {4,5};
    cout<<binaryS(0, v.size()-1,v, 2);



}

