#include <limits.h>
#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    int subarraySum(vector<int>& nums) {
        int ans=0,a;
        vector<int> check;
        for(int j=0;j<nums.size();j++){
            a=max(0,(j-nums[j]));
            check.push_back(a);

            for(int i=check[j];i<=j;i++){
            ans+=nums[i];
            }
        }
        return ans;
    }
};