#include <bits/stdc++.h>
using namespace std;

void reverseArray(vector<int> &arr , int m)
{
	vector<int> temp;
	for(int i=arr.size()-1;i>m;i--){
		//cout << "I : " << i << endl;
		temp.push_back(arr[i]);
		arr.erase(arr.begin()+i,arr.begin()+i+1);
	}
	arr.insert(arr.end(),temp.begin(),temp.end());
}