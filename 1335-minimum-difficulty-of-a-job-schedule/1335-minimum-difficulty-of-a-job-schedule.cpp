class Solution {
public:
    int solve(int d,int idx,vector<int>&a,vector<vector<int>>&dp)
    {
        if(d==1)
        {
            int mx=0;
            while(idx<a.size())
            {
                mx=max(mx,a[idx++]);
            }
            return mx;
        }
        
        if(dp[d][idx]!=-1)return dp[d][idx];
        int res=INT_MAX;
        int mx=0;
        for(int i=idx;i<=a.size()-d;i++)
        {
            mx=max(mx,a[i]);
            res=min(res,mx+solve(d-1,i+1,a,dp));
        }
        return dp[d][idx]=res;
    }
    int minDifficulty(vector<int>&a, int d) {
        if(d>a.size())return -1;
        vector<vector<int>>dp(d+1,vector<int>(a.size(),-1));
        return solve(d,0,a,dp);
    }
};