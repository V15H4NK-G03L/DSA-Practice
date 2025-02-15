#include <limits.h>
#include <bits/stdc++.h>
using namespace std;

class Solution {
    public:
        int sumOfGoodNumbers(vector<int>& nums, int k) {
            int ans=0,temp1=0,temp2=0;
            for(int i=0;i<nums.size();i++){
                if((i+k)>=nums.size()){
                    temp1=-1;
                }
                if(i-k<0){
                    temp2=-1;
                }
    
                if(temp1==-1 && temp2==-1){ans+=nums[i];}
                else{
                    if(temp1==-1 && temp2!=-1){
                        if(nums[i]>nums[i-k]){ans+=nums[i];}
                    }
                    else if(temp1!=-1 && temp2==-1){
                        if(nums[i]>nums[i+k]){ans+=nums[i];}
                    }
                    else if(nums[i]>nums[i-k] && nums[i]>nums[i+k]){
                        ans+=nums[i];
                    }
                }
                temp1=0;
                temp2=0;
            }
            return ans;
        }
    };