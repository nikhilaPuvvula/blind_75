/*Using binary serach - O(LOGN)*/
class Solution {
public:
    int search(vector<int>& nums, int target) {
       int i=0;
       int j=nums.size()-1;
       while(i<=j)
       {   
           int mid = (i+j)/2;
           if(nums[mid]==target)
           {
               return mid;
           }
           else if(nums[mid]<nums[j])
           {
               if(nums[mid]<=target && nums[j]>=target)
                 i=mid+1;
               else
                 j=mid-1;
           }
           else
           {
               if(nums[mid]>=target && nums[i]<=target)
                 j=mid-1;
               else
                 i = mid+1;
           }
       }
       return -1;
    }
};

/*USING brute force(linear serach) - O(N)*/

class Solution {
public:
    int search(vector<int>& nums, int target) {

       for(int i=0;i<nums.size();i++)
       {
           if(nums[i]==target)
             return i;
       }
       return -1;
    }
};

