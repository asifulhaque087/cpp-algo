#include <bits/stdc++.h>
using namespace std;


bool linearSearch(vector<int> v, int k) {
    if (v.size() == 0) return false;

    if (v[0] == k) return true;

    return linearSearch(vector<int>(v.begin()+1, v.end()), k);


}


int main(){

    vector<int> v = {};

    cout<<linearSearch(v, 9);


}

