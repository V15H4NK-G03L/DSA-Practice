#include <limits.h>
#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    vector<int> getRow(int rowIndex) {
        vector<vector<int>> ans;
        if(rowIndex==0){return {1};}
        else if(rowIndex==1){return {1,1};}
        else{
            ans.push_back({1});
            ans.push_back({1,1});
            for(int i=2;i<rowIndex+1;i++){
                vector<int> temp;
                temp.push_back(1);
                for(int j=0;j<ans[i-1].size()-1;j++){
                    int num = ans[i-1][j] + ans[i-1][j+1];
                    temp.push_back(num);
                }
                temp.push_back(1);
                ans.push_back(temp);
                temp.clear();
            }
        }
        return ans[rowIndex];
    }
};