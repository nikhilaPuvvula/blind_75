class Solution {
public:
    int f(int i,vector<int>&dp)
    {
        if(i==0 || i==1)
          return 1;
        if(dp[i]!=-1)
          return dp[i];
        int o = f(i-1,dp);
        int t = f(i-2,dp);
        return dp[i]=o+t;
    }
    int climbStairs(int n) 
    {
        vector<int> dp(n+1,-1);
        return f(n,dp);
    }
};