#include <limits.h>
#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    bool isPowerOfTwo(int n) {
        bool ans=false;
        if(n==1){return true;}
        else if(n%2==0 && n>0){
            long long check=1;
            while(check<=n){
                check = check*2;
                //cout << "Check : " << check << endl;
                if(check==n){
                    ans=true;
                    break;
                }
            }
        }
        else{
            ans = false;
        }
        return ans;
    }
};