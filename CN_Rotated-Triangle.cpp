#include <bits/stdc++.h>
using namespace std;

void nStarTriangle(int n) {
    // Write your code here.
    for(int i=0;i<n;i++){
        for(int j=0;j<i+1;j++){
            cout << "*";
        }
        cout << endl;
    }

    for(int i=0;i<n;i++){
        for(int j=i;j<n-1;j++){
            cout << "*";
        }
        cout << endl;
    }

}