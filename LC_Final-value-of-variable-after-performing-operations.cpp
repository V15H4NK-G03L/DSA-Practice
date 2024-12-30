#include <limits.h>
#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    int finalValueAfterOperations(vector<string>& operations) {
        int ans=0;
        //cout << operations.size() << endl;
        for(int i=0;i<operations.size();i++){
            //cout << sizeof(operations) << endl;
            for(int j=0;j<3;j++){
                //cout << operations[i].at(j) << endl;
                if(operations[i].at(j)=='+'){
                    ans += 1;
                    break;
                }
                else if(operations[i].at(j)=='-'){
                    ans -= 1;
                    break;
                }
                
            }
        }

    return ans;
    }
};