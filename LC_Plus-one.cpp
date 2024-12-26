#include <limits.h>
#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    vector<int> plusOne(vector<int>& digits) {
        int carry=1;
        for(int i=digits.size()-1;i>=0;i--){
            if(i==0 && digits[i]==9){
                digits[i]=0;
                digits.insert(digits.begin(),1);
            }
            else if(digits[i]==9 && carry==1){
                digits[i]=0;
            }
            else{
                digits[i]++;
                break;
            }
        }
        
        return digits;
    }
};