#include <bits/stdc++.h>
using namespace std;

void nNumberTriangle(int n) {
    // Write your code here.
    int counter = 1;
    for(int i=0;i<n;i++){
        for(int j=0;j<i+1;j++){
            cout << counter << " ";
            counter++;
        }       
        cout << endl; 
    }
}