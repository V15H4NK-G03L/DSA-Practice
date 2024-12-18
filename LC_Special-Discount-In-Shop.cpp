#include <limits.h>
#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    vector<int> finalPrices(vector<int>& prices) {
        vector<int> ans;
        bool flag=false;
        for(int i=0;i<prices.size()-1;i++){
            for(int j=i+1;j<prices.size();j++){
                if(prices[j]<=prices[i]){
                    //cout << "i : " << i <<" j : " << j << endl;
                    ans.push_back(prices[i]-prices[j]);
                    flag=true;
                    break;
                }
            }
            if(flag==false){ans.push_back(prices[i]);}
            flag=false;
        }
        ans.push_back(prices[prices.size()-1]);
        return ans;
    }
};