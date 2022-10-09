class Solution {
public:
    vector<int> twoSum(vector<int>& a, int x) {
        int l=0;
        int r=a.size()-1;
        while(l<r)
        {
            if(a[l]+a[r]==x)
            {
                return {l+1,r+1};
            }
            else if(a[l]+a[r]>x)
            {
                r--;
            }
            else
            {
                l++;
            }
        }
        return {};
    }
};