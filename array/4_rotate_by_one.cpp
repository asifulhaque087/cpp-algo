#include <bits/stdc++.h>
using namespace std;


void rotateByOne(int v[], int n){

    int temp = v[n-1];

    for (int i = n-1; i>0; i--){
        v[i] = v[i-1];
    }

    v[0] = temp;


}


int main(){

int n = 5;

int v[]= {1, 2, 3, 4, 5};

rotateByOne(v,n);

for (int i:v) cout<<i<<endl;

}

