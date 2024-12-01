#include <limits.h>
#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    bool isPalindrome(int x) {
        if(x<0){return false;}
        else{
            string str = to_string(x);
            double count=0;
            int remaining=x,temp;
            for(int i=0;i<str.length();i++){
                temp = (remaining%10);
                remaining = remaining/10;
                count = (count*10)+temp;
            }
            if(count<0){
                count /= 10;
            }
            if(count > INT_MAX || count < INT_MIN){return false;}
            
            if(count==x){return true;}
            else{return false;}
        }
    }
};