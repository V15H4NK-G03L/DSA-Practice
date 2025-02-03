#include <limits.h>
#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    int longestMonotonicSubarray(vector<int>& nums) {
        int count=0,up=0,down=0;
        for(int i=0;i<nums.size()-1;i++){
            if(nums[i+1]>nums[i]){
                //cout << "UP" << endl;
                if(up==0){
                    count = max(count,down+1);
                    up++;
                    down = 0;
                }
                else{
                    up++;
                }
            }
            else if(nums[i+1]<nums[i]){
                //cout << "DOWN" << endl;
                if(down==0){
                    count = max(count,up+1);
                    down++;
                    up = 0;
                }
                else{
                    down++;
                }
            }
            else{
                //cout << "EQUAL" << endl;
                count = max(count,1);
                //cout << "UP : " << up << " DOWN : " << down << endl;
                count = max(max(up+1,down+1),count);
                up = 0;
                down = 0;
            }
        }
        count = max(max(up+1,down+1),count);
        return count;
    }
};