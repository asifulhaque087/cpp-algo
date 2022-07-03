#include <bits/stdc++.h>
using namespace std;

void bubbleS(vector<int> &v, int n){
    if (n == 0 || n == 1) return ;

    for (int i = 0; i<n-1; i++)if(v[i] > v[i+1]) swap(v[i], v[i+1]);


    bubbleS(v,n-1);
}

int main(){

    vector<int> v = {2,5,1,6,9};
    bubbleS(v,v.size());
    
    for(int i:v)cout<<i<<"\n";


}


