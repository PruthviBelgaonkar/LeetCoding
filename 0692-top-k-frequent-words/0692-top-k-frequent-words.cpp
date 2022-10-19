struct opr
{
    bool operator() (pair<int,string>a,pair<int,string>b)
    {
        if(a.first==b.first)return a.second>b.second;
        else return a.first<b.first;
    }   
};

class Solution {
public:
    
    vector<string> topKFrequent(vector<string>& w, int k) {
        vector<string>ans;
        unordered_map<string,int>mp;
        for(int i=0;i<w.size();i++)
        {
            mp[w[i]]++;
        }
        priority_queue<pair<int,string>,vector<pair<int,string>>,opr>q;
        for(auto p:mp)
        {
            q.push({p.second,p.first});
        }
        while(k--)
        {
            ans.push_back(q.top().second);
            q.pop();
        }
        return ans;
    }
};
