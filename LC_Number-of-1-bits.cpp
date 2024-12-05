#include <limits.h>
#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    int hammingWeight(int n) {
        int count = 0;
        string str = (bitset<32>(n)).to_string();
        for(int i=0;i<str.length();i++){
            if(str[i]=='1'){
                count++;
            }
        }
        return count;
    }
};