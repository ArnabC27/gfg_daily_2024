//Driver Code Starts
#include<bits/stdc++.h>
using namespace std;
//Driver Code Ends

class Solution {
public:
    int findPeakElement(vector<int>& a) 
    {
        // Code here.
        int low=0,high=a.size()-1,mid=-1,n=a.size();
        bool temp1=false,temp2=false,temp3=false;
        while(low<=high){
            mid=(low+high)/2;
            temp1 = mid!=n-1?a[mid]>a[mid+1]:true;
            temp2 = mid!=0?a[mid]>a[mid-1]:true;
            temp3 = mid!=0?a[mid]<a[mid-1]:true;
            if(temp1 && temp2){
                break;
            }
            else if(temp1 && temp3){
                high=mid-1;
            }
            else low=mid+1;
        }
        return a[mid];
    }
};



//Driver Code Starts

int main(){
    int T;
    cin >> T;
    while(T--)
    {
    	int n;
    	cin >> n;
    	vector<int>a(n);
    	for(int i = 0; i < n; i++)
    		cin>>a[i];
    	Solution ob;
    	int ans = ob.findPeakElement(a);
    	cout << ans << "\n";
    }
	return 0;
}


//Driver Code Ends