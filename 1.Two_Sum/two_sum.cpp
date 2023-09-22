class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) 
    {
       vector<int> a;
       unordered_map<int,int> m;
       for(int i=0;i<nums.size();i++)
       {
           if(m.find(target-nums[i]) != m.end())
           {
               a.push_back(i);
               a.push_back(m[target-nums[i]]);
               return a;
           }
           else
           {
               m[nums[i]]=i;
           }
       }
       a.push_back(-1);
       return a;
    }
};