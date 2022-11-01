class Solution {
public:
    
    int dfs(int i,int j,vector<vector<int>>& g)
    {
        if(i>=g.size())
        {
            return j;
        }
        if(g[i][j]==1 and j+1<g[0].size() and g[i][j+1]==1)
        {
            return dfs(i+1,j+1,g);
        }
        else if(g[i][j]==-1 and j-1>=0 and g[i][j-1]==-1)
        {
            return dfs(i+1,j-1,g);
        }
        else if(g[i][j]==1 and j+1>=g[0].size())
        {
            return -1;
        }
        else
        {
            return -1;
        }  
    }
    
    vector<int> findBall(vector<vector<int>>& g) {
        int r=g.size();
        int c=g[0].size();
        vector<int>ans(c);
        for(int j=0;j<c;j++)
        {
            ans[j]=dfs(0,j,g);
        }
        return ans;
    }
};