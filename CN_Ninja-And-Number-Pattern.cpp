#include <bits/stdc++.h>
using namespace std;

void getNumberPattern(int n) {
    // Write your code here.
    for(int i=0;i<(n*2)-1;i++){
        for(int j=0;j<(n*2)-1;j++){
            cout << n-min(min(i,j),min((2*n-2-i),(2*n-2-j)));
        }
        cout << endl;
    }
}