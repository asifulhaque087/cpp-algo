#include <bits/stdc++.h>
using namespace std;

bool isPalindrome(int l , int r, string s){
    
    if (l>r) return true;

    if (s[l] == s[r]){
        return isPalindrome(l+1, r-1, s);
    }
    return false;
}

int main(){

    string  s = "accbbcca";
    cout<<isPalindrome(0, s.size()-1, s);


}


