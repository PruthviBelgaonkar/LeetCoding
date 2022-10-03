class Solution {
public:
    int minCost(string s, vector<int>&cost) {
      int tc=0;
        for(int i=0;i<s.size()-1;i++)
        {
            if(s[i]==s[i+1])
            {
                tc=tc+min(cost[i],cost[i+1]);
                cost[i+1]=max(cost[i],cost[i+1]);
            }
        }
        return tc;
    }
};
