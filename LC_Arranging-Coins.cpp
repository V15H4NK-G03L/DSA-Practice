#include <limits.h>
#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    int arrangeCoins(int n) {
        int a=1,count=0;
        while(a<=n){
            count++;
            n -= a;
            a++;
        }
        return count;
    }
};