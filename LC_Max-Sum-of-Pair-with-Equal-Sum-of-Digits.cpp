#include <limits.h>
#include <bits/stdc++.h>
using namespace std;

class Solution {
    public:
        int maximumSum(vector<int>& nums) {
            sort(nums.begin(),nums.end());
            reverse(nums.begin(),nums.end());
            vector<int> arrNum;
            for(int i=0;i<nums.size();i++){
                int temp1 = 0, temp2 = 0;
                string num = to_string(nums[i]);
                for(int k=0;k<num.length();k++){
                    temp1 += int(num[k]) - 48;
                }
                arrNum.push_back(temp1);
            }
    
            int ans=-1,flag=0;
            for(int j=0;j<nums.size();j++){
                for(int l=j+1;l<nums.size();l++){
                    if(flag>=10000){break;}
                    else if(arrNum[j]==arrNum[l]){
                        ans = max(ans,(nums[j]+nums[l]));
                        flag++;
                    }
                }
            }
            return ans;
        }
    };