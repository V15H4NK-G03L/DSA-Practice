#include<stdio.h>
#include<iostream>

using namespace std;

int main(){
    int n,c,a,b,temp;
    cin >> n;
    for(int i=0;i<n;i++){
        cin >> c;
        temp=c/3;
        if(c%3==0){
            a=temp;
            b=temp;
        }
        else if((temp)*1 + (temp+1)*2 == c){
            a = temp;
            b = temp + 1;
        }
        else if((temp)*2 + (temp+1)*1 == c){
            a = temp + 1;
            b = temp;
        }
        else if((temp)*1 + (temp-1)*2 == c){
            a = temp;
            b = temp - 1;
        }
        else{
            a = temp - 1;
            b = temp;
        }

        cout << a << " " << b << endl;
    }
    return 0;
}