class Solution {
public:
    
    static bool comp(pair<int,int>p1,pair<int,int>p2)
    {
        return p1.second>p2.second;
    }
    
    int earliestFullBloom(vector<int>& pt, vector<int>& gt) {
        int ans=0;
        int st=0;
        
        vector<pair<int,int>>vp;
        
        for(int i=0;i<pt.size();i++)
        {
            vp.push_back({pt[i],gt[i]});
        }
        sort(begin(vp),end(vp),comp);
        
        for(int i=0;i<vp.size();i++)
        {
            st+=vp[i].first;
            ans=max(ans,st+vp[i].second);
        }
        return ans;
    }
};