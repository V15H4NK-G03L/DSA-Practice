#include <limits.h>
#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    bool isPerfectSquare(int num) {
        long int y;
        bool z;
        for(long int i=0;i<=num;i++){
            y = i * i;
            if(y < num){
                continue;
            }
            else if(y == num){
                z = true;
                break;
            }
            else{
                z = false;
                break;
            }
        }
        return z;
    }
};