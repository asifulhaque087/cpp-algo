#include <bits/stdc++.h>
using namespace std;

void counting(int n){
    if (n == 0) return ;

    // cout<<n<<endl;

    counting(n-1);

    cout<<n<<endl;


}

int main()
{
    int n = 5;
    counting(n);
}
