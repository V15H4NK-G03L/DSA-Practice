#include <limits.h>
#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    int balancedStringSplit(string s) {
        int count = 0,ans = 0;
        for(int i=0;i<s.length();i++){
            if(s.at(i)=='R'){
                count += 1;
            }
            else{
                count -= 1;
            }

            if(count == 0){
                ans += 1;
                count = 0;
            }
        }
    return ans;
    }
};