//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
class Solution {
  public:
    // Function to count the number of digits in n that evenly divide n
    int evenlyDivides(int n) {
        // code here
        int unit= 11;
        int remaining = 1;
        int answer= 0;
        int ogn = n;
        string str = to_string(n);
        //cout << "Code start" << endl;
        for(int i=0;i<str.length();i++){
            int remaining = n/10;
            unit = n-(remaining*10);
            //cout << "remaining : " << remaining << " unit : " << unit << endl;
            if(unit==0){
                //cout << "skip" << endl;
                n = remaining;
                continue;
            }
            else if(ogn%unit==0){
                answer += 1;
                //cout << "answer : " << answer << endl;
            }
            //cout << "n : " << n << endl;
            n = remaining;
        }
        return answer;
        // int answer = 2;
        // return answer;
    }
};

//{ Driver Code Starts.
int main() {
    int t;
    cin >> t;
    //cout << "t : " << t << endl;
    while (t--) {
        int N;
        cin >> N;
        Solution ob;
        cout << ob.evenlyDivides(N) << endl;
        cout << "Hello" << endl;
        cout << "~"
             << "\n";
    }
    return 0;
}
// } Driver Code Ends