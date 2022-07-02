#include <bits/stdc++.h>
using namespace std;

int sumArray(vector<int> v, int i ){

    if (i == v.size())return 0;

    return v[i] + sumArray(v, i+1);


}

int main(){

    vector<int> v = {20};
    cout<<sumArray(v, 0)<<endl;

}


