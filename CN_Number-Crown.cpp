#include <bits/stdc++.h>
using namespace std;

void numberCrown(int n) {
    // Write your code here.
    for(int i=0;i<n;i++){
        for(int j=0;j<i+1;j++){
            cout << j+1 << " ";
        }
        for(int k=0;k<(2*n)-(2*(i+1));k++){
            cout << " ";
        }
        for(int j=i+1;j>0;j--){
            cout << j << " ";
        }
        cout << endl;
    }
}