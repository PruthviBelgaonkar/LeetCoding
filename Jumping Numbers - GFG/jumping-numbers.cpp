//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends
class Solution {
  public:
    long long jumpingNums(long long x) {
        if(x<=9)return x;
        queue<int>q;
        for(int i=0;i<=9;i++)
        {
            q.push(i);
        }
        int ans=INT_MIN;
        while(q.size()>0)
        {
            int dig=q.front();
            q.pop();
            
            ans=max(ans,dig);
            int rem=dig%10;
            int n1=dig*10+rem-1;
            int n2=dig*10+rem+1;
            
            if(rem==0)
            {
                if(n2<=x)
                {
                    q.push(n2);
                }
            }
            else if(rem==9)
            {
                if(n1<=x)
                {
                    q.push(n1);
                }
            }
            else
            {
                if(n2<=x)
                {
                    q.push(n2);
                }
                if(n1<=x)
                {
                    q.push(n1);
                }
            }
        }
        return ans;
    }
};



//{ Driver Code Starts.
int main() {
    int t;
    cin >> t;
    while (t--) {
        long long X;
        
        cin>>X;

        Solution ob;
        cout << ob.jumpingNums(X) << endl;
    }
    return 0;
}
// } Driver Code Ends