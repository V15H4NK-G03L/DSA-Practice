#include <limits.h>
#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    int maxProfit(vector<int>& prices) {
        //int ans=0;
        int minp = INT_MAX;
        int maxp = 0;
        for(int i=0;i<prices.size();i++){
            // for(int j=i;j<prices.size();j++){
            //     if(prices[j]>=prices[i] && (prices[j]-prices[i])>ans){
            //         ans = prices[j]-prices[i];
            //     }
            // }
            minp = min(minp,prices[i]);
            maxp = max(maxp,prices[i]-minp);
        }
        return maxp;
    }
};