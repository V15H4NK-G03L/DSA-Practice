//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
class Solution {
  public:
    vector<int> lcmAndGcd(int a, int b) {
        // code here
        int lower,higher;
        if(a>b){lower=b;higher=a;}
        else{lower=a;higher=b;}
        int lcm=higher;
        //cout << "lcm : " << lcm << endl;
        while(lcm%lower!=0 && lcm<=(a*b)){
            lcm+=higher;
            //cout << "lcm1 : " << lcm << endl;
        }
        ///cout << "lcm2 : " << lcm << endl;
        int hcf=(a*b)/lcm;
        vector<int> ans = {lcm, hcf};
        return ans;
    }
};

//{ Driver Code Starts.
int main() {
    int t;
    cin >> t;
    cin.ignore();
    while (t--) {
        int A, B;

        cin >> A >> B;

        Solution ob;
        vector<int> ans = ob.lcmAndGcd(A, B);
        cout << ans[0] << " " << ans[1] << endl;
        cout << "~" << endl;
    }
    return 0;
}

// } Driver Code Ends