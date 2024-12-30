#include <iostream>
#include<vector>
#include <stdio.h>
#include <bits/stdc++.h> 
#include<valarray>
using namespace std;

class Solution {
public:
    vector<int> findMissingAndRepeatedValues(vector<vector<int>>& grid) {
        vector<int> ans;
        int a=0,b=0,c=0;
        for(int q=1;q<(grid.size()*grid.size())+1;q++){
            b += q;
        }
        //cout << grid.size() << endl;
        for(int i=0;i<grid.size();i++){
            for(int j=0;j<grid.size();j++){
                for(int x=0;x<grid.size();x++){
                    for(int y=0;y<grid.size();y++){
                        // cout << i << " " << x << " " << j << " " << y << endl;
                        // cout << grid[i][j] << " " << grid[x][y] << endl;
                        if(i==x && j==y){
                            continue;
                        }
                        else{
                            if(grid[i][j]==grid[x][y]){
                                a = grid[i][j];
                                //break;
                            }
                        }
                    }
                }
                c += grid[i][j];
            }
        }
        
        b = b - (c-a);
        ans.push_back(a);
        ans.push_back(b);
        return ans;
    }
};