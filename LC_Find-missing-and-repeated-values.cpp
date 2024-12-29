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
        for(int q=1;q<(size(grid)*size(grid))+1;q++){
            b += q;
        }
        //cout << size(grid) << endl;
        for(int i=0;i<size(grid);i++){
            for(int j=0;j<size(grid);j++){
                for(int x=0;x<size(grid);x++){
                    for(int y=0;y<size(grid);y++){
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

//Accepted