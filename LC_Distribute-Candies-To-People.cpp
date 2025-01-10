#include <limits.h>
#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    vector<int> distributeCandies(int candies, int num_people) {
        int c=1,n=0;
        vector<int> ans(num_people,0);
        while(candies!=0){
            if(candies>=c){
                ans[n%num_people] += c;
                candies -= c;
                c=c+1;
                n=n+1;
            }
            else{
                ans[n%num_people] += candies;
                candies = 0;
                break;
            }
            

        }
        return ans;
    }
};