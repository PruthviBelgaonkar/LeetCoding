//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends
class Solution{

  public:
	int minDifference(int a[], int n)  { 
	    int s=0;
	    for(int i=0;i<n;i++)
	    {
	        s+=a[i];
	    }
	    bool t[n+1][s+1];
	    for(int i=1;i<s+1;i++)
	    {
	        t[0][i]=false;
	    }
	    for(int i=0;i<n+1;i++)
	    {
	        t[i][0]=true;
	    }
	    for(int i=1;i<n+1;i++)
	    {
	        for(int j=1;j<s+1;j++)
	        {
	            if(a[i-1]<=j)
	            {
	                t[i][j]=t[i-1][j] or t[i-1][j-a[i-1]];
	            }
	            else
	            {
	                t[i][j]=t[i-1][j];
	            }
	        }
	    }
	    int diff=INT_MAX;
	    for(int j=s/2;j>=0;j--)
	    {
	        if(t[n][j]==true)
	        {
	            diff=s-2*j;
	            break;
	        }
	    }
	    return diff;
	} 
};


//{ Driver Code Starts.
int main() 
{
   
   
   	int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;

        int a[n];
        for(int i = 0; i < n; i++)
        	cin >> a[i];

       

	    Solution ob;
	    cout << ob.minDifference(a, n) << "\n";
	     
    }
    return 0;
}
// } Driver Code Ends