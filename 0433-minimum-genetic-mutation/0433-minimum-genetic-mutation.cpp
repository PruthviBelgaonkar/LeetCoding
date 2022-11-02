class Solution {
public:
    int minMutation(string start, string end, vector<string>& bank) {
        queue<string>q;
        unordered_set<string>vis;
        
        q.push(start);
        vis.insert(start);
        
        int c=0;
        while(!q.empty())
        {
            int n=q.size();
            for(int i=0;i<n;i++)
            {
                string node=q.front();
                q.pop();
                if(node==end)return c;
                
                for(char ch: "ACGT")
                {
                    for(int j=0;j<node.size();j++)
                    {
                        string adj=node;
                        adj[j]=ch;
                        if(!vis.count(adj) and find(bank.begin(),bank.end(),adj)!=bank.end())
                        {
                            q.push(adj);
                            vis.insert(adj);
                        }
                    }
                }
            }
            c++;
        }
        return -1;
    }
};