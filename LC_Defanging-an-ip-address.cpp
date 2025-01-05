#include <limits.h>
#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    string defangIPaddr(string address) {
        for(int i=0;i<address.length();i++){
            // cout << i << " is=" << address.at(i) << " " ;
            // cout << "length = " << address.length() << " " << endl;
            if(address.at(i)=='.'){
                address.erase(i,1);
                address.insert(i, "[.]");
                i=i+2;
            }
        }
    return address;
    }
};