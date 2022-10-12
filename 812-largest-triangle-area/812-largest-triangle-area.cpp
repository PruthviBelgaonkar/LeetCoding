class Solution {
public:
    double largestTriangleArea(vector<vector<int>>& p) {
        int n=p.size();
        
        double ma=0;
        double d1,d2,d3,area,s=0;
        for(int i=0;i<n;i++)
        {
            for(int j=i+1;j<n;j++)
            {
                for(int k=j+1;k<n;k++)
                {
                    d1=sqrt((double)pow(p[i][0]-p[j][0],2)+pow(p[i][1]-p[j][1],2));
                    d2=sqrt((double)pow(p[j][0]-p[k][0],2)+pow(p[j][1]-p[k][1],2));
                    d3=sqrt((double)pow(p[i][0]-p[k][0],2)+pow(p[i][1]-p[k][1],2));
                    s=(d1+d2+d3)/2.0000;
                    area=(double)sqrt(s*(s-d1)*(s-d2)*(s-d3));
                    if(area>ma)
                    {
                        ma=area;
                    }
                }
            }
        }
        return ma;
    }
};
