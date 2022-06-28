#include <bits/stdc++.h>
using namespace std;

int maxSubArrSum(vector<int> v){
    
    long long  m = LONG_LONG_MIN, sum = 0;

    int i = 0;

    while(i<v.size()){

        sum+=v[i];
        m = max(m, sum );

        if(sum<0){
            sum = 0;
        }
        i++;
    }
    return m;

}

int main(){

    vector<int> v = {-1,-2,-3,-4};
    cout<<maxSubArrSum(v)<<endl;
}

