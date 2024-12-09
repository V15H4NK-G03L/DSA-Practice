#include <limits.h>
#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        vector<int> ans;
        for(int i=0;i<nums.size();i++){
            for(int j=0;j<nums.size();j++){
                if(i==j){
                    continue;
                }
                else{           
                    if(nums[i]+nums[j]==target){
                        ans.push_back(i);
                        ans.push_back(j);
                        break;
                    }
                }
            }
        }
    ans.pop_back();
    ans.pop_back();
    return ans;
    }
};