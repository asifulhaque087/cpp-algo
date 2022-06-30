// https://practice.geeksforgeeks.org/problems/merge-two-sorted-arrays5135/1

#include <bits/stdc++.h>
using namespace std;

void merge(vector<int> &arr1, vector<int> &arr2){

    // loop in first array 
    // compare with first array and second array index and go to next index
    // if greater from second array then swap and make sure second array also sorted by swapping 

    int i = 0;
    while (i<arr1.size()){
        if (arr1[i]>arr2[0]){
            swap(arr1[i], arr2[0]);
        }

        for (int k = 0; k<arr2.size()-1;k++){
            if (arr2[k] > arr2[k+1]) {
                swap(arr2[k], arr2[k+1]);
            }
        }
        i++;

    }


}


int main(){

vector<int>  arr1 = {1, 3, 5, 7};

vector<int> arr2 = {0, 2, 6, 8, 9};

merge(arr1, arr2);

cout<<"arr 1  "<<endl;

for(auto i:arr1)cout<<i<<endl;


cout<<"\narr 2  "<<endl;

for(auto i:arr2)cout<<i<<endl;

}

