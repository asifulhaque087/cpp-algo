#include <bits/stdc++.h>
using namespace std;

void revS(int s, int e, string &st){
    
    // if (s.size() == 0) return ;

    // revS(s.substr(1));

    // cout<<s[0]<<endl;

    if (s>=e) return;

    swap(st[s], st[e]);
    revS(s+1, e-1, st);


}

int main(){
    string  st = "mridul";
    revS(0, st.size()-1, st);
    cout<<st;


}

