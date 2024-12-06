#include <limits.h>
#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    int fib(int n) {
        int fib;
        vector<int> arr;
        arr.push_back(0);
        arr.push_back(1);
        for(int i=2;i<n;i++){
            fib = arr[i-1] + arr[i-2];
            arr.push_back(fib);
        }

        if(n==0){return 0;}
        else if(n==1){return 1;}
        else{return arr[n-1]+arr[n-2];}
    }
};