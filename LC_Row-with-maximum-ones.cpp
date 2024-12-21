#include <limits.h>
#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    vector<int> rowAndMaximumOnes(vector<vector<int>>& mat) {
        int count=0,ans=0,row=0;
        for(int i=0;i<mat.size();i++){
            for(int j=0;j<mat[i].size();j++){
                if(mat[i][j]==1){
                    count++;
                }
            }
            if(count>ans){
                ans=count;
                row=i;
            }
            count = 0;
            
        }
        vector<int> a;
        a.push_back(row);
        a.push_back(ans);
        return a;
    }
};