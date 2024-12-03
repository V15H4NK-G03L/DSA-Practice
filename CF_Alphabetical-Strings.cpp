#include <limits.h>
//#include <iostream>
#include <bits/stdc++.h>
using namespace std;

int main(){
    int t;
    bool flag=true;
    vector<int> arr;
    string s;
    cin >> t;
    for(int i=0;i<t;i++){
        cin >> s;
        string n;

        for(int k=0;k<s.length();k++){
            arr.push_back((int)s[k]-96);
            //cout << "Arr value : " << arr[k] << endl;
        }

        sort(arr.begin(),arr.end());
        //cout << "String n : " << arr[arr.size()-1] << arr.size() << endl;

        if(arr[arr.size()-1]!=arr.size()){
            flag=false;
            //cout << "Here we go! " << arr.size() << endl;
        }
        else{
            for(int j=0;j<arr.size();j++){
                arr[arr.size()]=arr[arr.size()-1]+1;
                if(arr[j+1]-arr[j]!=1 || arr[j]==arr[j+1]){
                    flag=false;
                }
                else if(s.find(n+(char)(arr[j]+96))!=string::npos){
                    n.push_back((char)(arr[j]+96));
                    //cout << "if" << endl;
                }
                else if(s.find((char)(arr[j]+96)+n)!=string::npos){
                    n.insert(0,1,(char)(arr[j]+96));
                    //cout << "else if" << endl;
                }
                else{
                    flag=false;
                    //cout << "else" << endl;
                    break;
                }
                //cout << "N : "<< n << endl;
            } 
        }
        if(flag==true){cout << "YES" << endl;}
        else{cout << "NO" << endl;}

        flag=true;
        n.clear();
        arr.clear();
    }

    return 0;
}