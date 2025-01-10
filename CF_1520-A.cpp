#include<stdio.h>
#include<iostream>

using namespace std;

int main(){
    int n,c,temp;
    string s;
    bool flag=true;
    cin >> n;
    while(n--){
        cin >> c;
        cin >> s;
        for(int i=1;i<c;i++){
            temp=i-1;
            if(s[i]!=s[temp]){
                for(int j=i+1;j<c;j++){
                    if(s[j]==s[temp]){
                        flag = false;
                        break;
                    }
                }
            }
        }
        if(flag==true){cout << "YES" << endl;}
        else{cout << "NO" << endl;}

        flag=true;
    }
    return 0;
}