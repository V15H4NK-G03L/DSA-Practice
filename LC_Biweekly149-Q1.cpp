#include <limits.h>
#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    string findValidPair(string s) {
        int count1=0, count2=0;
        s += "a";
        //cout << s << endl;
        for(int i=0;i<s.length()-1;i++){ 
            if(s[i]!=s[i+1]){
                for(int j=0;j<s.length();j++){
                    if(s[i]==s[j]){count1++;}
                    if(s[i+1]==s[j]){count2++;}
                }
            }
            
            // cout << "num1 : " << s[i]-48 << endl;
            // cout << "num2 : " << s[i+1]-48 << endl;
            // cout << "count1 : " << count1 << endl;
            // cout << "count2 : " << count2 << endl;
            
            if((count1==s[i]-48) && (count2==s[i+1]-48) ){
                count1 *= 10;
                count1 += count2;
                string ans = to_string(count1);
                return ans;
            }   

            count1=0;
            count2=0;
        }
        return "";
    }
};