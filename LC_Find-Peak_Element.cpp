#include <limits.h>
#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    int findPeakElement(vector<int>& nums) {
        int ansi=0;
        nums.insert(nums.begin(),INT_MIN);
        nums.push_back(INT_MIN);
        for(int i=1;i<nums.size()-1;i++){
            if(nums[i]>nums[i-1] && nums[i]>nums[i+1]){
                ansi = i-1;
            }
        }
        return ansi;
    }
};