/* O(N*LOGN)*/
class Solution {
public:
    bool containsDuplicate(vector<int>& nums) {
        
     sort(nums.begin(),nums.end());
     for(int i=0;i<nums.size()-1;i++)
     {
         if(nums[i]==nums[i+1])
           return true;

     }
     return false;
    }
};



/*O(N)*/
class Solution {
public:
    bool containsDuplicate(vector<int>& nums)
   {
      unordered_set<int> a;
      for(int i=0;i<nums.size();i++)
      {
           a.insert(nums[i]);
      }
      if(a.size() != nums.size())
        return true;
      else
        return false;
    }
};
