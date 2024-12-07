#include <limits.h>
#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    int minOperations(vector<int>& nums, int k) {
        int count = 0,changes=0;
        for(int i=0;i<nums.size();i++){
            cout << "nums[i] : " << nums[i] << endl;
            if(nums[i]>k){
                for(int j=i+1;j<nums.size();j++){
                    if(nums[j]==nums[i]){
                        nums[j]=k;
                        changes++;
                    } 
                }
                nums[i]=k;
                count++; 
            }
            else if(nums[i]<k){
                return -1;
            }
            cout << "change : " << changes << endl;
        }
        return count;
    }
};