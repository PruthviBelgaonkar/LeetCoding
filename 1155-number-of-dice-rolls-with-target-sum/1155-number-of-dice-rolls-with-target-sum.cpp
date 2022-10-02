class Solution {
public:
    int m=1000000007;
    int numRollsToTarget(int n, int k, int tar) {
        vector<vector<int>>t(n+1,vector<int>(tar+1,0));
        t[0][0]=1;
        
        for(int i=1;i<=n;i++)
        {
            for(int j=1;j<=tar;j++)
            {
                for(int l=1;l<=k;l++)
                {
                    if(l<=j)
                    {
                        t[i][j]=((t[i][j]%m)+(t[i-1][j-l]%m))%m;
                    }
                }
            }
        }
        return t[n][tar];
    }
};