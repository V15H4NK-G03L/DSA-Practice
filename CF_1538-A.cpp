#include<stdio.h>
#include<iostream>
#include <climits>

using namespace std;

int main(){
    int n,t,a=INT_MIN,b=INT_MAX,pos1,pos2;
    cin >> n;
    for(int i=0;i<n;i++){
        cin >> t;
        int arr[t];
        for(int j=0;j<t;j++){
            cin >> arr[j];
            //cout << "arr : " << arr[j] << endl;
            if(arr[j]>a){
                a=arr[j];
                pos1=j;
            }
            if(arr[j]<b){
                b=arr[j];
                pos2=j;
            }
        }
        int minLeft = max(pos1,pos2) + 1;
        int minRight = max(t-pos1-1,t-pos2-1) + 1;
        int oneSide = min(minLeft,minRight);
        pos1 = min(pos1,t-pos1-1) + 1;
        pos2 = min(pos2,t-pos2-1) + 1;
        int sum = pos1+pos2;
        int ans = min(sum,oneSide);
        if(ans==1){ans+=1;}
        cout << ans << endl;

        a=INT_MIN;
        b=INT_MAX;
    }
    return 0;
}