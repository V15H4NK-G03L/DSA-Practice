#include <limits.h>
#include <bits/stdc++.h>
using namespace std;

class Solution {
    public:
        string removeOccurrences(string s, string part) {
            int count=0;
            string ans=s;
            for(int i=0;i<ans.size();i++){
                int temp=part.size();
                for(int j=0;j<part.size();j++){
                    //cout << "ans[i+j] : " << i+j << " " << ans[i+j] << endl;
                    //cout << "part[j] : "  << j << " " << part[j] << endl;
                    if(ans[i+j]==part[j]){
                        count++;
                    }
    
                    if(count==temp){
                        //cout << "ERASE" << endl;
                        ans.erase(ans.begin()+i,ans.begin()+i+count);
                        //cout << ans << endl;
                        i=-1;
                        break;
                    }
    
                    if(ans[i+j]!=part[j]){
                        break;
                    }
                }
                count = 0;
            }
            return ans;
        }
    };