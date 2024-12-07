#include <bits/stdc++.h>
using namespace std;

void symmetry(int n) {
    // Write your code here.
    for(int i=0;i<n;i++){
        for(int k=n-1-i;k>=0;k--){
            cout << "* ";
        }
        for(int l=0;l<2*i;l++){
            cout << "  ";
        }
        for(int m=n-1-i;m>=0;m--){
            cout << "* ";
        }
        cout << endl;
    }

    for(int j=0;j<n;j++){
        for(int o=0;o<j+1;o++){
            cout << "* ";
        }
        for(int p=2*(n-1);p>=0;p--){
            cout << "  ";
        }
        for(int o=0;o<j+1;o++){
            cout << "* ";
        }
        cout << endl;
    }
}