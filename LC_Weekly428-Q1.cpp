#include <limits.h>
#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    int buttonWithLongestTime(vector<vector<int>>& events) {
        int time=events[0][1],index=events[0][0];
        for(int i=0;i<events.size()-1;i++){
            for(int j=0;j<2;j++){
                if(events[i+1][1]-events[i][1]>time){
                    index = events[i+1][0];
                    time = events[i+1][1]-events[i][1];
                }
                else if(events[i+1][1]-events[i][1]==time){
                    index=min(index,events[i+1][0]);
                }
            }
        }
        return index;
    }
};