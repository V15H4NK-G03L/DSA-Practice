#include <limits.h>
#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    bool check(vector<int>& nums) {
        int flag=0;
        int n = nums.size();
        int same=0;
        for(int i=0;i<n-1;i++){
            if(nums[i]<=nums[i+1]){
                if(nums[i]==nums[i+1]){
                same++;
                }
            }
            else{
                flag++;
            }
        }
        if(nums[n-1]>nums[0]){flag++;}
        //cout << "flag : " << flag << endl;
        if(flag==1 || same==n-1){return true;}
        else{return false;}
    }
};