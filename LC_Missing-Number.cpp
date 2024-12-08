#include <limits.h>
#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    int missingNumber(vector<int>& nums) {
        sort(nums.begin(),nums.end());
        int ans;
        for(int i=0;i<nums.size()-1;i++){
            //cout << "Nums : " << nums[i] << endl;
            if(nums[0]!=0 || nums[0]==1){
                ans = 0;
                break;
            }
            else if(nums.size()==1 && nums[0]==0){
                ans = 1;
                break;
            }
            else if(nums[i]+1!=nums[i+1]){
                cout << "here" << endl;
                ans = nums[i]+1;
                break;
            }
            else{
                ans = nums[nums.size()-1]+1;
            }
        }
        return ans;
    }
};