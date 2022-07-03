#include <bits/stdc++.h>
using namespace std;

int power(int n, int p){
    if (p == 0) return 1;
    if (p==1) return n;

    int ans = power(n,p/2);

    if (p%2==0) return ans*ans;
    return n*ans*ans;


 }

int main(){
    int n = 2;
    int p = 10;

    cout<<power(n, p);

}


