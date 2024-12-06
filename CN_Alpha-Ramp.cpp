#include <bits/stdc++.h>
using namespace std;

void alphaRamp(int n) {
    // Write your code here.
    for(int i=0;i<n;i++){
        for(int j=0;j<i+1;j++){
            cout << (char)(i+65) << " ";
        }
        cout << endl;
    }
}
