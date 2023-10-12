class Solution {
public:
    int f(int n)
    {
        int count=0;
        while(n)
        {
            n=n&(n-1);
            count++;
        }
        return count;
    }
    vector<int> countBits(int n) 
    {
        vector<int> a;
        for(int i=0;i<n+1;i++)
        {
            int k = f(i);
            a.push_back(k);
        }
        return a;
    }

};