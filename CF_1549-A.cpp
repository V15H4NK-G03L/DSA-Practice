#include<stdio.h>
#include<iostream>

using namespace std;

int main(){
    int n,t,ans1=-1,ans2=-1;
    cin >> n;
    while(n--){
        cin >> t;
        if(t%2==0){
            cout << "2 " << t << endl;
        }
        else{
            cout << "2 " << t-1 << endl;
        }
    }
    return 0;
}