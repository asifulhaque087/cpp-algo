#include <bits/stdc++.h>
using namespace std;

void sort012(vector<int> &v){

    int l = 0;
    int r = v.size()-1;

    int i = 0;

    while(i<r){
        
        if (v[i] == 0){
            swap(v[l], v[i]);
            l++;
        }

        if (v[i] == 2){
            swap(v[i], v[r]);
            r--;
        }

        i++;
    }
}

int main(){

vector<int> v = {0,2,1,2,0};

sort012(v);

for (auto i:v) cout<<i<<endl;


}