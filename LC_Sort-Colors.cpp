#include <limits.h>
#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    void sortColors(vector<int>& nums) {
        vector<int> first,last;
        for(int i=0;i<nums.size();i++){
            if(nums[i]==0){
                first.insert(first.begin(),0);
            }
            else if(nums[i]==1){
                first.push_back(1);
            }
            else{
                last.push_back(2);
            }
        }
        first.insert(first.end(),last.begin(),last.end());
        nums = first;
    }
};