#include <limits.h>
#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    bool isPalindrome(string s) {
        string r,n;
        for(int i=0;i<s.length();i++){
            if((s[i]>='a'&&s[i]<='z')||(s[i]>='A'&&s[i]<='Z')||(s[i]>='0'&&s[i]<='9')){
                if(s[i]>='A'&&s[i]<='Z'){
                    s[i] += 32;
                }
                r.insert(0, 1, s[i]);
                n.push_back(s[i]);
            }
        }
        cout << "n : " << n << endl;
        cout << "r : " << r << endl;
        if(n==r){return true;}
        else{return false;}
    }
};