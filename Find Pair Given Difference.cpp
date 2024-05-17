//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;

class Array {
  public:
    template <class T>
    static void input(vector<T> &A, int n) {
        for (int i = 0; i < n; i++) {
            scanf("%d ", &A[i]);
        }
    }

    template <class T>
    static void print(vector<T> &A) {
        for (int i = 0; i < A.size(); i++) {
            cout << A[i] << " ";
        }
        cout << endl;
    }
};


// } Driver Code Ends

class Solution {
  public:
    int findPair(int n, int x, vector<int> &arr) {
        // code here
        if(x == 0){
        unordered_map<int,int> hash;
        for(auto & nums : arr){
            hash[nums] += 1;
        }
        for(auto & num : hash){
            if(num.second > 1)
             return 1;
        }
        return -1;
        }
        sort(arr.begin(),arr.end());
        int l = 0;
        int r = 1;
        while(r<n){
            int diff = abs(arr[r] - arr[l]);
            if(diff == x)
             return 1;
            else if(diff < x)
             r += 1;
            else
             l += 1;
        }
        return -1;
    }
};


//{ Driver Code Starts.

int main() {
    int t;
    scanf("%d ", &t);
    while (t--) {

        int n;
        scanf("%d", &n);

        int x;
        scanf("%d", &x);

        vector<int> arr(n);
        Array::input(arr, n);

        Solution obj;
        int res = obj.findPair(n, x, arr);

        cout << res << endl;
    }
}

// } Driver Code Ends
