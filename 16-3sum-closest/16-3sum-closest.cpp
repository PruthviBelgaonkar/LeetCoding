class Solution {
public:
    int threeSumClosest(vector<int>&a, int tar) {
        int n=a.size(),ans;
        int min=INT_MAX;
        sort(begin(a),end(a));
        for(int i=0;i<n-2;i++)
        {
            int l=i+1;
            int r=n-1;
            while(l<r)
            {
                int sum=a[i]+a[l]+a[r];
                if(abs(sum-tar)<min)
                {
                    min=abs(sum-tar);
                    ans=sum;
                }
                if(sum<tar)l++;
                else if(sum>tar)r--;
                else
                {
                    ans=sum;
                    i=n-2;
                    break;
                }
            }
        }
        return ans;
    }
};