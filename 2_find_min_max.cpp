#include <bits/stdc++.h>
using namespace std;

int main(){

vector<int> v = { 1000, 11, 445, 1, 330, 3000 };

int mini = INT_MAX;
int maxi = INT_MIN;

for (int i:v){
   mini = min(mini,i) ;
   maxi = max(maxi,i) ;
}

cout<<mini<<" "<<maxi<<endl;


}

