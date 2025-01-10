#include <limits.h>
#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    int arrangeCoins(int n) {
        // int a=1,count=0;
        // while(a<=n){
        //     count++;
        //     n -= a;
        //     a++;
        // }
        // return count;

        long ans=0;
        long start = 0;
        long end = n;
        long mid = (start+end)/2;

        while(start<=end){
            long long check = (mid * (mid+1))/2;
            if(check==n){
                return mid;
            }
            else if(check<n){
                ans=mid;
                start = mid+1;
            }
            else{
                end = mid-1;
            }

            mid = (start+end)/2;
        }
        
        return ans;
    }
};