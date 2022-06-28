#include <bits/stdc++.h>
using namespace std;

void negetiveOneSide(vector<int> &v){

    int l = 0;

    int i = 0;
    while (i<v.size()) {
        if(v[i]<0){
            swap(v[i],v[l]);
            l++;
        }
        i++;
    }



}

int main(){

    vector<int> v = { -1, 2, -3, 4, 5, 6, -7, 8, 9 };
    negetiveOneSide(v);
    
    for(int i:v)cout<<i<<endl;


}

