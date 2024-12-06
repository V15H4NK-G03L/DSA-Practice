#include <bits/stdc++.h>
using namespace std;

void alphaHill(int n) {
    // Write your code here.
    for(int i=0;i<n;i++){
        //cout << "I : " << i;
        for(int j=n-(i+1);j>0;j--){
            cout << "  ";
        }
        for(int k=0;k<i+1;k++){
            cout << (char)(k+65) << " ";
        }

        for(int l=i-1;l>=0;l--){
            cout << (char)(l+65) << " ";
        }


        cout << endl;
    }
}