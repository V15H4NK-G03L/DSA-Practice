#include <limits.h>
#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    int maxDifference(string s) {
        int oddMin=INT_MAX, oddMax=INT_MIN, evenMin = INT_MAX, evenMax=INT_MIN,count=0;
        for(int i=0;i<s.length();i++){
            for(int j=0;j<s.length();j++){
                if(s[i]==s[j]){count++;}
            }

            if(count%2==0){
                if(count>evenMax){evenMax=count;}
                if(count<evenMin){evenMin=count;}
            }
            else{
                if(count>oddMax){oddMax=count;}
                if(count<oddMin){oddMin=count;}
            }

            count = 0;
        }

        int ans = 0;
        ans = oddMax-evenMin;
        return ans;
    }
};