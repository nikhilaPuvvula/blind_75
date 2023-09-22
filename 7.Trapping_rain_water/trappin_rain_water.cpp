class Solution {
public:
    int trap(vector<int>& height) 
    {
        int pre[height.size()];
        int suf[height.size()];
        int m = INT_MIN;
        int p = INT_MIN;
        for(int i=0;i<height.size();i++)
        {
            if(height[i]>m)
              m=height[i];
            pre[i]=m;
        }
        for(int i=height.size()-1;i>=0;i--)
        {
            if(height[i]>p)
              p=height[i];
            suf[i]=p;
        }
        long long k =0;
        for(int i = 0;i<height.size();i++)
        {
           k+=min(pre[i],suf[i])-height[i]; 
        }
        return k;
    }
};
