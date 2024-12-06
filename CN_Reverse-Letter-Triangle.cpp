#include <bits/stdc++.h>
using namespace std;

void nLetterTriangle(int n) {
    // Write your code here.
    for(int i=0;i<n;i++){
        int k=0;
        for(int j=n;j>i;j--){
            cout << (char)(k+65) << " ";
            k++;
        }
        cout << endl;
    }
}