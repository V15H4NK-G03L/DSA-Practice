#include <bits/stdc++.h>
using namespace std;

bool checkArmstrong(int n){
	//Write your code here
	string str = to_string(n);
	int unit,ogn=n,check=0;
	for(int i=0;i<str.length();i++){
		unit=n%10;
		check += pow(unit,str.length());
		//cout << "check : " << check << endl;
		n = n/10;
	}

	if(check==ogn){return true;}
	else{return false;}
}