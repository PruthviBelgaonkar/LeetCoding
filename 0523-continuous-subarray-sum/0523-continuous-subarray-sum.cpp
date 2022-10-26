class Solution {
public:
    bool checkSubarraySum(vector<int>&a, int k) {
        if(a.size()<2)return false;
        unordered_map<int,int>mp;
        mp[0]=-1;
        int rs=0;
        for(int i=0;i<a.size();i++)
        {
            rs+=a[i];
            if(k!=0)
            {
                rs=rs%k;
            }
            if(mp.find(rs)!=mp.end())
            {
                if(i-mp[rs]>1)
                {
                    return true;
                }
            }
            else
            {
                mp[rs]=i;
            }
        }
        return false;
    }
};
