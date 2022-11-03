class Solution {
public:
    int longestPalindrome(vector<string>&s) {
        map<string,int>mp;
        int ans=0;
        for(auto it:s)
        {
            string y=it;
            reverse(begin(y),end(y));
            if(mp.find(y)!=mp.end())
            {
                ans+=4;
                mp[y]--;
                if(mp[y]==0)
                {
                    mp.erase(y);
                }
            }
            else
            {
                mp[it]++;
            }
        }
        for(auto it:mp)
        {
            if(it.first[0]==it.first[1])
            {
                ans+=2;
                break;
            }
        }
        return ans;
    }
};