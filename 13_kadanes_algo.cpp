#include <bits/stdc++.h>
using namespace std;

long long maxSubArraySum(vector<int> v){

    long long m = LONG_LONG_MIN, sum = 0;

    for (int i:v){
        sum += i;
        m = max(m,sum);

        if (sum < 0){
            sum = 0;
        }
    }

    return m;

}

int main(){

    vector<int> v = {-1,-2,-3,-4};
    cout<<maxSubArraySum(v);



}


