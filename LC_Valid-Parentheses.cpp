#include <limits.h>
#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    bool isValid(string s) {
        bool ans=false;
        vector<char> check;
        for(int i=0;i<s.length();i++){
            if(s[i]=='(' || s[i]=='[' || s[i]=='{'){
                check.push_back(s[i]);
            }
            else if(check.empty()==false && s[i]==')' && check.back()=='('){
                check.pop_back();
                ans=true;
            }
            else if(check.empty()==false && s[i]=='}' && check.back()=='{'){
                check.pop_back();
                ans=true;
            }
            else if(check.empty()==false && s[i]==']' && check.back()=='['){
                check.pop_back();
                ans=true;
            }
            else{
                //cout << "s : " << s[i] << endl;
                ans = false;
                break;
            }
        }
        
        if(check.empty()==true && ans==true){return ans;}
        else {return false;}
        
        return 0;
    }
};