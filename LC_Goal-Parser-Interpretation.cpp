#include <limits.h>
#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    string interpret(string command) {
        string ans;
        for(int i=0;i<command.length();i++){
            if(command.at(i)=='G'){
                ans.append("G");
            }
            else if(command.at(i)=='('){
                if(command.at(i+1)==')'){
                    ans.append("o");
                }
                else{
                    ans.append("al");
                }
            }
        }
    return ans;
    }
};