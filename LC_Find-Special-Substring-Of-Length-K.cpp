#include <limits.h>
#include <bits/stdc++.h>
using namespace std;

class Solution {
    public:
        bool hasSpecialSubstring(string s, int k) {
            int count=1,check=0;
            if(s.length()==1 && k==1){return true;}
            for(int i=1;i<s.length();i++){
                if(s[i]==s[i-1]){
                    count++;
                }
                else if(s[i]!=s[i-1]){
                    if(count==k){return true;}
                    else{count=1;}
                }
            }
            if(count==k){return true;}
            return false;
        }
    };