#include <bits/stdc++.h>
using namespace std;

int findDuplicate(vector<int> v){
    int slow = 0, fast = 0;

    while (1){
        slow = v[slow];
        fast = v[v[fast]];

        if (slow == fast) break;

    }

    int slow2 = 0;
    while (1){
        slow = v[slow];
        slow2 = v[slow2];
        if (slow == slow2){
            return slow;
        }
    }




}

int main(){

vector<int> v = {1,3,4,2,2};
cout<<findDuplicate(v)<<endl;


}

