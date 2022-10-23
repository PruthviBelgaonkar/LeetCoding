class Solution {
public:
    vector<int> findErrorNums(vector<int>&a) {
        unordered_map<int,int>mp;
        for(int i=0;i<a.size();i++)
        {
            mp[a[i]]++;
        }
        vector<int>v;
        for(int i=1;i<=a.size();i++)
        {
            if(mp[i]==2)
            {
                v.push_back(i);
            }
        }
        for(int i=1;i<=a.size();i++)
        {
            if(mp[i]==0)
            {
                v.push_back(i);
            }
        }
        return v;
    }
};