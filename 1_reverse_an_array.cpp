#include <bits/stdc++.h>
using namespace std;

void reverseArray(vector<int> &v){

    int s = 0;
    int e = v.size()-1;

    while (s<e){
        swap(v[s], v[e]);
        s++;
        e--;
    }

}

int main(){

vector<int> v = {4, 5, 1, 2};

cout<<"after "<<"\n";
for(auto i:v)cout<<i<<endl;

reverseArray(v);


cout<<"\nbefore "<<"\n";
for(auto i:v)cout<<i<<endl;


}

