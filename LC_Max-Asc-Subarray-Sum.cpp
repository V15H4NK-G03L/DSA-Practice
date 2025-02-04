#include <limits.h>
#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    int maxAscendingSum(vector<int>& nums) {
        int ans=nums[0],temp=nums[0];
        for(int i=1;i<nums.size();i++){
            if(nums[i]>nums[i-1]){
                temp += nums[i];
            }
            else{
                ans = max(ans,temp);
                temp = nums[i];
            }
        }
        ans = max(ans,temp);
        return ans;
    }
};