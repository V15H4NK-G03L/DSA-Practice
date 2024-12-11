#include <limits.h>
#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    bool rotateString(string s, string goal) {
        bool flag=false;
        if(s.length()==goal.length()){
            int c = goal.length();
            while(c--){
                if(s==goal){
                    flag=true;
                    break;
                }
                else{
                    string end(1,s[0]);
                    s.erase(s.begin(),s.begin()+1);
                    s.append(end);
                }
            }
        }
        return flag;
    }
};