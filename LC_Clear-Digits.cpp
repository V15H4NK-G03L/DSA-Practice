#include <limits.h>
#include <bits/stdc++.h>
using namespace std;

class Solution {
    public:
        string clearDigits(string s) {
            string temp = s + "--";
            int i=0;
            while(i<temp.length()){
                if(temp[i]=='-' && temp[i+1]=='-'){
                    break;
                }
                else if((int)temp[i]>47 && (int)temp[i]<58){
                    temp.erase(i-1,1);
                    temp.erase(i-1,1);
                    i--;
                    i--;
                }
                i++;
            }
            temp.erase(temp.size()-1,1);
            temp.erase(temp.size()-1,1);
            return temp;
        }
    };