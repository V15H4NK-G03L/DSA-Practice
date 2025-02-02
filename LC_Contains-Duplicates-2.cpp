#include <limits.h>
#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    bool containsNearbyDuplicate(vector<int>& nums, int k) {
        if(nums.size()<=1){return false;}
        for(int i=0;i<nums.size();i++){
            int a=nums.size();
            if(i<a-k-1){
                //cout << "i: " << i << " last : " << a-k-1 << endl;
                for(int j=i+1;j<i+1+k;j++){
                    if(nums[i]==nums[j]){
                        return true;
                    }
                }
            }
            else{
                for(int j=i+1;j<nums.size();j++){
                    if(nums[i]==nums[j]){
                        return true;
                    }                   
                }
            }
        }       
        return false;
    }
};