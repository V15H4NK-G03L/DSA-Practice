#include<stdio.h>
#include<iostream>

using namespace std;

int main(){
    int n,m,count=0,temp;
    string s;
    cin >> n;
    for(int i=0;i<n;i++){
        cin >> m;
        cin >> s;
        for(int j=m-1;j>=0;j--){
            temp = (int)s[j] - 48;
            //cout << "temp : " << temp << endl;
            if(temp!=0){
                if(j!=m-1){count++;}
                count += temp;
            }
        }
        cout << count << endl;
        count=0;
    }
    return 0;
}