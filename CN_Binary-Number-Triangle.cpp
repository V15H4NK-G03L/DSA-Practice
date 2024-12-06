#include <bits/stdc++.h>
using namespace std;

void nBinaryTriangle(int n) {
    // Write your code here.
    for(int i=0;i<n;i++){
        for(int j=0;j<i+1;j++){
            if((i+j)%2==0){
                cout << "1 ";
            }
            else{cout << "0 ";}
        }
        cout << endl;
    }
}