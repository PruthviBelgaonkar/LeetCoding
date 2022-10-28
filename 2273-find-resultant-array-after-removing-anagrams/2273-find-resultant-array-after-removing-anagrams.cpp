class Solution {
public:
    vector<string> removeAnagrams(vector<string>&s) {
        for(int i=1;i<s.size();i++)
        {
            string x=s[i];
            sort(begin(x),end(x));
            string y=s[i-1];
            sort(begin(y),end(y));
            if(x==y)
            {
                s.erase(s.begin()+i);
                i--;
            }
        }
        return s;
    }
};
