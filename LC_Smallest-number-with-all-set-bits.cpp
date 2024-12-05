#include <limits.h>
#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    int smallestNumber(int n) {
        vector<int> arr;
        arr.push_back(1);
        arr.push_back(3);
        for(int i=0;i<10;i++){
            int m = ((arr[i+1]-arr[i])*2)+arr[i+1];
            //cout << "m : " << m << endl;
            arr.push_back(m);
            //cout << "arr of i : " << arr[i] << endl;
        }

        for(int j=0;j<9;j++){
            //cout << "arr of j : " << arr[j] << endl;
            if(arr[j]==n){
                return arr[j];
                break;
            }
            else if(n>arr[j] && n<=arr[j+1]){
                return arr[j+1];
                break;
            }
        }
        return n;
    }
};