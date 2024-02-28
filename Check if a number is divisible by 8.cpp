//{ Driver Code Starts

#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends

class Solution{
    public:
    int DivisibleByEight(string s){
        //code here
        int num = 0;
        int i = s.length()-3 >= 0 ? s.length()-3 : 0;
        
        while(i < s.length()) {
            num = num * 10 + (s[i] - '0');
            i++;
        }
        return num % 8 == 0 ? 1 : -1;
    }
};

//{ Driver Code Starts.
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        string S;
        cin>>S;
        Solution ob;
        cout<<ob.DivisibleByEight(S)<<"\n";
    }
}
// } Driver Code Ends
