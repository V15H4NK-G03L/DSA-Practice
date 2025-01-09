#include <limits.h>
#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    int prefixCount(vector<string>& words, string pref) {
        int temp=0,count=0;
        for(int i=0;i<words.size();i++){
            if(words[i].length()>=pref.length()){
                for(int j=0;j<pref.length();j++){
                    if(words[i][j]==pref[j]){
                        temp++;
                    }
                }
                if(temp==pref.length()){count++;}
                temp=0;
            }
        }
        return count;
    }
};