#include <limits.h>
#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    int maxAdjacentDistance(vector<int>& nums) {
        int ans=0;
        nums.push_back(nums[0]);
        for(int i=0;i<nums.size()-1;i++){
            int n = abs(nums[i]-nums[i+1]);
            if(ans<n){ans=n;}
        }
        return ans;
    }
};