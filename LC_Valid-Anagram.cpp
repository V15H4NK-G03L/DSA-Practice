#include <limits.h>
#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    bool isAnagram(string s, string t) {
        int count=0;
        int ans = s.length();
        if(s.length()!=t.length()){
            return false;
        }
        else{
            for(int i=0;i<s.length();i++){
                //cout << "s-len = " << s.length() << " t-len = " << t.length() << endl;
                for(int j=t.length()-1;j>=0;j--){
                    if(s.at(i)==t.at(j)){
                        //cout << "s = " << s.at(i) << " t = " << t.at(j) << endl;
                        s.erase(i,1);
                        t.erase(j,1);
                        count += 1;
                        i = -1;
                        break;
                    }
                }
            }
            if(count==ans){
                return true;
            }
            else{
                return false;
            }
        }
    }
};