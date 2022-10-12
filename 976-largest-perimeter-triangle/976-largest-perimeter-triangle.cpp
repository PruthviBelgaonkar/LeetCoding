class Solution {
public:
    int largestPerimeter(vector<int>&a) {
        sort(begin(a),end(a),greater<int>());
        int n=a.size();
        int mx=0;
        for(int i=0;i<n-2;i++)
        {
            if(a[i]<a[i+1]+a[i+2])
            {
                mx=max(mx,a[i]+a[i+1]+a[i+2]);
            }
        }
        if(mx)return mx;
        return 0;
    }
};