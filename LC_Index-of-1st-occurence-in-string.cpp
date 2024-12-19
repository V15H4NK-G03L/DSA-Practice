#include <limits.h>
#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    int strStr(string haystack, string needle) {
        int ans=-1;
        int count;
        for(int i=0;i<haystack.length();i++){
            if(haystack[i]==needle[0] && ((haystack.length()-i)>=needle.length())){
                count = needle.length();
                ans=i;
                count--;
                for(int j=1;j<needle.length();j++){
                    if(haystack[i+j]==needle[j]){
                        //cout << i <<  " : j : " << j << endl;
                        count--;
                        //cout << "count : " << count << endl;
                    }                    
                }
                if(count==0){break;}
            }
        }
        if(count==0){return ans;}
        else{return -1;}
    }
};