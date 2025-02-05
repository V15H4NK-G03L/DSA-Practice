#include <limits.h>
#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    bool areAlmostEqual(string s1, string s2) {
        int count=0;
        vector<int> arr;
        bool swap = true;
        for(int i=0;i<s1.length();i++){
            if(s1[i]==s2[i]){
                count++;
            }
            else{
                arr.push_back(i);
            }
        }
        
        if(count+2==s1.length()){
            if(s1[arr[0]]==s2[arr[1]] && s1[arr[1]]==s2[arr[0]]){swap=true;}
            else{swap=false;}
        }

        if( (count+2==s1.length() || count==s1.length()) && swap==true ){return true;}
        return false;
    }
};