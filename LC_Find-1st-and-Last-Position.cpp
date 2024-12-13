#include <limits.h>
#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    vector<int> searchRange(vector<int>& nums, int target) {
        vector<int> ans;
        int first=-1,last=-1;
        for(int i=0;i<nums.size();i++){
            // cout << "F : " << first << endl;
            // cout << "L : " << last << endl;
            if(nums[i]==target && first==last){
                //cout << "up" << endl;
                first = i;
            }
            else if(nums[i]==target && i>last){
                //cout << "down" << endl;
                last = i;
            }
        }
        // cout << "F : " << first << endl;
        // cout << "L : " << last << endl;
        if(first!= -1 && last== -1){last=first;}
        ans.push_back(first);
        ans.push_back(last);

        return ans;
    }
};