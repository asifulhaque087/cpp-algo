#include <bits/stdc++.h>
using namespace std;

void nextPermutation(vector<int> &nums){
    // 1. reverse loop and find the smallest item index. if not found reverse the list
    // 2. again reverse loop and find the just next greater item index 
    // 3. swap two indexes
    // 4. sort after swap
        if(nums.size()==1){
            return;
        }
        
        
        int idx1;
        for(int i=nums.size()-2;i>=0;i--){
            if(nums[i]<nums[i+1]){
                idx1=i;
                break;
            }
        }
        
        if(idx1<0){
            reverse(nums.begin(),nums.end());
        }else{
            
            int idx2 = 0;
            for(int i=nums.size()-1;i>=0;i--){
                if(nums[i]>nums[idx1]){
                    idx2=i;
                    break;
                }
            }
        
            swap(nums[idx1],nums[idx2]);
            
            sort(nums.begin()+idx1+1,nums.end());
            
            
        }
        
        




    // if (nums.size() == 1) return ;

    // int indx1;

    // for (int i=nums.size()-2; i>=0; i--){
    //     if (nums[i]<nums[i+1]){
    //         indx1 = i;
    //         break;
    //     }
    // }

    // if(!indx1){
    //     reverse(nums.begin(), nums.end());
    // }else{
    //     int indx2 = 0;
    //     for (int i=nums.size()-1; i>=0; i--){
    //         if (nums[i]>nums[indx1]){
    //             indx2= i;
    //             break;
    //         }
    //     }

    //     swap(nums[indx1], nums[indx2]);
    //     sort(nums.begin()+indx1+1, nums.end());
    // }



}

int main(){

    vector<int> nums  = {3,2,1};
    nextPermutation(nums);
    for (int i:nums)cout<<i<<endl;


}


