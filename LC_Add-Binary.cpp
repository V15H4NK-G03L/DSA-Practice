#include <iostream>
using namespace std;

class Solution {
public:
    string addBinary(string a, string b) {
        string temp;
        int missing= max(b.length(),a.length()) - min(b.length(),a.length());
        for(int l=0;l<missing;l++){
            temp.push_back('0');
        }

        if(b.length()>a.length()){a=temp+a;}
        else if(a.length()>b.length()){b=temp+b;}

        b.insert(b.begin(),'0');
        a.insert(a.begin(),'0');

        //cout << "A : " << a << " B : " << b << endl; 
        
        temp.clear();
        temp = a;
        int carry=0;
        for(int i=b.length()-1;i>=0;i--){
            //cout << "A[i] : " << a[i] << " B[i] : " << b[i] << endl; 
            if(a[i]=='1' && b[i]=='1'){
                //cout << "here" << endl;
                if(carry==1){temp[i]='1';}
                else{temp[i]='0';}
                carry=1;
            }
            else if(b[i]!=a[i]){
                if(carry==1){
                    temp[i]='0';
                    carry=1;
                }
                else{
                    temp[i]='1';
                }
            }
            else{
                if(carry==1){
                    temp[i]='1';
                    carry=0;
                }
            }
            //cout << "Ans - Temp[i] : " << temp[i] << endl; 
        }

        if(temp[0]=='0'){temp.erase(0,1);}

        return temp;

    }
};