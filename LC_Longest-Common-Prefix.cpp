#include <limits.h>
#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    string longestCommonPrefix(vector<string>& strs) {
        string ans;
        bool flag=false;
        int c=0;
        if(strs.size()==1){return strs[0];}
        while(c<strs[0].length()){
            for(int i=1;i<strs.size();i++){
                if(strs[0][c]==strs[i][c]){
                    flag = true;
                }
                else{
                    flag=false;
                    break;
                }
            }
            if(flag==true){ans.push_back(strs[0][c]);}
            else{break;}
            c++;
        }
    return ans;
    }
};