class Solution {
public:
    
    string solve(string &s,int &i)
    {
        string res="";
        while(i<s.size() and s[i]!=']')
        {
            if(isdigit(s[i]))
            {
                int cnt=0;
                while(i<s.size() and isdigit(s[i]))
                {
                    cnt=cnt*10+s[i++]-'0';
                }
                i++;
                string r=solve(s,i);
                while(cnt-- >0)
                {
                    res+=r;
                }
                i++;
            }
            else
            {
                res+=s[i++];
            }
        }
        return res;
    }
    
    
    string decodeString(string s) {
        int i=0;
        return solve(s,i);
    }
};