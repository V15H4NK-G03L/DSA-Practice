#include <limits.h>
#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    int singleNumber(vector<int>& nums) {
        sort(nums.begin(),nums.end());
        nums.insert(nums.begin(),-1);
        nums.push_back(-1);
        for(int i=1;i<nums.size()-1;i++){
            if(nums[i]!=nums[i-1] && nums[i]!=nums[i+1]){return nums[i];}
        }
        return 0;
    }
};