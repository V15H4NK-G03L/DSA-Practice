#include <limits.h>
#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    int majorityElement(vector<int>& nums) {
        int check=nums[0],count=0,countans=0,ans=0;
        sort(nums.begin(),nums.end());
        for(int i=0;i<nums.size();i++){
            //cout << "nums : " << nums[i] << endl;
            if(check==nums[i]){
                count++;
            }
            else{
                check=nums[i];
                count = 1;
            }

            if(count>countans){
                countans = count;
                ans = nums[i];
            }
            //cout << "ANS : " << ans << endl;

        }
        return ans;
    }
};