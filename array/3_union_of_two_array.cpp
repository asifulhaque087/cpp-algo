#include <bits/stdc++.h>
using namespace std;

int doUnion(vector<int> &v1, vector<int> &v2){

    unordered_set<int> s;

    int i = 0;

    while(i<v1.size() || i<v2.size()){
        if (i<v1.size())s.insert(v1[i]);
        if (i<v2.size())s.insert(v2[i]);
        i++;
    }
    return s.size();

}

int main(){

vector<int> v1 = {85, 25, 1, 32, 54, 6};
vector<int> v2 = {85,2};

cout<<doUnion(v1,v2)<<endl;

}

