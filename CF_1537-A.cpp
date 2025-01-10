#include<stdio.h>
#include<iostream>

using namespace std;

int main(){
    int n,c,x,sum=0,count=0;
    cin >> n;
    while(n--){
        cin >> c;
        while(c--){
            cin >> x;
            sum += x;
            count++;
        }
        
        if(sum<0 || sum==0 || sum<count){cout << "1" << endl;}
        else if(sum==count){cout << "0" << endl;}
        else{
        cout << sum-count << endl;
        }

        sum=0;
        count=0;
    }
    return 0;
}