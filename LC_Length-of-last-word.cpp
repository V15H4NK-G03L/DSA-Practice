#include <limits.h>
#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    int lengthOfLastWord(string s) {
        int temp=0,ans=0;
        for(int i=0;i<s.length();i++){
            if(s[i]!=' '){
                temp++;
                ans = temp;
            }
            else{
                temp = 0;
            }
        }
        return ans;
    }
};