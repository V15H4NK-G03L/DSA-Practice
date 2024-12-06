#include <bits/stdc++.h>
using namespace std;

void alphaTriangle(int n) {
    // Write your code here.
    for(int i=0;i<n;i++){
        for(int j=n+1;j>n-i;j--){
            cout << (char)(j+63) << " ";
        }
        cout << endl;
    }
}