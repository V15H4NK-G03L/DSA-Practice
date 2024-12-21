#include <limits.h>
#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    int countSubarrays(vector<int>& nums) {
        int ans=0;
        for(int i=1;i<nums.size()-1;i++){
            if(2*(nums[i-1]+nums[i+1])==nums[i]){
                ans++;
            }
        }
        return ans;
    }
};