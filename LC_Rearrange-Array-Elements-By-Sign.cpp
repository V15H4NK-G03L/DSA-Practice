#include <limits.h>
#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    vector<int> rearrangeArray(vector<int>& nums) {
        vector<int> temp1,temp2;
        for(int i=0;i<nums.size();i++){
            if(nums[i]<0){
                //-ve no.
                temp1.push_back(nums[i]);
            }
            else{
                //+ve no.
                temp2.push_back(nums[i]);
            }
        }

        nums.clear();
        for(int j=0;j<temp1.size();j++){
            nums.push_back(temp2[j]);
            nums.push_back(temp1[j]);
        }
        return nums;

        // int temp;
        // for(int i=0;i<nums.size();i++){
        //     if(i%2==0 && nums[i]<0){
        //         for(int j=i;j<nums.size();j++){
        //             if(nums[j]>=0){
        //                 temp=nums[j];
        //                 nums.erase(nums.begin()+j,nums.begin()+j+1);
        //                 nums.insert(nums.begin()+i,temp);
        //                 break;
        //             }
        //         }
        //     }
        //     else if(i%2!=0 && nums[i]>=0){
        //         for(int j=i;j<nums.size();j++){
        //             if(nums[j]<0){
        //                 temp=nums[j];
        //                 nums.erase(nums.begin()+j,nums.begin()+j+1);
        //                 nums.insert(nums.begin()+i,temp);
        //                 break;
        //             }
        //         } 
        //     }
        // }
        // return nums;
    }
};