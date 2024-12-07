#include <bits/stdc++.h>
using namespace std;

void symmetry(int n) {
    // Write your code here.
    for(int i=0;i<n;i++){
        for(int k=0;k<i+1;k++){
            cout << "* ";
        }
        for(int l=0;l<2*(n-1-i);l++){
            cout << "  ";
        }
        for(int m=0;m<i+1;m++){
            cout << "* ";
        }
        cout << endl;
    }

    for(int j=0;j<n-1;j++){
        for(int o=n-j-2;o>=0;o--){
            cout << "* ";
        }
        for(int p=0;p<2*(j+1);p++){
            cout << "  ";
        }
        for(int q=n-j-2;q>=0;q--){
            cout << "* ";
        }
        cout << endl;
    }
}