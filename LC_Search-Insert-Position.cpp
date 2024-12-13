#include <limits.h>
#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    int searchInsert(vector<int>& nums, int target) {
        for(int i=0;i<nums.size();i++){
            if(target>nums[nums.size() - 1]){
                return nums.size();
            }
            else if(target<nums[0]){
                return 0;
            }
            else{         
                if(nums[i]==target){
                    return i;
                }
                else if( (nums[i]>target) && (nums[i-1]<target) ){
                    return i;
                }
            }

        }
        return 0;
    }
};