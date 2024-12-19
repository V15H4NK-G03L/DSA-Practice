#include <limits.h>
#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    int removeElement(vector<int>& nums, int val) {
        int count = 0;
        int ns = nums.size();
        for(int i=0;i<nums.size();i++){
            if(nums[i]==val){
                //nums.push_back(nums[i]);
                nums.erase(nums.begin()+i,nums.begin()+i+1);
                count++;
                i--;
            }
        }
        return ns-count;
    }
};