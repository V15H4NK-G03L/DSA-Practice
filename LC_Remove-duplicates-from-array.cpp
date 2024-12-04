#include <limits.h>
#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    int removeDuplicates(vector<int>& nums) {
        int count=0;
        for(int i=0;i<nums.size();i++){
            if(nums[i]==200){count++;}
            for(int j=i+1;j<nums.size();j++){
                if(nums[i]==nums[j]){
                    nums[j]=200;
                }
            }
        }

        //cout << "count : " << count << endl;
        //cout << "begin : " << "0" << endl;
        //cout << "end : " << nums.size() << endl;
        sort(nums.begin(),nums.end());
        count = nums.size()-count;
        nums.erase(nums.begin()+count,nums.end());
        //cout << "nums : " << i+1 << " - " << nums[i] << endl;

        return nums.size();
    }
};