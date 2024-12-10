#include <limits.h>
#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    string reverseWords(string s) {
        string word;
        string ans;
        bool flag=false;
        for(int i=0;i<s.length();i++){
            //cout << "i : " << i << " s[i] : " << s[i] << endl;
            if(s[i]!=' '){flag=true;}

            if(flag==false){
                continue;
            }
            else if(s[i]==' '){
                cout << "word : " << word << endl;
                ans.insert(ans.begin(),' ');
                ans.insert(ans.begin(),word.begin(),word.end());
                word.clear();
                flag=false;
            }
            else{
                word.append(1,s[i]);
            }
        }
        ans.insert(ans.begin(),' ');
        ans.insert(ans.begin(),word.begin(),word.end());
        ans.pop_back();
        if(ans[0]==' '){ans.erase(ans.begin(),ans.begin()+1);}
        return ans;
    }
};