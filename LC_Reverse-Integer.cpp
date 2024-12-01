#include <limits.h>
#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    int reverse(int x) {
        string str = to_string(x);
        double count=0;
        int remaining=x,temp;
        for(int i=0;i<str.length();i++){
            temp = (remaining%10);
            remaining = remaining/10;
            count = (count*10)+temp;
            //cout << "t: " << temp << " r: " << remaining << " c: " << count << endl;

        }
        if(count<0){
            count /= 10;
        }

        if(count > INT_MAX || count < INT_MIN){return 0;}

        return count;
        }
    };