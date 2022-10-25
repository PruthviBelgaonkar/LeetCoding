class Solution {
public:
    bool arrayStringsAreEqual(vector<string>&s1, vector<string>&s2) {
        string a="";
        string b="";
        for(auto it:s1)
        {
            a+=it;
        }
        for(auto it:s2)
        {
            b+=it;
        }
        if(a==b)return true;
        return false;
    }
};