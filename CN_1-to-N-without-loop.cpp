#include <bits/stdc++.h>
using namespace std;

int i=1;
vector<int> ans;
vector<int> printNos(int x) {
    // Write Your Code Here
    ans.push_back(i);
    i++;
    if(i<x+1){
        printNos(x);
    }
    return ans;
}