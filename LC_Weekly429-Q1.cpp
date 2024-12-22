#include <limits.h>
#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    int minimumOperations(vector<int>& nums) {
        int count = 0;
        for(int i=0;i<nums.size();i++){
            cout << "i : " << i << endl;
            for(int j=i+1;j<nums.size();j++){
                cout << "i : " << nums[i] << " j: " << nums[j] << endl;
                if(nums[i]==nums[j]){
                    int n=nums.size();
                    nums.erase(nums.begin(),nums.begin()+min(3,n));
                    //nums.insert(nums.begin(),INT_MIN);
                    i= -1;
                    count++;
                    break;
                }
            }
        }
        return count;
    }
};