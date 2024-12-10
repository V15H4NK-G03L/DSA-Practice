#include <limits.h>
#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    string largestOddNumber(string num) {
        string ans;
        bool flag=false;
        for(int i=num.length()-1;i>=0;i--){
            if(num[i] % 2 != 0){
                ans.insert(ans.begin(),num[i]);
                flag=true;
            }
            else if(( (num[i]) % 2 == 0) && flag==true )
            {
                ans.insert(ans.begin(),num[i]);
            }
            else{}
        }

        return ans;
    }
};