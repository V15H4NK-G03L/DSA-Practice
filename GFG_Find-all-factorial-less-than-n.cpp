//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
// User function Template for C++
class Solution {
  public:
  
    vector<long long> factorialNumbers(long long n) {
        // Write Your Code here
        long long fact=1;
        long long count=0;
        vector<long long> arr;
        while(fact<=n){
            count++;
            fact *= count;
            //cout << fact << endl;
            arr.push_back(fact);
        }
        int m=arr.size()-1;
        if(arr[m]>n){arr.pop_back();}
        return arr;
    }
};

//{ Driver Code Starts.
int main() {
    int t;
    cin >> t;
    while (t--) {
        long long N;
        cin >> N;
        Solution ob;
        vector<long long> ans = ob.factorialNumbers(N);
        for (auto num : ans) {
            cout << num << " ";
        }
        cout << endl;
        cout << "~" << endl;
    }
    return 0;
}
// } Driver Code Ends