#include <limits.h>
#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    void moveZeroes(vector<int>& nums) {
        int b;
        vector<int> newnums;
        for(int i=nums.size()-1;i>=0;i--){
            if(nums[i]!=0){
                newnums.insert(newnums.begin(),nums[i]);
            }
        }
        b = nums.size() - newnums.size();
        while(b--){
            newnums.push_back(0);
        }
        nums=newnums;
    }
};