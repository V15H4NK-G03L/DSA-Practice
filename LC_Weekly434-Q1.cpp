#include <limits.h>
#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    int countPartitions(vector<int>& nums) {
        int sum1=0,sum2=0,ans=0;
        for(int i=0;i<nums.size();i++){
            sum1 += nums[i];
        }

        for(int j=0;j<nums.size()-1;j++){
            sum2 += nums[j];
            sum1 -= nums[j];
            if(abs(sum1-sum2)%2==0){ans++;}
        }

        return ans;
    }
};