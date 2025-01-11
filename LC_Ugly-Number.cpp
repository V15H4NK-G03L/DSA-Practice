#include <limits.h>
#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    bool isUgly(int n) {
        bool ans=true;
        if(n==0){return false;}
        while(true){
            if(n%2==0){
                n=n/2;
            }
            else if(n%3==0){
                n=n/3;
            }
            else if(n%5==0){
                n=n/5;
            }
            else if(n==1){
                break;
            }
            else{
                ans=false;
                break;
            }
        }
        return ans;
    }
};