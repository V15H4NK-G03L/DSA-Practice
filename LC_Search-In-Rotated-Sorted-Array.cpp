#include <limits.h>
#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    int search(vector<int>& nums, int target) {
        int a = -1;
        for(int i=0;i<nums.size();i++){
            cout << "i : " << nums[i] << endl;
            if(nums[i]==target){
                a = i;
                break;
            }
        }
        return a;
    }
};