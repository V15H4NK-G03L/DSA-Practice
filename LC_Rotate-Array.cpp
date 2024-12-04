#include <limits.h>
#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    void rotate(vector<int>& nums, int k) {
        if(k<1000){
            while(k--){
                nums.insert(nums.begin(),nums[nums.size()-1]);
                nums.pop_back();
            }
        }
        else{
            int n = nums.size()-k;
            vector<int> subarr(nums.begin(),nums.begin()+n);
            nums.erase(nums.begin(),nums.begin()+n);
            nums.insert(nums.end(),subarr.begin(),subarr.begin()+n);
        }
    }
};